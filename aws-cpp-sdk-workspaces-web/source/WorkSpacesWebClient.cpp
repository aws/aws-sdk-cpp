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

#include <aws/workspaces-web/WorkSpacesWebClient.h>
#include <aws/workspaces-web/WorkSpacesWebErrorMarshaller.h>
#include <aws/workspaces-web/WorkSpacesWebEndpointProvider.h>
#include <aws/workspaces-web/model/AssociateBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/AssociateNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/AssociateTrustStoreRequest.h>
#include <aws/workspaces-web/model/AssociateUserAccessLoggingSettingsRequest.h>
#include <aws/workspaces-web/model/AssociateUserSettingsRequest.h>
#include <aws/workspaces-web/model/CreateBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/CreateIdentityProviderRequest.h>
#include <aws/workspaces-web/model/CreateNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/CreatePortalRequest.h>
#include <aws/workspaces-web/model/CreateTrustStoreRequest.h>
#include <aws/workspaces-web/model/CreateUserAccessLoggingSettingsRequest.h>
#include <aws/workspaces-web/model/CreateUserSettingsRequest.h>
#include <aws/workspaces-web/model/DeleteBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/DeleteIdentityProviderRequest.h>
#include <aws/workspaces-web/model/DeleteNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/DeletePortalRequest.h>
#include <aws/workspaces-web/model/DeleteTrustStoreRequest.h>
#include <aws/workspaces-web/model/DeleteUserAccessLoggingSettingsRequest.h>
#include <aws/workspaces-web/model/DeleteUserSettingsRequest.h>
#include <aws/workspaces-web/model/DisassociateBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/DisassociateNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/DisassociateTrustStoreRequest.h>
#include <aws/workspaces-web/model/DisassociateUserAccessLoggingSettingsRequest.h>
#include <aws/workspaces-web/model/DisassociateUserSettingsRequest.h>
#include <aws/workspaces-web/model/GetBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/GetIdentityProviderRequest.h>
#include <aws/workspaces-web/model/GetNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/GetPortalRequest.h>
#include <aws/workspaces-web/model/GetPortalServiceProviderMetadataRequest.h>
#include <aws/workspaces-web/model/GetTrustStoreRequest.h>
#include <aws/workspaces-web/model/GetTrustStoreCertificateRequest.h>
#include <aws/workspaces-web/model/GetUserAccessLoggingSettingsRequest.h>
#include <aws/workspaces-web/model/GetUserSettingsRequest.h>
#include <aws/workspaces-web/model/ListBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/ListIdentityProvidersRequest.h>
#include <aws/workspaces-web/model/ListNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/ListPortalsRequest.h>
#include <aws/workspaces-web/model/ListTagsForResourceRequest.h>
#include <aws/workspaces-web/model/ListTrustStoreCertificatesRequest.h>
#include <aws/workspaces-web/model/ListTrustStoresRequest.h>
#include <aws/workspaces-web/model/ListUserAccessLoggingSettingsRequest.h>
#include <aws/workspaces-web/model/ListUserSettingsRequest.h>
#include <aws/workspaces-web/model/TagResourceRequest.h>
#include <aws/workspaces-web/model/UntagResourceRequest.h>
#include <aws/workspaces-web/model/UpdateBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/UpdateIdentityProviderRequest.h>
#include <aws/workspaces-web/model/UpdateNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/UpdatePortalRequest.h>
#include <aws/workspaces-web/model/UpdateTrustStoreRequest.h>
#include <aws/workspaces-web/model/UpdateUserAccessLoggingSettingsRequest.h>
#include <aws/workspaces-web/model/UpdateUserSettingsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WorkSpacesWeb;
using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* WorkSpacesWebClient::SERVICE_NAME = "workspaces-web";
const char* WorkSpacesWebClient::ALLOCATION_TAG = "WorkSpacesWebClient";

