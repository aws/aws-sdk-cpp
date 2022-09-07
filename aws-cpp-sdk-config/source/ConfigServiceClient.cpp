/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/config/model/DeleteConformancePackRequest.h>
#include <aws/config/model/DeleteDeliveryChannelRequest.h>
#include <aws/config/model/DeleteEvaluationResultsRequest.h>
#include <aws/config/model/DeleteOrganizationConfigRuleRequest.h>
#include <aws/config/model/DeleteOrganizationConformancePackRequest.h>
#include <aws/config/model/DeletePendingAggregationRequestRequest.h>
#include <aws/config/model/DeleteRemediationConfigurationRequest.h>
#include <aws/config/model/DeleteRemediationExceptionsRequest.h>
#include <aws/config/model/DeleteResourceConfigRequest.h>
#include <aws/config/model/DeleteRetentionConfigurationRequest.h>
#include <aws/config/model/DeleteStoredQueryRequest.h>
#include <aws/config/model/DeliverConfigSnapshotRequest.h>
#include <aws/config/model/DescribeAggregateComplianceByConfigRulesRequest.h>
#include <aws/config/model/DescribeAggregateComplianceByConformancePacksRequest.h>
#include <aws/config/model/DescribeAggregationAuthorizationsRequest.h>
#include <aws/config/model/DescribeComplianceByConfigRuleRequest.h>
#include <aws/config/model/DescribeComplianceByResourceRequest.h>
#include <aws/config/model/DescribeConfigRuleEvaluationStatusRequest.h>
#include <aws/config/model/DescribeConfigRulesRequest.h>
#include <aws/config/model/DescribeConfigurationAggregatorSourcesStatusRequest.h>
#include <aws/config/model/DescribeConfigurationAggregatorsRequest.h>
#include <aws/config/model/DescribeConfigurationRecorderStatusRequest.h>
#include <aws/config/model/DescribeConfigurationRecordersRequest.h>
#include <aws/config/model/DescribeConformancePackComplianceRequest.h>
#include <aws/config/model/DescribeConformancePackStatusRequest.h>
#include <aws/config/model/DescribeConformancePacksRequest.h>
#include <aws/config/model/DescribeDeliveryChannelStatusRequest.h>
#include <aws/config/model/DescribeDeliveryChannelsRequest.h>
#include <aws/config/model/DescribeOrganizationConfigRuleStatusesRequest.h>
#include <aws/config/model/DescribeOrganizationConfigRulesRequest.h>
#include <aws/config/model/DescribeOrganizationConformancePackStatusesRequest.h>
#include <aws/config/model/DescribeOrganizationConformancePacksRequest.h>
#include <aws/config/model/DescribePendingAggregationRequestsRequest.h>
#include <aws/config/model/DescribeRemediationConfigurationsRequest.h>
#include <aws/config/model/DescribeRemediationExceptionsRequest.h>
#include <aws/config/model/DescribeRemediationExecutionStatusRequest.h>
#include <aws/config/model/DescribeRetentionConfigurationsRequest.h>
#include <aws/config/model/GetAggregateComplianceDetailsByConfigRuleRequest.h>
#include <aws/config/model/GetAggregateConfigRuleComplianceSummaryRequest.h>
#include <aws/config/model/GetAggregateConformancePackComplianceSummaryRequest.h>
#include <aws/config/model/GetAggregateDiscoveredResourceCountsRequest.h>
#include <aws/config/model/GetAggregateResourceConfigRequest.h>
#include <aws/config/model/GetComplianceDetailsByConfigRuleRequest.h>
#include <aws/config/model/GetComplianceDetailsByResourceRequest.h>
#include <aws/config/model/GetComplianceSummaryByResourceTypeRequest.h>
#include <aws/config/model/GetConformancePackComplianceDetailsRequest.h>
#include <aws/config/model/GetConformancePackComplianceSummaryRequest.h>
#include <aws/config/model/GetCustomRulePolicyRequest.h>
#include <aws/config/model/GetDiscoveredResourceCountsRequest.h>
#include <aws/config/model/GetOrganizationConfigRuleDetailedStatusRequest.h>
#include <aws/config/model/GetOrganizationConformancePackDetailedStatusRequest.h>
#include <aws/config/model/GetOrganizationCustomRulePolicyRequest.h>
#include <aws/config/model/GetResourceConfigHistoryRequest.h>
#include <aws/config/model/GetStoredQueryRequest.h>
#include <aws/config/model/ListAggregateDiscoveredResourcesRequest.h>
#include <aws/config/model/ListConformancePackComplianceScoresRequest.h>
#include <aws/config/model/ListDiscoveredResourcesRequest.h>
#include <aws/config/model/ListStoredQueriesRequest.h>
#include <aws/config/model/ListTagsForResourceRequest.h>
#include <aws/config/model/PutAggregationAuthorizationRequest.h>
#include <aws/config/model/PutConfigRuleRequest.h>
#include <aws/config/model/PutConfigurationAggregatorRequest.h>
#include <aws/config/model/PutConfigurationRecorderRequest.h>
#include <aws/config/model/PutConformancePackRequest.h>
#include <aws/config/model/PutDeliveryChannelRequest.h>
#include <aws/config/model/PutEvaluationsRequest.h>
#include <aws/config/model/PutExternalEvaluationRequest.h>
#include <aws/config/model/PutOrganizationConfigRuleRequest.h>
#include <aws/config/model/PutOrganizationConformancePackRequest.h>
#include <aws/config/model/PutRemediationConfigurationsRequest.h>
#include <aws/config/model/PutRemediationExceptionsRequest.h>
#include <aws/config/model/PutResourceConfigRequest.h>
#include <aws/config/model/PutRetentionConfigurationRequest.h>
#include <aws/config/model/PutStoredQueryRequest.h>
#include <aws/config/model/SelectAggregateResourceConfigRequest.h>
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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConfigServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConfigServiceClient::ConfigServiceClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConfigServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConfigServiceClient::ConfigServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConfigServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConfigServiceClient::~ConfigServiceClient()
{
}

void ConfigServiceClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Config Service");
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
  return BatchGetAggregateResourceConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetAggregateResourceConfigOutcomeCallable ConfigServiceClient::BatchGetAggregateResourceConfigCallable(const BatchGetAggregateResourceConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetAggregateResourceConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetAggregateResourceConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientBatchGetAggregateResourceConfigAsyncHelper(ConfigServiceClient const * const clientThis, const BatchGetAggregateResourceConfigRequest& request, const BatchGetAggregateResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetAggregateResourceConfig(request), context);
}

void ConfigServiceClient::BatchGetAggregateResourceConfigAsync(const BatchGetAggregateResourceConfigRequest& request, const BatchGetAggregateResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientBatchGetAggregateResourceConfigAsyncHelper( this, request, handler, context ); } );
}

BatchGetResourceConfigOutcome ConfigServiceClient::BatchGetResourceConfig(const BatchGetResourceConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetResourceConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetResourceConfigOutcomeCallable ConfigServiceClient::BatchGetResourceConfigCallable(const BatchGetResourceConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetResourceConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetResourceConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientBatchGetResourceConfigAsyncHelper(ConfigServiceClient const * const clientThis, const BatchGetResourceConfigRequest& request, const BatchGetResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetResourceConfig(request), context);
}

void ConfigServiceClient::BatchGetResourceConfigAsync(const BatchGetResourceConfigRequest& request, const BatchGetResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientBatchGetResourceConfigAsyncHelper( this, request, handler, context ); } );
}

DeleteAggregationAuthorizationOutcome ConfigServiceClient::DeleteAggregationAuthorization(const DeleteAggregationAuthorizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAggregationAuthorizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAggregationAuthorizationOutcomeCallable ConfigServiceClient::DeleteAggregationAuthorizationCallable(const DeleteAggregationAuthorizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAggregationAuthorizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAggregationAuthorization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDeleteAggregationAuthorizationAsyncHelper(ConfigServiceClient const * const clientThis, const DeleteAggregationAuthorizationRequest& request, const DeleteAggregationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAggregationAuthorization(request), context);
}

void ConfigServiceClient::DeleteAggregationAuthorizationAsync(const DeleteAggregationAuthorizationRequest& request, const DeleteAggregationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDeleteAggregationAuthorizationAsyncHelper( this, request, handler, context ); } );
}

DeleteConfigRuleOutcome ConfigServiceClient::DeleteConfigRule(const DeleteConfigRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteConfigRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConfigRuleOutcomeCallable ConfigServiceClient::DeleteConfigRuleCallable(const DeleteConfigRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfigRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDeleteConfigRuleAsyncHelper(ConfigServiceClient const * const clientThis, const DeleteConfigRuleRequest& request, const DeleteConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConfigRule(request), context);
}

void ConfigServiceClient::DeleteConfigRuleAsync(const DeleteConfigRuleRequest& request, const DeleteConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDeleteConfigRuleAsyncHelper( this, request, handler, context ); } );
}

DeleteConfigurationAggregatorOutcome ConfigServiceClient::DeleteConfigurationAggregator(const DeleteConfigurationAggregatorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteConfigurationAggregatorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConfigurationAggregatorOutcomeCallable ConfigServiceClient::DeleteConfigurationAggregatorCallable(const DeleteConfigurationAggregatorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigurationAggregatorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfigurationAggregator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDeleteConfigurationAggregatorAsyncHelper(ConfigServiceClient const * const clientThis, const DeleteConfigurationAggregatorRequest& request, const DeleteConfigurationAggregatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConfigurationAggregator(request), context);
}

void ConfigServiceClient::DeleteConfigurationAggregatorAsync(const DeleteConfigurationAggregatorRequest& request, const DeleteConfigurationAggregatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDeleteConfigurationAggregatorAsyncHelper( this, request, handler, context ); } );
}

