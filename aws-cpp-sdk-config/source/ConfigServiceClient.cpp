/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/config/ConfigServiceClient.h>
#include <aws/config/ConfigServiceEndpoint.h>
#include <aws/config/ConfigServiceErrorMarshaller.h>
#include <aws/config/model/DeleteConfigRuleRequest.h>
#include <aws/config/model/DeleteConfigurationRecorderRequest.h>
#include <aws/config/model/DeleteDeliveryChannelRequest.h>
#include <aws/config/model/DeleteEvaluationResultsRequest.h>
#include <aws/config/model/DeliverConfigSnapshotRequest.h>
#include <aws/config/model/DescribeComplianceByConfigRuleRequest.h>
#include <aws/config/model/DescribeComplianceByResourceRequest.h>
#include <aws/config/model/DescribeConfigRuleEvaluationStatusRequest.h>
#include <aws/config/model/DescribeConfigRulesRequest.h>
#include <aws/config/model/DescribeConfigurationRecorderStatusRequest.h>
#include <aws/config/model/DescribeConfigurationRecordersRequest.h>
#include <aws/config/model/DescribeDeliveryChannelStatusRequest.h>
#include <aws/config/model/DescribeDeliveryChannelsRequest.h>
#include <aws/config/model/GetComplianceDetailsByConfigRuleRequest.h>
#include <aws/config/model/GetComplianceDetailsByResourceRequest.h>
#include <aws/config/model/GetComplianceSummaryByResourceTypeRequest.h>
#include <aws/config/model/GetResourceConfigHistoryRequest.h>
#include <aws/config/model/ListDiscoveredResourcesRequest.h>
#include <aws/config/model/PutConfigRuleRequest.h>
#include <aws/config/model/PutConfigurationRecorderRequest.h>
#include <aws/config/model/PutDeliveryChannelRequest.h>
#include <aws/config/model/PutEvaluationsRequest.h>
#include <aws/config/model/StartConfigRulesEvaluationRequest.h>
#include <aws/config/model/StartConfigurationRecorderRequest.h>
#include <aws/config/model/StopConfigurationRecorderRequest.h>

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
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << ConfigServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

DeleteConfigRuleOutcome ConfigServiceClient::DeleteConfigRule(const DeleteConfigRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

DeleteConfigurationRecorderOutcome ConfigServiceClient::DeleteConfigurationRecorder(const DeleteConfigurationRecorderRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

DeliverConfigSnapshotOutcome ConfigServiceClient::DeliverConfigSnapshot(const DeliverConfigSnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

DescribeComplianceByConfigRuleOutcome ConfigServiceClient::DescribeComplianceByConfigRule(const DescribeComplianceByConfigRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

DescribeConfigurationRecorderStatusOutcome ConfigServiceClient::DescribeConfigurationRecorderStatus(const DescribeConfigurationRecorderStatusRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

GetComplianceDetailsByConfigRuleOutcome ConfigServiceClient::GetComplianceDetailsByConfigRule(const GetComplianceDetailsByConfigRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

  JsonOutcome outcome = MakeRequest(ss.str(), HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

GetResourceConfigHistoryOutcome ConfigServiceClient::GetResourceConfigHistory(const GetResourceConfigHistoryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

ListDiscoveredResourcesOutcome ConfigServiceClient::ListDiscoveredResources(const ListDiscoveredResourcesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

PutConfigRuleOutcome ConfigServiceClient::PutConfigRule(const PutConfigRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

PutConfigurationRecorderOutcome ConfigServiceClient::PutConfigurationRecorder(const PutConfigurationRecorderRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

StartConfigRulesEvaluationOutcome ConfigServiceClient::StartConfigRulesEvaluation(const StartConfigRulesEvaluationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

StopConfigurationRecorderOutcome ConfigServiceClient::StopConfigurationRecorder(const StopConfigurationRecorderRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