WorkSpacesWebClient::WorkSpacesWebClient(const WorkSpacesWeb::WorkSpacesWebClientConfiguration& clientConfiguration,
                                         std::shared_ptr<WorkSpacesWebEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesWebErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

WorkSpacesWebClient::WorkSpacesWebClient(const AWSCredentials& credentials,
                                         std::shared_ptr<WorkSpacesWebEndpointProviderBase> endpointProvider,
                                         const WorkSpacesWeb::WorkSpacesWebClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesWebErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

WorkSpacesWebClient::WorkSpacesWebClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<WorkSpacesWebEndpointProviderBase> endpointProvider,
                                         const WorkSpacesWeb::WorkSpacesWebClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesWebErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  WorkSpacesWebClient::WorkSpacesWebClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesWebErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<WorkSpacesWebEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

WorkSpacesWebClient::WorkSpacesWebClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesWebErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<WorkSpacesWebEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

WorkSpacesWebClient::WorkSpacesWebClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesWebErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<WorkSpacesWebEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
WorkSpacesWebClient::~WorkSpacesWebClient()
{
}

std::shared_ptr<WorkSpacesWebEndpointProviderBase>& WorkSpacesWebClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void WorkSpacesWebClient::init(const WorkSpacesWeb::WorkSpacesWebClientConfiguration& config)
{
  AWSClient::SetServiceClientName("WorkSpaces Web");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void WorkSpacesWebClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateBrowserSettingsOutcome WorkSpacesWebClient::AssociateBrowserSettings(const AssociateBrowserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BrowserSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateBrowserSettings", "Required field: BrowserSettingsArn, is not set");
    return AssociateBrowserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrowserSettingsArn]", false));
  }
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateBrowserSettings", "Required field: PortalArn, is not set");
    return AssociateBrowserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/browserSettings");
  return AssociateBrowserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateBrowserSettingsOutcomeCallable WorkSpacesWebClient::AssociateBrowserSettingsCallable(const AssociateBrowserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateBrowserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateBrowserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::AssociateBrowserSettingsAsync(const AssociateBrowserSettingsRequest& request, const AssociateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateBrowserSettings(request), context);
    } );
}

AssociateNetworkSettingsOutcome WorkSpacesWebClient::AssociateNetworkSettings(const AssociateNetworkSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateNetworkSettings", "Required field: NetworkSettingsArn, is not set");
    return AssociateNetworkSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkSettingsArn]", false));
  }
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateNetworkSettings", "Required field: PortalArn, is not set");
    return AssociateNetworkSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/networkSettings");
  return AssociateNetworkSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateNetworkSettingsOutcomeCallable WorkSpacesWebClient::AssociateNetworkSettingsCallable(const AssociateNetworkSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateNetworkSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateNetworkSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::AssociateNetworkSettingsAsync(const AssociateNetworkSettingsRequest& request, const AssociateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateNetworkSettings(request), context);
    } );
}

AssociateTrustStoreOutcome WorkSpacesWebClient::AssociateTrustStore(const AssociateTrustStoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateTrustStore", "Required field: PortalArn, is not set");
    return AssociateTrustStoreOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  if (!request.TrustStoreArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateTrustStore", "Required field: TrustStoreArn, is not set");
    return AssociateTrustStoreOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustStoreArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores");
  return AssociateTrustStoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateTrustStoreOutcomeCallable WorkSpacesWebClient::AssociateTrustStoreCallable(const AssociateTrustStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateTrustStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateTrustStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::AssociateTrustStoreAsync(const AssociateTrustStoreRequest& request, const AssociateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateTrustStore(request), context);
    } );
}

AssociateUserAccessLoggingSettingsOutcome WorkSpacesWebClient::AssociateUserAccessLoggingSettings(const AssociateUserAccessLoggingSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateUserAccessLoggingSettings", "Required field: PortalArn, is not set");
    return AssociateUserAccessLoggingSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  if (!request.UserAccessLoggingSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateUserAccessLoggingSettings", "Required field: UserAccessLoggingSettingsArn, is not set");
    return AssociateUserAccessLoggingSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserAccessLoggingSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userAccessLoggingSettings");
  return AssociateUserAccessLoggingSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateUserAccessLoggingSettingsOutcomeCallable WorkSpacesWebClient::AssociateUserAccessLoggingSettingsCallable(const AssociateUserAccessLoggingSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateUserAccessLoggingSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateUserAccessLoggingSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::AssociateUserAccessLoggingSettingsAsync(const AssociateUserAccessLoggingSettingsRequest& request, const AssociateUserAccessLoggingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateUserAccessLoggingSettings(request), context);
    } );
}

