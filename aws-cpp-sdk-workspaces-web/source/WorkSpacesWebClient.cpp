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

#include <aws/workspaces-web/WorkSpacesWebClient.h>
#include <aws/workspaces-web/WorkSpacesWebEndpoint.h>
#include <aws/workspaces-web/WorkSpacesWebErrorMarshaller.h>
#include <aws/workspaces-web/model/AssociateBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/AssociateNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/AssociateTrustStoreRequest.h>
#include <aws/workspaces-web/model/AssociateUserSettingsRequest.h>
#include <aws/workspaces-web/model/CreateBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/CreateIdentityProviderRequest.h>
#include <aws/workspaces-web/model/CreateNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/CreatePortalRequest.h>
#include <aws/workspaces-web/model/CreateTrustStoreRequest.h>
#include <aws/workspaces-web/model/CreateUserSettingsRequest.h>
#include <aws/workspaces-web/model/DeleteBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/DeleteIdentityProviderRequest.h>
#include <aws/workspaces-web/model/DeleteNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/DeletePortalRequest.h>
#include <aws/workspaces-web/model/DeleteTrustStoreRequest.h>
#include <aws/workspaces-web/model/DeleteUserSettingsRequest.h>
#include <aws/workspaces-web/model/DisassociateBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/DisassociateNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/DisassociateTrustStoreRequest.h>
#include <aws/workspaces-web/model/DisassociateUserSettingsRequest.h>
#include <aws/workspaces-web/model/GetBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/GetIdentityProviderRequest.h>
#include <aws/workspaces-web/model/GetNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/GetPortalRequest.h>
#include <aws/workspaces-web/model/GetPortalServiceProviderMetadataRequest.h>
#include <aws/workspaces-web/model/GetTrustStoreRequest.h>
#include <aws/workspaces-web/model/GetTrustStoreCertificateRequest.h>
#include <aws/workspaces-web/model/GetUserSettingsRequest.h>
#include <aws/workspaces-web/model/ListBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/ListIdentityProvidersRequest.h>
#include <aws/workspaces-web/model/ListNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/ListPortalsRequest.h>
#include <aws/workspaces-web/model/ListTagsForResourceRequest.h>
#include <aws/workspaces-web/model/ListTrustStoreCertificatesRequest.h>
#include <aws/workspaces-web/model/ListTrustStoresRequest.h>
#include <aws/workspaces-web/model/ListUserSettingsRequest.h>
#include <aws/workspaces-web/model/TagResourceRequest.h>
#include <aws/workspaces-web/model/UntagResourceRequest.h>
#include <aws/workspaces-web/model/UpdateBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/UpdateIdentityProviderRequest.h>
#include <aws/workspaces-web/model/UpdateNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/UpdatePortalRequest.h>
#include <aws/workspaces-web/model/UpdateTrustStoreRequest.h>
#include <aws/workspaces-web/model/UpdateUserSettingsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WorkSpacesWeb;
using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "workspaces-web";
static const char* ALLOCATION_TAG = "WorkSpacesWebClient";

WorkSpacesWebClient::WorkSpacesWebClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesWebErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkSpacesWebClient::WorkSpacesWebClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesWebErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkSpacesWebClient::WorkSpacesWebClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesWebErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkSpacesWebClient::~WorkSpacesWebClient()
{
}

void WorkSpacesWebClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("WorkSpaces Web");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + WorkSpacesWebEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void WorkSpacesWebClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

AssociateBrowserSettingsOutcome WorkSpacesWebClient::AssociateBrowserSettings(const AssociateBrowserSettingsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/portals/");
  uri.AddPathSegments(request.GetPortalArn());
  uri.AddPathSegments("/browserSettings");
  return AssociateBrowserSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateBrowserSettingsOutcomeCallable WorkSpacesWebClient::AssociateBrowserSettingsCallable(const AssociateBrowserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateBrowserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateBrowserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientAssociateBrowserSettingsAsyncHelper(WorkSpacesWebClient const * const clientThis, const AssociateBrowserSettingsRequest& request, const AssociateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateBrowserSettings(request), context);
}

void WorkSpacesWebClient::AssociateBrowserSettingsAsync(const AssociateBrowserSettingsRequest& request, const AssociateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientAssociateBrowserSettingsAsyncHelper( this, request, handler, context ); } );
}

AssociateNetworkSettingsOutcome WorkSpacesWebClient::AssociateNetworkSettings(const AssociateNetworkSettingsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/portals/");
  uri.AddPathSegments(request.GetPortalArn());
  uri.AddPathSegments("/networkSettings");
  return AssociateNetworkSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateNetworkSettingsOutcomeCallable WorkSpacesWebClient::AssociateNetworkSettingsCallable(const AssociateNetworkSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateNetworkSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateNetworkSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientAssociateNetworkSettingsAsyncHelper(WorkSpacesWebClient const * const clientThis, const AssociateNetworkSettingsRequest& request, const AssociateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateNetworkSettings(request), context);
}

void WorkSpacesWebClient::AssociateNetworkSettingsAsync(const AssociateNetworkSettingsRequest& request, const AssociateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientAssociateNetworkSettingsAsyncHelper( this, request, handler, context ); } );
}

