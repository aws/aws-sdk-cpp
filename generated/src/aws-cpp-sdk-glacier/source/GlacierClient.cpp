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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/glacier/GlacierClient.h>
#include <aws/glacier/GlacierErrorMarshaller.h>
#include <aws/glacier/GlacierEndpointProvider.h>
#include <aws/glacier/model/AbortMultipartUploadRequest.h>
#include <aws/glacier/model/AbortVaultLockRequest.h>
#include <aws/glacier/model/AddTagsToVaultRequest.h>
#include <aws/glacier/model/CompleteMultipartUploadRequest.h>
#include <aws/glacier/model/CompleteVaultLockRequest.h>
#include <aws/glacier/model/CreateVaultRequest.h>
#include <aws/glacier/model/DeleteArchiveRequest.h>
#include <aws/glacier/model/DeleteVaultRequest.h>
#include <aws/glacier/model/DeleteVaultAccessPolicyRequest.h>
#include <aws/glacier/model/DeleteVaultNotificationsRequest.h>
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

namespace Aws
{
  namespace Glacier
  {
    const char SERVICE_NAME[] = "glacier";
    const char ALLOCATION_TAG[] = "GlacierClient";
  }
}
const char* GlacierClient::GetServiceName() {return SERVICE_NAME;}
const char* GlacierClient::GetAllocationTag() {return ALLOCATION_TAG;}

