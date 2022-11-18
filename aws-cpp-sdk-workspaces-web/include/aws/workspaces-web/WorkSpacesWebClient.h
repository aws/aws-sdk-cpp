/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces-web/WorkSpacesWebServiceClientModel.h>
#include <aws/workspaces-web/WorkSpacesWebLegacyAsyncMacros.h>

namespace Aws
{
namespace WorkSpacesWeb
{
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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesWebClient(const Aws::WorkSpacesWeb::WorkSpacesWebClientConfiguration& clientConfiguration = Aws::WorkSpacesWeb::WorkSpacesWebClientConfiguration(),
                            std::shared_ptr<WorkSpacesWebEndpointProviderBase> endpointProvider = Aws::MakeShared<WorkSpacesWebEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesWebClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<WorkSpacesWebEndpointProviderBase> endpointProvider = Aws::MakeShared<WorkSpacesWebEndpointProvider>(ALLOCATION_TAG),
                            const Aws::WorkSpacesWeb::WorkSpacesWebClientConfiguration& clientConfiguration = Aws::WorkSpacesWeb::WorkSpacesWebClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkSpacesWebClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<WorkSpacesWebEndpointProviderBase> endpointProvider = Aws::MakeShared<WorkSpacesWebEndpointProvider>(ALLOCATION_TAG),
                            const Aws::WorkSpacesWeb::WorkSpacesWebClientConfiguration& clientConfiguration = Aws::WorkSpacesWeb::WorkSpacesWebClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesWebClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesWebClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkSpacesWebClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~WorkSpacesWebClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Associates a browser settings resource with a web portal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/AssociateBrowserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateBrowserSettingsOutcome AssociateBrowserSettings(const Model::AssociateBrowserSettingsRequest& request) const;


        /**
         * <p>Associates a network settings resource with a web portal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/AssociateNetworkSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateNetworkSettingsOutcome AssociateNetworkSettings(const Model::AssociateNetworkSettingsRequest& request) const;


        /**
         * <p>Associates a trust store with a web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/AssociateTrustStore">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTrustStoreOutcome AssociateTrustStore(const Model::AssociateTrustStoreRequest& request) const;


        /**
         * <p>Associates a user access logging settings resource with a web
         * portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/AssociateUserAccessLoggingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateUserAccessLoggingSettingsOutcome AssociateUserAccessLoggingSettings(const Model::AssociateUserAccessLoggingSettingsRequest& request) const;


        /**
         * <p>Associates a user settings resource with a web portal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/AssociateUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateUserSettingsOutcome AssociateUserSettings(const Model::AssociateUserSettingsRequest& request) const;


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
         * <p>Creates an identity provider resource that is then associated with a web
         * portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/CreateIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIdentityProviderOutcome CreateIdentityProvider(const Model::CreateIdentityProviderRequest& request) const;


        /**
         * <p>Creates a network settings resource that can be associated with a web portal.
         * Once associated with a web portal, network settings define how streaming
         * instances will connect with your specified VPC. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/CreateNetworkSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkSettingsOutcome CreateNetworkSettings(const Model::CreateNetworkSettingsRequest& request) const;


        /**
         * <p>Creates a web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/CreatePortal">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePortalOutcome CreatePortal(const Model::CreatePortalRequest& request) const;


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
         * <p>Creates a user access logging settings resource that can be associated with a
         * web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/CreateUserAccessLoggingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserAccessLoggingSettingsOutcome CreateUserAccessLoggingSettings(const Model::CreateUserAccessLoggingSettingsRequest& request) const;


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
         * <p>Deletes browser settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DeleteBrowserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBrowserSettingsOutcome DeleteBrowserSettings(const Model::DeleteBrowserSettingsRequest& request) const;


        /**
         * <p>Deletes the identity provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DeleteIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIdentityProviderOutcome DeleteIdentityProvider(const Model::DeleteIdentityProviderRequest& request) const;


        /**
         * <p>Deletes network settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DeleteNetworkSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkSettingsOutcome DeleteNetworkSettings(const Model::DeleteNetworkSettingsRequest& request) const;


        /**
         * <p>Deletes a web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DeletePortal">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePortalOutcome DeletePortal(const Model::DeletePortalRequest& request) const;


        /**
         * <p>Deletes the trust store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DeleteTrustStore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrustStoreOutcome DeleteTrustStore(const Model::DeleteTrustStoreRequest& request) const;


        /**
         * <p>Deletes user access logging settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DeleteUserAccessLoggingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserAccessLoggingSettingsOutcome DeleteUserAccessLoggingSettings(const Model::DeleteUserAccessLoggingSettingsRequest& request) const;


        /**
         * <p>Deletes user settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DeleteUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserSettingsOutcome DeleteUserSettings(const Model::DeleteUserSettingsRequest& request) const;


        /**
         * <p>Disassociates browser settings from a web portal.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DisassociateBrowserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateBrowserSettingsOutcome DisassociateBrowserSettings(const Model::DisassociateBrowserSettingsRequest& request) const;


        /**
         * <p>Disassociates network settings from a web portal.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DisassociateNetworkSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateNetworkSettingsOutcome DisassociateNetworkSettings(const Model::DisassociateNetworkSettingsRequest& request) const;


        /**
         * <p>Disassociates a trust store from a web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DisassociateTrustStore">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTrustStoreOutcome DisassociateTrustStore(const Model::DisassociateTrustStoreRequest& request) const;


        /**
         * <p>Disassociates user access logging settings from a web portal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DisassociateUserAccessLoggingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateUserAccessLoggingSettingsOutcome DisassociateUserAccessLoggingSettings(const Model::DisassociateUserAccessLoggingSettingsRequest& request) const;


        /**
         * <p>Disassociates user settings from a web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DisassociateUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateUserSettingsOutcome DisassociateUserSettings(const Model::DisassociateUserSettingsRequest& request) const;


        /**
         * <p>Gets browser settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetBrowserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBrowserSettingsOutcome GetBrowserSettings(const Model::GetBrowserSettingsRequest& request) const;


        /**
         * <p>Gets the identity provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityProviderOutcome GetIdentityProvider(const Model::GetIdentityProviderRequest& request) const;


        /**
         * <p>Gets the network settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetNetworkSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkSettingsOutcome GetNetworkSettings(const Model::GetNetworkSettingsRequest& request) const;


        /**
         * <p>Gets the web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetPortal">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPortalOutcome GetPortal(const Model::GetPortalRequest& request) const;


        /**
         * <p>Gets the service provider metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetPortalServiceProviderMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPortalServiceProviderMetadataOutcome GetPortalServiceProviderMetadata(const Model::GetPortalServiceProviderMetadataRequest& request) const;


        /**
         * <p>Gets the trust store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetTrustStore">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrustStoreOutcome GetTrustStore(const Model::GetTrustStoreRequest& request) const;


        /**
         * <p>Gets the trust store certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetTrustStoreCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrustStoreCertificateOutcome GetTrustStoreCertificate(const Model::GetTrustStoreCertificateRequest& request) const;


        /**
         * <p>Gets user access logging settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetUserAccessLoggingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserAccessLoggingSettingsOutcome GetUserAccessLoggingSettings(const Model::GetUserAccessLoggingSettingsRequest& request) const;


        /**
         * <p>Gets user settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserSettingsOutcome GetUserSettings(const Model::GetUserSettingsRequest& request) const;


        /**
         * <p>Retrieves a list of browser settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListBrowserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBrowserSettingsOutcome ListBrowserSettings(const Model::ListBrowserSettingsRequest& request) const;


        /**
         * <p>Retrieves a list of identity providers for a specific web
         * portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListIdentityProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentityProvidersOutcome ListIdentityProviders(const Model::ListIdentityProvidersRequest& request) const;


        /**
         * <p>Retrieves a list of network settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListNetworkSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNetworkSettingsOutcome ListNetworkSettings(const Model::ListNetworkSettingsRequest& request) const;


        /**
         * <p>Retrieves a list or web portals.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListPortals">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPortalsOutcome ListPortals(const Model::ListPortalsRequest& request) const;


        /**
         * <p>Retrieves a list of tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Retrieves a list of trust store certificates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListTrustStoreCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrustStoreCertificatesOutcome ListTrustStoreCertificates(const Model::ListTrustStoreCertificatesRequest& request) const;


        /**
         * <p>Retrieves a list of trust stores.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListTrustStores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrustStoresOutcome ListTrustStores(const Model::ListTrustStoresRequest& request) const;


        /**
         * <p>Retrieves a list of user access logging settings.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListUserAccessLoggingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserAccessLoggingSettingsOutcome ListUserAccessLoggingSettings(const Model::ListUserAccessLoggingSettingsRequest& request) const;


        /**
         * <p>Retrieves a list of user settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserSettingsOutcome ListUserSettings(const Model::ListUserSettingsRequest& request) const;


        /**
         * <p>Adds or overwrites one or more tags for the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes one or more tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates browser settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UpdateBrowserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBrowserSettingsOutcome UpdateBrowserSettings(const Model::UpdateBrowserSettingsRequest& request) const;


        /**
         * <p>Updates the identity provider. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UpdateIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIdentityProviderOutcome UpdateIdentityProvider(const Model::UpdateIdentityProviderRequest& request) const;


        /**
         * <p>Updates network settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UpdateNetworkSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNetworkSettingsOutcome UpdateNetworkSettings(const Model::UpdateNetworkSettingsRequest& request) const;


        /**
         * <p>Updates a web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UpdatePortal">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePortalOutcome UpdatePortal(const Model::UpdatePortalRequest& request) const;


        /**
         * <p>Updates the trust store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UpdateTrustStore">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrustStoreOutcome UpdateTrustStore(const Model::UpdateTrustStoreRequest& request) const;


        /**
         * <p>Updates the user access logging settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UpdateUserAccessLoggingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserAccessLoggingSettingsOutcome UpdateUserAccessLoggingSettings(const Model::UpdateUserAccessLoggingSettingsRequest& request) const;


        /**
         * <p>Updates the user settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UpdateUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserSettingsOutcome UpdateUserSettings(const Model::UpdateUserSettingsRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<WorkSpacesWebEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const WorkSpacesWebClientConfiguration& clientConfiguration);

      WorkSpacesWebClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<WorkSpacesWebEndpointProviderBase> m_endpointProvider;
  };

} // namespace WorkSpacesWeb
} // namespace Aws
