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
#include <aws/glacier/GlacierClient.h>
#include <aws/glacier/GlacierEndpointProvider.h>
#include <aws/glacier/GlacierErrorMarshaller.h>
#include <aws/glacier/model/AbortMultipartUploadRequest.h>
#include <aws/glacier/model/AbortVaultLockRequest.h>
#include <aws/glacier/model/AddTagsToVaultRequest.h>
#include <aws/glacier/model/CompleteMultipartUploadRequest.h>
#include <aws/glacier/model/CompleteVaultLockRequest.h>
#include <aws/glacier/model/CreateVaultRequest.h>
#include <aws/glacier/model/DeleteArchiveRequest.h>
#include <aws/glacier/model/DeleteVaultAccessPolicyRequest.h>
#include <aws/glacier/model/DeleteVaultNotificationsRequest.h>
#include <aws/glacier/model/DeleteVaultRequest.h>
#include <aws/glacier/model/DescribeJobRequest.h>
#include <aws/glacier/model/DescribeVaultRequest.h>
#include <aws/glacier/model/GetDataRetrievalPolicyRequest.h>
#include <aws/glacier/model/GetJobOutputRequest.h>
#include <aws/glacier/model/GetVaultAccessPolicyRequest.h>
#include <aws/glacier/model/GetVaultLockRequest.h>
#include <aws/glacier/model/GetVaultNotificationsRequest.h>
#include <aws/glacier/model/InitiateJobRequest.h>
#include <aws/glacier/model/InitiateMultipartUploadRequest.h>
#include <aws/glacier/model/InitiateVaultLockRequest.h>
#include <aws/glacier/model/ListJobsRequest.h>
#include <aws/glacier/model/ListMultipartUploadsRequest.h>
#include <aws/glacier/model/ListPartsRequest.h>
#include <aws/glacier/model/ListProvisionedCapacityRequest.h>
#include <aws/glacier/model/ListTagsForVaultRequest.h>
#include <aws/glacier/model/ListVaultsRequest.h>
#include <aws/glacier/model/PurchaseProvisionedCapacityRequest.h>
#include <aws/glacier/model/RemoveTagsFromVaultRequest.h>
#include <aws/glacier/model/SetDataRetrievalPolicyRequest.h>
#include <aws/glacier/model/SetVaultAccessPolicyRequest.h>
#include <aws/glacier/model/SetVaultNotificationsRequest.h>
#include <aws/glacier/model/UploadArchiveRequest.h>
#include <aws/glacier/model/UploadMultipartPartRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Glacier;
using namespace Aws::Glacier::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Glacier {
const char SERVICE_NAME[] = "glacier";
const char ALLOCATION_TAG[] = "GlacierClient";
}  // namespace Glacier
}  // namespace Aws
const char* GlacierClient::GetServiceName() { return SERVICE_NAME; }
const char* GlacierClient::GetAllocationTag() { return ALLOCATION_TAG; }

