/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/WorkSpacesWebErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces-web/model/AssociateBrowserSettingsResult.h>
#include <aws/workspaces-web/model/AssociateNetworkSettingsResult.h>
#include <aws/workspaces-web/model/AssociateTrustStoreResult.h>
#include <aws/workspaces-web/model/AssociateUserSettingsResult.h>
#include <aws/workspaces-web/model/CreateBrowserSettingsResult.h>
#include <aws/workspaces-web/model/CreateIdentityProviderResult.h>
#include <aws/workspaces-web/model/CreateNetworkSettingsResult.h>
#include <aws/workspaces-web/model/CreatePortalResult.h>
#include <aws/workspaces-web/model/CreateTrustStoreResult.h>
#include <aws/workspaces-web/model/CreateUserSettingsResult.h>
#include <aws/workspaces-web/model/DeleteBrowserSettingsResult.h>
#include <aws/workspaces-web/model/DeleteIdentityProviderResult.h>
#include <aws/workspaces-web/model/DeleteNetworkSettingsResult.h>
#include <aws/workspaces-web/model/DeletePortalResult.h>
#include <aws/workspaces-web/model/DeleteTrustStoreResult.h>
#include <aws/workspaces-web/model/DeleteUserSettingsResult.h>
#include <aws/workspaces-web/model/DisassociateBrowserSettingsResult.h>
#include <aws/workspaces-web/model/DisassociateNetworkSettingsResult.h>
#include <aws/workspaces-web/model/DisassociateTrustStoreResult.h>
#include <aws/workspaces-web/model/DisassociateUserSettingsResult.h>
#include <aws/workspaces-web/model/GetBrowserSettingsResult.h>
#include <aws/workspaces-web/model/GetIdentityProviderResult.h>
#include <aws/workspaces-web/model/GetNetworkSettingsResult.h>
#include <aws/workspaces-web/model/GetPortalResult.h>
#include <aws/workspaces-web/model/GetPortalServiceProviderMetadataResult.h>
#include <aws/workspaces-web/model/GetTrustStoreResult.h>
#include <aws/workspaces-web/model/GetTrustStoreCertificateResult.h>
#include <aws/workspaces-web/model/GetUserSettingsResult.h>
#include <aws/workspaces-web/model/ListBrowserSettingsResult.h>
#include <aws/workspaces-web/model/ListIdentityProvidersResult.h>
#include <aws/workspaces-web/model/ListNetworkSettingsResult.h>
#include <aws/workspaces-web/model/ListPortalsResult.h>
#include <aws/workspaces-web/model/ListTagsForResourceResult.h>
#include <aws/workspaces-web/model/ListTrustStoreCertificatesResult.h>
#include <aws/workspaces-web/model/ListTrustStoresResult.h>
#include <aws/workspaces-web/model/ListUserSettingsResult.h>
#include <aws/workspaces-web/model/TagResourceResult.h>
#include <aws/workspaces-web/model/UntagResourceResult.h>
#include <aws/workspaces-web/model/UpdateBrowserSettingsResult.h>
#include <aws/workspaces-web/model/UpdateIdentityProviderResult.h>
#include <aws/workspaces-web/model/UpdateNetworkSettingsResult.h>
#include <aws/workspaces-web/model/UpdatePortalResult.h>
#include <aws/workspaces-web/model/UpdateTrustStoreResult.h>
#include <aws/workspaces-web/model/UpdateUserSettingsResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace WorkSpacesWeb
{

namespace Model
{
        class AssociateBrowserSettingsRequest;
        class AssociateNetworkSettingsRequest;
        class AssociateTrustStoreRequest;
        class AssociateUserSettingsRequest;
        class CreateBrowserSettingsRequest;
        class CreateIdentityProviderRequest;
        class CreateNetworkSettingsRequest;
        class CreatePortalRequest;
        class CreateTrustStoreRequest;
        class CreateUserSettingsRequest;
        class DeleteBrowserSettingsRequest;
        class DeleteIdentityProviderRequest;
        class DeleteNetworkSettingsRequest;
        class DeletePortalRequest;
        class DeleteTrustStoreRequest;
        class DeleteUserSettingsRequest;
        class DisassociateBrowserSettingsRequest;
        class DisassociateNetworkSettingsRequest;
        class DisassociateTrustStoreRequest;
        class DisassociateUserSettingsRequest;
        class GetBrowserSettingsRequest;
        class GetIdentityProviderRequest;
        class GetNetworkSettingsRequest;
        class GetPortalRequest;
        class GetPortalServiceProviderMetadataRequest;
        class GetTrustStoreRequest;
        class GetTrustStoreCertificateRequest;
        class GetUserSettingsRequest;
        class ListBrowserSettingsRequest;
        class ListIdentityProvidersRequest;
        class ListNetworkSettingsRequest;
        class ListPortalsRequest;
        class ListTagsForResourceRequest;
        class ListTrustStoreCertificatesRequest;
        class ListTrustStoresRequest;
        class ListUserSettingsRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateBrowserSettingsRequest;
        class UpdateIdentityProviderRequest;
        class UpdateNetworkSettingsRequest;
        class UpdatePortalRequest;
        class UpdateTrustStoreRequest;
        class UpdateUserSettingsRequest;

        typedef Aws::Utils::Outcome<AssociateBrowserSettingsResult, WorkSpacesWebError> AssociateBrowserSettingsOutcome;
        typedef Aws::Utils::Outcome<AssociateNetworkSettingsResult, WorkSpacesWebError> AssociateNetworkSettingsOutcome;
        typedef Aws::Utils::Outcome<AssociateTrustStoreResult, WorkSpacesWebError> AssociateTrustStoreOutcome;
        typedef Aws::Utils::Outcome<AssociateUserSettingsResult, WorkSpacesWebError> AssociateUserSettingsOutcome;
        typedef Aws::Utils::Outcome<CreateBrowserSettingsResult, WorkSpacesWebError> CreateBrowserSettingsOutcome;
        typedef Aws::Utils::Outcome<CreateIdentityProviderResult, WorkSpacesWebError> CreateIdentityProviderOutcome;
        typedef Aws::Utils::Outcome<CreateNetworkSettingsResult, WorkSpacesWebError> CreateNetworkSettingsOutcome;
        typedef Aws::Utils::Outcome<CreatePortalResult, WorkSpacesWebError> CreatePortalOutcome;
        typedef Aws::Utils::Outcome<CreateTrustStoreResult, WorkSpacesWebError> CreateTrustStoreOutcome;
        typedef Aws::Utils::Outcome<CreateUserSettingsResult, WorkSpacesWebError> CreateUserSettingsOutcome;
        typedef Aws::Utils::Outcome<DeleteBrowserSettingsResult, WorkSpacesWebError> DeleteBrowserSettingsOutcome;
        typedef Aws::Utils::Outcome<DeleteIdentityProviderResult, WorkSpacesWebError> DeleteIdentityProviderOutcome;
        typedef Aws::Utils::Outcome<DeleteNetworkSettingsResult, WorkSpacesWebError> DeleteNetworkSettingsOutcome;
        typedef Aws::Utils::Outcome<DeletePortalResult, WorkSpacesWebError> DeletePortalOutcome;
        typedef Aws::Utils::Outcome<DeleteTrustStoreResult, WorkSpacesWebError> DeleteTrustStoreOutcome;
        typedef Aws::Utils::Outcome<DeleteUserSettingsResult, WorkSpacesWebError> DeleteUserSettingsOutcome;
        typedef Aws::Utils::Outcome<DisassociateBrowserSettingsResult, WorkSpacesWebError> DisassociateBrowserSettingsOutcome;
        typedef Aws::Utils::Outcome<DisassociateNetworkSettingsResult, WorkSpacesWebError> DisassociateNetworkSettingsOutcome;
        typedef Aws::Utils::Outcome<DisassociateTrustStoreResult, WorkSpacesWebError> DisassociateTrustStoreOutcome;
        typedef Aws::Utils::Outcome<DisassociateUserSettingsResult, WorkSpacesWebError> DisassociateUserSettingsOutcome;
        typedef Aws::Utils::Outcome<GetBrowserSettingsResult, WorkSpacesWebError> GetBrowserSettingsOutcome;
        typedef Aws::Utils::Outcome<GetIdentityProviderResult, WorkSpacesWebError> GetIdentityProviderOutcome;
        typedef Aws::Utils::Outcome<GetNetworkSettingsResult, WorkSpacesWebError> GetNetworkSettingsOutcome;
        typedef Aws::Utils::Outcome<GetPortalResult, WorkSpacesWebError> GetPortalOutcome;
        typedef Aws::Utils::Outcome<GetPortalServiceProviderMetadataResult, WorkSpacesWebError> GetPortalServiceProviderMetadataOutcome;
        typedef Aws::Utils::Outcome<GetTrustStoreResult, WorkSpacesWebError> GetTrustStoreOutcome;
        typedef Aws::Utils::Outcome<GetTrustStoreCertificateResult, WorkSpacesWebError> GetTrustStoreCertificateOutcome;
        typedef Aws::Utils::Outcome<GetUserSettingsResult, WorkSpacesWebError> GetUserSettingsOutcome;
        typedef Aws::Utils::Outcome<ListBrowserSettingsResult, WorkSpacesWebError> ListBrowserSettingsOutcome;
        typedef Aws::Utils::Outcome<ListIdentityProvidersResult, WorkSpacesWebError> ListIdentityProvidersOutcome;
        typedef Aws::Utils::Outcome<ListNetworkSettingsResult, WorkSpacesWebError> ListNetworkSettingsOutcome;
        typedef Aws::Utils::Outcome<ListPortalsResult, WorkSpacesWebError> ListPortalsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, WorkSpacesWebError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTrustStoreCertificatesResult, WorkSpacesWebError> ListTrustStoreCertificatesOutcome;
        typedef Aws::Utils::Outcome<ListTrustStoresResult, WorkSpacesWebError> ListTrustStoresOutcome;
        typedef Aws::Utils::Outcome<ListUserSettingsResult, WorkSpacesWebError> ListUserSettingsOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, WorkSpacesWebError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, WorkSpacesWebError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateBrowserSettingsResult, WorkSpacesWebError> UpdateBrowserSettingsOutcome;
        typedef Aws::Utils::Outcome<UpdateIdentityProviderResult, WorkSpacesWebError> UpdateIdentityProviderOutcome;
        typedef Aws::Utils::Outcome<UpdateNetworkSettingsResult, WorkSpacesWebError> UpdateNetworkSettingsOutcome;
        typedef Aws::Utils::Outcome<UpdatePortalResult, WorkSpacesWebError> UpdatePortalOutcome;
        typedef Aws::Utils::Outcome<UpdateTrustStoreResult, WorkSpacesWebError> UpdateTrustStoreOutcome;
        typedef Aws::Utils::Outcome<UpdateUserSettingsResult, WorkSpacesWebError> UpdateUserSettingsOutcome;

        typedef std::future<AssociateBrowserSettingsOutcome> AssociateBrowserSettingsOutcomeCallable;
        typedef std::future<AssociateNetworkSettingsOutcome> AssociateNetworkSettingsOutcomeCallable;
        typedef std::future<AssociateTrustStoreOutcome> AssociateTrustStoreOutcomeCallable;
        typedef std::future<AssociateUserSettingsOutcome> AssociateUserSettingsOutcomeCallable;
        typedef std::future<CreateBrowserSettingsOutcome> CreateBrowserSettingsOutcomeCallable;
        typedef std::future<CreateIdentityProviderOutcome> CreateIdentityProviderOutcomeCallable;
        typedef std::future<CreateNetworkSettingsOutcome> CreateNetworkSettingsOutcomeCallable;
        typedef std::future<CreatePortalOutcome> CreatePortalOutcomeCallable;
        typedef std::future<CreateTrustStoreOutcome> CreateTrustStoreOutcomeCallable;
        typedef std::future<CreateUserSettingsOutcome> CreateUserSettingsOutcomeCallable;
        typedef std::future<DeleteBrowserSettingsOutcome> DeleteBrowserSettingsOutcomeCallable;
        typedef std::future<DeleteIdentityProviderOutcome> DeleteIdentityProviderOutcomeCallable;
        typedef std::future<DeleteNetworkSettingsOutcome> DeleteNetworkSettingsOutcomeCallable;
        typedef std::future<DeletePortalOutcome> DeletePortalOutcomeCallable;
        typedef std::future<DeleteTrustStoreOutcome> DeleteTrustStoreOutcomeCallable;
        typedef std::future<DeleteUserSettingsOutcome> DeleteUserSettingsOutcomeCallable;
        typedef std::future<DisassociateBrowserSettingsOutcome> DisassociateBrowserSettingsOutcomeCallable;
        typedef std::future<DisassociateNetworkSettingsOutcome> DisassociateNetworkSettingsOutcomeCallable;
        typedef std::future<DisassociateTrustStoreOutcome> DisassociateTrustStoreOutcomeCallable;
        typedef std::future<DisassociateUserSettingsOutcome> DisassociateUserSettingsOutcomeCallable;
        typedef std::future<GetBrowserSettingsOutcome> GetBrowserSettingsOutcomeCallable;
        typedef std::future<GetIdentityProviderOutcome> GetIdentityProviderOutcomeCallable;
        typedef std::future<GetNetworkSettingsOutcome> GetNetworkSettingsOutcomeCallable;
        typedef std::future<GetPortalOutcome> GetPortalOutcomeCallable;
        typedef std::future<GetPortalServiceProviderMetadataOutcome> GetPortalServiceProviderMetadataOutcomeCallable;
        typedef std::future<GetTrustStoreOutcome> GetTrustStoreOutcomeCallable;
        typedef std::future<GetTrustStoreCertificateOutcome> GetTrustStoreCertificateOutcomeCallable;
        typedef std::future<GetUserSettingsOutcome> GetUserSettingsOutcomeCallable;
        typedef std::future<ListBrowserSettingsOutcome> ListBrowserSettingsOutcomeCallable;
        typedef std::future<ListIdentityProvidersOutcome> ListIdentityProvidersOutcomeCallable;
        typedef std::future<ListNetworkSettingsOutcome> ListNetworkSettingsOutcomeCallable;
        typedef std::future<ListPortalsOutcome> ListPortalsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListTrustStoreCertificatesOutcome> ListTrustStoreCertificatesOutcomeCallable;
        typedef std::future<ListTrustStoresOutcome> ListTrustStoresOutcomeCallable;
        typedef std::future<ListUserSettingsOutcome> ListUserSettingsOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateBrowserSettingsOutcome> UpdateBrowserSettingsOutcomeCallable;
        typedef std::future<UpdateIdentityProviderOutcome> UpdateIdentityProviderOutcomeCallable;
        typedef std::future<UpdateNetworkSettingsOutcome> UpdateNetworkSettingsOutcomeCallable;
        typedef std::future<UpdatePortalOutcome> UpdatePortalOutcomeCallable;
        typedef std::future<UpdateTrustStoreOutcome> UpdateTrustStoreOutcomeCallable;
        typedef std::future<UpdateUserSettingsOutcome> UpdateUserSettingsOutcomeCallable;
} // namespace Model

  class WorkSpacesWebClient;

    typedef std::function<void(const WorkSpacesWebClient*, const Model::AssociateBrowserSettingsRequest&, const Model::AssociateBrowserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateBrowserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::AssociateNetworkSettingsRequest&, const Model::AssociateNetworkSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateNetworkSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::AssociateTrustStoreRequest&, const Model::AssociateTrustStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateTrustStoreResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::AssociateUserSettingsRequest&, const Model::AssociateUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateUserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::CreateBrowserSettingsRequest&, const Model::CreateBrowserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBrowserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::CreateIdentityProviderRequest&, const Model::CreateIdentityProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIdentityProviderResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::CreateNetworkSettingsRequest&, const Model::CreateNetworkSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNetworkSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::CreatePortalRequest&, const Model::CreatePortalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePortalResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::CreateTrustStoreRequest&, const Model::CreateTrustStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrustStoreResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::CreateUserSettingsRequest&, const Model::CreateUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DeleteBrowserSettingsRequest&, const Model::DeleteBrowserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBrowserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DeleteIdentityProviderRequest&, const Model::DeleteIdentityProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIdentityProviderResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DeleteNetworkSettingsRequest&, const Model::DeleteNetworkSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNetworkSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DeletePortalRequest&, const Model::DeletePortalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePortalResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DeleteTrustStoreRequest&, const Model::DeleteTrustStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrustStoreResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DeleteUserSettingsRequest&, const Model::DeleteUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DisassociateBrowserSettingsRequest&, const Model::DisassociateBrowserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateBrowserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DisassociateNetworkSettingsRequest&, const Model::DisassociateNetworkSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateNetworkSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DisassociateTrustStoreRequest&, const Model::DisassociateTrustStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateTrustStoreResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DisassociateUserSettingsRequest&, const Model::DisassociateUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateUserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::GetBrowserSettingsRequest&, const Model::GetBrowserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBrowserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::GetIdentityProviderRequest&, const Model::GetIdentityProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdentityProviderResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::GetNetworkSettingsRequest&, const Model::GetNetworkSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNetworkSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::GetPortalRequest&, const Model::GetPortalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPortalResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::GetPortalServiceProviderMetadataRequest&, const Model::GetPortalServiceProviderMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPortalServiceProviderMetadataResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::GetTrustStoreRequest&, const Model::GetTrustStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrustStoreResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::GetTrustStoreCertificateRequest&, const Model::GetTrustStoreCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrustStoreCertificateResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::GetUserSettingsRequest&, const Model::GetUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::ListBrowserSettingsRequest&, const Model::ListBrowserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBrowserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::ListIdentityProvidersRequest&, const Model::ListIdentityProvidersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdentityProvidersResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::ListNetworkSettingsRequest&, const Model::ListNetworkSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNetworkSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::ListPortalsRequest&, const Model::ListPortalsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPortalsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::ListTrustStoreCertificatesRequest&, const Model::ListTrustStoreCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrustStoreCertificatesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::ListTrustStoresRequest&, const Model::ListTrustStoresOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrustStoresResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::ListUserSettingsRequest&, const Model::ListUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::UpdateBrowserSettingsRequest&, const Model::UpdateBrowserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBrowserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::UpdateIdentityProviderRequest&, const Model::UpdateIdentityProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIdentityProviderResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::UpdateNetworkSettingsRequest&, const Model::UpdateNetworkSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNetworkSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::UpdatePortalRequest&, const Model::UpdatePortalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePortalResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::UpdateTrustStoreRequest&, const Model::UpdateTrustStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTrustStoreResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::UpdateUserSettingsRequest&, const Model::UpdateUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserSettingsResponseReceivedHandler;

  /**
   * <p>WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to
   * facilitate secure, web-based workloads. WorkSpaces Web makes it easy for
   * customers to safely provide their employees with access to internal websites and
   * SaaS web applications without the administrative burden of appliances or
   * specialized client software. WorkSpaces Web provides simple policy tools
   * tailored for user interactions, while offloading common tasks like capacity
   * management, scaling, and maintaining browser images.</p>
   */
  class AWS_WORKSPACESWEB_API WorkSpacesWebClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesWebClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesWebClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkSpacesWebClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~WorkSpacesWebClient();


        /**
         * <p>Associates a browser settings resource with a web portal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/AssociateBrowserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateBrowserSettingsOutcome AssociateBrowserSettings(const Model::AssociateBrowserSettingsRequest& request) const;

        /**
         * A Callable wrapper for AssociateBrowserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateBrowserSettingsOutcomeCallable AssociateBrowserSettingsCallable(const Model::AssociateBrowserSettingsRequest& request) const;

        /**
         * An Async wrapper for AssociateBrowserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateBrowserSettingsAsync(const Model::AssociateBrowserSettingsRequest& request, const AssociateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a network settings resource with a web portal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/AssociateNetworkSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateNetworkSettingsOutcome AssociateNetworkSettings(const Model::AssociateNetworkSettingsRequest& request) const;

        /**
         * A Callable wrapper for AssociateNetworkSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateNetworkSettingsOutcomeCallable AssociateNetworkSettingsCallable(const Model::AssociateNetworkSettingsRequest& request) const;

        /**
         * An Async wrapper for AssociateNetworkSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateNetworkSettingsAsync(const Model::AssociateNetworkSettingsRequest& request, const AssociateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a trust store with a web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/AssociateTrustStore">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTrustStoreOutcome AssociateTrustStore(const Model::AssociateTrustStoreRequest& request) const;

        /**
         * A Callable wrapper for AssociateTrustStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateTrustStoreOutcomeCallable AssociateTrustStoreCallable(const Model::AssociateTrustStoreRequest& request) const;

        /**
         * An Async wrapper for AssociateTrustStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateTrustStoreAsync(const Model::AssociateTrustStoreRequest& request, const AssociateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a user settings resource with a web portal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/AssociateUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateUserSettingsOutcome AssociateUserSettings(const Model::AssociateUserSettingsRequest& request) const;

        /**
         * A Callable wrapper for AssociateUserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateUserSettingsOutcomeCallable AssociateUserSettingsCallable(const Model::AssociateUserSettingsRequest& request) const;

        /**
         * An Async wrapper for AssociateUserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateUserSettingsAsync(const Model::AssociateUserSettingsRequest& request, const AssociateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a browser settings resource that can be associated with a web portal.
         * Once associated with a web portal, browser settings control how the browser will
         * behave once a user starts a streaming session for the web portal. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/CreateBrowserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBrowserSettingsOutcome CreateBrowserSettings(const Model::CreateBrowserSettingsRequest& request) const;

        /**
         * A Callable wrapper for CreateBrowserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBrowserSettingsOutcomeCallable CreateBrowserSettingsCallable(const Model::CreateBrowserSettingsRequest& request) const;

        /**
         * An Async wrapper for CreateBrowserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBrowserSettingsAsync(const Model::CreateBrowserSettingsRequest& request, const CreateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an identity provider resource that is then associated with a web
         * portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/CreateIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIdentityProviderOutcome CreateIdentityProvider(const Model::CreateIdentityProviderRequest& request) const;

        /**
         * A Callable wrapper for CreateIdentityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIdentityProviderOutcomeCallable CreateIdentityProviderCallable(const Model::CreateIdentityProviderRequest& request) const;

        /**
         * An Async wrapper for CreateIdentityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIdentityProviderAsync(const Model::CreateIdentityProviderRequest& request, const CreateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a network settings resource that can be associated with a web portal.
         * Once associated with a web portal, network settings define how streaming
         * instances will connect with your specified VPC. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/CreateNetworkSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkSettingsOutcome CreateNetworkSettings(const Model::CreateNetworkSettingsRequest& request) const;

        /**
         * A Callable wrapper for CreateNetworkSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNetworkSettingsOutcomeCallable CreateNetworkSettingsCallable(const Model::CreateNetworkSettingsRequest& request) const;

        /**
         * An Async wrapper for CreateNetworkSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNetworkSettingsAsync(const Model::CreateNetworkSettingsRequest& request, const CreateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/CreatePortal">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePortalOutcome CreatePortal(const Model::CreatePortalRequest& request) const;

        /**
         * A Callable wrapper for CreatePortal that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePortalOutcomeCallable CreatePortalCallable(const Model::CreatePortalRequest& request) const;

        /**
         * An Async wrapper for CreatePortal that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePortalAsync(const Model::CreatePortalRequest& request, const CreatePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a trust store that can be associated with a web portal. A trust store
         * contains certificate authority (CA) certificates. Once associated with a web
         * portal, the browser in a streaming session will recognize certificates that have
         * been issued using any of the CAs in the trust store. If your organization has
         * internal websites that use certificates issued by private CAs, you should add
         * the private CA certificate to the trust store. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/CreateTrustStore">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrustStoreOutcome CreateTrustStore(const Model::CreateTrustStoreRequest& request) const;

        /**
         * A Callable wrapper for CreateTrustStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrustStoreOutcomeCallable CreateTrustStoreCallable(const Model::CreateTrustStoreRequest& request) const;

        /**
         * An Async wrapper for CreateTrustStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrustStoreAsync(const Model::CreateTrustStoreRequest& request, const CreateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a user settings resource that can be associated with a web portal.
         * Once associated with a web portal, user settings control how users can transfer
         * data between a streaming session and the their local devices. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/CreateUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserSettingsOutcome CreateUserSettings(const Model::CreateUserSettingsRequest& request) const;

        /**
         * A Callable wrapper for CreateUserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserSettingsOutcomeCallable CreateUserSettingsCallable(const Model::CreateUserSettingsRequest& request) const;

        /**
         * An Async wrapper for CreateUserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserSettingsAsync(const Model::CreateUserSettingsRequest& request, const CreateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes browser settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DeleteBrowserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBrowserSettingsOutcome DeleteBrowserSettings(const Model::DeleteBrowserSettingsRequest& request) const;

        /**
         * A Callable wrapper for DeleteBrowserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBrowserSettingsOutcomeCallable DeleteBrowserSettingsCallable(const Model::DeleteBrowserSettingsRequest& request) const;

        /**
         * An Async wrapper for DeleteBrowserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBrowserSettingsAsync(const Model::DeleteBrowserSettingsRequest& request, const DeleteBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the identity provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DeleteIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIdentityProviderOutcome DeleteIdentityProvider(const Model::DeleteIdentityProviderRequest& request) const;

        /**
         * A Callable wrapper for DeleteIdentityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIdentityProviderOutcomeCallable DeleteIdentityProviderCallable(const Model::DeleteIdentityProviderRequest& request) const;

        /**
         * An Async wrapper for DeleteIdentityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIdentityProviderAsync(const Model::DeleteIdentityProviderRequest& request, const DeleteIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes network settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DeleteNetworkSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkSettingsOutcome DeleteNetworkSettings(const Model::DeleteNetworkSettingsRequest& request) const;

        /**
         * A Callable wrapper for DeleteNetworkSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNetworkSettingsOutcomeCallable DeleteNetworkSettingsCallable(const Model::DeleteNetworkSettingsRequest& request) const;

        /**
         * An Async wrapper for DeleteNetworkSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNetworkSettingsAsync(const Model::DeleteNetworkSettingsRequest& request, const DeleteNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DeletePortal">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePortalOutcome DeletePortal(const Model::DeletePortalRequest& request) const;

        /**
         * A Callable wrapper for DeletePortal that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePortalOutcomeCallable DeletePortalCallable(const Model::DeletePortalRequest& request) const;

        /**
         * An Async wrapper for DeletePortal that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePortalAsync(const Model::DeletePortalRequest& request, const DeletePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the trust store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DeleteTrustStore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrustStoreOutcome DeleteTrustStore(const Model::DeleteTrustStoreRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrustStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrustStoreOutcomeCallable DeleteTrustStoreCallable(const Model::DeleteTrustStoreRequest& request) const;

        /**
         * An Async wrapper for DeleteTrustStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrustStoreAsync(const Model::DeleteTrustStoreRequest& request, const DeleteTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes user settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DeleteUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserSettingsOutcome DeleteUserSettings(const Model::DeleteUserSettingsRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserSettingsOutcomeCallable DeleteUserSettingsCallable(const Model::DeleteUserSettingsRequest& request) const;

        /**
         * An Async wrapper for DeleteUserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserSettingsAsync(const Model::DeleteUserSettingsRequest& request, const DeleteUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates browser settings from a web portal.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DisassociateBrowserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateBrowserSettingsOutcome DisassociateBrowserSettings(const Model::DisassociateBrowserSettingsRequest& request) const;

        /**
         * A Callable wrapper for DisassociateBrowserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateBrowserSettingsOutcomeCallable DisassociateBrowserSettingsCallable(const Model::DisassociateBrowserSettingsRequest& request) const;

        /**
         * An Async wrapper for DisassociateBrowserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateBrowserSettingsAsync(const Model::DisassociateBrowserSettingsRequest& request, const DisassociateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates network settings from a web portal.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DisassociateNetworkSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateNetworkSettingsOutcome DisassociateNetworkSettings(const Model::DisassociateNetworkSettingsRequest& request) const;

        /**
         * A Callable wrapper for DisassociateNetworkSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateNetworkSettingsOutcomeCallable DisassociateNetworkSettingsCallable(const Model::DisassociateNetworkSettingsRequest& request) const;

        /**
         * An Async wrapper for DisassociateNetworkSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateNetworkSettingsAsync(const Model::DisassociateNetworkSettingsRequest& request, const DisassociateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a trust store from a web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DisassociateTrustStore">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTrustStoreOutcome DisassociateTrustStore(const Model::DisassociateTrustStoreRequest& request) const;

        /**
         * A Callable wrapper for DisassociateTrustStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateTrustStoreOutcomeCallable DisassociateTrustStoreCallable(const Model::DisassociateTrustStoreRequest& request) const;

        /**
         * An Async wrapper for DisassociateTrustStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateTrustStoreAsync(const Model::DisassociateTrustStoreRequest& request, const DisassociateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates user settings from a web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DisassociateUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateUserSettingsOutcome DisassociateUserSettings(const Model::DisassociateUserSettingsRequest& request) const;

        /**
         * A Callable wrapper for DisassociateUserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateUserSettingsOutcomeCallable DisassociateUserSettingsCallable(const Model::DisassociateUserSettingsRequest& request) const;

        /**
         * An Async wrapper for DisassociateUserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateUserSettingsAsync(const Model::DisassociateUserSettingsRequest& request, const DisassociateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets browser settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetBrowserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBrowserSettingsOutcome GetBrowserSettings(const Model::GetBrowserSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetBrowserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBrowserSettingsOutcomeCallable GetBrowserSettingsCallable(const Model::GetBrowserSettingsRequest& request) const;

        /**
         * An Async wrapper for GetBrowserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBrowserSettingsAsync(const Model::GetBrowserSettingsRequest& request, const GetBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the identity provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityProviderOutcome GetIdentityProvider(const Model::GetIdentityProviderRequest& request) const;

        /**
         * A Callable wrapper for GetIdentityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIdentityProviderOutcomeCallable GetIdentityProviderCallable(const Model::GetIdentityProviderRequest& request) const;

        /**
         * An Async wrapper for GetIdentityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIdentityProviderAsync(const Model::GetIdentityProviderRequest& request, const GetIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the network settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetNetworkSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkSettingsOutcome GetNetworkSettings(const Model::GetNetworkSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetNetworkSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNetworkSettingsOutcomeCallable GetNetworkSettingsCallable(const Model::GetNetworkSettingsRequest& request) const;

        /**
         * An Async wrapper for GetNetworkSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNetworkSettingsAsync(const Model::GetNetworkSettingsRequest& request, const GetNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetPortal">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPortalOutcome GetPortal(const Model::GetPortalRequest& request) const;

        /**
         * A Callable wrapper for GetPortal that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPortalOutcomeCallable GetPortalCallable(const Model::GetPortalRequest& request) const;

        /**
         * An Async wrapper for GetPortal that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPortalAsync(const Model::GetPortalRequest& request, const GetPortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the service provider metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetPortalServiceProviderMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPortalServiceProviderMetadataOutcome GetPortalServiceProviderMetadata(const Model::GetPortalServiceProviderMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetPortalServiceProviderMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPortalServiceProviderMetadataOutcomeCallable GetPortalServiceProviderMetadataCallable(const Model::GetPortalServiceProviderMetadataRequest& request) const;

        /**
         * An Async wrapper for GetPortalServiceProviderMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPortalServiceProviderMetadataAsync(const Model::GetPortalServiceProviderMetadataRequest& request, const GetPortalServiceProviderMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the trust store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetTrustStore">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrustStoreOutcome GetTrustStore(const Model::GetTrustStoreRequest& request) const;

        /**
         * A Callable wrapper for GetTrustStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTrustStoreOutcomeCallable GetTrustStoreCallable(const Model::GetTrustStoreRequest& request) const;

        /**
         * An Async wrapper for GetTrustStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTrustStoreAsync(const Model::GetTrustStoreRequest& request, const GetTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the trust store certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetTrustStoreCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrustStoreCertificateOutcome GetTrustStoreCertificate(const Model::GetTrustStoreCertificateRequest& request) const;

        /**
         * A Callable wrapper for GetTrustStoreCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTrustStoreCertificateOutcomeCallable GetTrustStoreCertificateCallable(const Model::GetTrustStoreCertificateRequest& request) const;

        /**
         * An Async wrapper for GetTrustStoreCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTrustStoreCertificateAsync(const Model::GetTrustStoreCertificateRequest& request, const GetTrustStoreCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets user settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserSettingsOutcome GetUserSettings(const Model::GetUserSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetUserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserSettingsOutcomeCallable GetUserSettingsCallable(const Model::GetUserSettingsRequest& request) const;

        /**
         * An Async wrapper for GetUserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserSettingsAsync(const Model::GetUserSettingsRequest& request, const GetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of browser settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListBrowserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBrowserSettingsOutcome ListBrowserSettings(const Model::ListBrowserSettingsRequest& request) const;

        /**
         * A Callable wrapper for ListBrowserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBrowserSettingsOutcomeCallable ListBrowserSettingsCallable(const Model::ListBrowserSettingsRequest& request) const;

        /**
         * An Async wrapper for ListBrowserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBrowserSettingsAsync(const Model::ListBrowserSettingsRequest& request, const ListBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of identity providers for a specific web
         * portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListIdentityProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentityProvidersOutcome ListIdentityProviders(const Model::ListIdentityProvidersRequest& request) const;

        /**
         * A Callable wrapper for ListIdentityProviders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIdentityProvidersOutcomeCallable ListIdentityProvidersCallable(const Model::ListIdentityProvidersRequest& request) const;

        /**
         * An Async wrapper for ListIdentityProviders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIdentityProvidersAsync(const Model::ListIdentityProvidersRequest& request, const ListIdentityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of network settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListNetworkSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNetworkSettingsOutcome ListNetworkSettings(const Model::ListNetworkSettingsRequest& request) const;

        /**
         * A Callable wrapper for ListNetworkSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNetworkSettingsOutcomeCallable ListNetworkSettingsCallable(const Model::ListNetworkSettingsRequest& request) const;

        /**
         * An Async wrapper for ListNetworkSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNetworkSettingsAsync(const Model::ListNetworkSettingsRequest& request, const ListNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list or web portals.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListPortals">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPortalsOutcome ListPortals(const Model::ListPortalsRequest& request) const;

        /**
         * A Callable wrapper for ListPortals that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPortalsOutcomeCallable ListPortalsCallable(const Model::ListPortalsRequest& request) const;

        /**
         * An Async wrapper for ListPortals that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPortalsAsync(const Model::ListPortalsRequest& request, const ListPortalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of trust store certificates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListTrustStoreCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrustStoreCertificatesOutcome ListTrustStoreCertificates(const Model::ListTrustStoreCertificatesRequest& request) const;

        /**
         * A Callable wrapper for ListTrustStoreCertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrustStoreCertificatesOutcomeCallable ListTrustStoreCertificatesCallable(const Model::ListTrustStoreCertificatesRequest& request) const;

        /**
         * An Async wrapper for ListTrustStoreCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrustStoreCertificatesAsync(const Model::ListTrustStoreCertificatesRequest& request, const ListTrustStoreCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of trust stores.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListTrustStores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrustStoresOutcome ListTrustStores(const Model::ListTrustStoresRequest& request) const;

        /**
         * A Callable wrapper for ListTrustStores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrustStoresOutcomeCallable ListTrustStoresCallable(const Model::ListTrustStoresRequest& request) const;

        /**
         * An Async wrapper for ListTrustStores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrustStoresAsync(const Model::ListTrustStoresRequest& request, const ListTrustStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of user settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserSettingsOutcome ListUserSettings(const Model::ListUserSettingsRequest& request) const;

        /**
         * A Callable wrapper for ListUserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserSettingsOutcomeCallable ListUserSettingsCallable(const Model::ListUserSettingsRequest& request) const;

        /**
         * An Async wrapper for ListUserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserSettingsAsync(const Model::ListUserSettingsRequest& request, const ListUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates browser settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UpdateBrowserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBrowserSettingsOutcome UpdateBrowserSettings(const Model::UpdateBrowserSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateBrowserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBrowserSettingsOutcomeCallable UpdateBrowserSettingsCallable(const Model::UpdateBrowserSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdateBrowserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBrowserSettingsAsync(const Model::UpdateBrowserSettingsRequest& request, const UpdateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the identity provider. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UpdateIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIdentityProviderOutcome UpdateIdentityProvider(const Model::UpdateIdentityProviderRequest& request) const;

        /**
         * A Callable wrapper for UpdateIdentityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIdentityProviderOutcomeCallable UpdateIdentityProviderCallable(const Model::UpdateIdentityProviderRequest& request) const;

        /**
         * An Async wrapper for UpdateIdentityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIdentityProviderAsync(const Model::UpdateIdentityProviderRequest& request, const UpdateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates network settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UpdateNetworkSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNetworkSettingsOutcome UpdateNetworkSettings(const Model::UpdateNetworkSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateNetworkSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNetworkSettingsOutcomeCallable UpdateNetworkSettingsCallable(const Model::UpdateNetworkSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdateNetworkSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNetworkSettingsAsync(const Model::UpdateNetworkSettingsRequest& request, const UpdateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UpdatePortal">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePortalOutcome UpdatePortal(const Model::UpdatePortalRequest& request) const;

        /**
         * A Callable wrapper for UpdatePortal that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePortalOutcomeCallable UpdatePortalCallable(const Model::UpdatePortalRequest& request) const;

        /**
         * An Async wrapper for UpdatePortal that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePortalAsync(const Model::UpdatePortalRequest& request, const UpdatePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the trust store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UpdateTrustStore">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrustStoreOutcome UpdateTrustStore(const Model::UpdateTrustStoreRequest& request) const;

        /**
         * A Callable wrapper for UpdateTrustStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTrustStoreOutcomeCallable UpdateTrustStoreCallable(const Model::UpdateTrustStoreRequest& request) const;

        /**
         * An Async wrapper for UpdateTrustStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTrustStoreAsync(const Model::UpdateTrustStoreRequest& request, const UpdateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the user settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UpdateUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserSettingsOutcome UpdateUserSettings(const Model::UpdateUserSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserSettingsOutcomeCallable UpdateUserSettingsCallable(const Model::UpdateUserSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdateUserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserSettingsAsync(const Model::UpdateUserSettingsRequest& request, const UpdateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateBrowserSettingsAsyncHelper(const Model::AssociateBrowserSettingsRequest& request, const AssociateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateNetworkSettingsAsyncHelper(const Model::AssociateNetworkSettingsRequest& request, const AssociateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateTrustStoreAsyncHelper(const Model::AssociateTrustStoreRequest& request, const AssociateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateUserSettingsAsyncHelper(const Model::AssociateUserSettingsRequest& request, const AssociateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBrowserSettingsAsyncHelper(const Model::CreateBrowserSettingsRequest& request, const CreateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateIdentityProviderAsyncHelper(const Model::CreateIdentityProviderRequest& request, const CreateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNetworkSettingsAsyncHelper(const Model::CreateNetworkSettingsRequest& request, const CreateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePortalAsyncHelper(const Model::CreatePortalRequest& request, const CreatePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTrustStoreAsyncHelper(const Model::CreateTrustStoreRequest& request, const CreateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserSettingsAsyncHelper(const Model::CreateUserSettingsRequest& request, const CreateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBrowserSettingsAsyncHelper(const Model::DeleteBrowserSettingsRequest& request, const DeleteBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIdentityProviderAsyncHelper(const Model::DeleteIdentityProviderRequest& request, const DeleteIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNetworkSettingsAsyncHelper(const Model::DeleteNetworkSettingsRequest& request, const DeleteNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePortalAsyncHelper(const Model::DeletePortalRequest& request, const DeletePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTrustStoreAsyncHelper(const Model::DeleteTrustStoreRequest& request, const DeleteTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserSettingsAsyncHelper(const Model::DeleteUserSettingsRequest& request, const DeleteUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateBrowserSettingsAsyncHelper(const Model::DisassociateBrowserSettingsRequest& request, const DisassociateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateNetworkSettingsAsyncHelper(const Model::DisassociateNetworkSettingsRequest& request, const DisassociateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateTrustStoreAsyncHelper(const Model::DisassociateTrustStoreRequest& request, const DisassociateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateUserSettingsAsyncHelper(const Model::DisassociateUserSettingsRequest& request, const DisassociateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBrowserSettingsAsyncHelper(const Model::GetBrowserSettingsRequest& request, const GetBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIdentityProviderAsyncHelper(const Model::GetIdentityProviderRequest& request, const GetIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetNetworkSettingsAsyncHelper(const Model::GetNetworkSettingsRequest& request, const GetNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPortalAsyncHelper(const Model::GetPortalRequest& request, const GetPortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPortalServiceProviderMetadataAsyncHelper(const Model::GetPortalServiceProviderMetadataRequest& request, const GetPortalServiceProviderMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTrustStoreAsyncHelper(const Model::GetTrustStoreRequest& request, const GetTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTrustStoreCertificateAsyncHelper(const Model::GetTrustStoreCertificateRequest& request, const GetTrustStoreCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUserSettingsAsyncHelper(const Model::GetUserSettingsRequest& request, const GetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBrowserSettingsAsyncHelper(const Model::ListBrowserSettingsRequest& request, const ListBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIdentityProvidersAsyncHelper(const Model::ListIdentityProvidersRequest& request, const ListIdentityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNetworkSettingsAsyncHelper(const Model::ListNetworkSettingsRequest& request, const ListNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPortalsAsyncHelper(const Model::ListPortalsRequest& request, const ListPortalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTrustStoreCertificatesAsyncHelper(const Model::ListTrustStoreCertificatesRequest& request, const ListTrustStoreCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTrustStoresAsyncHelper(const Model::ListTrustStoresRequest& request, const ListTrustStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUserSettingsAsyncHelper(const Model::ListUserSettingsRequest& request, const ListUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBrowserSettingsAsyncHelper(const Model::UpdateBrowserSettingsRequest& request, const UpdateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateIdentityProviderAsyncHelper(const Model::UpdateIdentityProviderRequest& request, const UpdateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateNetworkSettingsAsyncHelper(const Model::UpdateNetworkSettingsRequest& request, const UpdateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePortalAsyncHelper(const Model::UpdatePortalRequest& request, const UpdatePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTrustStoreAsyncHelper(const Model::UpdateTrustStoreRequest& request, const UpdateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserSettingsAsyncHelper(const Model::UpdateUserSettingsRequest& request, const UpdateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace WorkSpacesWeb
} // namespace Aws
