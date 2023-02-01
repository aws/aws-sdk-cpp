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

#include <aws/amplifybackend/AmplifyBackendClient.h>
#include <aws/amplifybackend/AmplifyBackendErrorMarshaller.h>
#include <aws/amplifybackend/AmplifyBackendEndpointProvider.h>
#include <aws/amplifybackend/model/CloneBackendRequest.h>
#include <aws/amplifybackend/model/CreateBackendRequest.h>
#include <aws/amplifybackend/model/CreateBackendAPIRequest.h>
#include <aws/amplifybackend/model/CreateBackendAuthRequest.h>
#include <aws/amplifybackend/model/CreateBackendConfigRequest.h>
#include <aws/amplifybackend/model/CreateBackendStorageRequest.h>
#include <aws/amplifybackend/model/CreateTokenRequest.h>
#include <aws/amplifybackend/model/DeleteBackendRequest.h>
#include <aws/amplifybackend/model/DeleteBackendAPIRequest.h>
#include <aws/amplifybackend/model/DeleteBackendAuthRequest.h>
#include <aws/amplifybackend/model/DeleteBackendStorageRequest.h>
#include <aws/amplifybackend/model/DeleteTokenRequest.h>
#include <aws/amplifybackend/model/GenerateBackendAPIModelsRequest.h>
#include <aws/amplifybackend/model/GetBackendRequest.h>
#include <aws/amplifybackend/model/GetBackendAPIRequest.h>
#include <aws/amplifybackend/model/GetBackendAPIModelsRequest.h>
#include <aws/amplifybackend/model/GetBackendAuthRequest.h>
#include <aws/amplifybackend/model/GetBackendJobRequest.h>
#include <aws/amplifybackend/model/GetBackendStorageRequest.h>
#include <aws/amplifybackend/model/GetTokenRequest.h>
#include <aws/amplifybackend/model/ImportBackendAuthRequest.h>
#include <aws/amplifybackend/model/ImportBackendStorageRequest.h>
#include <aws/amplifybackend/model/ListBackendJobsRequest.h>
#include <aws/amplifybackend/model/ListS3BucketsRequest.h>
#include <aws/amplifybackend/model/RemoveAllBackendsRequest.h>
#include <aws/amplifybackend/model/RemoveBackendConfigRequest.h>
#include <aws/amplifybackend/model/UpdateBackendAPIRequest.h>
#include <aws/amplifybackend/model/UpdateBackendAuthRequest.h>
#include <aws/amplifybackend/model/UpdateBackendConfigRequest.h>
#include <aws/amplifybackend/model/UpdateBackendJobRequest.h>
#include <aws/amplifybackend/model/UpdateBackendStorageRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AmplifyBackend;
using namespace Aws::AmplifyBackend::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* AmplifyBackendClient::SERVICE_NAME = "amplifybackend";
const char* AmplifyBackendClient::ALLOCATION_TAG = "AmplifyBackendClient";