GlacierClient::GlacierClient(const Glacier::GlacierClientConfiguration& clientConfiguration,
                             std::shared_ptr<GlacierEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GlacierEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

GlacierClient::GlacierClient(const AWSCredentials& credentials,
                             std::shared_ptr<GlacierEndpointProviderBase> endpointProvider,
                             const Glacier::GlacierClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GlacierEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

GlacierClient::GlacierClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<GlacierEndpointProviderBase> endpointProvider,
                             const Glacier::GlacierClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GlacierEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  GlacierClient::GlacierClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<GlacierEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

GlacierClient::GlacierClient(const AWSCredentials& credentials,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<GlacierEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

GlacierClient::GlacierClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<GlacierEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
GlacierClient::~GlacierClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<GlacierEndpointProviderBase>& GlacierClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void GlacierClient::init(const Glacier::GlacierClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Glacier");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void GlacierClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AbortMultipartUploadOutcome GlacierClient::AbortMultipartUpload(const AbortMultipartUploadRequest& request) const
{
  AWS_OPERATION_GUARD(AbortMultipartUpload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AbortMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: AccountId, is not set");
    return AbortMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: VaultName, is not set");
    return AbortMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: UploadId, is not set");
    return AbortMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AbortMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AbortMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AbortMultipartUpload",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AbortMultipartUploadOutcome>(
    [&]()-> AbortMultipartUploadOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: AccountId has invalid value");
          return AbortMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AbortMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/multipart-uploads/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUploadId());
      return AbortMultipartUploadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AbortVaultLockOutcome GlacierClient::AbortVaultLock(const AbortVaultLockRequest& request) const
{
  AWS_OPERATION_GUARD(AbortVaultLock);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AbortVaultLock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortVaultLock", "Required field: AccountId, is not set");
    return AbortVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortVaultLock", "Required field: VaultName, is not set");
    return AbortVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AbortVaultLock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AbortVaultLock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AbortVaultLock",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AbortVaultLockOutcome>(
    [&]()-> AbortVaultLockOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("AbortVaultLock", "Required field: AccountId has invalid value");
          return AbortVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AbortVaultLock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/lock-policy");
      return AbortVaultLockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AddTagsToVaultOutcome GlacierClient::AddTagsToVault(const AddTagsToVaultRequest& request) const
{
  AWS_OPERATION_GUARD(AddTagsToVault);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddTagsToVault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddTagsToVault", "Required field: AccountId, is not set");
    return AddTagsToVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddTagsToVault", "Required field: VaultName, is not set");
    return AddTagsToVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AddTagsToVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AddTagsToVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AddTagsToVault",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AddTagsToVaultOutcome>(
    [&]()-> AddTagsToVaultOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("AddTagsToVault", "Required field: AccountId has invalid value");
          return AddTagsToVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddTagsToVault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
      ss.str("?operation=add");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      return AddTagsToVaultOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CompleteMultipartUploadOutcome GlacierClient::CompleteMultipartUpload(const CompleteMultipartUploadRequest& request) const
{
  AWS_OPERATION_GUARD(CompleteMultipartUpload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CompleteMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: AccountId, is not set");
    return CompleteMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: VaultName, is not set");
    return CompleteMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: UploadId, is not set");
    return CompleteMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CompleteMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CompleteMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CompleteMultipartUpload",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CompleteMultipartUploadOutcome>(
    [&]()-> CompleteMultipartUploadOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: AccountId has invalid value");
          return CompleteMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CompleteMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/multipart-uploads/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUploadId());
      return CompleteMultipartUploadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CompleteVaultLockOutcome GlacierClient::CompleteVaultLock(const CompleteVaultLockRequest& request) const
{
  AWS_OPERATION_GUARD(CompleteVaultLock);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CompleteVaultLock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteVaultLock", "Required field: AccountId, is not set");
    return CompleteVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteVaultLock", "Required field: VaultName, is not set");
    return CompleteVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  if (!request.LockIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteVaultLock", "Required field: LockId, is not set");
    return CompleteVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LockId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CompleteVaultLock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CompleteVaultLock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CompleteVaultLock",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CompleteVaultLockOutcome>(
    [&]()-> CompleteVaultLockOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("CompleteVaultLock", "Required field: AccountId has invalid value");
          return CompleteVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CompleteVaultLock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/lock-policy/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLockId());
      return CompleteVaultLockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVaultOutcome GlacierClient::CreateVault(const CreateVaultRequest& request) const
{
  AWS_OPERATION_GUARD(CreateVault);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVault", "Required field: AccountId, is not set");
    return CreateVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVault", "Required field: VaultName, is not set");
    return CreateVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateVault",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateVaultOutcome>(
    [&]()-> CreateVaultOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("CreateVault", "Required field: AccountId has invalid value");
          return CreateVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      return CreateVaultOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteArchiveOutcome GlacierClient::DeleteArchive(const DeleteArchiveRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteArchive);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteArchive, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteArchive", "Required field: AccountId, is not set");
    return DeleteArchiveOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteArchive", "Required field: VaultName, is not set");
    return DeleteArchiveOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  if (!request.ArchiveIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteArchive", "Required field: ArchiveId, is not set");
    return DeleteArchiveOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ArchiveId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteArchive, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteArchive, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteArchive",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteArchiveOutcome>(
    [&]()-> DeleteArchiveOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("DeleteArchive", "Required field: AccountId has invalid value");
          return DeleteArchiveOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteArchive, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/archives/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArchiveId());
      return DeleteArchiveOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVaultOutcome GlacierClient::DeleteVault(const DeleteVaultRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteVault);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVault", "Required field: AccountId, is not set");
    return DeleteVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVault", "Required field: VaultName, is not set");
    return DeleteVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteVault",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteVaultOutcome>(
    [&]()-> DeleteVaultOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("DeleteVault", "Required field: AccountId has invalid value");
          return DeleteVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      return DeleteVaultOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVaultAccessPolicyOutcome GlacierClient::DeleteVaultAccessPolicy(const DeleteVaultAccessPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteVaultAccessPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVaultAccessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVaultAccessPolicy", "Required field: AccountId, is not set");
    return DeleteVaultAccessPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVaultAccessPolicy", "Required field: VaultName, is not set");
    return DeleteVaultAccessPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteVaultAccessPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteVaultAccessPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteVaultAccessPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteVaultAccessPolicyOutcome>(
    [&]()-> DeleteVaultAccessPolicyOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("DeleteVaultAccessPolicy", "Required field: AccountId has invalid value");
          return DeleteVaultAccessPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVaultAccessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/access-policy");
      return DeleteVaultAccessPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVaultNotificationsOutcome GlacierClient::DeleteVaultNotifications(const DeleteVaultNotificationsRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteVaultNotifications);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVaultNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVaultNotifications", "Required field: AccountId, is not set");
    return DeleteVaultNotificationsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVaultNotifications", "Required field: VaultName, is not set");
    return DeleteVaultNotificationsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteVaultNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteVaultNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteVaultNotifications",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteVaultNotificationsOutcome>(
    [&]()-> DeleteVaultNotificationsOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("DeleteVaultNotifications", "Required field: AccountId has invalid value");
          return DeleteVaultNotificationsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVaultNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configuration");
      return DeleteVaultNotificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeJobOutcome GlacierClient::DescribeJob(const DescribeJobRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: AccountId, is not set");
    return DescribeJobOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: VaultName, is not set");
    return DescribeJobOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: JobId, is not set");
    return DescribeJobOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeJobOutcome>(
    [&]()-> DescribeJobOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: AccountId has invalid value");
          return DescribeJobOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
      return DescribeJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeVaultOutcome GlacierClient::DescribeVault(const DescribeVaultRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeVault);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVault", "Required field: AccountId, is not set");
    return DescribeVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVault", "Required field: VaultName, is not set");
    return DescribeVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeVault",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeVaultOutcome>(
    [&]()-> DescribeVaultOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("DescribeVault", "Required field: AccountId has invalid value");
          return DescribeVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      return DescribeVaultOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDataRetrievalPolicyOutcome GlacierClient::GetDataRetrievalPolicy(const GetDataRetrievalPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(GetDataRetrievalPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDataRetrievalPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataRetrievalPolicy", "Required field: AccountId, is not set");
    return GetDataRetrievalPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetDataRetrievalPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDataRetrievalPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDataRetrievalPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDataRetrievalPolicyOutcome>(
    [&]()-> GetDataRetrievalPolicyOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("GetDataRetrievalPolicy", "Required field: AccountId has invalid value");
          return GetDataRetrievalPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDataRetrievalPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/policies/data-retrieval");
      return GetDataRetrievalPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetJobOutputOutcome GlacierClient::GetJobOutput(const GetJobOutputRequest& request) const
{
  AWS_OPERATION_GUARD(GetJobOutput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetJobOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJobOutput", "Required field: AccountId, is not set");
    return GetJobOutputOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJobOutput", "Required field: VaultName, is not set");
    return GetJobOutputOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJobOutput", "Required field: JobId, is not set");
    return GetJobOutputOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetJobOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetJobOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetJobOutput",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetJobOutputOutcome>(
    [&]()-> GetJobOutputOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("GetJobOutput", "Required field: AccountId has invalid value");
          return GetJobOutputOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetJobOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/output");
      return GetJobOutputOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetVaultAccessPolicyOutcome GlacierClient::GetVaultAccessPolicy(const GetVaultAccessPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(GetVaultAccessPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVaultAccessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVaultAccessPolicy", "Required field: AccountId, is not set");
    return GetVaultAccessPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVaultAccessPolicy", "Required field: VaultName, is not set");
    return GetVaultAccessPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetVaultAccessPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetVaultAccessPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetVaultAccessPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetVaultAccessPolicyOutcome>(
    [&]()-> GetVaultAccessPolicyOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("GetVaultAccessPolicy", "Required field: AccountId has invalid value");
          return GetVaultAccessPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVaultAccessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/access-policy");
      return GetVaultAccessPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetVaultLockOutcome GlacierClient::GetVaultLock(const GetVaultLockRequest& request) const
{
  AWS_OPERATION_GUARD(GetVaultLock);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVaultLock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVaultLock", "Required field: AccountId, is not set");
    return GetVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVaultLock", "Required field: VaultName, is not set");
    return GetVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetVaultLock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetVaultLock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetVaultLock",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetVaultLockOutcome>(
    [&]()-> GetVaultLockOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("GetVaultLock", "Required field: AccountId has invalid value");
          return GetVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVaultLock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/lock-policy");
      return GetVaultLockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetVaultNotificationsOutcome GlacierClient::GetVaultNotifications(const GetVaultNotificationsRequest& request) const
{
  AWS_OPERATION_GUARD(GetVaultNotifications);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVaultNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVaultNotifications", "Required field: AccountId, is not set");
    return GetVaultNotificationsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVaultNotifications", "Required field: VaultName, is not set");
    return GetVaultNotificationsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetVaultNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetVaultNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetVaultNotifications",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetVaultNotificationsOutcome>(
    [&]()-> GetVaultNotificationsOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("GetVaultNotifications", "Required field: AccountId has invalid value");
          return GetVaultNotificationsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVaultNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configuration");
      return GetVaultNotificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

InitiateJobOutcome GlacierClient::InitiateJob(const InitiateJobRequest& request) const
{
  AWS_OPERATION_GUARD(InitiateJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InitiateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InitiateJob", "Required field: AccountId, is not set");
    return InitiateJobOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InitiateJob", "Required field: VaultName, is not set");
    return InitiateJobOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, InitiateJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InitiateJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InitiateJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InitiateJobOutcome>(
    [&]()-> InitiateJobOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("InitiateJob", "Required field: AccountId has invalid value");
          return InitiateJobOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InitiateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
      return InitiateJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

InitiateMultipartUploadOutcome GlacierClient::InitiateMultipartUpload(const InitiateMultipartUploadRequest& request) const
{
  AWS_OPERATION_GUARD(InitiateMultipartUpload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InitiateMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InitiateMultipartUpload", "Required field: AccountId, is not set");
    return InitiateMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InitiateMultipartUpload", "Required field: VaultName, is not set");
    return InitiateMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, InitiateMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InitiateMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InitiateMultipartUpload",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InitiateMultipartUploadOutcome>(
    [&]()-> InitiateMultipartUploadOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("InitiateMultipartUpload", "Required field: AccountId has invalid value");
          return InitiateMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InitiateMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/multipart-uploads");
      return InitiateMultipartUploadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

InitiateVaultLockOutcome GlacierClient::InitiateVaultLock(const InitiateVaultLockRequest& request) const
{
  AWS_OPERATION_GUARD(InitiateVaultLock);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InitiateVaultLock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InitiateVaultLock", "Required field: AccountId, is not set");
    return InitiateVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InitiateVaultLock", "Required field: VaultName, is not set");
    return InitiateVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, InitiateVaultLock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InitiateVaultLock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InitiateVaultLock",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InitiateVaultLockOutcome>(
    [&]()-> InitiateVaultLockOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("InitiateVaultLock", "Required field: AccountId has invalid value");
          return InitiateVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InitiateVaultLock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/lock-policy");
      return InitiateVaultLockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListJobsOutcome GlacierClient::ListJobs(const ListJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobs", "Required field: AccountId, is not set");
    return ListJobsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobs", "Required field: VaultName, is not set");
    return ListJobsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListJobsOutcome>(
    [&]()-> ListJobsOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("ListJobs", "Required field: AccountId has invalid value");
          return ListJobsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
      return ListJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMultipartUploadsOutcome GlacierClient::ListMultipartUploads(const ListMultipartUploadsRequest& request) const
{
  AWS_OPERATION_GUARD(ListMultipartUploads);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMultipartUploads, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMultipartUploads", "Required field: AccountId, is not set");
    return ListMultipartUploadsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMultipartUploads", "Required field: VaultName, is not set");
    return ListMultipartUploadsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListMultipartUploads, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMultipartUploads, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMultipartUploads",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMultipartUploadsOutcome>(
    [&]()-> ListMultipartUploadsOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("ListMultipartUploads", "Required field: AccountId has invalid value");
          return ListMultipartUploadsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMultipartUploads, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/multipart-uploads");
      return ListMultipartUploadsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPartsOutcome GlacierClient::ListParts(const ListPartsRequest& request) const
{
  AWS_OPERATION_GUARD(ListParts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListParts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: AccountId, is not set");
    return ListPartsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: VaultName, is not set");
    return ListPartsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: UploadId, is not set");
    return ListPartsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListParts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListParts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListParts",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPartsOutcome>(
    [&]()-> ListPartsOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("ListParts", "Required field: AccountId has invalid value");
          return ListPartsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListParts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/multipart-uploads/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUploadId());
      return ListPartsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListProvisionedCapacityOutcome GlacierClient::ListProvisionedCapacity(const ListProvisionedCapacityRequest& request) const
{
  AWS_OPERATION_GUARD(ListProvisionedCapacity);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProvisionedCapacity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProvisionedCapacity", "Required field: AccountId, is not set");
    return ListProvisionedCapacityOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListProvisionedCapacity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProvisionedCapacity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProvisionedCapacity",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProvisionedCapacityOutcome>(
    [&]()-> ListProvisionedCapacityOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("ListProvisionedCapacity", "Required field: AccountId has invalid value");
          return ListProvisionedCapacityOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProvisionedCapacity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/provisioned-capacity");
      return ListProvisionedCapacityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForVaultOutcome GlacierClient::ListTagsForVault(const ListTagsForVaultRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForVault);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForVault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForVault", "Required field: AccountId, is not set");
    return ListTagsForVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForVault", "Required field: VaultName, is not set");
    return ListTagsForVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTagsForVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForVault",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForVaultOutcome>(
    [&]()-> ListTagsForVaultOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("ListTagsForVault", "Required field: AccountId has invalid value");
          return ListTagsForVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForVault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
      return ListTagsForVaultOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListVaultsOutcome GlacierClient::ListVaults(const ListVaultsRequest& request) const
{
  AWS_OPERATION_GUARD(ListVaults);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVaults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVaults", "Required field: AccountId, is not set");
    return ListVaultsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListVaults, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListVaults, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListVaults",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListVaultsOutcome>(
    [&]()-> ListVaultsOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("ListVaults", "Required field: AccountId has invalid value");
          return ListVaultsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVaults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults");
      return ListVaultsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PurchaseProvisionedCapacityOutcome GlacierClient::PurchaseProvisionedCapacity(const PurchaseProvisionedCapacityRequest& request) const
{
  AWS_OPERATION_GUARD(PurchaseProvisionedCapacity);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PurchaseProvisionedCapacity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PurchaseProvisionedCapacity", "Required field: AccountId, is not set");
    return PurchaseProvisionedCapacityOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PurchaseProvisionedCapacity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PurchaseProvisionedCapacity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PurchaseProvisionedCapacity",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PurchaseProvisionedCapacityOutcome>(
    [&]()-> PurchaseProvisionedCapacityOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("PurchaseProvisionedCapacity", "Required field: AccountId has invalid value");
          return PurchaseProvisionedCapacityOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PurchaseProvisionedCapacity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/provisioned-capacity");
      return PurchaseProvisionedCapacityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RemoveTagsFromVaultOutcome GlacierClient::RemoveTagsFromVault(const RemoveTagsFromVaultRequest& request) const
{
  AWS_OPERATION_GUARD(RemoveTagsFromVault);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveTagsFromVault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveTagsFromVault", "Required field: AccountId, is not set");
    return RemoveTagsFromVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveTagsFromVault", "Required field: VaultName, is not set");
    return RemoveTagsFromVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RemoveTagsFromVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RemoveTagsFromVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RemoveTagsFromVault",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RemoveTagsFromVaultOutcome>(
    [&]()-> RemoveTagsFromVaultOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("RemoveTagsFromVault", "Required field: AccountId has invalid value");
          return RemoveTagsFromVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveTagsFromVault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
      ss.str("?operation=remove");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      return RemoveTagsFromVaultOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SetDataRetrievalPolicyOutcome GlacierClient::SetDataRetrievalPolicy(const SetDataRetrievalPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(SetDataRetrievalPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetDataRetrievalPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SetDataRetrievalPolicy", "Required field: AccountId, is not set");
    return SetDataRetrievalPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SetDataRetrievalPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SetDataRetrievalPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SetDataRetrievalPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SetDataRetrievalPolicyOutcome>(
    [&]()-> SetDataRetrievalPolicyOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("SetDataRetrievalPolicy", "Required field: AccountId has invalid value");
          return SetDataRetrievalPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetDataRetrievalPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/policies/data-retrieval");
      return SetDataRetrievalPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SetVaultAccessPolicyOutcome GlacierClient::SetVaultAccessPolicy(const SetVaultAccessPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(SetVaultAccessPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetVaultAccessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SetVaultAccessPolicy", "Required field: AccountId, is not set");
    return SetVaultAccessPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SetVaultAccessPolicy", "Required field: VaultName, is not set");
    return SetVaultAccessPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SetVaultAccessPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SetVaultAccessPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SetVaultAccessPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SetVaultAccessPolicyOutcome>(
    [&]()-> SetVaultAccessPolicyOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("SetVaultAccessPolicy", "Required field: AccountId has invalid value");
          return SetVaultAccessPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetVaultAccessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/access-policy");
      return SetVaultAccessPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SetVaultNotificationsOutcome GlacierClient::SetVaultNotifications(const SetVaultNotificationsRequest& request) const
{
  AWS_OPERATION_GUARD(SetVaultNotifications);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetVaultNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SetVaultNotifications", "Required field: AccountId, is not set");
    return SetVaultNotificationsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SetVaultNotifications", "Required field: VaultName, is not set");
    return SetVaultNotificationsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SetVaultNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SetVaultNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SetVaultNotifications",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SetVaultNotificationsOutcome>(
    [&]()-> SetVaultNotificationsOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("SetVaultNotifications", "Required field: AccountId has invalid value");
          return SetVaultNotificationsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetVaultNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configuration");
      return SetVaultNotificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UploadArchiveOutcome GlacierClient::UploadArchive(const UploadArchiveRequest& request) const
{
  AWS_OPERATION_GUARD(UploadArchive);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UploadArchive, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadArchive", "Required field: VaultName, is not set");
    return UploadArchiveOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadArchive", "Required field: AccountId, is not set");
    return UploadArchiveOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UploadArchive, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UploadArchive, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UploadArchive",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UploadArchiveOutcome>(
    [&]()-> UploadArchiveOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("UploadArchive", "Required field: AccountId has invalid value");
          return UploadArchiveOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UploadArchive, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/archives");
      return UploadArchiveOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UploadMultipartPartOutcome GlacierClient::UploadMultipartPart(const UploadMultipartPartRequest& request) const
{
  AWS_OPERATION_GUARD(UploadMultipartPart);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UploadMultipartPart, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadMultipartPart", "Required field: AccountId, is not set");
    return UploadMultipartPartOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadMultipartPart", "Required field: VaultName, is not set");
    return UploadMultipartPartOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadMultipartPart", "Required field: UploadId, is not set");
    return UploadMultipartPartOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UploadMultipartPart, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UploadMultipartPart, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UploadMultipartPart",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UploadMultipartPartOutcome>(
    [&]()-> UploadMultipartPartOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("UploadMultipartPart", "Required field: AccountId has invalid value");
          return UploadMultipartPartOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UploadMultipartPart, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vaults/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVaultName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/multipart-uploads/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUploadId());
      return UploadMultipartPartOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