AssociateTrustStoreOutcome WorkSpacesWebClient::AssociateTrustStore(const AssociateTrustStoreRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/portals/");
  uri.AddPathSegments(request.GetPortalArn());
  uri.AddPathSegments("/trustStores");
  return AssociateTrustStoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateTrustStoreOutcomeCallable WorkSpacesWebClient::AssociateTrustStoreCallable(const AssociateTrustStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateTrustStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateTrustStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientAssociateTrustStoreAsyncHelper(WorkSpacesWebClient const * const clientThis, const AssociateTrustStoreRequest& request, const AssociateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateTrustStore(request), context);
}

void WorkSpacesWebClient::AssociateTrustStoreAsync(const AssociateTrustStoreRequest& request, const AssociateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientAssociateTrustStoreAsyncHelper( this, request, handler, context ); } );
}

AssociateUserSettingsOutcome WorkSpacesWebClient::AssociateUserSettings(const AssociateUserSettingsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/portals/");
  uri.AddPathSegments(request.GetPortalArn());
  uri.AddPathSegments("/userSettings");
  return AssociateUserSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateUserSettingsOutcomeCallable WorkSpacesWebClient::AssociateUserSettingsCallable(const AssociateUserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateUserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateUserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientAssociateUserSettingsAsyncHelper(WorkSpacesWebClient const * const clientThis, const AssociateUserSettingsRequest& request, const AssociateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateUserSettings(request), context);
}

void WorkSpacesWebClient::AssociateUserSettingsAsync(const AssociateUserSettingsRequest& request, const AssociateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientAssociateUserSettingsAsyncHelper( this, request, handler, context ); } );
}

CreateBrowserSettingsOutcome WorkSpacesWebClient::CreateBrowserSettings(const CreateBrowserSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/browserSettings");
  return CreateBrowserSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBrowserSettingsOutcomeCallable WorkSpacesWebClient::CreateBrowserSettingsCallable(const CreateBrowserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBrowserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBrowserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientCreateBrowserSettingsAsyncHelper(WorkSpacesWebClient const * const clientThis, const CreateBrowserSettingsRequest& request, const CreateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateBrowserSettings(request), context);
}

void WorkSpacesWebClient::CreateBrowserSettingsAsync(const CreateBrowserSettingsRequest& request, const CreateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientCreateBrowserSettingsAsyncHelper( this, request, handler, context ); } );
}

CreateIdentityProviderOutcome WorkSpacesWebClient::CreateIdentityProvider(const CreateIdentityProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/identityProviders");
  return CreateIdentityProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIdentityProviderOutcomeCallable WorkSpacesWebClient::CreateIdentityProviderCallable(const CreateIdentityProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIdentityProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIdentityProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientCreateIdentityProviderAsyncHelper(WorkSpacesWebClient const * const clientThis, const CreateIdentityProviderRequest& request, const CreateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateIdentityProvider(request), context);
}

void WorkSpacesWebClient::CreateIdentityProviderAsync(const CreateIdentityProviderRequest& request, const CreateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientCreateIdentityProviderAsyncHelper( this, request, handler, context ); } );
}

CreateNetworkSettingsOutcome WorkSpacesWebClient::CreateNetworkSettings(const CreateNetworkSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/networkSettings");
  return CreateNetworkSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNetworkSettingsOutcomeCallable WorkSpacesWebClient::CreateNetworkSettingsCallable(const CreateNetworkSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNetworkSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNetworkSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientCreateNetworkSettingsAsyncHelper(WorkSpacesWebClient const * const clientThis, const CreateNetworkSettingsRequest& request, const CreateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateNetworkSettings(request), context);
}

void WorkSpacesWebClient::CreateNetworkSettingsAsync(const CreateNetworkSettingsRequest& request, const CreateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientCreateNetworkSettingsAsyncHelper( this, request, handler, context ); } );
}

CreatePortalOutcome WorkSpacesWebClient::CreatePortal(const CreatePortalRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/portals");
  return CreatePortalOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePortalOutcomeCallable WorkSpacesWebClient::CreatePortalCallable(const CreatePortalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePortalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePortal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientCreatePortalAsyncHelper(WorkSpacesWebClient const * const clientThis, const CreatePortalRequest& request, const CreatePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePortal(request), context);
}

void WorkSpacesWebClient::CreatePortalAsync(const CreatePortalRequest& request, const CreatePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientCreatePortalAsyncHelper( this, request, handler, context ); } );
}

