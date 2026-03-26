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
  return AddTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelQueryOutcome CloudTrailClient::CancelQuery(const CancelQueryRequest& request) const {
  return CancelQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateChannelOutcome CloudTrailClient::CreateChannel(const CreateChannelRequest& request) const {
  return CreateChannelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDashboardOutcome CloudTrailClient::CreateDashboard(const CreateDashboardRequest& request) const {
  return CreateDashboardOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEventDataStoreOutcome CloudTrailClient::CreateEventDataStore(const CreateEventDataStoreRequest& request) const {
  return CreateEventDataStoreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTrailOutcome CloudTrailClient::CreateTrail(const CreateTrailRequest& request) const {
  return CreateTrailOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteChannelOutcome CloudTrailClient::DeleteChannel(const DeleteChannelRequest& request) const {
  return DeleteChannelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDashboardOutcome CloudTrailClient::DeleteDashboard(const DeleteDashboardRequest& request) const {
  return DeleteDashboardOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEventDataStoreOutcome CloudTrailClient::DeleteEventDataStore(const DeleteEventDataStoreRequest& request) const {
  return DeleteEventDataStoreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResourcePolicyOutcome CloudTrailClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  return DeleteResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTrailOutcome CloudTrailClient::DeleteTrail(const DeleteTrailRequest& request) const {
  return DeleteTrailOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterOrganizationDelegatedAdminOutcome CloudTrailClient::DeregisterOrganizationDelegatedAdmin(
    const DeregisterOrganizationDelegatedAdminRequest& request) const {
  return DeregisterOrganizationDelegatedAdminOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeQueryOutcome CloudTrailClient::DescribeQuery(const DescribeQueryRequest& request) const {
  return DescribeQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTrailsOutcome CloudTrailClient::DescribeTrails(const DescribeTrailsRequest& request) const {
  return DescribeTrailsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableFederationOutcome CloudTrailClient::DisableFederation(const DisableFederationRequest& request) const {
  return DisableFederationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableFederationOutcome CloudTrailClient::EnableFederation(const EnableFederationRequest& request) const {
  return EnableFederationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GenerateQueryOutcome CloudTrailClient::GenerateQuery(const GenerateQueryRequest& request) const {
  return GenerateQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetChannelOutcome CloudTrailClient::GetChannel(const GetChannelRequest& request) const {
  return GetChannelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDashboardOutcome CloudTrailClient::GetDashboard(const GetDashboardRequest& request) const {
  return GetDashboardOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEventConfigurationOutcome CloudTrailClient::GetEventConfiguration(const GetEventConfigurationRequest& request) const {
  return GetEventConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEventDataStoreOutcome CloudTrailClient::GetEventDataStore(const GetEventDataStoreRequest& request) const {
  return GetEventDataStoreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEventSelectorsOutcome CloudTrailClient::GetEventSelectors(const GetEventSelectorsRequest& request) const {
  return GetEventSelectorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetImportOutcome CloudTrailClient::GetImport(const GetImportRequest& request) const {
  return GetImportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetInsightSelectorsOutcome CloudTrailClient::GetInsightSelectors(const GetInsightSelectorsRequest& request) const {
  return GetInsightSelectorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetQueryResultsOutcome CloudTrailClient::GetQueryResults(const GetQueryResultsRequest& request) const {
  return GetQueryResultsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResourcePolicyOutcome CloudTrailClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  return GetResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTrailOutcome CloudTrailClient::GetTrail(const GetTrailRequest& request) const {
  return GetTrailOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTrailStatusOutcome CloudTrailClient::GetTrailStatus(const GetTrailStatusRequest& request) const {
  return GetTrailStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListChannelsOutcome CloudTrailClient::ListChannels(const ListChannelsRequest& request) const {
  return ListChannelsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDashboardsOutcome CloudTrailClient::ListDashboards(const ListDashboardsRequest& request) const {
  return ListDashboardsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEventDataStoresOutcome CloudTrailClient::ListEventDataStores(const ListEventDataStoresRequest& request) const {
  return ListEventDataStoresOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListImportFailuresOutcome CloudTrailClient::ListImportFailures(const ListImportFailuresRequest& request) const {
  return ListImportFailuresOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListImportsOutcome CloudTrailClient::ListImports(const ListImportsRequest& request) const {
  return ListImportsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListInsightsDataOutcome CloudTrailClient::ListInsightsData(const ListInsightsDataRequest& request) const {
  return ListInsightsDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListInsightsMetricDataOutcome CloudTrailClient::ListInsightsMetricData(const ListInsightsMetricDataRequest& request) const {
  return ListInsightsMetricDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPublicKeysOutcome CloudTrailClient::ListPublicKeys(const ListPublicKeysRequest& request) const {
  return ListPublicKeysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListQueriesOutcome CloudTrailClient::ListQueries(const ListQueriesRequest& request) const {
  return ListQueriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsOutcome CloudTrailClient::ListTags(const ListTagsRequest& request) const {
  return ListTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTrailsOutcome CloudTrailClient::ListTrails(const ListTrailsRequest& request) const {
  return ListTrailsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

LookupEventsOutcome CloudTrailClient::LookupEvents(const LookupEventsRequest& request) const {
  return LookupEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutEventConfigurationOutcome CloudTrailClient::PutEventConfiguration(const PutEventConfigurationRequest& request) const {
  return PutEventConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutEventSelectorsOutcome CloudTrailClient::PutEventSelectors(const PutEventSelectorsRequest& request) const {
  return PutEventSelectorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutInsightSelectorsOutcome CloudTrailClient::PutInsightSelectors(const PutInsightSelectorsRequest& request) const {
  return PutInsightSelectorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutResourcePolicyOutcome CloudTrailClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  return PutResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterOrganizationDelegatedAdminOutcome CloudTrailClient::RegisterOrganizationDelegatedAdmin(
    const RegisterOrganizationDelegatedAdminRequest& request) const {
  return RegisterOrganizationDelegatedAdminOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveTagsOutcome CloudTrailClient::RemoveTags(const RemoveTagsRequest& request) const {
  return RemoveTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreEventDataStoreOutcome CloudTrailClient::RestoreEventDataStore(const RestoreEventDataStoreRequest& request) const {
  return RestoreEventDataStoreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchSampleQueriesOutcome CloudTrailClient::SearchSampleQueries(const SearchSampleQueriesRequest& request) const {
  return SearchSampleQueriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDashboardRefreshOutcome CloudTrailClient::StartDashboardRefresh(const StartDashboardRefreshRequest& request) const {
  return StartDashboardRefreshOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartEventDataStoreIngestionOutcome CloudTrailClient::StartEventDataStoreIngestion(
    const StartEventDataStoreIngestionRequest& request) const {
  return StartEventDataStoreIngestionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartImportOutcome CloudTrailClient::StartImport(const StartImportRequest& request) const {
  return StartImportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartLoggingOutcome CloudTrailClient::StartLogging(const StartLoggingRequest& request) const {
  return StartLoggingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartQueryOutcome CloudTrailClient::StartQuery(const StartQueryRequest& request) const {
  return StartQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopEventDataStoreIngestionOutcome CloudTrailClient::StopEventDataStoreIngestion(const StopEventDataStoreIngestionRequest& request) const {
  return StopEventDataStoreIngestionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopImportOutcome CloudTrailClient::StopImport(const StopImportRequest& request) const {
  return StopImportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopLoggingOutcome CloudTrailClient::StopLogging(const StopLoggingRequest& request) const {
  return StopLoggingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateChannelOutcome CloudTrailClient::UpdateChannel(const UpdateChannelRequest& request) const {
  return UpdateChannelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDashboardOutcome CloudTrailClient::UpdateDashboard(const UpdateDashboardRequest& request) const {
  return UpdateDashboardOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateEventDataStoreOutcome CloudTrailClient::UpdateEventDataStore(const UpdateEventDataStoreRequest& request) const {
  return UpdateEventDataStoreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTrailOutcome CloudTrailClient::UpdateTrail(const UpdateTrailRequest& request) const {
  return UpdateTrailOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