DeleteConfigurationRecorderOutcome ConfigServiceClient::DeleteConfigurationRecorder(const DeleteConfigurationRecorderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteConfigurationRecorderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConfigurationRecorderOutcomeCallable ConfigServiceClient::DeleteConfigurationRecorderCallable(const DeleteConfigurationRecorderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigurationRecorderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfigurationRecorder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDeleteConfigurationRecorderAsyncHelper(ConfigServiceClient const * const clientThis, const DeleteConfigurationRecorderRequest& request, const DeleteConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConfigurationRecorder(request), context);
}

void ConfigServiceClient::DeleteConfigurationRecorderAsync(const DeleteConfigurationRecorderRequest& request, const DeleteConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDeleteConfigurationRecorderAsyncHelper( this, request, handler, context ); } );
}

DeleteConformancePackOutcome ConfigServiceClient::DeleteConformancePack(const DeleteConformancePackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteConformancePackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConformancePackOutcomeCallable ConfigServiceClient::DeleteConformancePackCallable(const DeleteConformancePackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConformancePackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConformancePack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDeleteConformancePackAsyncHelper(ConfigServiceClient const * const clientThis, const DeleteConformancePackRequest& request, const DeleteConformancePackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConformancePack(request), context);
}

void ConfigServiceClient::DeleteConformancePackAsync(const DeleteConformancePackRequest& request, const DeleteConformancePackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDeleteConformancePackAsyncHelper( this, request, handler, context ); } );
}

DeleteDeliveryChannelOutcome ConfigServiceClient::DeleteDeliveryChannel(const DeleteDeliveryChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDeliveryChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDeliveryChannelOutcomeCallable ConfigServiceClient::DeleteDeliveryChannelCallable(const DeleteDeliveryChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeliveryChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDeliveryChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDeleteDeliveryChannelAsyncHelper(ConfigServiceClient const * const clientThis, const DeleteDeliveryChannelRequest& request, const DeleteDeliveryChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDeliveryChannel(request), context);
}

void ConfigServiceClient::DeleteDeliveryChannelAsync(const DeleteDeliveryChannelRequest& request, const DeleteDeliveryChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDeleteDeliveryChannelAsyncHelper( this, request, handler, context ); } );
}

DeleteEvaluationResultsOutcome ConfigServiceClient::DeleteEvaluationResults(const DeleteEvaluationResultsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEvaluationResultsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEvaluationResultsOutcomeCallable ConfigServiceClient::DeleteEvaluationResultsCallable(const DeleteEvaluationResultsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEvaluationResultsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEvaluationResults(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDeleteEvaluationResultsAsyncHelper(ConfigServiceClient const * const clientThis, const DeleteEvaluationResultsRequest& request, const DeleteEvaluationResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEvaluationResults(request), context);
}

void ConfigServiceClient::DeleteEvaluationResultsAsync(const DeleteEvaluationResultsRequest& request, const DeleteEvaluationResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDeleteEvaluationResultsAsyncHelper( this, request, handler, context ); } );
}

DeleteOrganizationConfigRuleOutcome ConfigServiceClient::DeleteOrganizationConfigRule(const DeleteOrganizationConfigRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteOrganizationConfigRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteOrganizationConfigRuleOutcomeCallable ConfigServiceClient::DeleteOrganizationConfigRuleCallable(const DeleteOrganizationConfigRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOrganizationConfigRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOrganizationConfigRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDeleteOrganizationConfigRuleAsyncHelper(ConfigServiceClient const * const clientThis, const DeleteOrganizationConfigRuleRequest& request, const DeleteOrganizationConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteOrganizationConfigRule(request), context);
}

void ConfigServiceClient::DeleteOrganizationConfigRuleAsync(const DeleteOrganizationConfigRuleRequest& request, const DeleteOrganizationConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDeleteOrganizationConfigRuleAsyncHelper( this, request, handler, context ); } );
}

DeleteOrganizationConformancePackOutcome ConfigServiceClient::DeleteOrganizationConformancePack(const DeleteOrganizationConformancePackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteOrganizationConformancePackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteOrganizationConformancePackOutcomeCallable ConfigServiceClient::DeleteOrganizationConformancePackCallable(const DeleteOrganizationConformancePackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOrganizationConformancePackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOrganizationConformancePack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDeleteOrganizationConformancePackAsyncHelper(ConfigServiceClient const * const clientThis, const DeleteOrganizationConformancePackRequest& request, const DeleteOrganizationConformancePackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteOrganizationConformancePack(request), context);
}

void ConfigServiceClient::DeleteOrganizationConformancePackAsync(const DeleteOrganizationConformancePackRequest& request, const DeleteOrganizationConformancePackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDeleteOrganizationConformancePackAsyncHelper( this, request, handler, context ); } );
}

DeletePendingAggregationRequestOutcome ConfigServiceClient::DeletePendingAggregationRequest(const DeletePendingAggregationRequestRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePendingAggregationRequestOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePendingAggregationRequestOutcomeCallable ConfigServiceClient::DeletePendingAggregationRequestCallable(const DeletePendingAggregationRequestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePendingAggregationRequestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePendingAggregationRequest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDeletePendingAggregationRequestAsyncHelper(ConfigServiceClient const * const clientThis, const DeletePendingAggregationRequestRequest& request, const DeletePendingAggregationRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePendingAggregationRequest(request), context);
}

void ConfigServiceClient::DeletePendingAggregationRequestAsync(const DeletePendingAggregationRequestRequest& request, const DeletePendingAggregationRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDeletePendingAggregationRequestAsyncHelper( this, request, handler, context ); } );
}

DeleteRemediationConfigurationOutcome ConfigServiceClient::DeleteRemediationConfiguration(const DeleteRemediationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRemediationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRemediationConfigurationOutcomeCallable ConfigServiceClient::DeleteRemediationConfigurationCallable(const DeleteRemediationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRemediationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRemediationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDeleteRemediationConfigurationAsyncHelper(ConfigServiceClient const * const clientThis, const DeleteRemediationConfigurationRequest& request, const DeleteRemediationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRemediationConfiguration(request), context);
}

void ConfigServiceClient::DeleteRemediationConfigurationAsync(const DeleteRemediationConfigurationRequest& request, const DeleteRemediationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDeleteRemediationConfigurationAsyncHelper( this, request, handler, context ); } );
}

DeleteRemediationExceptionsOutcome ConfigServiceClient::DeleteRemediationExceptions(const DeleteRemediationExceptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRemediationExceptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRemediationExceptionsOutcomeCallable ConfigServiceClient::DeleteRemediationExceptionsCallable(const DeleteRemediationExceptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRemediationExceptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRemediationExceptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDeleteRemediationExceptionsAsyncHelper(ConfigServiceClient const * const clientThis, const DeleteRemediationExceptionsRequest& request, const DeleteRemediationExceptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRemediationExceptions(request), context);
}

void ConfigServiceClient::DeleteRemediationExceptionsAsync(const DeleteRemediationExceptionsRequest& request, const DeleteRemediationExceptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDeleteRemediationExceptionsAsyncHelper( this, request, handler, context ); } );
}

DeleteResourceConfigOutcome ConfigServiceClient::DeleteResourceConfig(const DeleteResourceConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteResourceConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourceConfigOutcomeCallable ConfigServiceClient::DeleteResourceConfigCallable(const DeleteResourceConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourceConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourceConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDeleteResourceConfigAsyncHelper(ConfigServiceClient const * const clientThis, const DeleteResourceConfigRequest& request, const DeleteResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteResourceConfig(request), context);
}

void ConfigServiceClient::DeleteResourceConfigAsync(const DeleteResourceConfigRequest& request, const DeleteResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDeleteResourceConfigAsyncHelper( this, request, handler, context ); } );
}

DeleteRetentionConfigurationOutcome ConfigServiceClient::DeleteRetentionConfiguration(const DeleteRetentionConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRetentionConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRetentionConfigurationOutcomeCallable ConfigServiceClient::DeleteRetentionConfigurationCallable(const DeleteRetentionConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRetentionConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRetentionConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDeleteRetentionConfigurationAsyncHelper(ConfigServiceClient const * const clientThis, const DeleteRetentionConfigurationRequest& request, const DeleteRetentionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRetentionConfiguration(request), context);
}

void ConfigServiceClient::DeleteRetentionConfigurationAsync(const DeleteRetentionConfigurationRequest& request, const DeleteRetentionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDeleteRetentionConfigurationAsyncHelper( this, request, handler, context ); } );
}

DeleteStoredQueryOutcome ConfigServiceClient::DeleteStoredQuery(const DeleteStoredQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteStoredQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteStoredQueryOutcomeCallable ConfigServiceClient::DeleteStoredQueryCallable(const DeleteStoredQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStoredQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStoredQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDeleteStoredQueryAsyncHelper(ConfigServiceClient const * const clientThis, const DeleteStoredQueryRequest& request, const DeleteStoredQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteStoredQuery(request), context);
}

void ConfigServiceClient::DeleteStoredQueryAsync(const DeleteStoredQueryRequest& request, const DeleteStoredQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDeleteStoredQueryAsyncHelper( this, request, handler, context ); } );
}

