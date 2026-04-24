/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/CloudTrailClient.h>
#include <aws/cloudtrail/CloudTrailEndpointProvider.h>
#include <aws/cloudtrail/CloudTrailErrorMarshaller.h>
#include <aws/cloudtrail/model/AddTagsRequest.h>
#include <aws/cloudtrail/model/CancelQueryRequest.h>
#include <aws/cloudtrail/model/CreateChannelRequest.h>
#include <aws/cloudtrail/model/CreateDashboardRequest.h>
#include <aws/cloudtrail/model/CreateEventDataStoreRequest.h>
#include <aws/cloudtrail/model/CreateTrailRequest.h>
#include <aws/cloudtrail/model/DeleteChannelRequest.h>
#include <aws/cloudtrail/model/DeleteDashboardRequest.h>
#include <aws/cloudtrail/model/DeleteEventDataStoreRequest.h>
#include <aws/cloudtrail/model/DeleteResourcePolicyRequest.h>
#include <aws/cloudtrail/model/DeleteTrailRequest.h>
#include <aws/cloudtrail/model/DeregisterOrganizationDelegatedAdminRequest.h>
#include <aws/cloudtrail/model/DescribeQueryRequest.h>
#include <aws/cloudtrail/model/DescribeTrailsRequest.h>
#include <aws/cloudtrail/model/DisableFederationRequest.h>
#include <aws/cloudtrail/model/EnableFederationRequest.h>
#include <aws/cloudtrail/model/GenerateQueryRequest.h>
#include <aws/cloudtrail/model/GetChannelRequest.h>
#include <aws/cloudtrail/model/GetDashboardRequest.h>
#include <aws/cloudtrail/model/GetEventConfigurationRequest.h>
#include <aws/cloudtrail/model/GetEventDataStoreRequest.h>
#include <aws/cloudtrail/model/GetEventSelectorsRequest.h>
#include <aws/cloudtrail/model/GetImportRequest.h>
#include <aws/cloudtrail/model/GetInsightSelectorsRequest.h>
#include <aws/cloudtrail/model/GetQueryResultsRequest.h>
#include <aws/cloudtrail/model/GetResourcePolicyRequest.h>
#include <aws/cloudtrail/model/GetTrailRequest.h>
#include <aws/cloudtrail/model/GetTrailStatusRequest.h>
#include <aws/cloudtrail/model/ListChannelsRequest.h>
#include <aws/cloudtrail/model/ListDashboardsRequest.h>
#include <aws/cloudtrail/model/ListEventDataStoresRequest.h>
#include <aws/cloudtrail/model/ListImportFailuresRequest.h>
#include <aws/cloudtrail/model/ListImportsRequest.h>
#include <aws/cloudtrail/model/ListInsightsDataRequest.h>
#include <aws/cloudtrail/model/ListInsightsMetricDataRequest.h>
#include <aws/cloudtrail/model/ListPublicKeysRequest.h>
#include <aws/cloudtrail/model/ListQueriesRequest.h>
#include <aws/cloudtrail/model/ListTagsRequest.h>
#include <aws/cloudtrail/model/ListTrailsRequest.h>
#include <aws/cloudtrail/model/LookupEventsRequest.h>
#include <aws/cloudtrail/model/PutEventConfigurationRequest.h>
#include <aws/cloudtrail/model/PutEventSelectorsRequest.h>
#include <aws/cloudtrail/model/PutInsightSelectorsRequest.h>
#include <aws/cloudtrail/model/PutResourcePolicyRequest.h>
#include <aws/cloudtrail/model/RegisterOrganizationDelegatedAdminRequest.h>
#include <aws/cloudtrail/model/RemoveTagsRequest.h>
#include <aws/cloudtrail/model/RestoreEventDataStoreRequest.h>
#include <aws/cloudtrail/model/SearchSampleQueriesRequest.h>
#include <aws/cloudtrail/model/StartDashboardRefreshRequest.h>
#include <aws/cloudtrail/model/StartEventDataStoreIngestionRequest.h>
#include <aws/cloudtrail/model/StartImportRequest.h>
#include <aws/cloudtrail/model/StartLoggingRequest.h>
#include <aws/cloudtrail/model/StartQueryRequest.h>
#include <aws/cloudtrail/model/StopEventDataStoreIngestionRequest.h>
#include <aws/cloudtrail/model/StopImportRequest.h>
#include <aws/cloudtrail/model/StopLoggingRequest.h>
#include <aws/cloudtrail/model/UpdateChannelRequest.h>
#include <aws/cloudtrail/model/UpdateDashboardRequest.h>
#include <aws/cloudtrail/model/UpdateEventDataStoreRequest.h>
#include <aws/cloudtrail/model/UpdateTrailRequest.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudTrail;
using namespace Aws::CloudTrail::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CloudTrail {
const char SERVICE_NAME[] = "cloudtrail";
const char ALLOCATION_TAG[] = "CloudTrailClient";
}  // namespace CloudTrail
}  // namespace Aws
const char* CloudTrailClient::GetServiceName() { return SERVICE_NAME; }
const char* CloudTrailClient::GetAllocationTag() { return ALLOCATION_TAG; }

