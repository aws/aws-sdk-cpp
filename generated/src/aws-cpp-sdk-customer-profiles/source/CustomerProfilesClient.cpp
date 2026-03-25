/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

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
#include <aws/customer-profiles/CustomerProfilesClient.h>
#include <aws/customer-profiles/CustomerProfilesEndpointProvider.h>
#include <aws/customer-profiles/CustomerProfilesErrorMarshaller.h>
#include <aws/customer-profiles/model/AddProfileKeyRequest.h>
#include <aws/customer-profiles/model/BatchGetCalculatedAttributeForProfileRequest.h>
#include <aws/customer-profiles/model/BatchGetProfileRequest.h>
#include <aws/customer-profiles/model/CreateCalculatedAttributeDefinitionRequest.h>
#include <aws/customer-profiles/model/CreateDomainLayoutRequest.h>
#include <aws/customer-profiles/model/CreateDomainRequest.h>
#include <aws/customer-profiles/model/CreateEventStreamRequest.h>
#include <aws/customer-profiles/model/CreateEventTriggerRequest.h>
#include <aws/customer-profiles/model/CreateIntegrationWorkflowRequest.h>
#include <aws/customer-profiles/model/CreateProfileRequest.h>
#include <aws/customer-profiles/model/CreateRecommenderFilterRequest.h>
#include <aws/customer-profiles/model/CreateRecommenderRequest.h>
#include <aws/customer-profiles/model/CreateSegmentDefinitionRequest.h>
#include <aws/customer-profiles/model/CreateSegmentEstimateRequest.h>
#include <aws/customer-profiles/model/CreateSegmentSnapshotRequest.h>
#include <aws/customer-profiles/model/CreateUploadJobRequest.h>
#include <aws/customer-profiles/model/DeleteCalculatedAttributeDefinitionRequest.h>
#include <aws/customer-profiles/model/DeleteDomainLayoutRequest.h>
#include <aws/customer-profiles/model/DeleteDomainObjectTypeRequest.h>
#include <aws/customer-profiles/model/DeleteDomainRequest.h>
#include <aws/customer-profiles/model/DeleteEventStreamRequest.h>
#include <aws/customer-profiles/model/DeleteEventTriggerRequest.h>
#include <aws/customer-profiles/model/DeleteIntegrationRequest.h>
#include <aws/customer-profiles/model/DeleteProfileKeyRequest.h>
#include <aws/customer-profiles/model/DeleteProfileObjectRequest.h>
#include <aws/customer-profiles/model/DeleteProfileObjectTypeRequest.h>
#include <aws/customer-profiles/model/DeleteProfileRequest.h>
#include <aws/customer-profiles/model/DeleteRecommenderFilterRequest.h>
#include <aws/customer-profiles/model/DeleteRecommenderRequest.h>
#include <aws/customer-profiles/model/DeleteSegmentDefinitionRequest.h>
#include <aws/customer-profiles/model/DeleteWorkflowRequest.h>
#include <aws/customer-profiles/model/DetectProfileObjectTypeRequest.h>
#include <aws/customer-profiles/model/GetAutoMergingPreviewRequest.h>
#include <aws/customer-profiles/model/GetCalculatedAttributeDefinitionRequest.h>
#include <aws/customer-profiles/model/GetCalculatedAttributeForProfileRequest.h>
#include <aws/customer-profiles/model/GetDomainLayoutRequest.h>
#include <aws/customer-profiles/model/GetDomainObjectTypeRequest.h>
#include <aws/customer-profiles/model/GetDomainRequest.h>
#include <aws/customer-profiles/model/GetEventStreamRequest.h>
#include <aws/customer-profiles/model/GetEventTriggerRequest.h>
#include <aws/customer-profiles/model/GetIdentityResolutionJobRequest.h>
#include <aws/customer-profiles/model/GetIntegrationRequest.h>
#include <aws/customer-profiles/model/GetMatchesRequest.h>
#include <aws/customer-profiles/model/GetObjectTypeAttributeStatisticsRequest.h>
#include <aws/customer-profiles/model/GetProfileHistoryRecordRequest.h>
#include <aws/customer-profiles/model/GetProfileObjectTypeRequest.h>
#include <aws/customer-profiles/model/GetProfileObjectTypeTemplateRequest.h>
#include <aws/customer-profiles/model/GetProfileRecommendationsRequest.h>
#include <aws/customer-profiles/model/GetRecommenderFilterRequest.h>
#include <aws/customer-profiles/model/GetRecommenderRequest.h>
#include <aws/customer-profiles/model/GetSegmentDefinitionRequest.h>
#include <aws/customer-profiles/model/GetSegmentEstimateRequest.h>
#include <aws/customer-profiles/model/GetSegmentMembershipRequest.h>
#include <aws/customer-profiles/model/GetSegmentSnapshotRequest.h>
#include <aws/customer-profiles/model/GetSimilarProfilesRequest.h>
#include <aws/customer-profiles/model/GetUploadJobPathRequest.h>
#include <aws/customer-profiles/model/GetUploadJobRequest.h>
#include <aws/customer-profiles/model/GetWorkflowRequest.h>
#include <aws/customer-profiles/model/GetWorkflowStepsRequest.h>
#include <aws/customer-profiles/model/ListAccountIntegrationsRequest.h>
#include <aws/customer-profiles/model/ListCalculatedAttributeDefinitionsRequest.h>
#include <aws/customer-profiles/model/ListCalculatedAttributesForProfileRequest.h>
#include <aws/customer-profiles/model/ListDomainLayoutsRequest.h>
#include <aws/customer-profiles/model/ListDomainObjectTypesRequest.h>
#include <aws/customer-profiles/model/ListDomainsRequest.h>
#include <aws/customer-profiles/model/ListEventStreamsRequest.h>
#include <aws/customer-profiles/model/ListEventTriggersRequest.h>
#include <aws/customer-profiles/model/ListIdentityResolutionJobsRequest.h>
#include <aws/customer-profiles/model/ListIntegrationsRequest.h>
#include <aws/customer-profiles/model/ListObjectTypeAttributeValuesRequest.h>
#include <aws/customer-profiles/model/ListObjectTypeAttributesRequest.h>
#include <aws/customer-profiles/model/ListProfileAttributeValuesRequest.h>
#include <aws/customer-profiles/model/ListProfileHistoryRecordsRequest.h>
#include <aws/customer-profiles/model/ListProfileObjectTypeTemplatesRequest.h>
#include <aws/customer-profiles/model/ListProfileObjectTypesRequest.h>
#include <aws/customer-profiles/model/ListProfileObjectsRequest.h>
#include <aws/customer-profiles/model/ListRecommenderFiltersRequest.h>
#include <aws/customer-profiles/model/ListRecommenderRecipesRequest.h>
#include <aws/customer-profiles/model/ListRecommendersRequest.h>
#include <aws/customer-profiles/model/ListRuleBasedMatchesRequest.h>
#include <aws/customer-profiles/model/ListSegmentDefinitionsRequest.h>
#include <aws/customer-profiles/model/ListTagsForResourceRequest.h>
#include <aws/customer-profiles/model/ListUploadJobsRequest.h>
#include <aws/customer-profiles/model/ListWorkflowsRequest.h>
#include <aws/customer-profiles/model/MergeProfilesRequest.h>
#include <aws/customer-profiles/model/PutDomainObjectTypeRequest.h>
#include <aws/customer-profiles/model/PutIntegrationRequest.h>
#include <aws/customer-profiles/model/PutProfileObjectRequest.h>
#include <aws/customer-profiles/model/PutProfileObjectTypeRequest.h>
#include <aws/customer-profiles/model/SearchProfilesRequest.h>
#include <aws/customer-profiles/model/StartRecommenderRequest.h>
#include <aws/customer-profiles/model/StartUploadJobRequest.h>
#include <aws/customer-profiles/model/StopRecommenderRequest.h>
#include <aws/customer-profiles/model/StopUploadJobRequest.h>
#include <aws/customer-profiles/model/TagResourceRequest.h>
#include <aws/customer-profiles/model/UntagResourceRequest.h>
#include <aws/customer-profiles/model/UpdateCalculatedAttributeDefinitionRequest.h>
#include <aws/customer-profiles/model/UpdateDomainLayoutRequest.h>
#include <aws/customer-profiles/model/UpdateDomainRequest.h>
#include <aws/customer-profiles/model/UpdateEventTriggerRequest.h>
#include <aws/customer-profiles/model/UpdateProfileRequest.h>
#include <aws/customer-profiles/model/UpdateRecommenderRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CustomerProfiles;
using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CustomerProfiles {
const char SERVICE_NAME[] = "profile";
const char ALLOCATION_TAG[] = "CustomerProfilesClient";
}  // namespace CustomerProfiles
}  // namespace Aws
const char* CustomerProfilesClient::GetServiceName() { return SERVICE_NAME; }
const char* CustomerProfilesClient::GetAllocationTag() { return ALLOCATION_TAG; }

