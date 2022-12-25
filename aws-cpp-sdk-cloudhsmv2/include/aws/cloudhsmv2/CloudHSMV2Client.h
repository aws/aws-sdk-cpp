/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cloudhsmv2/CloudHSMV2ServiceClientModel.h>

namespace Aws
{
namespace CloudHSMV2
{
  /**
   * <p>For more information about AWS CloudHSM, see <a
   * href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
   * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
   * Guide</a>.</p>
   */
  class AWS_CLOUDHSMV2_API CloudHSMV2Client : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CloudHSMV2Client>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudHSMV2Client(const Aws::CloudHSMV2::CloudHSMV2ClientConfiguration& clientConfiguration = Aws::CloudHSMV2::CloudHSMV2ClientConfiguration(),
                         std::shared_ptr<CloudHSMV2EndpointProviderBase> endpointProvider = Aws::MakeShared<CloudHSMV2EndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudHSMV2Client(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<CloudHSMV2EndpointProviderBase> endpointProvider = Aws::MakeShared<CloudHSMV2EndpointProvider>(ALLOCATION_TAG),
                         const Aws::CloudHSMV2::CloudHSMV2ClientConfiguration& clientConfiguration = Aws::CloudHSMV2::CloudHSMV2ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudHSMV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<CloudHSMV2EndpointProviderBase> endpointProvider = Aws::MakeShared<CloudHSMV2EndpointProvider>(ALLOCATION_TAG),
                         const Aws::CloudHSMV2::CloudHSMV2ClientConfiguration& clientConfiguration = Aws::CloudHSMV2::CloudHSMV2ClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudHSMV2Client(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudHSMV2Client(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudHSMV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CloudHSMV2Client();

        /**
         * <p>Copy an AWS CloudHSM cluster backup to a different region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/CopyBackupToRegion">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyBackupToRegionOutcome CopyBackupToRegion(const Model::CopyBackupToRegionRequest& request) const;

        /**
         * A Callable wrapper for CopyBackupToRegion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyBackupToRegionOutcomeCallable CopyBackupToRegionCallable(const Model::CopyBackupToRegionRequest& request) const;

        /**
         * An Async wrapper for CopyBackupToRegion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyBackupToRegionAsync(const Model::CopyBackupToRegionRequest& request, const CopyBackupToRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new AWS CloudHSM cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/CreateCluster">AWS
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
         * <p>Creates a new hardware security module (HSM) in the specified AWS CloudHSM
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/CreateHsm">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHsmOutcome CreateHsm(const Model::CreateHsmRequest& request) const;

        /**
         * A Callable wrapper for CreateHsm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHsmOutcomeCallable CreateHsmCallable(const Model::CreateHsmRequest& request) const;

        /**
         * An Async wrapper for CreateHsm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHsmAsync(const Model::CreateHsmRequest& request, const CreateHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified AWS CloudHSM backup. A backup can be restored up to 7
         * days after the DeleteBackup request is made. For more information on restoring a
         * backup, see <a>RestoreBackup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/DeleteBackup">AWS
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
         * <p>Deletes the specified AWS CloudHSM cluster. Before you can delete a cluster,
         * you must delete all HSMs in the cluster. To see if the cluster contains any
         * HSMs, use <a>DescribeClusters</a>. To delete an HSM, use
         * <a>DeleteHsm</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/DeleteCluster">AWS
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
         * <p>Deletes the specified HSM. To specify an HSM, you can use its identifier
         * (ID), the IP address of the HSM's elastic network interface (ENI), or the ID of
         * the HSM's ENI. You need to specify only one of these values. To find these
         * values, use <a>DescribeClusters</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/DeleteHsm">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHsmOutcome DeleteHsm(const Model::DeleteHsmRequest& request) const;

        /**
         * A Callable wrapper for DeleteHsm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHsmOutcomeCallable DeleteHsmCallable(const Model::DeleteHsmRequest& request) const;

        /**
         * An Async wrapper for DeleteHsm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHsmAsync(const Model::DeleteHsmRequest& request, const DeleteHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about backups of AWS CloudHSM clusters.</p> <p>This is a
         * paginated operation, which means that each response might contain only a subset
         * of all the backups. When the response contains only a subset of backups, it
         * includes a <code>NextToken</code> value. Use this value in a subsequent
         * <code>DescribeBackups</code> request to get more backups. When you receive a
         * response with no <code>NextToken</code> (or an empty or null value), that means
         * there are no more backups to get.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/DescribeBackups">AWS
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
         * <p>Gets information about AWS CloudHSM clusters.</p> <p>This is a paginated
         * operation, which means that each response might contain only a subset of all the
         * clusters. When the response contains only a subset of clusters, it includes a
         * <code>NextToken</code> value. Use this value in a subsequent
         * <code>DescribeClusters</code> request to get more clusters. When you receive a
         * response with no <code>NextToken</code> (or an empty or null value), that means
         * there are no more clusters to get.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/DescribeClusters">AWS
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
         * <p>Claims an AWS CloudHSM cluster by submitting the cluster certificate issued
         * by your issuing certificate authority (CA) and the CA's root certificate. Before
         * you can claim a cluster, you must sign the cluster's certificate signing request
         * (CSR) with your issuing CA. To get the cluster's CSR, use
         * <a>DescribeClusters</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/InitializeCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::InitializeClusterOutcome InitializeCluster(const Model::InitializeClusterRequest& request) const;

        /**
         * A Callable wrapper for InitializeCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InitializeClusterOutcomeCallable InitializeClusterCallable(const Model::InitializeClusterRequest& request) const;

        /**
         * An Async wrapper for InitializeCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InitializeClusterAsync(const Model::InitializeClusterRequest& request, const InitializeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of tags for the specified AWS CloudHSM cluster.</p> <p>This is a
         * paginated operation, which means that each response might contain only a subset
         * of all the tags. When the response contains only a subset of tags, it includes a
         * <code>NextToken</code> value. Use this value in a subsequent
         * <code>ListTags</code> request to get more tags. When you receive a response with
         * no <code>NextToken</code> (or an empty or null value), that means there are no
         * more tags to get.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/ListTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * A Callable wrapper for ListTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * An Async wrapper for ListTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsAsync(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies attributes for AWS CloudHSM backup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/ModifyBackupAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyBackupAttributesOutcome ModifyBackupAttributes(const Model::ModifyBackupAttributesRequest& request) const;

        /**
         * A Callable wrapper for ModifyBackupAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyBackupAttributesOutcomeCallable ModifyBackupAttributesCallable(const Model::ModifyBackupAttributesRequest& request) const;

        /**
         * An Async wrapper for ModifyBackupAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyBackupAttributesAsync(const Model::ModifyBackupAttributesRequest& request, const ModifyBackupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies AWS CloudHSM cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/ModifyCluster">AWS
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
         * <p>Restores a specified AWS CloudHSM backup that is in the
         * <code>PENDING_DELETION</code> state. For mor information on deleting a backup,
         * see <a>DeleteBackup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/RestoreBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreBackupOutcome RestoreBackup(const Model::RestoreBackupRequest& request) const;

        /**
         * A Callable wrapper for RestoreBackup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreBackupOutcomeCallable RestoreBackupCallable(const Model::RestoreBackupRequest& request) const;

        /**
         * An Async wrapper for RestoreBackup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreBackupAsync(const Model::RestoreBackupRequest& request, const RestoreBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified AWS CloudHSM
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/TagResource">AWS
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
         * <p>Removes the specified tag or tags from the specified AWS CloudHSM
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/UntagResource">AWS
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


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CloudHSMV2EndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CloudHSMV2Client>;
      void init(const CloudHSMV2ClientConfiguration& clientConfiguration);

      CloudHSMV2ClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CloudHSMV2EndpointProviderBase> m_endpointProvider;
  };

} // namespace CloudHSMV2
} // namespace Aws