CloudTrailClient::CloudTrailClient(const CloudTrail::CloudTrailClientConfiguration& clientConfiguration,
                                   std::shared_ptr<CloudTrailEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudTrailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudTrailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudTrailClient::CloudTrailClient(const AWSCredentials& credentials, std::shared_ptr<CloudTrailEndpointProviderBase> endpointProvider,
                                   const CloudTrail::CloudTrailClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudTrailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudTrailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudTrailClient::CloudTrailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<CloudTrailEndpointProviderBase> endpointProvider,
                                   const CloudTrail::CloudTrailClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudTrailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudTrailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CloudTrailClient::CloudTrailClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudTrailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudTrailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudTrailClient::CloudTrailClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudTrailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudTrailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudTrailClient::CloudTrailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudTrailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudTrailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CloudTrailClient::~CloudTrailClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CloudTrailEndpointProviderBase>& CloudTrailClient::accessEndpointProvider() { return m_endpointProvider; }

void CloudTrailClient::init(const CloudTrail::CloudTrailClientConfiguration& config) {
  AWSClient::SetServiceClientName("CloudTrail");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "cloudtrail");
}

void CloudTrailClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CloudTrailClient::InvokeOperationOutcome CloudTrailClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                                                  Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AddTagsOutcome CloudTrailClient::AddTags(const AddTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddTagsOutcome(result.GetResultWithOwnership()) : AddTagsOutcome(std::move(result.GetError()));
}

CancelQueryOutcome CloudTrailClient::CancelQuery(const CancelQueryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelQueryOutcome(result.GetResultWithOwnership()) : CancelQueryOutcome(std::move(result.GetError()));
}

CreateChannelOutcome CloudTrailClient::CreateChannel(const CreateChannelRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateChannelOutcome(result.GetResultWithOwnership()) : CreateChannelOutcome(std::move(result.GetError()));
}

CreateDashboardOutcome CloudTrailClient::CreateDashboard(const CreateDashboardRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDashboardOutcome(result.GetResultWithOwnership())
                            : CreateDashboardOutcome(std::move(result.GetError()));
}

CreateEventDataStoreOutcome CloudTrailClient::CreateEventDataStore(const CreateEventDataStoreRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEventDataStoreOutcome(result.GetResultWithOwnership())
                            : CreateEventDataStoreOutcome(std::move(result.GetError()));
}

CreateTrailOutcome CloudTrailClient::CreateTrail(const CreateTrailRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTrailOutcome(result.GetResultWithOwnership()) : CreateTrailOutcome(std::move(result.GetError()));
}

DeleteChannelOutcome CloudTrailClient::DeleteChannel(const DeleteChannelRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteChannelOutcome(result.GetResultWithOwnership()) : DeleteChannelOutcome(std::move(result.GetError()));
}

DeleteDashboardOutcome CloudTrailClient::DeleteDashboard(const DeleteDashboardRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDashboardOutcome(result.GetResultWithOwnership())
                            : DeleteDashboardOutcome(std::move(result.GetError()));
}

DeleteEventDataStoreOutcome CloudTrailClient::DeleteEventDataStore(const DeleteEventDataStoreRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEventDataStoreOutcome(result.GetResultWithOwnership())
                            : DeleteEventDataStoreOutcome(std::move(result.GetError()));
}

DeleteResourcePolicyOutcome CloudTrailClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteResourcePolicyOutcome(result.GetResultWithOwnership())
                            : DeleteResourcePolicyOutcome(std::move(result.GetError()));
}