DeliverConfigSnapshotOutcome ConfigServiceClient::DeliverConfigSnapshot(const DeliverConfigSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeliverConfigSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeliverConfigSnapshotOutcomeCallable ConfigServiceClient::DeliverConfigSnapshotCallable(const DeliverConfigSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeliverConfigSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeliverConfigSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDeliverConfigSnapshotAsyncHelper(ConfigServiceClient const * const clientThis, const DeliverConfigSnapshotRequest& request, const DeliverConfigSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeliverConfigSnapshot(request), context);
}

void ConfigServiceClient::DeliverConfigSnapshotAsync(const DeliverConfigSnapshotRequest& request, const DeliverConfigSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDeliverConfigSnapshotAsyncHelper( this, request, handler, context ); } );
}

DescribeAggregateComplianceByConfigRulesOutcome ConfigServiceClient::DescribeAggregateComplianceByConfigRules(const DescribeAggregateComplianceByConfigRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAggregateComplianceByConfigRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAggregateComplianceByConfigRulesOutcomeCallable ConfigServiceClient::DescribeAggregateComplianceByConfigRulesCallable(const DescribeAggregateComplianceByConfigRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAggregateComplianceByConfigRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAggregateComplianceByConfigRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeAggregateComplianceByConfigRulesAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeAggregateComplianceByConfigRulesRequest& request, const DescribeAggregateComplianceByConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAggregateComplianceByConfigRules(request), context);
}

void ConfigServiceClient::DescribeAggregateComplianceByConfigRulesAsync(const DescribeAggregateComplianceByConfigRulesRequest& request, const DescribeAggregateComplianceByConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeAggregateComplianceByConfigRulesAsyncHelper( this, request, handler, context ); } );
}

DescribeAggregateComplianceByConformancePacksOutcome ConfigServiceClient::DescribeAggregateComplianceByConformancePacks(const DescribeAggregateComplianceByConformancePacksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAggregateComplianceByConformancePacksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAggregateComplianceByConformancePacksOutcomeCallable ConfigServiceClient::DescribeAggregateComplianceByConformancePacksCallable(const DescribeAggregateComplianceByConformancePacksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAggregateComplianceByConformancePacksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAggregateComplianceByConformancePacks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeAggregateComplianceByConformancePacksAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeAggregateComplianceByConformancePacksRequest& request, const DescribeAggregateComplianceByConformancePacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAggregateComplianceByConformancePacks(request), context);
}

void ConfigServiceClient::DescribeAggregateComplianceByConformancePacksAsync(const DescribeAggregateComplianceByConformancePacksRequest& request, const DescribeAggregateComplianceByConformancePacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeAggregateComplianceByConformancePacksAsyncHelper( this, request, handler, context ); } );
}

DescribeAggregationAuthorizationsOutcome ConfigServiceClient::DescribeAggregationAuthorizations(const DescribeAggregationAuthorizationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAggregationAuthorizationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAggregationAuthorizationsOutcomeCallable ConfigServiceClient::DescribeAggregationAuthorizationsCallable(const DescribeAggregationAuthorizationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAggregationAuthorizationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAggregationAuthorizations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeAggregationAuthorizationsAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeAggregationAuthorizationsRequest& request, const DescribeAggregationAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAggregationAuthorizations(request), context);
}

void ConfigServiceClient::DescribeAggregationAuthorizationsAsync(const DescribeAggregationAuthorizationsRequest& request, const DescribeAggregationAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeAggregationAuthorizationsAsyncHelper( this, request, handler, context ); } );
}

DescribeComplianceByConfigRuleOutcome ConfigServiceClient::DescribeComplianceByConfigRule(const DescribeComplianceByConfigRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeComplianceByConfigRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeComplianceByConfigRuleOutcomeCallable ConfigServiceClient::DescribeComplianceByConfigRuleCallable(const DescribeComplianceByConfigRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeComplianceByConfigRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeComplianceByConfigRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeComplianceByConfigRuleAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeComplianceByConfigRuleRequest& request, const DescribeComplianceByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeComplianceByConfigRule(request), context);
}

void ConfigServiceClient::DescribeComplianceByConfigRuleAsync(const DescribeComplianceByConfigRuleRequest& request, const DescribeComplianceByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeComplianceByConfigRuleAsyncHelper( this, request, handler, context ); } );
}

DescribeComplianceByResourceOutcome ConfigServiceClient::DescribeComplianceByResource(const DescribeComplianceByResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeComplianceByResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeComplianceByResourceOutcomeCallable ConfigServiceClient::DescribeComplianceByResourceCallable(const DescribeComplianceByResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeComplianceByResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeComplianceByResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeComplianceByResourceAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeComplianceByResourceRequest& request, const DescribeComplianceByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeComplianceByResource(request), context);
}

void ConfigServiceClient::DescribeComplianceByResourceAsync(const DescribeComplianceByResourceRequest& request, const DescribeComplianceByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeComplianceByResourceAsyncHelper( this, request, handler, context ); } );
}

DescribeConfigRuleEvaluationStatusOutcome ConfigServiceClient::DescribeConfigRuleEvaluationStatus(const DescribeConfigRuleEvaluationStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeConfigRuleEvaluationStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConfigRuleEvaluationStatusOutcomeCallable ConfigServiceClient::DescribeConfigRuleEvaluationStatusCallable(const DescribeConfigRuleEvaluationStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigRuleEvaluationStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfigRuleEvaluationStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeConfigRuleEvaluationStatusAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeConfigRuleEvaluationStatusRequest& request, const DescribeConfigRuleEvaluationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConfigRuleEvaluationStatus(request), context);
}

void ConfigServiceClient::DescribeConfigRuleEvaluationStatusAsync(const DescribeConfigRuleEvaluationStatusRequest& request, const DescribeConfigRuleEvaluationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeConfigRuleEvaluationStatusAsyncHelper( this, request, handler, context ); } );
}

DescribeConfigRulesOutcome ConfigServiceClient::DescribeConfigRules(const DescribeConfigRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeConfigRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConfigRulesOutcomeCallable ConfigServiceClient::DescribeConfigRulesCallable(const DescribeConfigRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfigRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeConfigRulesAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeConfigRulesRequest& request, const DescribeConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConfigRules(request), context);
}

void ConfigServiceClient::DescribeConfigRulesAsync(const DescribeConfigRulesRequest& request, const DescribeConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeConfigRulesAsyncHelper( this, request, handler, context ); } );
}

DescribeConfigurationAggregatorSourcesStatusOutcome ConfigServiceClient::DescribeConfigurationAggregatorSourcesStatus(const DescribeConfigurationAggregatorSourcesStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeConfigurationAggregatorSourcesStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConfigurationAggregatorSourcesStatusOutcomeCallable ConfigServiceClient::DescribeConfigurationAggregatorSourcesStatusCallable(const DescribeConfigurationAggregatorSourcesStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigurationAggregatorSourcesStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfigurationAggregatorSourcesStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeConfigurationAggregatorSourcesStatusAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeConfigurationAggregatorSourcesStatusRequest& request, const DescribeConfigurationAggregatorSourcesStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConfigurationAggregatorSourcesStatus(request), context);
}

void ConfigServiceClient::DescribeConfigurationAggregatorSourcesStatusAsync(const DescribeConfigurationAggregatorSourcesStatusRequest& request, const DescribeConfigurationAggregatorSourcesStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeConfigurationAggregatorSourcesStatusAsyncHelper( this, request, handler, context ); } );
}

DescribeConfigurationAggregatorsOutcome ConfigServiceClient::DescribeConfigurationAggregators(const DescribeConfigurationAggregatorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeConfigurationAggregatorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConfigurationAggregatorsOutcomeCallable ConfigServiceClient::DescribeConfigurationAggregatorsCallable(const DescribeConfigurationAggregatorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigurationAggregatorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfigurationAggregators(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeConfigurationAggregatorsAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeConfigurationAggregatorsRequest& request, const DescribeConfigurationAggregatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConfigurationAggregators(request), context);
}

void ConfigServiceClient::DescribeConfigurationAggregatorsAsync(const DescribeConfigurationAggregatorsRequest& request, const DescribeConfigurationAggregatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeConfigurationAggregatorsAsyncHelper( this, request, handler, context ); } );
}

DescribeConfigurationRecorderStatusOutcome ConfigServiceClient::DescribeConfigurationRecorderStatus(const DescribeConfigurationRecorderStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeConfigurationRecorderStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConfigurationRecorderStatusOutcomeCallable ConfigServiceClient::DescribeConfigurationRecorderStatusCallable(const DescribeConfigurationRecorderStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigurationRecorderStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfigurationRecorderStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeConfigurationRecorderStatusAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeConfigurationRecorderStatusRequest& request, const DescribeConfigurationRecorderStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConfigurationRecorderStatus(request), context);
}

void ConfigServiceClient::DescribeConfigurationRecorderStatusAsync(const DescribeConfigurationRecorderStatusRequest& request, const DescribeConfigurationRecorderStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeConfigurationRecorderStatusAsyncHelper( this, request, handler, context ); } );
}

DescribeConfigurationRecordersOutcome ConfigServiceClient::DescribeConfigurationRecorders(const DescribeConfigurationRecordersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeConfigurationRecordersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConfigurationRecordersOutcomeCallable ConfigServiceClient::DescribeConfigurationRecordersCallable(const DescribeConfigurationRecordersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigurationRecordersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfigurationRecorders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeConfigurationRecordersAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeConfigurationRecordersRequest& request, const DescribeConfigurationRecordersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConfigurationRecorders(request), context);
}

