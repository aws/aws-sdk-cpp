/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/appstream/AppStreamServiceClientModel.h>
#include <aws/appstream/AppStreamLegacyAsyncMacros.h>

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
  class AWS_APPSTREAM_API AppStreamClient : public Aws::Client::AWSJsonClient
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
         * <p>Associates the specified application with the specified fleet. This is only
         * supported for Elastic fleets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/AssociateApplicationFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateApplicationFleetOutcome AssociateApplicationFleet(const Model::AssociateApplicationFleetRequest& request) const;


        /**
         * <p>Associates an application to entitle.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/AssociateApplicationToEntitlement">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateApplicationToEntitlementOutcome AssociateApplicationToEntitlement(const Model::AssociateApplicationToEntitlementRequest& request) const;


        /**
         * <p>Associates the specified fleet with the specified stack.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/AssociateFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateFleetOutcome AssociateFleet(const Model::AssociateFleetRequest& request) const;


        /**
         * <p>Associates the specified users with the specified stacks. Users in a user
         * pool cannot be assigned to stacks with fleets that are joined to an Active
         * Directory domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/BatchAssociateUserStack">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchAssociateUserStackOutcome BatchAssociateUserStack(const Model::BatchAssociateUserStackRequest& request) const;


        /**
         * <p>Disassociates the specified users from the specified stacks.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/BatchDisassociateUserStack">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisassociateUserStackOutcome BatchDisassociateUserStack(const Model::BatchDisassociateUserStackRequest& request) const;


        /**
         * <p>Copies the image within the same region or to a new region within the same
         * AWS account. Note that any tags you added to the image will not be
         * copied.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CopyImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyImageOutcome CopyImage(const Model::CopyImageRequest& request) const;


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
         * <p>Creates a Directory Config object in AppStream 2.0. This object includes the
         * configuration information required to join fleets and image builders to
         * Microsoft Active Directory domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateDirectoryConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDirectoryConfigOutcome CreateDirectoryConfig(const Model::CreateDirectoryConfigRequest& request) const;


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
         * <p>Creates a fleet. A fleet consists of streaming instances that your users
         * access for their applications and desktops.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFleetOutcome CreateFleet(const Model::CreateFleetRequest& request) const;


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
         * <p>Creates a URL to start an image builder streaming session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateImageBuilderStreamingURL">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImageBuilderStreamingURLOutcome CreateImageBuilderStreamingURL(const Model::CreateImageBuilderStreamingURLRequest& request) const;


        /**
         * <p>Creates a stack to start streaming applications to users. A stack consists of
         * an associated fleet, user access policies, and storage configurations.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateStack">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStackOutcome CreateStack(const Model::CreateStackRequest& request) const;


        /**
         * <p>Creates a temporary URL to start an AppStream 2.0 streaming session for the
         * specified user. A streaming URL enables application streaming to be tested
         * without user setup. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateStreamingURL">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingURLOutcome CreateStreamingURL(const Model::CreateStreamingURLRequest& request) const;


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
         * <p>Creates a usage report subscription. Usage reports are generated
         * daily.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateUsageReportSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUsageReportSubscriptionOutcome CreateUsageReportSubscription(const Model::CreateUsageReportSubscriptionRequest& request) const;


        /**
         * <p>Creates a new user in the user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;


        /**
         * <p>Deletes an app block.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteAppBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppBlockOutcome DeleteAppBlock(const Model::DeleteAppBlockRequest& request) const;


        /**
         * <p>Deletes an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;


        /**
         * <p>Deletes the specified Directory Config object from AppStream 2.0. This object
         * includes the information required to join streaming instances to an Active
         * Directory domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteDirectoryConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDirectoryConfigOutcome DeleteDirectoryConfig(const Model::DeleteDirectoryConfigRequest& request) const;


        /**
         * <p>Deletes the specified entitlement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteEntitlement">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEntitlementOutcome DeleteEntitlement(const Model::DeleteEntitlementRequest& request) const;


        /**
         * <p>Deletes the specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFleetOutcome DeleteFleet(const Model::DeleteFleetRequest& request) const;


        /**
         * <p>Deletes the specified image. You cannot delete an image when it is in use.
         * After you delete an image, you cannot provision new capacity using the
         * image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImageOutcome DeleteImage(const Model::DeleteImageRequest& request) const;


        /**
         * <p>Deletes the specified image builder and releases the capacity.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteImageBuilder">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImageBuilderOutcome DeleteImageBuilder(const Model::DeleteImageBuilderRequest& request) const;


        /**
         * <p>Deletes permissions for the specified private image. After you delete
         * permissions for an image, AWS accounts to which you previously granted these
         * permissions can no longer use the image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteImagePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImagePermissionsOutcome DeleteImagePermissions(const Model::DeleteImagePermissionsRequest& request) const;


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
         * <p>Disables usage report generation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteUsageReportSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUsageReportSubscriptionOutcome DeleteUsageReportSubscription(const Model::DeleteUsageReportSubscriptionRequest& request) const;


        /**
         * <p>Deletes a user from the user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;


        /**
         * <p>Retrieves a list that describes one or more app blocks.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeAppBlocks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppBlocksOutcome DescribeAppBlocks(const Model::DescribeAppBlocksRequest& request) const;


        /**
         * <p>Retrieves a list that describes one or more application fleet associations.
         * Either ApplicationArn or FleetName must be specified.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeApplicationFleetAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationFleetAssociationsOutcome DescribeApplicationFleetAssociations(const Model::DescribeApplicationFleetAssociationsRequest& request) const;


        /**
         * <p>Retrieves a list that describes one or more applications.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationsOutcome DescribeApplications(const Model::DescribeApplicationsRequest& request) const;


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
         * <p>Retrieves a list that describes one of more entitlements.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeEntitlements">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEntitlementsOutcome DescribeEntitlements(const Model::DescribeEntitlementsRequest& request) const;


        /**
         * <p>Retrieves a list that describes one or more specified fleets, if the fleet
         * names are provided. Otherwise, all fleets in the account are
         * described.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetsOutcome DescribeFleets(const Model::DescribeFleetsRequest& request) const;


        /**
         * <p>Retrieves a list that describes one or more specified image builders, if the
         * image builder names are provided. Otherwise, all image builders in the account
         * are described.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeImageBuilders">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImageBuildersOutcome DescribeImageBuilders(const Model::DescribeImageBuildersRequest& request) const;


        /**
         * <p>Retrieves a list that describes the permissions for shared AWS account IDs on
         * a private image that you own. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeImagePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImagePermissionsOutcome DescribeImagePermissions(const Model::DescribeImagePermissionsRequest& request) const;


        /**
         * <p>Retrieves a list that describes one or more specified images, if the image
         * names or image ARNs are provided. Otherwise, all images in the account are
         * described.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeImages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImagesOutcome DescribeImages(const Model::DescribeImagesRequest& request) const;


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
         * <p>Retrieves a list that describes one or more specified stacks, if the stack
         * names are provided. Otherwise, all stacks in the account are
         * described.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeStacks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStacksOutcome DescribeStacks(const Model::DescribeStacksRequest& request) const;


        /**
         * <p>Retrieves a list that describes one or more usage report
         * subscriptions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeUsageReportSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUsageReportSubscriptionsOutcome DescribeUsageReportSubscriptions(const Model::DescribeUsageReportSubscriptionsRequest& request) const;


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
         * <p>Retrieves a list that describes one or more specified users in the user
         * pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUsersOutcome DescribeUsers(const Model::DescribeUsersRequest& request) const;


        /**
         * <p>Disables the specified user in the user pool. Users can't sign in to
         * AppStream 2.0 until they are re-enabled. This action does not delete the user.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DisableUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableUserOutcome DisableUser(const Model::DisableUserRequest& request) const;


        /**
         * <p>Disassociates the specified application from the fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DisassociateApplicationFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateApplicationFleetOutcome DisassociateApplicationFleet(const Model::DisassociateApplicationFleetRequest& request) const;


        /**
         * <p>Deletes the specified application from the specified
         * entitlement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DisassociateApplicationFromEntitlement">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateApplicationFromEntitlementOutcome DisassociateApplicationFromEntitlement(const Model::DisassociateApplicationFromEntitlementRequest& request) const;


        /**
         * <p>Disassociates the specified fleet from the specified stack.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DisassociateFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFleetOutcome DisassociateFleet(const Model::DisassociateFleetRequest& request) const;


        /**
         * <p>Enables a user in the user pool. After being enabled, users can sign in to
         * AppStream 2.0 and open applications from the stacks to which they are
         * assigned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/EnableUser">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableUserOutcome EnableUser(const Model::EnableUserRequest& request) const;


        /**
         * <p>Immediately stops the specified streaming session.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ExpireSession">AWS
         * API Reference</a></p>
         */
        virtual Model::ExpireSessionOutcome ExpireSession(const Model::ExpireSessionRequest& request) const;


        /**
         * <p>Retrieves the name of the fleet that is associated with the specified
         * stack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ListAssociatedFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociatedFleetsOutcome ListAssociatedFleets(const Model::ListAssociatedFleetsRequest& request) const;


        /**
         * <p>Retrieves the name of the stack with which the specified fleet is
         * associated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ListAssociatedStacks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociatedStacksOutcome ListAssociatedStacks(const Model::ListAssociatedStacksRequest& request) const;


        /**
         * <p>Retrieves a list of entitled applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ListEntitledApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntitledApplicationsOutcome ListEntitledApplications(const Model::ListEntitledApplicationsRequest& request) const;


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
         * <p>Starts the specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StartFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFleetOutcome StartFleet(const Model::StartFleetRequest& request) const;


        /**
         * <p>Starts the specified image builder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StartImageBuilder">AWS
         * API Reference</a></p>
         */
        virtual Model::StartImageBuilderOutcome StartImageBuilder(const Model::StartImageBuilderRequest& request) const;


        /**
         * <p>Stops the specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StopFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::StopFleetOutcome StopFleet(const Model::StopFleetRequest& request) const;


        /**
         * <p>Stops the specified image builder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StopImageBuilder">AWS
         * API Reference</a></p>
         */
        virtual Model::StopImageBuilderOutcome StopImageBuilder(const Model::StopImageBuilderRequest& request) const;


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
         * <p>Updates the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;


        /**
         * <p>Updates the specified Directory Config object in AppStream 2.0. This object
         * includes the configuration information required to join fleets and image
         * builders to Microsoft Active Directory domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateDirectoryConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDirectoryConfigOutcome UpdateDirectoryConfig(const Model::UpdateDirectoryConfigRequest& request) const;


        /**
         * <p>Updates the specified entitlement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateEntitlement">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEntitlementOutcome UpdateEntitlement(const Model::UpdateEntitlementRequest& request) const;


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
         * <p>Adds or updates permissions for the specified private image. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateImagePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateImagePermissionsOutcome UpdateImagePermissions(const Model::UpdateImagePermissionsRequest& request) const;


        /**
         * <p>Updates the specified fields for the specified stack.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateStack">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStackOutcome UpdateStack(const Model::UpdateStackRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AppStreamEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const AppStreamClientConfiguration& clientConfiguration);

      AppStreamClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AppStreamEndpointProviderBase> m_endpointProvider;
  };

} // namespace AppStream
} // namespace Aws