AmplifyBackendClient::AmplifyBackendClient(const AmplifyBackend::AmplifyBackendClientConfiguration& clientConfiguration,
                                           std::shared_ptr<AmplifyBackendEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AmplifyBackendErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AmplifyBackendClient::AmplifyBackendClient(const AWSCredentials& credentials,
                                           std::shared_ptr<AmplifyBackendEndpointProviderBase> endpointProvider,
                                           const AmplifyBackend::AmplifyBackendClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AmplifyBackendErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AmplifyBackendClient::AmplifyBackendClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<AmplifyBackendEndpointProviderBase> endpointProvider,
                                           const AmplifyBackend::AmplifyBackendClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AmplifyBackendErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  AmplifyBackendClient::AmplifyBackendClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AmplifyBackendErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<AmplifyBackendEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AmplifyBackendClient::AmplifyBackendClient(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AmplifyBackendErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AmplifyBackendEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AmplifyBackendClient::AmplifyBackendClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AmplifyBackendErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AmplifyBackendEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
AmplifyBackendClient::~AmplifyBackendClient()
{
}

std::shared_ptr<AmplifyBackendEndpointProviderBase>& AmplifyBackendClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void AmplifyBackendClient::init(const AmplifyBackend::AmplifyBackendClientConfiguration& config)
{
  AWSClient::SetServiceClientName("AmplifyBackend");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void AmplifyBackendClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CloneBackendOutcome AmplifyBackendClient::CloneBackend(const CloneBackendRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CloneBackend, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CloneBackend", "Required field: AppId, is not set");
    return CloneBackendOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CloneBackend", "Required field: BackendEnvironmentName, is not set");
    return CloneBackendOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CloneBackend, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/clone");
  return CloneBackendOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBackendOutcome AmplifyBackendClient::CreateBackend(const CreateBackendRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBackend, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBackend, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend");
  return CreateBackendOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBackendAPIOutcome AmplifyBackendClient::CreateBackendAPI(const CreateBackendAPIRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBackendAPI, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBackendAPI", "Required field: AppId, is not set");
    return CreateBackendAPIOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBackendAPI, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api");
  return CreateBackendAPIOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBackendAuthOutcome AmplifyBackendClient::CreateBackendAuth(const CreateBackendAuthRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBackendAuth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBackendAuth", "Required field: AppId, is not set");
    return CreateBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBackendAuth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/auth");
  return CreateBackendAuthOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBackendConfigOutcome AmplifyBackendClient::CreateBackendConfig(const CreateBackendConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBackendConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBackendConfig", "Required field: AppId, is not set");
    return CreateBackendConfigOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBackendConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return CreateBackendConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBackendStorageOutcome AmplifyBackendClient::CreateBackendStorage(const CreateBackendStorageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBackendStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBackendStorage", "Required field: AppId, is not set");
    return CreateBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBackendStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/storage");
  return CreateBackendStorageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTokenOutcome AmplifyBackendClient::CreateToken(const CreateTokenRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateToken", "Required field: AppId, is not set");
    return CreateTokenOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/challenge");
  return CreateTokenOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBackendOutcome AmplifyBackendClient::DeleteBackend(const DeleteBackendRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBackend, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackend", "Required field: AppId, is not set");
    return DeleteBackendOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackend", "Required field: BackendEnvironmentName, is not set");
    return DeleteBackendOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBackend, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/remove");
  return DeleteBackendOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBackendAPIOutcome AmplifyBackendClient::DeleteBackendAPI(const DeleteBackendAPIRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBackendAPI, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackendAPI", "Required field: AppId, is not set");
    return DeleteBackendAPIOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackendAPI", "Required field: BackendEnvironmentName, is not set");
    return DeleteBackendAPIOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBackendAPI, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/remove");
  return DeleteBackendAPIOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBackendAuthOutcome AmplifyBackendClient::DeleteBackendAuth(const DeleteBackendAuthRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBackendAuth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackendAuth", "Required field: AppId, is not set");
    return DeleteBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackendAuth", "Required field: BackendEnvironmentName, is not set");
    return DeleteBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBackendAuth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/auth/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/remove");
  return DeleteBackendAuthOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBackendStorageOutcome AmplifyBackendClient::DeleteBackendStorage(const DeleteBackendStorageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBackendStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackendStorage", "Required field: AppId, is not set");
    return DeleteBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackendStorage", "Required field: BackendEnvironmentName, is not set");
    return DeleteBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBackendStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/storage/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/remove");
  return DeleteBackendStorageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTokenOutcome AmplifyBackendClient::DeleteToken(const DeleteTokenRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteToken", "Required field: AppId, is not set");
    return DeleteTokenOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteToken", "Required field: SessionId, is not set");
    return DeleteTokenOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/challenge/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/remove");
  return DeleteTokenOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateBackendAPIModelsOutcome AmplifyBackendClient::GenerateBackendAPIModels(const GenerateBackendAPIModelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateBackendAPIModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GenerateBackendAPIModels", "Required field: AppId, is not set");
    return GenerateBackendAPIModelsOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GenerateBackendAPIModels", "Required field: BackendEnvironmentName, is not set");
    return GenerateBackendAPIModelsOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateBackendAPIModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/generateModels");
  return GenerateBackendAPIModelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBackendOutcome AmplifyBackendClient::GetBackend(const GetBackendRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBackend, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackend", "Required field: AppId, is not set");
    return GetBackendOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBackend, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/details");
  return GetBackendOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBackendAPIOutcome AmplifyBackendClient::GetBackendAPI(const GetBackendAPIRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBackendAPI, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendAPI", "Required field: AppId, is not set");
    return GetBackendAPIOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendAPI", "Required field: BackendEnvironmentName, is not set");
    return GetBackendAPIOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBackendAPI, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/details");
  return GetBackendAPIOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBackendAPIModelsOutcome AmplifyBackendClient::GetBackendAPIModels(const GetBackendAPIModelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBackendAPIModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendAPIModels", "Required field: AppId, is not set");
    return GetBackendAPIModelsOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendAPIModels", "Required field: BackendEnvironmentName, is not set");
    return GetBackendAPIModelsOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBackendAPIModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/getModels");
  return GetBackendAPIModelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBackendAuthOutcome AmplifyBackendClient::GetBackendAuth(const GetBackendAuthRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBackendAuth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendAuth", "Required field: AppId, is not set");
    return GetBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendAuth", "Required field: BackendEnvironmentName, is not set");
    return GetBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBackendAuth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/auth/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/details");
  return GetBackendAuthOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBackendJobOutcome AmplifyBackendClient::GetBackendJob(const GetBackendJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBackendJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendJob", "Required field: AppId, is not set");
    return GetBackendJobOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendJob", "Required field: BackendEnvironmentName, is not set");
    return GetBackendJobOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendJob", "Required field: JobId, is not set");
    return GetBackendJobOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBackendJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/job/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  return GetBackendJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBackendStorageOutcome AmplifyBackendClient::GetBackendStorage(const GetBackendStorageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBackendStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendStorage", "Required field: AppId, is not set");
    return GetBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendStorage", "Required field: BackendEnvironmentName, is not set");
    return GetBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBackendStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/storage/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/details");
  return GetBackendStorageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTokenOutcome AmplifyBackendClient::GetToken(const GetTokenRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetToken", "Required field: AppId, is not set");
    return GetTokenOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetToken", "Required field: SessionId, is not set");
    return GetTokenOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/challenge/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  return GetTokenOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ImportBackendAuthOutcome AmplifyBackendClient::ImportBackendAuth(const ImportBackendAuthRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportBackendAuth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ImportBackendAuth", "Required field: AppId, is not set");
    return ImportBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ImportBackendAuth", "Required field: BackendEnvironmentName, is not set");
    return ImportBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportBackendAuth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/auth/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/import");
  return ImportBackendAuthOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportBackendStorageOutcome AmplifyBackendClient::ImportBackendStorage(const ImportBackendStorageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportBackendStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ImportBackendStorage", "Required field: AppId, is not set");
    return ImportBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ImportBackendStorage", "Required field: BackendEnvironmentName, is not set");
    return ImportBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportBackendStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/storage/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/import");
  return ImportBackendStorageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBackendJobsOutcome AmplifyBackendClient::ListBackendJobs(const ListBackendJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBackendJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBackendJobs", "Required field: AppId, is not set");
    return ListBackendJobsOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBackendJobs", "Required field: BackendEnvironmentName, is not set");
    return ListBackendJobsOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBackendJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/job/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
  return ListBackendJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListS3BucketsOutcome AmplifyBackendClient::ListS3Buckets(const ListS3BucketsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListS3Buckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListS3Buckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/s3Buckets");
  return ListS3BucketsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveAllBackendsOutcome AmplifyBackendClient::RemoveAllBackends(const RemoveAllBackendsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveAllBackends, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveAllBackends", "Required field: AppId, is not set");
    return RemoveAllBackendsOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveAllBackends, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/remove");
  return RemoveAllBackendsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveBackendConfigOutcome AmplifyBackendClient::RemoveBackendConfig(const RemoveBackendConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveBackendConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveBackendConfig", "Required field: AppId, is not set");
    return RemoveBackendConfigOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveBackendConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config/remove");
  return RemoveBackendConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBackendAPIOutcome AmplifyBackendClient::UpdateBackendAPI(const UpdateBackendAPIRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBackendAPI, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBackendAPI", "Required field: AppId, is not set");
    return UpdateBackendAPIOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBackendAPI", "Required field: BackendEnvironmentName, is not set");
    return UpdateBackendAPIOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBackendAPI, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
  return UpdateBackendAPIOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBackendAuthOutcome AmplifyBackendClient::UpdateBackendAuth(const UpdateBackendAuthRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBackendAuth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBackendAuth", "Required field: AppId, is not set");
    return UpdateBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBackendAuth", "Required field: BackendEnvironmentName, is not set");
    return UpdateBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBackendAuth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/auth/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
  return UpdateBackendAuthOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBackendConfigOutcome AmplifyBackendClient::UpdateBackendConfig(const UpdateBackendConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBackendConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBackendConfig", "Required field: AppId, is not set");
    return UpdateBackendConfigOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBackendConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config/update");
  return UpdateBackendConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBackendJobOutcome AmplifyBackendClient::UpdateBackendJob(const UpdateBackendJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBackendJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBackendJob", "Required field: AppId, is not set");
    return UpdateBackendJobOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBackendJob", "Required field: BackendEnvironmentName, is not set");
    return UpdateBackendJobOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBackendJob", "Required field: JobId, is not set");
    return UpdateBackendJobOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBackendJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/job/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  return UpdateBackendJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBackendStorageOutcome AmplifyBackendClient::UpdateBackendStorage(const UpdateBackendStorageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBackendStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBackendStorage", "Required field: AppId, is not set");
    return UpdateBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBackendStorage", "Required field: BackendEnvironmentName, is not set");
    return UpdateBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBackendStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backend/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/storage/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackendEnvironmentName());
  return UpdateBackendStorageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

