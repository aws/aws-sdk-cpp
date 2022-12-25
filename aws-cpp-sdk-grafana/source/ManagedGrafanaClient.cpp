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

#include <aws/grafana/ManagedGrafanaClient.h>
#include <aws/grafana/ManagedGrafanaErrorMarshaller.h>
#include <aws/grafana/ManagedGrafanaEndpointProvider.h>
#include <aws/grafana/model/AssociateLicenseRequest.h>
#include <aws/grafana/model/CreateWorkspaceRequest.h>
#include <aws/grafana/model/CreateWorkspaceApiKeyRequest.h>
#include <aws/grafana/model/DeleteWorkspaceRequest.h>
#include <aws/grafana/model/DeleteWorkspaceApiKeyRequest.h>
#include <aws/grafana/model/DescribeWorkspaceRequest.h>
#include <aws/grafana/model/DescribeWorkspaceAuthenticationRequest.h>
#include <aws/grafana/model/DescribeWorkspaceConfigurationRequest.h>
#include <aws/grafana/model/DisassociateLicenseRequest.h>
#include <aws/grafana/model/ListPermissionsRequest.h>
#include <aws/grafana/model/ListTagsForResourceRequest.h>
#include <aws/grafana/model/ListWorkspacesRequest.h>
#include <aws/grafana/model/TagResourceRequest.h>
#include <aws/grafana/model/UntagResourceRequest.h>
#include <aws/grafana/model/UpdatePermissionsRequest.h>
#include <aws/grafana/model/UpdateWorkspaceRequest.h>
#include <aws/grafana/model/UpdateWorkspaceAuthenticationRequest.h>
#include <aws/grafana/model/UpdateWorkspaceConfigurationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ManagedGrafana;
using namespace Aws::ManagedGrafana::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* ManagedGrafanaClient::SERVICE_NAME = "grafana";
const char* ManagedGrafanaClient::ALLOCATION_TAG = "ManagedGrafanaClient";

ManagedGrafanaClient::ManagedGrafanaClient(const ManagedGrafana::ManagedGrafanaClientConfiguration& clientConfiguration,
                                           std::shared_ptr<ManagedGrafanaEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ManagedGrafanaErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ManagedGrafanaClient::ManagedGrafanaClient(const AWSCredentials& credentials,
                                           std::shared_ptr<ManagedGrafanaEndpointProviderBase> endpointProvider,
                                           const ManagedGrafana::ManagedGrafanaClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ManagedGrafanaErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ManagedGrafanaClient::ManagedGrafanaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<ManagedGrafanaEndpointProviderBase> endpointProvider,
                                           const ManagedGrafana::ManagedGrafanaClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ManagedGrafanaErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ManagedGrafanaClient::ManagedGrafanaClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ManagedGrafanaErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ManagedGrafanaEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ManagedGrafanaClient::ManagedGrafanaClient(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ManagedGrafanaErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ManagedGrafanaEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ManagedGrafanaClient::ManagedGrafanaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ManagedGrafanaErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ManagedGrafanaEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ManagedGrafanaClient::~ManagedGrafanaClient()
{
}

std::shared_ptr<ManagedGrafanaEndpointProviderBase>& ManagedGrafanaClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ManagedGrafanaClient::init(const ManagedGrafana::ManagedGrafanaClientConfiguration& config)
{
  AWSClient::SetServiceClientName("grafana");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ManagedGrafanaClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateLicenseOutcome ManagedGrafanaClient::AssociateLicense(const AssociateLicenseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateLicense, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LicenseTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateLicense", "Required field: LicenseType, is not set");
    return AssociateLicenseOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LicenseType]", false));
  }
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateLicense", "Required field: WorkspaceId, is not set");
    return AssociateLicenseOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateLicense, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/licenses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(LicenseTypeMapper::GetNameForLicenseType(request.GetLicenseType()));
  return AssociateLicenseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateLicenseOutcomeCallable ManagedGrafanaClient::AssociateLicenseCallable(const AssociateLicenseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateLicenseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateLicense(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedGrafanaClient::AssociateLicenseAsync(const AssociateLicenseRequest& request, const AssociateLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateLicense(request), context);
    } );
}

CreateWorkspaceOutcome ManagedGrafanaClient::CreateWorkspace(const CreateWorkspaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces");
  return CreateWorkspaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkspaceOutcomeCallable ManagedGrafanaClient::CreateWorkspaceCallable(const CreateWorkspaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkspaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkspace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedGrafanaClient::CreateWorkspaceAsync(const CreateWorkspaceRequest& request, const CreateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateWorkspace(request), context);
    } );
}

CreateWorkspaceApiKeyOutcome ManagedGrafanaClient::CreateWorkspaceApiKey(const CreateWorkspaceApiKeyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkspaceApiKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateWorkspaceApiKey", "Required field: WorkspaceId, is not set");
    return CreateWorkspaceApiKeyOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkspaceApiKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apikeys");
  return CreateWorkspaceApiKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkspaceApiKeyOutcomeCallable ManagedGrafanaClient::CreateWorkspaceApiKeyCallable(const CreateWorkspaceApiKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkspaceApiKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkspaceApiKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedGrafanaClient::CreateWorkspaceApiKeyAsync(const CreateWorkspaceApiKeyRequest& request, const CreateWorkspaceApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateWorkspaceApiKey(request), context);
    } );
}

