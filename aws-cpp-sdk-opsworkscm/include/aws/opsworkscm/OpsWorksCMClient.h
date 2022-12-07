/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opsworkscm/OpsWorksCMServiceClientModel.h>

namespace Aws
{
namespace OpsWorksCM
{
  /**
   * <fullname>AWS OpsWorks CM</fullname> <p>AWS OpsWorks for configuration
   * management (CM) is a service that runs and manages configuration management
   * servers. You can use AWS OpsWorks CM to create and manage AWS OpsWorks for Chef
   * Automate and AWS OpsWorks for Puppet Enterprise servers, and add or remove nodes
   * for the servers to manage.</p> <p> <b>Glossary of terms</b> </p> <ul> <li> <p>
   * <b>Server</b>: A configuration management server that can be highly-available.
   * The configuration management server runs on an Amazon Elastic Compute Cloud
   * (EC2) instance, and may use various other AWS services, such as Amazon
   * Relational Database Service (RDS) and Elastic Load Balancing. A server is a
   * generic abstraction over the configuration manager that you want to use, much
   * like Amazon RDS. In AWS OpsWorks CM, you do not start or stop servers. After you
   * create servers, they continue to run until they are deleted.</p> </li> <li> <p>
   * <b>Engine</b>: The engine is the specific configuration manager that you want to
   * use. Valid values in this release include <code>ChefAutomate</code> and
   * <code>Puppet</code>.</p> </li> <li> <p> <b>Backup</b>: This is an
   * application-level backup of the data that the configuration manager stores. AWS
   * OpsWorks CM creates an S3 bucket for backups when you launch the first server. A
   * backup maintains a snapshot of a server's configuration-related attributes at
   * the time the backup starts.</p> </li> <li> <p> <b>Events</b>: Events are always
   * related to a server. Events are written during server creation, when health
   * checks run, when backups are created, when system maintenance is performed, etc.
   * When you delete a server, the server's events are also deleted.</p> </li> <li>
   * <p> <b>Account attributes</b>: Every account has attributes that are assigned in
   * the AWS OpsWorks CM database. These attributes store information about
   * configuration limits (servers, backups, etc.) and your customer account. </p>
   * </li> </ul> <p> <b>Endpoints</b> </p> <p>AWS OpsWorks CM supports the following
   * endpoints, all HTTPS. You must connect to one of the following endpoints. Your
   * servers can only be accessed or managed within the endpoint in which they are
   * created.</p> <ul> <li> <p>opsworks-cm.us-east-1.amazonaws.com</p> </li> <li>
   * <p>opsworks-cm.us-east-2.amazonaws.com</p> </li> <li>
   * <p>opsworks-cm.us-west-1.amazonaws.com</p> </li> <li>
   * <p>opsworks-cm.us-west-2.amazonaws.com</p> </li> <li>
   * <p>opsworks-cm.ap-northeast-1.amazonaws.com</p> </li> <li>
   * <p>opsworks-cm.ap-southeast-1.amazonaws.com</p> </li> <li>
   * <p>opsworks-cm.ap-southeast-2.amazonaws.com</p> </li> <li>
   * <p>opsworks-cm.eu-central-1.amazonaws.com</p> </li> <li>
   * <p>opsworks-cm.eu-west-1.amazonaws.com</p> </li> </ul> <p>For more information,
   * see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/opsworks-service.html">AWS
   * OpsWorks endpoints and quotas</a> in the AWS General Reference.</p> <p>
   * <b>Throttling limits</b> </p> <p>All API operations allow for five requests per
   * second with a burst of 10 requests per second.</p>
   */
  class AWS_OPSWORKSCM_API OpsWorksCMClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<OpsWorksCMClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpsWorksCMClient(const Aws::OpsWorksCM::OpsWorksCMClientConfiguration& clientConfiguration = Aws::OpsWorksCM::OpsWorksCMClientConfiguration(),
                         std::shared_ptr<OpsWorksCMEndpointProviderBase> endpointProvider = Aws::MakeShared<OpsWorksCMEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpsWorksCMClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<OpsWorksCMEndpointProviderBase> endpointProvider = Aws::MakeShared<OpsWorksCMEndpointProvider>(ALLOCATION_TAG),
                         const Aws::OpsWorksCM::OpsWorksCMClientConfiguration& clientConfiguration = Aws::OpsWorksCM::OpsWorksCMClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OpsWorksCMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<OpsWorksCMEndpointProviderBase> endpointProvider = Aws::MakeShared<OpsWorksCMEndpointProvider>(ALLOCATION_TAG),
                         const Aws::OpsWorksCM::OpsWorksCMClientConfiguration& clientConfiguration = Aws::OpsWorksCM::OpsWorksCMClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpsWorksCMClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpsWorksCMClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OpsWorksCMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~OpsWorksCMClient();

        /**
         * <p> Associates a new node with the server. For more information about how to
         * disassociate a node, see <a>DisassociateNode</a>.</p> <p> On a Chef server: This
         * command is an alternative to <code>knife bootstrap</code>.</p> <p> Example
         * (Chef): <code>aws opsworks-cm associate-node --server-name <i>MyServer</i>
         * --node-name <i>MyManagedNode</i> --engine-attributes
         * "Name=<i>CHEF_ORGANIZATION</i>,Value=default"
         * "Name=<i>CHEF_NODE_PUBLIC_KEY</i>,Value=<i>public-key-pem</i>"</code> </p> <p>
         * On a Puppet server, this command is an alternative to the <code>puppet cert
         * sign</code> command that signs a Puppet node CSR. </p> <p> Example (Puppet):
         * <code>aws opsworks-cm associate-node --server-name <i>MyServer</i> --node-name
         * <i>MyManagedNode</i> --engine-attributes
         * "Name=<i>PUPPET_NODE_CSR</i>,Value=<i>csr-pem</i>"</code> </p> <p> A node can
         * can only be associated with servers that are in a <code>HEALTHY</code> state.
         * Otherwise, an <code>InvalidStateException</code> is thrown. A
         * <code>ResourceNotFoundException</code> is thrown when the server does not exist.
         * A <code>ValidationException</code> is raised when parameters of the request are
         * not valid. The AssociateNode API call can be integrated into Auto Scaling
         * configurations, AWS Cloudformation templates, or the user data of a server's
         * instance. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/AssociateNode">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateNodeOutcome AssociateNode(const Model::AssociateNodeRequest& request) const;

        /**
         * A Callable wrapper for AssociateNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateNodeOutcomeCallable AssociateNodeCallable(const Model::AssociateNodeRequest& request) const;

        /**
         * An Async wrapper for AssociateNode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateNodeAsync(const Model::AssociateNodeRequest& request, const AssociateNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates an application-level backup of a server. While the server is in the
         * <code>BACKING_UP</code> state, the server cannot be changed, and no additional
         * backup can be created. </p> <p> Backups can be created for servers in
         * <code>RUNNING</code>, <code>HEALTHY</code>, and <code>UNHEALTHY</code> states.
         * By default, you can create a maximum of 50 manual backups. </p> <p> This
         * operation is asynchronous. </p> <p> A <code>LimitExceededException</code> is
         * thrown when the maximum number of manual backups is reached. An
         * <code>InvalidStateException</code> is thrown when the server is not in any of
         * the following states: RUNNING, HEALTHY, or UNHEALTHY. A
         * <code>ResourceNotFoundException</code> is thrown when the server is not found. A
         * <code>ValidationException</code> is thrown when parameters of the request are
         * not valid. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/CreateBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackupOutcome CreateBackup(const Model::CreateBackupRequest& request) const;

        /**
         * A Callable wrapper for CreateBackup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBackupOutcomeCallable CreateBackupCallable(const Model::CreateBackupRequest& request) const;

        /**
         * An Async wrapper for CreateBackup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBackupAsync(const Model::CreateBackupRequest& request, const CreateBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates and immedately starts a new server. The server is ready to use when
         * it is in the <code>HEALTHY</code> state. By default, you can create a maximum of
         * 10 servers. </p> <p> This operation is asynchronous. </p> <p> A
         * <code>LimitExceededException</code> is thrown when you have created the maximum
         * number of servers (10). A <code>ResourceAlreadyExistsException</code> is thrown
         * when a server with the same name already exists in the account. A
         * <code>ResourceNotFoundException</code> is thrown when you specify a backup ID
         * that is not valid or is for a backup that does not exist. A
         * <code>ValidationException</code> is thrown when parameters of the request are
         * not valid. </p> <p> If you do not specify a security group by adding the
         * <code>SecurityGroupIds</code> parameter, AWS OpsWorks creates a new security
         * group. </p> <p> <i>Chef Automate:</i> The default security group opens the Chef
         * server to the world on TCP port 443. If a KeyName is present, AWS OpsWorks
         * enables SSH access. SSH is also open to the world on TCP port 22. </p> <p>
         * <i>Puppet Enterprise:</i> The default security group opens TCP ports 22, 443,
         * 4433, 8140, 8142, 8143, and 8170. If a KeyName is present, AWS OpsWorks enables
         * SSH access. SSH is also open to the world on TCP port 22. </p> <p>By default,
         * your server is accessible from any IP address. We recommend that you update your
         * security group rules to allow access from known IP addresses and address ranges
         * only. To edit security group rules, open Security Groups in the navigation pane
         * of the EC2 management console. </p> <p>To specify your own domain for a server,
         * and provide your own self-signed or CA-signed certificate and private key,
         * specify values for <code>CustomDomain</code>, <code>CustomCertificate</code>,
         * and <code>CustomPrivateKey</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/CreateServer">AWS
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
         * <p> Deletes a backup. You can delete both manual and automated backups. This
         * operation is asynchronous. </p> <p> An <code>InvalidStateException</code> is
         * thrown when a backup deletion is already in progress. A
         * <code>ResourceNotFoundException</code> is thrown when the backup does not exist.
         * A <code>ValidationException</code> is thrown when parameters of the request are
         * not valid. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/DeleteBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackupOutcome DeleteBackup(const Model::DeleteBackupRequest& request) const;

        /**
         * A Callable wrapper for DeleteBackup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBackupOutcomeCallable DeleteBackupCallable(const Model::DeleteBackupRequest& request) const;

        /**
         * An Async wrapper for DeleteBackup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBackupAsync(const Model::DeleteBackupRequest& request, const DeleteBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes the server and the underlying AWS CloudFormation stacks (including
         * the server's EC2 instance). When you run this command, the server state is
         * updated to <code>DELETING</code>. After the server is deleted, it is no longer
         * returned by <code>DescribeServer</code> requests. If the AWS CloudFormation
         * stack cannot be deleted, the server cannot be deleted. </p> <p> This operation
         * is asynchronous. </p> <p> An <code>InvalidStateException</code> is thrown when a
         * server deletion is already in progress. A <code>ResourceNotFoundException</code>
         * is thrown when the server does not exist. A <code>ValidationException</code> is
         * raised when parameters of the request are not valid. </p> <p> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/DeleteServer">AWS
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
         * <p> Describes your OpsWorks-CM account attributes. </p> <p> This operation is
         * synchronous. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/DescribeAccountAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountAttributesOutcome DescribeAccountAttributes(const Model::DescribeAccountAttributesRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountAttributesOutcomeCallable DescribeAccountAttributesCallable(const Model::DescribeAccountAttributesRequest& request) const;

        /**
         * An Async wrapper for DescribeAccountAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountAttributesAsync(const Model::DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Describes backups. The results are ordered by time, with newest backups
         * first. If you do not specify a BackupId or ServerName, the command returns all
         * backups. </p> <p> This operation is synchronous. </p> <p> A
         * <code>ResourceNotFoundException</code> is thrown when the backup does not exist.
         * A <code>ValidationException</code> is raised when parameters of the request are
         * not valid. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/DescribeBackups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBackupsOutcome DescribeBackups(const Model::DescribeBackupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeBackups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBackupsOutcomeCallable DescribeBackupsCallable(const Model::DescribeBackupsRequest& request) const;

        /**
         * An Async wrapper for DescribeBackups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBackupsAsync(const Model::DescribeBackupsRequest& request, const DescribeBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Describes events for a specified server. Results are ordered by time, with
         * newest events first. </p> <p> This operation is synchronous. </p> <p> A
         * <code>ResourceNotFoundException</code> is thrown when the server does not exist.
         * A <code>ValidationException</code> is raised when parameters of the request are
         * not valid. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/DescribeEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request) const;

        /**
         * An Async wrapper for DescribeEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the current status of an existing association or disassociation
         * request. </p> <p> A <code>ResourceNotFoundException</code> is thrown when no
         * recent association or disassociation request with the specified token is found,
         * or when the server does not exist. A <code>ValidationException</code> is raised
         * when parameters of the request are not valid. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/DescribeNodeAssociationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNodeAssociationStatusOutcome DescribeNodeAssociationStatus(const Model::DescribeNodeAssociationStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeNodeAssociationStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNodeAssociationStatusOutcomeCallable DescribeNodeAssociationStatusCallable(const Model::DescribeNodeAssociationStatusRequest& request) const;

        /**
         * An Async wrapper for DescribeNodeAssociationStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNodeAssociationStatusAsync(const Model::DescribeNodeAssociationStatusRequest& request, const DescribeNodeAssociationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists all configuration management servers that are identified with your
         * account. Only the stored results from Amazon DynamoDB are returned. AWS OpsWorks
         * CM does not query other services. </p> <p> This operation is synchronous. </p>
         * <p> A <code>ResourceNotFoundException</code> is thrown when the server does not
         * exist. A <code>ValidationException</code> is raised when parameters of the
         * request are not valid. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/DescribeServers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServersOutcome DescribeServers(const Model::DescribeServersRequest& request) const;

        /**
         * A Callable wrapper for DescribeServers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeServersOutcomeCallable DescribeServersCallable(const Model::DescribeServersRequest& request) const;

        /**
         * An Async wrapper for DescribeServers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeServersAsync(const Model::DescribeServersRequest& request, const DescribeServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Disassociates a node from an AWS OpsWorks CM server, and removes the node
         * from the server's managed nodes. After a node is disassociated, the node key
         * pair is no longer valid for accessing the configuration manager's API. For more
         * information about how to associate a node, see <a>AssociateNode</a>. </p> <p>A
         * node can can only be disassociated from a server that is in a
         * <code>HEALTHY</code> state. Otherwise, an <code>InvalidStateException</code> is
         * thrown. A <code>ResourceNotFoundException</code> is thrown when the server does
         * not exist. A <code>ValidationException</code> is raised when parameters of the
         * request are not valid. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/DisassociateNode">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateNodeOutcome DisassociateNode(const Model::DisassociateNodeRequest& request) const;

        /**
         * A Callable wrapper for DisassociateNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateNodeOutcomeCallable DisassociateNodeCallable(const Model::DisassociateNodeRequest& request) const;

        /**
         * An Async wrapper for DisassociateNode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateNodeAsync(const Model::DisassociateNodeRequest& request, const DisassociateNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Exports a specified server engine attribute as a base64-encoded string. For
         * example, you can export user data that you can use in EC2 to associate nodes
         * with a server. </p> <p> This operation is synchronous. </p> <p> A
         * <code>ValidationException</code> is raised when parameters of the request are
         * not valid. A <code>ResourceNotFoundException</code> is thrown when the server
         * does not exist. An <code>InvalidStateException</code> is thrown when the server
         * is in any of the following states: CREATING, TERMINATED, FAILED or DELETING.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/ExportServerEngineAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportServerEngineAttributeOutcome ExportServerEngineAttribute(const Model::ExportServerEngineAttributeRequest& request) const;

        /**
         * A Callable wrapper for ExportServerEngineAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportServerEngineAttributeOutcomeCallable ExportServerEngineAttributeCallable(const Model::ExportServerEngineAttributeRequest& request) const;

        /**
         * An Async wrapper for ExportServerEngineAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportServerEngineAttributeAsync(const Model::ExportServerEngineAttributeRequest& request, const ExportServerEngineAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of tags that are applied to the specified AWS OpsWorks for
         * Chef Automate or AWS OpsWorks for Puppet Enterprise servers or
         * backups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/ListTagsForResource">AWS
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
         * <p> Restores a backup to a server that is in a <code>CONNECTION_LOST</code>,
         * <code>HEALTHY</code>, <code>RUNNING</code>, <code>UNHEALTHY</code>, or
         * <code>TERMINATED</code> state. When you run RestoreServer, the server's EC2
         * instance is deleted, and a new EC2 instance is configured. RestoreServer
         * maintains the existing server endpoint, so configuration management of the
         * server's client devices (nodes) should continue to work. </p> <p>Restoring from
         * a backup is performed by creating a new EC2 instance. If restoration is
         * successful, and the server is in a <code>HEALTHY</code> state, AWS OpsWorks CM
         * switches traffic over to the new instance. After restoration is finished, the
         * old EC2 instance is maintained in a <code>Running</code> or <code>Stopped</code>
         * state, but is eventually terminated.</p> <p> This operation is asynchronous.
         * </p> <p> An <code>InvalidStateException</code> is thrown when the server is not
         * in a valid state. A <code>ResourceNotFoundException</code> is thrown when the
         * server does not exist. A <code>ValidationException</code> is raised when
         * parameters of the request are not valid. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/RestoreServer">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreServerOutcome RestoreServer(const Model::RestoreServerRequest& request) const;

        /**
         * A Callable wrapper for RestoreServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreServerOutcomeCallable RestoreServerCallable(const Model::RestoreServerRequest& request) const;

        /**
         * An Async wrapper for RestoreServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreServerAsync(const Model::RestoreServerRequest& request, const RestoreServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Manually starts server maintenance. This command can be useful if an earlier
         * maintenance attempt failed, and the underlying cause of maintenance failure has
         * been resolved. The server is in an <code>UNDER_MAINTENANCE</code> state while
         * maintenance is in progress. </p> <p> Maintenance can only be started on servers
         * in <code>HEALTHY</code> and <code>UNHEALTHY</code> states. Otherwise, an
         * <code>InvalidStateException</code> is thrown. A
         * <code>ResourceNotFoundException</code> is thrown when the server does not exist.
         * A <code>ValidationException</code> is raised when parameters of the request are
         * not valid. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/StartMaintenance">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMaintenanceOutcome StartMaintenance(const Model::StartMaintenanceRequest& request) const;

        /**
         * A Callable wrapper for StartMaintenance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMaintenanceOutcomeCallable StartMaintenanceCallable(const Model::StartMaintenanceRequest& request) const;

        /**
         * An Async wrapper for StartMaintenance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMaintenanceAsync(const Model::StartMaintenanceRequest& request, const StartMaintenanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies tags to an AWS OpsWorks for Chef Automate or AWS OpsWorks for Puppet
         * Enterprise server, or to server backups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/TagResource">AWS
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
         * <p>Removes specified tags from an AWS OpsWorks-CM server or
         * backup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/UntagResource">AWS
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
         * <p> Updates settings for a server. </p> <p> This operation is synchronous.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/UpdateServer">AWS
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
         * <p> Updates engine-specific attributes on a specified server. The server enters
         * the <code>MODIFYING</code> state when this operation is in progress. Only one
         * update can occur at a time. You can use this command to reset a Chef server's
         * public key (<code>CHEF_PIVOTAL_KEY</code>) or a Puppet server's admin password
         * (<code>PUPPET_ADMIN_PASSWORD</code>). </p> <p> This operation is asynchronous.
         * </p> <p> This operation can only be called for servers in <code>HEALTHY</code>
         * or <code>UNHEALTHY</code> states. Otherwise, an
         * <code>InvalidStateException</code> is raised. A
         * <code>ResourceNotFoundException</code> is thrown when the server does not exist.
         * A <code>ValidationException</code> is raised when parameters of the request are
         * not valid. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/UpdateServerEngineAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServerEngineAttributesOutcome UpdateServerEngineAttributes(const Model::UpdateServerEngineAttributesRequest& request) const;

        /**
         * A Callable wrapper for UpdateServerEngineAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServerEngineAttributesOutcomeCallable UpdateServerEngineAttributesCallable(const Model::UpdateServerEngineAttributesRequest& request) const;

        /**
         * An Async wrapper for UpdateServerEngineAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServerEngineAttributesAsync(const Model::UpdateServerEngineAttributesRequest& request, const UpdateServerEngineAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<OpsWorksCMEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<OpsWorksCMClient>;
      void init(const OpsWorksCMClientConfiguration& clientConfiguration);

      OpsWorksCMClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<OpsWorksCMEndpointProviderBase> m_endpointProvider;
  };

} // namespace OpsWorksCM
} // namespace Aws