void ConfigServiceClient::DescribeConfigurationRecordersAsync(const DescribeConfigurationRecordersRequest& request, const DescribeConfigurationRecordersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeConfigurationRecordersAsyncHelper( this, request, handler, context ); } );
}

DescribeConformancePackComplianceOutcome ConfigServiceClient::DescribeConformancePackCompliance(const DescribeConformancePackComplianceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeConformancePackComplianceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConformancePackComplianceOutcomeCallable ConfigServiceClient::DescribeConformancePackComplianceCallable(const DescribeConformancePackComplianceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConformancePackComplianceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConformancePackCompliance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeConformancePackComplianceAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeConformancePackComplianceRequest& request, const DescribeConformancePackComplianceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConformancePackCompliance(request), context);
}

void ConfigServiceClient::DescribeConformancePackComplianceAsync(const DescribeConformancePackComplianceRequest& request, const DescribeConformancePackComplianceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeConformancePackComplianceAsyncHelper( this, request, handler, context ); } );
}

DescribeConformancePackStatusOutcome ConfigServiceClient::DescribeConformancePackStatus(const DescribeConformancePackStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeConformancePackStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConformancePackStatusOutcomeCallable ConfigServiceClient::DescribeConformancePackStatusCallable(const DescribeConformancePackStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConformancePackStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConformancePackStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeConformancePackStatusAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeConformancePackStatusRequest& request, const DescribeConformancePackStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConformancePackStatus(request), context);
}

void ConfigServiceClient::DescribeConformancePackStatusAsync(const DescribeConformancePackStatusRequest& request, const DescribeConformancePackStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeConformancePackStatusAsyncHelper( this, request, handler, context ); } );
}

DescribeConformancePacksOutcome ConfigServiceClient::DescribeConformancePacks(const DescribeConformancePacksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeConformancePacksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConformancePacksOutcomeCallable ConfigServiceClient::DescribeConformancePacksCallable(const DescribeConformancePacksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConformancePacksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConformancePacks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeConformancePacksAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeConformancePacksRequest& request, const DescribeConformancePacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConformancePacks(request), context);
}

void ConfigServiceClient::DescribeConformancePacksAsync(const DescribeConformancePacksRequest& request, const DescribeConformancePacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeConformancePacksAsyncHelper( this, request, handler, context ); } );
}

DescribeDeliveryChannelStatusOutcome ConfigServiceClient::DescribeDeliveryChannelStatus(const DescribeDeliveryChannelStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDeliveryChannelStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDeliveryChannelStatusOutcomeCallable ConfigServiceClient::DescribeDeliveryChannelStatusCallable(const DescribeDeliveryChannelStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDeliveryChannelStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDeliveryChannelStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeDeliveryChannelStatusAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeDeliveryChannelStatusRequest& request, const DescribeDeliveryChannelStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDeliveryChannelStatus(request), context);
}

void ConfigServiceClient::DescribeDeliveryChannelStatusAsync(const DescribeDeliveryChannelStatusRequest& request, const DescribeDeliveryChannelStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeDeliveryChannelStatusAsyncHelper( this, request, handler, context ); } );
}

DescribeDeliveryChannelsOutcome ConfigServiceClient::DescribeDeliveryChannels(const DescribeDeliveryChannelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDeliveryChannelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDeliveryChannelsOutcomeCallable ConfigServiceClient::DescribeDeliveryChannelsCallable(const DescribeDeliveryChannelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDeliveryChannelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDeliveryChannels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeDeliveryChannelsAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeDeliveryChannelsRequest& request, const DescribeDeliveryChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDeliveryChannels(request), context);
}

void ConfigServiceClient::DescribeDeliveryChannelsAsync(const DescribeDeliveryChannelsRequest& request, const DescribeDeliveryChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeDeliveryChannelsAsyncHelper( this, request, handler, context ); } );
}

DescribeOrganizationConfigRuleStatusesOutcome ConfigServiceClient::DescribeOrganizationConfigRuleStatuses(const DescribeOrganizationConfigRuleStatusesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeOrganizationConfigRuleStatusesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeOrganizationConfigRuleStatusesOutcomeCallable ConfigServiceClient::DescribeOrganizationConfigRuleStatusesCallable(const DescribeOrganizationConfigRuleStatusesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrganizationConfigRuleStatusesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrganizationConfigRuleStatuses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeOrganizationConfigRuleStatusesAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeOrganizationConfigRuleStatusesRequest& request, const DescribeOrganizationConfigRuleStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOrganizationConfigRuleStatuses(request), context);
}

void ConfigServiceClient::DescribeOrganizationConfigRuleStatusesAsync(const DescribeOrganizationConfigRuleStatusesRequest& request, const DescribeOrganizationConfigRuleStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeOrganizationConfigRuleStatusesAsyncHelper( this, request, handler, context ); } );
}

DescribeOrganizationConfigRulesOutcome ConfigServiceClient::DescribeOrganizationConfigRules(const DescribeOrganizationConfigRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeOrganizationConfigRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeOrganizationConfigRulesOutcomeCallable ConfigServiceClient::DescribeOrganizationConfigRulesCallable(const DescribeOrganizationConfigRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrganizationConfigRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrganizationConfigRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeOrganizationConfigRulesAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeOrganizationConfigRulesRequest& request, const DescribeOrganizationConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOrganizationConfigRules(request), context);
}

void ConfigServiceClient::DescribeOrganizationConfigRulesAsync(const DescribeOrganizationConfigRulesRequest& request, const DescribeOrganizationConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeOrganizationConfigRulesAsyncHelper( this, request, handler, context ); } );
}

DescribeOrganizationConformancePackStatusesOutcome ConfigServiceClient::DescribeOrganizationConformancePackStatuses(const DescribeOrganizationConformancePackStatusesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeOrganizationConformancePackStatusesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeOrganizationConformancePackStatusesOutcomeCallable ConfigServiceClient::DescribeOrganizationConformancePackStatusesCallable(const DescribeOrganizationConformancePackStatusesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrganizationConformancePackStatusesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrganizationConformancePackStatuses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeOrganizationConformancePackStatusesAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeOrganizationConformancePackStatusesRequest& request, const DescribeOrganizationConformancePackStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOrganizationConformancePackStatuses(request), context);
}

void ConfigServiceClient::DescribeOrganizationConformancePackStatusesAsync(const DescribeOrganizationConformancePackStatusesRequest& request, const DescribeOrganizationConformancePackStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeOrganizationConformancePackStatusesAsyncHelper( this, request, handler, context ); } );
}

DescribeOrganizationConformancePacksOutcome ConfigServiceClient::DescribeOrganizationConformancePacks(const DescribeOrganizationConformancePacksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeOrganizationConformancePacksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeOrganizationConformancePacksOutcomeCallable ConfigServiceClient::DescribeOrganizationConformancePacksCallable(const DescribeOrganizationConformancePacksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrganizationConformancePacksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrganizationConformancePacks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeOrganizationConformancePacksAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeOrganizationConformancePacksRequest& request, const DescribeOrganizationConformancePacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOrganizationConformancePacks(request), context);
}

void ConfigServiceClient::DescribeOrganizationConformancePacksAsync(const DescribeOrganizationConformancePacksRequest& request, const DescribeOrganizationConformancePacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeOrganizationConformancePacksAsyncHelper( this, request, handler, context ); } );
}

DescribePendingAggregationRequestsOutcome ConfigServiceClient::DescribePendingAggregationRequests(const DescribePendingAggregationRequestsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePendingAggregationRequestsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePendingAggregationRequestsOutcomeCallable ConfigServiceClient::DescribePendingAggregationRequestsCallable(const DescribePendingAggregationRequestsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePendingAggregationRequestsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePendingAggregationRequests(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribePendingAggregationRequestsAsyncHelper(ConfigServiceClient const * const clientThis, const DescribePendingAggregationRequestsRequest& request, const DescribePendingAggregationRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePendingAggregationRequests(request), context);
}

void ConfigServiceClient::DescribePendingAggregationRequestsAsync(const DescribePendingAggregationRequestsRequest& request, const DescribePendingAggregationRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribePendingAggregationRequestsAsyncHelper( this, request, handler, context ); } );
}

DescribeRemediationConfigurationsOutcome ConfigServiceClient::DescribeRemediationConfigurations(const DescribeRemediationConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeRemediationConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRemediationConfigurationsOutcomeCallable ConfigServiceClient::DescribeRemediationConfigurationsCallable(const DescribeRemediationConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRemediationConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRemediationConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeRemediationConfigurationsAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeRemediationConfigurationsRequest& request, const DescribeRemediationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRemediationConfigurations(request), context);
}

void ConfigServiceClient::DescribeRemediationConfigurationsAsync(const DescribeRemediationConfigurationsRequest& request, const DescribeRemediationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeRemediationConfigurationsAsyncHelper( this, request, handler, context ); } );
}

DescribeRemediationExceptionsOutcome ConfigServiceClient::DescribeRemediationExceptions(const DescribeRemediationExceptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeRemediationExceptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRemediationExceptionsOutcomeCallable ConfigServiceClient::DescribeRemediationExceptionsCallable(const DescribeRemediationExceptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRemediationExceptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRemediationExceptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeRemediationExceptionsAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeRemediationExceptionsRequest& request, const DescribeRemediationExceptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRemediationExceptions(request), context);
}

