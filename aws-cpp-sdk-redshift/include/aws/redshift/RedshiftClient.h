/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/redshift/RedshiftServiceClientModel.h>

namespace Aws
{
namespace Redshift
{
  /**
   * <fullname>Amazon Redshift</fullname> <p> <b>Overview</b> </p> <p>This is an
   * interface reference for Amazon Redshift. It contains documentation for one of
   * the programming or command line interfaces you can use to manage Amazon Redshift
   * clusters. Note that Amazon Redshift is asynchronous, which means that some
   * interfaces may require techniques, such as polling or asynchronous callback
   * handlers, to determine when a command has been applied. In this reference, the
   * parameter descriptions indicate whether a change is applied immediately, on the
   * next instance reboot, or during the next maintenance window. For a summary of
   * the Amazon Redshift cluster management interfaces, go to <a
   * href="https://docs.aws.amazon.com/redshift/latest/mgmt/using-aws-sdk.html">Using
   * the Amazon Redshift Management Interfaces</a>.</p> <p>Amazon Redshift manages
   * all the work of setting up, operating, and scaling a data warehouse:
   * provisioning capacity, monitoring and backing up the cluster, and applying
   * patches and upgrades to the Amazon Redshift engine. You can focus on using your
   * data to acquire new insights for your business and customers.</p> <p>If you are
   * a first-time user of Amazon Redshift, we recommend that you begin by reading the
   * <a
   * href="https://docs.aws.amazon.com/redshift/latest/gsg/getting-started.html">Amazon
   * Redshift Getting Started Guide</a>.</p> <p>If you are a database developer, the
   * <a href="https://docs.aws.amazon.com/redshift/latest/dg/welcome.html">Amazon
   * Redshift Database Developer Guide</a> explains how to design, build, query, and
   * maintain the databases that make up your data warehouse. </p>
   */
  class AWS_REDSHIFT_API RedshiftClient : public Aws::Client::AWSXMLClient, public Aws::Client::ClientWithAsyncTemplateMethods<RedshiftClient>
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftClient(const Aws::Redshift::RedshiftClientConfiguration& clientConfiguration = Aws::Redshift::RedshiftClientConfiguration(),
                       std::shared_ptr<RedshiftEndpointProviderBase> endpointProvider = Aws::MakeShared<RedshiftEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<RedshiftEndpointProviderBase> endpointProvider = Aws::MakeShared<RedshiftEndpointProvider>(ALLOCATION_TAG),
                       const Aws::Redshift::RedshiftClientConfiguration& clientConfiguration = Aws::Redshift::RedshiftClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RedshiftClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<RedshiftEndpointProviderBase> endpointProvider = Aws::MakeShared<RedshiftEndpointProvider>(ALLOCATION_TAG),
                       const Aws::Redshift::RedshiftClientConfiguration& clientConfiguration = Aws::Redshift::RedshiftClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RedshiftClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~RedshiftClient();


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Exchanges a DC1 Reserved Node for a DC2 Reserved Node with no changes to the
         * configuration (term, payment type, or number of nodes) and no additional costs.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/AcceptReservedNodeExchange">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptReservedNodeExchangeOutcome AcceptReservedNodeExchange(const Model::AcceptReservedNodeExchangeRequest& request) const;

        /**
         * A Callable wrapper for AcceptReservedNodeExchange that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptReservedNodeExchangeOutcomeCallable AcceptReservedNodeExchangeCallable(const Model::AcceptReservedNodeExchangeRequest& request) const;

        /**
         * An Async wrapper for AcceptReservedNodeExchange that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptReservedNodeExchangeAsync(const Model::AcceptReservedNodeExchangeRequest& request, const AcceptReservedNodeExchangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a partner integration to a cluster. This operation authorizes a partner
         * to push status updates for the specified database. To complete the integration,
         * you also set up the integration on the partner website.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/AddPartner">AWS
         * API Reference</a></p>
         */
        virtual Model::AddPartnerOutcome AddPartner(const Model::AddPartnerRequest& request) const;

        /**
         * A Callable wrapper for AddPartner that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddPartnerOutcomeCallable AddPartnerCallable(const Model::AddPartnerRequest& request) const;

        /**
         * An Async wrapper for AddPartner that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddPartnerAsync(const Model::AddPartnerRequest& request, const AddPartnerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>From a datashare consumer account, associates a datashare with the account
         * (AssociateEntireAccount) or the specified namespace (ConsumerArn). If you make
         * this association, the consumer can consume the datashare.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/AssociateDataShareConsumer">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDataShareConsumerOutcome AssociateDataShareConsumer(const Model::AssociateDataShareConsumerRequest& request) const;

        /**
         * A Callable wrapper for AssociateDataShareConsumer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateDataShareConsumerOutcomeCallable AssociateDataShareConsumerCallable(const Model::AssociateDataShareConsumerRequest& request) const;

        /**
         * An Async wrapper for AssociateDataShareConsumer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateDataShareConsumerAsync(const Model::AssociateDataShareConsumerRequest& request, const AssociateDataShareConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an inbound (ingress) rule to an Amazon Redshift security group.
         * Depending on whether the application accessing your cluster is running on the
         * Internet or an Amazon EC2 instance, you can authorize inbound access to either a
         * Classless Interdomain Routing (CIDR)/Internet Protocol (IP) range or to an
         * Amazon EC2 security group. You can add as many as 20 ingress rules to an Amazon
         * Redshift security group.</p> <p>If you authorize access to an Amazon EC2
         * security group, specify <i>EC2SecurityGroupName</i> and
         * <i>EC2SecurityGroupOwnerId</i>. The Amazon EC2 security group and Amazon
         * Redshift cluster must be in the same Amazon Web Services Region. </p> <p>If you
         * authorize access to a CIDR/IP address range, specify <i>CIDRIP</i>. For an
         * overview of CIDR blocks, see the Wikipedia article on <a
         * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
         * Inter-Domain Routing</a>. </p> <p>You must also associate the security group
         * with a cluster so that clients running on these IP addresses or the EC2 instance
         * are authorized to connect to the cluster. For information about managing
         * security groups, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Working
         * with Security Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/AuthorizeClusterSecurityGroupIngress">AWS
         * API Reference</a></p>
         */
        virtual Model::AuthorizeClusterSecurityGroupIngressOutcome AuthorizeClusterSecurityGroupIngress(const Model::AuthorizeClusterSecurityGroupIngressRequest& request) const;

        /**
         * A Callable wrapper for AuthorizeClusterSecurityGroupIngress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AuthorizeClusterSecurityGroupIngressOutcomeCallable AuthorizeClusterSecurityGroupIngressCallable(const Model::AuthorizeClusterSecurityGroupIngressRequest& request) const;

        /**
         * An Async wrapper for AuthorizeClusterSecurityGroupIngress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AuthorizeClusterSecurityGroupIngressAsync(const Model::AuthorizeClusterSecurityGroupIngressRequest& request, const AuthorizeClusterSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>From a data producer account, authorizes the sharing of a datashare with one
         * or more consumer accounts or managing entities. To authorize a datashare for a
         * data consumer, the producer account must have the correct access
         * permissions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/AuthorizeDataShare">AWS
         * API Reference</a></p>
         */
        virtual Model::AuthorizeDataShareOutcome AuthorizeDataShare(const Model::AuthorizeDataShareRequest& request) const;

        /**
         * A Callable wrapper for AuthorizeDataShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AuthorizeDataShareOutcomeCallable AuthorizeDataShareCallable(const Model::AuthorizeDataShareRequest& request) const;

        /**
         * An Async wrapper for AuthorizeDataShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AuthorizeDataShareAsync(const Model::AuthorizeDataShareRequest& request, const AuthorizeDataShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants access to a cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/AuthorizeEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::AuthorizeEndpointAccessOutcome AuthorizeEndpointAccess(const Model::AuthorizeEndpointAccessRequest& request) const;

        /**
         * A Callable wrapper for AuthorizeEndpointAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AuthorizeEndpointAccessOutcomeCallable AuthorizeEndpointAccessCallable(const Model::AuthorizeEndpointAccessRequest& request) const;

        /**
         * An Async wrapper for AuthorizeEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AuthorizeEndpointAccessAsync(const Model::AuthorizeEndpointAccessRequest& request, const AuthorizeEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Authorizes the specified Amazon Web Services account to restore the specified
         * snapshot.</p> <p> For more information about working with snapshots, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon
         * Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/AuthorizeSnapshotAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::AuthorizeSnapshotAccessOutcome AuthorizeSnapshotAccess(const Model::AuthorizeSnapshotAccessRequest& request) const;

        /**
         * A Callable wrapper for AuthorizeSnapshotAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AuthorizeSnapshotAccessOutcomeCallable AuthorizeSnapshotAccessCallable(const Model::AuthorizeSnapshotAccessRequest& request) const;

        /**
         * An Async wrapper for AuthorizeSnapshotAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AuthorizeSnapshotAccessAsync(const Model::AuthorizeSnapshotAccessRequest& request, const AuthorizeSnapshotAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a set of cluster snapshots.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/BatchDeleteClusterSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteClusterSnapshotsOutcome BatchDeleteClusterSnapshots(const Model::BatchDeleteClusterSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteClusterSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteClusterSnapshotsOutcomeCallable BatchDeleteClusterSnapshotsCallable(const Model::BatchDeleteClusterSnapshotsRequest& request) const;

        /**
         * An Async wrapper for BatchDeleteClusterSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteClusterSnapshotsAsync(const Model::BatchDeleteClusterSnapshotsRequest& request, const BatchDeleteClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the settings for a set of cluster snapshots.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/BatchModifyClusterSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchModifyClusterSnapshotsOutcome BatchModifyClusterSnapshots(const Model::BatchModifyClusterSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for BatchModifyClusterSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchModifyClusterSnapshotsOutcomeCallable BatchModifyClusterSnapshotsCallable(const Model::BatchModifyClusterSnapshotsRequest& request) const;

        /**
         * An Async wrapper for BatchModifyClusterSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchModifyClusterSnapshotsAsync(const Model::BatchModifyClusterSnapshotsRequest& request, const BatchModifyClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a resize operation for a cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CancelResize">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelResizeOutcome CancelResize(const Model::CancelResizeRequest& request) const;

        /**
         * A Callable wrapper for CancelResize that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelResizeOutcomeCallable CancelResizeCallable(const Model::CancelResizeRequest& request) const;

        /**
         * An Async wrapper for CancelResize that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelResizeAsync(const Model::CancelResizeRequest& request, const CancelResizeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies the specified automated cluster snapshot to a new manual cluster
         * snapshot. The source must be an automated snapshot and it must be in the
         * available state.</p> <p>When you delete a cluster, Amazon Redshift deletes any
         * automated snapshots of the cluster. Also, when the retention period of the
         * snapshot expires, Amazon Redshift automatically deletes it. If you want to keep
         * an automated snapshot for a longer period, you can make a manual copy of the
         * snapshot. Manual snapshots are retained until you delete them.</p> <p> For more
         * information about working with snapshots, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon
         * Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CopyClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyClusterSnapshotOutcome CopyClusterSnapshot(const Model::CopyClusterSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CopyClusterSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyClusterSnapshotOutcomeCallable CopyClusterSnapshotCallable(const Model::CopyClusterSnapshotRequest& request) const;

        /**
         * An Async wrapper for CopyClusterSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyClusterSnapshotAsync(const Model::CopyClusterSnapshotRequest& request, const CopyClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an authentication profile with the specified
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CreateAuthenticationProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAuthenticationProfileOutcome CreateAuthenticationProfile(const Model::CreateAuthenticationProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateAuthenticationProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAuthenticationProfileOutcomeCallable CreateAuthenticationProfileCallable(const Model::CreateAuthenticationProfileRequest& request) const;

        /**
         * An Async wrapper for CreateAuthenticationProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAuthenticationProfileAsync(const Model::CreateAuthenticationProfileRequest& request, const CreateAuthenticationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new cluster with the specified parameters.</p> <p>To create a
         * cluster in Virtual Private Cloud (VPC), you must provide a cluster subnet group
         * name. The cluster subnet group identifies the subnets of your VPC that Amazon
         * Redshift uses when creating the cluster. For more information about managing
         * clusters, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request) const;

        /**
         * An Async wrapper for CreateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Redshift parameter group.</p> <p>Creating parameter groups
         * is independent of creating clusters. You can associate a cluster with a
         * parameter group when you create the cluster. You can also associate an existing
         * cluster with a parameter group after the cluster is created by using
         * <a>ModifyCluster</a>. </p> <p>Parameters in the parameter group define specific
         * behavior that applies to the databases you create on the cluster. For more
         * information about parameters and parameter groups, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
         * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CreateClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterParameterGroupOutcome CreateClusterParameterGroup(const Model::CreateClusterParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateClusterParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterParameterGroupOutcomeCallable CreateClusterParameterGroupCallable(const Model::CreateClusterParameterGroupRequest& request) const;

        /**
         * An Async wrapper for CreateClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClusterParameterGroupAsync(const Model::CreateClusterParameterGroupRequest& request, const CreateClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon Redshift security group. You use security groups to
         * control access to non-VPC clusters.</p> <p> For information about managing
         * security groups, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon
         * Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster
         * Management Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CreateClusterSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterSecurityGroupOutcome CreateClusterSecurityGroup(const Model::CreateClusterSecurityGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateClusterSecurityGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterSecurityGroupOutcomeCallable CreateClusterSecurityGroupCallable(const Model::CreateClusterSecurityGroupRequest& request) const;

        /**
         * An Async wrapper for CreateClusterSecurityGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClusterSecurityGroupAsync(const Model::CreateClusterSecurityGroupRequest& request, const CreateClusterSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a manual snapshot of the specified cluster. The cluster must be in
         * the <code>available</code> state. </p> <p> For more information about working
         * with snapshots, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon
         * Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CreateClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterSnapshotOutcome CreateClusterSnapshot(const Model::CreateClusterSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateClusterSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterSnapshotOutcomeCallable CreateClusterSnapshotCallable(const Model::CreateClusterSnapshotRequest& request) const;

        /**
         * An Async wrapper for CreateClusterSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClusterSnapshotAsync(const Model::CreateClusterSnapshotRequest& request, const CreateClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon Redshift subnet group. You must provide a list of one or
         * more subnets in your existing Amazon Virtual Private Cloud (Amazon VPC) when
         * creating Amazon Redshift subnet group.</p> <p> For information about subnet
         * groups, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-cluster-subnet-groups.html">Amazon
         * Redshift Cluster Subnet Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CreateClusterSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterSubnetGroupOutcome CreateClusterSubnetGroup(const Model::CreateClusterSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateClusterSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterSubnetGroupOutcomeCallable CreateClusterSubnetGroupCallable(const Model::CreateClusterSubnetGroupRequest& request) const;

        /**
         * An Async wrapper for CreateClusterSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClusterSubnetGroupAsync(const Model::CreateClusterSubnetGroupRequest& request, const CreateClusterSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Redshift-managed VPC endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CreateEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointAccessOutcome CreateEndpointAccess(const Model::CreateEndpointAccessRequest& request) const;

        /**
         * A Callable wrapper for CreateEndpointAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEndpointAccessOutcomeCallable CreateEndpointAccessCallable(const Model::CreateEndpointAccessRequest& request) const;

        /**
         * An Async wrapper for CreateEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEndpointAccessAsync(const Model::CreateEndpointAccessRequest& request, const CreateEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Redshift event notification subscription. This action
         * requires an ARN (Amazon Resource Name) of an Amazon SNS topic created by either
         * the Amazon Redshift console, the Amazon SNS console, or the Amazon SNS API. To
         * obtain an ARN with Amazon SNS, you must create a topic in Amazon SNS and
         * subscribe to the topic. The ARN is displayed in the SNS console.</p> <p>You can
         * specify the source type, and lists of Amazon Redshift source IDs, event
         * categories, and event severities. Notifications will be sent for all events you
         * want that match those criteria. For example, you can specify source type =
         * cluster, source ID = my-cluster-1 and mycluster2, event categories =
         * Availability, Backup, and severity = ERROR. The subscription will only send
         * notifications for those ERROR events in the Availability and Backup categories
         * for the specified clusters.</p> <p>If you specify both the source type and
         * source IDs, such as source type = cluster and source identifier = my-cluster-1,
         * notifications will be sent for all the cluster events for my-cluster-1. If you
         * specify a source type but do not specify a source identifier, you will receive
         * notice of the events for the objects of that type in your Amazon Web Services
         * account. If you do not specify either the SourceType nor the SourceIdentifier,
         * you will be notified of events generated from all Amazon Redshift sources
         * belonging to your Amazon Web Services account. You must specify a source type if
         * you specify a source ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CreateEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventSubscriptionOutcome CreateEventSubscription(const Model::CreateEventSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for CreateEventSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEventSubscriptionOutcomeCallable CreateEventSubscriptionCallable(const Model::CreateEventSubscriptionRequest& request) const;

        /**
         * An Async wrapper for CreateEventSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEventSubscriptionAsync(const Model::CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an HSM client certificate that an Amazon Redshift cluster will use to
         * connect to the client's HSM in order to store and retrieve the keys used to
         * encrypt the cluster databases.</p> <p>The command returns a public key, which
         * you must store in the HSM. In addition to creating the HSM certificate, you must
         * create an Amazon Redshift HSM configuration that provides a cluster the
         * information needed to store and use encryption keys in the HSM. For more
         * information, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-db-encryption.html#working-with-HSM">Hardware
         * Security Modules</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CreateHsmClientCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHsmClientCertificateOutcome CreateHsmClientCertificate(const Model::CreateHsmClientCertificateRequest& request) const;

        /**
         * A Callable wrapper for CreateHsmClientCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHsmClientCertificateOutcomeCallable CreateHsmClientCertificateCallable(const Model::CreateHsmClientCertificateRequest& request) const;

        /**
         * An Async wrapper for CreateHsmClientCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHsmClientCertificateAsync(const Model::CreateHsmClientCertificateRequest& request, const CreateHsmClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an HSM configuration that contains the information required by an
         * Amazon Redshift cluster to store and use database encryption keys in a Hardware
         * Security Module (HSM). After creating the HSM configuration, you can specify it
         * as a parameter when creating a cluster. The cluster will then store its
         * encryption keys in the HSM.</p> <p>In addition to creating an HSM configuration,
         * you must also create an HSM client certificate. For more information, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-HSM.html">Hardware
         * Security Modules</a> in the Amazon Redshift Cluster Management
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CreateHsmConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHsmConfigurationOutcome CreateHsmConfiguration(const Model::CreateHsmConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateHsmConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHsmConfigurationOutcomeCallable CreateHsmConfigurationCallable(const Model::CreateHsmConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateHsmConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHsmConfigurationAsync(const Model::CreateHsmConfigurationRequest& request, const CreateHsmConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a scheduled action. A scheduled action contains a schedule and an
         * Amazon Redshift API action. For example, you can create a schedule of when to
         * run the <code>ResizeCluster</code> API operation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CreateScheduledAction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateScheduledActionOutcome CreateScheduledAction(const Model::CreateScheduledActionRequest& request) const;

        /**
         * A Callable wrapper for CreateScheduledAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateScheduledActionOutcomeCallable CreateScheduledActionCallable(const Model::CreateScheduledActionRequest& request) const;

        /**
         * An Async wrapper for CreateScheduledAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateScheduledActionAsync(const Model::CreateScheduledActionRequest& request, const CreateScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a snapshot copy grant that permits Amazon Redshift to use an
         * encrypted symmetric key from Key Management Service (KMS) to encrypt copied
         * snapshots in a destination region.</p> <p> For more information about managing
         * snapshot copy grants, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-db-encryption.html">Amazon
         * Redshift Database Encryption</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CreateSnapshotCopyGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSnapshotCopyGrantOutcome CreateSnapshotCopyGrant(const Model::CreateSnapshotCopyGrantRequest& request) const;

        /**
         * A Callable wrapper for CreateSnapshotCopyGrant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSnapshotCopyGrantOutcomeCallable CreateSnapshotCopyGrantCallable(const Model::CreateSnapshotCopyGrantRequest& request) const;

        /**
         * An Async wrapper for CreateSnapshotCopyGrant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSnapshotCopyGrantAsync(const Model::CreateSnapshotCopyGrantRequest& request, const CreateSnapshotCopyGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a snapshot schedule that can be associated to a cluster and which
         * overrides the default system backup schedule. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CreateSnapshotSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSnapshotScheduleOutcome CreateSnapshotSchedule(const Model::CreateSnapshotScheduleRequest& request) const;

        /**
         * A Callable wrapper for CreateSnapshotSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSnapshotScheduleOutcomeCallable CreateSnapshotScheduleCallable(const Model::CreateSnapshotScheduleRequest& request) const;

        /**
         * An Async wrapper for CreateSnapshotSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSnapshotScheduleAsync(const Model::CreateSnapshotScheduleRequest& request, const CreateSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds tags to a cluster.</p> <p>A resource can have up to 50 tags. If you try
         * to create more than 50 tags for a resource, you will receive an error and the
         * attempt will fail.</p> <p>If you specify a key that already exists for the
         * resource, the value for that key will be updated with the new
         * value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CreateTags">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTagsOutcome CreateTags(const Model::CreateTagsRequest& request) const;

        /**
         * A Callable wrapper for CreateTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTagsOutcomeCallable CreateTagsCallable(const Model::CreateTagsRequest& request) const;

        /**
         * An Async wrapper for CreateTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTagsAsync(const Model::CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a usage limit for a specified Amazon Redshift feature on a cluster.
         * The usage limit is identified by the returned usage limit
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CreateUsageLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUsageLimitOutcome CreateUsageLimit(const Model::CreateUsageLimitRequest& request) const;

        /**
         * A Callable wrapper for CreateUsageLimit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUsageLimitOutcomeCallable CreateUsageLimitCallable(const Model::CreateUsageLimitRequest& request) const;

        /**
         * An Async wrapper for CreateUsageLimit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUsageLimitAsync(const Model::CreateUsageLimitRequest& request, const CreateUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>From a datashare producer account, removes authorization from the specified
         * datashare. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeauthorizeDataShare">AWS
         * API Reference</a></p>
         */
        virtual Model::DeauthorizeDataShareOutcome DeauthorizeDataShare(const Model::DeauthorizeDataShareRequest& request) const;

        /**
         * A Callable wrapper for DeauthorizeDataShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeauthorizeDataShareOutcomeCallable DeauthorizeDataShareCallable(const Model::DeauthorizeDataShareRequest& request) const;

        /**
         * An Async wrapper for DeauthorizeDataShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeauthorizeDataShareAsync(const Model::DeauthorizeDataShareRequest& request, const DeauthorizeDataShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an authentication profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeleteAuthenticationProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAuthenticationProfileOutcome DeleteAuthenticationProfile(const Model::DeleteAuthenticationProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteAuthenticationProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAuthenticationProfileOutcomeCallable DeleteAuthenticationProfileCallable(const Model::DeleteAuthenticationProfileRequest& request) const;

        /**
         * An Async wrapper for DeleteAuthenticationProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAuthenticationProfileAsync(const Model::DeleteAuthenticationProfileRequest& request, const DeleteAuthenticationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a previously provisioned cluster without its final snapshot being
         * created. A successful response from the web service indicates that the request
         * was received correctly. Use <a>DescribeClusters</a> to monitor the status of the
         * deletion. The delete operation cannot be canceled or reverted once submitted.
         * For more information about managing clusters, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p> <p>If you want to shut down the cluster and retain it for future
         * use, set <i>SkipFinalClusterSnapshot</i> to <code>false</code> and specify a
         * name for <i>FinalClusterSnapshotIdentifier</i>. You can later restore this
         * snapshot to resume using the cluster. If a final cluster snapshot is requested,
         * the status of the cluster will be "final-snapshot" while the snapshot is being
         * taken, then it's "deleting" once Amazon Redshift begins deleting the cluster.
         * </p> <p> For more information about managing clusters, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeleteCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request) const;

        /**
         * An Async wrapper for DeleteCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified Amazon Redshift parameter group.</p>  <p>You cannot
         * delete a parameter group if it is associated with a cluster.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeleteClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterParameterGroupOutcome DeleteClusterParameterGroup(const Model::DeleteClusterParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteClusterParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClusterParameterGroupOutcomeCallable DeleteClusterParameterGroupCallable(const Model::DeleteClusterParameterGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClusterParameterGroupAsync(const Model::DeleteClusterParameterGroupRequest& request, const DeleteClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon Redshift security group.</p>  <p>You cannot delete a
         * security group that is associated with any clusters. You cannot delete the
         * default security group.</p>  <p> For information about managing security
         * groups, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon
         * Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster
         * Management Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeleteClusterSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterSecurityGroupOutcome DeleteClusterSecurityGroup(const Model::DeleteClusterSecurityGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteClusterSecurityGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClusterSecurityGroupOutcomeCallable DeleteClusterSecurityGroupCallable(const Model::DeleteClusterSecurityGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteClusterSecurityGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClusterSecurityGroupAsync(const Model::DeleteClusterSecurityGroupRequest& request, const DeleteClusterSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified manual snapshot. The snapshot must be in the
         * <code>available</code> state, with no other users authorized to access the
         * snapshot. </p> <p>Unlike automated snapshots, manual snapshots are retained even
         * after you delete your cluster. Amazon Redshift does not delete your manual
         * snapshots. You must delete manual snapshot explicitly to avoid getting charged.
         * If other accounts are authorized to access the snapshot, you must revoke all of
         * the authorizations before you can delete the snapshot.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeleteClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterSnapshotOutcome DeleteClusterSnapshot(const Model::DeleteClusterSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteClusterSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClusterSnapshotOutcomeCallable DeleteClusterSnapshotCallable(const Model::DeleteClusterSnapshotRequest& request) const;

        /**
         * An Async wrapper for DeleteClusterSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClusterSnapshotAsync(const Model::DeleteClusterSnapshotRequest& request, const DeleteClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified cluster subnet group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeleteClusterSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterSubnetGroupOutcome DeleteClusterSubnetGroup(const Model::DeleteClusterSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteClusterSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClusterSubnetGroupOutcomeCallable DeleteClusterSubnetGroupCallable(const Model::DeleteClusterSubnetGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteClusterSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClusterSubnetGroupAsync(const Model::DeleteClusterSubnetGroupRequest& request, const DeleteClusterSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Redshift-managed VPC endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeleteEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointAccessOutcome DeleteEndpointAccess(const Model::DeleteEndpointAccessRequest& request) const;

        /**
         * A Callable wrapper for DeleteEndpointAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEndpointAccessOutcomeCallable DeleteEndpointAccessCallable(const Model::DeleteEndpointAccessRequest& request) const;

        /**
         * An Async wrapper for DeleteEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEndpointAccessAsync(const Model::DeleteEndpointAccessRequest& request, const DeleteEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon Redshift event notification subscription.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeleteEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventSubscriptionOutcome DeleteEventSubscription(const Model::DeleteEventSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventSubscriptionOutcomeCallable DeleteEventSubscriptionCallable(const Model::DeleteEventSubscriptionRequest& request) const;

        /**
         * An Async wrapper for DeleteEventSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventSubscriptionAsync(const Model::DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified HSM client certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeleteHsmClientCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHsmClientCertificateOutcome DeleteHsmClientCertificate(const Model::DeleteHsmClientCertificateRequest& request) const;

        /**
         * A Callable wrapper for DeleteHsmClientCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHsmClientCertificateOutcomeCallable DeleteHsmClientCertificateCallable(const Model::DeleteHsmClientCertificateRequest& request) const;

        /**
         * An Async wrapper for DeleteHsmClientCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHsmClientCertificateAsync(const Model::DeleteHsmClientCertificateRequest& request, const DeleteHsmClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Amazon Redshift HSM configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeleteHsmConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHsmConfigurationOutcome DeleteHsmConfiguration(const Model::DeleteHsmConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteHsmConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHsmConfigurationOutcomeCallable DeleteHsmConfigurationCallable(const Model::DeleteHsmConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteHsmConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHsmConfigurationAsync(const Model::DeleteHsmConfigurationRequest& request, const DeleteHsmConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a partner integration from a cluster. Data can still flow to the
         * cluster until the integration is deleted at the partner's website.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeletePartner">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePartnerOutcome DeletePartner(const Model::DeletePartnerRequest& request) const;

        /**
         * A Callable wrapper for DeletePartner that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePartnerOutcomeCallable DeletePartnerCallable(const Model::DeletePartnerRequest& request) const;

        /**
         * An Async wrapper for DeletePartner that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePartnerAsync(const Model::DeletePartnerRequest& request, const DeletePartnerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a scheduled action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeleteScheduledAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScheduledActionOutcome DeleteScheduledAction(const Model::DeleteScheduledActionRequest& request) const;

        /**
         * A Callable wrapper for DeleteScheduledAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteScheduledActionOutcomeCallable DeleteScheduledActionCallable(const Model::DeleteScheduledActionRequest& request) const;

        /**
         * An Async wrapper for DeleteScheduledAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteScheduledActionAsync(const Model::DeleteScheduledActionRequest& request, const DeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified snapshot copy grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeleteSnapshotCopyGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSnapshotCopyGrantOutcome DeleteSnapshotCopyGrant(const Model::DeleteSnapshotCopyGrantRequest& request) const;

        /**
         * A Callable wrapper for DeleteSnapshotCopyGrant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSnapshotCopyGrantOutcomeCallable DeleteSnapshotCopyGrantCallable(const Model::DeleteSnapshotCopyGrantRequest& request) const;

        /**
         * An Async wrapper for DeleteSnapshotCopyGrant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSnapshotCopyGrantAsync(const Model::DeleteSnapshotCopyGrantRequest& request, const DeleteSnapshotCopyGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a snapshot schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeleteSnapshotSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSnapshotScheduleOutcome DeleteSnapshotSchedule(const Model::DeleteSnapshotScheduleRequest& request) const;

        /**
         * A Callable wrapper for DeleteSnapshotSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSnapshotScheduleOutcomeCallable DeleteSnapshotScheduleCallable(const Model::DeleteSnapshotScheduleRequest& request) const;

        /**
         * An Async wrapper for DeleteSnapshotSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSnapshotScheduleAsync(const Model::DeleteSnapshotScheduleRequest& request, const DeleteSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes tags from a resource. You must provide the ARN of the resource from
         * which you want to delete the tag or tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeleteTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /**
         * A Callable wrapper for DeleteTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request) const;

        /**
         * An Async wrapper for DeleteTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a usage limit from a cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeleteUsageLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUsageLimitOutcome DeleteUsageLimit(const Model::DeleteUsageLimitRequest& request) const;

        /**
         * A Callable wrapper for DeleteUsageLimit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUsageLimitOutcomeCallable DeleteUsageLimitCallable(const Model::DeleteUsageLimitRequest& request) const;

        /**
         * An Async wrapper for DeleteUsageLimit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUsageLimitAsync(const Model::DeleteUsageLimitRequest& request, const DeleteUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of attributes attached to an account</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeAccountAttributes">AWS
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
         * <p>Describes an authentication profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeAuthenticationProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAuthenticationProfilesOutcome DescribeAuthenticationProfiles(const Model::DescribeAuthenticationProfilesRequest& request) const;

        /**
         * A Callable wrapper for DescribeAuthenticationProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAuthenticationProfilesOutcomeCallable DescribeAuthenticationProfilesCallable(const Model::DescribeAuthenticationProfilesRequest& request) const;

        /**
         * An Async wrapper for DescribeAuthenticationProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAuthenticationProfilesAsync(const Model::DescribeAuthenticationProfilesRequest& request, const DescribeAuthenticationProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <code>ClusterDbRevision</code> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeClusterDbRevisions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterDbRevisionsOutcome DescribeClusterDbRevisions(const Model::DescribeClusterDbRevisionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeClusterDbRevisions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterDbRevisionsOutcomeCallable DescribeClusterDbRevisionsCallable(const Model::DescribeClusterDbRevisionsRequest& request) const;

        /**
         * An Async wrapper for DescribeClusterDbRevisions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterDbRevisionsAsync(const Model::DescribeClusterDbRevisionsRequest& request, const DescribeClusterDbRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of Amazon Redshift parameter groups, including parameter
         * groups you created and the default parameter group. For each parameter group,
         * the response includes the parameter group name, description, and parameter group
         * family name. You can optionally specify a name to retrieve the description of a
         * specific parameter group.</p> <p> For more information about parameters and
         * parameter groups, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
         * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p> <p>If you specify both tag keys and tag values in the same
         * request, Amazon Redshift returns all parameter groups that match any combination
         * of the specified keys and values. For example, if you have <code>owner</code>
         * and <code>environment</code> for tag keys, and <code>admin</code> and
         * <code>test</code> for tag values, all parameter groups that have any combination
         * of those values are returned.</p> <p>If both tag keys and values are omitted
         * from the request, parameter groups are returned regardless of whether they have
         * tag keys or values associated with them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeClusterParameterGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterParameterGroupsOutcome DescribeClusterParameterGroups(const Model::DescribeClusterParameterGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeClusterParameterGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterParameterGroupsOutcomeCallable DescribeClusterParameterGroupsCallable(const Model::DescribeClusterParameterGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeClusterParameterGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterParameterGroupsAsync(const Model::DescribeClusterParameterGroupsRequest& request, const DescribeClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a detailed list of parameters contained within the specified Amazon
         * Redshift parameter group. For each parameter the response includes information
         * such as parameter name, description, data type, value, whether the parameter
         * value is modifiable, and so on.</p> <p>You can specify <i>source</i> filter to
         * retrieve parameters of only specific type. For example, to retrieve parameters
         * that were modified by a user action such as from
         * <a>ModifyClusterParameterGroup</a>, you can specify <i>source</i> equal to
         * <i>user</i>.</p> <p> For more information about parameters and parameter groups,
         * go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
         * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeClusterParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterParametersOutcome DescribeClusterParameters(const Model::DescribeClusterParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeClusterParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterParametersOutcomeCallable DescribeClusterParametersCallable(const Model::DescribeClusterParametersRequest& request) const;

        /**
         * An Async wrapper for DescribeClusterParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterParametersAsync(const Model::DescribeClusterParametersRequest& request, const DescribeClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about Amazon Redshift security groups. If the name of a
         * security group is specified, the response will contain only information about
         * only that security group.</p> <p> For information about managing security
         * groups, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon
         * Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster
         * Management Guide</i>.</p> <p>If you specify both tag keys and tag values in the
         * same request, Amazon Redshift returns all security groups that match any
         * combination of the specified keys and values. For example, if you have
         * <code>owner</code> and <code>environment</code> for tag keys, and
         * <code>admin</code> and <code>test</code> for tag values, all security groups
         * that have any combination of those values are returned.</p> <p>If both tag keys
         * and values are omitted from the request, security groups are returned regardless
         * of whether they have tag keys or values associated with them.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeClusterSecurityGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterSecurityGroupsOutcome DescribeClusterSecurityGroups(const Model::DescribeClusterSecurityGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeClusterSecurityGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterSecurityGroupsOutcomeCallable DescribeClusterSecurityGroupsCallable(const Model::DescribeClusterSecurityGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeClusterSecurityGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterSecurityGroupsAsync(const Model::DescribeClusterSecurityGroupsRequest& request, const DescribeClusterSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns one or more snapshot objects, which contain metadata about your
         * cluster snapshots. By default, this operation returns information about all
         * snapshots of all clusters that are owned by your Amazon Web Services account. No
         * information is returned for snapshots owned by inactive Amazon Web Services
         * accounts.</p> <p>If you specify both tag keys and tag values in the same
         * request, Amazon Redshift returns all snapshots that match any combination of the
         * specified keys and values. For example, if you have <code>owner</code> and
         * <code>environment</code> for tag keys, and <code>admin</code> and
         * <code>test</code> for tag values, all snapshots that have any combination of
         * those values are returned. Only snapshots that you own are returned in the
         * response; shared snapshots are not returned with the tag key and tag value
         * request parameters.</p> <p>If both tag keys and values are omitted from the
         * request, snapshots are returned regardless of whether they have tag keys or
         * values associated with them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeClusterSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterSnapshotsOutcome DescribeClusterSnapshots(const Model::DescribeClusterSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for DescribeClusterSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterSnapshotsOutcomeCallable DescribeClusterSnapshotsCallable(const Model::DescribeClusterSnapshotsRequest& request) const;

        /**
         * An Async wrapper for DescribeClusterSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterSnapshotsAsync(const Model::DescribeClusterSnapshotsRequest& request, const DescribeClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns one or more cluster subnet group objects, which contain metadata
         * about your cluster subnet groups. By default, this operation returns information
         * about all cluster subnet groups that are defined in your Amazon Web Services
         * account.</p> <p>If you specify both tag keys and tag values in the same request,
         * Amazon Redshift returns all subnet groups that match any combination of the
         * specified keys and values. For example, if you have <code>owner</code> and
         * <code>environment</code> for tag keys, and <code>admin</code> and
         * <code>test</code> for tag values, all subnet groups that have any combination of
         * those values are returned.</p> <p>If both tag keys and values are omitted from
         * the request, subnet groups are returned regardless of whether they have tag keys
         * or values associated with them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeClusterSubnetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterSubnetGroupsOutcome DescribeClusterSubnetGroups(const Model::DescribeClusterSubnetGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeClusterSubnetGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterSubnetGroupsOutcomeCallable DescribeClusterSubnetGroupsCallable(const Model::DescribeClusterSubnetGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeClusterSubnetGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterSubnetGroupsAsync(const Model::DescribeClusterSubnetGroupsRequest& request, const DescribeClusterSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all the available maintenance tracks.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeClusterTracks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterTracksOutcome DescribeClusterTracks(const Model::DescribeClusterTracksRequest& request) const;

        /**
         * A Callable wrapper for DescribeClusterTracks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterTracksOutcomeCallable DescribeClusterTracksCallable(const Model::DescribeClusterTracksRequest& request) const;

        /**
         * An Async wrapper for DescribeClusterTracks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterTracksAsync(const Model::DescribeClusterTracksRequest& request, const DescribeClusterTracksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns descriptions of the available Amazon Redshift cluster versions. You
         * can call this operation even before creating any clusters to learn more about
         * the Amazon Redshift versions. For more information about managing clusters, go
         * to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeClusterVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterVersionsOutcome DescribeClusterVersions(const Model::DescribeClusterVersionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeClusterVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterVersionsOutcomeCallable DescribeClusterVersionsCallable(const Model::DescribeClusterVersionsRequest& request) const;

        /**
         * An Async wrapper for DescribeClusterVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterVersionsAsync(const Model::DescribeClusterVersionsRequest& request, const DescribeClusterVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns properties of provisioned clusters including general cluster
         * properties, cluster database properties, maintenance and backup properties, and
         * security and access properties. This operation supports pagination. For more
         * information about managing clusters, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p> <p>If you specify both tag keys and tag values in the same
         * request, Amazon Redshift returns all clusters that match any combination of the
         * specified keys and values. For example, if you have <code>owner</code> and
         * <code>environment</code> for tag keys, and <code>admin</code> and
         * <code>test</code> for tag values, all clusters that have any combination of
         * those values are returned.</p> <p>If both tag keys and values are omitted from
         * the request, clusters are returned regardless of whether they have tag keys or
         * values associated with them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest& request) const;

        /**
         * A Callable wrapper for DescribeClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request) const;

        /**
         * An Async wrapper for DescribeClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Shows the status of any inbound or outbound datashares available in the
         * specified account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeDataShares">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataSharesOutcome DescribeDataShares(const Model::DescribeDataSharesRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataShares that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDataSharesOutcomeCallable DescribeDataSharesCallable(const Model::DescribeDataSharesRequest& request) const;

        /**
         * An Async wrapper for DescribeDataShares that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDataSharesAsync(const Model::DescribeDataSharesRequest& request, const DescribeDataSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of datashares where the account identifier being called is a
         * consumer account identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeDataSharesForConsumer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataSharesForConsumerOutcome DescribeDataSharesForConsumer(const Model::DescribeDataSharesForConsumerRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataSharesForConsumer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDataSharesForConsumerOutcomeCallable DescribeDataSharesForConsumerCallable(const Model::DescribeDataSharesForConsumerRequest& request) const;

        /**
         * An Async wrapper for DescribeDataSharesForConsumer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDataSharesForConsumerAsync(const Model::DescribeDataSharesForConsumerRequest& request, const DescribeDataSharesForConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of datashares when the account identifier being called is a
         * producer account identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeDataSharesForProducer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataSharesForProducerOutcome DescribeDataSharesForProducer(const Model::DescribeDataSharesForProducerRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataSharesForProducer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDataSharesForProducerOutcomeCallable DescribeDataSharesForProducerCallable(const Model::DescribeDataSharesForProducerRequest& request) const;

        /**
         * An Async wrapper for DescribeDataSharesForProducer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDataSharesForProducerAsync(const Model::DescribeDataSharesForProducerRequest& request, const DescribeDataSharesForProducerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of parameter settings for the specified parameter group
         * family.</p> <p> For more information about parameters and parameter groups, go
         * to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
         * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeDefaultClusterParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDefaultClusterParametersOutcome DescribeDefaultClusterParameters(const Model::DescribeDefaultClusterParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeDefaultClusterParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDefaultClusterParametersOutcomeCallable DescribeDefaultClusterParametersCallable(const Model::DescribeDefaultClusterParametersRequest& request) const;

        /**
         * An Async wrapper for DescribeDefaultClusterParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDefaultClusterParametersAsync(const Model::DescribeDefaultClusterParametersRequest& request, const DescribeDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a Redshift-managed VPC endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointAccessOutcome DescribeEndpointAccess(const Model::DescribeEndpointAccessRequest& request) const;

        /**
         * A Callable wrapper for DescribeEndpointAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointAccessOutcomeCallable DescribeEndpointAccessCallable(const Model::DescribeEndpointAccessRequest& request) const;

        /**
         * An Async wrapper for DescribeEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointAccessAsync(const Model::DescribeEndpointAccessRequest& request, const DescribeEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an endpoint authorization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeEndpointAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointAuthorizationOutcome DescribeEndpointAuthorization(const Model::DescribeEndpointAuthorizationRequest& request) const;

        /**
         * A Callable wrapper for DescribeEndpointAuthorization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointAuthorizationOutcomeCallable DescribeEndpointAuthorizationCallable(const Model::DescribeEndpointAuthorizationRequest& request) const;

        /**
         * An Async wrapper for DescribeEndpointAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointAuthorizationAsync(const Model::DescribeEndpointAuthorizationRequest& request, const DescribeEndpointAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays a list of event categories for all event source types, or for a
         * specified source type. For a list of the event categories and source types, go
         * to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-event-notifications.html">Amazon
         * Redshift Event Notifications</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeEventCategories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventCategoriesOutcome DescribeEventCategories(const Model::DescribeEventCategoriesRequest& request) const;

        /**
         * A Callable wrapper for DescribeEventCategories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventCategoriesOutcomeCallable DescribeEventCategoriesCallable(const Model::DescribeEventCategoriesRequest& request) const;

        /**
         * An Async wrapper for DescribeEventCategories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventCategoriesAsync(const Model::DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists descriptions of all the Amazon Redshift event notification
         * subscriptions for a customer account. If you specify a subscription name, lists
         * the description for that subscription.</p> <p>If you specify both tag keys and
         * tag values in the same request, Amazon Redshift returns all event notification
         * subscriptions that match any combination of the specified keys and values. For
         * example, if you have <code>owner</code> and <code>environment</code> for tag
         * keys, and <code>admin</code> and <code>test</code> for tag values, all
         * subscriptions that have any combination of those values are returned.</p> <p>If
         * both tag keys and values are omitted from the request, subscriptions are
         * returned regardless of whether they have tag keys or values associated with
         * them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeEventSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventSubscriptionsOutcome DescribeEventSubscriptions(const Model::DescribeEventSubscriptionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEventSubscriptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventSubscriptionsOutcomeCallable DescribeEventSubscriptionsCallable(const Model::DescribeEventSubscriptionsRequest& request) const;

        /**
         * An Async wrapper for DescribeEventSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventSubscriptionsAsync(const Model::DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns events related to clusters, security groups, snapshots, and parameter
         * groups for the past 14 days. Events specific to a particular cluster, security
         * group, snapshot or parameter group can be obtained by providing the name as a
         * parameter. By default, the past hour of events are returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeEvents">AWS
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
         * <p>Returns information about the specified HSM client certificate. If no
         * certificate ID is specified, returns information about all the HSM certificates
         * owned by your Amazon Web Services account.</p> <p>If you specify both tag keys
         * and tag values in the same request, Amazon Redshift returns all HSM client
         * certificates that match any combination of the specified keys and values. For
         * example, if you have <code>owner</code> and <code>environment</code> for tag
         * keys, and <code>admin</code> and <code>test</code> for tag values, all HSM
         * client certificates that have any combination of those values are returned.</p>
         * <p>If both tag keys and values are omitted from the request, HSM client
         * certificates are returned regardless of whether they have tag keys or values
         * associated with them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeHsmClientCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHsmClientCertificatesOutcome DescribeHsmClientCertificates(const Model::DescribeHsmClientCertificatesRequest& request) const;

        /**
         * A Callable wrapper for DescribeHsmClientCertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHsmClientCertificatesOutcomeCallable DescribeHsmClientCertificatesCallable(const Model::DescribeHsmClientCertificatesRequest& request) const;

        /**
         * An Async wrapper for DescribeHsmClientCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHsmClientCertificatesAsync(const Model::DescribeHsmClientCertificatesRequest& request, const DescribeHsmClientCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified Amazon Redshift HSM configuration. If
         * no configuration ID is specified, returns information about all the HSM
         * configurations owned by your Amazon Web Services account.</p> <p>If you specify
         * both tag keys and tag values in the same request, Amazon Redshift returns all
         * HSM connections that match any combination of the specified keys and values. For
         * example, if you have <code>owner</code> and <code>environment</code> for tag
         * keys, and <code>admin</code> and <code>test</code> for tag values, all HSM
         * connections that have any combination of those values are returned.</p> <p>If
         * both tag keys and values are omitted from the request, HSM connections are
         * returned regardless of whether they have tag keys or values associated with
         * them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeHsmConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHsmConfigurationsOutcome DescribeHsmConfigurations(const Model::DescribeHsmConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeHsmConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHsmConfigurationsOutcomeCallable DescribeHsmConfigurationsCallable(const Model::DescribeHsmConfigurationsRequest& request) const;

        /**
         * An Async wrapper for DescribeHsmConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHsmConfigurationsAsync(const Model::DescribeHsmConfigurationsRequest& request, const DescribeHsmConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes whether information, such as queries and connection attempts, is
         * being logged for the specified Amazon Redshift cluster.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeLoggingStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoggingStatusOutcome DescribeLoggingStatus(const Model::DescribeLoggingStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeLoggingStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoggingStatusOutcomeCallable DescribeLoggingStatusCallable(const Model::DescribeLoggingStatusRequest& request) const;

        /**
         * An Async wrapper for DescribeLoggingStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoggingStatusAsync(const Model::DescribeLoggingStatusRequest& request, const DescribeLoggingStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns properties of possible node configurations such as node type, number
         * of nodes, and disk usage for the specified action type.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeNodeConfigurationOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNodeConfigurationOptionsOutcome DescribeNodeConfigurationOptions(const Model::DescribeNodeConfigurationOptionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeNodeConfigurationOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNodeConfigurationOptionsOutcomeCallable DescribeNodeConfigurationOptionsCallable(const Model::DescribeNodeConfigurationOptionsRequest& request) const;

        /**
         * An Async wrapper for DescribeNodeConfigurationOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNodeConfigurationOptionsAsync(const Model::DescribeNodeConfigurationOptionsRequest& request, const DescribeNodeConfigurationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of orderable cluster options. Before you create a new cluster
         * you can use this operation to find what options are available, such as the EC2
         * Availability Zones (AZ) in the specific Amazon Web Services Region that you can
         * specify, and the node types you can request. The node types differ by available
         * storage, memory, CPU and price. With the cost involved you might want to obtain
         * a list of cluster options in the specific region and specify values when
         * creating a cluster. For more information about managing clusters, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeOrderableClusterOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrderableClusterOptionsOutcome DescribeOrderableClusterOptions(const Model::DescribeOrderableClusterOptionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrderableClusterOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrderableClusterOptionsOutcomeCallable DescribeOrderableClusterOptionsCallable(const Model::DescribeOrderableClusterOptionsRequest& request) const;

        /**
         * An Async wrapper for DescribeOrderableClusterOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrderableClusterOptionsAsync(const Model::DescribeOrderableClusterOptionsRequest& request, const DescribeOrderableClusterOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the partner integrations defined for a
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribePartners">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePartnersOutcome DescribePartners(const Model::DescribePartnersRequest& request) const;

        /**
         * A Callable wrapper for DescribePartners that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePartnersOutcomeCallable DescribePartnersCallable(const Model::DescribePartnersRequest& request) const;

        /**
         * An Async wrapper for DescribePartners that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePartnersAsync(const Model::DescribePartnersRequest& request, const DescribePartnersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns exchange status details and associated metadata for a reserved-node
         * exchange. Statuses include such values as in progress and
         * requested.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeReservedNodeExchangeStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedNodeExchangeStatusOutcome DescribeReservedNodeExchangeStatus(const Model::DescribeReservedNodeExchangeStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeReservedNodeExchangeStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedNodeExchangeStatusOutcomeCallable DescribeReservedNodeExchangeStatusCallable(const Model::DescribeReservedNodeExchangeStatusRequest& request) const;

        /**
         * An Async wrapper for DescribeReservedNodeExchangeStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedNodeExchangeStatusAsync(const Model::DescribeReservedNodeExchangeStatusRequest& request, const DescribeReservedNodeExchangeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the available reserved node offerings by Amazon Redshift
         * with their descriptions including the node type, the fixed and recurring costs
         * of reserving the node and duration the node will be reserved for you. These
         * descriptions help you determine which reserve node offering you want to
         * purchase. You then use the unique offering ID in you call to
         * <a>PurchaseReservedNodeOffering</a> to reserve one or more nodes for your Amazon
         * Redshift cluster. </p> <p> For more information about reserved node offerings,
         * go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/purchase-reserved-node-instance.html">Purchasing
         * Reserved Nodes</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeReservedNodeOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedNodeOfferingsOutcome DescribeReservedNodeOfferings(const Model::DescribeReservedNodeOfferingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeReservedNodeOfferings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedNodeOfferingsOutcomeCallable DescribeReservedNodeOfferingsCallable(const Model::DescribeReservedNodeOfferingsRequest& request) const;

        /**
         * An Async wrapper for DescribeReservedNodeOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedNodeOfferingsAsync(const Model::DescribeReservedNodeOfferingsRequest& request, const DescribeReservedNodeOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the descriptions of the reserved nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeReservedNodes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedNodesOutcome DescribeReservedNodes(const Model::DescribeReservedNodesRequest& request) const;

        /**
         * A Callable wrapper for DescribeReservedNodes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedNodesOutcomeCallable DescribeReservedNodesCallable(const Model::DescribeReservedNodesRequest& request) const;

        /**
         * An Async wrapper for DescribeReservedNodes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedNodesAsync(const Model::DescribeReservedNodesRequest& request, const DescribeReservedNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the last resize operation for the specified
         * cluster. If no resize operation has ever been initiated for the specified
         * cluster, a <code>HTTP 404</code> error is returned. If a resize operation was
         * initiated and completed, the status of the resize remains as
         * <code>SUCCEEDED</code> until the next resize. </p> <p>A resize operation can be
         * requested using <a>ModifyCluster</a> and specifying a different number or type
         * of nodes for the cluster. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeResize">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResizeOutcome DescribeResize(const Model::DescribeResizeRequest& request) const;

        /**
         * A Callable wrapper for DescribeResize that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeResizeOutcomeCallable DescribeResizeCallable(const Model::DescribeResizeRequest& request) const;

        /**
         * An Async wrapper for DescribeResize that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeResizeAsync(const Model::DescribeResizeRequest& request, const DescribeResizeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes properties of scheduled actions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeScheduledActions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScheduledActionsOutcome DescribeScheduledActions(const Model::DescribeScheduledActionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeScheduledActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScheduledActionsOutcomeCallable DescribeScheduledActionsCallable(const Model::DescribeScheduledActionsRequest& request) const;

        /**
         * An Async wrapper for DescribeScheduledActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScheduledActionsAsync(const Model::DescribeScheduledActionsRequest& request, const DescribeScheduledActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of snapshot copy grants owned by the Amazon Web Services
         * account in the destination region.</p> <p> For more information about managing
         * snapshot copy grants, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-db-encryption.html">Amazon
         * Redshift Database Encryption</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeSnapshotCopyGrants">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSnapshotCopyGrantsOutcome DescribeSnapshotCopyGrants(const Model::DescribeSnapshotCopyGrantsRequest& request) const;

        /**
         * A Callable wrapper for DescribeSnapshotCopyGrants that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSnapshotCopyGrantsOutcomeCallable DescribeSnapshotCopyGrantsCallable(const Model::DescribeSnapshotCopyGrantsRequest& request) const;

        /**
         * An Async wrapper for DescribeSnapshotCopyGrants that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSnapshotCopyGrantsAsync(const Model::DescribeSnapshotCopyGrantsRequest& request, const DescribeSnapshotCopyGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of snapshot schedules. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeSnapshotSchedules">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSnapshotSchedulesOutcome DescribeSnapshotSchedules(const Model::DescribeSnapshotSchedulesRequest& request) const;

        /**
         * A Callable wrapper for DescribeSnapshotSchedules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSnapshotSchedulesOutcomeCallable DescribeSnapshotSchedulesCallable(const Model::DescribeSnapshotSchedulesRequest& request) const;

        /**
         * An Async wrapper for DescribeSnapshotSchedules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSnapshotSchedulesAsync(const Model::DescribeSnapshotSchedulesRequest& request, const DescribeSnapshotSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns account level backups storage size and provisional
         * storage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStorageOutcome DescribeStorage(const Model::DescribeStorageRequest& request) const;

        /**
         * A Callable wrapper for DescribeStorage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStorageOutcomeCallable DescribeStorageCallable(const Model::DescribeStorageRequest& request) const;

        /**
         * An Async wrapper for DescribeStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStorageAsync(const Model::DescribeStorageRequest& request, const DescribeStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the status of one or more table restore requests made using the
         * <a>RestoreTableFromClusterSnapshot</a> API action. If you don't specify a value
         * for the <code>TableRestoreRequestId</code> parameter, then
         * <code>DescribeTableRestoreStatus</code> returns the status of all table restore
         * requests ordered by the date and time of the request in ascending order.
         * Otherwise <code>DescribeTableRestoreStatus</code> returns the status of the
         * table specified by <code>TableRestoreRequestId</code>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeTableRestoreStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTableRestoreStatusOutcome DescribeTableRestoreStatus(const Model::DescribeTableRestoreStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeTableRestoreStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTableRestoreStatusOutcomeCallable DescribeTableRestoreStatusCallable(const Model::DescribeTableRestoreStatusRequest& request) const;

        /**
         * An Async wrapper for DescribeTableRestoreStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTableRestoreStatusAsync(const Model::DescribeTableRestoreStatusRequest& request, const DescribeTableRestoreStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of tags. You can return tags from a specific resource by
         * specifying an ARN, or you can return all tags for a given type of resource, such
         * as clusters, snapshots, and so on.</p> <p>The following are limitations for
         * <code>DescribeTags</code>: </p> <ul> <li> <p>You cannot specify an ARN and a
         * resource-type value together in the same request.</p> </li> <li> <p>You cannot
         * use the <code>MaxRecords</code> and <code>Marker</code> parameters together with
         * the ARN parameter.</p> </li> <li> <p>The <code>MaxRecords</code> parameter can
         * be a range from 10 to 50 results to return in a request.</p> </li> </ul> <p>If
         * you specify both tag keys and tag values in the same request, Amazon Redshift
         * returns all resources that match any combination of the specified keys and
         * values. For example, if you have <code>owner</code> and <code>environment</code>
         * for tag keys, and <code>admin</code> and <code>test</code> for tag values, all
         * resources that have any combination of those values are returned.</p> <p>If both
         * tag keys and values are omitted from the request, resources are returned
         * regardless of whether they have tag keys or values associated with
         * them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request) const;

        /**
         * An Async wrapper for DescribeTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Shows usage limits on a cluster. Results are filtered based on the
         * combination of input usage limit identifier, cluster identifier, and feature
         * type parameters:</p> <ul> <li> <p>If usage limit identifier, cluster identifier,
         * and feature type are not provided, then all usage limit objects for the current
         * account in the current region are returned.</p> </li> <li> <p>If usage limit
         * identifier is provided, then the corresponding usage limit object is
         * returned.</p> </li> <li> <p>If cluster identifier is provided, then all usage
         * limit objects for the specified cluster are returned.</p> </li> <li> <p>If
         * cluster identifier and feature type are provided, then all usage limit objects
         * for the combination of cluster and feature are returned.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeUsageLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUsageLimitsOutcome DescribeUsageLimits(const Model::DescribeUsageLimitsRequest& request) const;

        /**
         * A Callable wrapper for DescribeUsageLimits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUsageLimitsOutcomeCallable DescribeUsageLimitsCallable(const Model::DescribeUsageLimitsRequest& request) const;

        /**
         * An Async wrapper for DescribeUsageLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUsageLimitsAsync(const Model::DescribeUsageLimitsRequest& request, const DescribeUsageLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops logging information, such as queries and connection attempts, for the
         * specified Amazon Redshift cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DisableLogging">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableLoggingOutcome DisableLogging(const Model::DisableLoggingRequest& request) const;

        /**
         * A Callable wrapper for DisableLogging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableLoggingOutcomeCallable DisableLoggingCallable(const Model::DisableLoggingRequest& request) const;

        /**
         * An Async wrapper for DisableLogging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableLoggingAsync(const Model::DisableLoggingRequest& request, const DisableLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the automatic copying of snapshots from one region to another region
         * for a specified cluster.</p> <p>If your cluster and its snapshots are encrypted
         * using an encrypted symmetric key from Key Management Service, use
         * <a>DeleteSnapshotCopyGrant</a> to delete the grant that grants Amazon Redshift
         * permission to the key in the destination region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DisableSnapshotCopy">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableSnapshotCopyOutcome DisableSnapshotCopy(const Model::DisableSnapshotCopyRequest& request) const;

        /**
         * A Callable wrapper for DisableSnapshotCopy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableSnapshotCopyOutcomeCallable DisableSnapshotCopyCallable(const Model::DisableSnapshotCopyRequest& request) const;

        /**
         * An Async wrapper for DisableSnapshotCopy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableSnapshotCopyAsync(const Model::DisableSnapshotCopyRequest& request, const DisableSnapshotCopyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>From a datashare consumer account, remove association for the specified
         * datashare. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DisassociateDataShareConsumer">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateDataShareConsumerOutcome DisassociateDataShareConsumer(const Model::DisassociateDataShareConsumerRequest& request) const;

        /**
         * A Callable wrapper for DisassociateDataShareConsumer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateDataShareConsumerOutcomeCallable DisassociateDataShareConsumerCallable(const Model::DisassociateDataShareConsumerRequest& request) const;

        /**
         * An Async wrapper for DisassociateDataShareConsumer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateDataShareConsumerAsync(const Model::DisassociateDataShareConsumerRequest& request, const DisassociateDataShareConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts logging information, such as queries and connection attempts, for the
         * specified Amazon Redshift cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/EnableLogging">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableLoggingOutcome EnableLogging(const Model::EnableLoggingRequest& request) const;

        /**
         * A Callable wrapper for EnableLogging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableLoggingOutcomeCallable EnableLoggingCallable(const Model::EnableLoggingRequest& request) const;

        /**
         * An Async wrapper for EnableLogging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableLoggingAsync(const Model::EnableLoggingRequest& request, const EnableLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the automatic copy of snapshots from one region to another region for
         * a specified cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/EnableSnapshotCopy">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableSnapshotCopyOutcome EnableSnapshotCopy(const Model::EnableSnapshotCopyRequest& request) const;

        /**
         * A Callable wrapper for EnableSnapshotCopy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableSnapshotCopyOutcomeCallable EnableSnapshotCopyCallable(const Model::EnableSnapshotCopyRequest& request) const;

        /**
         * An Async wrapper for EnableSnapshotCopy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableSnapshotCopyAsync(const Model::EnableSnapshotCopyRequest& request, const EnableSnapshotCopyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a database user name and temporary password with temporary
         * authorization to log on to an Amazon Redshift database. The action returns the
         * database user name prefixed with <code>IAM:</code> if <code>AutoCreate</code> is
         * <code>False</code> or <code>IAMA:</code> if <code>AutoCreate</code> is
         * <code>True</code>. You can optionally specify one or more database user groups
         * that the user will join at log on. By default, the temporary credentials expire
         * in 900 seconds. You can optionally specify a duration between 900 seconds (15
         * minutes) and 3600 seconds (60 minutes). For more information, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/generating-user-credentials.html">Using
         * IAM Authentication to Generate Database User Credentials</a> in the Amazon
         * Redshift Cluster Management Guide.</p> <p>The Identity and Access Management
         * (IAM) user or role that runs GetClusterCredentials must have an IAM policy
         * attached that allows access to all necessary actions and resources. For more
         * information about permissions, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-identity-based.html#redshift-policy-resources.getclustercredentials-resources">Resource
         * Policies for GetClusterCredentials</a> in the Amazon Redshift Cluster Management
         * Guide.</p> <p>If the <code>DbGroups</code> parameter is specified, the IAM
         * policy must allow the <code>redshift:JoinGroup</code> action with access to the
         * listed <code>dbgroups</code>. </p> <p>In addition, if the
         * <code>AutoCreate</code> parameter is set to <code>True</code>, then the policy
         * must include the <code>redshift:CreateClusterUser</code> permission.</p> <p>If
         * the <code>DbName</code> parameter is specified, the IAM policy must allow access
         * to the resource <code>dbname</code> for the specified database name.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/GetClusterCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::GetClusterCredentialsOutcome GetClusterCredentials(const Model::GetClusterCredentialsRequest& request) const;

        /**
         * A Callable wrapper for GetClusterCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetClusterCredentialsOutcomeCallable GetClusterCredentialsCallable(const Model::GetClusterCredentialsRequest& request) const;

        /**
         * An Async wrapper for GetClusterCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetClusterCredentialsAsync(const Model::GetClusterCredentialsRequest& request, const GetClusterCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a database user name and temporary password with temporary
         * authorization to log in to an Amazon Redshift database. The database user is
         * mapped 1:1 to the source Identity and Access Management (IAM) identity. For more
         * information about IAM identities, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id.html">IAM Identities
         * (users, user groups, and roles)</a> in the Amazon Web Services Identity and
         * Access Management User Guide.</p> <p>The Identity and Access Management (IAM)
         * identity that runs this operation must have an IAM policy attached that allows
         * access to all necessary actions and resources. For more information about
         * permissions, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-identity-based.html">Using
         * identity-based policies (IAM policies)</a> in the Amazon Redshift Cluster
         * Management Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/GetClusterCredentialsWithIAM">AWS
         * API Reference</a></p>
         */
        virtual Model::GetClusterCredentialsWithIAMOutcome GetClusterCredentialsWithIAM(const Model::GetClusterCredentialsWithIAMRequest& request) const;

        /**
         * A Callable wrapper for GetClusterCredentialsWithIAM that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetClusterCredentialsWithIAMOutcomeCallable GetClusterCredentialsWithIAMCallable(const Model::GetClusterCredentialsWithIAMRequest& request) const;

        /**
         * An Async wrapper for GetClusterCredentialsWithIAM that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetClusterCredentialsWithIAMAsync(const Model::GetClusterCredentialsWithIAMRequest& request, const GetClusterCredentialsWithIAMResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the configuration options for the reserved-node exchange. These options
         * include information about the source reserved node and target reserved node
         * offering. Details include the node type, the price, the node count, and the
         * offering type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/GetReservedNodeExchangeConfigurationOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReservedNodeExchangeConfigurationOptionsOutcome GetReservedNodeExchangeConfigurationOptions(const Model::GetReservedNodeExchangeConfigurationOptionsRequest& request) const;

        /**
         * A Callable wrapper for GetReservedNodeExchangeConfigurationOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReservedNodeExchangeConfigurationOptionsOutcomeCallable GetReservedNodeExchangeConfigurationOptionsCallable(const Model::GetReservedNodeExchangeConfigurationOptionsRequest& request) const;

        /**
         * An Async wrapper for GetReservedNodeExchangeConfigurationOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReservedNodeExchangeConfigurationOptionsAsync(const Model::GetReservedNodeExchangeConfigurationOptionsRequest& request, const GetReservedNodeExchangeConfigurationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of DC2 ReservedNodeOfferings that matches the payment type,
         * term, and usage price of the given DC1 reserved node.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/GetReservedNodeExchangeOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReservedNodeExchangeOfferingsOutcome GetReservedNodeExchangeOfferings(const Model::GetReservedNodeExchangeOfferingsRequest& request) const;

        /**
         * A Callable wrapper for GetReservedNodeExchangeOfferings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReservedNodeExchangeOfferingsOutcomeCallable GetReservedNodeExchangeOfferingsCallable(const Model::GetReservedNodeExchangeOfferingsRequest& request) const;

        /**
         * An Async wrapper for GetReservedNodeExchangeOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReservedNodeExchangeOfferingsAsync(const Model::GetReservedNodeExchangeOfferingsRequest& request, const GetReservedNodeExchangeOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation is retired. Calling this operation does not change AQUA
         * configuration. Amazon Redshift automatically determines whether to use AQUA
         * (Advanced Query Accelerator). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ModifyAquaConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyAquaConfigurationOutcome ModifyAquaConfiguration(const Model::ModifyAquaConfigurationRequest& request) const;

        /**
         * A Callable wrapper for ModifyAquaConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyAquaConfigurationOutcomeCallable ModifyAquaConfigurationCallable(const Model::ModifyAquaConfigurationRequest& request) const;

        /**
         * An Async wrapper for ModifyAquaConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyAquaConfigurationAsync(const Model::ModifyAquaConfigurationRequest& request, const ModifyAquaConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an authentication profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ModifyAuthenticationProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyAuthenticationProfileOutcome ModifyAuthenticationProfile(const Model::ModifyAuthenticationProfileRequest& request) const;

        /**
         * A Callable wrapper for ModifyAuthenticationProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyAuthenticationProfileOutcomeCallable ModifyAuthenticationProfileCallable(const Model::ModifyAuthenticationProfileRequest& request) const;

        /**
         * An Async wrapper for ModifyAuthenticationProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyAuthenticationProfileAsync(const Model::ModifyAuthenticationProfileRequest& request, const ModifyAuthenticationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the settings for a cluster.</p> <p>You can also change node type and
         * the number of nodes to scale up or down the cluster. When resizing a cluster,
         * you must specify both the number of nodes and the node type even if one of the
         * parameters does not change.</p> <p>You can add another security or parameter
         * group, or change the admin user password. Resetting a cluster password or
         * modifying the security groups associated with a cluster do not need a reboot.
         * However, modifying a parameter group requires a reboot for parameters to take
         * effect. For more information about managing clusters, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ModifyCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyClusterOutcome ModifyCluster(const Model::ModifyClusterRequest& request) const;

        /**
         * A Callable wrapper for ModifyCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyClusterOutcomeCallable ModifyClusterCallable(const Model::ModifyClusterRequest& request) const;

        /**
         * An Async wrapper for ModifyCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyClusterAsync(const Model::ModifyClusterRequest& request, const ModifyClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the database revision of a cluster. The database revision is a
         * unique revision of the database running in a cluster.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ModifyClusterDbRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyClusterDbRevisionOutcome ModifyClusterDbRevision(const Model::ModifyClusterDbRevisionRequest& request) const;

        /**
         * A Callable wrapper for ModifyClusterDbRevision that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyClusterDbRevisionOutcomeCallable ModifyClusterDbRevisionCallable(const Model::ModifyClusterDbRevisionRequest& request) const;

        /**
         * An Async wrapper for ModifyClusterDbRevision that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyClusterDbRevisionAsync(const Model::ModifyClusterDbRevisionRequest& request, const ModifyClusterDbRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the list of Identity and Access Management (IAM) roles that can be
         * used by the cluster to access other Amazon Web Services services.</p> <p>The
         * maximum number of IAM roles that you can associate is subject to a quota. For
         * more information, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/amazon-redshift-limits.html">Quotas
         * and limits</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ModifyClusterIamRoles">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyClusterIamRolesOutcome ModifyClusterIamRoles(const Model::ModifyClusterIamRolesRequest& request) const;

        /**
         * A Callable wrapper for ModifyClusterIamRoles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyClusterIamRolesOutcomeCallable ModifyClusterIamRolesCallable(const Model::ModifyClusterIamRolesRequest& request) const;

        /**
         * An Async wrapper for ModifyClusterIamRoles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyClusterIamRolesAsync(const Model::ModifyClusterIamRolesRequest& request, const ModifyClusterIamRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the maintenance settings of a cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ModifyClusterMaintenance">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyClusterMaintenanceOutcome ModifyClusterMaintenance(const Model::ModifyClusterMaintenanceRequest& request) const;

        /**
         * A Callable wrapper for ModifyClusterMaintenance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyClusterMaintenanceOutcomeCallable ModifyClusterMaintenanceCallable(const Model::ModifyClusterMaintenanceRequest& request) const;

        /**
         * An Async wrapper for ModifyClusterMaintenance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyClusterMaintenanceAsync(const Model::ModifyClusterMaintenanceRequest& request, const ModifyClusterMaintenanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the parameters of a parameter group. For the parameters parameter,
         * it can't contain ASCII characters.</p> <p> For more information about parameters
         * and parameter groups, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
         * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ModifyClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyClusterParameterGroupOutcome ModifyClusterParameterGroup(const Model::ModifyClusterParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyClusterParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyClusterParameterGroupOutcomeCallable ModifyClusterParameterGroupCallable(const Model::ModifyClusterParameterGroupRequest& request) const;

        /**
         * An Async wrapper for ModifyClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyClusterParameterGroupAsync(const Model::ModifyClusterParameterGroupRequest& request, const ModifyClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the settings for a snapshot.</p> <p>This exanmple modifies the
         * manual retention period setting for a cluster snapshot.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ModifyClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyClusterSnapshotOutcome ModifyClusterSnapshot(const Model::ModifyClusterSnapshotRequest& request) const;

        /**
         * A Callable wrapper for ModifyClusterSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyClusterSnapshotOutcomeCallable ModifyClusterSnapshotCallable(const Model::ModifyClusterSnapshotRequest& request) const;

        /**
         * An Async wrapper for ModifyClusterSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyClusterSnapshotAsync(const Model::ModifyClusterSnapshotRequest& request, const ModifyClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies a snapshot schedule for a cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ModifyClusterSnapshotSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyClusterSnapshotScheduleOutcome ModifyClusterSnapshotSchedule(const Model::ModifyClusterSnapshotScheduleRequest& request) const;

        /**
         * A Callable wrapper for ModifyClusterSnapshotSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyClusterSnapshotScheduleOutcomeCallable ModifyClusterSnapshotScheduleCallable(const Model::ModifyClusterSnapshotScheduleRequest& request) const;

        /**
         * An Async wrapper for ModifyClusterSnapshotSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyClusterSnapshotScheduleAsync(const Model::ModifyClusterSnapshotScheduleRequest& request, const ModifyClusterSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies a cluster subnet group to include the specified list of VPC subnets.
         * The operation replaces the existing list of subnets with the new list of
         * subnets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ModifyClusterSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyClusterSubnetGroupOutcome ModifyClusterSubnetGroup(const Model::ModifyClusterSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyClusterSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyClusterSubnetGroupOutcomeCallable ModifyClusterSubnetGroupCallable(const Model::ModifyClusterSubnetGroupRequest& request) const;

        /**
         * An Async wrapper for ModifyClusterSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyClusterSubnetGroupAsync(const Model::ModifyClusterSubnetGroupRequest& request, const ModifyClusterSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies a Redshift-managed VPC endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ModifyEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyEndpointAccessOutcome ModifyEndpointAccess(const Model::ModifyEndpointAccessRequest& request) const;

        /**
         * A Callable wrapper for ModifyEndpointAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyEndpointAccessOutcomeCallable ModifyEndpointAccessCallable(const Model::ModifyEndpointAccessRequest& request) const;

        /**
         * An Async wrapper for ModifyEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyEndpointAccessAsync(const Model::ModifyEndpointAccessRequest& request, const ModifyEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an existing Amazon Redshift event notification
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ModifyEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyEventSubscriptionOutcome ModifyEventSubscription(const Model::ModifyEventSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for ModifyEventSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyEventSubscriptionOutcomeCallable ModifyEventSubscriptionCallable(const Model::ModifyEventSubscriptionRequest& request) const;

        /**
         * An Async wrapper for ModifyEventSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyEventSubscriptionAsync(const Model::ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies a scheduled action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ModifyScheduledAction">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyScheduledActionOutcome ModifyScheduledAction(const Model::ModifyScheduledActionRequest& request) const;

        /**
         * A Callable wrapper for ModifyScheduledAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyScheduledActionOutcomeCallable ModifyScheduledActionCallable(const Model::ModifyScheduledActionRequest& request) const;

        /**
         * An Async wrapper for ModifyScheduledAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyScheduledActionAsync(const Model::ModifyScheduledActionRequest& request, const ModifyScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the number of days to retain snapshots in the destination Amazon Web
         * Services Region after they are copied from the source Amazon Web Services
         * Region. By default, this operation only changes the retention period of copied
         * automated snapshots. The retention periods for both new and existing copied
         * automated snapshots are updated with the new retention period. You can set the
         * manual option to change only the retention periods of copied manual snapshots.
         * If you set this option, only newly copied manual snapshots have the new
         * retention period. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ModifySnapshotCopyRetentionPeriod">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifySnapshotCopyRetentionPeriodOutcome ModifySnapshotCopyRetentionPeriod(const Model::ModifySnapshotCopyRetentionPeriodRequest& request) const;

        /**
         * A Callable wrapper for ModifySnapshotCopyRetentionPeriod that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifySnapshotCopyRetentionPeriodOutcomeCallable ModifySnapshotCopyRetentionPeriodCallable(const Model::ModifySnapshotCopyRetentionPeriodRequest& request) const;

        /**
         * An Async wrapper for ModifySnapshotCopyRetentionPeriod that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifySnapshotCopyRetentionPeriodAsync(const Model::ModifySnapshotCopyRetentionPeriodRequest& request, const ModifySnapshotCopyRetentionPeriodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies a snapshot schedule. Any schedule associated with a cluster is
         * modified asynchronously.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ModifySnapshotSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifySnapshotScheduleOutcome ModifySnapshotSchedule(const Model::ModifySnapshotScheduleRequest& request) const;

        /**
         * A Callable wrapper for ModifySnapshotSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifySnapshotScheduleOutcomeCallable ModifySnapshotScheduleCallable(const Model::ModifySnapshotScheduleRequest& request) const;

        /**
         * An Async wrapper for ModifySnapshotSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifySnapshotScheduleAsync(const Model::ModifySnapshotScheduleRequest& request, const ModifySnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies a usage limit in a cluster. You can't modify the feature type or
         * period of a usage limit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ModifyUsageLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyUsageLimitOutcome ModifyUsageLimit(const Model::ModifyUsageLimitRequest& request) const;

        /**
         * A Callable wrapper for ModifyUsageLimit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyUsageLimitOutcomeCallable ModifyUsageLimitCallable(const Model::ModifyUsageLimitRequest& request) const;

        /**
         * An Async wrapper for ModifyUsageLimit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyUsageLimitAsync(const Model::ModifyUsageLimitRequest& request, const ModifyUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Pauses a cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/PauseCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::PauseClusterOutcome PauseCluster(const Model::PauseClusterRequest& request) const;

        /**
         * A Callable wrapper for PauseCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PauseClusterOutcomeCallable PauseClusterCallable(const Model::PauseClusterRequest& request) const;

        /**
         * An Async wrapper for PauseCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PauseClusterAsync(const Model::PauseClusterRequest& request, const PauseClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows you to purchase reserved nodes. Amazon Redshift offers a predefined
         * set of reserved node offerings. You can purchase one or more of the offerings.
         * You can call the <a>DescribeReservedNodeOfferings</a> API to obtain the
         * available reserved node offerings. You can call this API by providing a specific
         * reserved node offering and the number of nodes you want to reserve. </p> <p> For
         * more information about reserved node offerings, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/purchase-reserved-node-instance.html">Purchasing
         * Reserved Nodes</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/PurchaseReservedNodeOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseReservedNodeOfferingOutcome PurchaseReservedNodeOffering(const Model::PurchaseReservedNodeOfferingRequest& request) const;

        /**
         * A Callable wrapper for PurchaseReservedNodeOffering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurchaseReservedNodeOfferingOutcomeCallable PurchaseReservedNodeOfferingCallable(const Model::PurchaseReservedNodeOfferingRequest& request) const;

        /**
         * An Async wrapper for PurchaseReservedNodeOffering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurchaseReservedNodeOfferingAsync(const Model::PurchaseReservedNodeOfferingRequest& request, const PurchaseReservedNodeOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reboots a cluster. This action is taken as soon as possible. It results in a
         * momentary outage to the cluster, during which the cluster status is set to
         * <code>rebooting</code>. A cluster event is created when the reboot is completed.
         * Any pending cluster modifications (see <a>ModifyCluster</a>) are applied at this
         * reboot. For more information about managing clusters, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html">Amazon
         * Redshift Clusters</a> in the <i>Amazon Redshift Cluster Management Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/RebootCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootClusterOutcome RebootCluster(const Model::RebootClusterRequest& request) const;

        /**
         * A Callable wrapper for RebootCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootClusterOutcomeCallable RebootClusterCallable(const Model::RebootClusterRequest& request) const;

        /**
         * An Async wrapper for RebootCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootClusterAsync(const Model::RebootClusterRequest& request, const RebootClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>From a datashare consumer account, rejects the specified
         * datashare.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/RejectDataShare">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectDataShareOutcome RejectDataShare(const Model::RejectDataShareRequest& request) const;

        /**
         * A Callable wrapper for RejectDataShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectDataShareOutcomeCallable RejectDataShareCallable(const Model::RejectDataShareRequest& request) const;

        /**
         * An Async wrapper for RejectDataShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectDataShareAsync(const Model::RejectDataShareRequest& request, const RejectDataShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets one or more parameters of the specified parameter group to their default
         * values and sets the source values of the parameters to "engine-default". To
         * reset the entire parameter group specify the <i>ResetAllParameters</i>
         * parameter. For parameter changes to take effect you must reboot any associated
         * clusters. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ResetClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetClusterParameterGroupOutcome ResetClusterParameterGroup(const Model::ResetClusterParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for ResetClusterParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetClusterParameterGroupOutcomeCallable ResetClusterParameterGroupCallable(const Model::ResetClusterParameterGroupRequest& request) const;

        /**
         * An Async wrapper for ResetClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetClusterParameterGroupAsync(const Model::ResetClusterParameterGroupRequest& request, const ResetClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the size of the cluster. You can change the cluster's type, or change
         * the number or type of nodes. The default behavior is to use the elastic resize
         * method. With an elastic resize, your cluster is available for read and write
         * operations more quickly than with the classic resize method. </p> <p>Elastic
         * resize operations have the following restrictions:</p> <ul> <li> <p>You can only
         * resize clusters of the following types:</p> <ul> <li> <p>dc1.large (if your
         * cluster is in a VPC)</p> </li> <li> <p>dc1.8xlarge (if your cluster is in a
         * VPC)</p> </li> <li> <p>dc2.large</p> </li> <li> <p>dc2.8xlarge</p> </li> <li>
         * <p>ds2.xlarge</p> </li> <li> <p>ds2.8xlarge</p> </li> <li> <p>ra3.xlplus</p>
         * </li> <li> <p>ra3.4xlarge</p> </li> <li> <p>ra3.16xlarge</p> </li> </ul> </li>
         * <li> <p>The type of nodes that you add must match the node type for the
         * cluster.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ResizeCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::ResizeClusterOutcome ResizeCluster(const Model::ResizeClusterRequest& request) const;

        /**
         * A Callable wrapper for ResizeCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResizeClusterOutcomeCallable ResizeClusterCallable(const Model::ResizeClusterRequest& request) const;

        /**
         * An Async wrapper for ResizeCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResizeClusterAsync(const Model::ResizeClusterRequest& request, const ResizeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new cluster from a snapshot. By default, Amazon Redshift creates
         * the resulting cluster with the same configuration as the original cluster from
         * which the snapshot was created, except that the new cluster is created with the
         * default cluster security and parameter groups. After Amazon Redshift creates the
         * cluster, you can use the <a>ModifyCluster</a> API to associate a different
         * security group and different parameter group with the restored cluster. If you
         * are using a DS node type, you can also choose to change to another DS node type
         * of the same size during restore.</p> <p>If you restore a cluster into a VPC, you
         * must provide a cluster subnet group where you want the cluster restored.</p> <p>
         * For more information about working with snapshots, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon
         * Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/RestoreFromClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreFromClusterSnapshotOutcome RestoreFromClusterSnapshot(const Model::RestoreFromClusterSnapshotRequest& request) const;

        /**
         * A Callable wrapper for RestoreFromClusterSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreFromClusterSnapshotOutcomeCallable RestoreFromClusterSnapshotCallable(const Model::RestoreFromClusterSnapshotRequest& request) const;

        /**
         * An Async wrapper for RestoreFromClusterSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreFromClusterSnapshotAsync(const Model::RestoreFromClusterSnapshotRequest& request, const RestoreFromClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new table from a table in an Amazon Redshift cluster snapshot. You
         * must create the new table within the Amazon Redshift cluster that the snapshot
         * was taken from.</p> <p>You cannot use
         * <code>RestoreTableFromClusterSnapshot</code> to restore a table with the same
         * name as an existing table in an Amazon Redshift cluster. That is, you cannot
         * overwrite an existing table in a cluster with a restored table. If you want to
         * replace your original table with a new, restored table, then rename or drop your
         * original table before you call <code>RestoreTableFromClusterSnapshot</code>.
         * When you have renamed your original table, then you can pass the original name
         * of the table as the <code>NewTableName</code> parameter value in the call to
         * <code>RestoreTableFromClusterSnapshot</code>. This way, you can replace the
         * original table with the table created from the snapshot.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/RestoreTableFromClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreTableFromClusterSnapshotOutcome RestoreTableFromClusterSnapshot(const Model::RestoreTableFromClusterSnapshotRequest& request) const;

        /**
         * A Callable wrapper for RestoreTableFromClusterSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreTableFromClusterSnapshotOutcomeCallable RestoreTableFromClusterSnapshotCallable(const Model::RestoreTableFromClusterSnapshotRequest& request) const;

        /**
         * An Async wrapper for RestoreTableFromClusterSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreTableFromClusterSnapshotAsync(const Model::RestoreTableFromClusterSnapshotRequest& request, const RestoreTableFromClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resumes a paused cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ResumeCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeClusterOutcome ResumeCluster(const Model::ResumeClusterRequest& request) const;

        /**
         * A Callable wrapper for ResumeCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResumeClusterOutcomeCallable ResumeClusterCallable(const Model::ResumeClusterRequest& request) const;

        /**
         * An Async wrapper for ResumeCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResumeClusterAsync(const Model::ResumeClusterRequest& request, const ResumeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes an ingress rule in an Amazon Redshift security group for a previously
         * authorized IP range or Amazon EC2 security group. To add an ingress rule, see
         * <a>AuthorizeClusterSecurityGroupIngress</a>. For information about managing
         * security groups, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-security-groups.html">Amazon
         * Redshift Cluster Security Groups</a> in the <i>Amazon Redshift Cluster
         * Management Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/RevokeClusterSecurityGroupIngress">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeClusterSecurityGroupIngressOutcome RevokeClusterSecurityGroupIngress(const Model::RevokeClusterSecurityGroupIngressRequest& request) const;

        /**
         * A Callable wrapper for RevokeClusterSecurityGroupIngress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeClusterSecurityGroupIngressOutcomeCallable RevokeClusterSecurityGroupIngressCallable(const Model::RevokeClusterSecurityGroupIngressRequest& request) const;

        /**
         * An Async wrapper for RevokeClusterSecurityGroupIngress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeClusterSecurityGroupIngressAsync(const Model::RevokeClusterSecurityGroupIngressRequest& request, const RevokeClusterSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes access to a cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/RevokeEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeEndpointAccessOutcome RevokeEndpointAccess(const Model::RevokeEndpointAccessRequest& request) const;

        /**
         * A Callable wrapper for RevokeEndpointAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeEndpointAccessOutcomeCallable RevokeEndpointAccessCallable(const Model::RevokeEndpointAccessRequest& request) const;

        /**
         * An Async wrapper for RevokeEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeEndpointAccessAsync(const Model::RevokeEndpointAccessRequest& request, const RevokeEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the ability of the specified Amazon Web Services account to restore
         * the specified snapshot. If the account is currently restoring the snapshot, the
         * restore will run to completion.</p> <p> For more information about working with
         * snapshots, go to <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-snapshots.html">Amazon
         * Redshift Snapshots</a> in the <i>Amazon Redshift Cluster Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/RevokeSnapshotAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeSnapshotAccessOutcome RevokeSnapshotAccess(const Model::RevokeSnapshotAccessRequest& request) const;

        /**
         * A Callable wrapper for RevokeSnapshotAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeSnapshotAccessOutcomeCallable RevokeSnapshotAccessCallable(const Model::RevokeSnapshotAccessRequest& request) const;

        /**
         * An Async wrapper for RevokeSnapshotAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeSnapshotAccessAsync(const Model::RevokeSnapshotAccessRequest& request, const RevokeSnapshotAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rotates the encryption keys for a cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/RotateEncryptionKey">AWS
         * API Reference</a></p>
         */
        virtual Model::RotateEncryptionKeyOutcome RotateEncryptionKey(const Model::RotateEncryptionKeyRequest& request) const;

        /**
         * A Callable wrapper for RotateEncryptionKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RotateEncryptionKeyOutcomeCallable RotateEncryptionKeyCallable(const Model::RotateEncryptionKeyRequest& request) const;

        /**
         * An Async wrapper for RotateEncryptionKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RotateEncryptionKeyAsync(const Model::RotateEncryptionKeyRequest& request, const RotateEncryptionKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status of a partner integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/UpdatePartnerStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePartnerStatusOutcome UpdatePartnerStatus(const Model::UpdatePartnerStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdatePartnerStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePartnerStatusOutcomeCallable UpdatePartnerStatusCallable(const Model::UpdatePartnerStatusRequest& request) const;

        /**
         * An Async wrapper for UpdatePartnerStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePartnerStatusAsync(const Model::UpdatePartnerStatusRequest& request, const UpdatePartnerStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<RedshiftEndpointProviderBase>& accessEndpointProvider();
  private:
        friend class Aws::Client::ClientWithAsyncTemplateMethods<RedshiftClient>;
        void init(const RedshiftClientConfiguration& clientConfiguration);

        RedshiftClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<RedshiftEndpointProviderBase> m_endpointProvider;
  };

} // namespace Redshift
} // namespace Aws