AssociateUserSettingsOutcome WorkSpacesWebClient::AssociateUserSettings(const AssociateUserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateUserSettings", "Required field: PortalArn, is not set");
    return AssociateUserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  if (!request.UserSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateUserSettings", "Required field: UserSettingsArn, is not set");
    return AssociateUserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userSettings");
  return AssociateUserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateUserSettingsOutcomeCallable WorkSpacesWebClient::AssociateUserSettingsCallable(const AssociateUserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateUserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateUserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::AssociateUserSettingsAsync(const AssociateUserSettingsRequest& request, const AssociateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateUserSettings(request), context);
    } );
}

CreateBrowserSettingsOutcome WorkSpacesWebClient::CreateBrowserSettings(const CreateBrowserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/browserSettings");
  return CreateBrowserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBrowserSettingsOutcomeCallable WorkSpacesWebClient::CreateBrowserSettingsCallable(const CreateBrowserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBrowserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBrowserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::CreateBrowserSettingsAsync(const CreateBrowserSettingsRequest& request, const CreateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBrowserSettings(request), context);
    } );
}

CreateIdentityProviderOutcome WorkSpacesWebClient::CreateIdentityProvider(const CreateIdentityProviderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identityProviders");
  return CreateIdentityProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIdentityProviderOutcomeCallable WorkSpacesWebClient::CreateIdentityProviderCallable(const CreateIdentityProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIdentityProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIdentityProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::CreateIdentityProviderAsync(const CreateIdentityProviderRequest& request, const CreateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateIdentityProvider(request), context);
    } );
}

CreateNetworkSettingsOutcome WorkSpacesWebClient::CreateNetworkSettings(const CreateNetworkSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/networkSettings");
  return CreateNetworkSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNetworkSettingsOutcomeCallable WorkSpacesWebClient::CreateNetworkSettingsCallable(const CreateNetworkSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNetworkSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNetworkSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::CreateNetworkSettingsAsync(const CreateNetworkSettingsRequest& request, const CreateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateNetworkSettings(request), context);
    } );
}

CreatePortalOutcome WorkSpacesWebClient::CreatePortal(const CreatePortalRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePortal, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePortal, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals");
  return CreatePortalOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePortalOutcomeCallable WorkSpacesWebClient::CreatePortalCallable(const CreatePortalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePortalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePortal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::CreatePortalAsync(const CreatePortalRequest& request, const CreatePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreatePortal(request), context);
    } );
}

CreateTrustStoreOutcome WorkSpacesWebClient::CreateTrustStore(const CreateTrustStoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores");
  return CreateTrustStoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTrustStoreOutcomeCallable WorkSpacesWebClient::CreateTrustStoreCallable(const CreateTrustStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrustStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrustStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::CreateTrustStoreAsync(const CreateTrustStoreRequest& request, const CreateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateTrustStore(request), context);
    } );
}

CreateUserAccessLoggingSettingsOutcome WorkSpacesWebClient::CreateUserAccessLoggingSettings(const CreateUserAccessLoggingSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userAccessLoggingSettings");
  return CreateUserAccessLoggingSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserAccessLoggingSettingsOutcomeCallable WorkSpacesWebClient::CreateUserAccessLoggingSettingsCallable(const CreateUserAccessLoggingSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserAccessLoggingSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUserAccessLoggingSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::CreateUserAccessLoggingSettingsAsync(const CreateUserAccessLoggingSettingsRequest& request, const CreateUserAccessLoggingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateUserAccessLoggingSettings(request), context);
    } );
}

CreateUserSettingsOutcome WorkSpacesWebClient::CreateUserSettings(const CreateUserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userSettings");
  return CreateUserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserSettingsOutcomeCallable WorkSpacesWebClient::CreateUserSettingsCallable(const CreateUserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::CreateUserSettingsAsync(const CreateUserSettingsRequest& request, const CreateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateUserSettings(request), context);
    } );
}

DeleteBrowserSettingsOutcome WorkSpacesWebClient::DeleteBrowserSettings(const DeleteBrowserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BrowserSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBrowserSettings", "Required field: BrowserSettingsArn, is not set");
    return DeleteBrowserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrowserSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/browserSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetBrowserSettingsArn());
  return DeleteBrowserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteBrowserSettingsOutcomeCallable WorkSpacesWebClient::DeleteBrowserSettingsCallable(const DeleteBrowserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBrowserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBrowserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::DeleteBrowserSettingsAsync(const DeleteBrowserSettingsRequest& request, const DeleteBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBrowserSettings(request), context);
    } );
}