void ConfigServiceClient::DescribeRemediationExceptionsAsync(const DescribeRemediationExceptionsRequest& request, const DescribeRemediationExceptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeRemediationExceptionsAsyncHelper( this, request, handler, context ); } );
}

DescribeRemediationExecutionStatusOutcome ConfigServiceClient::DescribeRemediationExecutionStatus(const DescribeRemediationExecutionStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeRemediationExecutionStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRemediationExecutionStatusOutcomeCallable ConfigServiceClient::DescribeRemediationExecutionStatusCallable(const DescribeRemediationExecutionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRemediationExecutionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRemediationExecutionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeRemediationExecutionStatusAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeRemediationExecutionStatusRequest& request, const DescribeRemediationExecutionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRemediationExecutionStatus(request), context);
}

void ConfigServiceClient::DescribeRemediationExecutionStatusAsync(const DescribeRemediationExecutionStatusRequest& request, const DescribeRemediationExecutionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeRemediationExecutionStatusAsyncHelper( this, request, handler, context ); } );
}

DescribeRetentionConfigurationsOutcome ConfigServiceClient::DescribeRetentionConfigurations(const DescribeRetentionConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeRetentionConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRetentionConfigurationsOutcomeCallable ConfigServiceClient::DescribeRetentionConfigurationsCallable(const DescribeRetentionConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRetentionConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRetentionConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientDescribeRetentionConfigurationsAsyncHelper(ConfigServiceClient const * const clientThis, const DescribeRetentionConfigurationsRequest& request, const DescribeRetentionConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRetentionConfigurations(request), context);
}

void ConfigServiceClient::DescribeRetentionConfigurationsAsync(const DescribeRetentionConfigurationsRequest& request, const DescribeRetentionConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientDescribeRetentionConfigurationsAsyncHelper( this, request, handler, context ); } );
}

GetAggregateComplianceDetailsByConfigRuleOutcome ConfigServiceClient::GetAggregateComplianceDetailsByConfigRule(const GetAggregateComplianceDetailsByConfigRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAggregateComplianceDetailsByConfigRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAggregateComplianceDetailsByConfigRuleOutcomeCallable ConfigServiceClient::GetAggregateComplianceDetailsByConfigRuleCallable(const GetAggregateComplianceDetailsByConfigRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAggregateComplianceDetailsByConfigRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAggregateComplianceDetailsByConfigRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientGetAggregateComplianceDetailsByConfigRuleAsyncHelper(ConfigServiceClient const * const clientThis, const GetAggregateComplianceDetailsByConfigRuleRequest& request, const GetAggregateComplianceDetailsByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAggregateComplianceDetailsByConfigRule(request), context);
}

void ConfigServiceClient::GetAggregateComplianceDetailsByConfigRuleAsync(const GetAggregateComplianceDetailsByConfigRuleRequest& request, const GetAggregateComplianceDetailsByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientGetAggregateComplianceDetailsByConfigRuleAsyncHelper( this, request, handler, context ); } );
}

GetAggregateConfigRuleComplianceSummaryOutcome ConfigServiceClient::GetAggregateConfigRuleComplianceSummary(const GetAggregateConfigRuleComplianceSummaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAggregateConfigRuleComplianceSummaryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAggregateConfigRuleComplianceSummaryOutcomeCallable ConfigServiceClient::GetAggregateConfigRuleComplianceSummaryCallable(const GetAggregateConfigRuleComplianceSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAggregateConfigRuleComplianceSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAggregateConfigRuleComplianceSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientGetAggregateConfigRuleComplianceSummaryAsyncHelper(ConfigServiceClient const * const clientThis, const GetAggregateConfigRuleComplianceSummaryRequest& request, const GetAggregateConfigRuleComplianceSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAggregateConfigRuleComplianceSummary(request), context);
}

void ConfigServiceClient::GetAggregateConfigRuleComplianceSummaryAsync(const GetAggregateConfigRuleComplianceSummaryRequest& request, const GetAggregateConfigRuleComplianceSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientGetAggregateConfigRuleComplianceSummaryAsyncHelper( this, request, handler, context ); } );
}

GetAggregateConformancePackComplianceSummaryOutcome ConfigServiceClient::GetAggregateConformancePackComplianceSummary(const GetAggregateConformancePackComplianceSummaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAggregateConformancePackComplianceSummaryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAggregateConformancePackComplianceSummaryOutcomeCallable ConfigServiceClient::GetAggregateConformancePackComplianceSummaryCallable(const GetAggregateConformancePackComplianceSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAggregateConformancePackComplianceSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAggregateConformancePackComplianceSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientGetAggregateConformancePackComplianceSummaryAsyncHelper(ConfigServiceClient const * const clientThis, const GetAggregateConformancePackComplianceSummaryRequest& request, const GetAggregateConformancePackComplianceSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAggregateConformancePackComplianceSummary(request), context);
}

void ConfigServiceClient::GetAggregateConformancePackComplianceSummaryAsync(const GetAggregateConformancePackComplianceSummaryRequest& request, const GetAggregateConformancePackComplianceSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientGetAggregateConformancePackComplianceSummaryAsyncHelper( this, request, handler, context ); } );
}

GetAggregateDiscoveredResourceCountsOutcome ConfigServiceClient::GetAggregateDiscoveredResourceCounts(const GetAggregateDiscoveredResourceCountsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAggregateDiscoveredResourceCountsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAggregateDiscoveredResourceCountsOutcomeCallable ConfigServiceClient::GetAggregateDiscoveredResourceCountsCallable(const GetAggregateDiscoveredResourceCountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAggregateDiscoveredResourceCountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAggregateDiscoveredResourceCounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientGetAggregateDiscoveredResourceCountsAsyncHelper(ConfigServiceClient const * const clientThis, const GetAggregateDiscoveredResourceCountsRequest& request, const GetAggregateDiscoveredResourceCountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAggregateDiscoveredResourceCounts(request), context);
}

void ConfigServiceClient::GetAggregateDiscoveredResourceCountsAsync(const GetAggregateDiscoveredResourceCountsRequest& request, const GetAggregateDiscoveredResourceCountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientGetAggregateDiscoveredResourceCountsAsyncHelper( this, request, handler, context ); } );
}

GetAggregateResourceConfigOutcome ConfigServiceClient::GetAggregateResourceConfig(const GetAggregateResourceConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAggregateResourceConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAggregateResourceConfigOutcomeCallable ConfigServiceClient::GetAggregateResourceConfigCallable(const GetAggregateResourceConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAggregateResourceConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAggregateResourceConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientGetAggregateResourceConfigAsyncHelper(ConfigServiceClient const * const clientThis, const GetAggregateResourceConfigRequest& request, const GetAggregateResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAggregateResourceConfig(request), context);
}

void ConfigServiceClient::GetAggregateResourceConfigAsync(const GetAggregateResourceConfigRequest& request, const GetAggregateResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientGetAggregateResourceConfigAsyncHelper( this, request, handler, context ); } );
}

GetComplianceDetailsByConfigRuleOutcome ConfigServiceClient::GetComplianceDetailsByConfigRule(const GetComplianceDetailsByConfigRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetComplianceDetailsByConfigRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetComplianceDetailsByConfigRuleOutcomeCallable ConfigServiceClient::GetComplianceDetailsByConfigRuleCallable(const GetComplianceDetailsByConfigRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetComplianceDetailsByConfigRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetComplianceDetailsByConfigRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientGetComplianceDetailsByConfigRuleAsyncHelper(ConfigServiceClient const * const clientThis, const GetComplianceDetailsByConfigRuleRequest& request, const GetComplianceDetailsByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetComplianceDetailsByConfigRule(request), context);
}

void ConfigServiceClient::GetComplianceDetailsByConfigRuleAsync(const GetComplianceDetailsByConfigRuleRequest& request, const GetComplianceDetailsByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientGetComplianceDetailsByConfigRuleAsyncHelper( this, request, handler, context ); } );
}

GetComplianceDetailsByResourceOutcome ConfigServiceClient::GetComplianceDetailsByResource(const GetComplianceDetailsByResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetComplianceDetailsByResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetComplianceDetailsByResourceOutcomeCallable ConfigServiceClient::GetComplianceDetailsByResourceCallable(const GetComplianceDetailsByResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetComplianceDetailsByResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetComplianceDetailsByResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientGetComplianceDetailsByResourceAsyncHelper(ConfigServiceClient const * const clientThis, const GetComplianceDetailsByResourceRequest& request, const GetComplianceDetailsByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetComplianceDetailsByResource(request), context);
}

void ConfigServiceClient::GetComplianceDetailsByResourceAsync(const GetComplianceDetailsByResourceRequest& request, const GetComplianceDetailsByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientGetComplianceDetailsByResourceAsyncHelper( this, request, handler, context ); } );
}

GetComplianceSummaryByConfigRuleOutcome ConfigServiceClient::GetComplianceSummaryByConfigRule() const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  return GetComplianceSummaryByConfigRuleOutcome(MakeRequest(ss.str(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "GetComplianceSummaryByConfigRule"));
}