GlacierClient::GlacierClient(const Glacier::GlacierClientConfiguration& clientConfiguration,
                             std::shared_ptr<GlacierEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GlacierEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GlacierClient::GlacierClient(const AWSCredentials& credentials, std::shared_ptr<GlacierEndpointProviderBase> endpointProvider,
                             const Glacier::GlacierClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GlacierEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GlacierClient::GlacierClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<GlacierEndpointProviderBase> endpointProvider,
                             const Glacier::GlacierClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GlacierEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
GlacierClient::GlacierClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GlacierEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GlacierClient::GlacierClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GlacierEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GlacierClient::GlacierClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GlacierEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
GlacierClient::~GlacierClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<GlacierEndpointProviderBase>& GlacierClient::accessEndpointProvider() { return m_endpointProvider; }

void GlacierClient::init(const Glacier::GlacierClientConfiguration& config) {
  AWSClient::SetServiceClientName("Glacier");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "glacier");
}

void GlacierClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
GlacierClient::InvokeOperationOutcome GlacierClient::InvokeServiceOperation(
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

AbortMultipartUploadOutcome GlacierClient::AbortMultipartUpload(const AbortMultipartUploadRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: AccountId, is not set");
    return AbortMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: VaultName, is not set");
    return AbortMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [VaultName]", false));
  }
  if (!request.UploadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: UploadId, is not set");
    return AbortMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [UploadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/multipart-uploads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUploadId());
  };

  return AbortMultipartUploadOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

AbortVaultLockOutcome GlacierClient::AbortVaultLock(const AbortVaultLockRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AbortVaultLock", "Required field: AccountId, is not set");
    return AbortVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AbortVaultLock", "Required field: VaultName, is not set");
    return AbortVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [VaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lock-policy");
  };

  return AbortVaultLockOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

AddTagsToVaultOutcome GlacierClient::AddTagsToVault(const AddTagsToVaultRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddTagsToVault", "Required field: AccountId, is not set");
    return AddTagsToVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddTagsToVault", "Required field: VaultName, is not set");
    return AddTagsToVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [VaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
    ss.str("?operation=add");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return AddTagsToVaultOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CompleteMultipartUploadOutcome GlacierClient::CompleteMultipartUpload(const CompleteMultipartUploadRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: AccountId, is not set");
    return CompleteMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: VaultName, is not set");
    return CompleteMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [VaultName]", false));
  }
  if (!request.UploadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: UploadId, is not set");
    return CompleteMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [UploadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/multipart-uploads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUploadId());
  };

  return CompleteMultipartUploadOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CompleteVaultLockOutcome GlacierClient::CompleteVaultLock(const CompleteVaultLockRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CompleteVaultLock", "Required field: AccountId, is not set");
    return CompleteVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CompleteVaultLock", "Required field: VaultName, is not set");
    return CompleteVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [VaultName]", false));
  }
  if (!request.LockIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CompleteVaultLock", "Required field: LockId, is not set");
    return CompleteVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [LockId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lock-policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLockId());
  };

  return CompleteVaultLockOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVaultOutcome GlacierClient::CreateVault(const CreateVaultRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateVault", "Required field: AccountId, is not set");
    return CreateVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateVault", "Required field: VaultName, is not set");
    return CreateVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [VaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
  };

  return CreateVaultOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

DeleteArchiveOutcome GlacierClient::DeleteArchive(const DeleteArchiveRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteArchive", "Required field: AccountId, is not set");
    return DeleteArchiveOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteArchive", "Required field: VaultName, is not set");
    return DeleteArchiveOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [VaultName]", false));
  }
  if (!request.ArchiveIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteArchive", "Required field: ArchiveId, is not set");
    return DeleteArchiveOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ArchiveId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/archives/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArchiveId());
  };

  return DeleteArchiveOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVaultOutcome GlacierClient::DeleteVault(const DeleteVaultRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVault", "Required field: AccountId, is not set");
    return DeleteVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVault", "Required field: VaultName, is not set");
    return DeleteVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [VaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
  };

  return DeleteVaultOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVaultAccessPolicyOutcome GlacierClient::DeleteVaultAccessPolicy(const DeleteVaultAccessPolicyRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVaultAccessPolicy", "Required field: AccountId, is not set");
    return DeleteVaultAccessPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVaultAccessPolicy", "Required field: VaultName, is not set");
    return DeleteVaultAccessPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [VaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-policy");
  };

  return DeleteVaultAccessPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVaultNotificationsOutcome GlacierClient::DeleteVaultNotifications(const DeleteVaultNotificationsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVaultNotifications", "Required field: AccountId, is not set");
    return DeleteVaultNotificationsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVaultNotifications", "Required field: VaultName, is not set");
    return DeleteVaultNotificationsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [VaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configuration");
  };

  return DeleteVaultNotificationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeJobOutcome GlacierClient::DescribeJob(const DescribeJobRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: AccountId, is not set");
    return DescribeJobOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: VaultName, is not set");
    return DescribeJobOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [VaultName]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: JobId, is not set");
    return DescribeJobOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return DescribeJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeVaultOutcome GlacierClient::DescribeVault(const DescribeVaultRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeVault", "Required field: AccountId, is not set");
    return DescribeVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeVault", "Required field: VaultName, is not set");
    return DescribeVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [VaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
  };

  return DescribeVaultOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDataRetrievalPolicyOutcome GlacierClient::GetDataRetrievalPolicy(const GetDataRetrievalPolicyRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataRetrievalPolicy", "Required field: AccountId, is not set");
    return GetDataRetrievalPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/data-retrieval");
  };

  return GetDataRetrievalPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetJobOutputOutcome GlacierClient::GetJobOutput(const GetJobOutputRequest& request) const {
  AWS_OPERATION_GUARD(GetJobOutput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetJobOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJobOutput", "Required field: AccountId, is not set");
    return GetJobOutputOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJobOutput", "Required field: VaultName, is not set");
    return GetJobOutputOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [VaultName]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJobOutput", "Required field: JobId, is not set");
    return GetJobOutputOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [JobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetJobOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetJobOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetJobOutput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetJobOutputOutcome>(
      [&]() -> GetJobOutputOutcome {
        if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos) {
          AWS_LOGSTREAM_ERROR("GetJobOutput", "Required field: AccountId has invalid value");
          return GetJobOutputOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER",
                                                                          "AccountId is invalid", false));
        }
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetJobOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/output");
        return GetJobOutputOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetVaultAccessPolicyOutcome GlacierClient::GetVaultAccessPolicy(const GetVaultAccessPolicyRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVaultAccessPolicy", "Required field: AccountId, is not set");
    return GetVaultAccessPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVaultAccessPolicy", "Required field: VaultName, is not set");
    return GetVaultAccessPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [VaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-policy");
  };

  return GetVaultAccessPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVaultLockOutcome GlacierClient::GetVaultLock(const GetVaultLockRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVaultLock", "Required field: AccountId, is not set");
    return GetVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVaultLock", "Required field: VaultName, is not set");
    return GetVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [VaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lock-policy");
  };

  return GetVaultLockOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVaultNotificationsOutcome GlacierClient::GetVaultNotifications(const GetVaultNotificationsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVaultNotifications", "Required field: AccountId, is not set");
    return GetVaultNotificationsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVaultNotifications", "Required field: VaultName, is not set");
    return GetVaultNotificationsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [VaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configuration");
  };

  return GetVaultNotificationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

InitiateJobOutcome GlacierClient::InitiateJob(const InitiateJobRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InitiateJob", "Required field: AccountId, is not set");
    return InitiateJobOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InitiateJob", "Required field: VaultName, is not set");
    return InitiateJobOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [VaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  };

  return InitiateJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

InitiateMultipartUploadOutcome GlacierClient::InitiateMultipartUpload(const InitiateMultipartUploadRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InitiateMultipartUpload", "Required field: AccountId, is not set");
    return InitiateMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InitiateMultipartUpload", "Required field: VaultName, is not set");
    return InitiateMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [VaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/multipart-uploads");
  };

  return InitiateMultipartUploadOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

InitiateVaultLockOutcome GlacierClient::InitiateVaultLock(const InitiateVaultLockRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InitiateVaultLock", "Required field: AccountId, is not set");
    return InitiateVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InitiateVaultLock", "Required field: VaultName, is not set");
    return InitiateVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [VaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lock-policy");
  };

  return InitiateVaultLockOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListJobsOutcome GlacierClient::ListJobs(const ListJobsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobs", "Required field: AccountId, is not set");
    return ListJobsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobs", "Required field: VaultName, is not set");
    return ListJobsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [VaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  };

  return ListJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMultipartUploadsOutcome GlacierClient::ListMultipartUploads(const ListMultipartUploadsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMultipartUploads", "Required field: AccountId, is not set");
    return ListMultipartUploadsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMultipartUploads", "Required field: VaultName, is not set");
    return ListMultipartUploadsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [VaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/multipart-uploads");
  };

  return ListMultipartUploadsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPartsOutcome GlacierClient::ListParts(const ListPartsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: AccountId, is not set");
    return ListPartsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: VaultName, is not set");
    return ListPartsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [VaultName]", false));
  }
  if (!request.UploadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: UploadId, is not set");
    return ListPartsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [UploadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/multipart-uploads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUploadId());
  };

  return ListPartsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProvisionedCapacityOutcome GlacierClient::ListProvisionedCapacity(const ListProvisionedCapacityRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProvisionedCapacity", "Required field: AccountId, is not set");
    return ListProvisionedCapacityOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/provisioned-capacity");
  };

  return ListProvisionedCapacityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForVaultOutcome GlacierClient::ListTagsForVault(const ListTagsForVaultRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForVault", "Required field: AccountId, is not set");
    return ListTagsForVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForVault", "Required field: VaultName, is not set");
    return ListTagsForVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [VaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  return ListTagsForVaultOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListVaultsOutcome GlacierClient::ListVaults(const ListVaultsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListVaults", "Required field: AccountId, is not set");
    return ListVaultsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults");
  };

  return ListVaultsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PurchaseProvisionedCapacityOutcome GlacierClient::PurchaseProvisionedCapacity(const PurchaseProvisionedCapacityRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PurchaseProvisionedCapacity", "Required field: AccountId, is not set");
    return PurchaseProvisionedCapacityOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/provisioned-capacity");
  };

  return PurchaseProvisionedCapacityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveTagsFromVaultOutcome GlacierClient::RemoveTagsFromVault(const RemoveTagsFromVaultRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveTagsFromVault", "Required field: AccountId, is not set");
    return RemoveTagsFromVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveTagsFromVault", "Required field: VaultName, is not set");
    return RemoveTagsFromVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [VaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
    ss.str("?operation=remove");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return RemoveTagsFromVaultOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SetDataRetrievalPolicyOutcome GlacierClient::SetDataRetrievalPolicy(const SetDataRetrievalPolicyRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SetDataRetrievalPolicy", "Required field: AccountId, is not set");
    return SetDataRetrievalPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/data-retrieval");
  };

  return SetDataRetrievalPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

SetVaultAccessPolicyOutcome GlacierClient::SetVaultAccessPolicy(const SetVaultAccessPolicyRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SetVaultAccessPolicy", "Required field: AccountId, is not set");
    return SetVaultAccessPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SetVaultAccessPolicy", "Required field: VaultName, is not set");
    return SetVaultAccessPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [VaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-policy");
  };

  return SetVaultAccessPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

SetVaultNotificationsOutcome GlacierClient::SetVaultNotifications(const SetVaultNotificationsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SetVaultNotifications", "Required field: AccountId, is not set");
    return SetVaultNotificationsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SetVaultNotifications", "Required field: VaultName, is not set");
    return SetVaultNotificationsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [VaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configuration");
  };

  return SetVaultNotificationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UploadArchiveOutcome GlacierClient::UploadArchive(const UploadArchiveRequest& request) const {
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UploadArchive", "Required field: VaultName, is not set");
    return UploadArchiveOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [VaultName]", false));
  }
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UploadArchive", "Required field: AccountId, is not set");
    return UploadArchiveOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/archives");
  };

  return UploadArchiveOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UploadMultipartPartOutcome GlacierClient::UploadMultipartPart(const UploadMultipartPartRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UploadMultipartPart", "Required field: AccountId, is not set");
    return UploadMultipartPartOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UploadMultipartPart", "Required field: VaultName, is not set");
    return UploadMultipartPartOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [VaultName]", false));
  }
  if (!request.UploadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UploadMultipartPart", "Required field: UploadId, is not set");
    return UploadMultipartPartOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [UploadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/multipart-uploads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUploadId());
  };

  return UploadMultipartPartOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