DeleteTrailOutcome CloudTrailClient::DeleteTrail(const DeleteTrailRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTrailOutcome(result.GetResultWithOwnership()) : DeleteTrailOutcome(std::move(result.GetError()));
}

DeregisterOrganizationDelegatedAdminOutcome CloudTrailClient::DeregisterOrganizationDelegatedAdmin(
    const DeregisterOrganizationDelegatedAdminRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterOrganizationDelegatedAdminOutcome(result.GetResultWithOwnership())
                            : DeregisterOrganizationDelegatedAdminOutcome(std::move(result.GetError()));
}

DescribeQueryOutcome CloudTrailClient::DescribeQuery(const DescribeQueryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeQueryOutcome(result.GetResultWithOwnership()) : DescribeQueryOutcome(std::move(result.GetError()));
}

DescribeTrailsOutcome CloudTrailClient::DescribeTrails(const DescribeTrailsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTrailsOutcome(result.GetResultWithOwnership()) : DescribeTrailsOutcome(std::move(result.GetError()));
}

DisableFederationOutcome CloudTrailClient::DisableFederation(const DisableFederationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableFederationOutcome(result.GetResultWithOwnership())
                            : DisableFederationOutcome(std::move(result.GetError()));
}

EnableFederationOutcome CloudTrailClient::EnableFederation(const EnableFederationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableFederationOutcome(result.GetResultWithOwnership())
                            : EnableFederationOutcome(std::move(result.GetError()));
}

GenerateQueryOutcome CloudTrailClient::GenerateQuery(const GenerateQueryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GenerateQueryOutcome(result.GetResultWithOwnership()) : GenerateQueryOutcome(std::move(result.GetError()));
}

GetChannelOutcome CloudTrailClient::GetChannel(const GetChannelRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetChannelOutcome(result.GetResultWithOwnership()) : GetChannelOutcome(std::move(result.GetError()));
}

GetDashboardOutcome CloudTrailClient::GetDashboard(const GetDashboardRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDashboardOutcome(result.GetResultWithOwnership()) : GetDashboardOutcome(std::move(result.GetError()));
}

GetEventConfigurationOutcome CloudTrailClient::GetEventConfiguration(const GetEventConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetEventConfigurationOutcome(result.GetResultWithOwnership())
                            : GetEventConfigurationOutcome(std::move(result.GetError()));
}

GetEventDataStoreOutcome CloudTrailClient::GetEventDataStore(const GetEventDataStoreRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetEventDataStoreOutcome(result.GetResultWithOwnership())
                            : GetEventDataStoreOutcome(std::move(result.GetError()));
}

GetEventSelectorsOutcome CloudTrailClient::GetEventSelectors(const GetEventSelectorsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetEventSelectorsOutcome(result.GetResultWithOwnership())
                            : GetEventSelectorsOutcome(std::move(result.GetError()));
}

GetImportOutcome CloudTrailClient::GetImport(const GetImportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetImportOutcome(result.GetResultWithOwnership()) : GetImportOutcome(std::move(result.GetError()));
}

GetInsightSelectorsOutcome CloudTrailClient::GetInsightSelectors(const GetInsightSelectorsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetInsightSelectorsOutcome(result.GetResultWithOwnership())
                            : GetInsightSelectorsOutcome(std::move(result.GetError()));
}

GetQueryResultsOutcome CloudTrailClient::GetQueryResults(const GetQueryResultsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetQueryResultsOutcome(result.GetResultWithOwnership())
                            : GetQueryResultsOutcome(std::move(result.GetError()));
}

