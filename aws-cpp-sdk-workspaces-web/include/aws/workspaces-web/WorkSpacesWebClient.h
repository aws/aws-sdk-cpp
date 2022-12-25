/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces-web/WorkSpacesWebServiceClientModel.h>

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
  class AWS_WORKSPACESWEB_API WorkSpacesWebClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<WorkSpacesWebClient>
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
         * <p>Associates a user access logging settings resource with a web
         * portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/AssociateUserAccessLoggingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateUserAccessLoggingSettingsOutcome AssociateUserAccessLoggingSettings(const Model::AssociateUserAccessLoggingSettingsRequest& request) const;

        /**
         * A Callable wrapper for AssociateUserAccessLoggingSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateUserAccessLoggingSettingsOutcomeCallable AssociateUserAccessLoggingSettingsCallable(const Model::AssociateUserAccessLoggingSettingsRequest& request) const;

        /**
         * An Async wrapper for AssociateUserAccessLoggingSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateUserAccessLoggingSettingsAsync(const Model::AssociateUserAccessLoggingSettingsRequest& request, const AssociateUserAccessLoggingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Creates a user access logging settings resource that can be associated with a
         * web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/CreateUserAccessLoggingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserAccessLoggingSettingsOutcome CreateUserAccessLoggingSettings(const Model::CreateUserAccessLoggingSettingsRequest& request) const;

        /**
         * A Callable wrapper for CreateUserAccessLoggingSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserAccessLoggingSettingsOutcomeCallable CreateUserAccessLoggingSettingsCallable(const Model::CreateUserAccessLoggingSettingsRequest& request) const;

        /**
         * An Async wrapper for CreateUserAccessLoggingSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserAccessLoggingSettingsAsync(const Model::CreateUserAccessLoggingSettingsRequest& request, const CreateUserAccessLoggingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Deletes user access logging settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DeleteUserAccessLoggingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserAccessLoggingSettingsOutcome DeleteUserAccessLoggingSettings(const Model::DeleteUserAccessLoggingSettingsRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserAccessLoggingSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserAccessLoggingSettingsOutcomeCallable DeleteUserAccessLoggingSettingsCallable(const Model::DeleteUserAccessLoggingSettingsRequest& request) const;

        /**
         * An Async wrapper for DeleteUserAccessLoggingSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAccessLoggingSettingsAsync(const Model::DeleteUserAccessLoggingSettingsRequest& request, const DeleteUserAccessLoggingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Disassociates user access logging settings from a web portal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DisassociateUserAccessLoggingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateUserAccessLoggingSettingsOutcome DisassociateUserAccessLoggingSettings(const Model::DisassociateUserAccessLoggingSettingsRequest& request) const;

        /**
         * A Callable wrapper for DisassociateUserAccessLoggingSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateUserAccessLoggingSettingsOutcomeCallable DisassociateUserAccessLoggingSettingsCallable(const Model::DisassociateUserAccessLoggingSettingsRequest& request) const;

        /**
         * An Async wrapper for DisassociateUserAccessLoggingSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateUserAccessLoggingSettingsAsync(const Model::DisassociateUserAccessLoggingSettingsRequest& request, const DisassociateUserAccessLoggingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Gets user access logging settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetUserAccessLoggingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserAccessLoggingSettingsOutcome GetUserAccessLoggingSettings(const Model::GetUserAccessLoggingSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetUserAccessLoggingSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserAccessLoggingSettingsOutcomeCallable GetUserAccessLoggingSettingsCallable(const Model::GetUserAccessLoggingSettingsRequest& request) const;

        /**
         * An Async wrapper for GetUserAccessLoggingSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserAccessLoggingSettingsAsync(const Model::GetUserAccessLoggingSettingsRequest& request, const GetUserAccessLoggingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Retrieves a list of user access logging settings.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListUserAccessLoggingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserAccessLoggingSettingsOutcome ListUserAccessLoggingSettings(const Model::ListUserAccessLoggingSettingsRequest& request) const;

        /**
         * A Callable wrapper for ListUserAccessLoggingSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserAccessLoggingSettingsOutcomeCallable ListUserAccessLoggingSettingsCallable(const Model::ListUserAccessLoggingSettingsRequest& request) const;

        /**
         * An Async wrapper for ListUserAccessLoggingSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserAccessLoggingSettingsAsync(const Model::ListUserAccessLoggingSettingsRequest& request, const ListUserAccessLoggingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Updates the user access logging settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UpdateUserAccessLoggingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserAccessLoggingSettingsOutcome UpdateUserAccessLoggingSettings(const Model::UpdateUserAccessLoggingSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserAccessLoggingSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserAccessLoggingSettingsOutcomeCallable UpdateUserAccessLoggingSettingsCallable(const Model::UpdateUserAccessLoggingSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdateUserAccessLoggingSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserAccessLoggingSettingsAsync(const Model::UpdateUserAccessLoggingSettingsRequest& request, const UpdateUserAccessLoggingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
      std::shared_ptr<WorkSpacesWebEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<WorkSpacesWebClient>;
      void init(const WorkSpacesWebClientConfiguration& clientConfiguration);

      WorkSpacesWebClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<WorkSpacesWebEndpointProviderBase> m_endpointProvider;
  };

} // namespace WorkSpacesWeb
} // namespace Aws
