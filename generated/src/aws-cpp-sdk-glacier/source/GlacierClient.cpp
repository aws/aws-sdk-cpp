/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
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

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

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
    const char ALLOCATION_TAG[] = "GlacierClient";
    const char SERVICE_NAME[] = "glacier";
  }
}
const char* GlacierClient::GetServiceName() {return SERVICE_NAME;}
const char* GlacierClient::GetAllocationTag() {return ALLOCATION_TAG;}

GlacierClient::GlacierClient(const Glacier::GlacierClientConfiguration& clientConfiguration,
                           std::shared_ptr<GlacierEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<GlacierEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region, true}},
        })
{
  init(m_clientConfiguration);
}

GlacierClient::GlacierClient(const AWSCredentials& credentials,
                           std::shared_ptr<GlacierEndpointProviderBase> endpointProvider,
                           const Glacier::GlacierClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<GlacierEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region , true}},
        })
{
  init(m_clientConfiguration);
}

GlacierClient::GlacierClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<GlacierEndpointProviderBase> endpointProvider,
                           const Glacier::GlacierClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<GlacierEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region , true}}
        })
{
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
GlacierClient::GlacierClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<GlacierEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region , true}}
      })
{
  init(m_clientConfiguration);
}

GlacierClient::GlacierClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<GlacierEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region , true}}
        })
{
  init(m_clientConfiguration);
}

