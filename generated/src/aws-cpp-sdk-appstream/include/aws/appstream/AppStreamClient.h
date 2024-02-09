/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/appstream/AppStreamServiceClientModel.h>

namespace Aws
{
namespace AppStream
{
  /**
   * <fullname>Amazon AppStream 2.0</fullname> <p>This is the <i>Amazon AppStream 2.0
   * API Reference</i>. This documentation provides descriptions and syntax for each
   * of the actions and data types in AppStream 2.0. AppStream 2.0 is a fully
   * managed, secure application streaming service that lets you stream desktop
   * applications to users without rewriting applications. AppStream 2.0 manages the
   * AWS resources that are required to host and run your applications, scales
   * automatically, and provides access to your users on demand. </p>  <p>You
   * can call the AppStream 2.0 API operations by using an interface VPC endpoint
   * (interface endpoint). For more information, see <a
   * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/access-api-cli-through-interface-vpc-endpoint.html">Access
   * AppStream 2.0 API Operations and CLI Commands Through an Interface VPC
   * Endpoint</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
   *  <p>To learn more about AppStream 2.0, see the following resources:</p>
   * <ul> <li> <p> <a href="http://aws.amazon.com/appstream2">Amazon AppStream 2.0
   * product page</a> </p> </li> <li> <p> <a
   * href="http://aws.amazon.com/documentation/appstream2">Amazon AppStream 2.0
   * documentation</a> </p> </li> </ul>
   */
  class AWS_APPSTREAM_API AppStreamClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AppStreamClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef AppStreamClientConfiguration ClientConfigurationType;
      typedef AppStreamEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppStreamClient(const Aws::AppStream::AppStreamClientConfiguration& clientConfiguration = Aws::AppStream::AppStreamClientConfiguration(),
                        std::shared_ptr<AppStreamEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppStreamClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<AppStreamEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::AppStream::AppStreamClientConfiguration& clientConfiguration = Aws::AppStream::AppStreamClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppStreamClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<AppStreamEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::AppStream::AppStreamClientConfiguration& clientConfiguration = Aws::AppStream::AppStreamClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppStreamClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppStreamClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppStreamClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AppStreamClient();

        /**
         * <p>Associates the specified app block builder with the specified app
         * block.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/AssociateAppBlockBuilderAppBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateAppBlockBuilderAppBlockOutcome AssociateAppBlockBuilderAppBlock(const Model::AssociateAppBlockBuilderAppBlockRequest& request) const;

        /**
         * A Callable wrapper for AssociateAppBlockBuilderAppBlock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateAppBlockBuilderAppBlockRequestT = Model::AssociateAppBlockBuilderAppBlockRequest>
        Model::AssociateAppBlockBuilderAppBlockOutcomeCallable AssociateAppBlockBuilderAppBlockCallable(const AssociateAppBlockBuilderAppBlockRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::AssociateAppBlockBuilderAppBlock, request);
        }

        /**
         * An Async wrapper for AssociateAppBlockBuilderAppBlock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateAppBlockBuilderAppBlockRequestT = Model::AssociateAppBlockBuilderAppBlockRequest>
        void AssociateAppBlockBuilderAppBlockAsync(const AssociateAppBlockBuilderAppBlockRequestT& request, const AssociateAppBlockBuilderAppBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::AssociateAppBlockBuilderAppBlock, request, handler, context);
        }

        /**
         * <p>Associates the specified application with the specified fleet. This is only
         * supported for Elastic fleets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/AssociateApplicationFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateApplicationFleetOutcome AssociateApplicationFleet(const Model::AssociateApplicationFleetRequest& request) const;

        /**
         * A Callable wrapper for AssociateApplicationFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateApplicationFleetRequestT = Model::AssociateApplicationFleetRequest>
        Model::AssociateApplicationFleetOutcomeCallable AssociateApplicationFleetCallable(const AssociateApplicationFleetRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::AssociateApplicationFleet, request);
        }

        /**
         * An Async wrapper for AssociateApplicationFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateApplicationFleetRequestT = Model::AssociateApplicationFleetRequest>
        void AssociateApplicationFleetAsync(const AssociateApplicationFleetRequestT& request, const AssociateApplicationFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::AssociateApplicationFleet, request, handler, context);
        }

        /**
         * <p>Associates an application to entitle.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/AssociateApplicationToEntitlement">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateApplicationToEntitlementOutcome AssociateApplicationToEntitlement(const Model::AssociateApplicationToEntitlementRequest& request) const;

        /**
         * A Callable wrapper for AssociateApplicationToEntitlement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateApplicationToEntitlementRequestT = Model::AssociateApplicationToEntitlementRequest>
        Model::AssociateApplicationToEntitlementOutcomeCallable AssociateApplicationToEntitlementCallable(const AssociateApplicationToEntitlementRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::AssociateApplicationToEntitlement, request);
        }

        /**
         * An Async wrapper for AssociateApplicationToEntitlement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateApplicationToEntitlementRequestT = Model::AssociateApplicationToEntitlementRequest>
        void AssociateApplicationToEntitlementAsync(const AssociateApplicationToEntitlementRequestT& request, const AssociateApplicationToEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::AssociateApplicationToEntitlement, request, handler, context);
        }

        /**
         * <p>Associates the specified fleet with the specified stack.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/AssociateFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateFleetOutcome AssociateFleet(const Model::AssociateFleetRequest& request) const;

        /**
         * A Callable wrapper for AssociateFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateFleetRequestT = Model::AssociateFleetRequest>
        Model::AssociateFleetOutcomeCallable AssociateFleetCallable(const AssociateFleetRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::AssociateFleet, request);
        }

        /**
         * An Async wrapper for AssociateFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateFleetRequestT = Model::AssociateFleetRequest>
        void AssociateFleetAsync(const AssociateFleetRequestT& request, const AssociateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::AssociateFleet, request, handler, context);
        }

        /**
         * <p>Associates the specified users with the specified stacks. Users in a user
         * pool cannot be assigned to stacks with fleets that are joined to an Active
         * Directory domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/BatchAssociateUserStack">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchAssociateUserStackOutcome BatchAssociateUserStack(const Model::BatchAssociateUserStackRequest& request) const;

        /**
         * A Callable wrapper for BatchAssociateUserStack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchAssociateUserStackRequestT = Model::BatchAssociateUserStackRequest>
        Model::BatchAssociateUserStackOutcomeCallable BatchAssociateUserStackCallable(const BatchAssociateUserStackRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::BatchAssociateUserStack, request);
        }

        /**
         * An Async wrapper for BatchAssociateUserStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchAssociateUserStackRequestT = Model::BatchAssociateUserStackRequest>
        void BatchAssociateUserStackAsync(const BatchAssociateUserStackRequestT& request, const BatchAssociateUserStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::BatchAssociateUserStack, request, handler, context);
        }

        /**
         * <p>Disassociates the specified users from the specified stacks.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/BatchDisassociateUserStack">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisassociateUserStackOutcome BatchDisassociateUserStack(const Model::BatchDisassociateUserStackRequest& request) const;

        /**
         * A Callable wrapper for BatchDisassociateUserStack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDisassociateUserStackRequestT = Model::BatchDisassociateUserStackRequest>
        Model::BatchDisassociateUserStackOutcomeCallable BatchDisassociateUserStackCallable(const BatchDisassociateUserStackRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::BatchDisassociateUserStack, request);
        }

        /**
         * An Async wrapper for BatchDisassociateUserStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDisassociateUserStackRequestT = Model::BatchDisassociateUserStackRequest>
        void BatchDisassociateUserStackAsync(const BatchDisassociateUserStackRequestT& request, const BatchDisassociateUserStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::BatchDisassociateUserStack, request, handler, context);
        }

        /**
         * <p>Copies the image within the same region or to a new region within the same
         * AWS account. Note that any tags you added to the image will not be
         * copied.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CopyImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyImageOutcome CopyImage(const Model::CopyImageRequest& request) const;

        /**
         * A Callable wrapper for CopyImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CopyImageRequestT = Model::CopyImageRequest>
        Model::CopyImageOutcomeCallable CopyImageCallable(const CopyImageRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::CopyImage, request);
        }

        /**
         * An Async wrapper for CopyImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopyImageRequestT = Model::CopyImageRequest>
        void CopyImageAsync(const CopyImageRequestT& request, const CopyImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::CopyImage, request, handler, context);
        }

        /**
         * <p>Creates an app block.</p> <p>App blocks are an Amazon AppStream 2.0 resource
         * that stores the details about the virtual hard disk in an S3 bucket. It also
         * stores the setup script with details about how to mount the virtual hard disk.
         * The virtual hard disk includes the application binaries and other files
         * necessary to launch your applications. Multiple applications can be assigned to
         * a single app block.</p> <p>This is only supported for Elastic
         * fleets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateAppBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppBlockOutcome CreateAppBlock(const Model::CreateAppBlockRequest& request) const;

        /**
         * A Callable wrapper for CreateAppBlock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAppBlockRequestT = Model::CreateAppBlockRequest>
        Model::CreateAppBlockOutcomeCallable CreateAppBlockCallable(const CreateAppBlockRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::CreateAppBlock, request);
        }

        /**
         * An Async wrapper for CreateAppBlock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAppBlockRequestT = Model::CreateAppBlockRequest>
        void CreateAppBlockAsync(const CreateAppBlockRequestT& request, const CreateAppBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::CreateAppBlock, request, handler, context);
        }

        /**
         * <p>Creates an app block builder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateAppBlockBuilder">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppBlockBuilderOutcome CreateAppBlockBuilder(const Model::CreateAppBlockBuilderRequest& request) const;

        /**
         * A Callable wrapper for CreateAppBlockBuilder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAppBlockBuilderRequestT = Model::CreateAppBlockBuilderRequest>
        Model::CreateAppBlockBuilderOutcomeCallable CreateAppBlockBuilderCallable(const CreateAppBlockBuilderRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::CreateAppBlockBuilder, request);
        }

        /**
         * An Async wrapper for CreateAppBlockBuilder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAppBlockBuilderRequestT = Model::CreateAppBlockBuilderRequest>
        void CreateAppBlockBuilderAsync(const CreateAppBlockBuilderRequestT& request, const CreateAppBlockBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::CreateAppBlockBuilder, request, handler, context);
        }

        /**
         * <p>Creates a URL to start a create app block builder streaming
         * session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateAppBlockBuilderStreamingURL">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppBlockBuilderStreamingURLOutcome CreateAppBlockBuilderStreamingURL(const Model::CreateAppBlockBuilderStreamingURLRequest& request) const;

        /**
         * A Callable wrapper for CreateAppBlockBuilderStreamingURL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAppBlockBuilderStreamingURLRequestT = Model::CreateAppBlockBuilderStreamingURLRequest>
        Model::CreateAppBlockBuilderStreamingURLOutcomeCallable CreateAppBlockBuilderStreamingURLCallable(const CreateAppBlockBuilderStreamingURLRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::CreateAppBlockBuilderStreamingURL, request);
        }

        /**
         * An Async wrapper for CreateAppBlockBuilderStreamingURL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAppBlockBuilderStreamingURLRequestT = Model::CreateAppBlockBuilderStreamingURLRequest>
        void CreateAppBlockBuilderStreamingURLAsync(const CreateAppBlockBuilderStreamingURLRequestT& request, const CreateAppBlockBuilderStreamingURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::CreateAppBlockBuilderStreamingURL, request, handler, context);
        }

        /**
         * <p>Creates an application.</p> <p>Applications are an Amazon AppStream 2.0
         * resource that stores the details about how to launch applications on Elastic
         * fleet streaming instances. An application consists of the launch details, icon,
         * and display name. Applications are associated with an app block that contains
         * the application binaries and other files. The applications assigned to an
         * Elastic fleet are the applications users can launch. </p> <p>This is only
         * supported for Elastic fleets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const CreateApplicationRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::CreateApplication, request);
        }

        /**
         * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        void CreateApplicationAsync(const CreateApplicationRequestT& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::CreateApplication, request, handler, context);
        }

        /**
         * <p>Creates a Directory Config object in AppStream 2.0. This object includes the
         * configuration information required to join fleets and image builders to
         * Microsoft Active Directory domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateDirectoryConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDirectoryConfigOutcome CreateDirectoryConfig(const Model::CreateDirectoryConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateDirectoryConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDirectoryConfigRequestT = Model::CreateDirectoryConfigRequest>
        Model::CreateDirectoryConfigOutcomeCallable CreateDirectoryConfigCallable(const CreateDirectoryConfigRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::CreateDirectoryConfig, request);
        }

        /**
         * An Async wrapper for CreateDirectoryConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDirectoryConfigRequestT = Model::CreateDirectoryConfigRequest>
        void CreateDirectoryConfigAsync(const CreateDirectoryConfigRequestT& request, const CreateDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::CreateDirectoryConfig, request, handler, context);
        }

        /**
         * <p>Creates a new entitlement. Entitlements control access to specific
         * applications within a stack, based on user attributes. Entitlements apply to
         * SAML 2.0 federated user identities. Amazon AppStream 2.0 user pool and streaming
         * URL users are entitled to all applications in a stack. Entitlements don't apply
         * to the desktop stream view application, or to applications managed by a dynamic
         * app provider using the Dynamic Application Framework.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateEntitlement">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEntitlementOutcome CreateEntitlement(const Model::CreateEntitlementRequest& request) const;

        /**
         * A Callable wrapper for CreateEntitlement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEntitlementRequestT = Model::CreateEntitlementRequest>
        Model::CreateEntitlementOutcomeCallable CreateEntitlementCallable(const CreateEntitlementRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::CreateEntitlement, request);
        }

        /**
         * An Async wrapper for CreateEntitlement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEntitlementRequestT = Model::CreateEntitlementRequest>
        void CreateEntitlementAsync(const CreateEntitlementRequestT& request, const CreateEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::CreateEntitlement, request, handler, context);
        }

        /**
         * <p>Creates a fleet. A fleet consists of streaming instances that your users
         * access for their applications and desktops.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFleetOutcome CreateFleet(const Model::CreateFleetRequest& request) const;

        /**
         * A Callable wrapper for CreateFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFleetRequestT = Model::CreateFleetRequest>
        Model::CreateFleetOutcomeCallable CreateFleetCallable(const CreateFleetRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::CreateFleet, request);
        }

        /**
         * An Async wrapper for CreateFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFleetRequestT = Model::CreateFleetRequest>
        void CreateFleetAsync(const CreateFleetRequestT& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::CreateFleet, request, handler, context);
        }

        /**
         * <p>Creates an image builder. An image builder is a virtual machine that is used
         * to create an image.</p> <p>The initial state of the builder is
         * <code>PENDING</code>. When it is ready, the state is
         * <code>RUNNING</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateImageBuilder">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImageBuilderOutcome CreateImageBuilder(const Model::CreateImageBuilderRequest& request) const;

        /**
         * A Callable wrapper for CreateImageBuilder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateImageBuilderRequestT = Model::CreateImageBuilderRequest>
        Model::CreateImageBuilderOutcomeCallable CreateImageBuilderCallable(const CreateImageBuilderRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::CreateImageBuilder, request);
        }

        /**
         * An Async wrapper for CreateImageBuilder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateImageBuilderRequestT = Model::CreateImageBuilderRequest>
        void CreateImageBuilderAsync(const CreateImageBuilderRequestT& request, const CreateImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::CreateImageBuilder, request, handler, context);
        }

        /**
         * <p>Creates a URL to start an image builder streaming session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateImageBuilderStreamingURL">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImageBuilderStreamingURLOutcome CreateImageBuilderStreamingURL(const Model::CreateImageBuilderStreamingURLRequest& request) const;

        /**
         * A Callable wrapper for CreateImageBuilderStreamingURL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateImageBuilderStreamingURLRequestT = Model::CreateImageBuilderStreamingURLRequest>
        Model::CreateImageBuilderStreamingURLOutcomeCallable CreateImageBuilderStreamingURLCallable(const CreateImageBuilderStreamingURLRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::CreateImageBuilderStreamingURL, request);
        }

        /**
         * An Async wrapper for CreateImageBuilderStreamingURL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateImageBuilderStreamingURLRequestT = Model::CreateImageBuilderStreamingURLRequest>
        void CreateImageBuilderStreamingURLAsync(const CreateImageBuilderStreamingURLRequestT& request, const CreateImageBuilderStreamingURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::CreateImageBuilderStreamingURL, request, handler, context);
        }

        /**
         * <p>Creates a stack to start streaming applications to users. A stack consists of
         * an associated fleet, user access policies, and storage configurations.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateStack">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStackOutcome CreateStack(const Model::CreateStackRequest& request) const;

        /**
         * A Callable wrapper for CreateStack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStackRequestT = Model::CreateStackRequest>
        Model::CreateStackOutcomeCallable CreateStackCallable(const CreateStackRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::CreateStack, request);
        }

        /**
         * An Async wrapper for CreateStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStackRequestT = Model::CreateStackRequest>
        void CreateStackAsync(const CreateStackRequestT& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::CreateStack, request, handler, context);
        }

        /**
         * <p>Creates a temporary URL to start an AppStream 2.0 streaming session for the
         * specified user. A streaming URL enables application streaming to be tested
         * without user setup. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateStreamingURL">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingURLOutcome CreateStreamingURL(const Model::CreateStreamingURLRequest& request) const;

        /**
         * A Callable wrapper for CreateStreamingURL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStreamingURLRequestT = Model::CreateStreamingURLRequest>
        Model::CreateStreamingURLOutcomeCallable CreateStreamingURLCallable(const CreateStreamingURLRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::CreateStreamingURL, request);
        }

        /**
         * An Async wrapper for CreateStreamingURL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStreamingURLRequestT = Model::CreateStreamingURLRequest>
        void CreateStreamingURLAsync(const CreateStreamingURLRequestT& request, const CreateStreamingURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::CreateStreamingURL, request, handler, context);
        }

        /**
         * <p>Creates a new image with the latest Windows operating system updates, driver
         * updates, and AppStream 2.0 agent software.</p> <p>For more information, see the
         * "Update an Image by Using Managed AppStream 2.0 Image Updates" section in <a
         * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/administer-images.html">Administer
         * Your AppStream 2.0 Images</a>, in the <i>Amazon AppStream 2.0 Administration
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateUpdatedImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUpdatedImageOutcome CreateUpdatedImage(const Model::CreateUpdatedImageRequest& request) const;

        /**
         * A Callable wrapper for CreateUpdatedImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUpdatedImageRequestT = Model::CreateUpdatedImageRequest>
        Model::CreateUpdatedImageOutcomeCallable CreateUpdatedImageCallable(const CreateUpdatedImageRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::CreateUpdatedImage, request);
        }

        /**
         * An Async wrapper for CreateUpdatedImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUpdatedImageRequestT = Model::CreateUpdatedImageRequest>
        void CreateUpdatedImageAsync(const CreateUpdatedImageRequestT& request, const CreateUpdatedImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::CreateUpdatedImage, request, handler, context);
        }

        /**
         * <p>Creates a usage report subscription. Usage reports are generated
         * daily.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateUsageReportSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUsageReportSubscriptionOutcome CreateUsageReportSubscription(const Model::CreateUsageReportSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for CreateUsageReportSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUsageReportSubscriptionRequestT = Model::CreateUsageReportSubscriptionRequest>
        Model::CreateUsageReportSubscriptionOutcomeCallable CreateUsageReportSubscriptionCallable(const CreateUsageReportSubscriptionRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::CreateUsageReportSubscription, request);
        }

        /**
         * An Async wrapper for CreateUsageReportSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUsageReportSubscriptionRequestT = Model::CreateUsageReportSubscriptionRequest>
        void CreateUsageReportSubscriptionAsync(const CreateUsageReportSubscriptionRequestT& request, const CreateUsageReportSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::CreateUsageReportSubscription, request, handler, context);
        }

        /**
         * <p>Creates a new user in the user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * A Callable wrapper for CreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        Model::CreateUserOutcomeCallable CreateUserCallable(const CreateUserRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::CreateUser, request);
        }

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        void CreateUserAsync(const CreateUserRequestT& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::CreateUser, request, handler, context);
        }

        /**
         * <p>Deletes an app block.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteAppBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppBlockOutcome DeleteAppBlock(const Model::DeleteAppBlockRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppBlock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppBlockRequestT = Model::DeleteAppBlockRequest>
        Model::DeleteAppBlockOutcomeCallable DeleteAppBlockCallable(const DeleteAppBlockRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DeleteAppBlock, request);
        }

        /**
         * An Async wrapper for DeleteAppBlock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppBlockRequestT = Model::DeleteAppBlockRequest>
        void DeleteAppBlockAsync(const DeleteAppBlockRequestT& request, const DeleteAppBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DeleteAppBlock, request, handler, context);
        }

        /**
         * <p>Deletes an app block builder.</p> <p>An app block builder can only be deleted
         * when it has no association with an app block.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteAppBlockBuilder">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppBlockBuilderOutcome DeleteAppBlockBuilder(const Model::DeleteAppBlockBuilderRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppBlockBuilder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppBlockBuilderRequestT = Model::DeleteAppBlockBuilderRequest>
        Model::DeleteAppBlockBuilderOutcomeCallable DeleteAppBlockBuilderCallable(const DeleteAppBlockBuilderRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DeleteAppBlockBuilder, request);
        }

        /**
         * An Async wrapper for DeleteAppBlockBuilder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppBlockBuilderRequestT = Model::DeleteAppBlockBuilderRequest>
        void DeleteAppBlockBuilderAsync(const DeleteAppBlockBuilderRequestT& request, const DeleteAppBlockBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DeleteAppBlockBuilder, request, handler, context);
        }

        /**
         * <p>Deletes an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const DeleteApplicationRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DeleteApplication, request);
        }

        /**
         * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        void DeleteApplicationAsync(const DeleteApplicationRequestT& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DeleteApplication, request, handler, context);
        }

        /**
         * <p>Deletes the specified Directory Config object from AppStream 2.0. This object
         * includes the information required to join streaming instances to an Active
         * Directory domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteDirectoryConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDirectoryConfigOutcome DeleteDirectoryConfig(const Model::DeleteDirectoryConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteDirectoryConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDirectoryConfigRequestT = Model::DeleteDirectoryConfigRequest>
        Model::DeleteDirectoryConfigOutcomeCallable DeleteDirectoryConfigCallable(const DeleteDirectoryConfigRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DeleteDirectoryConfig, request);
        }

        /**
         * An Async wrapper for DeleteDirectoryConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDirectoryConfigRequestT = Model::DeleteDirectoryConfigRequest>
        void DeleteDirectoryConfigAsync(const DeleteDirectoryConfigRequestT& request, const DeleteDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DeleteDirectoryConfig, request, handler, context);
        }

        /**
         * <p>Deletes the specified entitlement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteEntitlement">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEntitlementOutcome DeleteEntitlement(const Model::DeleteEntitlementRequest& request) const;

        /**
         * A Callable wrapper for DeleteEntitlement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEntitlementRequestT = Model::DeleteEntitlementRequest>
        Model::DeleteEntitlementOutcomeCallable DeleteEntitlementCallable(const DeleteEntitlementRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DeleteEntitlement, request);
        }

        /**
         * An Async wrapper for DeleteEntitlement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEntitlementRequestT = Model::DeleteEntitlementRequest>
        void DeleteEntitlementAsync(const DeleteEntitlementRequestT& request, const DeleteEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DeleteEntitlement, request, handler, context);
        }

        /**
         * <p>Deletes the specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFleetOutcome DeleteFleet(const Model::DeleteFleetRequest& request) const;

        /**
         * A Callable wrapper for DeleteFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFleetRequestT = Model::DeleteFleetRequest>
        Model::DeleteFleetOutcomeCallable DeleteFleetCallable(const DeleteFleetRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DeleteFleet, request);
        }

        /**
         * An Async wrapper for DeleteFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFleetRequestT = Model::DeleteFleetRequest>
        void DeleteFleetAsync(const DeleteFleetRequestT& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DeleteFleet, request, handler, context);
        }

        /**
         * <p>Deletes the specified image. You cannot delete an image when it is in use.
         * After you delete an image, you cannot provision new capacity using the
         * image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImageOutcome DeleteImage(const Model::DeleteImageRequest& request) const;

        /**
         * A Callable wrapper for DeleteImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteImageRequestT = Model::DeleteImageRequest>
        Model::DeleteImageOutcomeCallable DeleteImageCallable(const DeleteImageRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DeleteImage, request);
        }

        /**
         * An Async wrapper for DeleteImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteImageRequestT = Model::DeleteImageRequest>
        void DeleteImageAsync(const DeleteImageRequestT& request, const DeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DeleteImage, request, handler, context);
        }

        /**
         * <p>Deletes the specified image builder and releases the capacity.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteImageBuilder">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImageBuilderOutcome DeleteImageBuilder(const Model::DeleteImageBuilderRequest& request) const;

        /**
         * A Callable wrapper for DeleteImageBuilder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteImageBuilderRequestT = Model::DeleteImageBuilderRequest>
        Model::DeleteImageBuilderOutcomeCallable DeleteImageBuilderCallable(const DeleteImageBuilderRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DeleteImageBuilder, request);
        }

        /**
         * An Async wrapper for DeleteImageBuilder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteImageBuilderRequestT = Model::DeleteImageBuilderRequest>
        void DeleteImageBuilderAsync(const DeleteImageBuilderRequestT& request, const DeleteImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DeleteImageBuilder, request, handler, context);
        }

        /**
         * <p>Deletes permissions for the specified private image. After you delete
         * permissions for an image, AWS accounts to which you previously granted these
         * permissions can no longer use the image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteImagePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImagePermissionsOutcome DeleteImagePermissions(const Model::DeleteImagePermissionsRequest& request) const;

        /**
         * A Callable wrapper for DeleteImagePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteImagePermissionsRequestT = Model::DeleteImagePermissionsRequest>
        Model::DeleteImagePermissionsOutcomeCallable DeleteImagePermissionsCallable(const DeleteImagePermissionsRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DeleteImagePermissions, request);
        }

        /**
         * An Async wrapper for DeleteImagePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteImagePermissionsRequestT = Model::DeleteImagePermissionsRequest>
        void DeleteImagePermissionsAsync(const DeleteImagePermissionsRequestT& request, const DeleteImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DeleteImagePermissions, request, handler, context);
        }

        /**
         * <p>Deletes the specified stack. After the stack is deleted, the application
         * streaming environment provided by the stack is no longer available to users.
         * Also, any reservations made for application streaming sessions for the stack are
         * released.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteStack">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStackOutcome DeleteStack(const Model::DeleteStackRequest& request) const;

        /**
         * A Callable wrapper for DeleteStack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStackRequestT = Model::DeleteStackRequest>
        Model::DeleteStackOutcomeCallable DeleteStackCallable(const DeleteStackRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DeleteStack, request);
        }

        /**
         * An Async wrapper for DeleteStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStackRequestT = Model::DeleteStackRequest>
        void DeleteStackAsync(const DeleteStackRequestT& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DeleteStack, request, handler, context);
        }

        /**
         * <p>Disables usage report generation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteUsageReportSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUsageReportSubscriptionOutcome DeleteUsageReportSubscription(const Model::DeleteUsageReportSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DeleteUsageReportSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUsageReportSubscriptionRequestT = Model::DeleteUsageReportSubscriptionRequest>
        Model::DeleteUsageReportSubscriptionOutcomeCallable DeleteUsageReportSubscriptionCallable(const DeleteUsageReportSubscriptionRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DeleteUsageReportSubscription, request);
        }

        /**
         * An Async wrapper for DeleteUsageReportSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUsageReportSubscriptionRequestT = Model::DeleteUsageReportSubscriptionRequest>
        void DeleteUsageReportSubscriptionAsync(const DeleteUsageReportSubscriptionRequestT& request, const DeleteUsageReportSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DeleteUsageReportSubscription, request, handler, context);
        }

        /**
         * <p>Deletes a user from the user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * A Callable wrapper for DeleteUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        Model::DeleteUserOutcomeCallable DeleteUserCallable(const DeleteUserRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DeleteUser, request);
        }

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        void DeleteUserAsync(const DeleteUserRequestT& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DeleteUser, request, handler, context);
        }

        /**
         * <p>Retrieves a list that describes one or more app block builder
         * associations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeAppBlockBuilderAppBlockAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppBlockBuilderAppBlockAssociationsOutcome DescribeAppBlockBuilderAppBlockAssociations(const Model::DescribeAppBlockBuilderAppBlockAssociationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAppBlockBuilderAppBlockAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAppBlockBuilderAppBlockAssociationsRequestT = Model::DescribeAppBlockBuilderAppBlockAssociationsRequest>
        Model::DescribeAppBlockBuilderAppBlockAssociationsOutcomeCallable DescribeAppBlockBuilderAppBlockAssociationsCallable(const DescribeAppBlockBuilderAppBlockAssociationsRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DescribeAppBlockBuilderAppBlockAssociations, request);
        }

        /**
         * An Async wrapper for DescribeAppBlockBuilderAppBlockAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAppBlockBuilderAppBlockAssociationsRequestT = Model::DescribeAppBlockBuilderAppBlockAssociationsRequest>
        void DescribeAppBlockBuilderAppBlockAssociationsAsync(const DescribeAppBlockBuilderAppBlockAssociationsRequestT& request, const DescribeAppBlockBuilderAppBlockAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DescribeAppBlockBuilderAppBlockAssociations, request, handler, context);
        }

        /**
         * <p>Retrieves a list that describes one or more app block builders.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeAppBlockBuilders">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppBlockBuildersOutcome DescribeAppBlockBuilders(const Model::DescribeAppBlockBuildersRequest& request) const;

        /**
         * A Callable wrapper for DescribeAppBlockBuilders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAppBlockBuildersRequestT = Model::DescribeAppBlockBuildersRequest>
        Model::DescribeAppBlockBuildersOutcomeCallable DescribeAppBlockBuildersCallable(const DescribeAppBlockBuildersRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DescribeAppBlockBuilders, request);
        }

        /**
         * An Async wrapper for DescribeAppBlockBuilders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAppBlockBuildersRequestT = Model::DescribeAppBlockBuildersRequest>
        void DescribeAppBlockBuildersAsync(const DescribeAppBlockBuildersRequestT& request, const DescribeAppBlockBuildersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DescribeAppBlockBuilders, request, handler, context);
        }

        /**
         * <p>Retrieves a list that describes one or more app blocks.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeAppBlocks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppBlocksOutcome DescribeAppBlocks(const Model::DescribeAppBlocksRequest& request) const;

        /**
         * A Callable wrapper for DescribeAppBlocks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAppBlocksRequestT = Model::DescribeAppBlocksRequest>
        Model::DescribeAppBlocksOutcomeCallable DescribeAppBlocksCallable(const DescribeAppBlocksRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DescribeAppBlocks, request);
        }

        /**
         * An Async wrapper for DescribeAppBlocks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAppBlocksRequestT = Model::DescribeAppBlocksRequest>
        void DescribeAppBlocksAsync(const DescribeAppBlocksRequestT& request, const DescribeAppBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DescribeAppBlocks, request, handler, context);
        }

        /**
         * <p>Retrieves a list that describes one or more application fleet associations.
         * Either ApplicationArn or FleetName must be specified.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeApplicationFleetAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationFleetAssociationsOutcome DescribeApplicationFleetAssociations(const Model::DescribeApplicationFleetAssociationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeApplicationFleetAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeApplicationFleetAssociationsRequestT = Model::DescribeApplicationFleetAssociationsRequest>
        Model::DescribeApplicationFleetAssociationsOutcomeCallable DescribeApplicationFleetAssociationsCallable(const DescribeApplicationFleetAssociationsRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DescribeApplicationFleetAssociations, request);
        }

        /**
         * An Async wrapper for DescribeApplicationFleetAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeApplicationFleetAssociationsRequestT = Model::DescribeApplicationFleetAssociationsRequest>
        void DescribeApplicationFleetAssociationsAsync(const DescribeApplicationFleetAssociationsRequestT& request, const DescribeApplicationFleetAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DescribeApplicationFleetAssociations, request, handler, context);
        }

        /**
         * <p>Retrieves a list that describes one or more applications.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationsOutcome DescribeApplications(const Model::DescribeApplicationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeApplicationsRequestT = Model::DescribeApplicationsRequest>
        Model::DescribeApplicationsOutcomeCallable DescribeApplicationsCallable(const DescribeApplicationsRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DescribeApplications, request);
        }

        /**
         * An Async wrapper for DescribeApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeApplicationsRequestT = Model::DescribeApplicationsRequest>
        void DescribeApplicationsAsync(const DescribeApplicationsRequestT& request, const DescribeApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DescribeApplications, request, handler, context);
        }

        /**
         * <p>Retrieves a list that describes one or more specified Directory Config
         * objects for AppStream 2.0, if the names for these objects are provided.
         * Otherwise, all Directory Config objects in the account are described. These
         * objects include the configuration information required to join fleets and image
         * builders to Microsoft Active Directory domains. </p> <p>Although the response
         * syntax in this topic includes the account password, this password is not
         * returned in the actual response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeDirectoryConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDirectoryConfigsOutcome DescribeDirectoryConfigs(const Model::DescribeDirectoryConfigsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDirectoryConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDirectoryConfigsRequestT = Model::DescribeDirectoryConfigsRequest>
        Model::DescribeDirectoryConfigsOutcomeCallable DescribeDirectoryConfigsCallable(const DescribeDirectoryConfigsRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DescribeDirectoryConfigs, request);
        }

        /**
         * An Async wrapper for DescribeDirectoryConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDirectoryConfigsRequestT = Model::DescribeDirectoryConfigsRequest>
        void DescribeDirectoryConfigsAsync(const DescribeDirectoryConfigsRequestT& request, const DescribeDirectoryConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DescribeDirectoryConfigs, request, handler, context);
        }

        /**
         * <p>Retrieves a list that describes one of more entitlements.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeEntitlements">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEntitlementsOutcome DescribeEntitlements(const Model::DescribeEntitlementsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEntitlements that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEntitlementsRequestT = Model::DescribeEntitlementsRequest>
        Model::DescribeEntitlementsOutcomeCallable DescribeEntitlementsCallable(const DescribeEntitlementsRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DescribeEntitlements, request);
        }

        /**
         * An Async wrapper for DescribeEntitlements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEntitlementsRequestT = Model::DescribeEntitlementsRequest>
        void DescribeEntitlementsAsync(const DescribeEntitlementsRequestT& request, const DescribeEntitlementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DescribeEntitlements, request, handler, context);
        }

        /**
         * <p>Retrieves a list that describes one or more specified fleets, if the fleet
         * names are provided. Otherwise, all fleets in the account are
         * described.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetsOutcome DescribeFleets(const Model::DescribeFleetsRequest& request) const;

        /**
         * A Callable wrapper for DescribeFleets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFleetsRequestT = Model::DescribeFleetsRequest>
        Model::DescribeFleetsOutcomeCallable DescribeFleetsCallable(const DescribeFleetsRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DescribeFleets, request);
        }

        /**
         * An Async wrapper for DescribeFleets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFleetsRequestT = Model::DescribeFleetsRequest>
        void DescribeFleetsAsync(const DescribeFleetsRequestT& request, const DescribeFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DescribeFleets, request, handler, context);
        }

        /**
         * <p>Retrieves a list that describes one or more specified image builders, if the
         * image builder names are provided. Otherwise, all image builders in the account
         * are described.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeImageBuilders">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImageBuildersOutcome DescribeImageBuilders(const Model::DescribeImageBuildersRequest& request) const;

        /**
         * A Callable wrapper for DescribeImageBuilders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeImageBuildersRequestT = Model::DescribeImageBuildersRequest>
        Model::DescribeImageBuildersOutcomeCallable DescribeImageBuildersCallable(const DescribeImageBuildersRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DescribeImageBuilders, request);
        }

        /**
         * An Async wrapper for DescribeImageBuilders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeImageBuildersRequestT = Model::DescribeImageBuildersRequest>
        void DescribeImageBuildersAsync(const DescribeImageBuildersRequestT& request, const DescribeImageBuildersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DescribeImageBuilders, request, handler, context);
        }

        /**
         * <p>Retrieves a list that describes the permissions for shared AWS account IDs on
         * a private image that you own. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeImagePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImagePermissionsOutcome DescribeImagePermissions(const Model::DescribeImagePermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeImagePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeImagePermissionsRequestT = Model::DescribeImagePermissionsRequest>
        Model::DescribeImagePermissionsOutcomeCallable DescribeImagePermissionsCallable(const DescribeImagePermissionsRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DescribeImagePermissions, request);
        }

        /**
         * An Async wrapper for DescribeImagePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeImagePermissionsRequestT = Model::DescribeImagePermissionsRequest>
        void DescribeImagePermissionsAsync(const DescribeImagePermissionsRequestT& request, const DescribeImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DescribeImagePermissions, request, handler, context);
        }

        /**
         * <p>Retrieves a list that describes one or more specified images, if the image
         * names or image ARNs are provided. Otherwise, all images in the account are
         * described.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeImages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImagesOutcome DescribeImages(const Model::DescribeImagesRequest& request) const;

        /**
         * A Callable wrapper for DescribeImages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeImagesRequestT = Model::DescribeImagesRequest>
        Model::DescribeImagesOutcomeCallable DescribeImagesCallable(const DescribeImagesRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DescribeImages, request);
        }

        /**
         * An Async wrapper for DescribeImages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeImagesRequestT = Model::DescribeImagesRequest>
        void DescribeImagesAsync(const DescribeImagesRequestT& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DescribeImages, request, handler, context);
        }

        /**
         * <p>Retrieves a list that describes the streaming sessions for a specified stack
         * and fleet. If a UserId is provided for the stack and fleet, only streaming
         * sessions for that user are described. If an authentication type is not provided,
         * the default is to authenticate users using a streaming URL.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSessionsOutcome DescribeSessions(const Model::DescribeSessionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSessionsRequestT = Model::DescribeSessionsRequest>
        Model::DescribeSessionsOutcomeCallable DescribeSessionsCallable(const DescribeSessionsRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DescribeSessions, request);
        }

        /**
         * An Async wrapper for DescribeSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSessionsRequestT = Model::DescribeSessionsRequest>
        void DescribeSessionsAsync(const DescribeSessionsRequestT& request, const DescribeSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DescribeSessions, request, handler, context);
        }

        /**
         * <p>Retrieves a list that describes one or more specified stacks, if the stack
         * names are provided. Otherwise, all stacks in the account are
         * described.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeStacks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStacksOutcome DescribeStacks(const Model::DescribeStacksRequest& request) const;

        /**
         * A Callable wrapper for DescribeStacks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeStacksRequestT = Model::DescribeStacksRequest>
        Model::DescribeStacksOutcomeCallable DescribeStacksCallable(const DescribeStacksRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DescribeStacks, request);
        }

        /**
         * An Async wrapper for DescribeStacks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeStacksRequestT = Model::DescribeStacksRequest>
        void DescribeStacksAsync(const DescribeStacksRequestT& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DescribeStacks, request, handler, context);
        }

        /**
         * <p>Retrieves a list that describes one or more usage report
         * subscriptions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeUsageReportSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUsageReportSubscriptionsOutcome DescribeUsageReportSubscriptions(const Model::DescribeUsageReportSubscriptionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeUsageReportSubscriptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeUsageReportSubscriptionsRequestT = Model::DescribeUsageReportSubscriptionsRequest>
        Model::DescribeUsageReportSubscriptionsOutcomeCallable DescribeUsageReportSubscriptionsCallable(const DescribeUsageReportSubscriptionsRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DescribeUsageReportSubscriptions, request);
        }

        /**
         * An Async wrapper for DescribeUsageReportSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeUsageReportSubscriptionsRequestT = Model::DescribeUsageReportSubscriptionsRequest>
        void DescribeUsageReportSubscriptionsAsync(const DescribeUsageReportSubscriptionsRequestT& request, const DescribeUsageReportSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DescribeUsageReportSubscriptions, request, handler, context);
        }

        /**
         * <p>Retrieves a list that describes the UserStackAssociation objects. You must
         * specify either or both of the following:</p> <ul> <li> <p>The stack name</p>
         * </li> <li> <p>The user name (email address of the user associated with the
         * stack) and the authentication type for the user</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeUserStackAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserStackAssociationsOutcome DescribeUserStackAssociations(const Model::DescribeUserStackAssociationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeUserStackAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeUserStackAssociationsRequestT = Model::DescribeUserStackAssociationsRequest>
        Model::DescribeUserStackAssociationsOutcomeCallable DescribeUserStackAssociationsCallable(const DescribeUserStackAssociationsRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DescribeUserStackAssociations, request);
        }

        /**
         * An Async wrapper for DescribeUserStackAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeUserStackAssociationsRequestT = Model::DescribeUserStackAssociationsRequest>
        void DescribeUserStackAssociationsAsync(const DescribeUserStackAssociationsRequestT& request, const DescribeUserStackAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DescribeUserStackAssociations, request, handler, context);
        }

        /**
         * <p>Retrieves a list that describes one or more specified users in the user
         * pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUsersOutcome DescribeUsers(const Model::DescribeUsersRequest& request) const;

        /**
         * A Callable wrapper for DescribeUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeUsersRequestT = Model::DescribeUsersRequest>
        Model::DescribeUsersOutcomeCallable DescribeUsersCallable(const DescribeUsersRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DescribeUsers, request);
        }

        /**
         * An Async wrapper for DescribeUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeUsersRequestT = Model::DescribeUsersRequest>
        void DescribeUsersAsync(const DescribeUsersRequestT& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DescribeUsers, request, handler, context);
        }

        /**
         * <p>Disables the specified user in the user pool. Users can't sign in to
         * AppStream 2.0 until they are re-enabled. This action does not delete the user.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DisableUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableUserOutcome DisableUser(const Model::DisableUserRequest& request) const;

        /**
         * A Callable wrapper for DisableUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableUserRequestT = Model::DisableUserRequest>
        Model::DisableUserOutcomeCallable DisableUserCallable(const DisableUserRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DisableUser, request);
        }

        /**
         * An Async wrapper for DisableUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableUserRequestT = Model::DisableUserRequest>
        void DisableUserAsync(const DisableUserRequestT& request, const DisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DisableUser, request, handler, context);
        }

        /**
         * <p>Disassociates a specified app block builder from a specified app
         * block.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DisassociateAppBlockBuilderAppBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateAppBlockBuilderAppBlockOutcome DisassociateAppBlockBuilderAppBlock(const Model::DisassociateAppBlockBuilderAppBlockRequest& request) const;

        /**
         * A Callable wrapper for DisassociateAppBlockBuilderAppBlock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateAppBlockBuilderAppBlockRequestT = Model::DisassociateAppBlockBuilderAppBlockRequest>
        Model::DisassociateAppBlockBuilderAppBlockOutcomeCallable DisassociateAppBlockBuilderAppBlockCallable(const DisassociateAppBlockBuilderAppBlockRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DisassociateAppBlockBuilderAppBlock, request);
        }

        /**
         * An Async wrapper for DisassociateAppBlockBuilderAppBlock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateAppBlockBuilderAppBlockRequestT = Model::DisassociateAppBlockBuilderAppBlockRequest>
        void DisassociateAppBlockBuilderAppBlockAsync(const DisassociateAppBlockBuilderAppBlockRequestT& request, const DisassociateAppBlockBuilderAppBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DisassociateAppBlockBuilderAppBlock, request, handler, context);
        }

        /**
         * <p>Disassociates the specified application from the fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DisassociateApplicationFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateApplicationFleetOutcome DisassociateApplicationFleet(const Model::DisassociateApplicationFleetRequest& request) const;

        /**
         * A Callable wrapper for DisassociateApplicationFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateApplicationFleetRequestT = Model::DisassociateApplicationFleetRequest>
        Model::DisassociateApplicationFleetOutcomeCallable DisassociateApplicationFleetCallable(const DisassociateApplicationFleetRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DisassociateApplicationFleet, request);
        }

        /**
         * An Async wrapper for DisassociateApplicationFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateApplicationFleetRequestT = Model::DisassociateApplicationFleetRequest>
        void DisassociateApplicationFleetAsync(const DisassociateApplicationFleetRequestT& request, const DisassociateApplicationFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DisassociateApplicationFleet, request, handler, context);
        }

        /**
         * <p>Deletes the specified application from the specified
         * entitlement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DisassociateApplicationFromEntitlement">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateApplicationFromEntitlementOutcome DisassociateApplicationFromEntitlement(const Model::DisassociateApplicationFromEntitlementRequest& request) const;

        /**
         * A Callable wrapper for DisassociateApplicationFromEntitlement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateApplicationFromEntitlementRequestT = Model::DisassociateApplicationFromEntitlementRequest>
        Model::DisassociateApplicationFromEntitlementOutcomeCallable DisassociateApplicationFromEntitlementCallable(const DisassociateApplicationFromEntitlementRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DisassociateApplicationFromEntitlement, request);
        }

        /**
         * An Async wrapper for DisassociateApplicationFromEntitlement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateApplicationFromEntitlementRequestT = Model::DisassociateApplicationFromEntitlementRequest>
        void DisassociateApplicationFromEntitlementAsync(const DisassociateApplicationFromEntitlementRequestT& request, const DisassociateApplicationFromEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DisassociateApplicationFromEntitlement, request, handler, context);
        }

        /**
         * <p>Disassociates the specified fleet from the specified stack.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DisassociateFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFleetOutcome DisassociateFleet(const Model::DisassociateFleetRequest& request) const;

        /**
         * A Callable wrapper for DisassociateFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateFleetRequestT = Model::DisassociateFleetRequest>
        Model::DisassociateFleetOutcomeCallable DisassociateFleetCallable(const DisassociateFleetRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::DisassociateFleet, request);
        }

        /**
         * An Async wrapper for DisassociateFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateFleetRequestT = Model::DisassociateFleetRequest>
        void DisassociateFleetAsync(const DisassociateFleetRequestT& request, const DisassociateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::DisassociateFleet, request, handler, context);
        }

        /**
         * <p>Enables a user in the user pool. After being enabled, users can sign in to
         * AppStream 2.0 and open applications from the stacks to which they are
         * assigned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/EnableUser">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableUserOutcome EnableUser(const Model::EnableUserRequest& request) const;

        /**
         * A Callable wrapper for EnableUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableUserRequestT = Model::EnableUserRequest>
        Model::EnableUserOutcomeCallable EnableUserCallable(const EnableUserRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::EnableUser, request);
        }

        /**
         * An Async wrapper for EnableUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableUserRequestT = Model::EnableUserRequest>
        void EnableUserAsync(const EnableUserRequestT& request, const EnableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::EnableUser, request, handler, context);
        }

        /**
         * <p>Immediately stops the specified streaming session.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ExpireSession">AWS
         * API Reference</a></p>
         */
        virtual Model::ExpireSessionOutcome ExpireSession(const Model::ExpireSessionRequest& request) const;

        /**
         * A Callable wrapper for ExpireSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExpireSessionRequestT = Model::ExpireSessionRequest>
        Model::ExpireSessionOutcomeCallable ExpireSessionCallable(const ExpireSessionRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::ExpireSession, request);
        }

        /**
         * An Async wrapper for ExpireSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExpireSessionRequestT = Model::ExpireSessionRequest>
        void ExpireSessionAsync(const ExpireSessionRequestT& request, const ExpireSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::ExpireSession, request, handler, context);
        }

        /**
         * <p>Retrieves the name of the fleet that is associated with the specified
         * stack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ListAssociatedFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociatedFleetsOutcome ListAssociatedFleets(const Model::ListAssociatedFleetsRequest& request) const;

        /**
         * A Callable wrapper for ListAssociatedFleets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssociatedFleetsRequestT = Model::ListAssociatedFleetsRequest>
        Model::ListAssociatedFleetsOutcomeCallable ListAssociatedFleetsCallable(const ListAssociatedFleetsRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::ListAssociatedFleets, request);
        }

        /**
         * An Async wrapper for ListAssociatedFleets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssociatedFleetsRequestT = Model::ListAssociatedFleetsRequest>
        void ListAssociatedFleetsAsync(const ListAssociatedFleetsRequestT& request, const ListAssociatedFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::ListAssociatedFleets, request, handler, context);
        }

        /**
         * <p>Retrieves the name of the stack with which the specified fleet is
         * associated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ListAssociatedStacks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociatedStacksOutcome ListAssociatedStacks(const Model::ListAssociatedStacksRequest& request) const;

        /**
         * A Callable wrapper for ListAssociatedStacks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssociatedStacksRequestT = Model::ListAssociatedStacksRequest>
        Model::ListAssociatedStacksOutcomeCallable ListAssociatedStacksCallable(const ListAssociatedStacksRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::ListAssociatedStacks, request);
        }

        /**
         * An Async wrapper for ListAssociatedStacks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssociatedStacksRequestT = Model::ListAssociatedStacksRequest>
        void ListAssociatedStacksAsync(const ListAssociatedStacksRequestT& request, const ListAssociatedStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::ListAssociatedStacks, request, handler, context);
        }

        /**
         * <p>Retrieves a list of entitled applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ListEntitledApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntitledApplicationsOutcome ListEntitledApplications(const Model::ListEntitledApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListEntitledApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEntitledApplicationsRequestT = Model::ListEntitledApplicationsRequest>
        Model::ListEntitledApplicationsOutcomeCallable ListEntitledApplicationsCallable(const ListEntitledApplicationsRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::ListEntitledApplications, request);
        }

        /**
         * An Async wrapper for ListEntitledApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEntitledApplicationsRequestT = Model::ListEntitledApplicationsRequest>
        void ListEntitledApplicationsAsync(const ListEntitledApplicationsRequestT& request, const ListEntitledApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::ListEntitledApplications, request, handler, context);
        }

        /**
         * <p>Retrieves a list of all tags for the specified AppStream 2.0 resource. You
         * can tag AppStream 2.0 image builders, images, fleets, and stacks.</p> <p>For
         * more information about tags, see <a
         * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
         * Your Resources</a> in the <i>Amazon AppStream 2.0 Administration
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Starts an app block builder.</p> <p>An app block builder can only be started
         * when it's associated with an app block.</p> <p>Starting an app block builder
         * starts a new instance, which is equivalent to an elastic fleet instance with
         * application builder assistance functionality.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StartAppBlockBuilder">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAppBlockBuilderOutcome StartAppBlockBuilder(const Model::StartAppBlockBuilderRequest& request) const;

        /**
         * A Callable wrapper for StartAppBlockBuilder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartAppBlockBuilderRequestT = Model::StartAppBlockBuilderRequest>
        Model::StartAppBlockBuilderOutcomeCallable StartAppBlockBuilderCallable(const StartAppBlockBuilderRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::StartAppBlockBuilder, request);
        }

        /**
         * An Async wrapper for StartAppBlockBuilder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartAppBlockBuilderRequestT = Model::StartAppBlockBuilderRequest>
        void StartAppBlockBuilderAsync(const StartAppBlockBuilderRequestT& request, const StartAppBlockBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::StartAppBlockBuilder, request, handler, context);
        }

        /**
         * <p>Starts the specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StartFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFleetOutcome StartFleet(const Model::StartFleetRequest& request) const;

        /**
         * A Callable wrapper for StartFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartFleetRequestT = Model::StartFleetRequest>
        Model::StartFleetOutcomeCallable StartFleetCallable(const StartFleetRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::StartFleet, request);
        }

        /**
         * An Async wrapper for StartFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartFleetRequestT = Model::StartFleetRequest>
        void StartFleetAsync(const StartFleetRequestT& request, const StartFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::StartFleet, request, handler, context);
        }

        /**
         * <p>Starts the specified image builder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StartImageBuilder">AWS
         * API Reference</a></p>
         */
        virtual Model::StartImageBuilderOutcome StartImageBuilder(const Model::StartImageBuilderRequest& request) const;

        /**
         * A Callable wrapper for StartImageBuilder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartImageBuilderRequestT = Model::StartImageBuilderRequest>
        Model::StartImageBuilderOutcomeCallable StartImageBuilderCallable(const StartImageBuilderRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::StartImageBuilder, request);
        }

        /**
         * An Async wrapper for StartImageBuilder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartImageBuilderRequestT = Model::StartImageBuilderRequest>
        void StartImageBuilderAsync(const StartImageBuilderRequestT& request, const StartImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::StartImageBuilder, request, handler, context);
        }

        /**
         * <p>Stops an app block builder.</p> <p>Stopping an app block builder terminates
         * the instance, and the instance state is not persisted.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StopAppBlockBuilder">AWS
         * API Reference</a></p>
         */
        virtual Model::StopAppBlockBuilderOutcome StopAppBlockBuilder(const Model::StopAppBlockBuilderRequest& request) const;

        /**
         * A Callable wrapper for StopAppBlockBuilder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopAppBlockBuilderRequestT = Model::StopAppBlockBuilderRequest>
        Model::StopAppBlockBuilderOutcomeCallable StopAppBlockBuilderCallable(const StopAppBlockBuilderRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::StopAppBlockBuilder, request);
        }

        /**
         * An Async wrapper for StopAppBlockBuilder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopAppBlockBuilderRequestT = Model::StopAppBlockBuilderRequest>
        void StopAppBlockBuilderAsync(const StopAppBlockBuilderRequestT& request, const StopAppBlockBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::StopAppBlockBuilder, request, handler, context);
        }

        /**
         * <p>Stops the specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StopFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::StopFleetOutcome StopFleet(const Model::StopFleetRequest& request) const;

        /**
         * A Callable wrapper for StopFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopFleetRequestT = Model::StopFleetRequest>
        Model::StopFleetOutcomeCallable StopFleetCallable(const StopFleetRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::StopFleet, request);
        }

        /**
         * An Async wrapper for StopFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopFleetRequestT = Model::StopFleetRequest>
        void StopFleetAsync(const StopFleetRequestT& request, const StopFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::StopFleet, request, handler, context);
        }

        /**
         * <p>Stops the specified image builder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StopImageBuilder">AWS
         * API Reference</a></p>
         */
        virtual Model::StopImageBuilderOutcome StopImageBuilder(const Model::StopImageBuilderRequest& request) const;

        /**
         * A Callable wrapper for StopImageBuilder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopImageBuilderRequestT = Model::StopImageBuilderRequest>
        Model::StopImageBuilderOutcomeCallable StopImageBuilderCallable(const StopImageBuilderRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::StopImageBuilder, request);
        }

        /**
         * An Async wrapper for StopImageBuilder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopImageBuilderRequestT = Model::StopImageBuilderRequest>
        void StopImageBuilderAsync(const StopImageBuilderRequestT& request, const StopImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::StopImageBuilder, request, handler, context);
        }

        /**
         * <p>Adds or overwrites one or more tags for the specified AppStream 2.0 resource.
         * You can tag AppStream 2.0 image builders, images, fleets, and stacks.</p>
         * <p>Each tag consists of a key and an optional value. If a resource already has a
         * tag with the same key, this operation updates its value.</p> <p>To list the
         * current tags for your resources, use <a>ListTagsForResource</a>. To disassociate
         * tags from your resources, use <a>UntagResource</a>.</p> <p>For more information
         * about tags, see <a
         * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
         * Your Resources</a> in the <i>Amazon AppStream 2.0 Administration
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::TagResource, request, handler, context);
        }

        /**
         * <p>Disassociates one or more specified tags from the specified AppStream 2.0
         * resource.</p> <p>To list the current tags for your resources, use
         * <a>ListTagsForResource</a>.</p> <p>For more information about tags, see <a
         * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
         * Your Resources</a> in the <i>Amazon AppStream 2.0 Administration
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an app block builder.</p> <p>If the app block builder is in the
         * <code>STARTING</code> or <code>STOPPING</code> state, you can't update it. If
         * the app block builder is in the <code>RUNNING</code> state, you can only update
         * the DisplayName and Description. If the app block builder is in the
         * <code>STOPPED</code> state, you can update any attribute except the
         * Name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateAppBlockBuilder">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppBlockBuilderOutcome UpdateAppBlockBuilder(const Model::UpdateAppBlockBuilderRequest& request) const;

        /**
         * A Callable wrapper for UpdateAppBlockBuilder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAppBlockBuilderRequestT = Model::UpdateAppBlockBuilderRequest>
        Model::UpdateAppBlockBuilderOutcomeCallable UpdateAppBlockBuilderCallable(const UpdateAppBlockBuilderRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::UpdateAppBlockBuilder, request);
        }

        /**
         * An Async wrapper for UpdateAppBlockBuilder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAppBlockBuilderRequestT = Model::UpdateAppBlockBuilderRequest>
        void UpdateAppBlockBuilderAsync(const UpdateAppBlockBuilderRequestT& request, const UpdateAppBlockBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::UpdateAppBlockBuilder, request, handler, context);
        }

        /**
         * <p>Updates the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const UpdateApplicationRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::UpdateApplication, request);
        }

        /**
         * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        void UpdateApplicationAsync(const UpdateApplicationRequestT& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::UpdateApplication, request, handler, context);
        }

        /**
         * <p>Updates the specified Directory Config object in AppStream 2.0. This object
         * includes the configuration information required to join fleets and image
         * builders to Microsoft Active Directory domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateDirectoryConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDirectoryConfigOutcome UpdateDirectoryConfig(const Model::UpdateDirectoryConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateDirectoryConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDirectoryConfigRequestT = Model::UpdateDirectoryConfigRequest>
        Model::UpdateDirectoryConfigOutcomeCallable UpdateDirectoryConfigCallable(const UpdateDirectoryConfigRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::UpdateDirectoryConfig, request);
        }

        /**
         * An Async wrapper for UpdateDirectoryConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDirectoryConfigRequestT = Model::UpdateDirectoryConfigRequest>
        void UpdateDirectoryConfigAsync(const UpdateDirectoryConfigRequestT& request, const UpdateDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::UpdateDirectoryConfig, request, handler, context);
        }

        /**
         * <p>Updates the specified entitlement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateEntitlement">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEntitlementOutcome UpdateEntitlement(const Model::UpdateEntitlementRequest& request) const;

        /**
         * A Callable wrapper for UpdateEntitlement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEntitlementRequestT = Model::UpdateEntitlementRequest>
        Model::UpdateEntitlementOutcomeCallable UpdateEntitlementCallable(const UpdateEntitlementRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::UpdateEntitlement, request);
        }

        /**
         * An Async wrapper for UpdateEntitlement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEntitlementRequestT = Model::UpdateEntitlementRequest>
        void UpdateEntitlementAsync(const UpdateEntitlementRequestT& request, const UpdateEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::UpdateEntitlement, request, handler, context);
        }

        /**
         * <p>Updates the specified fleet.</p> <p>If the fleet is in the
         * <code>STOPPED</code> state, you can update any attribute except the fleet
         * name.</p> <p>If the fleet is in the <code>RUNNING</code> state, you can update
         * the following based on the fleet type:</p> <ul> <li> <p>Always-On and On-Demand
         * fleet types</p> <p>You can update the <code>DisplayName</code>,
         * <code>ComputeCapacity</code>, <code>ImageARN</code>, <code>ImageName</code>,
         * <code>IdleDisconnectTimeoutInSeconds</code>, and
         * <code>DisconnectTimeoutInSeconds</code> attributes.</p> </li> <li> <p>Elastic
         * fleet type</p> <p>You can update the <code>DisplayName</code>,
         * <code>IdleDisconnectTimeoutInSeconds</code>,
         * <code>DisconnectTimeoutInSeconds</code>, <code>MaxConcurrentSessions</code>,
         * <code>SessionScriptS3Location</code> and <code>UsbDeviceFilterStrings</code>
         * attributes.</p> </li> </ul> <p>If the fleet is in the <code>STARTING</code> or
         * <code>STOPPED</code> state, you can't update it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFleetOutcome UpdateFleet(const Model::UpdateFleetRequest& request) const;

        /**
         * A Callable wrapper for UpdateFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFleetRequestT = Model::UpdateFleetRequest>
        Model::UpdateFleetOutcomeCallable UpdateFleetCallable(const UpdateFleetRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::UpdateFleet, request);
        }

        /**
         * An Async wrapper for UpdateFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFleetRequestT = Model::UpdateFleetRequest>
        void UpdateFleetAsync(const UpdateFleetRequestT& request, const UpdateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::UpdateFleet, request, handler, context);
        }

        /**
         * <p>Adds or updates permissions for the specified private image. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateImagePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateImagePermissionsOutcome UpdateImagePermissions(const Model::UpdateImagePermissionsRequest& request) const;

        /**
         * A Callable wrapper for UpdateImagePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateImagePermissionsRequestT = Model::UpdateImagePermissionsRequest>
        Model::UpdateImagePermissionsOutcomeCallable UpdateImagePermissionsCallable(const UpdateImagePermissionsRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::UpdateImagePermissions, request);
        }

        /**
         * An Async wrapper for UpdateImagePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateImagePermissionsRequestT = Model::UpdateImagePermissionsRequest>
        void UpdateImagePermissionsAsync(const UpdateImagePermissionsRequestT& request, const UpdateImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::UpdateImagePermissions, request, handler, context);
        }

        /**
         * <p>Updates the specified fields for the specified stack.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateStack">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStackOutcome UpdateStack(const Model::UpdateStackRequest& request) const;

        /**
         * A Callable wrapper for UpdateStack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateStackRequestT = Model::UpdateStackRequest>
        Model::UpdateStackOutcomeCallable UpdateStackCallable(const UpdateStackRequestT& request) const
        {
            return SubmitCallable(&AppStreamClient::UpdateStack, request);
        }

        /**
         * An Async wrapper for UpdateStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateStackRequestT = Model::UpdateStackRequest>
        void UpdateStackAsync(const UpdateStackRequestT& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppStreamClient::UpdateStack, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AppStreamEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AppStreamClient>;
      void init(const AppStreamClientConfiguration& clientConfiguration);

      AppStreamClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AppStreamEndpointProviderBase> m_endpointProvider;
  };

} // namespace AppStream
} // namespace Aws
