/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/config/ConfigServiceClient.h>
#include <aws/config/ConfigServiceEndpoint.h>
#include <aws/config/ConfigServiceErrorMarshaller.h>
#include <aws/config/model/BatchGetAggregateResourceConfigRequest.h>
#include <aws/config/model/BatchGetResourceConfigRequest.h>
#include <aws/config/model/DeleteAggregationAuthorizationRequest.h>
#include <aws/config/model/DeleteConfigRuleRequest.h>
#include <aws/config/model/DeleteConfigurationAggregatorRequest.h>
#include <aws/config/model/DeleteConfigurationRecorderRequest.h>
#include <aws/config/model/DeleteDeliveryChannelRequest.h>
#include <aws/config/model/DeleteEvaluationResultsRequest.h>
#include <aws/config/model/DeleteOrganizationConfigRuleRequest.h>
#include <aws/config/model/DeletePendingAggregationRequestRequest.h>
#include <aws/config/model/DeleteRemediationConfigurationRequest.h>
#include <aws/config/model/DeleteRetentionConfigurationRequest.h>
#include <aws/config/model/DeliverConfigSnapshotRequest.h>
#include <aws/config/model/DescribeAggregateComplianceByConfigRulesRequest.h>
#include <aws/config/model/DescribeAggregationAuthorizationsRequest.h>
#include <aws/config/model/DescribeComplianceByConfigRuleRequest.h>
#include <aws/config/model/DescribeComplianceByResourceRequest.h>
#include <aws/config/model/DescribeConfigRuleEvaluationStatusRequest.h>
#include <aws/config/model/DescribeConfigRulesRequest.h>
#include <aws/config/model/DescribeConfigurationAggregatorSourcesStatusRequest.h>
#include <aws/config/model/DescribeConfigurationAggregatorsRequest.h>
#include <aws/config/model/DescribeConfigurationRecorderStatusRequest.h>
#include <aws/config/model/DescribeConfigurationRecordersRequest.h>
#include <aws/config/model/DescribeDeliveryChannelStatusRequest.h>
#include <aws/config/model/DescribeDeliveryChannelsRequest.h>
#include <aws/config/model/DescribeOrganizationConfigRuleStatusesRequest.h>
#include <aws/config/model/DescribeOrganizationConfigRulesRequest.h>
#include <aws/config/model/DescribePendingAggregationRequestsRequest.h>
#include <aws/config/model/DescribeRemediationConfigurationsRequest.h>
#include <aws/config/model/DescribeRemediationExecutionStatusRequest.h>
#include <aws/config/model/DescribeRetentionConfigurationsRequest.h>
#include <aws/config/model/GetAggregateComplianceDetailsByConfigRuleRequest.h>
#include <aws/config/model/GetAggregateConfigRuleComplianceSummaryRequest.h>
#include <aws/config/model/GetAggregateDiscoveredResourceCountsRequest.h>
#include <aws/config/model/GetAggregateResourceConfigRequest.h>
#include <aws/config/model/GetComplianceDetailsByConfigRuleRequest.h>
#include <aws/config/model/GetComplianceDetailsByResourceRequest.h>
#include <aws/config/model/GetComplianceSummaryByResourceTypeRequest.h>
#include <aws/config/model/GetDiscoveredResourceCountsRequest.h>
#include <aws/config/model/GetOrganizationConfigRuleDetailedStatusRequest.h>
#include <aws/config/model/GetResourceConfigHistoryRequest.h>
#include <aws/config/model/ListAggregateDiscoveredResourcesRequest.h>
#include <aws/config/model/ListDiscoveredResourcesRequest.h>
#include <aws/config/model/ListTagsForResourceRequest.h>
#include <aws/config/model/PutAggregationAuthorizationRequest.h>
#include <aws/config/model/PutConfigRuleRequest.h>
#include <aws/config/model/PutConfigurationAggregatorRequest.h>
#include <aws/config/model/PutConfigurationRecorderRequest.h>
#include <aws/config/model/PutDeliveryChannelRequest.h>
#include <aws/config/model/PutEvaluationsRequest.h>
#include <aws/config/model/PutOrganizationConfigRuleRequest.h>
#include <aws/config/model/PutRemediationConfigurationsRequest.h>
#include <aws/config/model/PutRetentionConfigurationRequest.h>
#include <aws/config/model/SelectResourceConfigRequest.h>
#include <aws/config/model/StartConfigRulesEvaluationRequest.h>
#include <aws/config/model/StartConfigurationRecorderRequest.h>
#include <aws/config/model/StartRemediationExecutionRequest.h>
#include <aws/config/model/StopConfigurationRecorderRequest.h>
#include <aws/config/model/TagResourceRequest.h>
#include <aws/config/model/UntagResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ConfigService;
using namespace Aws::ConfigService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "config";
static const char* ALLOCATION_TAG = "ConfigServiceClient";


ConfigServiceClient::ConfigServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ConfigServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConfigServiceClient::ConfigServiceClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ConfigServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConfigServiceClient::ConfigServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ConfigServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConfigServiceClient::~ConfigServiceClient()
{
}

void ConfigServiceClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ConfigServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ConfigServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

BatchGetAggregateResourceConfigOutcome ConfigServiceClient::BatchGetAggregateResourceConfig(const BatchGetAggregateResourceConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchGetAggregateResourceConfigOutcome(BatchGetAggregateResourceConfigResult(outcome.GetResult()));
  }
  else
  {
    return BatchGetAggregateResourceConfigOutcome(outcome.GetError());
  }
}

BatchGetAggregateResourceConfigOutcomeCallable ConfigServiceClient::BatchGetAggregateResourceConfigCallable(const BatchGetAggregateResourceConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetAggregateResourceConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetAggregateResourceConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::BatchGetAggregateResourceConfigAsync(const BatchGetAggregateResourceConfigRequest& request, const BatchGetAggregateResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetAggregateResourceConfigAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::BatchGetAggregateResourceConfigAsyncHelper(const BatchGetAggregateResourceConfigRequest& request, const BatchGetAggregateResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetAggregateResourceConfig(request), context);
}

BatchGetResourceConfigOutcome ConfigServiceClient::BatchGetResourceConfig(const BatchGetResourceConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchGetResourceConfigOutcome(BatchGetResourceConfigResult(outcome.GetResult()));
  }
  else
  {
    return BatchGetResourceConfigOutcome(outcome.GetError());
  }
}

BatchGetResourceConfigOutcomeCallable ConfigServiceClient::BatchGetResourceConfigCallable(const BatchGetResourceConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetResourceConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetResourceConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::BatchGetResourceConfigAsync(const BatchGetResourceConfigRequest& request, const BatchGetResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetResourceConfigAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::BatchGetResourceConfigAsyncHelper(const BatchGetResourceConfigRequest& request, const BatchGetResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetResourceConfig(request), context);
}

DeleteAggregationAuthorizationOutcome ConfigServiceClient::DeleteAggregationAuthorization(const DeleteAggregationAuthorizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteAggregationAuthorizationOutcome(NoResult());
  }
  else
  {
    return DeleteAggregationAuthorizationOutcome(outcome.GetError());
  }
}

