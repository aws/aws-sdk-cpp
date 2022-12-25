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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppStreamClient(const Aws::AppStream::AppStreamClientConfiguration& clientConfiguration = Aws::AppStream::AppStreamClientConfiguration(),
                        std::shared_ptr<AppStreamEndpointProviderBase> endpointProvider = Aws::MakeShared<AppStreamEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppStreamClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<AppStreamEndpointProviderBase> endpointProvider = Aws::MakeShared<AppStreamEndpointProvider>(ALLOCATION_TAG),
                        const Aws::AppStream::AppStreamClientConfiguration& clientConfiguration = Aws::AppStream::AppStreamClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppStreamClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<AppStreamEndpointProviderBase> endpointProvider = Aws::MakeShared<AppStreamEndpointProvider>(ALLOCATION_TAG),
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
         * <p>Associates the specified application with the specified fleet. This is only
         * supported for Elastic fleets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/AssociateApplicationFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateApplicationFleetOutcome AssociateApplicationFleet(const Model::AssociateApplicationFleetRequest& request) const;

        /**
         * A Callable wrapper for AssociateApplicationFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateApplicationFleetOutcomeCallable AssociateApplicationFleetCallable(const Model::AssociateApplicationFleetRequest& request) const;

        /**
         * An Async wrapper for AssociateApplicationFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateApplicationFleetAsync(const Model::AssociateApplicationFleetRequest& request, const AssociateApplicationFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates an application to entitle.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/AssociateApplicationToEntitlement">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateApplicationToEntitlementOutcome AssociateApplicationToEntitlement(const Model::AssociateApplicationToEntitlementRequest& request) const;

        /**
         * A Callable wrapper for AssociateApplicationToEntitlement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateApplicationToEntitlementOutcomeCallable AssociateApplicationToEntitlementCallable(const Model::AssociateApplicationToEntitlementRequest& request) const;

        /**
         * An Async wrapper for AssociateApplicationToEntitlement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateApplicationToEntitlementAsync(const Model::AssociateApplicationToEntitlementRequest& request, const AssociateApplicationToEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::AssociateFleetOutcomeCallable AssociateFleetCallable(const Model::AssociateFleetRequest& request) const;

        /**
         * An Async wrapper for AssociateFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateFleetAsync(const Model::AssociateFleetRequest& request, const AssociateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchAssociateUserStackOutcomeCallable BatchAssociateUserStackCallable(const Model::BatchAssociateUserStackRequest& request) const;

        /**
         * An Async wrapper for BatchAssociateUserStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchAssociateUserStackAsync(const Model::BatchAssociateUserStackRequest& request, const BatchAssociateUserStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchDisassociateUserStackOutcomeCallable BatchDisassociateUserStackCallable(const Model::BatchDisassociateUserStackRequest& request) const;

        /**
         * An Async wrapper for BatchDisassociateUserStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDisassociateUserStackAsync(const Model::BatchDisassociateUserStackRequest& request, const BatchDisassociateUserStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CopyImageOutcomeCallable CopyImageCallable(const Model::CopyImageRequest& request) const;

        /**
         * An Async wrapper for CopyImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyImageAsync(const Model::CopyImageRequest& request, const CopyImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateAppBlockOutcomeCallable CreateAppBlockCallable(const Model::CreateAppBlockRequest& request) const;

        /**
         * An Async wrapper for CreateAppBlock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAppBlockAsync(const Model::CreateAppBlockRequest& request, const CreateAppBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request) const;

        /**
         * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateDirectoryConfigOutcomeCallable CreateDirectoryConfigCallable(const Model::CreateDirectoryConfigRequest& request) const;

        /**
         * An Async wrapper for CreateDirectoryConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDirectoryConfigAsync(const Model::CreateDirectoryConfigRequest& request, const CreateDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateEntitlementOutcomeCallable CreateEntitlementCallable(const Model::CreateEntitlementRequest& request) const;

        /**
         * An Async wrapper for CreateEntitlement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEntitlementAsync(const Model::CreateEntitlementRequest& request, const CreateEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateFleetOutcomeCallable CreateFleetCallable(const Model::CreateFleetRequest& request) const;

        /**
         * An Async wrapper for CreateFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFleetAsync(const Model::CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateImageBuilderOutcomeCallable CreateImageBuilderCallable(const Model::CreateImageBuilderRequest& request) const;

        /**
         * An Async wrapper for CreateImageBuilder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateImageBuilderAsync(const Model::CreateImageBuilderRequest& request, const CreateImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateImageBuilderStreamingURLOutcomeCallable CreateImageBuilderStreamingURLCallable(const Model::CreateImageBuilderStreamingURLRequest& request) const;

        /**
         * An Async wrapper for CreateImageBuilderStreamingURL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateImageBuilderStreamingURLAsync(const Model::CreateImageBuilderStreamingURLRequest& request, const CreateImageBuilderStreamingURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateStackOutcomeCallable CreateStackCallable(const Model::CreateStackRequest& request) const;

        /**
         * An Async wrapper for CreateStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStackAsync(const Model::CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateStreamingURLOutcomeCallable CreateStreamingURLCallable(const Model::CreateStreamingURLRequest& request) const;

        /**
         * An Async wrapper for CreateStreamingURL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamingURLAsync(const Model::CreateStreamingURLRequest& request, const CreateStreamingURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateUpdatedImageOutcomeCallable CreateUpdatedImageCallable(const Model::CreateUpdatedImageRequest& request) const;

        /**
         * An Async wrapper for CreateUpdatedImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUpdatedImageAsync(const Model::CreateUpdatedImageRequest& request, const CreateUpdatedImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateUsageReportSubscriptionOutcomeCallable CreateUsageReportSubscriptionCallable(const Model::CreateUsageReportSubscriptionRequest& request) const;

        /**
         * An Async wrapper for CreateUsageReportSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUsageReportSubscriptionAsync(const Model::CreateUsageReportSubscriptionRequest& request, const CreateUsageReportSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new user in the user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * A Callable wrapper for CreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request) const;

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an app block.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteAppBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppBlockOutcome DeleteAppBlock(const Model::DeleteAppBlockRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppBlock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppBlockOutcomeCallable DeleteAppBlockCallable(const Model::DeleteAppBlockRequest& request) const;

        /**
         * An Async wrapper for DeleteAppBlock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppBlockAsync(const Model::DeleteAppBlockRequest& request, const DeleteAppBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;

        /**
         * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteDirectoryConfigOutcomeCallable DeleteDirectoryConfigCallable(const Model::DeleteDirectoryConfigRequest& request) const;

        /**
         * An Async wrapper for DeleteDirectoryConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDirectoryConfigAsync(const Model::DeleteDirectoryConfigRequest& request, const DeleteDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified entitlement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteEntitlement">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEntitlementOutcome DeleteEntitlement(const Model::DeleteEntitlementRequest& request) const;

        /**
         * A Callable wrapper for DeleteEntitlement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEntitlementOutcomeCallable DeleteEntitlementCallable(const Model::DeleteEntitlementRequest& request) const;

        /**
         * An Async wrapper for DeleteEntitlement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEntitlementAsync(const Model::DeleteEntitlementRequest& request, const DeleteEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFleetOutcome DeleteFleet(const Model::DeleteFleetRequest& request) const;

        /**
         * A Callable wrapper for DeleteFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFleetOutcomeCallable DeleteFleetCallable(const Model::DeleteFleetRequest& request) const;

        /**
         * An Async wrapper for DeleteFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFleetAsync(const Model::DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteImageOutcomeCallable DeleteImageCallable(const Model::DeleteImageRequest& request) const;

        /**
         * An Async wrapper for DeleteImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteImageAsync(const Model::DeleteImageRequest& request, const DeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteImageBuilderOutcomeCallable DeleteImageBuilderCallable(const Model::DeleteImageBuilderRequest& request) const;

        /**
         * An Async wrapper for DeleteImageBuilder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteImageBuilderAsync(const Model::DeleteImageBuilderRequest& request, const DeleteImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteImagePermissionsOutcomeCallable DeleteImagePermissionsCallable(const Model::DeleteImagePermissionsRequest& request) const;

        /**
         * An Async wrapper for DeleteImagePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteImagePermissionsAsync(const Model::DeleteImagePermissionsRequest& request, const DeleteImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteStackOutcomeCallable DeleteStackCallable(const Model::DeleteStackRequest& request) const;

        /**
         * An Async wrapper for DeleteStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStackAsync(const Model::DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables usage report generation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteUsageReportSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUsageReportSubscriptionOutcome DeleteUsageReportSubscription(const Model::DeleteUsageReportSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DeleteUsageReportSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUsageReportSubscriptionOutcomeCallable DeleteUsageReportSubscriptionCallable(const Model::DeleteUsageReportSubscriptionRequest& request) const;

        /**
         * An Async wrapper for DeleteUsageReportSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUsageReportSubscriptionAsync(const Model::DeleteUsageReportSubscriptionRequest& request, const DeleteUsageReportSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a user from the user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * A Callable wrapper for DeleteUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeAppBlocksOutcomeCallable DescribeAppBlocksCallable(const Model::DescribeAppBlocksRequest& request) const;

        /**
         * An Async wrapper for DescribeAppBlocks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAppBlocksAsync(const Model::DescribeAppBlocksRequest& request, const DescribeAppBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeApplicationFleetAssociationsOutcomeCallable DescribeApplicationFleetAssociationsCallable(const Model::DescribeApplicationFleetAssociationsRequest& request) const;

        /**
         * An Async wrapper for DescribeApplicationFleetAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeApplicationFleetAssociationsAsync(const Model::DescribeApplicationFleetAssociationsRequest& request, const DescribeApplicationFleetAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeApplicationsOutcomeCallable DescribeApplicationsCallable(const Model::DescribeApplicationsRequest& request) const;

        /**
         * An Async wrapper for DescribeApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeApplicationsAsync(const Model::DescribeApplicationsRequest& request, const DescribeApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeDirectoryConfigsOutcomeCallable DescribeDirectoryConfigsCallable(const Model::DescribeDirectoryConfigsRequest& request) const;

        /**
         * An Async wrapper for DescribeDirectoryConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDirectoryConfigsAsync(const Model::DescribeDirectoryConfigsRequest& request, const DescribeDirectoryConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeEntitlementsOutcomeCallable DescribeEntitlementsCallable(const Model::DescribeEntitlementsRequest& request) const;

        /**
         * An Async wrapper for DescribeEntitlements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEntitlementsAsync(const Model::DescribeEntitlementsRequest& request, const DescribeEntitlementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeFleetsOutcomeCallable DescribeFleetsCallable(const Model::DescribeFleetsRequest& request) const;

        /**
         * An Async wrapper for DescribeFleets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetsAsync(const Model::DescribeFleetsRequest& request, const DescribeFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeImageBuildersOutcomeCallable DescribeImageBuildersCallable(const Model::DescribeImageBuildersRequest& request) const;

        /**
         * An Async wrapper for DescribeImageBuilders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImageBuildersAsync(const Model::DescribeImageBuildersRequest& request, const DescribeImageBuildersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeImagePermissionsOutcomeCallable DescribeImagePermissionsCallable(const Model::DescribeImagePermissionsRequest& request) const;

        /**
         * An Async wrapper for DescribeImagePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImagePermissionsAsync(const Model::DescribeImagePermissionsRequest& request, const DescribeImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeImagesOutcomeCallable DescribeImagesCallable(const Model::DescribeImagesRequest& request) const;

        /**
         * An Async wrapper for DescribeImages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImagesAsync(const Model::DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeSessionsOutcomeCallable DescribeSessionsCallable(const Model::DescribeSessionsRequest& request) const;

        /**
         * An Async wrapper for DescribeSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSessionsAsync(const Model::DescribeSessionsRequest& request, const DescribeSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeStacksOutcomeCallable DescribeStacksCallable(const Model::DescribeStacksRequest& request) const;

        /**
         * An Async wrapper for DescribeStacks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStacksAsync(const Model::DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeUsageReportSubscriptionsOutcomeCallable DescribeUsageReportSubscriptionsCallable(const Model::DescribeUsageReportSubscriptionsRequest& request) const;

        /**
         * An Async wrapper for DescribeUsageReportSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUsageReportSubscriptionsAsync(const Model::DescribeUsageReportSubscriptionsRequest& request, const DescribeUsageReportSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeUserStackAssociationsOutcomeCallable DescribeUserStackAssociationsCallable(const Model::DescribeUserStackAssociationsRequest& request) const;

        /**
         * An Async wrapper for DescribeUserStackAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserStackAssociationsAsync(const Model::DescribeUserStackAssociationsRequest& request, const DescribeUserStackAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeUsersOutcomeCallable DescribeUsersCallable(const Model::DescribeUsersRequest& request) const;

        /**
         * An Async wrapper for DescribeUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUsersAsync(const Model::DescribeUsersRequest& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DisableUserOutcomeCallable DisableUserCallable(const Model::DisableUserRequest& request) const;

        /**
         * An Async wrapper for DisableUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableUserAsync(const Model::DisableUserRequest& request, const DisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DisassociateApplicationFleetOutcomeCallable DisassociateApplicationFleetCallable(const Model::DisassociateApplicationFleetRequest& request) const;

        /**
         * An Async wrapper for DisassociateApplicationFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateApplicationFleetAsync(const Model::DisassociateApplicationFleetRequest& request, const DisassociateApplicationFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DisassociateApplicationFromEntitlementOutcomeCallable DisassociateApplicationFromEntitlementCallable(const Model::DisassociateApplicationFromEntitlementRequest& request) const;

        /**
         * An Async wrapper for DisassociateApplicationFromEntitlement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateApplicationFromEntitlementAsync(const Model::DisassociateApplicationFromEntitlementRequest& request, const DisassociateApplicationFromEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DisassociateFleetOutcomeCallable DisassociateFleetCallable(const Model::DisassociateFleetRequest& request) const;

        /**
         * An Async wrapper for DisassociateFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateFleetAsync(const Model::DisassociateFleetRequest& request, const DisassociateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::EnableUserOutcomeCallable EnableUserCallable(const Model::EnableUserRequest& request) const;

        /**
         * An Async wrapper for EnableUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableUserAsync(const Model::EnableUserRequest& request, const EnableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ExpireSessionOutcomeCallable ExpireSessionCallable(const Model::ExpireSessionRequest& request) const;

        /**
         * An Async wrapper for ExpireSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExpireSessionAsync(const Model::ExpireSessionRequest& request, const ExpireSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListAssociatedFleetsOutcomeCallable ListAssociatedFleetsCallable(const Model::ListAssociatedFleetsRequest& request) const;

        /**
         * An Async wrapper for ListAssociatedFleets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssociatedFleetsAsync(const Model::ListAssociatedFleetsRequest& request, const ListAssociatedFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListAssociatedStacksOutcomeCallable ListAssociatedStacksCallable(const Model::ListAssociatedStacksRequest& request) const;

        /**
         * An Async wrapper for ListAssociatedStacks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssociatedStacksAsync(const Model::ListAssociatedStacksRequest& request, const ListAssociatedStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of entitled applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ListEntitledApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntitledApplicationsOutcome ListEntitledApplications(const Model::ListEntitledApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListEntitledApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEntitledApplicationsOutcomeCallable ListEntitledApplicationsCallable(const Model::ListEntitledApplicationsRequest& request) const;

        /**
         * An Async wrapper for ListEntitledApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEntitledApplicationsAsync(const Model::ListEntitledApplicationsRequest& request, const ListEntitledApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StartFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFleetOutcome StartFleet(const Model::StartFleetRequest& request) const;

        /**
         * A Callable wrapper for StartFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartFleetOutcomeCallable StartFleetCallable(const Model::StartFleetRequest& request) const;

        /**
         * An Async wrapper for StartFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartFleetAsync(const Model::StartFleetRequest& request, const StartFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the specified image builder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StartImageBuilder">AWS
         * API Reference</a></p>
         */
        virtual Model::StartImageBuilderOutcome StartImageBuilder(const Model::StartImageBuilderRequest& request) const;

        /**
         * A Callable wrapper for StartImageBuilder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartImageBuilderOutcomeCallable StartImageBuilderCallable(const Model::StartImageBuilderRequest& request) const;

        /**
         * An Async wrapper for StartImageBuilder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartImageBuilderAsync(const Model::StartImageBuilderRequest& request, const StartImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StopFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::StopFleetOutcome StopFleet(const Model::StopFleetRequest& request) const;

        /**
         * A Callable wrapper for StopFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopFleetOutcomeCallable StopFleetCallable(const Model::StopFleetRequest& request) const;

        /**
         * An Async wrapper for StopFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopFleetAsync(const Model::StopFleetRequest& request, const StopFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the specified image builder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StopImageBuilder">AWS
         * API Reference</a></p>
         */
        virtual Model::StopImageBuilderOutcome StopImageBuilder(const Model::StopImageBuilderRequest& request) const;

        /**
         * A Callable wrapper for StopImageBuilder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopImageBuilderOutcomeCallable StopImageBuilderCallable(const Model::StopImageBuilderRequest& request) const;

        /**
         * An Async wrapper for StopImageBuilder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopImageBuilderAsync(const Model::StopImageBuilderRequest& request, const StopImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const Model::UpdateApplicationRequest& request) const;

        /**
         * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationAsync(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateDirectoryConfigOutcomeCallable UpdateDirectoryConfigCallable(const Model::UpdateDirectoryConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateDirectoryConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDirectoryConfigAsync(const Model::UpdateDirectoryConfigRequest& request, const UpdateDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified entitlement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateEntitlement">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEntitlementOutcome UpdateEntitlement(const Model::UpdateEntitlementRequest& request) const;

        /**
         * A Callable wrapper for UpdateEntitlement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEntitlementOutcomeCallable UpdateEntitlementCallable(const Model::UpdateEntitlementRequest& request) const;

        /**
         * An Async wrapper for UpdateEntitlement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEntitlementAsync(const Model::UpdateEntitlementRequest& request, const UpdateEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateFleetOutcomeCallable UpdateFleetCallable(const Model::UpdateFleetRequest& request) const;

        /**
         * An Async wrapper for UpdateFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFleetAsync(const Model::UpdateFleetRequest& request, const UpdateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateImagePermissionsOutcomeCallable UpdateImagePermissionsCallable(const Model::UpdateImagePermissionsRequest& request) const;

        /**
         * An Async wrapper for UpdateImagePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateImagePermissionsAsync(const Model::UpdateImagePermissionsRequest& request, const UpdateImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateStackOutcomeCallable UpdateStackCallable(const Model::UpdateStackRequest& request) const;

        /**
         * An Async wrapper for UpdateStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStackAsync(const Model::UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