GetComplianceSummaryByConfigRuleOutcomeCallable ConfigServiceClient::GetComplianceSummaryByConfigRuleCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< GetComplianceSummaryByConfigRuleOutcome() > >(ALLOCATION_TAG, [this](){ return this->GetComplianceSummaryByConfigRule(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientGetComplianceSummaryByConfigRuleAsyncHelper(ConfigServiceClient const * const clientThis, const GetComplianceSummaryByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, clientThis->GetComplianceSummaryByConfigRule(), context);
}

void ConfigServiceClient::GetComplianceSummaryByConfigRuleAsync(const GetComplianceSummaryByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context](){ ConfigServiceClientGetComplianceSummaryByConfigRuleAsyncHelper( this, handler, context ); } );
}

GetComplianceSummaryByResourceTypeOutcome ConfigServiceClient::GetComplianceSummaryByResourceType(const GetComplianceSummaryByResourceTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetComplianceSummaryByResourceTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetComplianceSummaryByResourceTypeOutcomeCallable ConfigServiceClient::GetComplianceSummaryByResourceTypeCallable(const GetComplianceSummaryByResourceTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetComplianceSummaryByResourceTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetComplianceSummaryByResourceType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientGetComplianceSummaryByResourceTypeAsyncHelper(ConfigServiceClient const * const clientThis, const GetComplianceSummaryByResourceTypeRequest& request, const GetComplianceSummaryByResourceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetComplianceSummaryByResourceType(request), context);
}

void ConfigServiceClient::GetComplianceSummaryByResourceTypeAsync(const GetComplianceSummaryByResourceTypeRequest& request, const GetComplianceSummaryByResourceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientGetComplianceSummaryByResourceTypeAsyncHelper( this, request, handler, context ); } );
}

GetConformancePackComplianceDetailsOutcome ConfigServiceClient::GetConformancePackComplianceDetails(const GetConformancePackComplianceDetailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetConformancePackComplianceDetailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetConformancePackComplianceDetailsOutcomeCallable ConfigServiceClient::GetConformancePackComplianceDetailsCallable(const GetConformancePackComplianceDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConformancePackComplianceDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConformancePackComplianceDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientGetConformancePackComplianceDetailsAsyncHelper(ConfigServiceClient const * const clientThis, const GetConformancePackComplianceDetailsRequest& request, const GetConformancePackComplianceDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetConformancePackComplianceDetails(request), context);
}

void ConfigServiceClient::GetConformancePackComplianceDetailsAsync(const GetConformancePackComplianceDetailsRequest& request, const GetConformancePackComplianceDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientGetConformancePackComplianceDetailsAsyncHelper( this, request, handler, context ); } );
}

GetConformancePackComplianceSummaryOutcome ConfigServiceClient::GetConformancePackComplianceSummary(const GetConformancePackComplianceSummaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetConformancePackComplianceSummaryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetConformancePackComplianceSummaryOutcomeCallable ConfigServiceClient::GetConformancePackComplianceSummaryCallable(const GetConformancePackComplianceSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConformancePackComplianceSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConformancePackComplianceSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientGetConformancePackComplianceSummaryAsyncHelper(ConfigServiceClient const * const clientThis, const GetConformancePackComplianceSummaryRequest& request, const GetConformancePackComplianceSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetConformancePackComplianceSummary(request), context);
}

void ConfigServiceClient::GetConformancePackComplianceSummaryAsync(const GetConformancePackComplianceSummaryRequest& request, const GetConformancePackComplianceSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientGetConformancePackComplianceSummaryAsyncHelper( this, request, handler, context ); } );
}

GetCustomRulePolicyOutcome ConfigServiceClient::GetCustomRulePolicy(const GetCustomRulePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCustomRulePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCustomRulePolicyOutcomeCallable ConfigServiceClient::GetCustomRulePolicyCallable(const GetCustomRulePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCustomRulePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCustomRulePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientGetCustomRulePolicyAsyncHelper(ConfigServiceClient const * const clientThis, const GetCustomRulePolicyRequest& request, const GetCustomRulePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCustomRulePolicy(request), context);
}

void ConfigServiceClient::GetCustomRulePolicyAsync(const GetCustomRulePolicyRequest& request, const GetCustomRulePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientGetCustomRulePolicyAsyncHelper( this, request, handler, context ); } );
}

GetDiscoveredResourceCountsOutcome ConfigServiceClient::GetDiscoveredResourceCounts(const GetDiscoveredResourceCountsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDiscoveredResourceCountsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDiscoveredResourceCountsOutcomeCallable ConfigServiceClient::GetDiscoveredResourceCountsCallable(const GetDiscoveredResourceCountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDiscoveredResourceCountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDiscoveredResourceCounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientGetDiscoveredResourceCountsAsyncHelper(ConfigServiceClient const * const clientThis, const GetDiscoveredResourceCountsRequest& request, const GetDiscoveredResourceCountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDiscoveredResourceCounts(request), context);
}

void ConfigServiceClient::GetDiscoveredResourceCountsAsync(const GetDiscoveredResourceCountsRequest& request, const GetDiscoveredResourceCountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientGetDiscoveredResourceCountsAsyncHelper( this, request, handler, context ); } );
}

GetOrganizationConfigRuleDetailedStatusOutcome ConfigServiceClient::GetOrganizationConfigRuleDetailedStatus(const GetOrganizationConfigRuleDetailedStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetOrganizationConfigRuleDetailedStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOrganizationConfigRuleDetailedStatusOutcomeCallable ConfigServiceClient::GetOrganizationConfigRuleDetailedStatusCallable(const GetOrganizationConfigRuleDetailedStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOrganizationConfigRuleDetailedStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOrganizationConfigRuleDetailedStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientGetOrganizationConfigRuleDetailedStatusAsyncHelper(ConfigServiceClient const * const clientThis, const GetOrganizationConfigRuleDetailedStatusRequest& request, const GetOrganizationConfigRuleDetailedStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetOrganizationConfigRuleDetailedStatus(request), context);
}

void ConfigServiceClient::GetOrganizationConfigRuleDetailedStatusAsync(const GetOrganizationConfigRuleDetailedStatusRequest& request, const GetOrganizationConfigRuleDetailedStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientGetOrganizationConfigRuleDetailedStatusAsyncHelper( this, request, handler, context ); } );
}

GetOrganizationConformancePackDetailedStatusOutcome ConfigServiceClient::GetOrganizationConformancePackDetailedStatus(const GetOrganizationConformancePackDetailedStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetOrganizationConformancePackDetailedStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOrganizationConformancePackDetailedStatusOutcomeCallable ConfigServiceClient::GetOrganizationConformancePackDetailedStatusCallable(const GetOrganizationConformancePackDetailedStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOrganizationConformancePackDetailedStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOrganizationConformancePackDetailedStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientGetOrganizationConformancePackDetailedStatusAsyncHelper(ConfigServiceClient const * const clientThis, const GetOrganizationConformancePackDetailedStatusRequest& request, const GetOrganizationConformancePackDetailedStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetOrganizationConformancePackDetailedStatus(request), context);
}

void ConfigServiceClient::GetOrganizationConformancePackDetailedStatusAsync(const GetOrganizationConformancePackDetailedStatusRequest& request, const GetOrganizationConformancePackDetailedStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientGetOrganizationConformancePackDetailedStatusAsyncHelper( this, request, handler, context ); } );
}

GetOrganizationCustomRulePolicyOutcome ConfigServiceClient::GetOrganizationCustomRulePolicy(const GetOrganizationCustomRulePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetOrganizationCustomRulePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOrganizationCustomRulePolicyOutcomeCallable ConfigServiceClient::GetOrganizationCustomRulePolicyCallable(const GetOrganizationCustomRulePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOrganizationCustomRulePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOrganizationCustomRulePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientGetOrganizationCustomRulePolicyAsyncHelper(ConfigServiceClient const * const clientThis, const GetOrganizationCustomRulePolicyRequest& request, const GetOrganizationCustomRulePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetOrganizationCustomRulePolicy(request), context);
}

void ConfigServiceClient::GetOrganizationCustomRulePolicyAsync(const GetOrganizationCustomRulePolicyRequest& request, const GetOrganizationCustomRulePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientGetOrganizationCustomRulePolicyAsyncHelper( this, request, handler, context ); } );
}

GetResourceConfigHistoryOutcome ConfigServiceClient::GetResourceConfigHistory(const GetResourceConfigHistoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetResourceConfigHistoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResourceConfigHistoryOutcomeCallable ConfigServiceClient::GetResourceConfigHistoryCallable(const GetResourceConfigHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourceConfigHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourceConfigHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientGetResourceConfigHistoryAsyncHelper(ConfigServiceClient const * const clientThis, const GetResourceConfigHistoryRequest& request, const GetResourceConfigHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetResourceConfigHistory(request), context);
}

void ConfigServiceClient::GetResourceConfigHistoryAsync(const GetResourceConfigHistoryRequest& request, const GetResourceConfigHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientGetResourceConfigHistoryAsyncHelper( this, request, handler, context ); } );
}

GetStoredQueryOutcome ConfigServiceClient::GetStoredQuery(const GetStoredQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetStoredQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetStoredQueryOutcomeCallable ConfigServiceClient::GetStoredQueryCallable(const GetStoredQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStoredQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStoredQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientGetStoredQueryAsyncHelper(ConfigServiceClient const * const clientThis, const GetStoredQueryRequest& request, const GetStoredQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetStoredQuery(request), context);
}

void ConfigServiceClient::GetStoredQueryAsync(const GetStoredQueryRequest& request, const GetStoredQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientGetStoredQueryAsyncHelper( this, request, handler, context ); } );
}