CreateTrustStoreOutcome WorkSpacesWebClient::CreateTrustStore(const CreateTrustStoreRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/trustStores");
  return CreateTrustStoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTrustStoreOutcomeCallable WorkSpacesWebClient::CreateTrustStoreCallable(const CreateTrustStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrustStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrustStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientCreateTrustStoreAsyncHelper(WorkSpacesWebClient const * const clientThis, const CreateTrustStoreRequest& request, const CreateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTrustStore(request), context);
}

void WorkSpacesWebClient::CreateTrustStoreAsync(const CreateTrustStoreRequest& request, const CreateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientCreateTrustStoreAsyncHelper( this, request, handler, context ); } );
}

CreateUserSettingsOutcome WorkSpacesWebClient::CreateUserSettings(const CreateUserSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/userSettings");
  return CreateUserSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserSettingsOutcomeCallable WorkSpacesWebClient::CreateUserSettingsCallable(const CreateUserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientCreateUserSettingsAsyncHelper(WorkSpacesWebClient const * const clientThis, const CreateUserSettingsRequest& request, const CreateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUserSettings(request), context);
}

void WorkSpacesWebClient::CreateUserSettingsAsync(const CreateUserSettingsRequest& request, const CreateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientCreateUserSettingsAsyncHelper( this, request, handler, context ); } );
}

DeleteBrowserSettingsOutcome WorkSpacesWebClient::DeleteBrowserSettings(const DeleteBrowserSettingsRequest& request) const
{
  if (!request.BrowserSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBrowserSettings", "Required field: BrowserSettingsArn, is not set");
    return DeleteBrowserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrowserSettingsArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/browserSettings/");
  uri.AddPathSegments(request.GetBrowserSettingsArn());
  return DeleteBrowserSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteBrowserSettingsOutcomeCallable WorkSpacesWebClient::DeleteBrowserSettingsCallable(const DeleteBrowserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBrowserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBrowserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientDeleteBrowserSettingsAsyncHelper(WorkSpacesWebClient const * const clientThis, const DeleteBrowserSettingsRequest& request, const DeleteBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteBrowserSettings(request), context);
}

void WorkSpacesWebClient::DeleteBrowserSettingsAsync(const DeleteBrowserSettingsRequest& request, const DeleteBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientDeleteBrowserSettingsAsyncHelper( this, request, handler, context ); } );
}

DeleteIdentityProviderOutcome WorkSpacesWebClient::DeleteIdentityProvider(const DeleteIdentityProviderRequest& request) const
{
  if (!request.IdentityProviderArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIdentityProvider", "Required field: IdentityProviderArn, is not set");
    return DeleteIdentityProviderOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityProviderArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/identityProviders/");
  uri.AddPathSegments(request.GetIdentityProviderArn());
  return DeleteIdentityProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteIdentityProviderOutcomeCallable WorkSpacesWebClient::DeleteIdentityProviderCallable(const DeleteIdentityProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIdentityProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIdentityProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientDeleteIdentityProviderAsyncHelper(WorkSpacesWebClient const * const clientThis, const DeleteIdentityProviderRequest& request, const DeleteIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteIdentityProvider(request), context);
}

void WorkSpacesWebClient::DeleteIdentityProviderAsync(const DeleteIdentityProviderRequest& request, const DeleteIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientDeleteIdentityProviderAsyncHelper( this, request, handler, context ); } );
}

DeleteNetworkSettingsOutcome WorkSpacesWebClient::DeleteNetworkSettings(const DeleteNetworkSettingsRequest& request) const
{
  if (!request.NetworkSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNetworkSettings", "Required field: NetworkSettingsArn, is not set");
    return DeleteNetworkSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkSettingsArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/networkSettings/");
  uri.AddPathSegments(request.GetNetworkSettingsArn());
  return DeleteNetworkSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteNetworkSettingsOutcomeCallable WorkSpacesWebClient::DeleteNetworkSettingsCallable(const DeleteNetworkSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNetworkSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNetworkSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientDeleteNetworkSettingsAsyncHelper(WorkSpacesWebClient const * const clientThis, const DeleteNetworkSettingsRequest& request, const DeleteNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteNetworkSettings(request), context);
}

void WorkSpacesWebClient::DeleteNetworkSettingsAsync(const DeleteNetworkSettingsRequest& request, const DeleteNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientDeleteNetworkSettingsAsyncHelper( this, request, handler, context ); } );
}

DeletePortalOutcome WorkSpacesWebClient::DeletePortal(const DeletePortalRequest& request) const
{
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePortal", "Required field: PortalArn, is not set");
    return DeletePortalOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/portals/");
  uri.AddPathSegments(request.GetPortalArn());
  return DeletePortalOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePortalOutcomeCallable WorkSpacesWebClient::DeletePortalCallable(const DeletePortalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePortalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePortal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientDeletePortalAsyncHelper(WorkSpacesWebClient const * const clientThis, const DeletePortalRequest& request, const DeletePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePortal(request), context);
}

void WorkSpacesWebClient::DeletePortalAsync(const DeletePortalRequest& request, const DeletePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientDeletePortalAsyncHelper( this, request, handler, context ); } );
}