DeleteIdentityProviderOutcome WorkSpacesWebClient::DeleteIdentityProvider(const DeleteIdentityProviderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityProviderArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIdentityProvider", "Required field: IdentityProviderArn, is not set");
    return DeleteIdentityProviderOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityProviderArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identityProviders/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetIdentityProviderArn());
  return DeleteIdentityProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteIdentityProviderOutcomeCallable WorkSpacesWebClient::DeleteIdentityProviderCallable(const DeleteIdentityProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIdentityProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIdentityProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::DeleteIdentityProviderAsync(const DeleteIdentityProviderRequest& request, const DeleteIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteIdentityProvider(request), context);
    } );
}

DeleteNetworkSettingsOutcome WorkSpacesWebClient::DeleteNetworkSettings(const DeleteNetworkSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNetworkSettings", "Required field: NetworkSettingsArn, is not set");
    return DeleteNetworkSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/networkSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetNetworkSettingsArn());
  return DeleteNetworkSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteNetworkSettingsOutcomeCallable WorkSpacesWebClient::DeleteNetworkSettingsCallable(const DeleteNetworkSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNetworkSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNetworkSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::DeleteNetworkSettingsAsync(const DeleteNetworkSettingsRequest& request, const DeleteNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteNetworkSettings(request), context);
    } );
}

DeletePortalOutcome WorkSpacesWebClient::DeletePortal(const DeletePortalRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePortal, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePortal", "Required field: PortalArn, is not set");
    return DeletePortalOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePortal, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  return DeletePortalOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePortalOutcomeCallable WorkSpacesWebClient::DeletePortalCallable(const DeletePortalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePortalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePortal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::DeletePortalAsync(const DeletePortalRequest& request, const DeletePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePortal(request), context);
    } );
}

DeleteTrustStoreOutcome WorkSpacesWebClient::DeleteTrustStore(const DeleteTrustStoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrustStoreArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTrustStore", "Required field: TrustStoreArn, is not set");
    return DeleteTrustStoreOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustStoreArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetTrustStoreArn());
  return DeleteTrustStoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteTrustStoreOutcomeCallable WorkSpacesWebClient::DeleteTrustStoreCallable(const DeleteTrustStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrustStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTrustStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::DeleteTrustStoreAsync(const DeleteTrustStoreRequest& request, const DeleteTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTrustStore(request), context);
    } );
}

DeleteUserAccessLoggingSettingsOutcome WorkSpacesWebClient::DeleteUserAccessLoggingSettings(const DeleteUserAccessLoggingSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserAccessLoggingSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUserAccessLoggingSettings", "Required field: UserAccessLoggingSettingsArn, is not set");
    return DeleteUserAccessLoggingSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserAccessLoggingSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userAccessLoggingSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetUserAccessLoggingSettingsArn());
  return DeleteUserAccessLoggingSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserAccessLoggingSettingsOutcomeCallable WorkSpacesWebClient::DeleteUserAccessLoggingSettingsCallable(const DeleteUserAccessLoggingSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserAccessLoggingSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserAccessLoggingSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::DeleteUserAccessLoggingSettingsAsync(const DeleteUserAccessLoggingSettingsRequest& request, const DeleteUserAccessLoggingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteUserAccessLoggingSettings(request), context);
    } );
}

DeleteUserSettingsOutcome WorkSpacesWebClient::DeleteUserSettings(const DeleteUserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUserSettings", "Required field: UserSettingsArn, is not set");
    return DeleteUserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetUserSettingsArn());
  return DeleteUserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserSettingsOutcomeCallable WorkSpacesWebClient::DeleteUserSettingsCallable(const DeleteUserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::DeleteUserSettingsAsync(const DeleteUserSettingsRequest& request, const DeleteUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteUserSettings(request), context);
    } );
}

DisassociateBrowserSettingsOutcome WorkSpacesWebClient::DisassociateBrowserSettings(const DisassociateBrowserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateBrowserSettings", "Required field: PortalArn, is not set");
    return DisassociateBrowserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/browserSettings");
  return DisassociateBrowserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateBrowserSettingsOutcomeCallable WorkSpacesWebClient::DisassociateBrowserSettingsCallable(const DisassociateBrowserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateBrowserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateBrowserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::DisassociateBrowserSettingsAsync(const DisassociateBrowserSettingsRequest& request, const DisassociateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateBrowserSettings(request), context);
    } );
}