CustomerProfilesClient::CustomerProfilesClient(const CustomerProfiles::CustomerProfilesClientConfiguration& clientConfiguration,
                                               std::shared_ptr<CustomerProfilesEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CustomerProfilesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CustomerProfilesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CustomerProfilesClient::CustomerProfilesClient(const AWSCredentials& credentials,
                                               std::shared_ptr<CustomerProfilesEndpointProviderBase> endpointProvider,
                                               const CustomerProfiles::CustomerProfilesClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CustomerProfilesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CustomerProfilesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CustomerProfilesClient::CustomerProfilesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<CustomerProfilesEndpointProviderBase> endpointProvider,
                                               const CustomerProfiles::CustomerProfilesClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CustomerProfilesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CustomerProfilesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CustomerProfilesClient::CustomerProfilesClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CustomerProfilesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CustomerProfilesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CustomerProfilesClient::CustomerProfilesClient(const AWSCredentials& credentials,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CustomerProfilesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CustomerProfilesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CustomerProfilesClient::CustomerProfilesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CustomerProfilesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CustomerProfilesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CustomerProfilesClient::~CustomerProfilesClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CustomerProfilesEndpointProviderBase>& CustomerProfilesClient::accessEndpointProvider() { return m_endpointProvider; }

void CustomerProfilesClient::init(const CustomerProfiles::CustomerProfilesClientConfiguration& config) {
  AWSClient::SetServiceClientName("Customer Profiles");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "profile");
}

void CustomerProfilesClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CustomerProfilesClient::InvokeOperationOutcome CustomerProfilesClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
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

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AddProfileKeyOutcome CustomerProfilesClient::AddProfileKey(const AddProfileKeyRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddProfileKey", "Required field: DomainName, is not set");
    return AddProfileKeyOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/keys");
  };

  return AddProfileKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetCalculatedAttributeForProfileOutcome CustomerProfilesClient::BatchGetCalculatedAttributeForProfile(
    const BatchGetCalculatedAttributeForProfileRequest& request) const {
  if (!request.CalculatedAttributeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetCalculatedAttributeForProfile", "Required field: CalculatedAttributeName, is not set");
    return BatchGetCalculatedAttributeForProfileOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CalculatedAttributeName]", false));
  }
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetCalculatedAttributeForProfile", "Required field: DomainName, is not set");
    return BatchGetCalculatedAttributeForProfileOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/calculated-attributes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCalculatedAttributeName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/batch-get-for-profiles");
  };

  return BatchGetCalculatedAttributeForProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetProfileOutcome CustomerProfilesClient::BatchGetProfile(const BatchGetProfileRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetProfile", "Required field: DomainName, is not set");
    return BatchGetProfileOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/batch-get-profiles");
  };

  return BatchGetProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCalculatedAttributeDefinitionOutcome CustomerProfilesClient::CreateCalculatedAttributeDefinition(
    const CreateCalculatedAttributeDefinitionRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateCalculatedAttributeDefinition", "Required field: DomainName, is not set");
    return CreateCalculatedAttributeDefinitionOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.CalculatedAttributeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateCalculatedAttributeDefinition", "Required field: CalculatedAttributeName, is not set");
    return CreateCalculatedAttributeDefinitionOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CalculatedAttributeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/calculated-attributes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCalculatedAttributeName());
  };

  return CreateCalculatedAttributeDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDomainOutcome CustomerProfilesClient::CreateDomain(const CreateDomainRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDomain", "Required field: DomainName, is not set");
    return CreateDomainOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  return CreateDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDomainLayoutOutcome CustomerProfilesClient::CreateDomainLayout(const CreateDomainLayoutRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDomainLayout", "Required field: DomainName, is not set");
    return CreateDomainLayoutOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.LayoutDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDomainLayout", "Required field: LayoutDefinitionName, is not set");
    return CreateDomainLayoutOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LayoutDefinitionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/layouts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLayoutDefinitionName());
  };

  return CreateDomainLayoutOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEventStreamOutcome CustomerProfilesClient::CreateEventStream(const CreateEventStreamRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateEventStream", "Required field: DomainName, is not set");
    return CreateEventStreamOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.EventStreamNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateEventStream", "Required field: EventStreamName, is not set");
    return CreateEventStreamOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventStreamName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-streams/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventStreamName());
  };

  return CreateEventStreamOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEventTriggerOutcome CustomerProfilesClient::CreateEventTrigger(const CreateEventTriggerRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateEventTrigger", "Required field: DomainName, is not set");
    return CreateEventTriggerOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.EventTriggerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateEventTrigger", "Required field: EventTriggerName, is not set");
    return CreateEventTriggerOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventTriggerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-triggers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventTriggerName());
  };

  return CreateEventTriggerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIntegrationWorkflowOutcome CustomerProfilesClient::CreateIntegrationWorkflow(const CreateIntegrationWorkflowRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIntegrationWorkflow", "Required field: DomainName, is not set");
    return CreateIntegrationWorkflowOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflows/integrations");
  };

  return CreateIntegrationWorkflowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProfileOutcome CustomerProfilesClient::CreateProfile(const CreateProfileRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateProfile", "Required field: DomainName, is not set");
    return CreateProfileOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles");
  };

  return CreateProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRecommenderOutcome CustomerProfilesClient::CreateRecommender(const CreateRecommenderRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRecommender", "Required field: DomainName, is not set");
    return CreateRecommenderOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.RecommenderNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRecommender", "Required field: RecommenderName, is not set");
    return CreateRecommenderOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommenderName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recommenders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecommenderName());
  };

  return CreateRecommenderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRecommenderFilterOutcome CustomerProfilesClient::CreateRecommenderFilter(const CreateRecommenderFilterRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRecommenderFilter", "Required field: DomainName, is not set");
    return CreateRecommenderFilterOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.RecommenderFilterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRecommenderFilter", "Required field: RecommenderFilterName, is not set");
    return CreateRecommenderFilterOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommenderFilterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recommender-filters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecommenderFilterName());
  };

  return CreateRecommenderFilterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSegmentDefinitionOutcome CustomerProfilesClient::CreateSegmentDefinition(const CreateSegmentDefinitionRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSegmentDefinition", "Required field: DomainName, is not set");
    return CreateSegmentDefinitionOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.SegmentDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSegmentDefinition", "Required field: SegmentDefinitionName, is not set");
    return CreateSegmentDefinitionOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SegmentDefinitionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/segment-definitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSegmentDefinitionName());
  };

  return CreateSegmentDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSegmentEstimateOutcome CustomerProfilesClient::CreateSegmentEstimate(const CreateSegmentEstimateRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSegmentEstimate", "Required field: DomainName, is not set");
    return CreateSegmentEstimateOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/segment-estimates");
  };

  return CreateSegmentEstimateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSegmentSnapshotOutcome CustomerProfilesClient::CreateSegmentSnapshot(const CreateSegmentSnapshotRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSegmentSnapshot", "Required field: DomainName, is not set");
    return CreateSegmentSnapshotOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.SegmentDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSegmentSnapshot", "Required field: SegmentDefinitionName, is not set");
    return CreateSegmentSnapshotOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SegmentDefinitionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/segments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSegmentDefinitionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots");
  };

  return CreateSegmentSnapshotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUploadJobOutcome CustomerProfilesClient::CreateUploadJob(const CreateUploadJobRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateUploadJob", "Required field: DomainName, is not set");
    return CreateUploadJobOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/upload-jobs");
  };

  return CreateUploadJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCalculatedAttributeDefinitionOutcome CustomerProfilesClient::DeleteCalculatedAttributeDefinition(
    const DeleteCalculatedAttributeDefinitionRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCalculatedAttributeDefinition", "Required field: DomainName, is not set");
    return DeleteCalculatedAttributeDefinitionOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.CalculatedAttributeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCalculatedAttributeDefinition", "Required field: CalculatedAttributeName, is not set");
    return DeleteCalculatedAttributeDefinitionOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CalculatedAttributeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/calculated-attributes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCalculatedAttributeName());
  };

  return DeleteCalculatedAttributeDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDomainOutcome CustomerProfilesClient::DeleteDomain(const DeleteDomainRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDomain", "Required field: DomainName, is not set");
    return DeleteDomainOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  return DeleteDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDomainLayoutOutcome CustomerProfilesClient::DeleteDomainLayout(const DeleteDomainLayoutRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDomainLayout", "Required field: DomainName, is not set");
    return DeleteDomainLayoutOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.LayoutDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDomainLayout", "Required field: LayoutDefinitionName, is not set");
    return DeleteDomainLayoutOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LayoutDefinitionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/layouts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLayoutDefinitionName());
  };

  return DeleteDomainLayoutOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDomainObjectTypeOutcome CustomerProfilesClient::DeleteDomainObjectType(const DeleteDomainObjectTypeRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDomainObjectType", "Required field: DomainName, is not set");
    return DeleteDomainObjectTypeOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.ObjectTypeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDomainObjectType", "Required field: ObjectTypeName, is not set");
    return DeleteDomainObjectTypeOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectTypeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/domain-object-types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetObjectTypeName());
  };

  return DeleteDomainObjectTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEventStreamOutcome CustomerProfilesClient::DeleteEventStream(const DeleteEventStreamRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEventStream", "Required field: DomainName, is not set");
    return DeleteEventStreamOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.EventStreamNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEventStream", "Required field: EventStreamName, is not set");
    return DeleteEventStreamOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventStreamName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-streams/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventStreamName());
  };

  return DeleteEventStreamOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEventTriggerOutcome CustomerProfilesClient::DeleteEventTrigger(const DeleteEventTriggerRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEventTrigger", "Required field: DomainName, is not set");
    return DeleteEventTriggerOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.EventTriggerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEventTrigger", "Required field: EventTriggerName, is not set");
    return DeleteEventTriggerOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventTriggerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-triggers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventTriggerName());
  };

  return DeleteEventTriggerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteIntegrationOutcome CustomerProfilesClient::DeleteIntegration(const DeleteIntegrationRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIntegration", "Required field: DomainName, is not set");
    return DeleteIntegrationOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrations/delete");
  };

  return DeleteIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProfileOutcome CustomerProfilesClient::DeleteProfile(const DeleteProfileRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProfile", "Required field: DomainName, is not set");
    return DeleteProfileOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/delete");
  };

  return DeleteProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProfileKeyOutcome CustomerProfilesClient::DeleteProfileKey(const DeleteProfileKeyRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProfileKey", "Required field: DomainName, is not set");
    return DeleteProfileKeyOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/keys/delete");
  };

  return DeleteProfileKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProfileObjectOutcome CustomerProfilesClient::DeleteProfileObject(const DeleteProfileObjectRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProfileObject", "Required field: DomainName, is not set");
    return DeleteProfileObjectOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/objects/delete");
  };

  return DeleteProfileObjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProfileObjectTypeOutcome CustomerProfilesClient::DeleteProfileObjectType(const DeleteProfileObjectTypeRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProfileObjectType", "Required field: DomainName, is not set");
    return DeleteProfileObjectTypeOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.ObjectTypeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProfileObjectType", "Required field: ObjectTypeName, is not set");
    return DeleteProfileObjectTypeOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectTypeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/object-types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetObjectTypeName());
  };

  return DeleteProfileObjectTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRecommenderOutcome CustomerProfilesClient::DeleteRecommender(const DeleteRecommenderRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRecommender", "Required field: DomainName, is not set");
    return DeleteRecommenderOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.RecommenderNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRecommender", "Required field: RecommenderName, is not set");
    return DeleteRecommenderOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommenderName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recommenders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecommenderName());
  };

  return DeleteRecommenderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRecommenderFilterOutcome CustomerProfilesClient::DeleteRecommenderFilter(const DeleteRecommenderFilterRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRecommenderFilter", "Required field: DomainName, is not set");
    return DeleteRecommenderFilterOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.RecommenderFilterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRecommenderFilter", "Required field: RecommenderFilterName, is not set");
    return DeleteRecommenderFilterOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommenderFilterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recommender-filters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecommenderFilterName());
  };

  return DeleteRecommenderFilterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSegmentDefinitionOutcome CustomerProfilesClient::DeleteSegmentDefinition(const DeleteSegmentDefinitionRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSegmentDefinition", "Required field: DomainName, is not set");
    return DeleteSegmentDefinitionOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.SegmentDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSegmentDefinition", "Required field: SegmentDefinitionName, is not set");
    return DeleteSegmentDefinitionOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SegmentDefinitionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/segment-definitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSegmentDefinitionName());
  };

  return DeleteSegmentDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteWorkflowOutcome CustomerProfilesClient::DeleteWorkflow(const DeleteWorkflowRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkflow", "Required field: DomainName, is not set");
    return DeleteWorkflowOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.WorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkflow", "Required field: WorkflowId, is not set");
    return DeleteWorkflowOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowId());
  };

  return DeleteWorkflowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DetectProfileObjectTypeOutcome CustomerProfilesClient::DetectProfileObjectType(const DetectProfileObjectTypeRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DetectProfileObjectType", "Required field: DomainName, is not set");
    return DetectProfileObjectTypeOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/detect/object-types");
  };

  return DetectProfileObjectTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAutoMergingPreviewOutcome CustomerProfilesClient::GetAutoMergingPreview(const GetAutoMergingPreviewRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAutoMergingPreview", "Required field: DomainName, is not set");
    return GetAutoMergingPreviewOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/identity-resolution-jobs/auto-merging-preview");
  };

  return GetAutoMergingPreviewOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCalculatedAttributeDefinitionOutcome CustomerProfilesClient::GetCalculatedAttributeDefinition(
    const GetCalculatedAttributeDefinitionRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCalculatedAttributeDefinition", "Required field: DomainName, is not set");
    return GetCalculatedAttributeDefinitionOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.CalculatedAttributeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCalculatedAttributeDefinition", "Required field: CalculatedAttributeName, is not set");
    return GetCalculatedAttributeDefinitionOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CalculatedAttributeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/calculated-attributes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCalculatedAttributeName());
  };

  return GetCalculatedAttributeDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCalculatedAttributeForProfileOutcome CustomerProfilesClient::GetCalculatedAttributeForProfile(
    const GetCalculatedAttributeForProfileRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCalculatedAttributeForProfile", "Required field: DomainName, is not set");
    return GetCalculatedAttributeForProfileOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.ProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCalculatedAttributeForProfile", "Required field: ProfileId, is not set");
    return GetCalculatedAttributeForProfileOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }
  if (!request.CalculatedAttributeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCalculatedAttributeForProfile", "Required field: CalculatedAttributeName, is not set");
    return GetCalculatedAttributeForProfileOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CalculatedAttributeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/profile/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/calculated-attributes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCalculatedAttributeName());
  };

  return GetCalculatedAttributeForProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDomainOutcome CustomerProfilesClient::GetDomain(const GetDomainRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomain", "Required field: DomainName, is not set");
    return GetDomainOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  return GetDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDomainLayoutOutcome CustomerProfilesClient::GetDomainLayout(const GetDomainLayoutRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomainLayout", "Required field: DomainName, is not set");
    return GetDomainLayoutOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.LayoutDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomainLayout", "Required field: LayoutDefinitionName, is not set");
    return GetDomainLayoutOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LayoutDefinitionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/layouts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLayoutDefinitionName());
  };

  return GetDomainLayoutOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDomainObjectTypeOutcome CustomerProfilesClient::GetDomainObjectType(const GetDomainObjectTypeRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomainObjectType", "Required field: DomainName, is not set");
    return GetDomainObjectTypeOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.ObjectTypeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomainObjectType", "Required field: ObjectTypeName, is not set");
    return GetDomainObjectTypeOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectTypeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/domain-object-types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetObjectTypeName());
  };

  return GetDomainObjectTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEventStreamOutcome CustomerProfilesClient::GetEventStream(const GetEventStreamRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEventStream", "Required field: DomainName, is not set");
    return GetEventStreamOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.EventStreamNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEventStream", "Required field: EventStreamName, is not set");
    return GetEventStreamOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventStreamName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-streams/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventStreamName());
  };

  return GetEventStreamOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEventTriggerOutcome CustomerProfilesClient::GetEventTrigger(const GetEventTriggerRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEventTrigger", "Required field: DomainName, is not set");
    return GetEventTriggerOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.EventTriggerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEventTrigger", "Required field: EventTriggerName, is not set");
    return GetEventTriggerOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventTriggerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-triggers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventTriggerName());
  };

  return GetEventTriggerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetIdentityResolutionJobOutcome CustomerProfilesClient::GetIdentityResolutionJob(const GetIdentityResolutionJobRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIdentityResolutionJob", "Required field: DomainName, is not set");
    return GetIdentityResolutionJobOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIdentityResolutionJob", "Required field: JobId, is not set");
    return GetIdentityResolutionJobOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/identity-resolution-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return GetIdentityResolutionJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetIntegrationOutcome CustomerProfilesClient::GetIntegration(const GetIntegrationRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIntegration", "Required field: DomainName, is not set");
    return GetIntegrationOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrations");
  };

  return GetIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMatchesOutcome CustomerProfilesClient::GetMatches(const GetMatchesRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMatches", "Required field: DomainName, is not set");
    return GetMatchesOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/matches");
  };

  return GetMatchesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetObjectTypeAttributeStatisticsOutcome CustomerProfilesClient::GetObjectTypeAttributeStatistics(
    const GetObjectTypeAttributeStatisticsRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetObjectTypeAttributeStatistics", "Required field: DomainName, is not set");
    return GetObjectTypeAttributeStatisticsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.ObjectTypeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetObjectTypeAttributeStatistics", "Required field: ObjectTypeName, is not set");
    return GetObjectTypeAttributeStatisticsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectTypeName]", false));
  }
  if (!request.AttributeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetObjectTypeAttributeStatistics", "Required field: AttributeName, is not set");
    return GetObjectTypeAttributeStatisticsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttributeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/object-types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetObjectTypeName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attributes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttributeName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/statistics");
  };

  return GetObjectTypeAttributeStatisticsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetProfileHistoryRecordOutcome CustomerProfilesClient::GetProfileHistoryRecord(const GetProfileHistoryRecordRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProfileHistoryRecord", "Required field: DomainName, is not set");
    return GetProfileHistoryRecordOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.ProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProfileHistoryRecord", "Required field: ProfileId, is not set");
    return GetProfileHistoryRecordOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProfileHistoryRecord", "Required field: Id, is not set");
    return GetProfileHistoryRecordOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/history-records/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetProfileHistoryRecordOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetProfileObjectTypeOutcome CustomerProfilesClient::GetProfileObjectType(const GetProfileObjectTypeRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProfileObjectType", "Required field: DomainName, is not set");
    return GetProfileObjectTypeOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.ObjectTypeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProfileObjectType", "Required field: ObjectTypeName, is not set");
    return GetProfileObjectTypeOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectTypeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/object-types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetObjectTypeName());
  };

  return GetProfileObjectTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetProfileObjectTypeTemplateOutcome CustomerProfilesClient::GetProfileObjectTypeTemplate(
    const GetProfileObjectTypeTemplateRequest& request) const {
  if (!request.TemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProfileObjectTypeTemplate", "Required field: TemplateId, is not set");
    return GetProfileObjectTypeTemplateOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  };

  return GetProfileObjectTypeTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetProfileRecommendationsOutcome CustomerProfilesClient::GetProfileRecommendations(const GetProfileRecommendationsRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProfileRecommendations", "Required field: DomainName, is not set");
    return GetProfileRecommendationsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.ProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProfileRecommendations", "Required field: ProfileId, is not set");
    return GetProfileRecommendationsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recommendations");
  };

  return GetProfileRecommendationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRecommenderOutcome CustomerProfilesClient::GetRecommender(const GetRecommenderRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRecommender", "Required field: DomainName, is not set");
    return GetRecommenderOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.RecommenderNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRecommender", "Required field: RecommenderName, is not set");
    return GetRecommenderOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommenderName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recommenders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecommenderName());
  };

  return GetRecommenderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRecommenderFilterOutcome CustomerProfilesClient::GetRecommenderFilter(const GetRecommenderFilterRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRecommenderFilter", "Required field: DomainName, is not set");
    return GetRecommenderFilterOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.RecommenderFilterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRecommenderFilter", "Required field: RecommenderFilterName, is not set");
    return GetRecommenderFilterOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommenderFilterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recommender-filters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecommenderFilterName());
  };

  return GetRecommenderFilterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSegmentDefinitionOutcome CustomerProfilesClient::GetSegmentDefinition(const GetSegmentDefinitionRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSegmentDefinition", "Required field: DomainName, is not set");
    return GetSegmentDefinitionOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.SegmentDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSegmentDefinition", "Required field: SegmentDefinitionName, is not set");
    return GetSegmentDefinitionOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SegmentDefinitionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/segment-definitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSegmentDefinitionName());
  };

  return GetSegmentDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSegmentEstimateOutcome CustomerProfilesClient::GetSegmentEstimate(const GetSegmentEstimateRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSegmentEstimate", "Required field: DomainName, is not set");
    return GetSegmentEstimateOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.EstimateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSegmentEstimate", "Required field: EstimateId, is not set");
    return GetSegmentEstimateOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EstimateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/segment-estimates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEstimateId());
  };

  return GetSegmentEstimateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSegmentMembershipOutcome CustomerProfilesClient::GetSegmentMembership(const GetSegmentMembershipRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSegmentMembership", "Required field: DomainName, is not set");
    return GetSegmentMembershipOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.SegmentDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSegmentMembership", "Required field: SegmentDefinitionName, is not set");
    return GetSegmentMembershipOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SegmentDefinitionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/segments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSegmentDefinitionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/membership");
  };

  return GetSegmentMembershipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSegmentSnapshotOutcome CustomerProfilesClient::GetSegmentSnapshot(const GetSegmentSnapshotRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSegmentSnapshot", "Required field: DomainName, is not set");
    return GetSegmentSnapshotOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.SegmentDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSegmentSnapshot", "Required field: SegmentDefinitionName, is not set");
    return GetSegmentSnapshotOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SegmentDefinitionName]", false));
  }
  if (!request.SnapshotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSegmentSnapshot", "Required field: SnapshotId, is not set");
    return GetSegmentSnapshotOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SnapshotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/segments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSegmentDefinitionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotId());
  };

  return GetSegmentSnapshotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSimilarProfilesOutcome CustomerProfilesClient::GetSimilarProfiles(const GetSimilarProfilesRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSimilarProfiles", "Required field: DomainName, is not set");
    return GetSimilarProfilesOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/matches");
  };

  return GetSimilarProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetUploadJobOutcome CustomerProfilesClient::GetUploadJob(const GetUploadJobRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUploadJob", "Required field: DomainName, is not set");
    return GetUploadJobOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DomainName]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUploadJob", "Required field: JobId, is not set");
    return GetUploadJobOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/upload-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return GetUploadJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetUploadJobPathOutcome CustomerProfilesClient::GetUploadJobPath(const GetUploadJobPathRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUploadJobPath", "Required field: DomainName, is not set");
    return GetUploadJobPathOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUploadJobPath", "Required field: JobId, is not set");
    return GetUploadJobPathOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/upload-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/path");
  };

  return GetUploadJobPathOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetWorkflowOutcome CustomerProfilesClient::GetWorkflow(const GetWorkflowRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflow", "Required field: DomainName, is not set");
    return GetWorkflowOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [DomainName]", false));
  }
  if (!request.WorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflow", "Required field: WorkflowId, is not set");
    return GetWorkflowOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [WorkflowId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowId());
  };

  return GetWorkflowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetWorkflowStepsOutcome CustomerProfilesClient::GetWorkflowSteps(const GetWorkflowStepsRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflowSteps", "Required field: DomainName, is not set");
    return GetWorkflowStepsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.WorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflowSteps", "Required field: WorkflowId, is not set");
    return GetWorkflowStepsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/steps");
  };

  return GetWorkflowStepsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAccountIntegrationsOutcome CustomerProfilesClient::ListAccountIntegrations(const ListAccountIntegrationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrations");
  };

  return ListAccountIntegrationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCalculatedAttributeDefinitionsOutcome CustomerProfilesClient::ListCalculatedAttributeDefinitions(
    const ListCalculatedAttributeDefinitionsRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCalculatedAttributeDefinitions", "Required field: DomainName, is not set");
    return ListCalculatedAttributeDefinitionsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/calculated-attributes");
  };

  return ListCalculatedAttributeDefinitionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCalculatedAttributesForProfileOutcome CustomerProfilesClient::ListCalculatedAttributesForProfile(
    const ListCalculatedAttributesForProfileRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCalculatedAttributesForProfile", "Required field: DomainName, is not set");
    return ListCalculatedAttributesForProfileOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.ProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCalculatedAttributesForProfile", "Required field: ProfileId, is not set");
    return ListCalculatedAttributesForProfileOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/profile/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/calculated-attributes");
  };

  return ListCalculatedAttributesForProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDomainLayoutsOutcome CustomerProfilesClient::ListDomainLayouts(const ListDomainLayoutsRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDomainLayouts", "Required field: DomainName, is not set");
    return ListDomainLayoutsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/layouts");
  };

  return ListDomainLayoutsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDomainObjectTypesOutcome CustomerProfilesClient::ListDomainObjectTypes(const ListDomainObjectTypesRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDomainObjectTypes", "Required field: DomainName, is not set");
    return ListDomainObjectTypesOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/domain-object-types");
  };

  return ListDomainObjectTypesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDomainsOutcome CustomerProfilesClient::ListDomains(const ListDomainsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains");
  };

  return ListDomainsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEventStreamsOutcome CustomerProfilesClient::ListEventStreams(const ListEventStreamsRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEventStreams", "Required field: DomainName, is not set");
    return ListEventStreamsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-streams");
  };

  return ListEventStreamsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEventTriggersOutcome CustomerProfilesClient::ListEventTriggers(const ListEventTriggersRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEventTriggers", "Required field: DomainName, is not set");
    return ListEventTriggersOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-triggers");
  };

  return ListEventTriggersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListIdentityResolutionJobsOutcome CustomerProfilesClient::ListIdentityResolutionJobs(
    const ListIdentityResolutionJobsRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIdentityResolutionJobs", "Required field: DomainName, is not set");
    return ListIdentityResolutionJobsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/identity-resolution-jobs");
  };

  return ListIdentityResolutionJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListIntegrationsOutcome CustomerProfilesClient::ListIntegrations(const ListIntegrationsRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIntegrations", "Required field: DomainName, is not set");
    return ListIntegrationsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrations");
  };

  return ListIntegrationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListObjectTypeAttributeValuesOutcome CustomerProfilesClient::ListObjectTypeAttributeValues(
    const ListObjectTypeAttributeValuesRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListObjectTypeAttributeValues", "Required field: DomainName, is not set");
    return ListObjectTypeAttributeValuesOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.ObjectTypeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListObjectTypeAttributeValues", "Required field: ObjectTypeName, is not set");
    return ListObjectTypeAttributeValuesOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectTypeName]", false));
  }
  if (!request.AttributeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListObjectTypeAttributeValues", "Required field: AttributeName, is not set");
    return ListObjectTypeAttributeValuesOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttributeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/object-types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetObjectTypeName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attributes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttributeName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/values");
  };

  return ListObjectTypeAttributeValuesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListObjectTypeAttributesOutcome CustomerProfilesClient::ListObjectTypeAttributes(const ListObjectTypeAttributesRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListObjectTypeAttributes", "Required field: DomainName, is not set");
    return ListObjectTypeAttributesOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.ObjectTypeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListObjectTypeAttributes", "Required field: ObjectTypeName, is not set");
    return ListObjectTypeAttributesOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectTypeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/object-types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetObjectTypeName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attributes");
  };

  return ListObjectTypeAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProfileAttributeValuesOutcome CustomerProfilesClient::ListProfileAttributeValues(
    const ListProfileAttributeValuesRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProfileAttributeValues", "Required field: DomainName, is not set");
    return ListProfileAttributeValuesOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.AttributeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProfileAttributeValues", "Required field: AttributeName, is not set");
    return ListProfileAttributeValuesOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttributeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/profile-attributes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttributeName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/values");
  };

  return ListProfileAttributeValuesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProfileHistoryRecordsOutcome CustomerProfilesClient::ListProfileHistoryRecords(const ListProfileHistoryRecordsRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProfileHistoryRecords", "Required field: DomainName, is not set");
    return ListProfileHistoryRecordsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/history-records");
  };

  return ListProfileHistoryRecordsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListProfileObjectTypeTemplatesOutcome CustomerProfilesClient::ListProfileObjectTypeTemplates(
    const ListProfileObjectTypeTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates");
  };

  return ListProfileObjectTypeTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProfileObjectTypesOutcome CustomerProfilesClient::ListProfileObjectTypes(const ListProfileObjectTypesRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProfileObjectTypes", "Required field: DomainName, is not set");
    return ListProfileObjectTypesOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/object-types");
  };

  return ListProfileObjectTypesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProfileObjectsOutcome CustomerProfilesClient::ListProfileObjects(const ListProfileObjectsRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProfileObjects", "Required field: DomainName, is not set");
    return ListProfileObjectsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/objects");
  };

  return ListProfileObjectsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRecommenderFiltersOutcome CustomerProfilesClient::ListRecommenderFilters(const ListRecommenderFiltersRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRecommenderFilters", "Required field: DomainName, is not set");
    return ListRecommenderFiltersOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recommender-filters");
  };

  return ListRecommenderFiltersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRecommenderRecipesOutcome CustomerProfilesClient::ListRecommenderRecipes(const ListRecommenderRecipesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/recommender-recipes");
  };

  return ListRecommenderRecipesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRecommendersOutcome CustomerProfilesClient::ListRecommenders(const ListRecommendersRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRecommenders", "Required field: DomainName, is not set");
    return ListRecommendersOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recommenders");
  };

  return ListRecommendersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRuleBasedMatchesOutcome CustomerProfilesClient::ListRuleBasedMatches(const ListRuleBasedMatchesRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRuleBasedMatches", "Required field: DomainName, is not set");
    return ListRuleBasedMatchesOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/ruleBasedMatches");
  };

  return ListRuleBasedMatchesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSegmentDefinitionsOutcome CustomerProfilesClient::ListSegmentDefinitions(const ListSegmentDefinitionsRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSegmentDefinitions", "Required field: DomainName, is not set");
    return ListSegmentDefinitionsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/segment-definitions");
  };

  return ListSegmentDefinitionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome CustomerProfilesClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListUploadJobsOutcome CustomerProfilesClient::ListUploadJobs(const ListUploadJobsRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUploadJobs", "Required field: DomainName, is not set");
    return ListUploadJobsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/upload-jobs");
  };

  return ListUploadJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListWorkflowsOutcome CustomerProfilesClient::ListWorkflows(const ListWorkflowsRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkflows", "Required field: DomainName, is not set");
    return ListWorkflowsOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflows");
  };

  return ListWorkflowsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

