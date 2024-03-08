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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef TransferClientConfiguration ClientConfigurationType;
      typedef TransferEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TransferClient(const Aws::Transfer::TransferClientConfiguration& clientConfiguration = Aws::Transfer::TransferClientConfiguration(),
                       std::shared_ptr<TransferEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TransferClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<TransferEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::Transfer::TransferClientConfiguration& clientConfiguration = Aws::Transfer::TransferClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TransferClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<TransferEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename CreateAccessRequestT = Model::CreateAccessRequest>
        Model::CreateAccessOutcomeCallable CreateAccessCallable(const CreateAccessRequestT& request) const
        {
            return SubmitCallable(&TransferClient::CreateAccess, request);
        }

        /**
         * An Async wrapper for CreateAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAccessRequestT = Model::CreateAccessRequest>
        void CreateAccessAsync(const CreateAccessRequestT& request, const CreateAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::CreateAccess, request, handler, context);
        }

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
        template<typename CreateAgreementRequestT = Model::CreateAgreementRequest>
        Model::CreateAgreementOutcomeCallable CreateAgreementCallable(const CreateAgreementRequestT& request) const
        {
            return SubmitCallable(&TransferClient::CreateAgreement, request);
        }

        /**
         * An Async wrapper for CreateAgreement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAgreementRequestT = Model::CreateAgreementRequest>
        void CreateAgreementAsync(const CreateAgreementRequestT& request, const CreateAgreementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::CreateAgreement, request, handler, context);
        }

        /**
         * <p>Creates the connector, which captures the parameters for a connection for the
         * AS2 or SFTP protocol. For AS2, the connector is required for sending files to an
         * externally hosted AS2 server. For SFTP, the connector is required when sending
         * files to an SFTP server or receiving files from an SFTP server. For more details
         * about connectors, see <a
         * href="https://docs.aws.amazon.com/transfer/latest/userguide/configure-as2-connector.html">Configure
         * AS2 connectors</a> and <a
         * href="https://docs.aws.amazon.com/transfer/latest/userguide/configure-sftp-connector.html">Create
         * SFTP connectors</a>.</p>  <p>You must specify exactly one configuration
         * object: either for AS2 (<code>As2Config</code>) or SFTP
         * (<code>SftpConfig</code>).</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/CreateConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectorOutcome CreateConnector(const Model::CreateConnectorRequest& request) const;

        /**
         * A Callable wrapper for CreateConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConnectorRequestT = Model::CreateConnectorRequest>
        Model::CreateConnectorOutcomeCallable CreateConnectorCallable(const CreateConnectorRequestT& request) const
        {
            return SubmitCallable(&TransferClient::CreateConnector, request);
        }

        /**
         * An Async wrapper for CreateConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConnectorRequestT = Model::CreateConnectorRequest>
        void CreateConnectorAsync(const CreateConnectorRequestT& request, const CreateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::CreateConnector, request, handler, context);
        }

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
        template<typename CreateProfileRequestT = Model::CreateProfileRequest>
        Model::CreateProfileOutcomeCallable CreateProfileCallable(const CreateProfileRequestT& request) const
        {
            return SubmitCallable(&TransferClient::CreateProfile, request);
        }

        /**
         * An Async wrapper for CreateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProfileRequestT = Model::CreateProfileRequest>
        void CreateProfileAsync(const CreateProfileRequestT& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::CreateProfile, request, handler, context);
        }

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
        template<typename CreateServerRequestT = Model::CreateServerRequest>
        Model::CreateServerOutcomeCallable CreateServerCallable(const CreateServerRequestT& request) const
        {
            return SubmitCallable(&TransferClient::CreateServer, request);
        }

        /**
         * An Async wrapper for CreateServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateServerRequestT = Model::CreateServerRequest>
        void CreateServerAsync(const CreateServerRequestT& request, const CreateServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::CreateServer, request, handler, context);
        }

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
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        Model::CreateUserOutcomeCallable CreateUserCallable(const CreateUserRequestT& request) const
        {
            return SubmitCallable(&TransferClient::CreateUser, request);
        }

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        void CreateUserAsync(const CreateUserRequestT& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::CreateUser, request, handler, context);
        }

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
        template<typename CreateWorkflowRequestT = Model::CreateWorkflowRequest>
        Model::CreateWorkflowOutcomeCallable CreateWorkflowCallable(const CreateWorkflowRequestT& request) const
        {
            return SubmitCallable(&TransferClient::CreateWorkflow, request);
        }

        /**
         * An Async wrapper for CreateWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkflowRequestT = Model::CreateWorkflowRequest>
        void CreateWorkflowAsync(const CreateWorkflowRequestT& request, const CreateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::CreateWorkflow, request, handler, context);
        }

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
        template<typename DeleteAccessRequestT = Model::DeleteAccessRequest>
        Model::DeleteAccessOutcomeCallable DeleteAccessCallable(const DeleteAccessRequestT& request) const
        {
            return SubmitCallable(&TransferClient::DeleteAccess, request);
        }

        /**
         * An Async wrapper for DeleteAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAccessRequestT = Model::DeleteAccessRequest>
        void DeleteAccessAsync(const DeleteAccessRequestT& request, const DeleteAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::DeleteAccess, request, handler, context);
        }

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
        template<typename DeleteAgreementRequestT = Model::DeleteAgreementRequest>
        Model::DeleteAgreementOutcomeCallable DeleteAgreementCallable(const DeleteAgreementRequestT& request) const
        {
            return SubmitCallable(&TransferClient::DeleteAgreement, request);
        }

        /**
         * An Async wrapper for DeleteAgreement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAgreementRequestT = Model::DeleteAgreementRequest>
        void DeleteAgreementAsync(const DeleteAgreementRequestT& request, const DeleteAgreementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::DeleteAgreement, request, handler, context);
        }

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
        template<typename DeleteCertificateRequestT = Model::DeleteCertificateRequest>
        Model::DeleteCertificateOutcomeCallable DeleteCertificateCallable(const DeleteCertificateRequestT& request) const
        {
            return SubmitCallable(&TransferClient::DeleteCertificate, request);
        }

        /**
         * An Async wrapper for DeleteCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCertificateRequestT = Model::DeleteCertificateRequest>
        void DeleteCertificateAsync(const DeleteCertificateRequestT& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::DeleteCertificate, request, handler, context);
        }

        /**
         * <p>Deletes the connector that's specified in the provided
         * <code>ConnectorId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DeleteConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectorOutcome DeleteConnector(const Model::DeleteConnectorRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConnectorRequestT = Model::DeleteConnectorRequest>
        Model::DeleteConnectorOutcomeCallable DeleteConnectorCallable(const DeleteConnectorRequestT& request) const
        {
            return SubmitCallable(&TransferClient::DeleteConnector, request);
        }

        /**
         * An Async wrapper for DeleteConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConnectorRequestT = Model::DeleteConnectorRequest>
        void DeleteConnectorAsync(const DeleteConnectorRequestT& request, const DeleteConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::DeleteConnector, request, handler, context);
        }

        /**
         * <p>Deletes the host key that's specified in the <code>HostKeyId</code>
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DeleteHostKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHostKeyOutcome DeleteHostKey(const Model::DeleteHostKeyRequest& request) const;

        /**
         * A Callable wrapper for DeleteHostKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteHostKeyRequestT = Model::DeleteHostKeyRequest>
        Model::DeleteHostKeyOutcomeCallable DeleteHostKeyCallable(const DeleteHostKeyRequestT& request) const
        {
            return SubmitCallable(&TransferClient::DeleteHostKey, request);
        }

        /**
         * An Async wrapper for DeleteHostKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteHostKeyRequestT = Model::DeleteHostKeyRequest>
        void DeleteHostKeyAsync(const DeleteHostKeyRequestT& request, const DeleteHostKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::DeleteHostKey, request, handler, context);
        }

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
        template<typename DeleteProfileRequestT = Model::DeleteProfileRequest>
        Model::DeleteProfileOutcomeCallable DeleteProfileCallable(const DeleteProfileRequestT& request) const
        {
            return SubmitCallable(&TransferClient::DeleteProfile, request);
        }

        /**
         * An Async wrapper for DeleteProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProfileRequestT = Model::DeleteProfileRequest>
        void DeleteProfileAsync(const DeleteProfileRequestT& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::DeleteProfile, request, handler, context);
        }

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
        template<typename DeleteServerRequestT = Model::DeleteServerRequest>
        Model::DeleteServerOutcomeCallable DeleteServerCallable(const DeleteServerRequestT& request) const
        {
            return SubmitCallable(&TransferClient::DeleteServer, request);
        }

        /**
         * An Async wrapper for DeleteServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteServerRequestT = Model::DeleteServerRequest>
        void DeleteServerAsync(const DeleteServerRequestT& request, const DeleteServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::DeleteServer, request, handler, context);
        }

        /**
         * <p>Deletes a user's Secure Shell (SSH) public key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DeleteSshPublicKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSshPublicKeyOutcome DeleteSshPublicKey(const Model::DeleteSshPublicKeyRequest& request) const;

        /**
         * A Callable wrapper for DeleteSshPublicKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSshPublicKeyRequestT = Model::DeleteSshPublicKeyRequest>
        Model::DeleteSshPublicKeyOutcomeCallable DeleteSshPublicKeyCallable(const DeleteSshPublicKeyRequestT& request) const
        {
            return SubmitCallable(&TransferClient::DeleteSshPublicKey, request);
        }

        /**
         * An Async wrapper for DeleteSshPublicKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSshPublicKeyRequestT = Model::DeleteSshPublicKeyRequest>
        void DeleteSshPublicKeyAsync(const DeleteSshPublicKeyRequestT& request, const DeleteSshPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::DeleteSshPublicKey, request, handler, context);
        }

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
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        Model::DeleteUserOutcomeCallable DeleteUserCallable(const DeleteUserRequestT& request) const
        {
            return SubmitCallable(&TransferClient::DeleteUser, request);
        }

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        void DeleteUserAsync(const DeleteUserRequestT& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::DeleteUser, request, handler, context);
        }

        /**
         * <p>Deletes the specified workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DeleteWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkflowOutcome DeleteWorkflow(const Model::DeleteWorkflowRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkflowRequestT = Model::DeleteWorkflowRequest>
        Model::DeleteWorkflowOutcomeCallable DeleteWorkflowCallable(const DeleteWorkflowRequestT& request) const
        {
            return SubmitCallable(&TransferClient::DeleteWorkflow, request);
        }

        /**
         * An Async wrapper for DeleteWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkflowRequestT = Model::DeleteWorkflowRequest>
        void DeleteWorkflowAsync(const DeleteWorkflowRequestT& request, const DeleteWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::DeleteWorkflow, request, handler, context);
        }

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
        template<typename DescribeAccessRequestT = Model::DescribeAccessRequest>
        Model::DescribeAccessOutcomeCallable DescribeAccessCallable(const DescribeAccessRequestT& request) const
        {
            return SubmitCallable(&TransferClient::DescribeAccess, request);
        }

        /**
         * An Async wrapper for DescribeAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccessRequestT = Model::DescribeAccessRequest>
        void DescribeAccessAsync(const DescribeAccessRequestT& request, const DescribeAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::DescribeAccess, request, handler, context);
        }

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
        template<typename DescribeAgreementRequestT = Model::DescribeAgreementRequest>
        Model::DescribeAgreementOutcomeCallable DescribeAgreementCallable(const DescribeAgreementRequestT& request) const
        {
            return SubmitCallable(&TransferClient::DescribeAgreement, request);
        }

        /**
         * An Async wrapper for DescribeAgreement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAgreementRequestT = Model::DescribeAgreementRequest>
        void DescribeAgreementAsync(const DescribeAgreementRequestT& request, const DescribeAgreementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::DescribeAgreement, request, handler, context);
        }

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
        template<typename DescribeCertificateRequestT = Model::DescribeCertificateRequest>
        Model::DescribeCertificateOutcomeCallable DescribeCertificateCallable(const DescribeCertificateRequestT& request) const
        {
            return SubmitCallable(&TransferClient::DescribeCertificate, request);
        }

        /**
         * An Async wrapper for DescribeCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCertificateRequestT = Model::DescribeCertificateRequest>
        void DescribeCertificateAsync(const DescribeCertificateRequestT& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::DescribeCertificate, request, handler, context);
        }

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
        template<typename DescribeConnectorRequestT = Model::DescribeConnectorRequest>
        Model::DescribeConnectorOutcomeCallable DescribeConnectorCallable(const DescribeConnectorRequestT& request) const
        {
            return SubmitCallable(&TransferClient::DescribeConnector, request);
        }

        /**
         * An Async wrapper for DescribeConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConnectorRequestT = Model::DescribeConnectorRequest>
        void DescribeConnectorAsync(const DescribeConnectorRequestT& request, const DescribeConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::DescribeConnector, request, handler, context);
        }

        /**
         * <p>You can use <code>DescribeExecution</code> to check the details of the
         * execution of the specified workflow.</p>  <p>This API call only returns
         * details for in-progress workflows.</p> <p> If you provide an ID for an execution
         * that is not in progress, or if the execution doesn't match the specified
         * workflow ID, you receive a <code>ResourceNotFound</code> exception.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribeExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExecutionOutcome DescribeExecution(const Model::DescribeExecutionRequest& request) const;

        /**
         * A Callable wrapper for DescribeExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeExecutionRequestT = Model::DescribeExecutionRequest>
        Model::DescribeExecutionOutcomeCallable DescribeExecutionCallable(const DescribeExecutionRequestT& request) const
        {
            return SubmitCallable(&TransferClient::DescribeExecution, request);
        }

        /**
         * An Async wrapper for DescribeExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeExecutionRequestT = Model::DescribeExecutionRequest>
        void DescribeExecutionAsync(const DescribeExecutionRequestT& request, const DescribeExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::DescribeExecution, request, handler, context);
        }

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
        template<typename DescribeHostKeyRequestT = Model::DescribeHostKeyRequest>
        Model::DescribeHostKeyOutcomeCallable DescribeHostKeyCallable(const DescribeHostKeyRequestT& request) const
        {
            return SubmitCallable(&TransferClient::DescribeHostKey, request);
        }

        /**
         * An Async wrapper for DescribeHostKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeHostKeyRequestT = Model::DescribeHostKeyRequest>
        void DescribeHostKeyAsync(const DescribeHostKeyRequestT& request, const DescribeHostKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::DescribeHostKey, request, handler, context);
        }

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
        template<typename DescribeProfileRequestT = Model::DescribeProfileRequest>
        Model::DescribeProfileOutcomeCallable DescribeProfileCallable(const DescribeProfileRequestT& request) const
        {
            return SubmitCallable(&TransferClient::DescribeProfile, request);
        }

        /**
         * An Async wrapper for DescribeProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProfileRequestT = Model::DescribeProfileRequest>
        void DescribeProfileAsync(const DescribeProfileRequestT& request, const DescribeProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::DescribeProfile, request, handler, context);
        }

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
        template<typename DescribeSecurityPolicyRequestT = Model::DescribeSecurityPolicyRequest>
        Model::DescribeSecurityPolicyOutcomeCallable DescribeSecurityPolicyCallable(const DescribeSecurityPolicyRequestT& request) const
        {
            return SubmitCallable(&TransferClient::DescribeSecurityPolicy, request);
        }

        /**
         * An Async wrapper for DescribeSecurityPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSecurityPolicyRequestT = Model::DescribeSecurityPolicyRequest>
        void DescribeSecurityPolicyAsync(const DescribeSecurityPolicyRequestT& request, const DescribeSecurityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::DescribeSecurityPolicy, request, handler, context);
        }

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
        template<typename DescribeServerRequestT = Model::DescribeServerRequest>
        Model::DescribeServerOutcomeCallable DescribeServerCallable(const DescribeServerRequestT& request) const
        {
            return SubmitCallable(&TransferClient::DescribeServer, request);
        }

        /**
         * An Async wrapper for DescribeServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeServerRequestT = Model::DescribeServerRequest>
        void DescribeServerAsync(const DescribeServerRequestT& request, const DescribeServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::DescribeServer, request, handler, context);
        }

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
        template<typename DescribeUserRequestT = Model::DescribeUserRequest>
        Model::DescribeUserOutcomeCallable DescribeUserCallable(const DescribeUserRequestT& request) const
        {
            return SubmitCallable(&TransferClient::DescribeUser, request);
        }

        /**
         * An Async wrapper for DescribeUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeUserRequestT = Model::DescribeUserRequest>
        void DescribeUserAsync(const DescribeUserRequestT& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::DescribeUser, request, handler, context);
        }

        /**
         * <p>Describes the specified workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribeWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkflowOutcome DescribeWorkflow(const Model::DescribeWorkflowRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWorkflowRequestT = Model::DescribeWorkflowRequest>
        Model::DescribeWorkflowOutcomeCallable DescribeWorkflowCallable(const DescribeWorkflowRequestT& request) const
        {
            return SubmitCallable(&TransferClient::DescribeWorkflow, request);
        }

        /**
         * An Async wrapper for DescribeWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWorkflowRequestT = Model::DescribeWorkflowRequest>
        void DescribeWorkflowAsync(const DescribeWorkflowRequestT& request, const DescribeWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::DescribeWorkflow, request, handler, context);
        }

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
        template<typename ImportCertificateRequestT = Model::ImportCertificateRequest>
        Model::ImportCertificateOutcomeCallable ImportCertificateCallable(const ImportCertificateRequestT& request) const
        {
            return SubmitCallable(&TransferClient::ImportCertificate, request);
        }

        /**
         * An Async wrapper for ImportCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportCertificateRequestT = Model::ImportCertificateRequest>
        void ImportCertificateAsync(const ImportCertificateRequestT& request, const ImportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::ImportCertificate, request, handler, context);
        }

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
        template<typename ImportHostKeyRequestT = Model::ImportHostKeyRequest>
        Model::ImportHostKeyOutcomeCallable ImportHostKeyCallable(const ImportHostKeyRequestT& request) const
        {
            return SubmitCallable(&TransferClient::ImportHostKey, request);
        }

        /**
         * An Async wrapper for ImportHostKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportHostKeyRequestT = Model::ImportHostKeyRequest>
        void ImportHostKeyAsync(const ImportHostKeyRequestT& request, const ImportHostKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::ImportHostKey, request, handler, context);
        }

        /**
         * <p>Adds a Secure Shell (SSH) public key to a Transfer Family user identified by
         * a <code>UserName</code> value assigned to the specific file transfer
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
        template<typename ImportSshPublicKeyRequestT = Model::ImportSshPublicKeyRequest>
        Model::ImportSshPublicKeyOutcomeCallable ImportSshPublicKeyCallable(const ImportSshPublicKeyRequestT& request) const
        {
            return SubmitCallable(&TransferClient::ImportSshPublicKey, request);
        }

        /**
         * An Async wrapper for ImportSshPublicKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportSshPublicKeyRequestT = Model::ImportSshPublicKeyRequest>
        void ImportSshPublicKeyAsync(const ImportSshPublicKeyRequestT& request, const ImportSshPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::ImportSshPublicKey, request, handler, context);
        }

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
        template<typename ListAccessesRequestT = Model::ListAccessesRequest>
        Model::ListAccessesOutcomeCallable ListAccessesCallable(const ListAccessesRequestT& request) const
        {
            return SubmitCallable(&TransferClient::ListAccesses, request);
        }

        /**
         * An Async wrapper for ListAccesses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccessesRequestT = Model::ListAccessesRequest>
        void ListAccessesAsync(const ListAccessesRequestT& request, const ListAccessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::ListAccesses, request, handler, context);
        }

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
        template<typename ListAgreementsRequestT = Model::ListAgreementsRequest>
        Model::ListAgreementsOutcomeCallable ListAgreementsCallable(const ListAgreementsRequestT& request) const
        {
            return SubmitCallable(&TransferClient::ListAgreements, request);
        }

        /**
         * An Async wrapper for ListAgreements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAgreementsRequestT = Model::ListAgreementsRequest>
        void ListAgreementsAsync(const ListAgreementsRequestT& request, const ListAgreementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::ListAgreements, request, handler, context);
        }

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
        template<typename ListCertificatesRequestT = Model::ListCertificatesRequest>
        Model::ListCertificatesOutcomeCallable ListCertificatesCallable(const ListCertificatesRequestT& request) const
        {
            return SubmitCallable(&TransferClient::ListCertificates, request);
        }

        /**
         * An Async wrapper for ListCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCertificatesRequestT = Model::ListCertificatesRequest>
        void ListCertificatesAsync(const ListCertificatesRequestT& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::ListCertificates, request, handler, context);
        }

        /**
         * <p>Lists the connectors for the specified Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListConnectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectorsOutcome ListConnectors(const Model::ListConnectorsRequest& request) const;

        /**
         * A Callable wrapper for ListConnectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConnectorsRequestT = Model::ListConnectorsRequest>
        Model::ListConnectorsOutcomeCallable ListConnectorsCallable(const ListConnectorsRequestT& request) const
        {
            return SubmitCallable(&TransferClient::ListConnectors, request);
        }

        /**
         * An Async wrapper for ListConnectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConnectorsRequestT = Model::ListConnectorsRequest>
        void ListConnectorsAsync(const ListConnectorsRequestT& request, const ListConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::ListConnectors, request, handler, context);
        }

        /**
         * <p>Lists all in-progress executions for the specified workflow.</p>  <p>If
         * the specified workflow ID cannot be found, <code>ListExecutions</code> returns a
         * <code>ResourceNotFound</code> exception.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExecutionsOutcome ListExecutions(const Model::ListExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListExecutionsRequestT = Model::ListExecutionsRequest>
        Model::ListExecutionsOutcomeCallable ListExecutionsCallable(const ListExecutionsRequestT& request) const
        {
            return SubmitCallable(&TransferClient::ListExecutions, request);
        }

        /**
         * An Async wrapper for ListExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListExecutionsRequestT = Model::ListExecutionsRequest>
        void ListExecutionsAsync(const ListExecutionsRequestT& request, const ListExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::ListExecutions, request, handler, context);
        }

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
        template<typename ListHostKeysRequestT = Model::ListHostKeysRequest>
        Model::ListHostKeysOutcomeCallable ListHostKeysCallable(const ListHostKeysRequestT& request) const
        {
            return SubmitCallable(&TransferClient::ListHostKeys, request);
        }

        /**
         * An Async wrapper for ListHostKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListHostKeysRequestT = Model::ListHostKeysRequest>
        void ListHostKeysAsync(const ListHostKeysRequestT& request, const ListHostKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::ListHostKeys, request, handler, context);
        }

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
        template<typename ListProfilesRequestT = Model::ListProfilesRequest>
        Model::ListProfilesOutcomeCallable ListProfilesCallable(const ListProfilesRequestT& request) const
        {
            return SubmitCallable(&TransferClient::ListProfiles, request);
        }

        /**
         * An Async wrapper for ListProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProfilesRequestT = Model::ListProfilesRequest>
        void ListProfilesAsync(const ListProfilesRequestT& request, const ListProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::ListProfiles, request, handler, context);
        }

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
        template<typename ListSecurityPoliciesRequestT = Model::ListSecurityPoliciesRequest>
        Model::ListSecurityPoliciesOutcomeCallable ListSecurityPoliciesCallable(const ListSecurityPoliciesRequestT& request) const
        {
            return SubmitCallable(&TransferClient::ListSecurityPolicies, request);
        }

        /**
         * An Async wrapper for ListSecurityPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSecurityPoliciesRequestT = Model::ListSecurityPoliciesRequest>
        void ListSecurityPoliciesAsync(const ListSecurityPoliciesRequestT& request, const ListSecurityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::ListSecurityPolicies, request, handler, context);
        }

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
        template<typename ListServersRequestT = Model::ListServersRequest>
        Model::ListServersOutcomeCallable ListServersCallable(const ListServersRequestT& request) const
        {
            return SubmitCallable(&TransferClient::ListServers, request);
        }

        /**
         * An Async wrapper for ListServers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServersRequestT = Model::ListServersRequest>
        void ListServersAsync(const ListServersRequestT& request, const ListServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::ListServers, request, handler, context);
        }

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
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&TransferClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::ListTagsForResource, request, handler, context);
        }

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
        template<typename ListUsersRequestT = Model::ListUsersRequest>
        Model::ListUsersOutcomeCallable ListUsersCallable(const ListUsersRequestT& request) const
        {
            return SubmitCallable(&TransferClient::ListUsers, request);
        }

        /**
         * An Async wrapper for ListUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUsersRequestT = Model::ListUsersRequest>
        void ListUsersAsync(const ListUsersRequestT& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::ListUsers, request, handler, context);
        }

        /**
         * <p>Lists all workflows associated with your Amazon Web Services account for your
         * current region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListWorkflows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowsOutcome ListWorkflows(const Model::ListWorkflowsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkflows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkflowsRequestT = Model::ListWorkflowsRequest>
        Model::ListWorkflowsOutcomeCallable ListWorkflowsCallable(const ListWorkflowsRequestT& request) const
        {
            return SubmitCallable(&TransferClient::ListWorkflows, request);
        }

        /**
         * An Async wrapper for ListWorkflows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkflowsRequestT = Model::ListWorkflowsRequest>
        void ListWorkflowsAsync(const ListWorkflowsRequestT& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::ListWorkflows, request, handler, context);
        }

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
        template<typename SendWorkflowStepStateRequestT = Model::SendWorkflowStepStateRequest>
        Model::SendWorkflowStepStateOutcomeCallable SendWorkflowStepStateCallable(const SendWorkflowStepStateRequestT& request) const
        {
            return SubmitCallable(&TransferClient::SendWorkflowStepState, request);
        }

        /**
         * An Async wrapper for SendWorkflowStepState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendWorkflowStepStateRequestT = Model::SendWorkflowStepStateRequest>
        void SendWorkflowStepStateAsync(const SendWorkflowStepStateRequestT& request, const SendWorkflowStepStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::SendWorkflowStepState, request, handler, context);
        }

        /**
         * <p>Begins a file transfer between local Amazon Web Services storage and a remote
         * AS2 or SFTP server.</p> <ul> <li> <p>For an AS2 connector, you specify the
         * <code>ConnectorId</code> and one or more <code>SendFilePaths</code> to identify
         * the files you want to transfer.</p> </li> <li> <p>For an SFTP connector, the
         * file transfer can be either outbound or inbound. In both cases, you specify the
         * <code>ConnectorId</code>. Depending on the direction of the transfer, you also
         * specify the following items:</p> <ul> <li> <p>If you are transferring file from
         * a partner's SFTP server to Amazon Web Services storage, you specify one or more
         * <code>RetreiveFilePaths</code> to identify the files you want to transfer, and a
         * <code>LocalDirectoryPath</code> to specify the destination folder.</p> </li>
         * <li> <p>If you are transferring file to a partner's SFTP server from Amazon Web
         * Services storage, you specify one or more <code>SendFilePaths</code> to identify
         * the files you want to transfer, and a <code>RemoteDirectoryPath</code> to
         * specify the destination folder.</p> </li> </ul> </li> </ul><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/StartFileTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFileTransferOutcome StartFileTransfer(const Model::StartFileTransferRequest& request) const;

        /**
         * A Callable wrapper for StartFileTransfer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartFileTransferRequestT = Model::StartFileTransferRequest>
        Model::StartFileTransferOutcomeCallable StartFileTransferCallable(const StartFileTransferRequestT& request) const
        {
            return SubmitCallable(&TransferClient::StartFileTransfer, request);
        }

        /**
         * An Async wrapper for StartFileTransfer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartFileTransferRequestT = Model::StartFileTransferRequest>
        void StartFileTransferAsync(const StartFileTransferRequestT& request, const StartFileTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::StartFileTransfer, request, handler, context);
        }

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
        template<typename StartServerRequestT = Model::StartServerRequest>
        Model::StartServerOutcomeCallable StartServerCallable(const StartServerRequestT& request) const
        {
            return SubmitCallable(&TransferClient::StartServer, request);
        }

        /**
         * An Async wrapper for StartServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartServerRequestT = Model::StartServerRequest>
        void StartServerAsync(const StartServerRequestT& request, const StartServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::StartServer, request, handler, context);
        }

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
        template<typename StopServerRequestT = Model::StopServerRequest>
        Model::StopServerOutcomeCallable StopServerCallable(const StopServerRequestT& request) const
        {
            return SubmitCallable(&TransferClient::StopServer, request);
        }

        /**
         * An Async wrapper for StopServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopServerRequestT = Model::StopServerRequest>
        void StopServerAsync(const StopServerRequestT& request, const StopServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::StopServer, request, handler, context);
        }

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
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&TransferClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::TagResource, request, handler, context);
        }

        /**
         * <p>Tests whether your SFTP connector is set up successfully. We highly recommend
         * that you call this operation to test your ability to transfer files between
         * local Amazon Web Services storage and a trading partner's SFTP
         * server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/TestConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::TestConnectionOutcome TestConnection(const Model::TestConnectionRequest& request) const;

        /**
         * A Callable wrapper for TestConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TestConnectionRequestT = Model::TestConnectionRequest>
        Model::TestConnectionOutcomeCallable TestConnectionCallable(const TestConnectionRequestT& request) const
        {
            return SubmitCallable(&TransferClient::TestConnection, request);
        }

        /**
         * An Async wrapper for TestConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestConnectionRequestT = Model::TestConnectionRequest>
        void TestConnectionAsync(const TestConnectionRequestT& request, const TestConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::TestConnection, request, handler, context);
        }

        /**
         * <p>If the <code>IdentityProviderType</code> of a file transfer protocol-enabled
         * server is <code>AWS_DIRECTORY_SERVICE</code> or <code>API_Gateway</code>, tests
         * whether your identity provider is set up successfully. We highly recommend that
         * you call this operation to test your authentication method as soon as you create
         * your server. By doing so, you can troubleshoot issues with the identity provider
         * integration to ensure that your users can successfully use the service.</p> <p>
         * The <code>ServerId</code> and <code>UserName</code> parameters are required. The
         * <code>ServerProtocol</code>, <code>SourceIp</code>, and
         * <code>UserPassword</code> are all optional. </p> <p>Note the following:</p> <ul>
         * <li> <p> You cannot use <code>TestIdentityProvider</code> if the
         * <code>IdentityProviderType</code> of your server is
         * <code>SERVICE_MANAGED</code>.</p> </li> <li> <p>
         * <code>TestIdentityProvider</code> does not work with keys: it only accepts
         * passwords.</p> </li> <li> <p> <code>TestIdentityProvider</code> can test the
         * password operation for a custom Identity Provider that handles keys and
         * passwords.</p> </li> <li> <p> If you provide any incorrect values for any
         * parameters, the <code>Response</code> field is empty. </p> </li> <li> <p> If you
         * provide a server ID for a server that uses service-managed users, you get an
         * error: </p> <p> <code> An error occurred (InvalidRequestException) when calling
         * the TestIdentityProvider operation: s-<i>server-ID</i> not configured for
         * external auth </code> </p> </li> <li> <p> If you enter a Server ID for the
         * <code>--server-id</code> parameter that does not identify an actual Transfer
         * server, you receive the following error: </p> <p> <code>An error occurred
         * (ResourceNotFoundException) when calling the TestIdentityProvider operation:
         * Unknown server</code>. </p> <p>It is possible your sever is in a different
         * region. You can specify a region by adding the following: <code>--region
         * region-code</code>, such as <code>--region us-east-2</code> to specify a server
         * in <b>US East (Ohio)</b>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/TestIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::TestIdentityProviderOutcome TestIdentityProvider(const Model::TestIdentityProviderRequest& request) const;

        /**
         * A Callable wrapper for TestIdentityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TestIdentityProviderRequestT = Model::TestIdentityProviderRequest>
        Model::TestIdentityProviderOutcomeCallable TestIdentityProviderCallable(const TestIdentityProviderRequestT& request) const
        {
            return SubmitCallable(&TransferClient::TestIdentityProvider, request);
        }

        /**
         * An Async wrapper for TestIdentityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestIdentityProviderRequestT = Model::TestIdentityProviderRequest>
        void TestIdentityProviderAsync(const TestIdentityProviderRequestT& request, const TestIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::TestIdentityProvider, request, handler, context);
        }

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
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&TransferClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::UntagResource, request, handler, context);
        }

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
        template<typename UpdateAccessRequestT = Model::UpdateAccessRequest>
        Model::UpdateAccessOutcomeCallable UpdateAccessCallable(const UpdateAccessRequestT& request) const
        {
            return SubmitCallable(&TransferClient::UpdateAccess, request);
        }

        /**
         * An Async wrapper for UpdateAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAccessRequestT = Model::UpdateAccessRequest>
        void UpdateAccessAsync(const UpdateAccessRequestT& request, const UpdateAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::UpdateAccess, request, handler, context);
        }

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
        template<typename UpdateAgreementRequestT = Model::UpdateAgreementRequest>
        Model::UpdateAgreementOutcomeCallable UpdateAgreementCallable(const UpdateAgreementRequestT& request) const
        {
            return SubmitCallable(&TransferClient::UpdateAgreement, request);
        }

        /**
         * An Async wrapper for UpdateAgreement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAgreementRequestT = Model::UpdateAgreementRequest>
        void UpdateAgreementAsync(const UpdateAgreementRequestT& request, const UpdateAgreementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::UpdateAgreement, request, handler, context);
        }

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
        template<typename UpdateCertificateRequestT = Model::UpdateCertificateRequest>
        Model::UpdateCertificateOutcomeCallable UpdateCertificateCallable(const UpdateCertificateRequestT& request) const
        {
            return SubmitCallable(&TransferClient::UpdateCertificate, request);
        }

        /**
         * An Async wrapper for UpdateCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCertificateRequestT = Model::UpdateCertificateRequest>
        void UpdateCertificateAsync(const UpdateCertificateRequestT& request, const UpdateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::UpdateCertificate, request, handler, context);
        }

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
        template<typename UpdateConnectorRequestT = Model::UpdateConnectorRequest>
        Model::UpdateConnectorOutcomeCallable UpdateConnectorCallable(const UpdateConnectorRequestT& request) const
        {
            return SubmitCallable(&TransferClient::UpdateConnector, request);
        }

        /**
         * An Async wrapper for UpdateConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConnectorRequestT = Model::UpdateConnectorRequest>
        void UpdateConnectorAsync(const UpdateConnectorRequestT& request, const UpdateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::UpdateConnector, request, handler, context);
        }

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
        template<typename UpdateHostKeyRequestT = Model::UpdateHostKeyRequest>
        Model::UpdateHostKeyOutcomeCallable UpdateHostKeyCallable(const UpdateHostKeyRequestT& request) const
        {
            return SubmitCallable(&TransferClient::UpdateHostKey, request);
        }

        /**
         * An Async wrapper for UpdateHostKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateHostKeyRequestT = Model::UpdateHostKeyRequest>
        void UpdateHostKeyAsync(const UpdateHostKeyRequestT& request, const UpdateHostKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::UpdateHostKey, request, handler, context);
        }

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
        template<typename UpdateProfileRequestT = Model::UpdateProfileRequest>
        Model::UpdateProfileOutcomeCallable UpdateProfileCallable(const UpdateProfileRequestT& request) const
        {
            return SubmitCallable(&TransferClient::UpdateProfile, request);
        }

        /**
         * An Async wrapper for UpdateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProfileRequestT = Model::UpdateProfileRequest>
        void UpdateProfileAsync(const UpdateProfileRequestT& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::UpdateProfile, request, handler, context);
        }

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
        template<typename UpdateServerRequestT = Model::UpdateServerRequest>
        Model::UpdateServerOutcomeCallable UpdateServerCallable(const UpdateServerRequestT& request) const
        {
            return SubmitCallable(&TransferClient::UpdateServer, request);
        }

        /**
         * An Async wrapper for UpdateServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateServerRequestT = Model::UpdateServerRequest>
        void UpdateServerAsync(const UpdateServerRequestT& request, const UpdateServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::UpdateServer, request, handler, context);
        }

        /**
         * <p>Assigns new properties to a user. Parameters you pass modify any or all of
         * the following: the home directory, role, and policy for the
         * <code>UserName</code> and <code>ServerId</code> you specify.</p> <p>The response
         * returns the <code>ServerId</code> and the <code>UserName</code> for the updated
         * user.</p> <p>In the console, you can select <i>Restricted</i> when you create or
         * update a user. This ensures that the user can't access anything outside of their
         * home directory. The programmatic way to configure this behavior is to update the
         * user. Set their <code>HomeDirectoryType</code> to <code>LOGICAL</code>, and
         * specify <code>HomeDirectoryMappings</code> with <code>Entry</code> as root
         * (<code>/</code>) and <code>Target</code> as their home directory.</p> <p>For
         * example, if the user's home directory is <code>/test/admin-user</code>, the
         * following command updates the user so that their configuration in the console
         * shows the <i>Restricted</i> flag as selected.</p> <p> <code> aws transfer
         * update-user --server-id &lt;server-id&gt; --user-name admin-user
         * --home-directory-type LOGICAL --home-directory-mappings "[{\"Entry\":\"/\",
         * \"Target\":\"/test/admin-user\"}]"</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/UpdateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;

        /**
         * A Callable wrapper for UpdateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserRequestT = Model::UpdateUserRequest>
        Model::UpdateUserOutcomeCallable UpdateUserCallable(const UpdateUserRequestT& request) const
        {
            return SubmitCallable(&TransferClient::UpdateUser, request);
        }

        /**
         * An Async wrapper for UpdateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserRequestT = Model::UpdateUserRequest>
        void UpdateUserAsync(const UpdateUserRequestT& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TransferClient::UpdateUser, request, handler, context);
        }


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