DisassociateNetworkSettingsOutcome WorkSpacesWebClient::DisassociateNetworkSettings(const DisassociateNetworkSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateNetworkSettings", "Required field: PortalArn, is not set");
    return DisassociateNetworkSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/networkSettings");
  return DisassociateNetworkSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateNetworkSettingsOutcomeCallable WorkSpacesWebClient::DisassociateNetworkSettingsCallable(const DisassociateNetworkSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateNetworkSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateNetworkSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::DisassociateNetworkSettingsAsync(const DisassociateNetworkSettingsRequest& request, const DisassociateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateNetworkSettings(request), context);
    } );
}

DisassociateTrustStoreOutcome WorkSpacesWebClient::DisassociateTrustStore(const DisassociateTrustStoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateTrustStore", "Required field: PortalArn, is not set");
    return DisassociateTrustStoreOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores");
  return DisassociateTrustStoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateTrustStoreOutcomeCallable WorkSpacesWebClient::DisassociateTrustStoreCallable(const DisassociateTrustStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateTrustStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateTrustStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::DisassociateTrustStoreAsync(const DisassociateTrustStoreRequest& request, const DisassociateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateTrustStore(request), context);
    } );
}

DisassociateUserAccessLoggingSettingsOutcome WorkSpacesWebClient::DisassociateUserAccessLoggingSettings(const DisassociateUserAccessLoggingSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateUserAccessLoggingSettings", "Required field: PortalArn, is not set");
    return DisassociateUserAccessLoggingSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userAccessLoggingSettings");
  return DisassociateUserAccessLoggingSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateUserAccessLoggingSettingsOutcomeCallable WorkSpacesWebClient::DisassociateUserAccessLoggingSettingsCallable(const DisassociateUserAccessLoggingSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateUserAccessLoggingSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateUserAccessLoggingSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::DisassociateUserAccessLoggingSettingsAsync(const DisassociateUserAccessLoggingSettingsRequest& request, const DisassociateUserAccessLoggingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateUserAccessLoggingSettings(request), context);
    } );
}

DisassociateUserSettingsOutcome WorkSpacesWebClient::DisassociateUserSettings(const DisassociateUserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateUserSettings", "Required field: PortalArn, is not set");
    return DisassociateUserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userSettings");
  return DisassociateUserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateUserSettingsOutcomeCallable WorkSpacesWebClient::DisassociateUserSettingsCallable(const DisassociateUserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateUserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateUserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::DisassociateUserSettingsAsync(const DisassociateUserSettingsRequest& request, const DisassociateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateUserSettings(request), context);
    } );
}

GetBrowserSettingsOutcome WorkSpacesWebClient::GetBrowserSettings(const GetBrowserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BrowserSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBrowserSettings", "Required field: BrowserSettingsArn, is not set");
    return GetBrowserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrowserSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/browserSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetBrowserSettingsArn());
  return GetBrowserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBrowserSettingsOutcomeCallable WorkSpacesWebClient::GetBrowserSettingsCallable(const GetBrowserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBrowserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBrowserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::GetBrowserSettingsAsync(const GetBrowserSettingsRequest& request, const GetBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBrowserSettings(request), context);
    } );
}

GetIdentityProviderOutcome WorkSpacesWebClient::GetIdentityProvider(const GetIdentityProviderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityProviderArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIdentityProvider", "Required field: IdentityProviderArn, is not set");
    return GetIdentityProviderOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityProviderArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identityProviders/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetIdentityProviderArn());
  return GetIdentityProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetIdentityProviderOutcomeCallable WorkSpacesWebClient::GetIdentityProviderCallable(const GetIdentityProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIdentityProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIdentityProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::GetIdentityProviderAsync(const GetIdentityProviderRequest& request, const GetIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetIdentityProvider(request), context);
    } );
}

GetNetworkSettingsOutcome WorkSpacesWebClient::GetNetworkSettings(const GetNetworkSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNetworkSettings", "Required field: NetworkSettingsArn, is not set");
    return GetNetworkSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/networkSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetNetworkSettingsArn());
  return GetNetworkSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetNetworkSettingsOutcomeCallable WorkSpacesWebClient::GetNetworkSettingsCallable(const GetNetworkSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNetworkSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNetworkSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::GetNetworkSettingsAsync(const GetNetworkSettingsRequest& request, const GetNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetNetworkSettings(request), context);
    } );
}