GetResourcePolicyOutcome CloudTrailClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourcePolicyOutcome(result.GetResultWithOwnership())
                            : GetResourcePolicyOutcome(std::move(result.GetError()));
}

GetTrailOutcome CloudTrailClient::GetTrail(const GetTrailRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTrailOutcome(result.GetResultWithOwnership()) : GetTrailOutcome(std::move(result.GetError()));
}

GetTrailStatusOutcome CloudTrailClient::GetTrailStatus(const GetTrailStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTrailStatusOutcome(result.GetResultWithOwnership()) : GetTrailStatusOutcome(std::move(result.GetError()));
}

ListChannelsOutcome CloudTrailClient::ListChannels(const ListChannelsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListChannelsOutcome(result.GetResultWithOwnership()) : ListChannelsOutcome(std::move(result.GetError()));
}

ListDashboardsOutcome CloudTrailClient::ListDashboards(const ListDashboardsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDashboardsOutcome(result.GetResultWithOwnership()) : ListDashboardsOutcome(std::move(result.GetError()));
}

ListEventDataStoresOutcome CloudTrailClient::ListEventDataStores(const ListEventDataStoresRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEventDataStoresOutcome(result.GetResultWithOwnership())
                            : ListEventDataStoresOutcome(std::move(result.GetError()));
}

ListImportFailuresOutcome CloudTrailClient::ListImportFailures(const ListImportFailuresRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListImportFailuresOutcome(result.GetResultWithOwnership())
                            : ListImportFailuresOutcome(std::move(result.GetError()));
}

ListImportsOutcome CloudTrailClient::ListImports(const ListImportsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListImportsOutcome(result.GetResultWithOwnership()) : ListImportsOutcome(std::move(result.GetError()));
}

ListInsightsDataOutcome CloudTrailClient::ListInsightsData(const ListInsightsDataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListInsightsDataOutcome(result.GetResultWithOwnership())
                            : ListInsightsDataOutcome(std::move(result.GetError()));
}

ListInsightsMetricDataOutcome CloudTrailClient::ListInsightsMetricData(const ListInsightsMetricDataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListInsightsMetricDataOutcome(result.GetResultWithOwnership())
                            : ListInsightsMetricDataOutcome(std::move(result.GetError()));
}

ListPublicKeysOutcome CloudTrailClient::ListPublicKeys(const ListPublicKeysRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPublicKeysOutcome(result.GetResultWithOwnership()) : ListPublicKeysOutcome(std::move(result.GetError()));
}

ListQueriesOutcome CloudTrailClient::ListQueries(const ListQueriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListQueriesOutcome(result.GetResultWithOwnership()) : ListQueriesOutcome(std::move(result.GetError()));
}

ListTagsOutcome CloudTrailClient::ListTags(const ListTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsOutcome(result.GetResultWithOwnership()) : ListTagsOutcome(std::move(result.GetError()));
}

ListTrailsOutcome CloudTrailClient::ListTrails(const ListTrailsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTrailsOutcome(result.GetResultWithOwnership()) : ListTrailsOutcome(std::move(result.GetError()));
}

LookupEventsOutcome CloudTrailClient::LookupEvents(const LookupEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? LookupEventsOutcome(result.GetResultWithOwnership()) : LookupEventsOutcome(std::move(result.GetError()));
}

PutEventConfigurationOutcome CloudTrailClient::PutEventConfiguration(const PutEventConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutEventConfigurationOutcome(result.GetResultWithOwnership())
                            : PutEventConfigurationOutcome(std::move(result.GetError()));
}

PutEventSelectorsOutcome CloudTrailClient::PutEventSelectors(const PutEventSelectorsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutEventSelectorsOutcome(result.GetResultWithOwnership())
                            : PutEventSelectorsOutcome(std::move(result.GetError()));
}

PutInsightSelectorsOutcome CloudTrailClient::PutInsightSelectors(const PutInsightSelectorsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutInsightSelectorsOutcome(result.GetResultWithOwnership())
                            : PutInsightSelectorsOutcome(std::move(result.GetError()));
}