ListAggregateDiscoveredResourcesOutcome ConfigServiceClient::ListAggregateDiscoveredResources(const ListAggregateDiscoveredResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAggregateDiscoveredResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAggregateDiscoveredResourcesOutcomeCallable ConfigServiceClient::ListAggregateDiscoveredResourcesCallable(const ListAggregateDiscoveredResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAggregateDiscoveredResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAggregateDiscoveredResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientListAggregateDiscoveredResourcesAsyncHelper(ConfigServiceClient const * const clientThis, const ListAggregateDiscoveredResourcesRequest& request, const ListAggregateDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAggregateDiscoveredResources(request), context);
}

void ConfigServiceClient::ListAggregateDiscoveredResourcesAsync(const ListAggregateDiscoveredResourcesRequest& request, const ListAggregateDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientListAggregateDiscoveredResourcesAsyncHelper( this, request, handler, context ); } );
}

ListConformancePackComplianceScoresOutcome ConfigServiceClient::ListConformancePackComplianceScores(const ListConformancePackComplianceScoresRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListConformancePackComplianceScoresOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListConformancePackComplianceScoresOutcomeCallable ConfigServiceClient::ListConformancePackComplianceScoresCallable(const ListConformancePackComplianceScoresRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConformancePackComplianceScoresOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConformancePackComplianceScores(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientListConformancePackComplianceScoresAsyncHelper(ConfigServiceClient const * const clientThis, const ListConformancePackComplianceScoresRequest& request, const ListConformancePackComplianceScoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListConformancePackComplianceScores(request), context);
}

void ConfigServiceClient::ListConformancePackComplianceScoresAsync(const ListConformancePackComplianceScoresRequest& request, const ListConformancePackComplianceScoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientListConformancePackComplianceScoresAsyncHelper( this, request, handler, context ); } );
}

ListDiscoveredResourcesOutcome ConfigServiceClient::ListDiscoveredResources(const ListDiscoveredResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDiscoveredResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDiscoveredResourcesOutcomeCallable ConfigServiceClient::ListDiscoveredResourcesCallable(const ListDiscoveredResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDiscoveredResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDiscoveredResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientListDiscoveredResourcesAsyncHelper(ConfigServiceClient const * const clientThis, const ListDiscoveredResourcesRequest& request, const ListDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDiscoveredResources(request), context);
}

void ConfigServiceClient::ListDiscoveredResourcesAsync(const ListDiscoveredResourcesRequest& request, const ListDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientListDiscoveredResourcesAsyncHelper( this, request, handler, context ); } );
}

ListStoredQueriesOutcome ConfigServiceClient::ListStoredQueries(const ListStoredQueriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListStoredQueriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStoredQueriesOutcomeCallable ConfigServiceClient::ListStoredQueriesCallable(const ListStoredQueriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStoredQueriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStoredQueries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientListStoredQueriesAsyncHelper(ConfigServiceClient const * const clientThis, const ListStoredQueriesRequest& request, const ListStoredQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListStoredQueries(request), context);
}

void ConfigServiceClient::ListStoredQueriesAsync(const ListStoredQueriesRequest& request, const ListStoredQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientListStoredQueriesAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome ConfigServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ConfigServiceClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientListTagsForResourceAsyncHelper(ConfigServiceClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void ConfigServiceClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

PutAggregationAuthorizationOutcome ConfigServiceClient::PutAggregationAuthorization(const PutAggregationAuthorizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutAggregationAuthorizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAggregationAuthorizationOutcomeCallable ConfigServiceClient::PutAggregationAuthorizationCallable(const PutAggregationAuthorizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAggregationAuthorizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAggregationAuthorization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientPutAggregationAuthorizationAsyncHelper(ConfigServiceClient const * const clientThis, const PutAggregationAuthorizationRequest& request, const PutAggregationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutAggregationAuthorization(request), context);
}

void ConfigServiceClient::PutAggregationAuthorizationAsync(const PutAggregationAuthorizationRequest& request, const PutAggregationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientPutAggregationAuthorizationAsyncHelper( this, request, handler, context ); } );
}

PutConfigRuleOutcome ConfigServiceClient::PutConfigRule(const PutConfigRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutConfigRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutConfigRuleOutcomeCallable ConfigServiceClient::PutConfigRuleCallable(const PutConfigRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConfigRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConfigRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientPutConfigRuleAsyncHelper(ConfigServiceClient const * const clientThis, const PutConfigRuleRequest& request, const PutConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutConfigRule(request), context);
}

void ConfigServiceClient::PutConfigRuleAsync(const PutConfigRuleRequest& request, const PutConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientPutConfigRuleAsyncHelper( this, request, handler, context ); } );
}

PutConfigurationAggregatorOutcome ConfigServiceClient::PutConfigurationAggregator(const PutConfigurationAggregatorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutConfigurationAggregatorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutConfigurationAggregatorOutcomeCallable ConfigServiceClient::PutConfigurationAggregatorCallable(const PutConfigurationAggregatorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConfigurationAggregatorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConfigurationAggregator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientPutConfigurationAggregatorAsyncHelper(ConfigServiceClient const * const clientThis, const PutConfigurationAggregatorRequest& request, const PutConfigurationAggregatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutConfigurationAggregator(request), context);
}

void ConfigServiceClient::PutConfigurationAggregatorAsync(const PutConfigurationAggregatorRequest& request, const PutConfigurationAggregatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientPutConfigurationAggregatorAsyncHelper( this, request, handler, context ); } );
}

PutConfigurationRecorderOutcome ConfigServiceClient::PutConfigurationRecorder(const PutConfigurationRecorderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutConfigurationRecorderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutConfigurationRecorderOutcomeCallable ConfigServiceClient::PutConfigurationRecorderCallable(const PutConfigurationRecorderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConfigurationRecorderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConfigurationRecorder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientPutConfigurationRecorderAsyncHelper(ConfigServiceClient const * const clientThis, const PutConfigurationRecorderRequest& request, const PutConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutConfigurationRecorder(request), context);
}

void ConfigServiceClient::PutConfigurationRecorderAsync(const PutConfigurationRecorderRequest& request, const PutConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientPutConfigurationRecorderAsyncHelper( this, request, handler, context ); } );
}

PutConformancePackOutcome ConfigServiceClient::PutConformancePack(const PutConformancePackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutConformancePackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutConformancePackOutcomeCallable ConfigServiceClient::PutConformancePackCallable(const PutConformancePackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConformancePackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConformancePack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientPutConformancePackAsyncHelper(ConfigServiceClient const * const clientThis, const PutConformancePackRequest& request, const PutConformancePackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutConformancePack(request), context);
}

void ConfigServiceClient::PutConformancePackAsync(const PutConformancePackRequest& request, const PutConformancePackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientPutConformancePackAsyncHelper( this, request, handler, context ); } );
}

PutDeliveryChannelOutcome ConfigServiceClient::PutDeliveryChannel(const PutDeliveryChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutDeliveryChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutDeliveryChannelOutcomeCallable ConfigServiceClient::PutDeliveryChannelCallable(const PutDeliveryChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDeliveryChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDeliveryChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientPutDeliveryChannelAsyncHelper(ConfigServiceClient const * const clientThis, const PutDeliveryChannelRequest& request, const PutDeliveryChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutDeliveryChannel(request), context);
}

void ConfigServiceClient::PutDeliveryChannelAsync(const PutDeliveryChannelRequest& request, const PutDeliveryChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientPutDeliveryChannelAsyncHelper( this, request, handler, context ); } );
}

PutEvaluationsOutcome ConfigServiceClient::PutEvaluations(const PutEvaluationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutEvaluationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutEvaluationsOutcomeCallable ConfigServiceClient::PutEvaluationsCallable(const PutEvaluationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEvaluationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEvaluations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientPutEvaluationsAsyncHelper(ConfigServiceClient const * const clientThis, const PutEvaluationsRequest& request, const PutEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutEvaluations(request), context);
}

void ConfigServiceClient::PutEvaluationsAsync(const PutEvaluationsRequest& request, const PutEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientPutEvaluationsAsyncHelper( this, request, handler, context ); } );
}

PutExternalEvaluationOutcome ConfigServiceClient::PutExternalEvaluation(const PutExternalEvaluationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutExternalEvaluationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutExternalEvaluationOutcomeCallable ConfigServiceClient::PutExternalEvaluationCallable(const PutExternalEvaluationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutExternalEvaluationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutExternalEvaluation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientPutExternalEvaluationAsyncHelper(ConfigServiceClient const * const clientThis, const PutExternalEvaluationRequest& request, const PutExternalEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutExternalEvaluation(request), context);
}

void ConfigServiceClient::PutExternalEvaluationAsync(const PutExternalEvaluationRequest& request, const PutExternalEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientPutExternalEvaluationAsyncHelper( this, request, handler, context ); } );
}

PutOrganizationConfigRuleOutcome ConfigServiceClient::PutOrganizationConfigRule(const PutOrganizationConfigRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutOrganizationConfigRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutOrganizationConfigRuleOutcomeCallable ConfigServiceClient::PutOrganizationConfigRuleCallable(const PutOrganizationConfigRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutOrganizationConfigRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutOrganizationConfigRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientPutOrganizationConfigRuleAsyncHelper(ConfigServiceClient const * const clientThis, const PutOrganizationConfigRuleRequest& request, const PutOrganizationConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutOrganizationConfigRule(request), context);
}

void ConfigServiceClient::PutOrganizationConfigRuleAsync(const PutOrganizationConfigRuleRequest& request, const PutOrganizationConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientPutOrganizationConfigRuleAsyncHelper( this, request, handler, context ); } );
}