MergeProfilesOutcome CustomerProfilesClient::MergeProfiles(const MergeProfilesRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("MergeProfiles", "Required field: DomainName, is not set");
    return MergeProfilesOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/objects/merge");
  };

  return MergeProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutDomainObjectTypeOutcome CustomerProfilesClient::PutDomainObjectType(const PutDomainObjectTypeRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutDomainObjectType", "Required field: DomainName, is not set");
    return PutDomainObjectTypeOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.ObjectTypeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutDomainObjectType", "Required field: ObjectTypeName, is not set");
    return PutDomainObjectTypeOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectTypeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/domain-object-types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetObjectTypeName());
  };

  return PutDomainObjectTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutIntegrationOutcome CustomerProfilesClient::PutIntegration(const PutIntegrationRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutIntegration", "Required field: DomainName, is not set");
    return PutIntegrationOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrations");
  };

  return PutIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutProfileObjectOutcome CustomerProfilesClient::PutProfileObject(const PutProfileObjectRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutProfileObject", "Required field: DomainName, is not set");
    return PutProfileObjectOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/objects");
  };

  return PutProfileObjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutProfileObjectTypeOutcome CustomerProfilesClient::PutProfileObjectType(const PutProfileObjectTypeRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutProfileObjectType", "Required field: DomainName, is not set");
    return PutProfileObjectTypeOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.ObjectTypeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutProfileObjectType", "Required field: ObjectTypeName, is not set");
    return PutProfileObjectTypeOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectTypeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/object-types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetObjectTypeName());
  };

  return PutProfileObjectTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