DeleteWorkspaceOutcome ManagedGrafanaClient::DeleteWorkspace(const DeleteWorkspaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkspace", "Required field: WorkspaceId, is not set");
    return DeleteWorkspaceOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  return DeleteWorkspaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkspaceOutcomeCallable ManagedGrafanaClient::DeleteWorkspaceCallable(const DeleteWorkspaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkspaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkspace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedGrafanaClient::DeleteWorkspaceAsync(const DeleteWorkspaceRequest& request, const DeleteWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteWorkspace(request), context);
    } );
}

DeleteWorkspaceApiKeyOutcome ManagedGrafanaClient::DeleteWorkspaceApiKey(const DeleteWorkspaceApiKeyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorkspaceApiKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KeyNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkspaceApiKey", "Required field: KeyName, is not set");
    return DeleteWorkspaceApiKeyOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KeyName]", false));
  }
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkspaceApiKey", "Required field: WorkspaceId, is not set");
    return DeleteWorkspaceApiKeyOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorkspaceApiKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apikeys/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKeyName());
  return DeleteWorkspaceApiKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkspaceApiKeyOutcomeCallable ManagedGrafanaClient::DeleteWorkspaceApiKeyCallable(const DeleteWorkspaceApiKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkspaceApiKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkspaceApiKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedGrafanaClient::DeleteWorkspaceApiKeyAsync(const DeleteWorkspaceApiKeyRequest& request, const DeleteWorkspaceApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteWorkspaceApiKey(request), context);
    } );
}

DescribeWorkspaceOutcome ManagedGrafanaClient::DescribeWorkspace(const DescribeWorkspaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeWorkspace", "Required field: WorkspaceId, is not set");
    return DescribeWorkspaceOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  return DescribeWorkspaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkspaceOutcomeCallable ManagedGrafanaClient::DescribeWorkspaceCallable(const DescribeWorkspaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkspaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkspace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedGrafanaClient::DescribeWorkspaceAsync(const DescribeWorkspaceRequest& request, const DescribeWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeWorkspace(request), context);
    } );
}

DescribeWorkspaceAuthenticationOutcome ManagedGrafanaClient::DescribeWorkspaceAuthentication(const DescribeWorkspaceAuthenticationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWorkspaceAuthentication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeWorkspaceAuthentication", "Required field: WorkspaceId, is not set");
    return DescribeWorkspaceAuthenticationOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWorkspaceAuthentication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/authentication");
  return DescribeWorkspaceAuthenticationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkspaceAuthenticationOutcomeCallable ManagedGrafanaClient::DescribeWorkspaceAuthenticationCallable(const DescribeWorkspaceAuthenticationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkspaceAuthenticationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkspaceAuthentication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedGrafanaClient::DescribeWorkspaceAuthenticationAsync(const DescribeWorkspaceAuthenticationRequest& request, const DescribeWorkspaceAuthenticationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeWorkspaceAuthentication(request), context);
    } );
}

DescribeWorkspaceConfigurationOutcome ManagedGrafanaClient::DescribeWorkspaceConfiguration(const DescribeWorkspaceConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWorkspaceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeWorkspaceConfiguration", "Required field: WorkspaceId, is not set");
    return DescribeWorkspaceConfigurationOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWorkspaceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  return DescribeWorkspaceConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkspaceConfigurationOutcomeCallable ManagedGrafanaClient::DescribeWorkspaceConfigurationCallable(const DescribeWorkspaceConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkspaceConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkspaceConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedGrafanaClient::DescribeWorkspaceConfigurationAsync(const DescribeWorkspaceConfigurationRequest& request, const DescribeWorkspaceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeWorkspaceConfiguration(request), context);
    } );
}

