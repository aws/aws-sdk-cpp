/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ds/DirectoryServiceServiceClientModel.h>

namespace Aws
{
namespace DirectoryService
{
  /**
   * <fullname>Directory Service</fullname> <p>Directory Service is a web service
   * that makes it easy for you to setup and run directories in the Amazon Web
   * Services cloud, or connect your Amazon Web Services resources with an existing
   * self-managed Microsoft Active Directory. This guide provides detailed
   * information about Directory Service operations, data types, parameters, and
   * errors. For information about Directory Services features, see <a
   * href="https://aws.amazon.com/directoryservice/">Directory Service</a> and the <a
   * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">Directory
   * Service Administration Guide</a>.</p>  <p>Amazon Web Services provides
   * SDKs that consist of libraries and sample code for various programming languages
   * and platforms (Java, Ruby, .Net, iOS, Android, etc.). The SDKs provide a
   * convenient way to create programmatic access to Directory Service and other
   * Amazon Web Services services. For more information about the Amazon Web Services
   * SDKs, including how to download and install them, see <a
   * href="http://aws.amazon.com/tools/">Tools for Amazon Web Services</a>.</p>
   * 
   */
  class AWS_DIRECTORYSERVICE_API DirectoryServiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<DirectoryServiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef DirectoryServiceClientConfiguration ClientConfigurationType;
      typedef DirectoryServiceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DirectoryServiceClient(const Aws::DirectoryService::DirectoryServiceClientConfiguration& clientConfiguration = Aws::DirectoryService::DirectoryServiceClientConfiguration(),
                               std::shared_ptr<DirectoryServiceEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DirectoryServiceClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<DirectoryServiceEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::DirectoryService::DirectoryServiceClientConfiguration& clientConfiguration = Aws::DirectoryService::DirectoryServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DirectoryServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<DirectoryServiceEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::DirectoryService::DirectoryServiceClientConfiguration& clientConfiguration = Aws::DirectoryService::DirectoryServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DirectoryServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DirectoryServiceClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DirectoryServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~DirectoryServiceClient();

        /**
         * <p>Accepts a directory sharing request that was sent from the directory owner
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/AcceptSharedDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptSharedDirectoryOutcome AcceptSharedDirectory(const Model::AcceptSharedDirectoryRequest& request) const;

        /**
         * A Callable wrapper for AcceptSharedDirectory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AcceptSharedDirectoryRequestT = Model::AcceptSharedDirectoryRequest>
        Model::AcceptSharedDirectoryOutcomeCallable AcceptSharedDirectoryCallable(const AcceptSharedDirectoryRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::AcceptSharedDirectory, request);
        }

        /**
         * An Async wrapper for AcceptSharedDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptSharedDirectoryRequestT = Model::AcceptSharedDirectoryRequest>
        void AcceptSharedDirectoryAsync(const AcceptSharedDirectoryRequestT& request, const AcceptSharedDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::AcceptSharedDirectory, request, handler, context);
        }

        /**
         * <p>If the DNS server for your self-managed domain uses a publicly addressable IP
         * address, you must add a CIDR address block to correctly route traffic to and
         * from your Microsoft AD on Amazon Web Services. <i>AddIpRoutes</i> adds this
         * address block. You can also use <i>AddIpRoutes</i> to facilitate routing traffic
         * that uses public IP ranges from your Microsoft AD on Amazon Web Services to a
         * peer VPC. </p> <p>Before you call <i>AddIpRoutes</i>, ensure that all of the
         * required permissions have been explicitly granted through a policy. For details
         * about what permissions are required to run the <i>AddIpRoutes</i> operation, see
         * <a
         * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">Directory
         * Service API Permissions: Actions, Resources, and Conditions
         * Reference</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/AddIpRoutes">AWS API
         * Reference</a></p>
         */
        virtual Model::AddIpRoutesOutcome AddIpRoutes(const Model::AddIpRoutesRequest& request) const;

        /**
         * A Callable wrapper for AddIpRoutes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddIpRoutesRequestT = Model::AddIpRoutesRequest>
        Model::AddIpRoutesOutcomeCallable AddIpRoutesCallable(const AddIpRoutesRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::AddIpRoutes, request);
        }

        /**
         * An Async wrapper for AddIpRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddIpRoutesRequestT = Model::AddIpRoutesRequest>
        void AddIpRoutesAsync(const AddIpRoutesRequestT& request, const AddIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::AddIpRoutes, request, handler, context);
        }

        /**
         * <p>Adds two domain controllers in the specified Region for the specified
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/AddRegion">AWS API
         * Reference</a></p>
         */
        virtual Model::AddRegionOutcome AddRegion(const Model::AddRegionRequest& request) const;

        /**
         * A Callable wrapper for AddRegion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddRegionRequestT = Model::AddRegionRequest>
        Model::AddRegionOutcomeCallable AddRegionCallable(const AddRegionRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::AddRegion, request);
        }

        /**
         * An Async wrapper for AddRegion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddRegionRequestT = Model::AddRegionRequest>
        void AddRegionAsync(const AddRegionRequestT& request, const AddRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::AddRegion, request, handler, context);
        }

        /**
         * <p>Adds or overwrites one or more tags for the specified directory. Each
         * directory can have a maximum of 50 tags. Each tag consists of a key and optional
         * value. Tag keys must be unique to each resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/AddTagsToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

        /**
         * A Callable wrapper for AddTagsToResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddTagsToResourceRequestT = Model::AddTagsToResourceRequest>
        Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const AddTagsToResourceRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::AddTagsToResource, request);
        }

        /**
         * An Async wrapper for AddTagsToResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddTagsToResourceRequestT = Model::AddTagsToResourceRequest>
        void AddTagsToResourceAsync(const AddTagsToResourceRequestT& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::AddTagsToResource, request, handler, context);
        }

        /**
         * <p>Cancels an in-progress schema extension to a Microsoft AD directory. Once a
         * schema extension has started replicating to all domain controllers, the task can
         * no longer be canceled. A schema extension can be canceled during any of the
         * following states; <code>Initializing</code>, <code>CreatingSnapshot</code>, and
         * <code>UpdatingSchema</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CancelSchemaExtension">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelSchemaExtensionOutcome CancelSchemaExtension(const Model::CancelSchemaExtensionRequest& request) const;

        /**
         * A Callable wrapper for CancelSchemaExtension that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelSchemaExtensionRequestT = Model::CancelSchemaExtensionRequest>
        Model::CancelSchemaExtensionOutcomeCallable CancelSchemaExtensionCallable(const CancelSchemaExtensionRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::CancelSchemaExtension, request);
        }

        /**
         * An Async wrapper for CancelSchemaExtension that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelSchemaExtensionRequestT = Model::CancelSchemaExtensionRequest>
        void CancelSchemaExtensionAsync(const CancelSchemaExtensionRequestT& request, const CancelSchemaExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::CancelSchemaExtension, request, handler, context);
        }

        /**
         * <p>Creates an AD Connector to connect to a self-managed directory.</p> <p>Before
         * you call <code>ConnectDirectory</code>, ensure that all of the required
         * permissions have been explicitly granted through a policy. For details about
         * what permissions are required to run the <code>ConnectDirectory</code>
         * operation, see <a
         * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">Directory
         * Service API Permissions: Actions, Resources, and Conditions
         * Reference</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ConnectDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::ConnectDirectoryOutcome ConnectDirectory(const Model::ConnectDirectoryRequest& request) const;

        /**
         * A Callable wrapper for ConnectDirectory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ConnectDirectoryRequestT = Model::ConnectDirectoryRequest>
        Model::ConnectDirectoryOutcomeCallable ConnectDirectoryCallable(const ConnectDirectoryRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::ConnectDirectory, request);
        }

        /**
         * An Async wrapper for ConnectDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ConnectDirectoryRequestT = Model::ConnectDirectoryRequest>
        void ConnectDirectoryAsync(const ConnectDirectoryRequestT& request, const ConnectDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::ConnectDirectory, request, handler, context);
        }

        /**
         * <p>Creates an alias for a directory and assigns the alias to the directory. The
         * alias is used to construct the access URL for the directory, such as
         * <code>http://&lt;alias&gt;.awsapps.com</code>.</p>  <p>After an alias
         * has been created, it cannot be deleted or reused, so this operation should only
         * be used when absolutely necessary.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateAlias">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateAliasOutcome CreateAlias(const Model::CreateAliasRequest& request) const;

        /**
         * A Callable wrapper for CreateAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAliasRequestT = Model::CreateAliasRequest>
        Model::CreateAliasOutcomeCallable CreateAliasCallable(const CreateAliasRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::CreateAlias, request);
        }

        /**
         * An Async wrapper for CreateAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAliasRequestT = Model::CreateAliasRequest>
        void CreateAliasAsync(const CreateAliasRequestT& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::CreateAlias, request, handler, context);
        }

        /**
         * <p>Creates an Active Directory computer object in the specified
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateComputer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateComputerOutcome CreateComputer(const Model::CreateComputerRequest& request) const;

        /**
         * A Callable wrapper for CreateComputer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateComputerRequestT = Model::CreateComputerRequest>
        Model::CreateComputerOutcomeCallable CreateComputerCallable(const CreateComputerRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::CreateComputer, request);
        }

        /**
         * An Async wrapper for CreateComputer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateComputerRequestT = Model::CreateComputerRequest>
        void CreateComputerAsync(const CreateComputerRequestT& request, const CreateComputerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::CreateComputer, request, handler, context);
        }

        /**
         * <p>Creates a conditional forwarder associated with your Amazon Web Services
         * directory. Conditional forwarders are required in order to set up a trust
         * relationship with another domain. The conditional forwarder points to the
         * trusted domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateConditionalForwarder">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConditionalForwarderOutcome CreateConditionalForwarder(const Model::CreateConditionalForwarderRequest& request) const;

        /**
         * A Callable wrapper for CreateConditionalForwarder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConditionalForwarderRequestT = Model::CreateConditionalForwarderRequest>
        Model::CreateConditionalForwarderOutcomeCallable CreateConditionalForwarderCallable(const CreateConditionalForwarderRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::CreateConditionalForwarder, request);
        }

        /**
         * An Async wrapper for CreateConditionalForwarder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConditionalForwarderRequestT = Model::CreateConditionalForwarderRequest>
        void CreateConditionalForwarderAsync(const CreateConditionalForwarderRequestT& request, const CreateConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::CreateConditionalForwarder, request, handler, context);
        }

        /**
         * <p>Creates a Simple AD directory. For more information, see <a
         * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/directory_simple_ad.html">Simple
         * Active Directory</a> in the <i>Directory Service Admin Guide</i>.</p> <p>Before
         * you call <code>CreateDirectory</code>, ensure that all of the required
         * permissions have been explicitly granted through a policy. For details about
         * what permissions are required to run the <code>CreateDirectory</code> operation,
         * see <a
         * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">Directory
         * Service API Permissions: Actions, Resources, and Conditions
         * Reference</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDirectoryOutcome CreateDirectory(const Model::CreateDirectoryRequest& request) const;

        /**
         * A Callable wrapper for CreateDirectory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDirectoryRequestT = Model::CreateDirectoryRequest>
        Model::CreateDirectoryOutcomeCallable CreateDirectoryCallable(const CreateDirectoryRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::CreateDirectory, request);
        }

        /**
         * An Async wrapper for CreateDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDirectoryRequestT = Model::CreateDirectoryRequest>
        void CreateDirectoryAsync(const CreateDirectoryRequestT& request, const CreateDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::CreateDirectory, request, handler, context);
        }

        /**
         * <p>Creates a subscription to forward real-time Directory Service domain
         * controller security logs to the specified Amazon CloudWatch log group in your
         * Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateLogSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLogSubscriptionOutcome CreateLogSubscription(const Model::CreateLogSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for CreateLogSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLogSubscriptionRequestT = Model::CreateLogSubscriptionRequest>
        Model::CreateLogSubscriptionOutcomeCallable CreateLogSubscriptionCallable(const CreateLogSubscriptionRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::CreateLogSubscription, request);
        }

        /**
         * An Async wrapper for CreateLogSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLogSubscriptionRequestT = Model::CreateLogSubscriptionRequest>
        void CreateLogSubscriptionAsync(const CreateLogSubscriptionRequestT& request, const CreateLogSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::CreateLogSubscription, request, handler, context);
        }

        /**
         * <p>Creates a Microsoft AD directory in the Amazon Web Services Cloud. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/directory_microsoft_ad.html">Managed
         * Microsoft AD</a> in the <i>Directory Service Admin Guide</i>.</p> <p>Before you
         * call <i>CreateMicrosoftAD</i>, ensure that all of the required permissions have
         * been explicitly granted through a policy. For details about what permissions are
         * required to run the <i>CreateMicrosoftAD</i> operation, see <a
         * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">Directory
         * Service API Permissions: Actions, Resources, and Conditions
         * Reference</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateMicrosoftAD">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMicrosoftADOutcome CreateMicrosoftAD(const Model::CreateMicrosoftADRequest& request) const;

        /**
         * A Callable wrapper for CreateMicrosoftAD that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMicrosoftADRequestT = Model::CreateMicrosoftADRequest>
        Model::CreateMicrosoftADOutcomeCallable CreateMicrosoftADCallable(const CreateMicrosoftADRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::CreateMicrosoftAD, request);
        }

        /**
         * An Async wrapper for CreateMicrosoftAD that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMicrosoftADRequestT = Model::CreateMicrosoftADRequest>
        void CreateMicrosoftADAsync(const CreateMicrosoftADRequestT& request, const CreateMicrosoftADResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::CreateMicrosoftAD, request, handler, context);
        }

        /**
         * <p>Creates a snapshot of a Simple AD or Microsoft AD directory in the Amazon Web
         * Services cloud.</p>  <p>You cannot take snapshots of AD Connector
         * directories.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSnapshotRequestT = Model::CreateSnapshotRequest>
        Model::CreateSnapshotOutcomeCallable CreateSnapshotCallable(const CreateSnapshotRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::CreateSnapshot, request);
        }

        /**
         * An Async wrapper for CreateSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSnapshotRequestT = Model::CreateSnapshotRequest>
        void CreateSnapshotAsync(const CreateSnapshotRequestT& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::CreateSnapshot, request, handler, context);
        }

        /**
         * <p>Directory Service for Microsoft Active Directory allows you to configure
         * trust relationships. For example, you can establish a trust between your Managed
         * Microsoft AD directory, and your existing self-managed Microsoft Active
         * Directory. This would allow you to provide users and groups access to resources
         * in either domain, with a single set of credentials.</p> <p>This action initiates
         * the creation of the Amazon Web Services side of a trust relationship between an
         * Managed Microsoft AD directory and an external domain. You can create either a
         * forest trust or an external trust.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateTrust">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateTrustOutcome CreateTrust(const Model::CreateTrustRequest& request) const;

        /**
         * A Callable wrapper for CreateTrust that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTrustRequestT = Model::CreateTrustRequest>
        Model::CreateTrustOutcomeCallable CreateTrustCallable(const CreateTrustRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::CreateTrust, request);
        }

        /**
         * An Async wrapper for CreateTrust that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTrustRequestT = Model::CreateTrustRequest>
        void CreateTrustAsync(const CreateTrustRequestT& request, const CreateTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::CreateTrust, request, handler, context);
        }

        /**
         * <p>Deletes a conditional forwarder that has been set up for your Amazon Web
         * Services directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteConditionalForwarder">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConditionalForwarderOutcome DeleteConditionalForwarder(const Model::DeleteConditionalForwarderRequest& request) const;

        /**
         * A Callable wrapper for DeleteConditionalForwarder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConditionalForwarderRequestT = Model::DeleteConditionalForwarderRequest>
        Model::DeleteConditionalForwarderOutcomeCallable DeleteConditionalForwarderCallable(const DeleteConditionalForwarderRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DeleteConditionalForwarder, request);
        }

        /**
         * An Async wrapper for DeleteConditionalForwarder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConditionalForwarderRequestT = Model::DeleteConditionalForwarderRequest>
        void DeleteConditionalForwarderAsync(const DeleteConditionalForwarderRequestT& request, const DeleteConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DeleteConditionalForwarder, request, handler, context);
        }

        /**
         * <p>Deletes an Directory Service directory.</p> <p>Before you call
         * <code>DeleteDirectory</code>, ensure that all of the required permissions have
         * been explicitly granted through a policy. For details about what permissions are
         * required to run the <code>DeleteDirectory</code> operation, see <a
         * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">Directory
         * Service API Permissions: Actions, Resources, and Conditions
         * Reference</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDirectoryOutcome DeleteDirectory(const Model::DeleteDirectoryRequest& request) const;

        /**
         * A Callable wrapper for DeleteDirectory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDirectoryRequestT = Model::DeleteDirectoryRequest>
        Model::DeleteDirectoryOutcomeCallable DeleteDirectoryCallable(const DeleteDirectoryRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DeleteDirectory, request);
        }

        /**
         * An Async wrapper for DeleteDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDirectoryRequestT = Model::DeleteDirectoryRequest>
        void DeleteDirectoryAsync(const DeleteDirectoryRequestT& request, const DeleteDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DeleteDirectory, request, handler, context);
        }

        /**
         * <p>Deletes the specified log subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteLogSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLogSubscriptionOutcome DeleteLogSubscription(const Model::DeleteLogSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DeleteLogSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLogSubscriptionRequestT = Model::DeleteLogSubscriptionRequest>
        Model::DeleteLogSubscriptionOutcomeCallable DeleteLogSubscriptionCallable(const DeleteLogSubscriptionRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DeleteLogSubscription, request);
        }

        /**
         * An Async wrapper for DeleteLogSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLogSubscriptionRequestT = Model::DeleteLogSubscriptionRequest>
        void DeleteLogSubscriptionAsync(const DeleteLogSubscriptionRequestT& request, const DeleteLogSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DeleteLogSubscription, request, handler, context);
        }

        /**
         * <p>Deletes a directory snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSnapshotOutcome DeleteSnapshot(const Model::DeleteSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSnapshotRequestT = Model::DeleteSnapshotRequest>
        Model::DeleteSnapshotOutcomeCallable DeleteSnapshotCallable(const DeleteSnapshotRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DeleteSnapshot, request);
        }

        /**
         * An Async wrapper for DeleteSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSnapshotRequestT = Model::DeleteSnapshotRequest>
        void DeleteSnapshotAsync(const DeleteSnapshotRequestT& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DeleteSnapshot, request, handler, context);
        }

        /**
         * <p>Deletes an existing trust relationship between your Managed Microsoft AD
         * directory and an external domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteTrust">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteTrustOutcome DeleteTrust(const Model::DeleteTrustRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrust that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTrustRequestT = Model::DeleteTrustRequest>
        Model::DeleteTrustOutcomeCallable DeleteTrustCallable(const DeleteTrustRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DeleteTrust, request);
        }

        /**
         * An Async wrapper for DeleteTrust that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTrustRequestT = Model::DeleteTrustRequest>
        void DeleteTrustAsync(const DeleteTrustRequestT& request, const DeleteTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DeleteTrust, request, handler, context);
        }

        /**
         * <p>Deletes from the system the certificate that was registered for secure LDAP
         * or client certificate authentication.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeregisterCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterCertificateOutcome DeregisterCertificate(const Model::DeregisterCertificateRequest& request) const;

        /**
         * A Callable wrapper for DeregisterCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterCertificateRequestT = Model::DeregisterCertificateRequest>
        Model::DeregisterCertificateOutcomeCallable DeregisterCertificateCallable(const DeregisterCertificateRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DeregisterCertificate, request);
        }

        /**
         * An Async wrapper for DeregisterCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterCertificateRequestT = Model::DeregisterCertificateRequest>
        void DeregisterCertificateAsync(const DeregisterCertificateRequestT& request, const DeregisterCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DeregisterCertificate, request, handler, context);
        }

        /**
         * <p>Removes the specified directory as a publisher to the specified Amazon SNS
         * topic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeregisterEventTopic">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterEventTopicOutcome DeregisterEventTopic(const Model::DeregisterEventTopicRequest& request) const;

        /**
         * A Callable wrapper for DeregisterEventTopic that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterEventTopicRequestT = Model::DeregisterEventTopicRequest>
        Model::DeregisterEventTopicOutcomeCallable DeregisterEventTopicCallable(const DeregisterEventTopicRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DeregisterEventTopic, request);
        }

        /**
         * An Async wrapper for DeregisterEventTopic that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterEventTopicRequestT = Model::DeregisterEventTopicRequest>
        void DeregisterEventTopicAsync(const DeregisterEventTopicRequestT& request, const DeregisterEventTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DeregisterEventTopic, request, handler, context);
        }

        /**
         * <p>Displays information about the certificate registered for secure LDAP or
         * client certificate authentication.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCertificateOutcome DescribeCertificate(const Model::DescribeCertificateRequest& request) const;

        /**
         * A Callable wrapper for DescribeCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCertificateRequestT = Model::DescribeCertificateRequest>
        Model::DescribeCertificateOutcomeCallable DescribeCertificateCallable(const DescribeCertificateRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DescribeCertificate, request);
        }

        /**
         * An Async wrapper for DescribeCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCertificateRequestT = Model::DescribeCertificateRequest>
        void DescribeCertificateAsync(const DescribeCertificateRequestT& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DescribeCertificate, request, handler, context);
        }

        /**
         * <p>Retrieves information about the type of client authentication for the
         * specified directory, if the type is specified. If no type is specified,
         * information about all client authentication types that are supported for the
         * specified directory is retrieved. Currently, only <code>SmartCard</code> is
         * supported. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeClientAuthenticationSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClientAuthenticationSettingsOutcome DescribeClientAuthenticationSettings(const Model::DescribeClientAuthenticationSettingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeClientAuthenticationSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeClientAuthenticationSettingsRequestT = Model::DescribeClientAuthenticationSettingsRequest>
        Model::DescribeClientAuthenticationSettingsOutcomeCallable DescribeClientAuthenticationSettingsCallable(const DescribeClientAuthenticationSettingsRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DescribeClientAuthenticationSettings, request);
        }

        /**
         * An Async wrapper for DescribeClientAuthenticationSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeClientAuthenticationSettingsRequestT = Model::DescribeClientAuthenticationSettingsRequest>
        void DescribeClientAuthenticationSettingsAsync(const DescribeClientAuthenticationSettingsRequestT& request, const DescribeClientAuthenticationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DescribeClientAuthenticationSettings, request, handler, context);
        }

        /**
         * <p>Obtains information about the conditional forwarders for this account.</p>
         * <p>If no input parameters are provided for RemoteDomainNames, this request
         * describes all conditional forwarders for the specified directory
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeConditionalForwarders">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConditionalForwardersOutcome DescribeConditionalForwarders(const Model::DescribeConditionalForwardersRequest& request) const;

        /**
         * A Callable wrapper for DescribeConditionalForwarders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConditionalForwardersRequestT = Model::DescribeConditionalForwardersRequest>
        Model::DescribeConditionalForwardersOutcomeCallable DescribeConditionalForwardersCallable(const DescribeConditionalForwardersRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DescribeConditionalForwarders, request);
        }

        /**
         * An Async wrapper for DescribeConditionalForwarders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConditionalForwardersRequestT = Model::DescribeConditionalForwardersRequest>
        void DescribeConditionalForwardersAsync(const DescribeConditionalForwardersRequestT& request, const DescribeConditionalForwardersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DescribeConditionalForwarders, request, handler, context);
        }

        /**
         * <p>Obtains information about the directories that belong to this account.</p>
         * <p>You can retrieve information about specific directories by passing the
         * directory identifiers in the <code>DirectoryIds</code> parameter. Otherwise, all
         * directories that belong to the current account are returned.</p> <p>This
         * operation supports pagination with the use of the <code>NextToken</code> request
         * and response parameters. If more results are available, the
         * <code>DescribeDirectoriesResult.NextToken</code> member contains a token that
         * you pass in the next call to <a>DescribeDirectories</a> to retrieve the next set
         * of items.</p> <p>You can also specify a maximum number of return results with
         * the <code>Limit</code> parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeDirectories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDirectoriesOutcome DescribeDirectories(const Model::DescribeDirectoriesRequest& request) const;

        /**
         * A Callable wrapper for DescribeDirectories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDirectoriesRequestT = Model::DescribeDirectoriesRequest>
        Model::DescribeDirectoriesOutcomeCallable DescribeDirectoriesCallable(const DescribeDirectoriesRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DescribeDirectories, request);
        }

        /**
         * An Async wrapper for DescribeDirectories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDirectoriesRequestT = Model::DescribeDirectoriesRequest>
        void DescribeDirectoriesAsync(const DescribeDirectoriesRequestT& request, const DescribeDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DescribeDirectories, request, handler, context);
        }

        /**
         * <p>Provides information about any domain controllers in your
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeDomainControllers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainControllersOutcome DescribeDomainControllers(const Model::DescribeDomainControllersRequest& request) const;

        /**
         * A Callable wrapper for DescribeDomainControllers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDomainControllersRequestT = Model::DescribeDomainControllersRequest>
        Model::DescribeDomainControllersOutcomeCallable DescribeDomainControllersCallable(const DescribeDomainControllersRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DescribeDomainControllers, request);
        }

        /**
         * An Async wrapper for DescribeDomainControllers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDomainControllersRequestT = Model::DescribeDomainControllersRequest>
        void DescribeDomainControllersAsync(const DescribeDomainControllersRequestT& request, const DescribeDomainControllersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DescribeDomainControllers, request, handler, context);
        }

        /**
         * <p>Obtains information about which Amazon SNS topics receive status messages
         * from the specified directory.</p> <p>If no input parameters are provided, such
         * as DirectoryId or TopicName, this request describes all of the associations in
         * the account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeEventTopics">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventTopicsOutcome DescribeEventTopics(const Model::DescribeEventTopicsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEventTopics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEventTopicsRequestT = Model::DescribeEventTopicsRequest>
        Model::DescribeEventTopicsOutcomeCallable DescribeEventTopicsCallable(const DescribeEventTopicsRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DescribeEventTopics, request);
        }

        /**
         * An Async wrapper for DescribeEventTopics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEventTopicsRequestT = Model::DescribeEventTopicsRequest>
        void DescribeEventTopicsAsync(const DescribeEventTopicsRequestT& request, const DescribeEventTopicsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DescribeEventTopics, request, handler, context);
        }

        /**
         * <p>Describes the status of LDAP security for the specified
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeLDAPSSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLDAPSSettingsOutcome DescribeLDAPSSettings(const Model::DescribeLDAPSSettingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeLDAPSSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLDAPSSettingsRequestT = Model::DescribeLDAPSSettingsRequest>
        Model::DescribeLDAPSSettingsOutcomeCallable DescribeLDAPSSettingsCallable(const DescribeLDAPSSettingsRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DescribeLDAPSSettings, request);
        }

        /**
         * An Async wrapper for DescribeLDAPSSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLDAPSSettingsRequestT = Model::DescribeLDAPSSettingsRequest>
        void DescribeLDAPSSettingsAsync(const DescribeLDAPSSettingsRequestT& request, const DescribeLDAPSSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DescribeLDAPSSettings, request, handler, context);
        }

        /**
         * <p>Provides information about the Regions that are configured for multi-Region
         * replication.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeRegions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeRegions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRegionsRequestT = Model::DescribeRegionsRequest>
        Model::DescribeRegionsOutcomeCallable DescribeRegionsCallable(const DescribeRegionsRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DescribeRegions, request);
        }

        /**
         * An Async wrapper for DescribeRegions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRegionsRequestT = Model::DescribeRegionsRequest>
        void DescribeRegionsAsync(const DescribeRegionsRequestT& request, const DescribeRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DescribeRegions, request, handler, context);
        }

        /**
         * <p>Retrieves information about the configurable settings for the specified
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSettingsOutcome DescribeSettings(const Model::DescribeSettingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSettingsRequestT = Model::DescribeSettingsRequest>
        Model::DescribeSettingsOutcomeCallable DescribeSettingsCallable(const DescribeSettingsRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DescribeSettings, request);
        }

        /**
         * An Async wrapper for DescribeSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSettingsRequestT = Model::DescribeSettingsRequest>
        void DescribeSettingsAsync(const DescribeSettingsRequestT& request, const DescribeSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DescribeSettings, request, handler, context);
        }

        /**
         * <p>Returns the shared directories in your account. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeSharedDirectories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSharedDirectoriesOutcome DescribeSharedDirectories(const Model::DescribeSharedDirectoriesRequest& request) const;

        /**
         * A Callable wrapper for DescribeSharedDirectories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSharedDirectoriesRequestT = Model::DescribeSharedDirectoriesRequest>
        Model::DescribeSharedDirectoriesOutcomeCallable DescribeSharedDirectoriesCallable(const DescribeSharedDirectoriesRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DescribeSharedDirectories, request);
        }

        /**
         * An Async wrapper for DescribeSharedDirectories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSharedDirectoriesRequestT = Model::DescribeSharedDirectoriesRequest>
        void DescribeSharedDirectoriesAsync(const DescribeSharedDirectoriesRequestT& request, const DescribeSharedDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DescribeSharedDirectories, request, handler, context);
        }

        /**
         * <p>Obtains information about the directory snapshots that belong to this
         * account.</p> <p>This operation supports pagination with the use of the
         * <i>NextToken</i> request and response parameters. If more results are available,
         * the <i>DescribeSnapshots.NextToken</i> member contains a token that you pass in
         * the next call to <a>DescribeSnapshots</a> to retrieve the next set of items.</p>
         * <p>You can also specify a maximum number of return results with the <i>Limit</i>
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSnapshotsOutcome DescribeSnapshots(const Model::DescribeSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for DescribeSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSnapshotsRequestT = Model::DescribeSnapshotsRequest>
        Model::DescribeSnapshotsOutcomeCallable DescribeSnapshotsCallable(const DescribeSnapshotsRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DescribeSnapshots, request);
        }

        /**
         * An Async wrapper for DescribeSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSnapshotsRequestT = Model::DescribeSnapshotsRequest>
        void DescribeSnapshotsAsync(const DescribeSnapshotsRequestT& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DescribeSnapshots, request, handler, context);
        }

        /**
         * <p>Obtains information about the trust relationships for this account.</p> <p>If
         * no input parameters are provided, such as DirectoryId or TrustIds, this request
         * describes all the trust relationships belonging to the account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeTrusts">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrustsOutcome DescribeTrusts(const Model::DescribeTrustsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTrusts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTrustsRequestT = Model::DescribeTrustsRequest>
        Model::DescribeTrustsOutcomeCallable DescribeTrustsCallable(const DescribeTrustsRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DescribeTrusts, request);
        }

        /**
         * An Async wrapper for DescribeTrusts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTrustsRequestT = Model::DescribeTrustsRequest>
        void DescribeTrustsAsync(const DescribeTrustsRequestT& request, const DescribeTrustsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DescribeTrusts, request, handler, context);
        }

        /**
         * <p> Describes the updates of a directory for a particular update type.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeUpdateDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUpdateDirectoryOutcome DescribeUpdateDirectory(const Model::DescribeUpdateDirectoryRequest& request) const;

        /**
         * A Callable wrapper for DescribeUpdateDirectory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeUpdateDirectoryRequestT = Model::DescribeUpdateDirectoryRequest>
        Model::DescribeUpdateDirectoryOutcomeCallable DescribeUpdateDirectoryCallable(const DescribeUpdateDirectoryRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DescribeUpdateDirectory, request);
        }

        /**
         * An Async wrapper for DescribeUpdateDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeUpdateDirectoryRequestT = Model::DescribeUpdateDirectoryRequest>
        void DescribeUpdateDirectoryAsync(const DescribeUpdateDirectoryRequestT& request, const DescribeUpdateDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DescribeUpdateDirectory, request, handler, context);
        }

        /**
         * <p>Disables alternative client authentication methods for the specified
         * directory. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DisableClientAuthentication">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableClientAuthenticationOutcome DisableClientAuthentication(const Model::DisableClientAuthenticationRequest& request) const;

        /**
         * A Callable wrapper for DisableClientAuthentication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableClientAuthenticationRequestT = Model::DisableClientAuthenticationRequest>
        Model::DisableClientAuthenticationOutcomeCallable DisableClientAuthenticationCallable(const DisableClientAuthenticationRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DisableClientAuthentication, request);
        }

        /**
         * An Async wrapper for DisableClientAuthentication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableClientAuthenticationRequestT = Model::DisableClientAuthenticationRequest>
        void DisableClientAuthenticationAsync(const DisableClientAuthenticationRequestT& request, const DisableClientAuthenticationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DisableClientAuthentication, request, handler, context);
        }

        /**
         * <p>Deactivates LDAP secure calls for the specified directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DisableLDAPS">AWS API
         * Reference</a></p>
         */
        virtual Model::DisableLDAPSOutcome DisableLDAPS(const Model::DisableLDAPSRequest& request) const;

        /**
         * A Callable wrapper for DisableLDAPS that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableLDAPSRequestT = Model::DisableLDAPSRequest>
        Model::DisableLDAPSOutcomeCallable DisableLDAPSCallable(const DisableLDAPSRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DisableLDAPS, request);
        }

        /**
         * An Async wrapper for DisableLDAPS that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableLDAPSRequestT = Model::DisableLDAPSRequest>
        void DisableLDAPSAsync(const DisableLDAPSRequestT& request, const DisableLDAPSResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DisableLDAPS, request, handler, context);
        }

        /**
         * <p>Disables multi-factor authentication (MFA) with the Remote Authentication
         * Dial In User Service (RADIUS) server for an AD Connector or Microsoft AD
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DisableRadius">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableRadiusOutcome DisableRadius(const Model::DisableRadiusRequest& request) const;

        /**
         * A Callable wrapper for DisableRadius that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableRadiusRequestT = Model::DisableRadiusRequest>
        Model::DisableRadiusOutcomeCallable DisableRadiusCallable(const DisableRadiusRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DisableRadius, request);
        }

        /**
         * An Async wrapper for DisableRadius that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableRadiusRequestT = Model::DisableRadiusRequest>
        void DisableRadiusAsync(const DisableRadiusRequestT& request, const DisableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DisableRadius, request, handler, context);
        }

        /**
         * <p>Disables single-sign on for a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DisableSso">AWS API
         * Reference</a></p>
         */
        virtual Model::DisableSsoOutcome DisableSso(const Model::DisableSsoRequest& request) const;

        /**
         * A Callable wrapper for DisableSso that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableSsoRequestT = Model::DisableSsoRequest>
        Model::DisableSsoOutcomeCallable DisableSsoCallable(const DisableSsoRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::DisableSso, request);
        }

        /**
         * An Async wrapper for DisableSso that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableSsoRequestT = Model::DisableSsoRequest>
        void DisableSsoAsync(const DisableSsoRequestT& request, const DisableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::DisableSso, request, handler, context);
        }

        /**
         * <p>Enables alternative client authentication methods for the specified
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/EnableClientAuthentication">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableClientAuthenticationOutcome EnableClientAuthentication(const Model::EnableClientAuthenticationRequest& request) const;

        /**
         * A Callable wrapper for EnableClientAuthentication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableClientAuthenticationRequestT = Model::EnableClientAuthenticationRequest>
        Model::EnableClientAuthenticationOutcomeCallable EnableClientAuthenticationCallable(const EnableClientAuthenticationRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::EnableClientAuthentication, request);
        }

        /**
         * An Async wrapper for EnableClientAuthentication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableClientAuthenticationRequestT = Model::EnableClientAuthenticationRequest>
        void EnableClientAuthenticationAsync(const EnableClientAuthenticationRequestT& request, const EnableClientAuthenticationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::EnableClientAuthentication, request, handler, context);
        }

        /**
         * <p>Activates the switch for the specific directory to always use LDAP secure
         * calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/EnableLDAPS">AWS API
         * Reference</a></p>
         */
        virtual Model::EnableLDAPSOutcome EnableLDAPS(const Model::EnableLDAPSRequest& request) const;

        /**
         * A Callable wrapper for EnableLDAPS that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableLDAPSRequestT = Model::EnableLDAPSRequest>
        Model::EnableLDAPSOutcomeCallable EnableLDAPSCallable(const EnableLDAPSRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::EnableLDAPS, request);
        }

        /**
         * An Async wrapper for EnableLDAPS that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableLDAPSRequestT = Model::EnableLDAPSRequest>
        void EnableLDAPSAsync(const EnableLDAPSRequestT& request, const EnableLDAPSResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::EnableLDAPS, request, handler, context);
        }

        /**
         * <p>Enables multi-factor authentication (MFA) with the Remote Authentication Dial
         * In User Service (RADIUS) server for an AD Connector or Microsoft AD
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/EnableRadius">AWS API
         * Reference</a></p>
         */
        virtual Model::EnableRadiusOutcome EnableRadius(const Model::EnableRadiusRequest& request) const;

        /**
         * A Callable wrapper for EnableRadius that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableRadiusRequestT = Model::EnableRadiusRequest>
        Model::EnableRadiusOutcomeCallable EnableRadiusCallable(const EnableRadiusRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::EnableRadius, request);
        }

        /**
         * An Async wrapper for EnableRadius that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableRadiusRequestT = Model::EnableRadiusRequest>
        void EnableRadiusAsync(const EnableRadiusRequestT& request, const EnableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::EnableRadius, request, handler, context);
        }

        /**
         * <p>Enables single sign-on for a directory. Single sign-on allows users in your
         * directory to access certain Amazon Web Services services from a computer joined
         * to the directory without having to enter their credentials
         * separately.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/EnableSso">AWS API
         * Reference</a></p>
         */
        virtual Model::EnableSsoOutcome EnableSso(const Model::EnableSsoRequest& request) const;

        /**
         * A Callable wrapper for EnableSso that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableSsoRequestT = Model::EnableSsoRequest>
        Model::EnableSsoOutcomeCallable EnableSsoCallable(const EnableSsoRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::EnableSso, request);
        }

        /**
         * An Async wrapper for EnableSso that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableSsoRequestT = Model::EnableSsoRequest>
        void EnableSsoAsync(const EnableSsoRequestT& request, const EnableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::EnableSso, request, handler, context);
        }

        /**
         * <p>Obtains directory limit information for the current Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/GetDirectoryLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDirectoryLimitsOutcome GetDirectoryLimits(const Model::GetDirectoryLimitsRequest& request) const;

        /**
         * A Callable wrapper for GetDirectoryLimits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDirectoryLimitsRequestT = Model::GetDirectoryLimitsRequest>
        Model::GetDirectoryLimitsOutcomeCallable GetDirectoryLimitsCallable(const GetDirectoryLimitsRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::GetDirectoryLimits, request);
        }

        /**
         * An Async wrapper for GetDirectoryLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDirectoryLimitsRequestT = Model::GetDirectoryLimitsRequest>
        void GetDirectoryLimitsAsync(const GetDirectoryLimitsRequestT& request, const GetDirectoryLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::GetDirectoryLimits, request, handler, context);
        }

        /**
         * <p>Obtains the manual snapshot limits for a directory.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/GetSnapshotLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSnapshotLimitsOutcome GetSnapshotLimits(const Model::GetSnapshotLimitsRequest& request) const;

        /**
         * A Callable wrapper for GetSnapshotLimits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSnapshotLimitsRequestT = Model::GetSnapshotLimitsRequest>
        Model::GetSnapshotLimitsOutcomeCallable GetSnapshotLimitsCallable(const GetSnapshotLimitsRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::GetSnapshotLimits, request);
        }

        /**
         * An Async wrapper for GetSnapshotLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSnapshotLimitsRequestT = Model::GetSnapshotLimitsRequest>
        void GetSnapshotLimitsAsync(const GetSnapshotLimitsRequestT& request, const GetSnapshotLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::GetSnapshotLimits, request, handler, context);
        }

        /**
         * <p>For the specified directory, lists all the certificates registered for a
         * secure LDAP or client certificate authentication.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ListCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCertificatesOutcome ListCertificates(const Model::ListCertificatesRequest& request) const;

        /**
         * A Callable wrapper for ListCertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCertificatesRequestT = Model::ListCertificatesRequest>
        Model::ListCertificatesOutcomeCallable ListCertificatesCallable(const ListCertificatesRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::ListCertificates, request);
        }

        /**
         * An Async wrapper for ListCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCertificatesRequestT = Model::ListCertificatesRequest>
        void ListCertificatesAsync(const ListCertificatesRequestT& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::ListCertificates, request, handler, context);
        }

        /**
         * <p>Lists the address blocks that you have added to a directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ListIpRoutes">AWS API
         * Reference</a></p>
         */
        virtual Model::ListIpRoutesOutcome ListIpRoutes(const Model::ListIpRoutesRequest& request) const;

        /**
         * A Callable wrapper for ListIpRoutes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIpRoutesRequestT = Model::ListIpRoutesRequest>
        Model::ListIpRoutesOutcomeCallable ListIpRoutesCallable(const ListIpRoutesRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::ListIpRoutes, request);
        }

        /**
         * An Async wrapper for ListIpRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIpRoutesRequestT = Model::ListIpRoutesRequest>
        void ListIpRoutesAsync(const ListIpRoutesRequestT& request, const ListIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::ListIpRoutes, request, handler, context);
        }

        /**
         * <p>Lists the active log subscriptions for the Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ListLogSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLogSubscriptionsOutcome ListLogSubscriptions(const Model::ListLogSubscriptionsRequest& request) const;

        /**
         * A Callable wrapper for ListLogSubscriptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLogSubscriptionsRequestT = Model::ListLogSubscriptionsRequest>
        Model::ListLogSubscriptionsOutcomeCallable ListLogSubscriptionsCallable(const ListLogSubscriptionsRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::ListLogSubscriptions, request);
        }

        /**
         * An Async wrapper for ListLogSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLogSubscriptionsRequestT = Model::ListLogSubscriptionsRequest>
        void ListLogSubscriptionsAsync(const ListLogSubscriptionsRequestT& request, const ListLogSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::ListLogSubscriptions, request, handler, context);
        }

        /**
         * <p>Lists all schema extensions applied to a Microsoft AD
         * Directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ListSchemaExtensions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchemaExtensionsOutcome ListSchemaExtensions(const Model::ListSchemaExtensionsRequest& request) const;

        /**
         * A Callable wrapper for ListSchemaExtensions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSchemaExtensionsRequestT = Model::ListSchemaExtensionsRequest>
        Model::ListSchemaExtensionsOutcomeCallable ListSchemaExtensionsCallable(const ListSchemaExtensionsRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::ListSchemaExtensions, request);
        }

        /**
         * An Async wrapper for ListSchemaExtensions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSchemaExtensionsRequestT = Model::ListSchemaExtensionsRequest>
        void ListSchemaExtensionsAsync(const ListSchemaExtensionsRequestT& request, const ListSchemaExtensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::ListSchemaExtensions, request, handler, context);
        }

        /**
         * <p>Lists all tags on a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Registers a certificate for a secure LDAP or client certificate
         * authentication.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RegisterCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterCertificateOutcome RegisterCertificate(const Model::RegisterCertificateRequest& request) const;

        /**
         * A Callable wrapper for RegisterCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterCertificateRequestT = Model::RegisterCertificateRequest>
        Model::RegisterCertificateOutcomeCallable RegisterCertificateCallable(const RegisterCertificateRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::RegisterCertificate, request);
        }

        /**
         * An Async wrapper for RegisterCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterCertificateRequestT = Model::RegisterCertificateRequest>
        void RegisterCertificateAsync(const RegisterCertificateRequestT& request, const RegisterCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::RegisterCertificate, request, handler, context);
        }

        /**
         * <p>Associates a directory with an Amazon SNS topic. This establishes the
         * directory as a publisher to the specified Amazon SNS topic. You can then receive
         * email or text (SMS) messages when the status of your directory changes. You get
         * notified if your directory goes from an Active status to an Impaired or
         * Inoperable status. You also receive a notification when the directory returns to
         * an Active status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RegisterEventTopic">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterEventTopicOutcome RegisterEventTopic(const Model::RegisterEventTopicRequest& request) const;

        /**
         * A Callable wrapper for RegisterEventTopic that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterEventTopicRequestT = Model::RegisterEventTopicRequest>
        Model::RegisterEventTopicOutcomeCallable RegisterEventTopicCallable(const RegisterEventTopicRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::RegisterEventTopic, request);
        }

        /**
         * An Async wrapper for RegisterEventTopic that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterEventTopicRequestT = Model::RegisterEventTopicRequest>
        void RegisterEventTopicAsync(const RegisterEventTopicRequestT& request, const RegisterEventTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::RegisterEventTopic, request, handler, context);
        }

        /**
         * <p>Rejects a directory sharing request that was sent from the directory owner
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RejectSharedDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectSharedDirectoryOutcome RejectSharedDirectory(const Model::RejectSharedDirectoryRequest& request) const;

        /**
         * A Callable wrapper for RejectSharedDirectory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RejectSharedDirectoryRequestT = Model::RejectSharedDirectoryRequest>
        Model::RejectSharedDirectoryOutcomeCallable RejectSharedDirectoryCallable(const RejectSharedDirectoryRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::RejectSharedDirectory, request);
        }

        /**
         * An Async wrapper for RejectSharedDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RejectSharedDirectoryRequestT = Model::RejectSharedDirectoryRequest>
        void RejectSharedDirectoryAsync(const RejectSharedDirectoryRequestT& request, const RejectSharedDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::RejectSharedDirectory, request, handler, context);
        }

        /**
         * <p>Removes IP address blocks from a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RemoveIpRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveIpRoutesOutcome RemoveIpRoutes(const Model::RemoveIpRoutesRequest& request) const;

        /**
         * A Callable wrapper for RemoveIpRoutes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveIpRoutesRequestT = Model::RemoveIpRoutesRequest>
        Model::RemoveIpRoutesOutcomeCallable RemoveIpRoutesCallable(const RemoveIpRoutesRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::RemoveIpRoutes, request);
        }

        /**
         * An Async wrapper for RemoveIpRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveIpRoutesRequestT = Model::RemoveIpRoutesRequest>
        void RemoveIpRoutesAsync(const RemoveIpRoutesRequestT& request, const RemoveIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::RemoveIpRoutes, request, handler, context);
        }

        /**
         * <p>Stops all replication and removes the domain controllers from the specified
         * Region. You cannot remove the primary Region with this operation. Instead, use
         * the <code>DeleteDirectory</code> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RemoveRegion">AWS API
         * Reference</a></p>
         */
        virtual Model::RemoveRegionOutcome RemoveRegion(const Model::RemoveRegionRequest& request) const;

        /**
         * A Callable wrapper for RemoveRegion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveRegionRequestT = Model::RemoveRegionRequest>
        Model::RemoveRegionOutcomeCallable RemoveRegionCallable(const RemoveRegionRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::RemoveRegion, request);
        }

        /**
         * An Async wrapper for RemoveRegion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveRegionRequestT = Model::RemoveRegionRequest>
        void RemoveRegionAsync(const RemoveRegionRequestT& request, const RemoveRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::RemoveRegion, request, handler, context);
        }

        /**
         * <p>Removes tags from a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * A Callable wrapper for RemoveTagsFromResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveTagsFromResourceRequestT = Model::RemoveTagsFromResourceRequest>
        Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::RemoveTagsFromResource, request);
        }

        /**
         * An Async wrapper for RemoveTagsFromResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveTagsFromResourceRequestT = Model::RemoveTagsFromResourceRequest>
        void RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequestT& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::RemoveTagsFromResource, request, handler, context);
        }

        /**
         * <p>Resets the password for any user in your Managed Microsoft AD or Simple AD
         * directory.</p> <p>You can reset the password for any user in your directory with
         * the following exceptions:</p> <ul> <li> <p>For Simple AD, you cannot reset the
         * password for any user that is a member of either the <b>Domain Admins</b> or
         * <b>Enterprise Admins</b> group except for the administrator user.</p> </li> <li>
         * <p>For Managed Microsoft AD, you can only reset the password for a user that is
         * in an OU based off of the NetBIOS name that you typed when you created your
         * directory. For example, you cannot reset the password for a user in the
         * <b>Amazon Web Services Reserved</b> OU. For more information about the OU
         * structure for an Managed Microsoft AD directory, see <a
         * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/ms_ad_getting_started_what_gets_created.html">What
         * Gets Created</a> in the <i>Directory Service Administration Guide</i>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ResetUserPassword">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetUserPasswordOutcome ResetUserPassword(const Model::ResetUserPasswordRequest& request) const;

        /**
         * A Callable wrapper for ResetUserPassword that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResetUserPasswordRequestT = Model::ResetUserPasswordRequest>
        Model::ResetUserPasswordOutcomeCallable ResetUserPasswordCallable(const ResetUserPasswordRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::ResetUserPassword, request);
        }

        /**
         * An Async wrapper for ResetUserPassword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetUserPasswordRequestT = Model::ResetUserPasswordRequest>
        void ResetUserPasswordAsync(const ResetUserPasswordRequestT& request, const ResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::ResetUserPassword, request, handler, context);
        }

        /**
         * <p>Restores a directory using an existing directory snapshot.</p> <p>When you
         * restore a directory from a snapshot, any changes made to the directory after the
         * snapshot date are overwritten.</p> <p>This action returns as soon as the restore
         * operation is initiated. You can monitor the progress of the restore operation by
         * calling the <a>DescribeDirectories</a> operation with the directory identifier.
         * When the <b>DirectoryDescription.Stage</b> value changes to <code>Active</code>,
         * the restore operation is complete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RestoreFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreFromSnapshotOutcome RestoreFromSnapshot(const Model::RestoreFromSnapshotRequest& request) const;

        /**
         * A Callable wrapper for RestoreFromSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreFromSnapshotRequestT = Model::RestoreFromSnapshotRequest>
        Model::RestoreFromSnapshotOutcomeCallable RestoreFromSnapshotCallable(const RestoreFromSnapshotRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::RestoreFromSnapshot, request);
        }

        /**
         * An Async wrapper for RestoreFromSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreFromSnapshotRequestT = Model::RestoreFromSnapshotRequest>
        void RestoreFromSnapshotAsync(const RestoreFromSnapshotRequestT& request, const RestoreFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::RestoreFromSnapshot, request, handler, context);
        }

        /**
         * <p>Shares a specified directory (<code>DirectoryId</code>) in your Amazon Web
         * Services account (directory owner) with another Amazon Web Services account
         * (directory consumer). With this operation you can use your directory from any
         * Amazon Web Services account and from any Amazon VPC within an Amazon Web
         * Services Region.</p> <p>When you share your Managed Microsoft AD directory,
         * Directory Service creates a shared directory in the directory consumer account.
         * This shared directory contains the metadata to provide access to the directory
         * within the directory owner account. The shared directory is visible in all VPCs
         * in the directory consumer account.</p> <p>The <code>ShareMethod</code> parameter
         * determines whether the specified directory can be shared between Amazon Web
         * Services accounts inside the same Amazon Web Services organization
         * (<code>ORGANIZATIONS</code>). It also determines whether you can share the
         * directory with any other Amazon Web Services account either inside or outside of
         * the organization (<code>HANDSHAKE</code>).</p> <p>The <code>ShareNotes</code>
         * parameter is only used when <code>HANDSHAKE</code> is called, which sends a
         * directory sharing request to the directory consumer. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ShareDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::ShareDirectoryOutcome ShareDirectory(const Model::ShareDirectoryRequest& request) const;

        /**
         * A Callable wrapper for ShareDirectory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ShareDirectoryRequestT = Model::ShareDirectoryRequest>
        Model::ShareDirectoryOutcomeCallable ShareDirectoryCallable(const ShareDirectoryRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::ShareDirectory, request);
        }

        /**
         * An Async wrapper for ShareDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ShareDirectoryRequestT = Model::ShareDirectoryRequest>
        void ShareDirectoryAsync(const ShareDirectoryRequestT& request, const ShareDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::ShareDirectory, request, handler, context);
        }

        /**
         * <p>Applies a schema extension to a Microsoft AD directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/StartSchemaExtension">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSchemaExtensionOutcome StartSchemaExtension(const Model::StartSchemaExtensionRequest& request) const;

        /**
         * A Callable wrapper for StartSchemaExtension that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartSchemaExtensionRequestT = Model::StartSchemaExtensionRequest>
        Model::StartSchemaExtensionOutcomeCallable StartSchemaExtensionCallable(const StartSchemaExtensionRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::StartSchemaExtension, request);
        }

        /**
         * An Async wrapper for StartSchemaExtension that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSchemaExtensionRequestT = Model::StartSchemaExtensionRequest>
        void StartSchemaExtensionAsync(const StartSchemaExtensionRequestT& request, const StartSchemaExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::StartSchemaExtension, request, handler, context);
        }

        /**
         * <p>Stops the directory sharing between the directory owner and consumer
         * accounts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UnshareDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::UnshareDirectoryOutcome UnshareDirectory(const Model::UnshareDirectoryRequest& request) const;

        /**
         * A Callable wrapper for UnshareDirectory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UnshareDirectoryRequestT = Model::UnshareDirectoryRequest>
        Model::UnshareDirectoryOutcomeCallable UnshareDirectoryCallable(const UnshareDirectoryRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::UnshareDirectory, request);
        }

        /**
         * An Async wrapper for UnshareDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UnshareDirectoryRequestT = Model::UnshareDirectoryRequest>
        void UnshareDirectoryAsync(const UnshareDirectoryRequestT& request, const UnshareDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::UnshareDirectory, request, handler, context);
        }

        /**
         * <p>Updates a conditional forwarder that has been set up for your Amazon Web
         * Services directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateConditionalForwarder">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConditionalForwarderOutcome UpdateConditionalForwarder(const Model::UpdateConditionalForwarderRequest& request) const;

        /**
         * A Callable wrapper for UpdateConditionalForwarder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConditionalForwarderRequestT = Model::UpdateConditionalForwarderRequest>
        Model::UpdateConditionalForwarderOutcomeCallable UpdateConditionalForwarderCallable(const UpdateConditionalForwarderRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::UpdateConditionalForwarder, request);
        }

        /**
         * An Async wrapper for UpdateConditionalForwarder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConditionalForwarderRequestT = Model::UpdateConditionalForwarderRequest>
        void UpdateConditionalForwarderAsync(const UpdateConditionalForwarderRequestT& request, const UpdateConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::UpdateConditionalForwarder, request, handler, context);
        }

        /**
         * <p> Updates the directory for a particular update type. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateDirectorySetup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDirectorySetupOutcome UpdateDirectorySetup(const Model::UpdateDirectorySetupRequest& request) const;

        /**
         * A Callable wrapper for UpdateDirectorySetup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDirectorySetupRequestT = Model::UpdateDirectorySetupRequest>
        Model::UpdateDirectorySetupOutcomeCallable UpdateDirectorySetupCallable(const UpdateDirectorySetupRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::UpdateDirectorySetup, request);
        }

        /**
         * An Async wrapper for UpdateDirectorySetup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDirectorySetupRequestT = Model::UpdateDirectorySetupRequest>
        void UpdateDirectorySetupAsync(const UpdateDirectorySetupRequestT& request, const UpdateDirectorySetupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::UpdateDirectorySetup, request, handler, context);
        }

        /**
         * <p>Adds or removes domain controllers to or from the directory. Based on the
         * difference between current value and new value (provided through this API call),
         * domain controllers will be added or removed. It may take up to 45 minutes for
         * any new domain controllers to become fully active once the requested number of
         * domain controllers is updated. During this time, you cannot make another update
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateNumberOfDomainControllers">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNumberOfDomainControllersOutcome UpdateNumberOfDomainControllers(const Model::UpdateNumberOfDomainControllersRequest& request) const;

        /**
         * A Callable wrapper for UpdateNumberOfDomainControllers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateNumberOfDomainControllersRequestT = Model::UpdateNumberOfDomainControllersRequest>
        Model::UpdateNumberOfDomainControllersOutcomeCallable UpdateNumberOfDomainControllersCallable(const UpdateNumberOfDomainControllersRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::UpdateNumberOfDomainControllers, request);
        }

        /**
         * An Async wrapper for UpdateNumberOfDomainControllers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNumberOfDomainControllersRequestT = Model::UpdateNumberOfDomainControllersRequest>
        void UpdateNumberOfDomainControllersAsync(const UpdateNumberOfDomainControllersRequestT& request, const UpdateNumberOfDomainControllersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::UpdateNumberOfDomainControllers, request, handler, context);
        }

        /**
         * <p>Updates the Remote Authentication Dial In User Service (RADIUS) server
         * information for an AD Connector or Microsoft AD directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateRadius">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateRadiusOutcome UpdateRadius(const Model::UpdateRadiusRequest& request) const;

        /**
         * A Callable wrapper for UpdateRadius that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRadiusRequestT = Model::UpdateRadiusRequest>
        Model::UpdateRadiusOutcomeCallable UpdateRadiusCallable(const UpdateRadiusRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::UpdateRadius, request);
        }

        /**
         * An Async wrapper for UpdateRadius that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRadiusRequestT = Model::UpdateRadiusRequest>
        void UpdateRadiusAsync(const UpdateRadiusRequestT& request, const UpdateRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::UpdateRadius, request, handler, context);
        }

        /**
         * <p>Updates the configurable settings for the specified directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSettingsOutcome UpdateSettings(const Model::UpdateSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSettingsRequestT = Model::UpdateSettingsRequest>
        Model::UpdateSettingsOutcomeCallable UpdateSettingsCallable(const UpdateSettingsRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::UpdateSettings, request);
        }

        /**
         * An Async wrapper for UpdateSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSettingsRequestT = Model::UpdateSettingsRequest>
        void UpdateSettingsAsync(const UpdateSettingsRequestT& request, const UpdateSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::UpdateSettings, request, handler, context);
        }

        /**
         * <p>Updates the trust that has been set up between your Managed Microsoft AD
         * directory and an self-managed Active Directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateTrust">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateTrustOutcome UpdateTrust(const Model::UpdateTrustRequest& request) const;

        /**
         * A Callable wrapper for UpdateTrust that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTrustRequestT = Model::UpdateTrustRequest>
        Model::UpdateTrustOutcomeCallable UpdateTrustCallable(const UpdateTrustRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::UpdateTrust, request);
        }

        /**
         * An Async wrapper for UpdateTrust that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTrustRequestT = Model::UpdateTrustRequest>
        void UpdateTrustAsync(const UpdateTrustRequestT& request, const UpdateTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::UpdateTrust, request, handler, context);
        }

        /**
         * <p>Directory Service for Microsoft Active Directory allows you to configure and
         * verify trust relationships.</p> <p>This action verifies a trust relationship
         * between your Managed Microsoft AD directory and an external
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/VerifyTrust">AWS API
         * Reference</a></p>
         */
        virtual Model::VerifyTrustOutcome VerifyTrust(const Model::VerifyTrustRequest& request) const;

        /**
         * A Callable wrapper for VerifyTrust that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename VerifyTrustRequestT = Model::VerifyTrustRequest>
        Model::VerifyTrustOutcomeCallable VerifyTrustCallable(const VerifyTrustRequestT& request) const
        {
            return SubmitCallable(&DirectoryServiceClient::VerifyTrust, request);
        }

        /**
         * An Async wrapper for VerifyTrust that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename VerifyTrustRequestT = Model::VerifyTrustRequest>
        void VerifyTrustAsync(const VerifyTrustRequestT& request, const VerifyTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DirectoryServiceClient::VerifyTrust, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DirectoryServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<DirectoryServiceClient>;
      void init(const DirectoryServiceClientConfiguration& clientConfiguration);

      DirectoryServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<DirectoryServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace DirectoryService
} // namespace Aws