SearchProfilesOutcome CustomerProfilesClient::SearchProfiles(const SearchProfilesRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchProfiles", "Required field: DomainName, is not set");
    return SearchProfilesOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/search");
  };

  return SearchProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartRecommenderOutcome CustomerProfilesClient::StartRecommender(const StartRecommenderRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartRecommender", "Required field: DomainName, is not set");
    return StartRecommenderOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.RecommenderNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartRecommender", "Required field: RecommenderName, is not set");
    return StartRecommenderOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommenderName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recommenders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecommenderName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/start");
  };

  return StartRecommenderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartUploadJobOutcome CustomerProfilesClient::StartUploadJob(const StartUploadJobRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartUploadJob", "Required field: DomainName, is not set");
    return StartUploadJobOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartUploadJob", "Required field: JobId, is not set");
    return StartUploadJobOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/upload-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return StartUploadJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StopRecommenderOutcome CustomerProfilesClient::StopRecommender(const StopRecommenderRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopRecommender", "Required field: DomainName, is not set");
    return StopRecommenderOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.RecommenderNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopRecommender", "Required field: RecommenderName, is not set");
    return StopRecommenderOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommenderName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recommenders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecommenderName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  };

  return StopRecommenderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StopUploadJobOutcome CustomerProfilesClient::StopUploadJob(const StopUploadJobRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopUploadJob", "Required field: DomainName, is not set");
    return StopUploadJobOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopUploadJob", "Required field: JobId, is not set");
    return StopUploadJobOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/upload-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  };

  return StopUploadJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

TagResourceOutcome CustomerProfilesClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome CustomerProfilesClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateCalculatedAttributeDefinitionOutcome CustomerProfilesClient::UpdateCalculatedAttributeDefinition(
    const UpdateCalculatedAttributeDefinitionRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCalculatedAttributeDefinition", "Required field: DomainName, is not set");
    return UpdateCalculatedAttributeDefinitionOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.CalculatedAttributeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCalculatedAttributeDefinition", "Required field: CalculatedAttributeName, is not set");
    return UpdateCalculatedAttributeDefinitionOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CalculatedAttributeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/calculated-attributes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCalculatedAttributeName());
  };

  return UpdateCalculatedAttributeDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateDomainOutcome CustomerProfilesClient::UpdateDomain(const UpdateDomainRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDomain", "Required field: DomainName, is not set");
    return UpdateDomainOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  return UpdateDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateDomainLayoutOutcome CustomerProfilesClient::UpdateDomainLayout(const UpdateDomainLayoutRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDomainLayout", "Required field: DomainName, is not set");
    return UpdateDomainLayoutOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.LayoutDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDomainLayout", "Required field: LayoutDefinitionName, is not set");
    return UpdateDomainLayoutOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LayoutDefinitionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/layouts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLayoutDefinitionName());
  };

  return UpdateDomainLayoutOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateEventTriggerOutcome CustomerProfilesClient::UpdateEventTrigger(const UpdateEventTriggerRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEventTrigger", "Required field: DomainName, is not set");
    return UpdateEventTriggerOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.EventTriggerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEventTrigger", "Required field: EventTriggerName, is not set");
    return UpdateEventTriggerOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventTriggerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-triggers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventTriggerName());
  };

  return UpdateEventTriggerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateProfileOutcome CustomerProfilesClient::UpdateProfile(const UpdateProfileRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProfile", "Required field: DomainName, is not set");
    return UpdateProfileOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles");
  };

  return UpdateProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateRecommenderOutcome CustomerProfilesClient::UpdateRecommender(const UpdateRecommenderRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRecommender", "Required field: DomainName, is not set");
    return UpdateRecommenderOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.RecommenderNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRecommender", "Required field: RecommenderName, is not set");
    return UpdateRecommenderOutcome(Aws::Client::AWSError<CustomerProfilesErrors>(
        CustomerProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommenderName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recommenders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecommenderName());
  };

  return UpdateRecommenderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