DisassociateLicenseOutcome ManagedGrafanaClient::DisassociateLicense(const DisassociateLicenseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateLicense, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LicenseTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateLicense", "Required field: LicenseType, is not set");
    return DisassociateLicenseOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LicenseType]", false));
  }
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateLicense", "Required field: WorkspaceId, is not set");
    return DisassociateLicenseOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateLicense, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/licenses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(LicenseTypeMapper::GetNameForLicenseType(request.GetLicenseType()));
  return DisassociateLicenseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateLicenseOutcomeCallable ManagedGrafanaClient::DisassociateLicenseCallable(const DisassociateLicenseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateLicenseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateLicense(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedGrafanaClient::DisassociateLicenseAsync(const DisassociateLicenseRequest& request, const DisassociateLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateLicense(request), context);
    } );
}

ListPermissionsOutcome ManagedGrafanaClient::ListPermissions(const ListPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPermissions", "Required field: WorkspaceId, is not set");
    return ListPermissionsOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return ListPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPermissionsOutcomeCallable ManagedGrafanaClient::ListPermissionsCallable(const ListPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedGrafanaClient::ListPermissionsAsync(const ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPermissions(request), context);
    } );
}

ListTagsForResourceOutcome ManagedGrafanaClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ManagedGrafanaClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedGrafanaClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListWorkspacesOutcome ManagedGrafanaClient::ListWorkspaces(const ListWorkspacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces");
  return ListWorkspacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListWorkspacesOutcomeCallable ManagedGrafanaClient::ListWorkspacesCallable(const ListWorkspacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkspacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkspaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedGrafanaClient::ListWorkspacesAsync(const ListWorkspacesRequest& request, const ListWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListWorkspaces(request), context);
    } );
}

TagResourceOutcome ManagedGrafanaClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ManagedGrafanaClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedGrafanaClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome ManagedGrafanaClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ManagedGrafanaClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedGrafanaClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdatePermissionsOutcome ManagedGrafanaClient::UpdatePermissions(const UpdatePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePermissions", "Required field: WorkspaceId, is not set");
    return UpdatePermissionsOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return UpdatePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdatePermissionsOutcomeCallable ManagedGrafanaClient::UpdatePermissionsCallable(const UpdatePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedGrafanaClient::UpdatePermissionsAsync(const UpdatePermissionsRequest& request, const UpdatePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdatePermissions(request), context);
    } );
}

UpdateWorkspaceOutcome ManagedGrafanaClient::UpdateWorkspace(const UpdateWorkspaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkspace", "Required field: WorkspaceId, is not set");
    return UpdateWorkspaceOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  return UpdateWorkspaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkspaceOutcomeCallable ManagedGrafanaClient::UpdateWorkspaceCallable(const UpdateWorkspaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkspaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkspace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedGrafanaClient::UpdateWorkspaceAsync(const UpdateWorkspaceRequest& request, const UpdateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateWorkspace(request), context);
    } );
}

UpdateWorkspaceAuthenticationOutcome ManagedGrafanaClient::UpdateWorkspaceAuthentication(const UpdateWorkspaceAuthenticationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorkspaceAuthentication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkspaceAuthentication", "Required field: WorkspaceId, is not set");
    return UpdateWorkspaceAuthenticationOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorkspaceAuthentication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/authentication");
  return UpdateWorkspaceAuthenticationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkspaceAuthenticationOutcomeCallable ManagedGrafanaClient::UpdateWorkspaceAuthenticationCallable(const UpdateWorkspaceAuthenticationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkspaceAuthenticationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkspaceAuthentication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedGrafanaClient::UpdateWorkspaceAuthenticationAsync(const UpdateWorkspaceAuthenticationRequest& request, const UpdateWorkspaceAuthenticationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateWorkspaceAuthentication(request), context);
    } );
}

UpdateWorkspaceConfigurationOutcome ManagedGrafanaClient::UpdateWorkspaceConfiguration(const UpdateWorkspaceConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorkspaceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkspaceConfiguration", "Required field: WorkspaceId, is not set");
    return UpdateWorkspaceConfigurationOutcome(Aws::Client::AWSError<ManagedGrafanaErrors>(ManagedGrafanaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorkspaceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  return UpdateWorkspaceConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkspaceConfigurationOutcomeCallable ManagedGrafanaClient::UpdateWorkspaceConfigurationCallable(const UpdateWorkspaceConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkspaceConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkspaceConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedGrafanaClient::UpdateWorkspaceConfigurationAsync(const UpdateWorkspaceConfigurationRequest& request, const UpdateWorkspaceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateWorkspaceConfiguration(request), context);
    } );
}

