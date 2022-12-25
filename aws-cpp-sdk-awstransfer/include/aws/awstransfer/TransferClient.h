/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/awstransfer/TransferServiceClientModel.h>

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
  class AWS_TRANSFER_API TransferClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<TransferClient>
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
         * A Callable wrapper for CreateAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccessOutcomeCallable CreateAccessCallable(const Model::CreateAccessRequest& request) const;

        /**
         * An Async wrapper for CreateAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccessAsync(const Model::CreateAccessRequest& request, const CreateAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for CreateAgreement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAgreementOutcomeCallable CreateAgreementCallable(const Model::CreateAgreementRequest& request) const;

        /**
         * An Async wrapper for CreateAgreement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAgreementAsync(const Model::CreateAgreementRequest& request, const CreateAgreementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for CreateConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConnectorOutcomeCallable CreateConnectorCallable(const Model::CreateConnectorRequest& request) const;

        /**
         * An Async wrapper for CreateConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConnectorAsync(const Model::CreateConnectorRequest& request, const CreateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the local or partner profile to use for AS2 transfers.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/CreateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProfileOutcome CreateProfile(const Model::CreateProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProfileOutcomeCallable CreateProfileCallable(const Model::CreateProfileRequest& request) const;

        /**
         * An Async wrapper for CreateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProfileAsync(const Model::CreateProfileRequest& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for CreateServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateServerOutcomeCallable CreateServerCallable(const Model::CreateServerRequest& request) const;

        /**
         * An Async wrapper for CreateServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateServerAsync(const Model::CreateServerRequest& request, const CreateServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for CreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request) const;

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for CreateWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkflowOutcomeCallable CreateWorkflowCallable(const Model::CreateWorkflowRequest& request) const;

        /**
         * An Async wrapper for CreateWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkflowAsync(const Model::CreateWorkflowRequest& request, const CreateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows you to delete the access specified in the <code>ServerID</code> and
         * <code>ExternalID</code> parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DeleteAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessOutcome DeleteAccess(const Model::DeleteAccessRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccessOutcomeCallable DeleteAccessCallable(const Model::DeleteAccessRequest& request) const;

        /**
         * An Async wrapper for DeleteAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccessAsync(const Model::DeleteAccessRequest& request, const DeleteAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete the agreement that's specified in the provided
         * <code>AgreementId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DeleteAgreement">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAgreementOutcome DeleteAgreement(const Model::DeleteAgreementRequest& request) const;

        /**
         * A Callable wrapper for DeleteAgreement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAgreementOutcomeCallable DeleteAgreementCallable(const Model::DeleteAgreementRequest& request) const;

        /**
         * An Async wrapper for DeleteAgreement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAgreementAsync(const Model::DeleteAgreementRequest& request, const DeleteAgreementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the certificate that's specified in the <code>CertificateId</code>
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DeleteCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCertificateOutcome DeleteCertificate(const Model::DeleteCertificateRequest& request) const;

        /**
         * A Callable wrapper for DeleteCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCertificateOutcomeCallable DeleteCertificateCallable(const Model::DeleteCertificateRequest& request) const;

        /**
         * An Async wrapper for DeleteCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCertificateAsync(const Model::DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the agreement that's specified in the provided
         * <code>ConnectorId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DeleteConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectorOutcome DeleteConnector(const Model::DeleteConnectorRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConnectorOutcomeCallable DeleteConnectorCallable(const Model::DeleteConnectorRequest& request) const;

        /**
         * An Async wrapper for DeleteConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConnectorAsync(const Model::DeleteConnectorRequest& request, const DeleteConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the host key that's specified in the <code>HoskKeyId</code>
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DeleteHostKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHostKeyOutcome DeleteHostKey(const Model::DeleteHostKeyRequest& request) const;

        /**
         * A Callable wrapper for DeleteHostKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHostKeyOutcomeCallable DeleteHostKeyCallable(const Model::DeleteHostKeyRequest& request) const;

        /**
         * An Async wrapper for DeleteHostKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHostKeyAsync(const Model::DeleteHostKeyRequest& request, const DeleteHostKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the profile that's specified in the <code>ProfileId</code>
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DeleteProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProfileOutcome DeleteProfile(const Model::DeleteProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProfileOutcomeCallable DeleteProfileCallable(const Model::DeleteProfileRequest& request) const;

        /**
         * An Async wrapper for DeleteProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProfileAsync(const Model::DeleteProfileRequest& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the file transfer protocol-enabled server that you specify.</p> <p>No
         * response returns from this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DeleteServer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServerOutcome DeleteServer(const Model::DeleteServerRequest& request) const;

        /**
         * A Callable wrapper for DeleteServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServerOutcomeCallable DeleteServerCallable(const Model::DeleteServerRequest& request) const;

        /**
         * An Async wrapper for DeleteServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteServerAsync(const Model::DeleteServerRequest& request, const DeleteServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a user's Secure Shell (SSH) public key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DeleteSshPublicKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSshPublicKeyOutcome DeleteSshPublicKey(const Model::DeleteSshPublicKeyRequest& request) const;

        /**
         * A Callable wrapper for DeleteSshPublicKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSshPublicKeyOutcomeCallable DeleteSshPublicKeyCallable(const Model::DeleteSshPublicKeyRequest& request) const;

        /**
         * An Async wrapper for DeleteSshPublicKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSshPublicKeyAsync(const Model::DeleteSshPublicKeyRequest& request, const DeleteSshPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DeleteUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DeleteWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkflowOutcome DeleteWorkflow(const Model::DeleteWorkflowRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkflowOutcomeCallable DeleteWorkflowCallable(const Model::DeleteWorkflowRequest& request) const;

        /**
         * An Async wrapper for DeleteWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkflowAsync(const Model::DeleteWorkflowRequest& request, const DeleteWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DescribeAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccessOutcomeCallable DescribeAccessCallable(const Model::DescribeAccessRequest& request) const;

        /**
         * An Async wrapper for DescribeAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccessAsync(const Model::DescribeAccessRequest& request, const DescribeAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the agreement that's identified by the
         * <code>AgreementId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribeAgreement">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAgreementOutcome DescribeAgreement(const Model::DescribeAgreementRequest& request) const;

        /**
         * A Callable wrapper for DescribeAgreement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAgreementOutcomeCallable DescribeAgreementCallable(const Model::DescribeAgreementRequest& request) const;

        /**
         * An Async wrapper for DescribeAgreement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAgreementAsync(const Model::DescribeAgreementRequest& request, const DescribeAgreementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the certificate that's identified by the
         * <code>CertificateId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribeCertificate">AWS
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
         * <p>Describes the connector that's identified by the <code>ConnectorId.</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribeConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectorOutcome DescribeConnector(const Model::DescribeConnectorRequest& request) const;

        /**
         * A Callable wrapper for DescribeConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConnectorOutcomeCallable DescribeConnectorCallable(const Model::DescribeConnectorRequest& request) const;

        /**
         * An Async wrapper for DescribeConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConnectorAsync(const Model::DescribeConnectorRequest& request, const DescribeConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You can use <code>DescribeExecution</code> to check the details of the
         * execution of the specified workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribeExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExecutionOutcome DescribeExecution(const Model::DescribeExecutionRequest& request) const;

        /**
         * A Callable wrapper for DescribeExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeExecutionOutcomeCallable DescribeExecutionCallable(const Model::DescribeExecutionRequest& request) const;

        /**
         * An Async wrapper for DescribeExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeExecutionAsync(const Model::DescribeExecutionRequest& request, const DescribeExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details of the host key that's specified by the
         * <code>HostKeyId</code> and <code>ServerId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribeHostKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHostKeyOutcome DescribeHostKey(const Model::DescribeHostKeyRequest& request) const;

        /**
         * A Callable wrapper for DescribeHostKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHostKeyOutcomeCallable DescribeHostKeyCallable(const Model::DescribeHostKeyRequest& request) const;

        /**
         * An Async wrapper for DescribeHostKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHostKeyAsync(const Model::DescribeHostKeyRequest& request, const DescribeHostKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details of the profile that's specified by the
         * <code>ProfileId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribeProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProfileOutcome DescribeProfile(const Model::DescribeProfileRequest& request) const;

        /**
         * A Callable wrapper for DescribeProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProfileOutcomeCallable DescribeProfileCallable(const Model::DescribeProfileRequest& request) const;

        /**
         * An Async wrapper for DescribeProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProfileAsync(const Model::DescribeProfileRequest& request, const DescribeProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DescribeSecurityPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSecurityPolicyOutcomeCallable DescribeSecurityPolicyCallable(const Model::DescribeSecurityPolicyRequest& request) const;

        /**
         * An Async wrapper for DescribeSecurityPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSecurityPolicyAsync(const Model::DescribeSecurityPolicyRequest& request, const DescribeSecurityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DescribeServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeServerOutcomeCallable DescribeServerCallable(const Model::DescribeServerRequest& request) const;

        /**
         * An Async wrapper for DescribeServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeServerAsync(const Model::DescribeServerRequest& request, const DescribeServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DescribeUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserOutcomeCallable DescribeUserCallable(const Model::DescribeUserRequest& request) const;

        /**
         * An Async wrapper for DescribeUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserAsync(const Model::DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribeWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkflowOutcome DescribeWorkflow(const Model::DescribeWorkflowRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkflowOutcomeCallable DescribeWorkflowCallable(const Model::DescribeWorkflowRequest& request) const;

        /**
         * An Async wrapper for DescribeWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkflowAsync(const Model::DescribeWorkflowRequest& request, const DescribeWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports the signing and encryption certificates that you need to create local
         * (AS2) profiles and partner profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ImportCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportCertificateOutcome ImportCertificate(const Model::ImportCertificateRequest& request) const;

        /**
         * A Callable wrapper for ImportCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportCertificateOutcomeCallable ImportCertificateCallable(const Model::ImportCertificateRequest& request) const;

        /**
         * An Async wrapper for ImportCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportCertificateAsync(const Model::ImportCertificateRequest& request, const ImportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a host key to the server that's specified by the <code>ServerId</code>
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ImportHostKey">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportHostKeyOutcome ImportHostKey(const Model::ImportHostKeyRequest& request) const;

        /**
         * A Callable wrapper for ImportHostKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportHostKeyOutcomeCallable ImportHostKeyCallable(const Model::ImportHostKeyRequest& request) const;

        /**
         * An Async wrapper for ImportHostKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportHostKeyAsync(const Model::ImportHostKeyRequest& request, const ImportHostKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ImportSshPublicKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportSshPublicKeyOutcomeCallable ImportSshPublicKeyCallable(const Model::ImportSshPublicKeyRequest& request) const;

        /**
         * An Async wrapper for ImportSshPublicKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportSshPublicKeyAsync(const Model::ImportSshPublicKeyRequest& request, const ImportSshPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the details for all the accesses you have on your server.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListAccesses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessesOutcome ListAccesses(const Model::ListAccessesRequest& request) const;

        /**
         * A Callable wrapper for ListAccesses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccessesOutcomeCallable ListAccessesCallable(const Model::ListAccessesRequest& request) const;

        /**
         * An Async wrapper for ListAccesses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccessesAsync(const Model::ListAccessesRequest& request, const ListAccessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListAgreements that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAgreementsOutcomeCallable ListAgreementsCallable(const Model::ListAgreementsRequest& request) const;

        /**
         * An Async wrapper for ListAgreements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAgreementsAsync(const Model::ListAgreementsRequest& request, const ListAgreementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListCertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCertificatesOutcomeCallable ListCertificatesCallable(const Model::ListCertificatesRequest& request) const;

        /**
         * An Async wrapper for ListCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCertificatesAsync(const Model::ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the connectors for the specified Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListConnectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectorsOutcome ListConnectors(const Model::ListConnectorsRequest& request) const;

        /**
         * A Callable wrapper for ListConnectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConnectorsOutcomeCallable ListConnectorsCallable(const Model::ListConnectorsRequest& request) const;

        /**
         * An Async wrapper for ListConnectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConnectorsAsync(const Model::ListConnectorsRequest& request, const ListConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all executions for the specified workflow.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExecutionsOutcome ListExecutions(const Model::ListExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListExecutionsOutcomeCallable ListExecutionsCallable(const Model::ListExecutionsRequest& request) const;

        /**
         * An Async wrapper for ListExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListExecutionsAsync(const Model::ListExecutionsRequest& request, const ListExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of host keys for the server that's specified by the
         * <code>ServerId</code> parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListHostKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHostKeysOutcome ListHostKeys(const Model::ListHostKeysRequest& request) const;

        /**
         * A Callable wrapper for ListHostKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHostKeysOutcomeCallable ListHostKeysCallable(const Model::ListHostKeysRequest& request) const;

        /**
         * An Async wrapper for ListHostKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHostKeysAsync(const Model::ListHostKeysRequest& request, const ListHostKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProfilesOutcomeCallable ListProfilesCallable(const Model::ListProfilesRequest& request) const;

        /**
         * An Async wrapper for ListProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProfilesAsync(const Model::ListProfilesRequest& request, const ListProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the security policies that are attached to your file transfer
         * protocol-enabled servers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListSecurityPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityPoliciesOutcome ListSecurityPolicies(const Model::ListSecurityPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListSecurityPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSecurityPoliciesOutcomeCallable ListSecurityPoliciesCallable(const Model::ListSecurityPoliciesRequest& request) const;

        /**
         * An Async wrapper for ListSecurityPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSecurityPoliciesAsync(const Model::ListSecurityPoliciesRequest& request, const ListSecurityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the file transfer protocol-enabled servers that are associated with
         * your Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListServers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServersOutcome ListServers(const Model::ListServersRequest& request) const;

        /**
         * A Callable wrapper for ListServers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServersOutcomeCallable ListServersCallable(const Model::ListServersRequest& request) const;

        /**
         * An Async wrapper for ListServers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServersAsync(const Model::ListServersRequest& request, const ListServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the tags associated with the Amazon Resource Name (ARN) that you
         * specify. The resource can be a user, server, or role.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListTagsForResource">AWS
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
         * <p>Lists the users for a file transfer protocol-enabled server that you specify
         * by passing the <code>ServerId</code> parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * A Callable wrapper for ListUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request) const;

        /**
         * An Async wrapper for ListUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of your workflows.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListWorkflows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowsOutcome ListWorkflows(const Model::ListWorkflowsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkflows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkflowsOutcomeCallable ListWorkflowsCallable(const Model::ListWorkflowsRequest& request) const;

        /**
         * An Async wrapper for ListWorkflows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkflowsAsync(const Model::ListWorkflowsRequest& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for SendWorkflowStepState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendWorkflowStepStateOutcomeCallable SendWorkflowStepStateCallable(const Model::SendWorkflowStepStateRequest& request) const;

        /**
         * An Async wrapper for SendWorkflowStepState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendWorkflowStepStateAsync(const Model::SendWorkflowStepStateRequest& request, const SendWorkflowStepStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Begins an outbound file transfer to a remote AS2 server. You specify the
         * <code>ConnectorId</code> and the file paths for where to send the files.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/StartFileTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFileTransferOutcome StartFileTransfer(const Model::StartFileTransferRequest& request) const;

        /**
         * A Callable wrapper for StartFileTransfer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartFileTransferOutcomeCallable StartFileTransferCallable(const Model::StartFileTransferRequest& request) const;

        /**
         * An Async wrapper for StartFileTransfer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartFileTransferAsync(const Model::StartFileTransferRequest& request, const StartFileTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for StartServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartServerOutcomeCallable StartServerCallable(const Model::StartServerRequest& request) const;

        /**
         * An Async wrapper for StartServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartServerAsync(const Model::StartServerRequest& request, const StartServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for StopServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopServerOutcomeCallable StopServerCallable(const Model::StopServerRequest& request) const;

        /**
         * An Async wrapper for StopServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopServerAsync(const Model::StopServerRequest& request, const StopServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches a key-value pair to a resource, as identified by its Amazon Resource
         * Name (ARN). Resources are users, servers, roles, and other entities.</p>
         * <p>There is no response returned from this call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/TagResource">AWS
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
         * A Callable wrapper for TestIdentityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestIdentityProviderOutcomeCallable TestIdentityProviderCallable(const Model::TestIdentityProviderRequest& request) const;

        /**
         * An Async wrapper for TestIdentityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestIdentityProviderAsync(const Model::TestIdentityProviderRequest& request, const TestIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows you to update parameters for the access specified in the
         * <code>ServerID</code> and <code>ExternalID</code> parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/UpdateAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccessOutcome UpdateAccess(const Model::UpdateAccessRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAccessOutcomeCallable UpdateAccessCallable(const Model::UpdateAccessRequest& request) const;

        /**
         * An Async wrapper for UpdateAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccessAsync(const Model::UpdateAccessRequest& request, const UpdateAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for UpdateAgreement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAgreementOutcomeCallable UpdateAgreementCallable(const Model::UpdateAgreementRequest& request) const;

        /**
         * An Async wrapper for UpdateAgreement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAgreementAsync(const Model::UpdateAgreementRequest& request, const UpdateAgreementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the active and inactive dates for a certificate.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/UpdateCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCertificateOutcome UpdateCertificate(const Model::UpdateCertificateRequest& request) const;

        /**
         * A Callable wrapper for UpdateCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCertificateOutcomeCallable UpdateCertificateCallable(const Model::UpdateCertificateRequest& request) const;

        /**
         * An Async wrapper for UpdateCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCertificateAsync(const Model::UpdateCertificateRequest& request, const UpdateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates some of the parameters for an existing connector. Provide the
         * <code>ConnectorId</code> for the connector that you want to update, along with
         * the new values for the parameters to update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/UpdateConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectorOutcome UpdateConnector(const Model::UpdateConnectorRequest& request) const;

        /**
         * A Callable wrapper for UpdateConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConnectorOutcomeCallable UpdateConnectorCallable(const Model::UpdateConnectorRequest& request) const;

        /**
         * An Async wrapper for UpdateConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConnectorAsync(const Model::UpdateConnectorRequest& request, const UpdateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the description for the host key that's specified by the
         * <code>ServerId</code> and <code>HostKeyId</code> parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/UpdateHostKey">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateHostKeyOutcome UpdateHostKey(const Model::UpdateHostKeyRequest& request) const;

        /**
         * A Callable wrapper for UpdateHostKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateHostKeyOutcomeCallable UpdateHostKeyCallable(const Model::UpdateHostKeyRequest& request) const;

        /**
         * An Async wrapper for UpdateHostKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateHostKeyAsync(const Model::UpdateHostKeyRequest& request, const UpdateHostKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates some of the parameters for an existing profile. Provide the
         * <code>ProfileId</code> for the profile that you want to update, along with the
         * new values for the parameters to update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/UpdateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProfileOutcome UpdateProfile(const Model::UpdateProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProfileOutcomeCallable UpdateProfileCallable(const Model::UpdateProfileRequest& request) const;

        /**
         * An Async wrapper for UpdateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProfileAsync(const Model::UpdateProfileRequest& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the file transfer protocol-enabled server's properties after that
         * server has been created.</p> <p>The <code>UpdateServer</code> call returns the
         * <code>ServerId</code> of the server you updated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/UpdateServer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServerOutcome UpdateServer(const Model::UpdateServerRequest& request) const;

        /**
         * A Callable wrapper for UpdateServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServerOutcomeCallable UpdateServerCallable(const Model::UpdateServerRequest& request) const;

        /**
         * An Async wrapper for UpdateServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServerAsync(const Model::UpdateServerRequest& request, const UpdateServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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

        /**
         * A Callable wrapper for UpdateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserOutcomeCallable UpdateUserCallable(const Model::UpdateUserRequest& request) const;

        /**
         * An Async wrapper for UpdateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<TransferEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<TransferClient>;
      void init(const TransferClientConfiguration& clientConfiguration);

      TransferClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<TransferEndpointProviderBase> m_endpointProvider;
  };

} // namespace Transfer
} // namespace Aws