PutResourcePolicyOutcome CloudTrailClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutResourcePolicyOutcome(result.GetResultWithOwnership())
                            : PutResourcePolicyOutcome(std::move(result.GetError()));
}

RegisterOrganizationDelegatedAdminOutcome CloudTrailClient::RegisterOrganizationDelegatedAdmin(
    const RegisterOrganizationDelegatedAdminRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterOrganizationDelegatedAdminOutcome(result.GetResultWithOwnership())
                            : RegisterOrganizationDelegatedAdminOutcome(std::move(result.GetError()));
}

RemoveTagsOutcome CloudTrailClient::RemoveTags(const RemoveTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveTagsOutcome(result.GetResultWithOwnership()) : RemoveTagsOutcome(std::move(result.GetError()));
}

RestoreEventDataStoreOutcome CloudTrailClient::RestoreEventDataStore(const RestoreEventDataStoreRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreEventDataStoreOutcome(result.GetResultWithOwnership())
                            : RestoreEventDataStoreOutcome(std::move(result.GetError()));
}

SearchSampleQueriesOutcome CloudTrailClient::SearchSampleQueries(const SearchSampleQueriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchSampleQueriesOutcome(result.GetResultWithOwnership())
                            : SearchSampleQueriesOutcome(std::move(result.GetError()));
}

StartDashboardRefreshOutcome CloudTrailClient::StartDashboardRefresh(const StartDashboardRefreshRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartDashboardRefreshOutcome(result.GetResultWithOwnership())
                            : StartDashboardRefreshOutcome(std::move(result.GetError()));
}

StartEventDataStoreIngestionOutcome CloudTrailClient::StartEventDataStoreIngestion(
    const StartEventDataStoreIngestionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartEventDataStoreIngestionOutcome(result.GetResultWithOwnership())
                            : StartEventDataStoreIngestionOutcome(std::move(result.GetError()));
}

StartImportOutcome CloudTrailClient::StartImport(const StartImportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartImportOutcome(result.GetResultWithOwnership()) : StartImportOutcome(std::move(result.GetError()));
}

StartLoggingOutcome CloudTrailClient::StartLogging(const StartLoggingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartLoggingOutcome(result.GetResultWithOwnership()) : StartLoggingOutcome(std::move(result.GetError()));
}

StartQueryOutcome CloudTrailClient::StartQuery(const StartQueryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartQueryOutcome(result.GetResultWithOwnership()) : StartQueryOutcome(std::move(result.GetError()));
}

StopEventDataStoreIngestionOutcome CloudTrailClient::StopEventDataStoreIngestion(const StopEventDataStoreIngestionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopEventDataStoreIngestionOutcome(result.GetResultWithOwnership())
                            : StopEventDataStoreIngestionOutcome(std::move(result.GetError()));
}

StopImportOutcome CloudTrailClient::StopImport(const StopImportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopImportOutcome(result.GetResultWithOwnership()) : StopImportOutcome(std::move(result.GetError()));
}

StopLoggingOutcome CloudTrailClient::StopLogging(const StopLoggingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopLoggingOutcome(result.GetResultWithOwnership()) : StopLoggingOutcome(std::move(result.GetError()));
}

UpdateChannelOutcome CloudTrailClient::UpdateChannel(const UpdateChannelRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateChannelOutcome(result.GetResultWithOwnership()) : UpdateChannelOutcome(std::move(result.GetError()));
}

UpdateDashboardOutcome CloudTrailClient::UpdateDashboard(const UpdateDashboardRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDashboardOutcome(result.GetResultWithOwnership())
                            : UpdateDashboardOutcome(std::move(result.GetError()));
}

UpdateEventDataStoreOutcome CloudTrailClient::UpdateEventDataStore(const UpdateEventDataStoreRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateEventDataStoreOutcome(result.GetResultWithOwnership())
                            : UpdateEventDataStoreOutcome(std::move(result.GetError()));
}

UpdateTrailOutcome CloudTrailClient::UpdateTrail(const UpdateTrailRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTrailOutcome(result.GetResultWithOwnership()) : UpdateTrailOutcome(std::move(result.GetError()));
}