GetPortalOutcome WorkSpacesWebClient::GetPortal(const GetPortalRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPortal, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPortal", "Required field: PortalArn, is not set");
    return GetPortalOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPortal, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  return GetPortalOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPortalOutcomeCallable WorkSpacesWebClient::GetPortalCallable(const GetPortalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPortalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPortal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::GetPortalAsync(const GetPortalRequest& request, const GetPortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPortal(request), context);
    } );
}

GetPortalServiceProviderMetadataOutcome WorkSpacesWebClient::GetPortalServiceProviderMetadata(const GetPortalServiceProviderMetadataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPortalServiceProviderMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPortalServiceProviderMetadata", "Required field: PortalArn, is not set");
    return GetPortalServiceProviderMetadataOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPortalServiceProviderMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portalIdp/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  return GetPortalServiceProviderMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPortalServiceProviderMetadataOutcomeCallable WorkSpacesWebClient::GetPortalServiceProviderMetadataCallable(const GetPortalServiceProviderMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPortalServiceProviderMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPortalServiceProviderMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::GetPortalServiceProviderMetadataAsync(const GetPortalServiceProviderMetadataRequest& request, const GetPortalServiceProviderMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPortalServiceProviderMetadata(request), context);
    } );
}

GetTrustStoreOutcome WorkSpacesWebClient::GetTrustStore(const GetTrustStoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrustStoreArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTrustStore", "Required field: TrustStoreArn, is not set");
    return GetTrustStoreOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustStoreArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetTrustStoreArn());
  return GetTrustStoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTrustStoreOutcomeCallable WorkSpacesWebClient::GetTrustStoreCallable(const GetTrustStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTrustStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTrustStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::GetTrustStoreAsync(const GetTrustStoreRequest& request, const GetTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTrustStore(request), context);
    } );
}

GetTrustStoreCertificateOutcome WorkSpacesWebClient::GetTrustStoreCertificate(const GetTrustStoreCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTrustStoreCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ThumbprintHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTrustStoreCertificate", "Required field: Thumbprint, is not set");
    return GetTrustStoreCertificateOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Thumbprint]", false));
  }
  if (!request.TrustStoreArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTrustStoreCertificate", "Required field: TrustStoreArn, is not set");
    return GetTrustStoreCertificateOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustStoreArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTrustStoreCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetTrustStoreArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/certificate");
  return GetTrustStoreCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTrustStoreCertificateOutcomeCallable WorkSpacesWebClient::GetTrustStoreCertificateCallable(const GetTrustStoreCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTrustStoreCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTrustStoreCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::GetTrustStoreCertificateAsync(const GetTrustStoreCertificateRequest& request, const GetTrustStoreCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTrustStoreCertificate(request), context);
    } );
}

GetUserAccessLoggingSettingsOutcome WorkSpacesWebClient::GetUserAccessLoggingSettings(const GetUserAccessLoggingSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserAccessLoggingSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUserAccessLoggingSettings", "Required field: UserAccessLoggingSettingsArn, is not set");
    return GetUserAccessLoggingSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserAccessLoggingSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userAccessLoggingSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetUserAccessLoggingSettingsArn());
  return GetUserAccessLoggingSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetUserAccessLoggingSettingsOutcomeCallable WorkSpacesWebClient::GetUserAccessLoggingSettingsCallable(const GetUserAccessLoggingSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUserAccessLoggingSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUserAccessLoggingSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::GetUserAccessLoggingSettingsAsync(const GetUserAccessLoggingSettingsRequest& request, const GetUserAccessLoggingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetUserAccessLoggingSettings(request), context);
    } );
}

GetUserSettingsOutcome WorkSpacesWebClient::GetUserSettings(const GetUserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUserSettings", "Required field: UserSettingsArn, is not set");
    return GetUserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetUserSettingsArn());
  return GetUserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetUserSettingsOutcomeCallable WorkSpacesWebClient::GetUserSettingsCallable(const GetUserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::GetUserSettingsAsync(const GetUserSettingsRequest& request, const GetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetUserSettings(request), context);
    } );
}