DeleteAggregationAuthorizationOutcomeCallable ConfigServiceClient::DeleteAggregationAuthorizationCallable(const DeleteAggregationAuthorizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAggregationAuthorizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAggregationAuthorization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DeleteAggregationAuthorizationAsync(const DeleteAggregationAuthorizationRequest& request, const DeleteAggregationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAggregationAuthorizationAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DeleteAggregationAuthorizationAsyncHelper(const DeleteAggregationAuthorizationRequest& request, const DeleteAggregationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAggregationAuthorization(request), context);
}

DeleteConfigRuleOutcome ConfigServiceClient::DeleteConfigRule(const DeleteConfigRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteConfigRuleOutcome(NoResult());
  }
  else
  {
    return DeleteConfigRuleOutcome(outcome.GetError());
  }
}

DeleteConfigRuleOutcomeCallable ConfigServiceClient::DeleteConfigRuleCallable(const DeleteConfigRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfigRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DeleteConfigRuleAsync(const DeleteConfigRuleRequest& request, const DeleteConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConfigRuleAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DeleteConfigRuleAsyncHelper(const DeleteConfigRuleRequest& request, const DeleteConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConfigRule(request), context);
}

DeleteConfigurationAggregatorOutcome ConfigServiceClient::DeleteConfigurationAggregator(const DeleteConfigurationAggregatorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteConfigurationAggregatorOutcome(NoResult());
  }
  else
  {
    return DeleteConfigurationAggregatorOutcome(outcome.GetError());
  }
}

DeleteConfigurationAggregatorOutcomeCallable ConfigServiceClient::DeleteConfigurationAggregatorCallable(const DeleteConfigurationAggregatorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigurationAggregatorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfigurationAggregator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DeleteConfigurationAggregatorAsync(const DeleteConfigurationAggregatorRequest& request, const DeleteConfigurationAggregatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConfigurationAggregatorAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DeleteConfigurationAggregatorAsyncHelper(const DeleteConfigurationAggregatorRequest& request, const DeleteConfigurationAggregatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConfigurationAggregator(request), context);
}

DeleteConfigurationRecorderOutcome ConfigServiceClient::DeleteConfigurationRecorder(const DeleteConfigurationRecorderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteConfigurationRecorderOutcome(NoResult());
  }
  else
  {
    return DeleteConfigurationRecorderOutcome(outcome.GetError());
  }
}

DeleteConfigurationRecorderOutcomeCallable ConfigServiceClient::DeleteConfigurationRecorderCallable(const DeleteConfigurationRecorderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigurationRecorderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfigurationRecorder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DeleteConfigurationRecorderAsync(const DeleteConfigurationRecorderRequest& request, const DeleteConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConfigurationRecorderAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DeleteConfigurationRecorderAsyncHelper(const DeleteConfigurationRecorderRequest& request, const DeleteConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConfigurationRecorder(request), context);
}

DeleteDeliveryChannelOutcome ConfigServiceClient::DeleteDeliveryChannel(const DeleteDeliveryChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDeliveryChannelOutcome(NoResult());
  }
  else
  {
    return DeleteDeliveryChannelOutcome(outcome.GetError());
  }
}

DeleteDeliveryChannelOutcomeCallable ConfigServiceClient::DeleteDeliveryChannelCallable(const DeleteDeliveryChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeliveryChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDeliveryChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DeleteDeliveryChannelAsync(const DeleteDeliveryChannelRequest& request, const DeleteDeliveryChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDeliveryChannelAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DeleteDeliveryChannelAsyncHelper(const DeleteDeliveryChannelRequest& request, const DeleteDeliveryChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDeliveryChannel(request), context);
}

DeleteEvaluationResultsOutcome ConfigServiceClient::DeleteEvaluationResults(const DeleteEvaluationResultsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteEvaluationResultsOutcome(DeleteEvaluationResultsResult(outcome.GetResult()));
  }
  else
  {
    return DeleteEvaluationResultsOutcome(outcome.GetError());
  }
}