DeleteTrustStoreOutcome WorkSpacesWebClient::DeleteTrustStore(const DeleteTrustStoreRequest& request) const
{
  if (!request.TrustStoreArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTrustStore", "Required field: TrustStoreArn, is not set");
    return DeleteTrustStoreOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustStoreArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/trustStores/");
  uri.AddPathSegments(request.GetTrustStoreArn());
  return DeleteTrustStoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteTrustStoreOutcomeCallable WorkSpacesWebClient::DeleteTrustStoreCallable(const DeleteTrustStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrustStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTrustStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientDeleteTrustStoreAsyncHelper(WorkSpacesWebClient const * const clientThis, const DeleteTrustStoreRequest& request, const DeleteTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTrustStore(request), context);
}

void WorkSpacesWebClient::DeleteTrustStoreAsync(const DeleteTrustStoreRequest& request, const DeleteTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientDeleteTrustStoreAsyncHelper( this, request, handler, context ); } );
}

DeleteUserSettingsOutcome WorkSpacesWebClient::DeleteUserSettings(const DeleteUserSettingsRequest& request) const
{
  if (!request.UserSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUserSettings", "Required field: UserSettingsArn, is not set");
    return DeleteUserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserSettingsArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/userSettings/");
  uri.AddPathSegments(request.GetUserSettingsArn());
  return DeleteUserSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserSettingsOutcomeCallable WorkSpacesWebClient::DeleteUserSettingsCallable(const DeleteUserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientDeleteUserSettingsAsyncHelper(WorkSpacesWebClient const * const clientThis, const DeleteUserSettingsRequest& request, const DeleteUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUserSettings(request), context);
}

void WorkSpacesWebClient::DeleteUserSettingsAsync(const DeleteUserSettingsRequest& request, const DeleteUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientDeleteUserSettingsAsyncHelper( this, request, handler, context ); } );
}

DisassociateBrowserSettingsOutcome WorkSpacesWebClient::DisassociateBrowserSettings(const DisassociateBrowserSettingsRequest& request) const
{
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateBrowserSettings", "Required field: PortalArn, is not set");
    return DisassociateBrowserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/portals/");
  uri.AddPathSegments(request.GetPortalArn());
  uri.AddPathSegments("/browserSettings");
  return DisassociateBrowserSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateBrowserSettingsOutcomeCallable WorkSpacesWebClient::DisassociateBrowserSettingsCallable(const DisassociateBrowserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateBrowserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateBrowserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientDisassociateBrowserSettingsAsyncHelper(WorkSpacesWebClient const * const clientThis, const DisassociateBrowserSettingsRequest& request, const DisassociateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateBrowserSettings(request), context);
}

void WorkSpacesWebClient::DisassociateBrowserSettingsAsync(const DisassociateBrowserSettingsRequest& request, const DisassociateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientDisassociateBrowserSettingsAsyncHelper( this, request, handler, context ); } );
}

DisassociateNetworkSettingsOutcome WorkSpacesWebClient::DisassociateNetworkSettings(const DisassociateNetworkSettingsRequest& request) const
{
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateNetworkSettings", "Required field: PortalArn, is not set");
    return DisassociateNetworkSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/portals/");
  uri.AddPathSegments(request.GetPortalArn());
  uri.AddPathSegments("/networkSettings");
  return DisassociateNetworkSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateNetworkSettingsOutcomeCallable WorkSpacesWebClient::DisassociateNetworkSettingsCallable(const DisassociateNetworkSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateNetworkSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateNetworkSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientDisassociateNetworkSettingsAsyncHelper(WorkSpacesWebClient const * const clientThis, const DisassociateNetworkSettingsRequest& request, const DisassociateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateNetworkSettings(request), context);
}

void WorkSpacesWebClient::DisassociateNetworkSettingsAsync(const DisassociateNetworkSettingsRequest& request, const DisassociateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientDisassociateNetworkSettingsAsyncHelper( this, request, handler, context ); } );
}

DisassociateTrustStoreOutcome WorkSpacesWebClient::DisassociateTrustStore(const DisassociateTrustStoreRequest& request) const
{
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateTrustStore", "Required field: PortalArn, is not set");
    return DisassociateTrustStoreOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/portals/");
  uri.AddPathSegments(request.GetPortalArn());
  uri.AddPathSegments("/trustStores");
  return DisassociateTrustStoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateTrustStoreOutcomeCallable WorkSpacesWebClient::DisassociateTrustStoreCallable(const DisassociateTrustStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateTrustStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateTrustStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientDisassociateTrustStoreAsyncHelper(WorkSpacesWebClient const * const clientThis, const DisassociateTrustStoreRequest& request, const DisassociateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateTrustStore(request), context);
}

void WorkSpacesWebClient::DisassociateTrustStoreAsync(const DisassociateTrustStoreRequest& request, const DisassociateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientDisassociateTrustStoreAsyncHelper( this, request, handler, context ); } );
}