ListBrowserSettingsOutcome WorkSpacesWebClient::ListBrowserSettings(const ListBrowserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/browserSettings");
  return ListBrowserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBrowserSettingsOutcomeCallable WorkSpacesWebClient::ListBrowserSettingsCallable(const ListBrowserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBrowserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBrowserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::ListBrowserSettingsAsync(const ListBrowserSettingsRequest& request, const ListBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBrowserSettings(request), context);
    } );
}

ListIdentityProvidersOutcome WorkSpacesWebClient::ListIdentityProviders(const ListIdentityProvidersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIdentityProviders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIdentityProviders", "Required field: PortalArn, is not set");
    return ListIdentityProvidersOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIdentityProviders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identityProviders");
  return ListIdentityProvidersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIdentityProvidersOutcomeCallable WorkSpacesWebClient::ListIdentityProvidersCallable(const ListIdentityProvidersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIdentityProvidersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIdentityProviders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::ListIdentityProvidersAsync(const ListIdentityProvidersRequest& request, const ListIdentityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListIdentityProviders(request), context);
    } );
}

ListNetworkSettingsOutcome WorkSpacesWebClient::ListNetworkSettings(const ListNetworkSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/networkSettings");
  return ListNetworkSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListNetworkSettingsOutcomeCallable WorkSpacesWebClient::ListNetworkSettingsCallable(const ListNetworkSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNetworkSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNetworkSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::ListNetworkSettingsAsync(const ListNetworkSettingsRequest& request, const ListNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListNetworkSettings(request), context);
    } );
}

ListPortalsOutcome WorkSpacesWebClient::ListPortals(const ListPortalsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPortals, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPortals, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals");
  return ListPortalsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPortalsOutcomeCallable WorkSpacesWebClient::ListPortalsCallable(const ListPortalsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPortalsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPortals(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::ListPortalsAsync(const ListPortalsRequest& request, const ListPortalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPortals(request), context);
    } );
}

ListTagsForResourceOutcome WorkSpacesWebClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable WorkSpacesWebClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListTrustStoreCertificatesOutcome WorkSpacesWebClient::ListTrustStoreCertificates(const ListTrustStoreCertificatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrustStoreCertificates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrustStoreArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTrustStoreCertificates", "Required field: TrustStoreArn, is not set");
    return ListTrustStoreCertificatesOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustStoreArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTrustStoreCertificates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetTrustStoreArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/certificates");
  return ListTrustStoreCertificatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTrustStoreCertificatesOutcomeCallable WorkSpacesWebClient::ListTrustStoreCertificatesCallable(const ListTrustStoreCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrustStoreCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrustStoreCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::ListTrustStoreCertificatesAsync(const ListTrustStoreCertificatesRequest& request, const ListTrustStoreCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTrustStoreCertificates(request), context);
    } );
}

ListTrustStoresOutcome WorkSpacesWebClient::ListTrustStores(const ListTrustStoresRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrustStores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTrustStores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores");
  return ListTrustStoresOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTrustStoresOutcomeCallable WorkSpacesWebClient::ListTrustStoresCallable(const ListTrustStoresRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrustStoresOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrustStores(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::ListTrustStoresAsync(const ListTrustStoresRequest& request, const ListTrustStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTrustStores(request), context);
    } );
}

ListUserAccessLoggingSettingsOutcome WorkSpacesWebClient::ListUserAccessLoggingSettings(const ListUserAccessLoggingSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userAccessLoggingSettings");
  return ListUserAccessLoggingSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListUserAccessLoggingSettingsOutcomeCallable WorkSpacesWebClient::ListUserAccessLoggingSettingsCallable(const ListUserAccessLoggingSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUserAccessLoggingSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUserAccessLoggingSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::ListUserAccessLoggingSettingsAsync(const ListUserAccessLoggingSettingsRequest& request, const ListUserAccessLoggingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListUserAccessLoggingSettings(request), context);
    } );
}

ListUserSettingsOutcome WorkSpacesWebClient::ListUserSettings(const ListUserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userSettings");
  return ListUserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListUserSettingsOutcomeCallable WorkSpacesWebClient::ListUserSettingsCallable(const ListUserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::ListUserSettingsAsync(const ListUserSettingsRequest& request, const ListUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListUserSettings(request), context);
    } );
}

