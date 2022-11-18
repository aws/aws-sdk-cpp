/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/awstransfer/TransferServiceClientModel.h>
#include <aws/awstransfer/TransferLegacyAsyncMacros.h>

namespace Aws
{
namespace Transfer
{
  /**
   * <p>Transfer Family is a fully managed service that enables the transfer of files
   * over the File Transfer Protocol (FTP), File Transfer Protocol over SSL (FTPS),
   * or Secure Shell (SSH) File Transfer Protocol (SFTP) directly into and out of
   * Amazon Simple Storage Service (Amazon S3) or Amazon EFS. Additionally, you can
   * use Applicability Statement 2 (AS2) to transfer files into and out of Amazon S3.
   * Amazon Web Services helps you seamlessly migrate your file transfer workflows to
   * Transfer Family by integrating with existing authentication systems, and
   * providing DNS routing with Amazon Route 53 so nothing changes for your customers
   * and partners, or their applications. With your data in Amazon S3, you can use it
   * with Amazon Web Services for processing, analytics, machine learning, and
   * archiving. Getting started with Transfer Family is easy since there is no
   * infrastructure to buy and set up.</p>
   */
  class AWS_TRANSFER_API TransferClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TransferClient(const Aws::Transfer::TransferClientConfiguration& clientConfiguration = Aws::Transfer::TransferClientConfiguration(),
                       std::shared_ptr<TransferEndpointProviderBase> endpointProvider = Aws::MakeShared<TransferEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TransferClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<TransferEndpointProviderBase> endpointProvider = Aws::MakeShared<TransferEndpointProvider>(ALLOCATION_TAG),
                       const Aws::Transfer::TransferClientConfiguration& clientConfiguration = Aws::Transfer::TransferClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TransferClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<TransferEndpointProviderBase> endpointProvider = Aws::MakeShared<TransferEndpointProvider>(ALLOCATION_TAG),
                       const Aws::Transfer::TransferClientConfiguration& clientConfiguration = Aws::Transfer::TransferClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TransferClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TransferClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TransferClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~TransferClient();


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
         * <p>Used by administrators to choose which groups in the directory should have
         * access to upload and download files over the enabled protocols using Transfer
         * Family. For example, a Microsoft Active Directory might contain 50,000 users,
         * but only a small fraction might need the ability to transfer files to the
         * server. An administrator can use <code>CreateAccess</code> to limit the access
         * to the correct set of users who need this ability.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/CreateAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessOutcome CreateAccess(const Model::CreateAccessRequest& request) const;


        /**
         * <p>Creates an agreement. An agreement is a bilateral trading partner agreement,
         * or partnership, between an Transfer Family server and an AS2 process. The
         * agreement defines the file and message transfer relationship between the server
         * and the AS2 process. To define an agreement, Transfer Family combines a server,
         * local profile, partner profile, certificate, and other attributes.</p> <p>The
         * partner is identified with the <code>PartnerProfileId</code>, and the AS2
         * process is identified with the <code>LocalProfileId</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/CreateAgreement">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAgreementOutcome CreateAgreement(const Model::CreateAgreementRequest& request) const;


        /**
         * <p>Creates the connector, which captures the parameters for an outbound
         * connection for the AS2 protocol. The connector is required for sending files to
         * an externally hosted AS2 server. For more details about connectors, see <a
         * href="https://docs.aws.amazon.com/transfer/latest/userguide/create-b2b-server.html#configure-as2-connector">Create
         * AS2 connectors</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/CreateConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectorOutcome CreateConnector(const Model::CreateConnectorRequest& request) const;


        /**
         * <p>Creates the local or partner profile to use for AS2 transfers.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/CreateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProfileOutcome CreateProfile(const Model::CreateProfileRequest& request) const;


        /**
         * <p>Instantiates an auto-scaling virtual server based on the selected file
         * transfer protocol in Amazon Web Services. When you make updates to your file
         * transfer protocol-enabled server or when you work with users, use the
         * service-generated <code>ServerId</code> property that is assigned to the newly
         * created server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/CreateServer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServerOutcome CreateServer(const Model::CreateServerRequest& request) const;


        /**
         * <p>Creates a user and associates them with an existing file transfer
         * protocol-enabled server. You can only create and associate users with servers
         * that have the <code>IdentityProviderType</code> set to
         * <code>SERVICE_MANAGED</code>. Using parameters for <code>CreateUser</code>, you
         * can specify the user name, set the home directory, store the user's public key,
         * and assign the user's Identity and Access Management (IAM) role. You can also
         * optionally add a session policy, and assign metadata with tags that can be used
         * to group and search for users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;


        /**
         * <p> Allows you to create a workflow with specified steps and step details the
         * workflow invokes after file transfer completes. After creating a workflow, you
         * can associate the workflow created with any transfer servers by specifying the
         * <code>workflow-details</code> field in <code>CreateServer</code> and
         * <code>UpdateServer</code> operations. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/CreateWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkflowOutcome CreateWorkflow(const Model::CreateWorkflowRequest& request) const;


        /**
         * <p>Allows you to delete the access specified in the <code>ServerID</code> and
         * <code>ExternalID</code> parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DeleteAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessOutcome DeleteAccess(const Model::DeleteAccessRequest& request) const;


        /**
         * <p>Delete the agreement that's specified in the provided
         * <code>AgreementId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DeleteAgreement">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAgreementOutcome DeleteAgreement(const Model::DeleteAgreementRequest& request) const;


        /**
         * <p>Deletes the certificate that's specified in the <code>CertificateId</code>
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DeleteCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCertificateOutcome DeleteCertificate(const Model::DeleteCertificateRequest& request) const;


        /**
         * <p>Deletes the agreement that's specified in the provided
         * <code>ConnectorId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DeleteConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectorOutcome DeleteConnector(const Model::DeleteConnectorRequest& request) const;


        /**
         * <p>Deletes the host key that's specified in the <code>HoskKeyId</code>
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DeleteHostKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHostKeyOutcome DeleteHostKey(const Model::DeleteHostKeyRequest& request) const;


        /**
         * <p>Deletes the profile that's specified in the <code>ProfileId</code>
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DeleteProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProfileOutcome DeleteProfile(const Model::DeleteProfileRequest& request) const;


        /**
         * <p>Deletes the file transfer protocol-enabled server that you specify.</p> <p>No
         * response returns from this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DeleteServer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServerOutcome DeleteServer(const Model::DeleteServerRequest& request) const;


        /**
         * <p>Deletes a user's Secure Shell (SSH) public key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DeleteSshPublicKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSshPublicKeyOutcome DeleteSshPublicKey(const Model::DeleteSshPublicKeyRequest& request) const;


        /**
         * <p>Deletes the user belonging to a file transfer protocol-enabled server you
         * specify.</p> <p>No response returns from this operation.</p>  <p>When you
         * delete a user from a server, the user's information is lost.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;


        /**
         * <p>Deletes the specified workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DeleteWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkflowOutcome DeleteWorkflow(const Model::DeleteWorkflowRequest& request) const;


        /**
         * <p>Describes the access that is assigned to the specific file transfer
         * protocol-enabled server, as identified by its <code>ServerId</code> property and
         * its <code>ExternalId</code>.</p> <p>The response from this call returns the
         * properties of the access that is associated with the <code>ServerId</code> value
         * that was specified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribeAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccessOutcome DescribeAccess(const Model::DescribeAccessRequest& request) const;


        /**
         * <p>Describes the agreement that's identified by the
         * <code>AgreementId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribeAgreement">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAgreementOutcome DescribeAgreement(const Model::DescribeAgreementRequest& request) const;


        /**
         * <p>Describes the certificate that's identified by the
         * <code>CertificateId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribeCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCertificateOutcome DescribeCertificate(const Model::DescribeCertificateRequest& request) const;


        /**
         * <p>Describes the connector that's identified by the <code>ConnectorId.</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribeConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectorOutcome DescribeConnector(const Model::DescribeConnectorRequest& request) const;


        /**
         * <p>You can use <code>DescribeExecution</code> to check the details of the
         * execution of the specified workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribeExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExecutionOutcome DescribeExecution(const Model::DescribeExecutionRequest& request) const;


        /**
         * <p>Returns the details of the host key that's specified by the
         * <code>HostKeyId</code> and <code>ServerId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribeHostKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHostKeyOutcome DescribeHostKey(const Model::DescribeHostKeyRequest& request) const;


        /**
         * <p>Returns the details of the profile that's specified by the
         * <code>ProfileId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribeProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProfileOutcome DescribeProfile(const Model::DescribeProfileRequest& request) const;


        /**
         * <p>Describes the security policy that is attached to your file transfer
         * protocol-enabled server. The response contains a description of the security
         * policy's properties. For more information about security policies, see <a
         * href="https://docs.aws.amazon.com/transfer/latest/userguide/security-policies.html">Working
         * with security policies</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribeSecurityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSecurityPolicyOutcome DescribeSecurityPolicy(const Model::DescribeSecurityPolicyRequest& request) const;


        /**
         * <p>Describes a file transfer protocol-enabled server that you specify by passing
         * the <code>ServerId</code> parameter.</p> <p>The response contains a description
         * of a server's properties. When you set <code>EndpointType</code> to VPC, the
         * response will contain the <code>EndpointDetails</code>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribeServer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServerOutcome DescribeServer(const Model::DescribeServerRequest& request) const;


        /**
         * <p>Describes the user assigned to the specific file transfer protocol-enabled
         * server, as identified by its <code>ServerId</code> property.</p> <p>The response
         * from this call returns the properties of the user associated with the
         * <code>ServerId</code> value that was specified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribeUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest& request) const;


        /**
         * <p>Describes the specified workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribeWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkflowOutcome DescribeWorkflow(const Model::DescribeWorkflowRequest& request) const;


        /**
         * <p>Imports the signing and encryption certificates that you need to create local
         * (AS2) profiles and partner profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ImportCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportCertificateOutcome ImportCertificate(const Model::ImportCertificateRequest& request) const;


        /**
         * <p>Adds a host key to the server that's specified by the <code>ServerId</code>
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ImportHostKey">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportHostKeyOutcome ImportHostKey(const Model::ImportHostKeyRequest& request) const;


        /**
         * <p>Adds a Secure Shell (SSH) public key to a user account identified by a
         * <code>UserName</code> value assigned to the specific file transfer
         * protocol-enabled server, identified by <code>ServerId</code>.</p> <p>The
         * response returns the <code>UserName</code> value, the <code>ServerId</code>
         * value, and the name of the <code>SshPublicKeyId</code>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ImportSshPublicKey">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportSshPublicKeyOutcome ImportSshPublicKey(const Model::ImportSshPublicKeyRequest& request) const;


        /**
         * <p>Lists the details for all the accesses you have on your server.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListAccesses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessesOutcome ListAccesses(const Model::ListAccessesRequest& request) const;


        /**
         * <p>Returns a list of the agreements for the server that's identified by the
         * <code>ServerId</code> that you supply. If you want to limit the results to a
         * certain number, supply a value for the <code>MaxResults</code> parameter. If you
         * ran the command previously and received a value for <code>NextToken</code>, you
         * can supply that value to continue listing agreements from where you left
         * off.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListAgreements">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAgreementsOutcome ListAgreements(const Model::ListAgreementsRequest& request) const;


        /**
         * <p>Returns a list of the current certificates that have been imported into
         * Transfer Family. If you want to limit the results to a certain number, supply a
         * value for the <code>MaxResults</code> parameter. If you ran the command
         * previously and received a value for the <code>NextToken</code> parameter, you
         * can supply that value to continue listing certificates from where you left
         * off.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCertificatesOutcome ListCertificates(const Model::ListCertificatesRequest& request) const;


        /**
         * <p>Lists the connectors for the specified Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListConnectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectorsOutcome ListConnectors(const Model::ListConnectorsRequest& request) const;


        /**
         * <p>Lists all executions for the specified workflow.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExecutionsOutcome ListExecutions(const Model::ListExecutionsRequest& request) const;


        /**
         * <p>Returns a list of host keys for the server that's specified by the
         * <code>ServerId</code> parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListHostKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHostKeysOutcome ListHostKeys(const Model::ListHostKeysRequest& request) const;


        /**
         * <p>Returns a list of the profiles for your system. If you want to limit the
         * results to a certain number, supply a value for the <code>MaxResults</code>
         * parameter. If you ran the command previously and received a value for
         * <code>NextToken</code>, you can supply that value to continue listing profiles
         * from where you left off.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProfilesOutcome ListProfiles(const Model::ListProfilesRequest& request) const;


        /**
         * <p>Lists the security policies that are attached to your file transfer
         * protocol-enabled servers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListSecurityPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityPoliciesOutcome ListSecurityPolicies(const Model::ListSecurityPoliciesRequest& request) const;


        /**
         * <p>Lists the file transfer protocol-enabled servers that are associated with
         * your Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListServers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServersOutcome ListServers(const Model::ListServersRequest& request) const;


        /**
         * <p>Lists all of the tags associated with the Amazon Resource Name (ARN) that you
         * specify. The resource can be a user, server, or role.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Lists the users for a file transfer protocol-enabled server that you specify
         * by passing the <code>ServerId</code> parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;


        /**
         * <p>Lists all of your workflows.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListWorkflows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowsOutcome ListWorkflows(const Model::ListWorkflowsRequest& request) const;


        /**
         * <p>Sends a callback for asynchronous custom steps.</p> <p> The
         * <code>ExecutionId</code>, <code>WorkflowId</code>, and <code>Token</code> are
         * passed to the target resource during execution of a custom step of a workflow.
         * You must include those with their callback as well as providing a status.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/SendWorkflowStepState">AWS
         * API Reference</a></p>
         */
        virtual Model::SendWorkflowStepStateOutcome SendWorkflowStepState(const Model::SendWorkflowStepStateRequest& request) const;


        /**
         * <p>Begins an outbound file transfer to a remote AS2 server. You specify the
         * <code>ConnectorId</code> and the file paths for where to send the files.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/StartFileTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFileTransferOutcome StartFileTransfer(const Model::StartFileTransferRequest& request) const;


        /**
         * <p>Changes the state of a file transfer protocol-enabled server from
         * <code>OFFLINE</code> to <code>ONLINE</code>. It has no impact on a server that
         * is already <code>ONLINE</code>. An <code>ONLINE</code> server can accept and
         * process file transfer jobs.</p> <p>The state of <code>STARTING</code> indicates
         * that the server is in an intermediate state, either not fully able to respond,
         * or not fully online. The values of <code>START_FAILED</code> can indicate an
         * error condition.</p> <p>No response is returned from this call.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/StartServer">AWS
         * API Reference</a></p>
         */
        virtual Model::StartServerOutcome StartServer(const Model::StartServerRequest& request) const;


        /**
         * <p>Changes the state of a file transfer protocol-enabled server from
         * <code>ONLINE</code> to <code>OFFLINE</code>. An <code>OFFLINE</code> server
         * cannot accept and process file transfer jobs. Information tied to your server,
         * such as server and user properties, are not affected by stopping your
         * server.</p>  <p>Stopping the server does not reduce or impact your file
         * transfer protocol endpoint billing; you must delete the server to stop being
         * billed.</p>  <p>The state of <code>STOPPING</code> indicates that the
         * server is in an intermediate state, either not fully able to respond, or not
         * fully offline. The values of <code>STOP_FAILED</code> can indicate an error
         * condition.</p> <p>No response is returned from this call.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/StopServer">AWS
         * API Reference</a></p>
         */
        virtual Model::StopServerOutcome StopServer(const Model::StopServerRequest& request) const;


        /**
         * <p>Attaches a key-value pair to a resource, as identified by its Amazon Resource
         * Name (ARN). Resources are users, servers, roles, and other entities.</p>
         * <p>There is no response returned from this call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>If the <code>IdentityProviderType</code> of a file transfer protocol-enabled
         * server is <code>AWS_DIRECTORY_SERVICE</code> or <code>API_Gateway</code>, tests
         * whether your identity provider is set up successfully. We highly recommend that
         * you call this operation to test your authentication method as soon as you create
         * your server. By doing so, you can troubleshoot issues with the identity provider
         * integration to ensure that your users can successfully use the service.</p> <p>
         * The <code>ServerId</code> and <code>UserName</code> parameters are required. The
         * <code>ServerProtocol</code>, <code>SourceIp</code>, and
         * <code>UserPassword</code> are all optional. </p>  <p> You cannot use
         * <code>TestIdentityProvider</code> if the <code>IdentityProviderType</code> of
         * your server is <code>SERVICE_MANAGED</code>. </p>  <ul> <li> <p> If you
         * provide any incorrect values for any parameters, the <code>Response</code> field
         * is empty. </p> </li> <li> <p> If you provide a server ID for a server that uses
         * service-managed users, you get an error: </p> <p> <code> An error occurred
         * (InvalidRequestException) when calling the TestIdentityProvider operation:
         * s-<i>server-ID</i> not configured for external auth </code> </p> </li> <li> <p>
         * If you enter a Server ID for the <code>--server-id</code> parameter that does
         * not identify an actual Transfer server, you receive the following error: </p>
         * <p> <code>An error occurred (ResourceNotFoundException) when calling the
         * TestIdentityProvider operation: Unknown server</code> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/TestIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::TestIdentityProviderOutcome TestIdentityProvider(const Model::TestIdentityProviderRequest& request) const;


        /**
         * <p>Detaches a key-value pair from a resource, as identified by its Amazon
         * Resource Name (ARN). Resources are users, servers, roles, and other
         * entities.</p> <p>No response is returned from this call.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Allows you to update parameters for the access specified in the
         * <code>ServerID</code> and <code>ExternalID</code> parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/UpdateAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccessOutcome UpdateAccess(const Model::UpdateAccessRequest& request) const;


        /**
         * <p>Updates some of the parameters for an existing agreement. Provide the
         * <code>AgreementId</code> and the <code>ServerId</code> for the agreement that
         * you want to update, along with the new values for the parameters to
         * update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/UpdateAgreement">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAgreementOutcome UpdateAgreement(const Model::UpdateAgreementRequest& request) const;


        /**
         * <p>Updates the active and inactive dates for a certificate.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/UpdateCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCertificateOutcome UpdateCertificate(const Model::UpdateCertificateRequest& request) const;


        /**
         * <p>Updates some of the parameters for an existing connector. Provide the
         * <code>ConnectorId</code> for the connector that you want to update, along with
         * the new values for the parameters to update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/UpdateConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectorOutcome UpdateConnector(const Model::UpdateConnectorRequest& request) const;


        /**
         * <p>Updates the description for the host key that's specified by the
         * <code>ServerId</code> and <code>HostKeyId</code> parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/UpdateHostKey">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateHostKeyOutcome UpdateHostKey(const Model::UpdateHostKeyRequest& request) const;


        /**
         * <p>Updates some of the parameters for an existing profile. Provide the
         * <code>ProfileId</code> for the profile that you want to update, along with the
         * new values for the parameters to update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/UpdateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProfileOutcome UpdateProfile(const Model::UpdateProfileRequest& request) const;


        /**
         * <p>Updates the file transfer protocol-enabled server's properties after that
         * server has been created.</p> <p>The <code>UpdateServer</code> call returns the
         * <code>ServerId</code> of the server you updated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/UpdateServer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServerOutcome UpdateServer(const Model::UpdateServerRequest& request) const;


        /**
         * <p>Assigns new properties to a user. Parameters you pass modify any or all of
         * the following: the home directory, role, and policy for the
         * <code>UserName</code> and <code>ServerId</code> you specify.</p> <p>The response
         * returns the <code>ServerId</code> and the <code>UserName</code> for the updated
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/UpdateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<TransferEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const TransferClientConfiguration& clientConfiguration);

      TransferClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<TransferEndpointProviderBase> m_endpointProvider;
  };

} // namespace Transfer
} // namespace Aws