GlacierClient::GlacierClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<GlacierEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region , true}}
        })
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
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AbortMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AbortMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AbortMultipartUpload",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AbortMultipartUploadOutcome>(
    [&]()-> AbortMultipartUploadOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/multipart-uploads/");
      endpointOverrides.AddPathSegment(request.GetUploadId());
      return AbortMultipartUploadOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AbortVaultLock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AbortVaultLock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AbortVaultLock",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AbortVaultLockOutcome>(
    [&]()-> AbortVaultLockOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/lock-policy");
      return AbortVaultLockOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AddTagsToVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AddTagsToVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AddTagsToVault",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AddTagsToVaultOutcome>(
    [&]()-> AddTagsToVaultOutcome {
      Aws::StringStream ss;
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/tags");
      ss.str("?operation=add");
      endpointOverrides.queryString = ss.str();
      return AddTagsToVaultOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CompleteMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CompleteMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CompleteMultipartUpload",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CompleteMultipartUploadOutcome>(
    [&]()-> CompleteMultipartUploadOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/multipart-uploads/");
      endpointOverrides.AddPathSegment(request.GetUploadId());
      return CompleteMultipartUploadOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CompleteVaultLock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CompleteVaultLock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CompleteVaultLock",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CompleteVaultLockOutcome>(
    [&]()-> CompleteVaultLockOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/lock-policy/");
      endpointOverrides.AddPathSegment(request.GetLockId());
      return CompleteVaultLockOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateVault",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateVaultOutcome>(
    [&]()-> CreateVaultOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      return CreateVaultOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteArchive, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteArchive, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteArchive",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteArchiveOutcome>(
    [&]()-> DeleteArchiveOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/archives/");
      endpointOverrides.AddPathSegment(request.GetArchiveId());
      return DeleteArchiveOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteVault",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteVaultOutcome>(
    [&]()-> DeleteVaultOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      return DeleteVaultOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteVaultAccessPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteVaultAccessPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteVaultAccessPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteVaultAccessPolicyOutcome>(
    [&]()-> DeleteVaultAccessPolicyOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/access-policy");
      return DeleteVaultAccessPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteVaultNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteVaultNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteVaultNotifications",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteVaultNotificationsOutcome>(
    [&]()-> DeleteVaultNotificationsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/notification-configuration");
      return DeleteVaultNotificationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeJobOutcome>(
    [&]()-> DescribeJobOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/jobs/");
      endpointOverrides.AddPathSegment(request.GetJobId());
      return DescribeJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeVault",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeVaultOutcome>(
    [&]()-> DescribeVaultOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      return DescribeVaultOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDataRetrievalPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDataRetrievalPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDataRetrievalPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDataRetrievalPolicyOutcome>(
    [&]()-> GetDataRetrievalPolicyOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/policies/data-retrieval");
      return GetDataRetrievalPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetJobOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetJobOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetJobOutput",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetJobOutputOutcome>(
    [&]()-> GetJobOutputOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/jobs/");
      endpointOverrides.AddPathSegment(request.GetJobId());
      endpointOverrides.AddPathSegment("/output");
      return GetJobOutputOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetVaultAccessPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetVaultAccessPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetVaultAccessPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetVaultAccessPolicyOutcome>(
    [&]()-> GetVaultAccessPolicyOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/access-policy");
      return GetVaultAccessPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetVaultLock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetVaultLock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetVaultLock",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetVaultLockOutcome>(
    [&]()-> GetVaultLockOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/lock-policy");
      return GetVaultLockOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetVaultNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetVaultNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetVaultNotifications",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetVaultNotificationsOutcome>(
    [&]()-> GetVaultNotificationsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/notification-configuration");
      return GetVaultNotificationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, InitiateJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InitiateJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InitiateJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InitiateJobOutcome>(
    [&]()-> InitiateJobOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/jobs");
      return InitiateJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, InitiateMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InitiateMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InitiateMultipartUpload",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InitiateMultipartUploadOutcome>(
    [&]()-> InitiateMultipartUploadOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/multipart-uploads");
      return InitiateMultipartUploadOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, InitiateVaultLock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InitiateVaultLock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InitiateVaultLock",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InitiateVaultLockOutcome>(
    [&]()-> InitiateVaultLockOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/lock-policy");
      return InitiateVaultLockOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListJobsOutcome>(
    [&]()-> ListJobsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/jobs");
      return ListJobsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMultipartUploads, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMultipartUploads, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMultipartUploads",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMultipartUploadsOutcome>(
    [&]()-> ListMultipartUploadsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/multipart-uploads");
      return ListMultipartUploadsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListParts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListParts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListParts",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPartsOutcome>(
    [&]()-> ListPartsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/multipart-uploads/");
      endpointOverrides.AddPathSegment(request.GetUploadId());
      return ListPartsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListProvisionedCapacity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProvisionedCapacity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProvisionedCapacity",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProvisionedCapacityOutcome>(
    [&]()-> ListProvisionedCapacityOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/provisioned-capacity");
      return ListProvisionedCapacityOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTagsForVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForVault",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForVaultOutcome>(
    [&]()-> ListTagsForVaultOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/tags");
      return ListTagsForVaultOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListVaults, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListVaults, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListVaults",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListVaultsOutcome>(
    [&]()-> ListVaultsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults");
      return ListVaultsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PurchaseProvisionedCapacity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PurchaseProvisionedCapacity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PurchaseProvisionedCapacity",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PurchaseProvisionedCapacityOutcome>(
    [&]()-> PurchaseProvisionedCapacityOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/provisioned-capacity");
      return PurchaseProvisionedCapacityOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RemoveTagsFromVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RemoveTagsFromVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RemoveTagsFromVault",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RemoveTagsFromVaultOutcome>(
    [&]()-> RemoveTagsFromVaultOutcome {
      Aws::StringStream ss;
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/tags");
      ss.str("?operation=remove");
      endpointOverrides.queryString = ss.str();
      return RemoveTagsFromVaultOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, SetDataRetrievalPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SetDataRetrievalPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SetDataRetrievalPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SetDataRetrievalPolicyOutcome>(
    [&]()-> SetDataRetrievalPolicyOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/policies/data-retrieval");
      return SetDataRetrievalPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, SetVaultAccessPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SetVaultAccessPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SetVaultAccessPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SetVaultAccessPolicyOutcome>(
    [&]()-> SetVaultAccessPolicyOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/access-policy");
      return SetVaultAccessPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, SetVaultNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SetVaultNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SetVaultNotifications",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SetVaultNotificationsOutcome>(
    [&]()-> SetVaultNotificationsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/notification-configuration");
      return SetVaultNotificationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UploadArchive, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UploadArchive, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UploadArchive",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UploadArchiveOutcome>(
    [&]()-> UploadArchiveOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/archives");
      return UploadArchiveOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UploadMultipartPart, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UploadMultipartPart, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UploadMultipartPart",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UploadMultipartPartOutcome>(
    [&]()-> UploadMultipartPartOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment(request.GetAccountId());
      endpointOverrides.AddPathSegment("/vaults/");
      endpointOverrides.AddPathSegment(request.GetVaultName());
      endpointOverrides.AddPathSegment("/multipart-uploads/");
      endpointOverrides.AddPathSegment(request.GetUploadId());
      return UploadMultipartPartOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


