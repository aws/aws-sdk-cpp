/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ds/DirectoryServiceServiceClientModel.h>
#include <aws/ds/DirectoryServiceLegacyAsyncMacros.h>

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
  class AWS_DIRECTORYSERVICE_API DirectoryServiceClient : public Aws::Client::AWSJsonClient
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
         * <p>Accepts a directory sharing request that was sent from the directory owner
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/AcceptSharedDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptSharedDirectoryOutcome AcceptSharedDirectory(const Model::AcceptSharedDirectoryRequest& request) const;


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
         * <p>Adds two domain controllers in the specified Region for the specified
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/AddRegion">AWS API
         * Reference</a></p>
         */
        virtual Model::AddRegionOutcome AddRegion(const Model::AddRegionRequest& request) const;


        /**
         * <p>Adds or overwrites one or more tags for the specified directory. Each
         * directory can have a maximum of 50 tags. Each tag consists of a key and optional
         * value. Tag keys must be unique to each resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/AddTagsToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;


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
         * <p>Creates an Active Directory computer object in the specified
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateComputer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateComputerOutcome CreateComputer(const Model::CreateComputerRequest& request) const;


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
         * <p>Creates a subscription to forward real-time Directory Service domain
         * controller security logs to the specified Amazon CloudWatch log group in your
         * Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateLogSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLogSubscriptionOutcome CreateLogSubscription(const Model::CreateLogSubscriptionRequest& request) const;


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
         * <p>Creates a snapshot of a Simple AD or Microsoft AD directory in the Amazon Web
         * Services cloud.</p>  <p>You cannot take snapshots of AD Connector
         * directories.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest& request) const;


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
         * <p>Deletes a conditional forwarder that has been set up for your Amazon Web
         * Services directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteConditionalForwarder">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConditionalForwarderOutcome DeleteConditionalForwarder(const Model::DeleteConditionalForwarderRequest& request) const;


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
         * <p>Deletes the specified log subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteLogSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLogSubscriptionOutcome DeleteLogSubscription(const Model::DeleteLogSubscriptionRequest& request) const;


        /**
         * <p>Deletes a directory snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSnapshotOutcome DeleteSnapshot(const Model::DeleteSnapshotRequest& request) const;


        /**
         * <p>Deletes an existing trust relationship between your Managed Microsoft AD
         * directory and an external domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteTrust">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteTrustOutcome DeleteTrust(const Model::DeleteTrustRequest& request) const;


        /**
         * <p>Deletes from the system the certificate that was registered for secure LDAP
         * or client certificate authentication.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeregisterCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterCertificateOutcome DeregisterCertificate(const Model::DeregisterCertificateRequest& request) const;


        /**
         * <p>Removes the specified directory as a publisher to the specified Amazon SNS
         * topic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeregisterEventTopic">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterEventTopicOutcome DeregisterEventTopic(const Model::DeregisterEventTopicRequest& request) const;


        /**
         * <p>Displays information about the certificate registered for secure LDAP or
         * client certificate authentication.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCertificateOutcome DescribeCertificate(const Model::DescribeCertificateRequest& request) const;


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
         * <p>Obtains information about the conditional forwarders for this account.</p>
         * <p>If no input parameters are provided for RemoteDomainNames, this request
         * describes all conditional forwarders for the specified directory
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeConditionalForwarders">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConditionalForwardersOutcome DescribeConditionalForwarders(const Model::DescribeConditionalForwardersRequest& request) const;


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
         * <p>Provides information about any domain controllers in your
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeDomainControllers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainControllersOutcome DescribeDomainControllers(const Model::DescribeDomainControllersRequest& request) const;


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
         * <p>Describes the status of LDAP security for the specified
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeLDAPSSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLDAPSSettingsOutcome DescribeLDAPSSettings(const Model::DescribeLDAPSSettingsRequest& request) const;


        /**
         * <p>Provides information about the Regions that are configured for multi-Region
         * replication.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeRegions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest& request) const;


        /**
         * <p>Retrieves information about the configurable settings for the specified
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSettingsOutcome DescribeSettings(const Model::DescribeSettingsRequest& request) const;


        /**
         * <p>Returns the shared directories in your account. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeSharedDirectories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSharedDirectoriesOutcome DescribeSharedDirectories(const Model::DescribeSharedDirectoriesRequest& request) const;


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
         * <p>Obtains information about the trust relationships for this account.</p> <p>If
         * no input parameters are provided, such as DirectoryId or TrustIds, this request
         * describes all the trust relationships belonging to the account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeTrusts">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrustsOutcome DescribeTrusts(const Model::DescribeTrustsRequest& request) const;


        /**
         * <p> Describes the updates of a directory for a particular update type.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeUpdateDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUpdateDirectoryOutcome DescribeUpdateDirectory(const Model::DescribeUpdateDirectoryRequest& request) const;


        /**
         * <p>Disables alternative client authentication methods for the specified
         * directory. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DisableClientAuthentication">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableClientAuthenticationOutcome DisableClientAuthentication(const Model::DisableClientAuthenticationRequest& request) const;


        /**
         * <p>Deactivates LDAP secure calls for the specified directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DisableLDAPS">AWS API
         * Reference</a></p>
         */
        virtual Model::DisableLDAPSOutcome DisableLDAPS(const Model::DisableLDAPSRequest& request) const;


        /**
         * <p>Disables multi-factor authentication (MFA) with the Remote Authentication
         * Dial In User Service (RADIUS) server for an AD Connector or Microsoft AD
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DisableRadius">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableRadiusOutcome DisableRadius(const Model::DisableRadiusRequest& request) const;


        /**
         * <p>Disables single-sign on for a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DisableSso">AWS API
         * Reference</a></p>
         */
        virtual Model::DisableSsoOutcome DisableSso(const Model::DisableSsoRequest& request) const;


        /**
         * <p>Enables alternative client authentication methods for the specified
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/EnableClientAuthentication">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableClientAuthenticationOutcome EnableClientAuthentication(const Model::EnableClientAuthenticationRequest& request) const;


        /**
         * <p>Activates the switch for the specific directory to always use LDAP secure
         * calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/EnableLDAPS">AWS API
         * Reference</a></p>
         */
        virtual Model::EnableLDAPSOutcome EnableLDAPS(const Model::EnableLDAPSRequest& request) const;


        /**
         * <p>Enables multi-factor authentication (MFA) with the Remote Authentication Dial
         * In User Service (RADIUS) server for an AD Connector or Microsoft AD
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/EnableRadius">AWS API
         * Reference</a></p>
         */
        virtual Model::EnableRadiusOutcome EnableRadius(const Model::EnableRadiusRequest& request) const;


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
         * <p>Obtains directory limit information for the current Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/GetDirectoryLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDirectoryLimitsOutcome GetDirectoryLimits(const Model::GetDirectoryLimitsRequest& request) const;


        /**
         * <p>Obtains the manual snapshot limits for a directory.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/GetSnapshotLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSnapshotLimitsOutcome GetSnapshotLimits(const Model::GetSnapshotLimitsRequest& request) const;


        /**
         * <p>For the specified directory, lists all the certificates registered for a
         * secure LDAP or client certificate authentication.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ListCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCertificatesOutcome ListCertificates(const Model::ListCertificatesRequest& request) const;


        /**
         * <p>Lists the address blocks that you have added to a directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ListIpRoutes">AWS API
         * Reference</a></p>
         */
        virtual Model::ListIpRoutesOutcome ListIpRoutes(const Model::ListIpRoutesRequest& request) const;


        /**
         * <p>Lists the active log subscriptions for the Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ListLogSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLogSubscriptionsOutcome ListLogSubscriptions(const Model::ListLogSubscriptionsRequest& request) const;


        /**
         * <p>Lists all schema extensions applied to a Microsoft AD
         * Directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ListSchemaExtensions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchemaExtensionsOutcome ListSchemaExtensions(const Model::ListSchemaExtensionsRequest& request) const;


        /**
         * <p>Lists all tags on a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Registers a certificate for a secure LDAP or client certificate
         * authentication.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RegisterCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterCertificateOutcome RegisterCertificate(const Model::RegisterCertificateRequest& request) const;


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
         * <p>Rejects a directory sharing request that was sent from the directory owner
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RejectSharedDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectSharedDirectoryOutcome RejectSharedDirectory(const Model::RejectSharedDirectoryRequest& request) const;


        /**
         * <p>Removes IP address blocks from a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RemoveIpRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveIpRoutesOutcome RemoveIpRoutes(const Model::RemoveIpRoutesRequest& request) const;


        /**
         * <p>Stops all replication and removes the domain controllers from the specified
         * Region. You cannot remove the primary Region with this operation. Instead, use
         * the <code>DeleteDirectory</code> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RemoveRegion">AWS API
         * Reference</a></p>
         */
        virtual Model::RemoveRegionOutcome RemoveRegion(const Model::RemoveRegionRequest& request) const;


        /**
         * <p>Removes tags from a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;


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
         * <p>Applies a schema extension to a Microsoft AD directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/StartSchemaExtension">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSchemaExtensionOutcome StartSchemaExtension(const Model::StartSchemaExtensionRequest& request) const;


        /**
         * <p>Stops the directory sharing between the directory owner and consumer
         * accounts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UnshareDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::UnshareDirectoryOutcome UnshareDirectory(const Model::UnshareDirectoryRequest& request) const;


        /**
         * <p>Updates a conditional forwarder that has been set up for your Amazon Web
         * Services directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateConditionalForwarder">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConditionalForwarderOutcome UpdateConditionalForwarder(const Model::UpdateConditionalForwarderRequest& request) const;


        /**
         * <p> Updates the directory for a particular update type. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateDirectorySetup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDirectorySetupOutcome UpdateDirectorySetup(const Model::UpdateDirectorySetupRequest& request) const;


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
         * <p>Updates the Remote Authentication Dial In User Service (RADIUS) server
         * information for an AD Connector or Microsoft AD directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateRadius">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateRadiusOutcome UpdateRadius(const Model::UpdateRadiusRequest& request) const;


        /**
         * <p>Updates the configurable settings for the specified directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSettingsOutcome UpdateSettings(const Model::UpdateSettingsRequest& request) const;


        /**
         * <p>Updates the trust that has been set up between your Managed Microsoft AD
         * directory and an self-managed Active Directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateTrust">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateTrustOutcome UpdateTrust(const Model::UpdateTrustRequest& request) const;


        /**
         * <p>Directory Service for Microsoft Active Directory allows you to configure and
         * verify trust relationships.</p> <p>This action verifies a trust relationship
         * between your Managed Microsoft AD directory and an external
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/VerifyTrust">AWS API
         * Reference</a></p>
         */
        virtual Model::VerifyTrustOutcome VerifyTrust(const Model::VerifyTrustRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DirectoryServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const DirectoryServiceClientConfiguration& clientConfiguration);

      DirectoryServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<DirectoryServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace DirectoryService
} // namespace Aws