DisassociateUserSettingsOutcome WorkSpacesWebClient::DisassociateUserSettings(const DisassociateUserSettingsRequest& request) const
{
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateUserSettings", "Required field: PortalArn, is not set");
    return DisassociateUserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/portals/");
  uri.AddPathSegments(request.GetPortalArn());
  uri.AddPathSegments("/userSettings");
  return DisassociateUserSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateUserSettingsOutcomeCallable WorkSpacesWebClient::DisassociateUserSettingsCallable(const DisassociateUserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateUserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateUserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientDisassociateUserSettingsAsyncHelper(WorkSpacesWebClient const * const clientThis, const DisassociateUserSettingsRequest& request, const DisassociateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateUserSettings(request), context);
}

void WorkSpacesWebClient::DisassociateUserSettingsAsync(const DisassociateUserSettingsRequest& request, const DisassociateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientDisassociateUserSettingsAsyncHelper( this, request, handler, context ); } );
}

GetBrowserSettingsOutcome WorkSpacesWebClient::GetBrowserSettings(const GetBrowserSettingsRequest& request) const
{
  if (!request.BrowserSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBrowserSettings", "Required field: BrowserSettingsArn, is not set");
    return GetBrowserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrowserSettingsArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/browserSettings/");
  uri.AddPathSegments(request.GetBrowserSettingsArn());
  return GetBrowserSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBrowserSettingsOutcomeCallable WorkSpacesWebClient::GetBrowserSettingsCallable(const GetBrowserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBrowserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBrowserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientGetBrowserSettingsAsyncHelper(WorkSpacesWebClient const * const clientThis, const GetBrowserSettingsRequest& request, const GetBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBrowserSettings(request), context);
}

void WorkSpacesWebClient::GetBrowserSettingsAsync(const GetBrowserSettingsRequest& request, const GetBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientGetBrowserSettingsAsyncHelper( this, request, handler, context ); } );
}

GetIdentityProviderOutcome WorkSpacesWebClient::GetIdentityProvider(const GetIdentityProviderRequest& request) const
{
  if (!request.IdentityProviderArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIdentityProvider", "Required field: IdentityProviderArn, is not set");
    return GetIdentityProviderOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityProviderArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/identityProviders/");
  uri.AddPathSegments(request.GetIdentityProviderArn());
  return GetIdentityProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetIdentityProviderOutcomeCallable WorkSpacesWebClient::GetIdentityProviderCallable(const GetIdentityProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIdentityProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIdentityProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientGetIdentityProviderAsyncHelper(WorkSpacesWebClient const * const clientThis, const GetIdentityProviderRequest& request, const GetIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetIdentityProvider(request), context);
}

void WorkSpacesWebClient::GetIdentityProviderAsync(const GetIdentityProviderRequest& request, const GetIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientGetIdentityProviderAsyncHelper( this, request, handler, context ); } );
}

GetNetworkSettingsOutcome WorkSpacesWebClient::GetNetworkSettings(const GetNetworkSettingsRequest& request) const
{
  if (!request.NetworkSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNetworkSettings", "Required field: NetworkSettingsArn, is not set");
    return GetNetworkSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkSettingsArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/networkSettings/");
  uri.AddPathSegments(request.GetNetworkSettingsArn());
  return GetNetworkSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetNetworkSettingsOutcomeCallable WorkSpacesWebClient::GetNetworkSettingsCallable(const GetNetworkSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNetworkSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNetworkSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientGetNetworkSettingsAsyncHelper(WorkSpacesWebClient const * const clientThis, const GetNetworkSettingsRequest& request, const GetNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetNetworkSettings(request), context);
}

void WorkSpacesWebClient::GetNetworkSettingsAsync(const GetNetworkSettingsRequest& request, const GetNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientGetNetworkSettingsAsyncHelper( this, request, handler, context ); } );
}

GetPortalOutcome WorkSpacesWebClient::GetPortal(const GetPortalRequest& request) const
{
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPortal", "Required field: PortalArn, is not set");
    return GetPortalOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/portals/");
  uri.AddPathSegments(request.GetPortalArn());
  return GetPortalOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPortalOutcomeCallable WorkSpacesWebClient::GetPortalCallable(const GetPortalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPortalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPortal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientGetPortalAsyncHelper(WorkSpacesWebClient const * const clientThis, const GetPortalRequest& request, const GetPortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPortal(request), context);
}

void WorkSpacesWebClient::GetPortalAsync(const GetPortalRequest& request, const GetPortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientGetPortalAsyncHelper( this, request, handler, context ); } );
}