TagResourceOutcome WorkSpacesWebClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable WorkSpacesWebClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome WorkSpacesWebClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable WorkSpacesWebClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateBrowserSettingsOutcome WorkSpacesWebClient::UpdateBrowserSettings(const UpdateBrowserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BrowserSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBrowserSettings", "Required field: BrowserSettingsArn, is not set");
    return UpdateBrowserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrowserSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/browserSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetBrowserSettingsArn());
  return UpdateBrowserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateBrowserSettingsOutcomeCallable WorkSpacesWebClient::UpdateBrowserSettingsCallable(const UpdateBrowserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBrowserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBrowserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::UpdateBrowserSettingsAsync(const UpdateBrowserSettingsRequest& request, const UpdateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateBrowserSettings(request), context);
    } );
}

UpdateIdentityProviderOutcome WorkSpacesWebClient::UpdateIdentityProvider(const UpdateIdentityProviderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityProviderArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIdentityProvider", "Required field: IdentityProviderArn, is not set");
    return UpdateIdentityProviderOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityProviderArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identityProviders/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetIdentityProviderArn());
  return UpdateIdentityProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateIdentityProviderOutcomeCallable WorkSpacesWebClient::UpdateIdentityProviderCallable(const UpdateIdentityProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIdentityProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIdentityProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::UpdateIdentityProviderAsync(const UpdateIdentityProviderRequest& request, const UpdateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateIdentityProvider(request), context);
    } );
}

UpdateNetworkSettingsOutcome WorkSpacesWebClient::UpdateNetworkSettings(const UpdateNetworkSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateNetworkSettings", "Required field: NetworkSettingsArn, is not set");
    return UpdateNetworkSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/networkSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetNetworkSettingsArn());
  return UpdateNetworkSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateNetworkSettingsOutcomeCallable WorkSpacesWebClient::UpdateNetworkSettingsCallable(const UpdateNetworkSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNetworkSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNetworkSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::UpdateNetworkSettingsAsync(const UpdateNetworkSettingsRequest& request, const UpdateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateNetworkSettings(request), context);
    } );
}

UpdatePortalOutcome WorkSpacesWebClient::UpdatePortal(const UpdatePortalRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePortal, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePortal", "Required field: PortalArn, is not set");
    return UpdatePortalOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePortal, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  return UpdatePortalOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePortalOutcomeCallable WorkSpacesWebClient::UpdatePortalCallable(const UpdatePortalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePortalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePortal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::UpdatePortalAsync(const UpdatePortalRequest& request, const UpdatePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdatePortal(request), context);
    } );
}

UpdateTrustStoreOutcome WorkSpacesWebClient::UpdateTrustStore(const UpdateTrustStoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrustStoreArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTrustStore", "Required field: TrustStoreArn, is not set");
    return UpdateTrustStoreOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustStoreArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetTrustStoreArn());
  return UpdateTrustStoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateTrustStoreOutcomeCallable WorkSpacesWebClient::UpdateTrustStoreCallable(const UpdateTrustStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTrustStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTrustStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::UpdateTrustStoreAsync(const UpdateTrustStoreRequest& request, const UpdateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateTrustStore(request), context);
    } );
}

UpdateUserAccessLoggingSettingsOutcome WorkSpacesWebClient::UpdateUserAccessLoggingSettings(const UpdateUserAccessLoggingSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserAccessLoggingSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUserAccessLoggingSettings", "Required field: UserAccessLoggingSettingsArn, is not set");
    return UpdateUserAccessLoggingSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserAccessLoggingSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userAccessLoggingSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetUserAccessLoggingSettingsArn());
  return UpdateUserAccessLoggingSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserAccessLoggingSettingsOutcomeCallable WorkSpacesWebClient::UpdateUserAccessLoggingSettingsCallable(const UpdateUserAccessLoggingSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserAccessLoggingSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserAccessLoggingSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::UpdateUserAccessLoggingSettingsAsync(const UpdateUserAccessLoggingSettingsRequest& request, const UpdateUserAccessLoggingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateUserAccessLoggingSettings(request), context);
    } );
}

UpdateUserSettingsOutcome WorkSpacesWebClient::UpdateUserSettings(const UpdateUserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUserSettings", "Required field: UserSettingsArn, is not set");
    return UpdateUserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetUserSettingsArn());
  return UpdateUserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserSettingsOutcomeCallable WorkSpacesWebClient::UpdateUserSettingsCallable(const UpdateUserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClient::UpdateUserSettingsAsync(const UpdateUserSettingsRequest& request, const UpdateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateUserSettings(request), context);
    } );
}

