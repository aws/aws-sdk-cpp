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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DirectoryServiceClient(const Aws::DirectoryService::DirectoryServiceClientConfiguration& clientConfiguration = Aws::DirectoryService::DirectoryServiceClientConfiguration(),
                               std::shared_ptr<DirectoryServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<DirectoryServiceEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DirectoryServiceClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<DirectoryServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<DirectoryServiceEndpointProvider>(ALLOCATION_TAG),
                               const Aws::DirectoryService::DirectoryServiceClientConfiguration& clientConfiguration = Aws::DirectoryService::DirectoryServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DirectoryServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<DirectoryServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<DirectoryServiceEndpointProvider>(ALLOCATION_TAG),
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
        virtual Model::AcceptSharedDirectoryOutcomeCallable AcceptSharedDirectoryCallable(const Model::AcceptSharedDirectoryRequest& request) const;

        /**
         * An Async wrapper for AcceptSharedDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptSharedDirectoryAsync(const Model::AcceptSharedDirectoryRequest& request, const AcceptSharedDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::AddIpRoutesOutcomeCallable AddIpRoutesCallable(const Model::AddIpRoutesRequest& request) const;

        /**
         * An Async wrapper for AddIpRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddIpRoutesAsync(const Model::AddIpRoutesRequest& request, const AddIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::AddRegionOutcomeCallable AddRegionCallable(const Model::AddRegionRequest& request) const;

        /**
         * An Async wrapper for AddRegion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddRegionAsync(const Model::AddRegionRequest& request, const AddRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;

        /**
         * An Async wrapper for AddTagsToResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsToResourceAsync(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CancelSchemaExtensionOutcomeCallable CancelSchemaExtensionCallable(const Model::CancelSchemaExtensionRequest& request) const;

        /**
         * An Async wrapper for CancelSchemaExtension that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelSchemaExtensionAsync(const Model::CancelSchemaExtensionRequest& request, const CancelSchemaExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ConnectDirectoryOutcomeCallable ConnectDirectoryCallable(const Model::ConnectDirectoryRequest& request) const;

        /**
         * An Async wrapper for ConnectDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConnectDirectoryAsync(const Model::ConnectDirectoryRequest& request, const ConnectDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateAliasOutcomeCallable CreateAliasCallable(const Model::CreateAliasRequest& request) const;

        /**
         * An Async wrapper for CreateAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAliasAsync(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateComputerOutcomeCallable CreateComputerCallable(const Model::CreateComputerRequest& request) const;

        /**
         * An Async wrapper for CreateComputer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateComputerAsync(const Model::CreateComputerRequest& request, const CreateComputerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateConditionalForwarderOutcomeCallable CreateConditionalForwarderCallable(const Model::CreateConditionalForwarderRequest& request) const;

        /**
         * An Async wrapper for CreateConditionalForwarder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConditionalForwarderAsync(const Model::CreateConditionalForwarderRequest& request, const CreateConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateDirectoryOutcomeCallable CreateDirectoryCallable(const Model::CreateDirectoryRequest& request) const;

        /**
         * An Async wrapper for CreateDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDirectoryAsync(const Model::CreateDirectoryRequest& request, const CreateDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateLogSubscriptionOutcomeCallable CreateLogSubscriptionCallable(const Model::CreateLogSubscriptionRequest& request) const;

        /**
         * An Async wrapper for CreateLogSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLogSubscriptionAsync(const Model::CreateLogSubscriptionRequest& request, const CreateLogSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateMicrosoftADOutcomeCallable CreateMicrosoftADCallable(const Model::CreateMicrosoftADRequest& request) const;

        /**
         * An Async wrapper for CreateMicrosoftAD that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMicrosoftADAsync(const Model::CreateMicrosoftADRequest& request, const CreateMicrosoftADResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateSnapshotOutcomeCallable CreateSnapshotCallable(const Model::CreateSnapshotRequest& request) const;

        /**
         * An Async wrapper for CreateSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateTrustOutcomeCallable CreateTrustCallable(const Model::CreateTrustRequest& request) const;

        /**
         * An Async wrapper for CreateTrust that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrustAsync(const Model::CreateTrustRequest& request, const CreateTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteConditionalForwarderOutcomeCallable DeleteConditionalForwarderCallable(const Model::DeleteConditionalForwarderRequest& request) const;

        /**
         * An Async wrapper for DeleteConditionalForwarder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConditionalForwarderAsync(const Model::DeleteConditionalForwarderRequest& request, const DeleteConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteDirectoryOutcomeCallable DeleteDirectoryCallable(const Model::DeleteDirectoryRequest& request) const;

        /**
         * An Async wrapper for DeleteDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDirectoryAsync(const Model::DeleteDirectoryRequest& request, const DeleteDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified log subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteLogSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLogSubscriptionOutcome DeleteLogSubscription(const Model::DeleteLogSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DeleteLogSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLogSubscriptionOutcomeCallable DeleteLogSubscriptionCallable(const Model::DeleteLogSubscriptionRequest& request) const;

        /**
         * An Async wrapper for DeleteLogSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLogSubscriptionAsync(const Model::DeleteLogSubscriptionRequest& request, const DeleteLogSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a directory snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSnapshotOutcome DeleteSnapshot(const Model::DeleteSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSnapshotOutcomeCallable DeleteSnapshotCallable(const Model::DeleteSnapshotRequest& request) const;

        /**
         * An Async wrapper for DeleteSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSnapshotAsync(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteTrustOutcomeCallable DeleteTrustCallable(const Model::DeleteTrustRequest& request) const;

        /**
         * An Async wrapper for DeleteTrust that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrustAsync(const Model::DeleteTrustRequest& request, const DeleteTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeregisterCertificateOutcomeCallable DeregisterCertificateCallable(const Model::DeregisterCertificateRequest& request) const;

        /**
         * An Async wrapper for DeregisterCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterCertificateAsync(const Model::DeregisterCertificateRequest& request, const DeregisterCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeregisterEventTopicOutcomeCallable DeregisterEventTopicCallable(const Model::DeregisterEventTopicRequest& request) const;

        /**
         * An Async wrapper for DeregisterEventTopic that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterEventTopicAsync(const Model::DeregisterEventTopicRequest& request, const DeregisterEventTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeCertificateOutcomeCallable DescribeCertificateCallable(const Model::DescribeCertificateRequest& request) const;

        /**
         * An Async wrapper for DescribeCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCertificateAsync(const Model::DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeClientAuthenticationSettingsOutcomeCallable DescribeClientAuthenticationSettingsCallable(const Model::DescribeClientAuthenticationSettingsRequest& request) const;

        /**
         * An Async wrapper for DescribeClientAuthenticationSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClientAuthenticationSettingsAsync(const Model::DescribeClientAuthenticationSettingsRequest& request, const DescribeClientAuthenticationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeConditionalForwardersOutcomeCallable DescribeConditionalForwardersCallable(const Model::DescribeConditionalForwardersRequest& request) const;

        /**
         * An Async wrapper for DescribeConditionalForwarders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConditionalForwardersAsync(const Model::DescribeConditionalForwardersRequest& request, const DescribeConditionalForwardersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeDirectoriesOutcomeCallable DescribeDirectoriesCallable(const Model::DescribeDirectoriesRequest& request) const;

        /**
         * An Async wrapper for DescribeDirectories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDirectoriesAsync(const Model::DescribeDirectoriesRequest& request, const DescribeDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeDomainControllersOutcomeCallable DescribeDomainControllersCallable(const Model::DescribeDomainControllersRequest& request) const;

        /**
         * An Async wrapper for DescribeDomainControllers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDomainControllersAsync(const Model::DescribeDomainControllersRequest& request, const DescribeDomainControllersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeEventTopicsOutcomeCallable DescribeEventTopicsCallable(const Model::DescribeEventTopicsRequest& request) const;

        /**
         * An Async wrapper for DescribeEventTopics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventTopicsAsync(const Model::DescribeEventTopicsRequest& request, const DescribeEventTopicsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeLDAPSSettingsOutcomeCallable DescribeLDAPSSettingsCallable(const Model::DescribeLDAPSSettingsRequest& request) const;

        /**
         * An Async wrapper for DescribeLDAPSSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLDAPSSettingsAsync(const Model::DescribeLDAPSSettingsRequest& request, const DescribeLDAPSSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request) const;

        /**
         * An Async wrapper for DescribeRegions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeSettingsOutcomeCallable DescribeSettingsCallable(const Model::DescribeSettingsRequest& request) const;

        /**
         * An Async wrapper for DescribeSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSettingsAsync(const Model::DescribeSettingsRequest& request, const DescribeSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeSharedDirectoriesOutcomeCallable DescribeSharedDirectoriesCallable(const Model::DescribeSharedDirectoriesRequest& request) const;

        /**
         * An Async wrapper for DescribeSharedDirectories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSharedDirectoriesAsync(const Model::DescribeSharedDirectoriesRequest& request, const DescribeSharedDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeSnapshotsOutcomeCallable DescribeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request) const;

        /**
         * An Async wrapper for DescribeSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSnapshotsAsync(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeTrustsOutcomeCallable DescribeTrustsCallable(const Model::DescribeTrustsRequest& request) const;

        /**
         * An Async wrapper for DescribeTrusts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTrustsAsync(const Model::DescribeTrustsRequest& request, const DescribeTrustsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeUpdateDirectoryOutcomeCallable DescribeUpdateDirectoryCallable(const Model::DescribeUpdateDirectoryRequest& request) const;

        /**
         * An Async wrapper for DescribeUpdateDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUpdateDirectoryAsync(const Model::DescribeUpdateDirectoryRequest& request, const DescribeUpdateDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DisableClientAuthenticationOutcomeCallable DisableClientAuthenticationCallable(const Model::DisableClientAuthenticationRequest& request) const;

        /**
         * An Async wrapper for DisableClientAuthentication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableClientAuthenticationAsync(const Model::DisableClientAuthenticationRequest& request, const DisableClientAuthenticationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DisableLDAPSOutcomeCallable DisableLDAPSCallable(const Model::DisableLDAPSRequest& request) const;

        /**
         * An Async wrapper for DisableLDAPS that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableLDAPSAsync(const Model::DisableLDAPSRequest& request, const DisableLDAPSResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DisableRadiusOutcomeCallable DisableRadiusCallable(const Model::DisableRadiusRequest& request) const;

        /**
         * An Async wrapper for DisableRadius that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableRadiusAsync(const Model::DisableRadiusRequest& request, const DisableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables single-sign on for a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DisableSso">AWS API
         * Reference</a></p>
         */
        virtual Model::DisableSsoOutcome DisableSso(const Model::DisableSsoRequest& request) const;

        /**
         * A Callable wrapper for DisableSso that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableSsoOutcomeCallable DisableSsoCallable(const Model::DisableSsoRequest& request) const;

        /**
         * An Async wrapper for DisableSso that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableSsoAsync(const Model::DisableSsoRequest& request, const DisableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::EnableClientAuthenticationOutcomeCallable EnableClientAuthenticationCallable(const Model::EnableClientAuthenticationRequest& request) const;

        /**
         * An Async wrapper for EnableClientAuthentication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableClientAuthenticationAsync(const Model::EnableClientAuthenticationRequest& request, const EnableClientAuthenticationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::EnableLDAPSOutcomeCallable EnableLDAPSCallable(const Model::EnableLDAPSRequest& request) const;

        /**
         * An Async wrapper for EnableLDAPS that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableLDAPSAsync(const Model::EnableLDAPSRequest& request, const EnableLDAPSResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::EnableRadiusOutcomeCallable EnableRadiusCallable(const Model::EnableRadiusRequest& request) const;

        /**
         * An Async wrapper for EnableRadius that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableRadiusAsync(const Model::EnableRadiusRequest& request, const EnableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::EnableSsoOutcomeCallable EnableSsoCallable(const Model::EnableSsoRequest& request) const;

        /**
         * An Async wrapper for EnableSso that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableSsoAsync(const Model::EnableSsoRequest& request, const EnableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDirectoryLimitsOutcomeCallable GetDirectoryLimitsCallable(const Model::GetDirectoryLimitsRequest& request) const;

        /**
         * An Async wrapper for GetDirectoryLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDirectoryLimitsAsync(const Model::GetDirectoryLimitsRequest& request, const GetDirectoryLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetSnapshotLimitsOutcomeCallable GetSnapshotLimitsCallable(const Model::GetSnapshotLimitsRequest& request) const;

        /**
         * An Async wrapper for GetSnapshotLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSnapshotLimitsAsync(const Model::GetSnapshotLimitsRequest& request, const GetSnapshotLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListCertificatesOutcomeCallable ListCertificatesCallable(const Model::ListCertificatesRequest& request) const;

        /**
         * An Async wrapper for ListCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCertificatesAsync(const Model::ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListIpRoutesOutcomeCallable ListIpRoutesCallable(const Model::ListIpRoutesRequest& request) const;

        /**
         * An Async wrapper for ListIpRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIpRoutesAsync(const Model::ListIpRoutesRequest& request, const ListIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListLogSubscriptionsOutcomeCallable ListLogSubscriptionsCallable(const Model::ListLogSubscriptionsRequest& request) const;

        /**
         * An Async wrapper for ListLogSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLogSubscriptionsAsync(const Model::ListLogSubscriptionsRequest& request, const ListLogSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListSchemaExtensionsOutcomeCallable ListSchemaExtensionsCallable(const Model::ListSchemaExtensionsRequest& request) const;

        /**
         * An Async wrapper for ListSchemaExtensions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSchemaExtensionsAsync(const Model::ListSchemaExtensionsRequest& request, const ListSchemaExtensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags on a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ListTagsForResource">AWS
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
         * <p>Registers a certificate for a secure LDAP or client certificate
         * authentication.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RegisterCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterCertificateOutcome RegisterCertificate(const Model::RegisterCertificateRequest& request) const;

        /**
         * A Callable wrapper for RegisterCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterCertificateOutcomeCallable RegisterCertificateCallable(const Model::RegisterCertificateRequest& request) const;

        /**
         * An Async wrapper for RegisterCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterCertificateAsync(const Model::RegisterCertificateRequest& request, const RegisterCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RegisterEventTopicOutcomeCallable RegisterEventTopicCallable(const Model::RegisterEventTopicRequest& request) const;

        /**
         * An Async wrapper for RegisterEventTopic that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterEventTopicAsync(const Model::RegisterEventTopicRequest& request, const RegisterEventTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RejectSharedDirectoryOutcomeCallable RejectSharedDirectoryCallable(const Model::RejectSharedDirectoryRequest& request) const;

        /**
         * An Async wrapper for RejectSharedDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectSharedDirectoryAsync(const Model::RejectSharedDirectoryRequest& request, const RejectSharedDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes IP address blocks from a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RemoveIpRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveIpRoutesOutcome RemoveIpRoutes(const Model::RemoveIpRoutesRequest& request) const;

        /**
         * A Callable wrapper for RemoveIpRoutes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveIpRoutesOutcomeCallable RemoveIpRoutesCallable(const Model::RemoveIpRoutesRequest& request) const;

        /**
         * An Async wrapper for RemoveIpRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveIpRoutesAsync(const Model::RemoveIpRoutesRequest& request, const RemoveIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RemoveRegionOutcomeCallable RemoveRegionCallable(const Model::RemoveRegionRequest& request) const;

        /**
         * An Async wrapper for RemoveRegion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveRegionAsync(const Model::RemoveRegionRequest& request, const RemoveRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * A Callable wrapper for RemoveTagsFromResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * An Async wrapper for RemoveTagsFromResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsFromResourceAsync(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ResetUserPasswordOutcomeCallable ResetUserPasswordCallable(const Model::ResetUserPasswordRequest& request) const;

        /**
         * An Async wrapper for ResetUserPassword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetUserPasswordAsync(const Model::ResetUserPasswordRequest& request, const ResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RestoreFromSnapshotOutcomeCallable RestoreFromSnapshotCallable(const Model::RestoreFromSnapshotRequest& request) const;

        /**
         * An Async wrapper for RestoreFromSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreFromSnapshotAsync(const Model::RestoreFromSnapshotRequest& request, const RestoreFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ShareDirectoryOutcomeCallable ShareDirectoryCallable(const Model::ShareDirectoryRequest& request) const;

        /**
         * An Async wrapper for ShareDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ShareDirectoryAsync(const Model::ShareDirectoryRequest& request, const ShareDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartSchemaExtensionOutcomeCallable StartSchemaExtensionCallable(const Model::StartSchemaExtensionRequest& request) const;

        /**
         * An Async wrapper for StartSchemaExtension that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartSchemaExtensionAsync(const Model::StartSchemaExtensionRequest& request, const StartSchemaExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UnshareDirectoryOutcomeCallable UnshareDirectoryCallable(const Model::UnshareDirectoryRequest& request) const;

        /**
         * An Async wrapper for UnshareDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnshareDirectoryAsync(const Model::UnshareDirectoryRequest& request, const UnshareDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateConditionalForwarderOutcomeCallable UpdateConditionalForwarderCallable(const Model::UpdateConditionalForwarderRequest& request) const;

        /**
         * An Async wrapper for UpdateConditionalForwarder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConditionalForwarderAsync(const Model::UpdateConditionalForwarderRequest& request, const UpdateConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateDirectorySetupOutcomeCallable UpdateDirectorySetupCallable(const Model::UpdateDirectorySetupRequest& request) const;

        /**
         * An Async wrapper for UpdateDirectorySetup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDirectorySetupAsync(const Model::UpdateDirectorySetupRequest& request, const UpdateDirectorySetupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateNumberOfDomainControllersOutcomeCallable UpdateNumberOfDomainControllersCallable(const Model::UpdateNumberOfDomainControllersRequest& request) const;

        /**
         * An Async wrapper for UpdateNumberOfDomainControllers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNumberOfDomainControllersAsync(const Model::UpdateNumberOfDomainControllersRequest& request, const UpdateNumberOfDomainControllersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateRadiusOutcomeCallable UpdateRadiusCallable(const Model::UpdateRadiusRequest& request) const;

        /**
         * An Async wrapper for UpdateRadius that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRadiusAsync(const Model::UpdateRadiusRequest& request, const UpdateRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateSettingsOutcomeCallable UpdateSettingsCallable(const Model::UpdateSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdateSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSettingsAsync(const Model::UpdateSettingsRequest& request, const UpdateSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateTrustOutcomeCallable UpdateTrustCallable(const Model::UpdateTrustRequest& request) const;

        /**
         * An Async wrapper for UpdateTrust that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTrustAsync(const Model::UpdateTrustRequest& request, const UpdateTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::VerifyTrustOutcomeCallable VerifyTrustCallable(const Model::VerifyTrustRequest& request) const;

        /**
         * An Async wrapper for VerifyTrust that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void VerifyTrustAsync(const Model::VerifyTrustRequest& request, const VerifyTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
