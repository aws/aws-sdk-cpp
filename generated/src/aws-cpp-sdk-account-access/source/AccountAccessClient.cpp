/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access/AccountAccessClient.h>
#include <aws/account-access/AccountAccessEndpointProvider.h>
#include <aws/account-access/AccountAccessErrorMarshaller.h>
#include <aws/account-access/model/CreateApplicationRequest.h>
#include <aws/account-access/model/CreateEntitlementRequest.h>
#include <aws/account-access/model/DeleteApplicationRequest.h>
#include <aws/account-access/model/DeleteEntitlementRequest.h>
#include <aws/account-access/model/GetApplicationRequest.h>
#include <aws/account-access/model/GetEntitlementRequest.h>
#include <aws/account-access/model/ListApplicationsRequest.h>
#include <aws/account-access/model/ListEntitlementsRequest.h>
#include <aws/account-access/model/ListTagsForResourceRequest.h>
#include <aws/account-access/model/TagResourceRequest.h>
#include <aws/account-access/model/UntagResourceRequest.h>
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
using namespace Aws::AccountAccess;
using namespace Aws::AccountAccess::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace AccountAccess {
const char SERVICE_NAME[] = "account-access";
const char ALLOCATION_TAG[] = "AccountAccessClient";
}  // namespace AccountAccess
}  // namespace Aws
const char* AccountAccessClient::GetServiceName() { return SERVICE_NAME; }
const char* AccountAccessClient::GetAllocationTag() { return ALLOCATION_TAG; }

AccountAccessClient::AccountAccessClient(const AccountAccess::AccountAccessClientConfiguration& clientConfiguration,
                                         std::shared_ptr<AccountAccessEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AccountAccessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AccountAccessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AccountAccessClient::AccountAccessClient(const AWSCredentials& credentials,
                                         std::shared_ptr<AccountAccessEndpointProviderBase> endpointProvider,
                                         const AccountAccess::AccountAccessClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AccountAccessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AccountAccessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AccountAccessClient::AccountAccessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<AccountAccessEndpointProviderBase> endpointProvider,
                                         const AccountAccess::AccountAccessClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AccountAccessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AccountAccessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
AccountAccessClient::AccountAccessClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AccountAccessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AccountAccessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AccountAccessClient::AccountAccessClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AccountAccessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AccountAccessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AccountAccessClient::AccountAccessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AccountAccessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AccountAccessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
AccountAccessClient::~AccountAccessClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<AccountAccessEndpointProviderBase>& AccountAccessClient::accessEndpointProvider() { return m_endpointProvider; }

void AccountAccessClient::init(const AccountAccess::AccountAccessClientConfiguration& config) {
  AWSClient::SetServiceClientName("Account Access");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "account-access");
}

void AccountAccessClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
AccountAccessClient::InvokeOperationOutcome AccountAccessClient::InvokeServiceOperation(
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

CreateApplicationOutcome AccountAccessClient::CreateApplication(const CreateApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateApplicationOutcome(result.GetResultWithOwnership())
                            : CreateApplicationOutcome(std::move(result.GetError()));
}

CreateEntitlementOutcome AccountAccessClient::CreateEntitlement(const CreateEntitlementRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/entitlements");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEntitlementOutcome(result.GetResultWithOwnership())
                            : CreateEntitlementOutcome(std::move(result.GetError()));
}

DeleteApplicationOutcome AccountAccessClient::DeleteApplication(const DeleteApplicationRequest& request) const {
  if (!request.ApplicationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: ApplicationArn, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<AccountAccessErrors>(AccountAccessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ApplicationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteApplicationOutcome(result.GetResultWithOwnership())
                            : DeleteApplicationOutcome(std::move(result.GetError()));
}

DeleteEntitlementOutcome AccountAccessClient::DeleteEntitlement(const DeleteEntitlementRequest& request) const {
  if (!request.ApplicationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEntitlement", "Required field: ApplicationArn, is not set");
    return DeleteEntitlementOutcome(Aws::Client::AWSError<AccountAccessErrors>(AccountAccessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ApplicationArn]", false));
  }
  if (!request.EntitlementIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEntitlement", "Required field: EntitlementId, is not set");
    return DeleteEntitlementOutcome(Aws::Client::AWSError<AccountAccessErrors>(AccountAccessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [EntitlementId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/entitlements/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntitlementId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteEntitlementOutcome(result.GetResultWithOwnership())
                            : DeleteEntitlementOutcome(std::move(result.GetError()));
}

GetApplicationOutcome AccountAccessClient::GetApplication(const GetApplicationRequest& request) const {
  if (!request.ApplicationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: ApplicationArn, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<AccountAccessErrors>(AccountAccessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ApplicationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetApplicationOutcome(result.GetResultWithOwnership()) : GetApplicationOutcome(std::move(result.GetError()));
}

GetEntitlementOutcome AccountAccessClient::GetEntitlement(const GetEntitlementRequest& request) const {
  if (!request.ApplicationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEntitlement", "Required field: ApplicationArn, is not set");
    return GetEntitlementOutcome(Aws::Client::AWSError<AccountAccessErrors>(AccountAccessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ApplicationArn]", false));
  }
  if (!request.EntitlementIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEntitlement", "Required field: EntitlementId, is not set");
    return GetEntitlementOutcome(Aws::Client::AWSError<AccountAccessErrors>(AccountAccessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [EntitlementId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/entitlements/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntitlementId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetEntitlementOutcome(result.GetResultWithOwnership()) : GetEntitlementOutcome(std::move(result.GetError()));
}

ListApplicationsOutcome AccountAccessClient::ListApplications(const ListApplicationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications-list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListApplicationsOutcome(result.GetResultWithOwnership())
                            : ListApplicationsOutcome(std::move(result.GetError()));
}

ListEntitlementsOutcome AccountAccessClient::ListEntitlements(const ListEntitlementsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/entitlements-list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEntitlementsOutcome(result.GetResultWithOwnership())
                            : ListEntitlementsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome AccountAccessClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AccountAccessErrors>(
        AccountAccessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

TagResourceOutcome AccountAccessClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AccountAccessErrors>(AccountAccessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome AccountAccessClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AccountAccessErrors>(AccountAccessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AccountAccessErrors>(AccountAccessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}