GetPortalServiceProviderMetadataOutcome WorkSpacesWebClient::GetPortalServiceProviderMetadata(const GetPortalServiceProviderMetadataRequest& request) const
{
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPortalServiceProviderMetadata", "Required field: PortalArn, is not set");
    return GetPortalServiceProviderMetadataOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/portalIdp/");
  uri.AddPathSegments(request.GetPortalArn());
  return GetPortalServiceProviderMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPortalServiceProviderMetadataOutcomeCallable WorkSpacesWebClient::GetPortalServiceProviderMetadataCallable(const GetPortalServiceProviderMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPortalServiceProviderMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPortalServiceProviderMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientGetPortalServiceProviderMetadataAsyncHelper(WorkSpacesWebClient const * const clientThis, const GetPortalServiceProviderMetadataRequest& request, const GetPortalServiceProviderMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPortalServiceProviderMetadata(request), context);
}

void WorkSpacesWebClient::GetPortalServiceProviderMetadataAsync(const GetPortalServiceProviderMetadataRequest& request, const GetPortalServiceProviderMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientGetPortalServiceProviderMetadataAsyncHelper( this, request, handler, context ); } );
}

GetTrustStoreOutcome WorkSpacesWebClient::GetTrustStore(const GetTrustStoreRequest& request) const
{
  if (!request.TrustStoreArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTrustStore", "Required field: TrustStoreArn, is not set");
    return GetTrustStoreOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustStoreArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/trustStores/");
  uri.AddPathSegments(request.GetTrustStoreArn());
  return GetTrustStoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTrustStoreOutcomeCallable WorkSpacesWebClient::GetTrustStoreCallable(const GetTrustStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTrustStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTrustStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientGetTrustStoreAsyncHelper(WorkSpacesWebClient const * const clientThis, const GetTrustStoreRequest& request, const GetTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTrustStore(request), context);
}

void WorkSpacesWebClient::GetTrustStoreAsync(const GetTrustStoreRequest& request, const GetTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientGetTrustStoreAsyncHelper( this, request, handler, context ); } );
}

GetTrustStoreCertificateOutcome WorkSpacesWebClient::GetTrustStoreCertificate(const GetTrustStoreCertificateRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/trustStores/");
  uri.AddPathSegments(request.GetTrustStoreArn());
  uri.AddPathSegments("/certificate");
  return GetTrustStoreCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTrustStoreCertificateOutcomeCallable WorkSpacesWebClient::GetTrustStoreCertificateCallable(const GetTrustStoreCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTrustStoreCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTrustStoreCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientGetTrustStoreCertificateAsyncHelper(WorkSpacesWebClient const * const clientThis, const GetTrustStoreCertificateRequest& request, const GetTrustStoreCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTrustStoreCertificate(request), context);
}

void WorkSpacesWebClient::GetTrustStoreCertificateAsync(const GetTrustStoreCertificateRequest& request, const GetTrustStoreCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientGetTrustStoreCertificateAsyncHelper( this, request, handler, context ); } );
}

GetUserSettingsOutcome WorkSpacesWebClient::GetUserSettings(const GetUserSettingsRequest& request) const
{
  if (!request.UserSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUserSettings", "Required field: UserSettingsArn, is not set");
    return GetUserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserSettingsArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/userSettings/");
  uri.AddPathSegments(request.GetUserSettingsArn());
  return GetUserSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetUserSettingsOutcomeCallable WorkSpacesWebClient::GetUserSettingsCallable(const GetUserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientGetUserSettingsAsyncHelper(WorkSpacesWebClient const * const clientThis, const GetUserSettingsRequest& request, const GetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetUserSettings(request), context);
}

void WorkSpacesWebClient::GetUserSettingsAsync(const GetUserSettingsRequest& request, const GetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientGetUserSettingsAsyncHelper( this, request, handler, context ); } );
}

ListBrowserSettingsOutcome WorkSpacesWebClient::ListBrowserSettings(const ListBrowserSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/browserSettings");
  return ListBrowserSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBrowserSettingsOutcomeCallable WorkSpacesWebClient::ListBrowserSettingsCallable(const ListBrowserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBrowserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBrowserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientListBrowserSettingsAsyncHelper(WorkSpacesWebClient const * const clientThis, const ListBrowserSettingsRequest& request, const ListBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListBrowserSettings(request), context);
}

void WorkSpacesWebClient::ListBrowserSettingsAsync(const ListBrowserSettingsRequest& request, const ListBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientListBrowserSettingsAsyncHelper( this, request, handler, context ); } );
}

ListIdentityProvidersOutcome WorkSpacesWebClient::ListIdentityProviders(const ListIdentityProvidersRequest& request) const
{
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIdentityProviders", "Required field: PortalArn, is not set");
    return ListIdentityProvidersOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/portals/");
  uri.AddPathSegments(request.GetPortalArn());
  uri.AddPathSegments("/identityProviders");
  return ListIdentityProvidersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIdentityProvidersOutcomeCallable WorkSpacesWebClient::ListIdentityProvidersCallable(const ListIdentityProvidersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIdentityProvidersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIdentityProviders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientListIdentityProvidersAsyncHelper(WorkSpacesWebClient const * const clientThis, const ListIdentityProvidersRequest& request, const ListIdentityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListIdentityProviders(request), context);
}

void WorkSpacesWebClient::ListIdentityProvidersAsync(const ListIdentityProvidersRequest& request, const ListIdentityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientListIdentityProvidersAsyncHelper( this, request, handler, context ); } );
}