PutOrganizationConformancePackOutcome ConfigServiceClient::PutOrganizationConformancePack(const PutOrganizationConformancePackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutOrganizationConformancePackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutOrganizationConformancePackOutcomeCallable ConfigServiceClient::PutOrganizationConformancePackCallable(const PutOrganizationConformancePackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutOrganizationConformancePackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutOrganizationConformancePack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientPutOrganizationConformancePackAsyncHelper(ConfigServiceClient const * const clientThis, const PutOrganizationConformancePackRequest& request, const PutOrganizationConformancePackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutOrganizationConformancePack(request), context);
}

void ConfigServiceClient::PutOrganizationConformancePackAsync(const PutOrganizationConformancePackRequest& request, const PutOrganizationConformancePackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientPutOrganizationConformancePackAsyncHelper( this, request, handler, context ); } );
}

PutRemediationConfigurationsOutcome ConfigServiceClient::PutRemediationConfigurations(const PutRemediationConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutRemediationConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRemediationConfigurationsOutcomeCallable ConfigServiceClient::PutRemediationConfigurationsCallable(const PutRemediationConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRemediationConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRemediationConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientPutRemediationConfigurationsAsyncHelper(ConfigServiceClient const * const clientThis, const PutRemediationConfigurationsRequest& request, const PutRemediationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutRemediationConfigurations(request), context);
}

void ConfigServiceClient::PutRemediationConfigurationsAsync(const PutRemediationConfigurationsRequest& request, const PutRemediationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientPutRemediationConfigurationsAsyncHelper( this, request, handler, context ); } );
}

PutRemediationExceptionsOutcome ConfigServiceClient::PutRemediationExceptions(const PutRemediationExceptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutRemediationExceptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRemediationExceptionsOutcomeCallable ConfigServiceClient::PutRemediationExceptionsCallable(const PutRemediationExceptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRemediationExceptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRemediationExceptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientPutRemediationExceptionsAsyncHelper(ConfigServiceClient const * const clientThis, const PutRemediationExceptionsRequest& request, const PutRemediationExceptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutRemediationExceptions(request), context);
}

void ConfigServiceClient::PutRemediationExceptionsAsync(const PutRemediationExceptionsRequest& request, const PutRemediationExceptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientPutRemediationExceptionsAsyncHelper( this, request, handler, context ); } );
}

PutResourceConfigOutcome ConfigServiceClient::PutResourceConfig(const PutResourceConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutResourceConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutResourceConfigOutcomeCallable ConfigServiceClient::PutResourceConfigCallable(const PutResourceConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResourceConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResourceConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientPutResourceConfigAsyncHelper(ConfigServiceClient const * const clientThis, const PutResourceConfigRequest& request, const PutResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutResourceConfig(request), context);
}

void ConfigServiceClient::PutResourceConfigAsync(const PutResourceConfigRequest& request, const PutResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientPutResourceConfigAsyncHelper( this, request, handler, context ); } );
}

PutRetentionConfigurationOutcome ConfigServiceClient::PutRetentionConfiguration(const PutRetentionConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutRetentionConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRetentionConfigurationOutcomeCallable ConfigServiceClient::PutRetentionConfigurationCallable(const PutRetentionConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRetentionConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRetentionConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientPutRetentionConfigurationAsyncHelper(ConfigServiceClient const * const clientThis, const PutRetentionConfigurationRequest& request, const PutRetentionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutRetentionConfiguration(request), context);
}

void ConfigServiceClient::PutRetentionConfigurationAsync(const PutRetentionConfigurationRequest& request, const PutRetentionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientPutRetentionConfigurationAsyncHelper( this, request, handler, context ); } );
}

PutStoredQueryOutcome ConfigServiceClient::PutStoredQuery(const PutStoredQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutStoredQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutStoredQueryOutcomeCallable ConfigServiceClient::PutStoredQueryCallable(const PutStoredQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutStoredQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutStoredQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientPutStoredQueryAsyncHelper(ConfigServiceClient const * const clientThis, const PutStoredQueryRequest& request, const PutStoredQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutStoredQuery(request), context);
}

void ConfigServiceClient::PutStoredQueryAsync(const PutStoredQueryRequest& request, const PutStoredQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientPutStoredQueryAsyncHelper( this, request, handler, context ); } );
}

SelectAggregateResourceConfigOutcome ConfigServiceClient::SelectAggregateResourceConfig(const SelectAggregateResourceConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SelectAggregateResourceConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SelectAggregateResourceConfigOutcomeCallable ConfigServiceClient::SelectAggregateResourceConfigCallable(const SelectAggregateResourceConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SelectAggregateResourceConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SelectAggregateResourceConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientSelectAggregateResourceConfigAsyncHelper(ConfigServiceClient const * const clientThis, const SelectAggregateResourceConfigRequest& request, const SelectAggregateResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SelectAggregateResourceConfig(request), context);
}

void ConfigServiceClient::SelectAggregateResourceConfigAsync(const SelectAggregateResourceConfigRequest& request, const SelectAggregateResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientSelectAggregateResourceConfigAsyncHelper( this, request, handler, context ); } );
}

SelectResourceConfigOutcome ConfigServiceClient::SelectResourceConfig(const SelectResourceConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SelectResourceConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SelectResourceConfigOutcomeCallable ConfigServiceClient::SelectResourceConfigCallable(const SelectResourceConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SelectResourceConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SelectResourceConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientSelectResourceConfigAsyncHelper(ConfigServiceClient const * const clientThis, const SelectResourceConfigRequest& request, const SelectResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SelectResourceConfig(request), context);
}

void ConfigServiceClient::SelectResourceConfigAsync(const SelectResourceConfigRequest& request, const SelectResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientSelectResourceConfigAsyncHelper( this, request, handler, context ); } );
}

StartConfigRulesEvaluationOutcome ConfigServiceClient::StartConfigRulesEvaluation(const StartConfigRulesEvaluationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartConfigRulesEvaluationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartConfigRulesEvaluationOutcomeCallable ConfigServiceClient::StartConfigRulesEvaluationCallable(const StartConfigRulesEvaluationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartConfigRulesEvaluationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartConfigRulesEvaluation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientStartConfigRulesEvaluationAsyncHelper(ConfigServiceClient const * const clientThis, const StartConfigRulesEvaluationRequest& request, const StartConfigRulesEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartConfigRulesEvaluation(request), context);
}

void ConfigServiceClient::StartConfigRulesEvaluationAsync(const StartConfigRulesEvaluationRequest& request, const StartConfigRulesEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientStartConfigRulesEvaluationAsyncHelper( this, request, handler, context ); } );
}

StartConfigurationRecorderOutcome ConfigServiceClient::StartConfigurationRecorder(const StartConfigurationRecorderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartConfigurationRecorderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartConfigurationRecorderOutcomeCallable ConfigServiceClient::StartConfigurationRecorderCallable(const StartConfigurationRecorderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartConfigurationRecorderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartConfigurationRecorder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientStartConfigurationRecorderAsyncHelper(ConfigServiceClient const * const clientThis, const StartConfigurationRecorderRequest& request, const StartConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartConfigurationRecorder(request), context);
}

void ConfigServiceClient::StartConfigurationRecorderAsync(const StartConfigurationRecorderRequest& request, const StartConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientStartConfigurationRecorderAsyncHelper( this, request, handler, context ); } );
}

StartRemediationExecutionOutcome ConfigServiceClient::StartRemediationExecution(const StartRemediationExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartRemediationExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartRemediationExecutionOutcomeCallable ConfigServiceClient::StartRemediationExecutionCallable(const StartRemediationExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartRemediationExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartRemediationExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientStartRemediationExecutionAsyncHelper(ConfigServiceClient const * const clientThis, const StartRemediationExecutionRequest& request, const StartRemediationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartRemediationExecution(request), context);
}

void ConfigServiceClient::StartRemediationExecutionAsync(const StartRemediationExecutionRequest& request, const StartRemediationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientStartRemediationExecutionAsyncHelper( this, request, handler, context ); } );
}

StopConfigurationRecorderOutcome ConfigServiceClient::StopConfigurationRecorder(const StopConfigurationRecorderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopConfigurationRecorderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopConfigurationRecorderOutcomeCallable ConfigServiceClient::StopConfigurationRecorderCallable(const StopConfigurationRecorderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopConfigurationRecorderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopConfigurationRecorder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientStopConfigurationRecorderAsyncHelper(ConfigServiceClient const * const clientThis, const StopConfigurationRecorderRequest& request, const StopConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopConfigurationRecorder(request), context);
}

void ConfigServiceClient::StopConfigurationRecorderAsync(const StopConfigurationRecorderRequest& request, const StopConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientStopConfigurationRecorderAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome ConfigServiceClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ConfigServiceClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientTagResourceAsyncHelper(ConfigServiceClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void ConfigServiceClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome ConfigServiceClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ConfigServiceClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConfigServiceClientUntagResourceAsyncHelper(ConfigServiceClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void ConfigServiceClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConfigServiceClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

