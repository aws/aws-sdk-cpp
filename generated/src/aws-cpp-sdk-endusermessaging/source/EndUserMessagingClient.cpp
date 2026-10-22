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
#include <aws/endusermessaging/EndUserMessagingClient.h>
#include <aws/endusermessaging/EndUserMessagingEndpointProvider.h>
#include <aws/endusermessaging/EndUserMessagingErrorMarshaller.h>
#include <aws/endusermessaging/model/CreateBrandProfileAttributesRequest.h>
#include <aws/endusermessaging/model/CreateBrandProfileFromRegistrationRequest.h>
#include <aws/endusermessaging/model/CreateBrandProfileRequest.h>
#include <aws/endusermessaging/model/CreateNotifyCodeConfigurationRequest.h>
#include <aws/endusermessaging/model/CreateRegistrationsFromBrandProfileRequest.h>
#include <aws/endusermessaging/model/DeleteBrandProfileAttributeRequest.h>
#include <aws/endusermessaging/model/DeleteBrandProfileRequest.h>
#include <aws/endusermessaging/model/DeleteNotifyCodeConfigurationRequest.h>
#include <aws/endusermessaging/model/GetBrandProfileAttributeRequest.h>
#include <aws/endusermessaging/model/GetBrandProfileRequest.h>
#include <aws/endusermessaging/model/GetJobRequest.h>
#include <aws/endusermessaging/model/GetNotifyCodeConfigurationRequest.h>
#include <aws/endusermessaging/model/ListBrandProfileAttributesRequest.h>
#include <aws/endusermessaging/model/ListBrandProfilesRequest.h>
#include <aws/endusermessaging/model/ListJobsRequest.h>
#include <aws/endusermessaging/model/ListNotifyCodeConfigurationsRequest.h>
#include <aws/endusermessaging/model/ListRegistrationsFromBrandProfileRequest.h>
#include <aws/endusermessaging/model/ListTagsForResourceRequest.h>
#include <aws/endusermessaging/model/SendNotifyCodeVerificationRequest.h>
#include <aws/endusermessaging/model/TagResourceRequest.h>
#include <aws/endusermessaging/model/UntagResourceRequest.h>
#include <aws/endusermessaging/model/UpdateBrandProfileAttributeRequest.h>
#include <aws/endusermessaging/model/UpdateBrandProfileFromRegistrationRequest.h>
#include <aws/endusermessaging/model/UpdateBrandProfileRequest.h>
#include <aws/endusermessaging/model/UpdateNotifyCodeConfigurationRequest.h>
#include <aws/endusermessaging/model/UpdateRegistrationsFromBrandProfileRequest.h>
#include <aws/endusermessaging/model/ValidateNotifyCodeVerificationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EndUserMessaging;
using namespace Aws::EndUserMessaging::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace EndUserMessaging {
const char SERVICE_NAME[] = "end-user-messaging";
const char ALLOCATION_TAG[] = "EndUserMessagingClient";
}  // namespace EndUserMessaging
}  // namespace Aws
const char* EndUserMessagingClient::GetServiceName() { return SERVICE_NAME; }
const char* EndUserMessagingClient::GetAllocationTag() { return ALLOCATION_TAG; }