ListNetworkSettingsOutcome WorkSpacesWebClient::ListNetworkSettings(const ListNetworkSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/networkSettings");
  return ListNetworkSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListNetworkSettingsOutcomeCallable WorkSpacesWebClient::ListNetworkSettingsCallable(const ListNetworkSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNetworkSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNetworkSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientListNetworkSettingsAsyncHelper(WorkSpacesWebClient const * const clientThis, const ListNetworkSettingsRequest& request, const ListNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListNetworkSettings(request), context);
}

void WorkSpacesWebClient::ListNetworkSettingsAsync(const ListNetworkSettingsRequest& request, const ListNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientListNetworkSettingsAsyncHelper( this, request, handler, context ); } );
}

ListPortalsOutcome WorkSpacesWebClient::ListPortals(const ListPortalsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/portals");
  return ListPortalsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPortalsOutcomeCallable WorkSpacesWebClient::ListPortalsCallable(const ListPortalsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPortalsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPortals(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientListPortalsAsyncHelper(WorkSpacesWebClient const * const clientThis, const ListPortalsRequest& request, const ListPortalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPortals(request), context);
}

void WorkSpacesWebClient::ListPortalsAsync(const ListPortalsRequest& request, const ListPortalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientListPortalsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome WorkSpacesWebClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegments(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable WorkSpacesWebClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientListTagsForResourceAsyncHelper(WorkSpacesWebClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void WorkSpacesWebClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListTrustStoreCertificatesOutcome WorkSpacesWebClient::ListTrustStoreCertificates(const ListTrustStoreCertificatesRequest& request) const
{
  if (!request.TrustStoreArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTrustStoreCertificates", "Required field: TrustStoreArn, is not set");
    return ListTrustStoreCertificatesOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustStoreArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/trustStores/");
  uri.AddPathSegments(request.GetTrustStoreArn());
  uri.AddPathSegments("/certificates");
  return ListTrustStoreCertificatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTrustStoreCertificatesOutcomeCallable WorkSpacesWebClient::ListTrustStoreCertificatesCallable(const ListTrustStoreCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrustStoreCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrustStoreCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientListTrustStoreCertificatesAsyncHelper(WorkSpacesWebClient const * const clientThis, const ListTrustStoreCertificatesRequest& request, const ListTrustStoreCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTrustStoreCertificates(request), context);
}

void WorkSpacesWebClient::ListTrustStoreCertificatesAsync(const ListTrustStoreCertificatesRequest& request, const ListTrustStoreCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientListTrustStoreCertificatesAsyncHelper( this, request, handler, context ); } );
}

ListTrustStoresOutcome WorkSpacesWebClient::ListTrustStores(const ListTrustStoresRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/trustStores");
  return ListTrustStoresOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTrustStoresOutcomeCallable WorkSpacesWebClient::ListTrustStoresCallable(const ListTrustStoresRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrustStoresOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrustStores(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientListTrustStoresAsyncHelper(WorkSpacesWebClient const * const clientThis, const ListTrustStoresRequest& request, const ListTrustStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTrustStores(request), context);
}

void WorkSpacesWebClient::ListTrustStoresAsync(const ListTrustStoresRequest& request, const ListTrustStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientListTrustStoresAsyncHelper( this, request, handler, context ); } );
}

ListUserSettingsOutcome WorkSpacesWebClient::ListUserSettings(const ListUserSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/userSettings");
  return ListUserSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListUserSettingsOutcomeCallable WorkSpacesWebClient::ListUserSettingsCallable(const ListUserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientListUserSettingsAsyncHelper(WorkSpacesWebClient const * const clientThis, const ListUserSettingsRequest& request, const ListUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListUserSettings(request), context);
}

void WorkSpacesWebClient::ListUserSettingsAsync(const ListUserSettingsRequest& request, const ListUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientListUserSettingsAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome WorkSpacesWebClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegments(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable WorkSpacesWebClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientTagResourceAsyncHelper(WorkSpacesWebClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void WorkSpacesWebClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome WorkSpacesWebClient::UntagResource(const UntagResourceRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegments(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable WorkSpacesWebClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientUntagResourceAsyncHelper(WorkSpacesWebClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void WorkSpacesWebClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateBrowserSettingsOutcome WorkSpacesWebClient::UpdateBrowserSettings(const UpdateBrowserSettingsRequest& request) const
{
  if (!request.BrowserSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBrowserSettings", "Required field: BrowserSettingsArn, is not set");
    return UpdateBrowserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrowserSettingsArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/browserSettings/");
  uri.AddPathSegments(request.GetBrowserSettingsArn());
  return UpdateBrowserSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateBrowserSettingsOutcomeCallable WorkSpacesWebClient::UpdateBrowserSettingsCallable(const UpdateBrowserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBrowserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBrowserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientUpdateBrowserSettingsAsyncHelper(WorkSpacesWebClient const * const clientThis, const UpdateBrowserSettingsRequest& request, const UpdateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateBrowserSettings(request), context);
}

void WorkSpacesWebClient::UpdateBrowserSettingsAsync(const UpdateBrowserSettingsRequest& request, const UpdateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientUpdateBrowserSettingsAsyncHelper( this, request, handler, context ); } );
}

UpdateIdentityProviderOutcome WorkSpacesWebClient::UpdateIdentityProvider(const UpdateIdentityProviderRequest& request) const
{
  if (!request.IdentityProviderArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIdentityProvider", "Required field: IdentityProviderArn, is not set");
    return UpdateIdentityProviderOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityProviderArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/identityProviders/");
  uri.AddPathSegments(request.GetIdentityProviderArn());
  return UpdateIdentityProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateIdentityProviderOutcomeCallable WorkSpacesWebClient::UpdateIdentityProviderCallable(const UpdateIdentityProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIdentityProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIdentityProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientUpdateIdentityProviderAsyncHelper(WorkSpacesWebClient const * const clientThis, const UpdateIdentityProviderRequest& request, const UpdateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateIdentityProvider(request), context);
}

void WorkSpacesWebClient::UpdateIdentityProviderAsync(const UpdateIdentityProviderRequest& request, const UpdateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientUpdateIdentityProviderAsyncHelper( this, request, handler, context ); } );
}

UpdateNetworkSettingsOutcome WorkSpacesWebClient::UpdateNetworkSettings(const UpdateNetworkSettingsRequest& request) const
{
  if (!request.NetworkSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateNetworkSettings", "Required field: NetworkSettingsArn, is not set");
    return UpdateNetworkSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkSettingsArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/networkSettings/");
  uri.AddPathSegments(request.GetNetworkSettingsArn());
  return UpdateNetworkSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateNetworkSettingsOutcomeCallable WorkSpacesWebClient::UpdateNetworkSettingsCallable(const UpdateNetworkSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNetworkSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNetworkSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientUpdateNetworkSettingsAsyncHelper(WorkSpacesWebClient const * const clientThis, const UpdateNetworkSettingsRequest& request, const UpdateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateNetworkSettings(request), context);
}

void WorkSpacesWebClient::UpdateNetworkSettingsAsync(const UpdateNetworkSettingsRequest& request, const UpdateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientUpdateNetworkSettingsAsyncHelper( this, request, handler, context ); } );
}

UpdatePortalOutcome WorkSpacesWebClient::UpdatePortal(const UpdatePortalRequest& request) const
{
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePortal", "Required field: PortalArn, is not set");
    return UpdatePortalOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/portals/");
  uri.AddPathSegments(request.GetPortalArn());
  return UpdatePortalOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePortalOutcomeCallable WorkSpacesWebClient::UpdatePortalCallable(const UpdatePortalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePortalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePortal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientUpdatePortalAsyncHelper(WorkSpacesWebClient const * const clientThis, const UpdatePortalRequest& request, const UpdatePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePortal(request), context);
}

void WorkSpacesWebClient::UpdatePortalAsync(const UpdatePortalRequest& request, const UpdatePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientUpdatePortalAsyncHelper( this, request, handler, context ); } );
}

UpdateTrustStoreOutcome WorkSpacesWebClient::UpdateTrustStore(const UpdateTrustStoreRequest& request) const
{
  if (!request.TrustStoreArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTrustStore", "Required field: TrustStoreArn, is not set");
    return UpdateTrustStoreOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustStoreArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/trustStores/");
  uri.AddPathSegments(request.GetTrustStoreArn());
  return UpdateTrustStoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateTrustStoreOutcomeCallable WorkSpacesWebClient::UpdateTrustStoreCallable(const UpdateTrustStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTrustStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTrustStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientUpdateTrustStoreAsyncHelper(WorkSpacesWebClient const * const clientThis, const UpdateTrustStoreRequest& request, const UpdateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTrustStore(request), context);
}

void WorkSpacesWebClient::UpdateTrustStoreAsync(const UpdateTrustStoreRequest& request, const UpdateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientUpdateTrustStoreAsyncHelper( this, request, handler, context ); } );
}

UpdateUserSettingsOutcome WorkSpacesWebClient::UpdateUserSettings(const UpdateUserSettingsRequest& request) const
{
  if (!request.UserSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUserSettings", "Required field: UserSettingsArn, is not set");
    return UpdateUserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserSettingsArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/userSettings/");
  uri.AddPathSegments(request.GetUserSettingsArn());
  return UpdateUserSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserSettingsOutcomeCallable WorkSpacesWebClient::UpdateUserSettingsCallable(const UpdateUserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesWebClientUpdateUserSettingsAsyncHelper(WorkSpacesWebClient const * const clientThis, const UpdateUserSettingsRequest& request, const UpdateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateUserSettings(request), context);
}

void WorkSpacesWebClient::UpdateUserSettingsAsync(const UpdateUserSettingsRequest& request, const UpdateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesWebClientUpdateUserSettingsAsyncHelper( this, request, handler, context ); } );
}