DeleteEvaluationResultsOutcomeCallable ConfigServiceClient::DeleteEvaluationResultsCallable(const DeleteEvaluationResultsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEvaluationResultsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEvaluationResults(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DeleteEvaluationResultsAsync(const DeleteEvaluationResultsRequest& request, const DeleteEvaluationResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEvaluationResultsAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DeleteEvaluationResultsAsyncHelper(const DeleteEvaluationResultsRequest& request, const DeleteEvaluationResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEvaluationResults(request), context);
}

DeleteOrganizationConfigRuleOutcome ConfigServiceClient::DeleteOrganizationConfigRule(const DeleteOrganizationConfigRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteOrganizationConfigRuleOutcome(NoResult());
  }
  else
  {
    return DeleteOrganizationConfigRuleOutcome(outcome.GetError());
  }
}

DeleteOrganizationConfigRuleOutcomeCallable ConfigServiceClient::DeleteOrganizationConfigRuleCallable(const DeleteOrganizationConfigRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOrganizationConfigRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOrganizationConfigRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DeleteOrganizationConfigRuleAsync(const DeleteOrganizationConfigRuleRequest& request, const DeleteOrganizationConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteOrganizationConfigRuleAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DeleteOrganizationConfigRuleAsyncHelper(const DeleteOrganizationConfigRuleRequest& request, const DeleteOrganizationConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteOrganizationConfigRule(request), context);
}

DeletePendingAggregationRequestOutcome ConfigServiceClient::DeletePendingAggregationRequest(const DeletePendingAggregationRequestRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeletePendingAggregationRequestOutcome(NoResult());
  }
  else
  {
    return DeletePendingAggregationRequestOutcome(outcome.GetError());
  }
}

DeletePendingAggregationRequestOutcomeCallable ConfigServiceClient::DeletePendingAggregationRequestCallable(const DeletePendingAggregationRequestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePendingAggregationRequestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePendingAggregationRequest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DeletePendingAggregationRequestAsync(const DeletePendingAggregationRequestRequest& request, const DeletePendingAggregationRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePendingAggregationRequestAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DeletePendingAggregationRequestAsyncHelper(const DeletePendingAggregationRequestRequest& request, const DeletePendingAggregationRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePendingAggregationRequest(request), context);
}

DeleteRemediationConfigurationOutcome ConfigServiceClient::DeleteRemediationConfiguration(const DeleteRemediationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRemediationConfigurationOutcome(DeleteRemediationConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRemediationConfigurationOutcome(outcome.GetError());
  }
}

DeleteRemediationConfigurationOutcomeCallable ConfigServiceClient::DeleteRemediationConfigurationCallable(const DeleteRemediationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRemediationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRemediationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DeleteRemediationConfigurationAsync(const DeleteRemediationConfigurationRequest& request, const DeleteRemediationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRemediationConfigurationAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DeleteRemediationConfigurationAsyncHelper(const DeleteRemediationConfigurationRequest& request, const DeleteRemediationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRemediationConfiguration(request), context);
}

DeleteRetentionConfigurationOutcome ConfigServiceClient::DeleteRetentionConfiguration(const DeleteRetentionConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRetentionConfigurationOutcome(NoResult());
  }
  else
  {
    return DeleteRetentionConfigurationOutcome(outcome.GetError());
  }
}

DeleteRetentionConfigurationOutcomeCallable ConfigServiceClient::DeleteRetentionConfigurationCallable(const DeleteRetentionConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRetentionConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRetentionConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DeleteRetentionConfigurationAsync(const DeleteRetentionConfigurationRequest& request, const DeleteRetentionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRetentionConfigurationAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DeleteRetentionConfigurationAsyncHelper(const DeleteRetentionConfigurationRequest& request, const DeleteRetentionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRetentionConfiguration(request), context);
}

DeliverConfigSnapshotOutcome ConfigServiceClient::DeliverConfigSnapshot(const DeliverConfigSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeliverConfigSnapshotOutcome(DeliverConfigSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return DeliverConfigSnapshotOutcome(outcome.GetError());
  }
}

DeliverConfigSnapshotOutcomeCallable ConfigServiceClient::DeliverConfigSnapshotCallable(const DeliverConfigSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeliverConfigSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeliverConfigSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DeliverConfigSnapshotAsync(const DeliverConfigSnapshotRequest& request, const DeliverConfigSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeliverConfigSnapshotAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DeliverConfigSnapshotAsyncHelper(const DeliverConfigSnapshotRequest& request, const DeliverConfigSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeliverConfigSnapshot(request), context);
}

DescribeAggregateComplianceByConfigRulesOutcome ConfigServiceClient::DescribeAggregateComplianceByConfigRules(const DescribeAggregateComplianceByConfigRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeAggregateComplianceByConfigRulesOutcome(DescribeAggregateComplianceByConfigRulesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAggregateComplianceByConfigRulesOutcome(outcome.GetError());
  }
}

DescribeAggregateComplianceByConfigRulesOutcomeCallable ConfigServiceClient::DescribeAggregateComplianceByConfigRulesCallable(const DescribeAggregateComplianceByConfigRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAggregateComplianceByConfigRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAggregateComplianceByConfigRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DescribeAggregateComplianceByConfigRulesAsync(const DescribeAggregateComplianceByConfigRulesRequest& request, const DescribeAggregateComplianceByConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAggregateComplianceByConfigRulesAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DescribeAggregateComplianceByConfigRulesAsyncHelper(const DescribeAggregateComplianceByConfigRulesRequest& request, const DescribeAggregateComplianceByConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAggregateComplianceByConfigRules(request), context);
}

DescribeAggregationAuthorizationsOutcome ConfigServiceClient::DescribeAggregationAuthorizations(const DescribeAggregationAuthorizationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeAggregationAuthorizationsOutcome(DescribeAggregationAuthorizationsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAggregationAuthorizationsOutcome(outcome.GetError());
  }
}

DescribeAggregationAuthorizationsOutcomeCallable ConfigServiceClient::DescribeAggregationAuthorizationsCallable(const DescribeAggregationAuthorizationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAggregationAuthorizationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAggregationAuthorizations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DescribeAggregationAuthorizationsAsync(const DescribeAggregationAuthorizationsRequest& request, const DescribeAggregationAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAggregationAuthorizationsAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DescribeAggregationAuthorizationsAsyncHelper(const DescribeAggregationAuthorizationsRequest& request, const DescribeAggregationAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAggregationAuthorizations(request), context);
}

DescribeComplianceByConfigRuleOutcome ConfigServiceClient::DescribeComplianceByConfigRule(const DescribeComplianceByConfigRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeComplianceByConfigRuleOutcome(DescribeComplianceByConfigRuleResult(outcome.GetResult()));
  }
  else
  {
    return DescribeComplianceByConfigRuleOutcome(outcome.GetError());
  }
}

DescribeComplianceByConfigRuleOutcomeCallable ConfigServiceClient::DescribeComplianceByConfigRuleCallable(const DescribeComplianceByConfigRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeComplianceByConfigRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeComplianceByConfigRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DescribeComplianceByConfigRuleAsync(const DescribeComplianceByConfigRuleRequest& request, const DescribeComplianceByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeComplianceByConfigRuleAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DescribeComplianceByConfigRuleAsyncHelper(const DescribeComplianceByConfigRuleRequest& request, const DescribeComplianceByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeComplianceByConfigRule(request), context);
}

DescribeComplianceByResourceOutcome ConfigServiceClient::DescribeComplianceByResource(const DescribeComplianceByResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeComplianceByResourceOutcome(DescribeComplianceByResourceResult(outcome.GetResult()));
  }
  else
  {
    return DescribeComplianceByResourceOutcome(outcome.GetError());
  }
}

DescribeComplianceByResourceOutcomeCallable ConfigServiceClient::DescribeComplianceByResourceCallable(const DescribeComplianceByResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeComplianceByResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeComplianceByResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DescribeComplianceByResourceAsync(const DescribeComplianceByResourceRequest& request, const DescribeComplianceByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeComplianceByResourceAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DescribeComplianceByResourceAsyncHelper(const DescribeComplianceByResourceRequest& request, const DescribeComplianceByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeComplianceByResource(request), context);
}

DescribeConfigRuleEvaluationStatusOutcome ConfigServiceClient::DescribeConfigRuleEvaluationStatus(const DescribeConfigRuleEvaluationStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeConfigRuleEvaluationStatusOutcome(DescribeConfigRuleEvaluationStatusResult(outcome.GetResult()));
  }
  else
  {
    return DescribeConfigRuleEvaluationStatusOutcome(outcome.GetError());
  }
}

DescribeConfigRuleEvaluationStatusOutcomeCallable ConfigServiceClient::DescribeConfigRuleEvaluationStatusCallable(const DescribeConfigRuleEvaluationStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigRuleEvaluationStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfigRuleEvaluationStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DescribeConfigRuleEvaluationStatusAsync(const DescribeConfigRuleEvaluationStatusRequest& request, const DescribeConfigRuleEvaluationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeConfigRuleEvaluationStatusAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DescribeConfigRuleEvaluationStatusAsyncHelper(const DescribeConfigRuleEvaluationStatusRequest& request, const DescribeConfigRuleEvaluationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConfigRuleEvaluationStatus(request), context);
}

DescribeConfigRulesOutcome ConfigServiceClient::DescribeConfigRules(const DescribeConfigRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeConfigRulesOutcome(DescribeConfigRulesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeConfigRulesOutcome(outcome.GetError());
  }
}

DescribeConfigRulesOutcomeCallable ConfigServiceClient::DescribeConfigRulesCallable(const DescribeConfigRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfigRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DescribeConfigRulesAsync(const DescribeConfigRulesRequest& request, const DescribeConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeConfigRulesAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DescribeConfigRulesAsyncHelper(const DescribeConfigRulesRequest& request, const DescribeConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConfigRules(request), context);
}

DescribeConfigurationAggregatorSourcesStatusOutcome ConfigServiceClient::DescribeConfigurationAggregatorSourcesStatus(const DescribeConfigurationAggregatorSourcesStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeConfigurationAggregatorSourcesStatusOutcome(DescribeConfigurationAggregatorSourcesStatusResult(outcome.GetResult()));
  }
  else
  {
    return DescribeConfigurationAggregatorSourcesStatusOutcome(outcome.GetError());
  }
}

DescribeConfigurationAggregatorSourcesStatusOutcomeCallable ConfigServiceClient::DescribeConfigurationAggregatorSourcesStatusCallable(const DescribeConfigurationAggregatorSourcesStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigurationAggregatorSourcesStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfigurationAggregatorSourcesStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DescribeConfigurationAggregatorSourcesStatusAsync(const DescribeConfigurationAggregatorSourcesStatusRequest& request, const DescribeConfigurationAggregatorSourcesStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeConfigurationAggregatorSourcesStatusAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DescribeConfigurationAggregatorSourcesStatusAsyncHelper(const DescribeConfigurationAggregatorSourcesStatusRequest& request, const DescribeConfigurationAggregatorSourcesStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConfigurationAggregatorSourcesStatus(request), context);
}

DescribeConfigurationAggregatorsOutcome ConfigServiceClient::DescribeConfigurationAggregators(const DescribeConfigurationAggregatorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeConfigurationAggregatorsOutcome(DescribeConfigurationAggregatorsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeConfigurationAggregatorsOutcome(outcome.GetError());
  }
}

DescribeConfigurationAggregatorsOutcomeCallable ConfigServiceClient::DescribeConfigurationAggregatorsCallable(const DescribeConfigurationAggregatorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigurationAggregatorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfigurationAggregators(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DescribeConfigurationAggregatorsAsync(const DescribeConfigurationAggregatorsRequest& request, const DescribeConfigurationAggregatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeConfigurationAggregatorsAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DescribeConfigurationAggregatorsAsyncHelper(const DescribeConfigurationAggregatorsRequest& request, const DescribeConfigurationAggregatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConfigurationAggregators(request), context);
}

DescribeConfigurationRecorderStatusOutcome ConfigServiceClient::DescribeConfigurationRecorderStatus(const DescribeConfigurationRecorderStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeConfigurationRecorderStatusOutcome(DescribeConfigurationRecorderStatusResult(outcome.GetResult()));
  }
  else
  {
    return DescribeConfigurationRecorderStatusOutcome(outcome.GetError());
  }
}

DescribeConfigurationRecorderStatusOutcomeCallable ConfigServiceClient::DescribeConfigurationRecorderStatusCallable(const DescribeConfigurationRecorderStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigurationRecorderStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfigurationRecorderStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DescribeConfigurationRecorderStatusAsync(const DescribeConfigurationRecorderStatusRequest& request, const DescribeConfigurationRecorderStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeConfigurationRecorderStatusAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DescribeConfigurationRecorderStatusAsyncHelper(const DescribeConfigurationRecorderStatusRequest& request, const DescribeConfigurationRecorderStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConfigurationRecorderStatus(request), context);
}

DescribeConfigurationRecordersOutcome ConfigServiceClient::DescribeConfigurationRecorders(const DescribeConfigurationRecordersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeConfigurationRecordersOutcome(DescribeConfigurationRecordersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeConfigurationRecordersOutcome(outcome.GetError());
  }
}

DescribeConfigurationRecordersOutcomeCallable ConfigServiceClient::DescribeConfigurationRecordersCallable(const DescribeConfigurationRecordersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigurationRecordersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfigurationRecorders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DescribeConfigurationRecordersAsync(const DescribeConfigurationRecordersRequest& request, const DescribeConfigurationRecordersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeConfigurationRecordersAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DescribeConfigurationRecordersAsyncHelper(const DescribeConfigurationRecordersRequest& request, const DescribeConfigurationRecordersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConfigurationRecorders(request), context);
}

DescribeDeliveryChannelStatusOutcome ConfigServiceClient::DescribeDeliveryChannelStatus(const DescribeDeliveryChannelStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDeliveryChannelStatusOutcome(DescribeDeliveryChannelStatusResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDeliveryChannelStatusOutcome(outcome.GetError());
  }
}

DescribeDeliveryChannelStatusOutcomeCallable ConfigServiceClient::DescribeDeliveryChannelStatusCallable(const DescribeDeliveryChannelStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDeliveryChannelStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDeliveryChannelStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DescribeDeliveryChannelStatusAsync(const DescribeDeliveryChannelStatusRequest& request, const DescribeDeliveryChannelStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDeliveryChannelStatusAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DescribeDeliveryChannelStatusAsyncHelper(const DescribeDeliveryChannelStatusRequest& request, const DescribeDeliveryChannelStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDeliveryChannelStatus(request), context);
}

DescribeDeliveryChannelsOutcome ConfigServiceClient::DescribeDeliveryChannels(const DescribeDeliveryChannelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDeliveryChannelsOutcome(DescribeDeliveryChannelsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDeliveryChannelsOutcome(outcome.GetError());
  }
}

DescribeDeliveryChannelsOutcomeCallable ConfigServiceClient::DescribeDeliveryChannelsCallable(const DescribeDeliveryChannelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDeliveryChannelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDeliveryChannels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DescribeDeliveryChannelsAsync(const DescribeDeliveryChannelsRequest& request, const DescribeDeliveryChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDeliveryChannelsAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DescribeDeliveryChannelsAsyncHelper(const DescribeDeliveryChannelsRequest& request, const DescribeDeliveryChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDeliveryChannels(request), context);
}

DescribeOrganizationConfigRuleStatusesOutcome ConfigServiceClient::DescribeOrganizationConfigRuleStatuses(const DescribeOrganizationConfigRuleStatusesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeOrganizationConfigRuleStatusesOutcome(DescribeOrganizationConfigRuleStatusesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeOrganizationConfigRuleStatusesOutcome(outcome.GetError());
  }
}

DescribeOrganizationConfigRuleStatusesOutcomeCallable ConfigServiceClient::DescribeOrganizationConfigRuleStatusesCallable(const DescribeOrganizationConfigRuleStatusesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrganizationConfigRuleStatusesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrganizationConfigRuleStatuses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DescribeOrganizationConfigRuleStatusesAsync(const DescribeOrganizationConfigRuleStatusesRequest& request, const DescribeOrganizationConfigRuleStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeOrganizationConfigRuleStatusesAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DescribeOrganizationConfigRuleStatusesAsyncHelper(const DescribeOrganizationConfigRuleStatusesRequest& request, const DescribeOrganizationConfigRuleStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeOrganizationConfigRuleStatuses(request), context);
}

DescribeOrganizationConfigRulesOutcome ConfigServiceClient::DescribeOrganizationConfigRules(const DescribeOrganizationConfigRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeOrganizationConfigRulesOutcome(DescribeOrganizationConfigRulesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeOrganizationConfigRulesOutcome(outcome.GetError());
  }
}

DescribeOrganizationConfigRulesOutcomeCallable ConfigServiceClient::DescribeOrganizationConfigRulesCallable(const DescribeOrganizationConfigRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrganizationConfigRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrganizationConfigRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DescribeOrganizationConfigRulesAsync(const DescribeOrganizationConfigRulesRequest& request, const DescribeOrganizationConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeOrganizationConfigRulesAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DescribeOrganizationConfigRulesAsyncHelper(const DescribeOrganizationConfigRulesRequest& request, const DescribeOrganizationConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeOrganizationConfigRules(request), context);
}

DescribePendingAggregationRequestsOutcome ConfigServiceClient::DescribePendingAggregationRequests(const DescribePendingAggregationRequestsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribePendingAggregationRequestsOutcome(DescribePendingAggregationRequestsResult(outcome.GetResult()));
  }
  else
  {
    return DescribePendingAggregationRequestsOutcome(outcome.GetError());
  }
}

DescribePendingAggregationRequestsOutcomeCallable ConfigServiceClient::DescribePendingAggregationRequestsCallable(const DescribePendingAggregationRequestsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePendingAggregationRequestsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePendingAggregationRequests(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DescribePendingAggregationRequestsAsync(const DescribePendingAggregationRequestsRequest& request, const DescribePendingAggregationRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePendingAggregationRequestsAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DescribePendingAggregationRequestsAsyncHelper(const DescribePendingAggregationRequestsRequest& request, const DescribePendingAggregationRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePendingAggregationRequests(request), context);
}

DescribeRemediationConfigurationsOutcome ConfigServiceClient::DescribeRemediationConfigurations(const DescribeRemediationConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeRemediationConfigurationsOutcome(DescribeRemediationConfigurationsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRemediationConfigurationsOutcome(outcome.GetError());
  }
}

DescribeRemediationConfigurationsOutcomeCallable ConfigServiceClient::DescribeRemediationConfigurationsCallable(const DescribeRemediationConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRemediationConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRemediationConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DescribeRemediationConfigurationsAsync(const DescribeRemediationConfigurationsRequest& request, const DescribeRemediationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRemediationConfigurationsAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DescribeRemediationConfigurationsAsyncHelper(const DescribeRemediationConfigurationsRequest& request, const DescribeRemediationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRemediationConfigurations(request), context);
}

DescribeRemediationExecutionStatusOutcome ConfigServiceClient::DescribeRemediationExecutionStatus(const DescribeRemediationExecutionStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeRemediationExecutionStatusOutcome(DescribeRemediationExecutionStatusResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRemediationExecutionStatusOutcome(outcome.GetError());
  }
}

DescribeRemediationExecutionStatusOutcomeCallable ConfigServiceClient::DescribeRemediationExecutionStatusCallable(const DescribeRemediationExecutionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRemediationExecutionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRemediationExecutionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DescribeRemediationExecutionStatusAsync(const DescribeRemediationExecutionStatusRequest& request, const DescribeRemediationExecutionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRemediationExecutionStatusAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DescribeRemediationExecutionStatusAsyncHelper(const DescribeRemediationExecutionStatusRequest& request, const DescribeRemediationExecutionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRemediationExecutionStatus(request), context);
}

DescribeRetentionConfigurationsOutcome ConfigServiceClient::DescribeRetentionConfigurations(const DescribeRetentionConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeRetentionConfigurationsOutcome(DescribeRetentionConfigurationsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRetentionConfigurationsOutcome(outcome.GetError());
  }
}

DescribeRetentionConfigurationsOutcomeCallable ConfigServiceClient::DescribeRetentionConfigurationsCallable(const DescribeRetentionConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRetentionConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRetentionConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::DescribeRetentionConfigurationsAsync(const DescribeRetentionConfigurationsRequest& request, const DescribeRetentionConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRetentionConfigurationsAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::DescribeRetentionConfigurationsAsyncHelper(const DescribeRetentionConfigurationsRequest& request, const DescribeRetentionConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRetentionConfigurations(request), context);
}

GetAggregateComplianceDetailsByConfigRuleOutcome ConfigServiceClient::GetAggregateComplianceDetailsByConfigRule(const GetAggregateComplianceDetailsByConfigRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAggregateComplianceDetailsByConfigRuleOutcome(GetAggregateComplianceDetailsByConfigRuleResult(outcome.GetResult()));
  }
  else
  {
    return GetAggregateComplianceDetailsByConfigRuleOutcome(outcome.GetError());
  }
}

GetAggregateComplianceDetailsByConfigRuleOutcomeCallable ConfigServiceClient::GetAggregateComplianceDetailsByConfigRuleCallable(const GetAggregateComplianceDetailsByConfigRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAggregateComplianceDetailsByConfigRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAggregateComplianceDetailsByConfigRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::GetAggregateComplianceDetailsByConfigRuleAsync(const GetAggregateComplianceDetailsByConfigRuleRequest& request, const GetAggregateComplianceDetailsByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAggregateComplianceDetailsByConfigRuleAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::GetAggregateComplianceDetailsByConfigRuleAsyncHelper(const GetAggregateComplianceDetailsByConfigRuleRequest& request, const GetAggregateComplianceDetailsByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAggregateComplianceDetailsByConfigRule(request), context);
}

GetAggregateConfigRuleComplianceSummaryOutcome ConfigServiceClient::GetAggregateConfigRuleComplianceSummary(const GetAggregateConfigRuleComplianceSummaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAggregateConfigRuleComplianceSummaryOutcome(GetAggregateConfigRuleComplianceSummaryResult(outcome.GetResult()));
  }
  else
  {
    return GetAggregateConfigRuleComplianceSummaryOutcome(outcome.GetError());
  }
}

GetAggregateConfigRuleComplianceSummaryOutcomeCallable ConfigServiceClient::GetAggregateConfigRuleComplianceSummaryCallable(const GetAggregateConfigRuleComplianceSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAggregateConfigRuleComplianceSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAggregateConfigRuleComplianceSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::GetAggregateConfigRuleComplianceSummaryAsync(const GetAggregateConfigRuleComplianceSummaryRequest& request, const GetAggregateConfigRuleComplianceSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAggregateConfigRuleComplianceSummaryAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::GetAggregateConfigRuleComplianceSummaryAsyncHelper(const GetAggregateConfigRuleComplianceSummaryRequest& request, const GetAggregateConfigRuleComplianceSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAggregateConfigRuleComplianceSummary(request), context);
}

GetAggregateDiscoveredResourceCountsOutcome ConfigServiceClient::GetAggregateDiscoveredResourceCounts(const GetAggregateDiscoveredResourceCountsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAggregateDiscoveredResourceCountsOutcome(GetAggregateDiscoveredResourceCountsResult(outcome.GetResult()));
  }
  else
  {
    return GetAggregateDiscoveredResourceCountsOutcome(outcome.GetError());
  }
}

GetAggregateDiscoveredResourceCountsOutcomeCallable ConfigServiceClient::GetAggregateDiscoveredResourceCountsCallable(const GetAggregateDiscoveredResourceCountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAggregateDiscoveredResourceCountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAggregateDiscoveredResourceCounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::GetAggregateDiscoveredResourceCountsAsync(const GetAggregateDiscoveredResourceCountsRequest& request, const GetAggregateDiscoveredResourceCountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAggregateDiscoveredResourceCountsAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::GetAggregateDiscoveredResourceCountsAsyncHelper(const GetAggregateDiscoveredResourceCountsRequest& request, const GetAggregateDiscoveredResourceCountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAggregateDiscoveredResourceCounts(request), context);
}

GetAggregateResourceConfigOutcome ConfigServiceClient::GetAggregateResourceConfig(const GetAggregateResourceConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAggregateResourceConfigOutcome(GetAggregateResourceConfigResult(outcome.GetResult()));
  }
  else
  {
    return GetAggregateResourceConfigOutcome(outcome.GetError());
  }
}

GetAggregateResourceConfigOutcomeCallable ConfigServiceClient::GetAggregateResourceConfigCallable(const GetAggregateResourceConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAggregateResourceConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAggregateResourceConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::GetAggregateResourceConfigAsync(const GetAggregateResourceConfigRequest& request, const GetAggregateResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAggregateResourceConfigAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::GetAggregateResourceConfigAsyncHelper(const GetAggregateResourceConfigRequest& request, const GetAggregateResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAggregateResourceConfig(request), context);
}

GetComplianceDetailsByConfigRuleOutcome ConfigServiceClient::GetComplianceDetailsByConfigRule(const GetComplianceDetailsByConfigRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetComplianceDetailsByConfigRuleOutcome(GetComplianceDetailsByConfigRuleResult(outcome.GetResult()));
  }
  else
  {
    return GetComplianceDetailsByConfigRuleOutcome(outcome.GetError());
  }
}

GetComplianceDetailsByConfigRuleOutcomeCallable ConfigServiceClient::GetComplianceDetailsByConfigRuleCallable(const GetComplianceDetailsByConfigRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetComplianceDetailsByConfigRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetComplianceDetailsByConfigRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::GetComplianceDetailsByConfigRuleAsync(const GetComplianceDetailsByConfigRuleRequest& request, const GetComplianceDetailsByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetComplianceDetailsByConfigRuleAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::GetComplianceDetailsByConfigRuleAsyncHelper(const GetComplianceDetailsByConfigRuleRequest& request, const GetComplianceDetailsByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetComplianceDetailsByConfigRule(request), context);
}

GetComplianceDetailsByResourceOutcome ConfigServiceClient::GetComplianceDetailsByResource(const GetComplianceDetailsByResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetComplianceDetailsByResourceOutcome(GetComplianceDetailsByResourceResult(outcome.GetResult()));
  }
  else
  {
    return GetComplianceDetailsByResourceOutcome(outcome.GetError());
  }
}

GetComplianceDetailsByResourceOutcomeCallable ConfigServiceClient::GetComplianceDetailsByResourceCallable(const GetComplianceDetailsByResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetComplianceDetailsByResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetComplianceDetailsByResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::GetComplianceDetailsByResourceAsync(const GetComplianceDetailsByResourceRequest& request, const GetComplianceDetailsByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetComplianceDetailsByResourceAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::GetComplianceDetailsByResourceAsyncHelper(const GetComplianceDetailsByResourceRequest& request, const GetComplianceDetailsByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetComplianceDetailsByResource(request), context);
}

GetComplianceSummaryByConfigRuleOutcome ConfigServiceClient::GetComplianceSummaryByConfigRule() const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  JsonOutcome outcome = MakeRequest(ss.str(), HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "GetComplianceSummaryByConfigRule");
  if(outcome.IsSuccess())
  {
    return GetComplianceSummaryByConfigRuleOutcome(GetComplianceSummaryByConfigRuleResult(outcome.GetResult()));
  }
  else
  {
    return GetComplianceSummaryByConfigRuleOutcome(outcome.GetError());
  }
}

GetComplianceSummaryByConfigRuleOutcomeCallable ConfigServiceClient::GetComplianceSummaryByConfigRuleCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< GetComplianceSummaryByConfigRuleOutcome() > >(ALLOCATION_TAG, [this](){ return this->GetComplianceSummaryByConfigRule(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::GetComplianceSummaryByConfigRuleAsync(const GetComplianceSummaryByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context](){ this->GetComplianceSummaryByConfigRuleAsyncHelper( handler, context ); } );
}

void ConfigServiceClient::GetComplianceSummaryByConfigRuleAsyncHelper(const GetComplianceSummaryByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, GetComplianceSummaryByConfigRule(), context);
}

GetComplianceSummaryByResourceTypeOutcome ConfigServiceClient::GetComplianceSummaryByResourceType(const GetComplianceSummaryByResourceTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetComplianceSummaryByResourceTypeOutcome(GetComplianceSummaryByResourceTypeResult(outcome.GetResult()));
  }
  else
  {
    return GetComplianceSummaryByResourceTypeOutcome(outcome.GetError());
  }
}

GetComplianceSummaryByResourceTypeOutcomeCallable ConfigServiceClient::GetComplianceSummaryByResourceTypeCallable(const GetComplianceSummaryByResourceTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetComplianceSummaryByResourceTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetComplianceSummaryByResourceType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::GetComplianceSummaryByResourceTypeAsync(const GetComplianceSummaryByResourceTypeRequest& request, const GetComplianceSummaryByResourceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetComplianceSummaryByResourceTypeAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::GetComplianceSummaryByResourceTypeAsyncHelper(const GetComplianceSummaryByResourceTypeRequest& request, const GetComplianceSummaryByResourceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetComplianceSummaryByResourceType(request), context);
}

GetDiscoveredResourceCountsOutcome ConfigServiceClient::GetDiscoveredResourceCounts(const GetDiscoveredResourceCountsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDiscoveredResourceCountsOutcome(GetDiscoveredResourceCountsResult(outcome.GetResult()));
  }
  else
  {
    return GetDiscoveredResourceCountsOutcome(outcome.GetError());
  }
}

GetDiscoveredResourceCountsOutcomeCallable ConfigServiceClient::GetDiscoveredResourceCountsCallable(const GetDiscoveredResourceCountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDiscoveredResourceCountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDiscoveredResourceCounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::GetDiscoveredResourceCountsAsync(const GetDiscoveredResourceCountsRequest& request, const GetDiscoveredResourceCountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDiscoveredResourceCountsAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::GetDiscoveredResourceCountsAsyncHelper(const GetDiscoveredResourceCountsRequest& request, const GetDiscoveredResourceCountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDiscoveredResourceCounts(request), context);
}

GetOrganizationConfigRuleDetailedStatusOutcome ConfigServiceClient::GetOrganizationConfigRuleDetailedStatus(const GetOrganizationConfigRuleDetailedStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetOrganizationConfigRuleDetailedStatusOutcome(GetOrganizationConfigRuleDetailedStatusResult(outcome.GetResult()));
  }
  else
  {
    return GetOrganizationConfigRuleDetailedStatusOutcome(outcome.GetError());
  }
}

GetOrganizationConfigRuleDetailedStatusOutcomeCallable ConfigServiceClient::GetOrganizationConfigRuleDetailedStatusCallable(const GetOrganizationConfigRuleDetailedStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOrganizationConfigRuleDetailedStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOrganizationConfigRuleDetailedStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::GetOrganizationConfigRuleDetailedStatusAsync(const GetOrganizationConfigRuleDetailedStatusRequest& request, const GetOrganizationConfigRuleDetailedStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetOrganizationConfigRuleDetailedStatusAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::GetOrganizationConfigRuleDetailedStatusAsyncHelper(const GetOrganizationConfigRuleDetailedStatusRequest& request, const GetOrganizationConfigRuleDetailedStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOrganizationConfigRuleDetailedStatus(request), context);
}

GetResourceConfigHistoryOutcome ConfigServiceClient::GetResourceConfigHistory(const GetResourceConfigHistoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetResourceConfigHistoryOutcome(GetResourceConfigHistoryResult(outcome.GetResult()));
  }
  else
  {
    return GetResourceConfigHistoryOutcome(outcome.GetError());
  }
}

GetResourceConfigHistoryOutcomeCallable ConfigServiceClient::GetResourceConfigHistoryCallable(const GetResourceConfigHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourceConfigHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourceConfigHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::GetResourceConfigHistoryAsync(const GetResourceConfigHistoryRequest& request, const GetResourceConfigHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetResourceConfigHistoryAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::GetResourceConfigHistoryAsyncHelper(const GetResourceConfigHistoryRequest& request, const GetResourceConfigHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResourceConfigHistory(request), context);
}

ListAggregateDiscoveredResourcesOutcome ConfigServiceClient::ListAggregateDiscoveredResources(const ListAggregateDiscoveredResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListAggregateDiscoveredResourcesOutcome(ListAggregateDiscoveredResourcesResult(outcome.GetResult()));
  }
  else
  {
    return ListAggregateDiscoveredResourcesOutcome(outcome.GetError());
  }
}

ListAggregateDiscoveredResourcesOutcomeCallable ConfigServiceClient::ListAggregateDiscoveredResourcesCallable(const ListAggregateDiscoveredResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAggregateDiscoveredResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAggregateDiscoveredResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::ListAggregateDiscoveredResourcesAsync(const ListAggregateDiscoveredResourcesRequest& request, const ListAggregateDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAggregateDiscoveredResourcesAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::ListAggregateDiscoveredResourcesAsyncHelper(const ListAggregateDiscoveredResourcesRequest& request, const ListAggregateDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAggregateDiscoveredResources(request), context);
}

ListDiscoveredResourcesOutcome ConfigServiceClient::ListDiscoveredResources(const ListDiscoveredResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDiscoveredResourcesOutcome(ListDiscoveredResourcesResult(outcome.GetResult()));
  }
  else
  {
    return ListDiscoveredResourcesOutcome(outcome.GetError());
  }
}

ListDiscoveredResourcesOutcomeCallable ConfigServiceClient::ListDiscoveredResourcesCallable(const ListDiscoveredResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDiscoveredResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDiscoveredResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::ListDiscoveredResourcesAsync(const ListDiscoveredResourcesRequest& request, const ListDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDiscoveredResourcesAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::ListDiscoveredResourcesAsyncHelper(const ListDiscoveredResourcesRequest& request, const ListDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDiscoveredResources(request), context);
}

ListTagsForResourceOutcome ConfigServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable ConfigServiceClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PutAggregationAuthorizationOutcome ConfigServiceClient::PutAggregationAuthorization(const PutAggregationAuthorizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutAggregationAuthorizationOutcome(PutAggregationAuthorizationResult(outcome.GetResult()));
  }
  else
  {
    return PutAggregationAuthorizationOutcome(outcome.GetError());
  }
}

PutAggregationAuthorizationOutcomeCallable ConfigServiceClient::PutAggregationAuthorizationCallable(const PutAggregationAuthorizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAggregationAuthorizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAggregationAuthorization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::PutAggregationAuthorizationAsync(const PutAggregationAuthorizationRequest& request, const PutAggregationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutAggregationAuthorizationAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::PutAggregationAuthorizationAsyncHelper(const PutAggregationAuthorizationRequest& request, const PutAggregationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutAggregationAuthorization(request), context);
}

PutConfigRuleOutcome ConfigServiceClient::PutConfigRule(const PutConfigRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutConfigRuleOutcome(NoResult());
  }
  else
  {
    return PutConfigRuleOutcome(outcome.GetError());
  }
}

PutConfigRuleOutcomeCallable ConfigServiceClient::PutConfigRuleCallable(const PutConfigRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConfigRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConfigRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::PutConfigRuleAsync(const PutConfigRuleRequest& request, const PutConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutConfigRuleAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::PutConfigRuleAsyncHelper(const PutConfigRuleRequest& request, const PutConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutConfigRule(request), context);
}

PutConfigurationAggregatorOutcome ConfigServiceClient::PutConfigurationAggregator(const PutConfigurationAggregatorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutConfigurationAggregatorOutcome(PutConfigurationAggregatorResult(outcome.GetResult()));
  }
  else
  {
    return PutConfigurationAggregatorOutcome(outcome.GetError());
  }
}

PutConfigurationAggregatorOutcomeCallable ConfigServiceClient::PutConfigurationAggregatorCallable(const PutConfigurationAggregatorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConfigurationAggregatorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConfigurationAggregator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::PutConfigurationAggregatorAsync(const PutConfigurationAggregatorRequest& request, const PutConfigurationAggregatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutConfigurationAggregatorAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::PutConfigurationAggregatorAsyncHelper(const PutConfigurationAggregatorRequest& request, const PutConfigurationAggregatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutConfigurationAggregator(request), context);
}

PutConfigurationRecorderOutcome ConfigServiceClient::PutConfigurationRecorder(const PutConfigurationRecorderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutConfigurationRecorderOutcome(NoResult());
  }
  else
  {
    return PutConfigurationRecorderOutcome(outcome.GetError());
  }
}

PutConfigurationRecorderOutcomeCallable ConfigServiceClient::PutConfigurationRecorderCallable(const PutConfigurationRecorderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConfigurationRecorderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConfigurationRecorder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::PutConfigurationRecorderAsync(const PutConfigurationRecorderRequest& request, const PutConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutConfigurationRecorderAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::PutConfigurationRecorderAsyncHelper(const PutConfigurationRecorderRequest& request, const PutConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutConfigurationRecorder(request), context);
}

PutDeliveryChannelOutcome ConfigServiceClient::PutDeliveryChannel(const PutDeliveryChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutDeliveryChannelOutcome(NoResult());
  }
  else
  {
    return PutDeliveryChannelOutcome(outcome.GetError());
  }
}

PutDeliveryChannelOutcomeCallable ConfigServiceClient::PutDeliveryChannelCallable(const PutDeliveryChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDeliveryChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDeliveryChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::PutDeliveryChannelAsync(const PutDeliveryChannelRequest& request, const PutDeliveryChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutDeliveryChannelAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::PutDeliveryChannelAsyncHelper(const PutDeliveryChannelRequest& request, const PutDeliveryChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutDeliveryChannel(request), context);
}

PutEvaluationsOutcome ConfigServiceClient::PutEvaluations(const PutEvaluationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutEvaluationsOutcome(PutEvaluationsResult(outcome.GetResult()));
  }
  else
  {
    return PutEvaluationsOutcome(outcome.GetError());
  }
}

PutEvaluationsOutcomeCallable ConfigServiceClient::PutEvaluationsCallable(const PutEvaluationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEvaluationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEvaluations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::PutEvaluationsAsync(const PutEvaluationsRequest& request, const PutEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutEvaluationsAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::PutEvaluationsAsyncHelper(const PutEvaluationsRequest& request, const PutEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutEvaluations(request), context);
}

PutOrganizationConfigRuleOutcome ConfigServiceClient::PutOrganizationConfigRule(const PutOrganizationConfigRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutOrganizationConfigRuleOutcome(PutOrganizationConfigRuleResult(outcome.GetResult()));
  }
  else
  {
    return PutOrganizationConfigRuleOutcome(outcome.GetError());
  }
}

PutOrganizationConfigRuleOutcomeCallable ConfigServiceClient::PutOrganizationConfigRuleCallable(const PutOrganizationConfigRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutOrganizationConfigRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutOrganizationConfigRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::PutOrganizationConfigRuleAsync(const PutOrganizationConfigRuleRequest& request, const PutOrganizationConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutOrganizationConfigRuleAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::PutOrganizationConfigRuleAsyncHelper(const PutOrganizationConfigRuleRequest& request, const PutOrganizationConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutOrganizationConfigRule(request), context);
}

PutRemediationConfigurationsOutcome ConfigServiceClient::PutRemediationConfigurations(const PutRemediationConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutRemediationConfigurationsOutcome(PutRemediationConfigurationsResult(outcome.GetResult()));
  }
  else
  {
    return PutRemediationConfigurationsOutcome(outcome.GetError());
  }
}

PutRemediationConfigurationsOutcomeCallable ConfigServiceClient::PutRemediationConfigurationsCallable(const PutRemediationConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRemediationConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRemediationConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::PutRemediationConfigurationsAsync(const PutRemediationConfigurationsRequest& request, const PutRemediationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutRemediationConfigurationsAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::PutRemediationConfigurationsAsyncHelper(const PutRemediationConfigurationsRequest& request, const PutRemediationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutRemediationConfigurations(request), context);
}

PutRetentionConfigurationOutcome ConfigServiceClient::PutRetentionConfiguration(const PutRetentionConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutRetentionConfigurationOutcome(PutRetentionConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return PutRetentionConfigurationOutcome(outcome.GetError());
  }
}

PutRetentionConfigurationOutcomeCallable ConfigServiceClient::PutRetentionConfigurationCallable(const PutRetentionConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRetentionConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRetentionConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::PutRetentionConfigurationAsync(const PutRetentionConfigurationRequest& request, const PutRetentionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutRetentionConfigurationAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::PutRetentionConfigurationAsyncHelper(const PutRetentionConfigurationRequest& request, const PutRetentionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutRetentionConfiguration(request), context);
}

SelectResourceConfigOutcome ConfigServiceClient::SelectResourceConfig(const SelectResourceConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SelectResourceConfigOutcome(SelectResourceConfigResult(outcome.GetResult()));
  }
  else
  {
    return SelectResourceConfigOutcome(outcome.GetError());
  }
}

SelectResourceConfigOutcomeCallable ConfigServiceClient::SelectResourceConfigCallable(const SelectResourceConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SelectResourceConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SelectResourceConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::SelectResourceConfigAsync(const SelectResourceConfigRequest& request, const SelectResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SelectResourceConfigAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::SelectResourceConfigAsyncHelper(const SelectResourceConfigRequest& request, const SelectResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SelectResourceConfig(request), context);
}

StartConfigRulesEvaluationOutcome ConfigServiceClient::StartConfigRulesEvaluation(const StartConfigRulesEvaluationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartConfigRulesEvaluationOutcome(StartConfigRulesEvaluationResult(outcome.GetResult()));
  }
  else
  {
    return StartConfigRulesEvaluationOutcome(outcome.GetError());
  }
}

StartConfigRulesEvaluationOutcomeCallable ConfigServiceClient::StartConfigRulesEvaluationCallable(const StartConfigRulesEvaluationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartConfigRulesEvaluationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartConfigRulesEvaluation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::StartConfigRulesEvaluationAsync(const StartConfigRulesEvaluationRequest& request, const StartConfigRulesEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartConfigRulesEvaluationAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::StartConfigRulesEvaluationAsyncHelper(const StartConfigRulesEvaluationRequest& request, const StartConfigRulesEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartConfigRulesEvaluation(request), context);
}

StartConfigurationRecorderOutcome ConfigServiceClient::StartConfigurationRecorder(const StartConfigurationRecorderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartConfigurationRecorderOutcome(NoResult());
  }
  else
  {
    return StartConfigurationRecorderOutcome(outcome.GetError());
  }
}

StartConfigurationRecorderOutcomeCallable ConfigServiceClient::StartConfigurationRecorderCallable(const StartConfigurationRecorderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartConfigurationRecorderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartConfigurationRecorder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::StartConfigurationRecorderAsync(const StartConfigurationRecorderRequest& request, const StartConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartConfigurationRecorderAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::StartConfigurationRecorderAsyncHelper(const StartConfigurationRecorderRequest& request, const StartConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartConfigurationRecorder(request), context);
}

StartRemediationExecutionOutcome ConfigServiceClient::StartRemediationExecution(const StartRemediationExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartRemediationExecutionOutcome(StartRemediationExecutionResult(outcome.GetResult()));
  }
  else
  {
    return StartRemediationExecutionOutcome(outcome.GetError());
  }
}

StartRemediationExecutionOutcomeCallable ConfigServiceClient::StartRemediationExecutionCallable(const StartRemediationExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartRemediationExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartRemediationExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::StartRemediationExecutionAsync(const StartRemediationExecutionRequest& request, const StartRemediationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartRemediationExecutionAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::StartRemediationExecutionAsyncHelper(const StartRemediationExecutionRequest& request, const StartRemediationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartRemediationExecution(request), context);
}

StopConfigurationRecorderOutcome ConfigServiceClient::StopConfigurationRecorder(const StopConfigurationRecorderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopConfigurationRecorderOutcome(NoResult());
  }
  else
  {
    return StopConfigurationRecorderOutcome(outcome.GetError());
  }
}

StopConfigurationRecorderOutcomeCallable ConfigServiceClient::StopConfigurationRecorderCallable(const StopConfigurationRecorderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopConfigurationRecorderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopConfigurationRecorder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::StopConfigurationRecorderAsync(const StopConfigurationRecorderRequest& request, const StopConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopConfigurationRecorderAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::StopConfigurationRecorderAsyncHelper(const StopConfigurationRecorderRequest& request, const StopConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopConfigurationRecorder(request), context);
}

TagResourceOutcome ConfigServiceClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(NoResult());
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable ConfigServiceClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome ConfigServiceClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(NoResult());
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable ConfigServiceClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void ConfigServiceClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