EndUserMessagingClient::EndUserMessagingClient(const EndUserMessaging::EndUserMessagingClientConfiguration& clientConfiguration,
                                               std::shared_ptr<EndUserMessagingEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EndUserMessagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<EndUserMessagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EndUserMessagingClient::EndUserMessagingClient(const AWSCredentials& credentials,
                                               std::shared_ptr<EndUserMessagingEndpointProviderBase> endpointProvider,
                                               const EndUserMessaging::EndUserMessagingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EndUserMessagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<EndUserMessagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EndUserMessagingClient::EndUserMessagingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<EndUserMessagingEndpointProviderBase> endpointProvider,
                                               const EndUserMessaging::EndUserMessagingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EndUserMessagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<EndUserMessagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
EndUserMessagingClient::EndUserMessagingClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EndUserMessagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EndUserMessagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EndUserMessagingClient::EndUserMessagingClient(const AWSCredentials& credentials,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EndUserMessagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EndUserMessagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EndUserMessagingClient::EndUserMessagingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EndUserMessagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EndUserMessagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
EndUserMessagingClient::~EndUserMessagingClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<EndUserMessagingEndpointProviderBase>& EndUserMessagingClient::accessEndpointProvider() { return m_endpointProvider; }

void EndUserMessagingClient::init(const EndUserMessaging::EndUserMessagingClientConfiguration& config) {
  AWSClient::SetServiceClientName("EndUserMessaging");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "end-user-messaging");
}

void EndUserMessagingClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
EndUserMessagingClient::InvokeOperationOutcome EndUserMessagingClient::InvokeServiceOperation(
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

  return Aws::Client::AsyncOperationState::MakeCallWithTiming<InvokeOperationOutcome>(
      request, std::move(span),
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
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CreateBrandProfileOutcome EndUserMessagingClient::CreateBrandProfile(const CreateBrandProfileRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brand-profiles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBrandProfileOutcome(result.GetResultWithOwnership())
                            : CreateBrandProfileOutcome(std::move(result.GetError()));
}

CreateBrandProfileAttributesOutcome EndUserMessagingClient::CreateBrandProfileAttributes(
    const CreateBrandProfileAttributesRequest& request) const {
  if (!request.BrandProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBrandProfileAttributes", "Required field: BrandProfileId, is not set");
    return CreateBrandProfileAttributesOutcome(Aws::Client::AWSError<EndUserMessagingErrors>(
        EndUserMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrandProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brand-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrandProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attributes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBrandProfileAttributesOutcome(result.GetResultWithOwnership())
                            : CreateBrandProfileAttributesOutcome(std::move(result.GetError()));
}

CreateBrandProfileFromRegistrationOutcome EndUserMessagingClient::CreateBrandProfileFromRegistration(
    const CreateBrandProfileFromRegistrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brand-profiles/create-from-registration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBrandProfileFromRegistrationOutcome(result.GetResultWithOwnership())
                            : CreateBrandProfileFromRegistrationOutcome(std::move(result.GetError()));
}

CreateNotifyCodeConfigurationOutcome EndUserMessagingClient::CreateNotifyCodeConfiguration(
    const CreateNotifyCodeConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/notify-code-configurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateNotifyCodeConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateNotifyCodeConfigurationOutcome(std::move(result.GetError()));
}

CreateRegistrationsFromBrandProfileOutcome EndUserMessagingClient::CreateRegistrationsFromBrandProfile(
    const CreateRegistrationsFromBrandProfileRequest& request) const {
  if (!request.BrandProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRegistrationsFromBrandProfile", "Required field: BrandProfileId, is not set");
    return CreateRegistrationsFromBrandProfileOutcome(Aws::Client::AWSError<EndUserMessagingErrors>(
        EndUserMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrandProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brand-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrandProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/create-registrations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRegistrationsFromBrandProfileOutcome(result.GetResultWithOwnership())
                            : CreateRegistrationsFromBrandProfileOutcome(std::move(result.GetError()));
}

DeleteBrandProfileOutcome EndUserMessagingClient::DeleteBrandProfile(const DeleteBrandProfileRequest& request) const {
  if (!request.BrandProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBrandProfile", "Required field: BrandProfileId, is not set");
    return DeleteBrandProfileOutcome(Aws::Client::AWSError<EndUserMessagingErrors>(
        EndUserMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrandProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brand-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetBrandProfileId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBrandProfileOutcome(result.GetResultWithOwnership())
                            : DeleteBrandProfileOutcome(std::move(result.GetError()));
}

DeleteBrandProfileAttributeOutcome EndUserMessagingClient::DeleteBrandProfileAttribute(
    const DeleteBrandProfileAttributeRequest& request) const {
  if (!request.BrandProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBrandProfileAttribute", "Required field: BrandProfileId, is not set");
    return DeleteBrandProfileAttributeOutcome(Aws::Client::AWSError<EndUserMessagingErrors>(
        EndUserMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrandProfileId]", false));
  }
  if (!request.AttributeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBrandProfileAttribute", "Required field: AttributeName, is not set");
    return DeleteBrandProfileAttributeOutcome(Aws::Client::AWSError<EndUserMessagingErrors>(
        EndUserMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttributeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brand-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrandProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attributes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttributeName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBrandProfileAttributeOutcome(result.GetResultWithOwnership())
                            : DeleteBrandProfileAttributeOutcome(std::move(result.GetError()));
}

DeleteNotifyCodeConfigurationOutcome EndUserMessagingClient::DeleteNotifyCodeConfiguration(
    const DeleteNotifyCodeConfigurationRequest& request) const {
  if (!request.NotifyCodeConfigurationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteNotifyCodeConfiguration", "Required field: NotifyCodeConfigurationId, is not set");
    return DeleteNotifyCodeConfigurationOutcome(Aws::Client::AWSError<EndUserMessagingErrors>(
        EndUserMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NotifyCodeConfigurationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/notify-code-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetNotifyCodeConfigurationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteNotifyCodeConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteNotifyCodeConfigurationOutcome(std::move(result.GetError()));
}

GetBrandProfileOutcome EndUserMessagingClient::GetBrandProfile(const GetBrandProfileRequest& request) const {
  if (!request.BrandProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBrandProfile", "Required field: BrandProfileId, is not set");
    return GetBrandProfileOutcome(Aws::Client::AWSError<EndUserMessagingErrors>(
        EndUserMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrandProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brand-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetBrandProfileId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBrandProfileOutcome(result.GetResultWithOwnership())
                            : GetBrandProfileOutcome(std::move(result.GetError()));
}

GetBrandProfileAttributeOutcome EndUserMessagingClient::GetBrandProfileAttribute(const GetBrandProfileAttributeRequest& request) const {
  if (!request.BrandProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBrandProfileAttribute", "Required field: BrandProfileId, is not set");
    return GetBrandProfileAttributeOutcome(Aws::Client::AWSError<EndUserMessagingErrors>(
        EndUserMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrandProfileId]", false));
  }
  if (!request.AttributeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBrandProfileAttribute", "Required field: AttributeName, is not set");
    return GetBrandProfileAttributeOutcome(Aws::Client::AWSError<EndUserMessagingErrors>(
        EndUserMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttributeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brand-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrandProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attributes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttributeName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBrandProfileAttributeOutcome(result.GetResultWithOwnership())
                            : GetBrandProfileAttributeOutcome(std::move(result.GetError()));
}

GetJobOutcome EndUserMessagingClient::GetJob(const GetJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJob", "Required field: JobId, is not set");
    return GetJobOutcome(Aws::Client::AWSError<EndUserMessagingErrors>(EndUserMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetJobOutcome(result.GetResultWithOwnership()) : GetJobOutcome(std::move(result.GetError()));
}

GetNotifyCodeConfigurationOutcome EndUserMessagingClient::GetNotifyCodeConfiguration(
    const GetNotifyCodeConfigurationRequest& request) const {
  if (!request.NotifyCodeConfigurationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetNotifyCodeConfiguration", "Required field: NotifyCodeConfigurationId, is not set");
    return GetNotifyCodeConfigurationOutcome(Aws::Client::AWSError<EndUserMessagingErrors>(
        EndUserMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NotifyCodeConfigurationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/notify-code-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetNotifyCodeConfigurationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetNotifyCodeConfigurationOutcome(result.GetResultWithOwnership())
                            : GetNotifyCodeConfigurationOutcome(std::move(result.GetError()));
}

ListBrandProfileAttributesOutcome EndUserMessagingClient::ListBrandProfileAttributes(
    const ListBrandProfileAttributesRequest& request) const {
  if (!request.BrandProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBrandProfileAttributes", "Required field: BrandProfileId, is not set");
    return ListBrandProfileAttributesOutcome(Aws::Client::AWSError<EndUserMessagingErrors>(
        EndUserMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrandProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brand-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrandProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attributes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListBrandProfileAttributesOutcome(result.GetResultWithOwnership())
                            : ListBrandProfileAttributesOutcome(std::move(result.GetError()));
}

ListBrandProfilesOutcome EndUserMessagingClient::ListBrandProfiles(const ListBrandProfilesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brand-profiles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListBrandProfilesOutcome(result.GetResultWithOwnership())
                            : ListBrandProfilesOutcome(std::move(result.GetError()));
}

ListJobsOutcome EndUserMessagingClient::ListJobs(const ListJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListJobsOutcome(result.GetResultWithOwnership()) : ListJobsOutcome(std::move(result.GetError()));
}

ListNotifyCodeConfigurationsOutcome EndUserMessagingClient::ListNotifyCodeConfigurations(
    const ListNotifyCodeConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/notify-code-configurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListNotifyCodeConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListNotifyCodeConfigurationsOutcome(std::move(result.GetError()));
}

ListRegistrationsFromBrandProfileOutcome EndUserMessagingClient::ListRegistrationsFromBrandProfile(
    const ListRegistrationsFromBrandProfileRequest& request) const {
  if (!request.BrandProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRegistrationsFromBrandProfile", "Required field: BrandProfileId, is not set");
    return ListRegistrationsFromBrandProfileOutcome(Aws::Client::AWSError<EndUserMessagingErrors>(
        EndUserMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrandProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brand-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrandProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/registrations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRegistrationsFromBrandProfileOutcome(result.GetResultWithOwnership())
                            : ListRegistrationsFromBrandProfileOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome EndUserMessagingClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<EndUserMessagingErrors>(
        EndUserMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

SendNotifyCodeVerificationOutcome EndUserMessagingClient::SendNotifyCodeVerification(
    const SendNotifyCodeVerificationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/notify-code-verifications/send");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendNotifyCodeVerificationOutcome(result.GetResultWithOwnership())
                            : SendNotifyCodeVerificationOutcome(std::move(result.GetError()));
}

TagResourceOutcome EndUserMessagingClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<EndUserMessagingErrors>(EndUserMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome EndUserMessagingClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<EndUserMessagingErrors>(
        EndUserMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<EndUserMessagingErrors>(
        EndUserMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateBrandProfileOutcome EndUserMessagingClient::UpdateBrandProfile(const UpdateBrandProfileRequest& request) const {
  if (!request.BrandProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBrandProfile", "Required field: BrandProfileId, is not set");
    return UpdateBrandProfileOutcome(Aws::Client::AWSError<EndUserMessagingErrors>(
        EndUserMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrandProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brand-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetBrandProfileId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateBrandProfileOutcome(result.GetResultWithOwnership())
                            : UpdateBrandProfileOutcome(std::move(result.GetError()));
}

UpdateBrandProfileAttributeOutcome EndUserMessagingClient::UpdateBrandProfileAttribute(
    const UpdateBrandProfileAttributeRequest& request) const {
  if (!request.BrandProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBrandProfileAttribute", "Required field: BrandProfileId, is not set");
    return UpdateBrandProfileAttributeOutcome(Aws::Client::AWSError<EndUserMessagingErrors>(
        EndUserMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrandProfileId]", false));
  }
  if (!request.AttributeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBrandProfileAttribute", "Required field: AttributeName, is not set");
    return UpdateBrandProfileAttributeOutcome(Aws::Client::AWSError<EndUserMessagingErrors>(
        EndUserMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttributeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brand-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrandProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attributes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttributeName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateBrandProfileAttributeOutcome(result.GetResultWithOwnership())
                            : UpdateBrandProfileAttributeOutcome(std::move(result.GetError()));
}

UpdateBrandProfileFromRegistrationOutcome EndUserMessagingClient::UpdateBrandProfileFromRegistration(
    const UpdateBrandProfileFromRegistrationRequest& request) const {
  if (!request.BrandProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBrandProfileFromRegistration", "Required field: BrandProfileId, is not set");
    return UpdateBrandProfileFromRegistrationOutcome(Aws::Client::AWSError<EndUserMessagingErrors>(
        EndUserMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrandProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brand-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrandProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-from-registration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateBrandProfileFromRegistrationOutcome(result.GetResultWithOwnership())
                            : UpdateBrandProfileFromRegistrationOutcome(std::move(result.GetError()));
}

UpdateNotifyCodeConfigurationOutcome EndUserMessagingClient::UpdateNotifyCodeConfiguration(
    const UpdateNotifyCodeConfigurationRequest& request) const {
  if (!request.NotifyCodeConfigurationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateNotifyCodeConfiguration", "Required field: NotifyCodeConfigurationId, is not set");
    return UpdateNotifyCodeConfigurationOutcome(Aws::Client::AWSError<EndUserMessagingErrors>(
        EndUserMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NotifyCodeConfigurationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/notify-code-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetNotifyCodeConfigurationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateNotifyCodeConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateNotifyCodeConfigurationOutcome(std::move(result.GetError()));
}

UpdateRegistrationsFromBrandProfileOutcome EndUserMessagingClient::UpdateRegistrationsFromBrandProfile(
    const UpdateRegistrationsFromBrandProfileRequest& request) const {
  if (!request.BrandProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRegistrationsFromBrandProfile", "Required field: BrandProfileId, is not set");
    return UpdateRegistrationsFromBrandProfileOutcome(Aws::Client::AWSError<EndUserMessagingErrors>(
        EndUserMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrandProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brand-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrandProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-registrations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateRegistrationsFromBrandProfileOutcome(result.GetResultWithOwnership())
                            : UpdateRegistrationsFromBrandProfileOutcome(std::move(result.GetError()));
}

ValidateNotifyCodeVerificationOutcome EndUserMessagingClient::ValidateNotifyCodeVerification(
    const ValidateNotifyCodeVerificationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/notify-code-verifications/validate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ValidateNotifyCodeVerificationOutcome(result.GetResultWithOwnership())
                            : ValidateNotifyCodeVerificationOutcome(std::move(result.GetError()));
}
