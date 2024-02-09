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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CloudHSMV2ClientConfiguration ClientConfigurationType;
      typedef CloudHSMV2EndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudHSMV2Client(const Aws::CloudHSMV2::CloudHSMV2ClientConfiguration& clientConfiguration = Aws::CloudHSMV2::CloudHSMV2ClientConfiguration(),
                         std::shared_ptr<CloudHSMV2EndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudHSMV2Client(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<CloudHSMV2EndpointProviderBase> endpointProvider = nullptr,
                         const Aws::CloudHSMV2::CloudHSMV2ClientConfiguration& clientConfiguration = Aws::CloudHSMV2::CloudHSMV2ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudHSMV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<CloudHSMV2EndpointProviderBase> endpointProvider = nullptr,
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
        template<typename CopyBackupToRegionRequestT = Model::CopyBackupToRegionRequest>
        Model::CopyBackupToRegionOutcomeCallable CopyBackupToRegionCallable(const CopyBackupToRegionRequestT& request) const
        {
            return SubmitCallable(&CloudHSMV2Client::CopyBackupToRegion, request);
        }

        /**
         * An Async wrapper for CopyBackupToRegion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopyBackupToRegionRequestT = Model::CopyBackupToRegionRequest>
        void CopyBackupToRegionAsync(const CopyBackupToRegionRequestT& request, const CopyBackupToRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMV2Client::CopyBackupToRegion, request, handler, context);
        }

        /**
         * <p>Creates a new AWS CloudHSM cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateClusterRequestT = Model::CreateClusterRequest>
        Model::CreateClusterOutcomeCallable CreateClusterCallable(const CreateClusterRequestT& request) const
        {
            return SubmitCallable(&CloudHSMV2Client::CreateCluster, request);
        }

        /**
         * An Async wrapper for CreateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateClusterRequestT = Model::CreateClusterRequest>
        void CreateClusterAsync(const CreateClusterRequestT& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMV2Client::CreateCluster, request, handler, context);
        }

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
        template<typename CreateHsmRequestT = Model::CreateHsmRequest>
        Model::CreateHsmOutcomeCallable CreateHsmCallable(const CreateHsmRequestT& request) const
        {
            return SubmitCallable(&CloudHSMV2Client::CreateHsm, request);
        }

        /**
         * An Async wrapper for CreateHsm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateHsmRequestT = Model::CreateHsmRequest>
        void CreateHsmAsync(const CreateHsmRequestT& request, const CreateHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMV2Client::CreateHsm, request, handler, context);
        }

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
        template<typename DeleteBackupRequestT = Model::DeleteBackupRequest>
        Model::DeleteBackupOutcomeCallable DeleteBackupCallable(const DeleteBackupRequestT& request) const
        {
            return SubmitCallable(&CloudHSMV2Client::DeleteBackup, request);
        }

        /**
         * An Async wrapper for DeleteBackup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBackupRequestT = Model::DeleteBackupRequest>
        void DeleteBackupAsync(const DeleteBackupRequestT& request, const DeleteBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMV2Client::DeleteBackup, request, handler, context);
        }

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
        template<typename DeleteClusterRequestT = Model::DeleteClusterRequest>
        Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const DeleteClusterRequestT& request) const
        {
            return SubmitCallable(&CloudHSMV2Client::DeleteCluster, request);
        }

        /**
         * An Async wrapper for DeleteCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteClusterRequestT = Model::DeleteClusterRequest>
        void DeleteClusterAsync(const DeleteClusterRequestT& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMV2Client::DeleteCluster, request, handler, context);
        }

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
        template<typename DeleteHsmRequestT = Model::DeleteHsmRequest>
        Model::DeleteHsmOutcomeCallable DeleteHsmCallable(const DeleteHsmRequestT& request) const
        {
            return SubmitCallable(&CloudHSMV2Client::DeleteHsm, request);
        }

        /**
         * An Async wrapper for DeleteHsm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteHsmRequestT = Model::DeleteHsmRequest>
        void DeleteHsmAsync(const DeleteHsmRequestT& request, const DeleteHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMV2Client::DeleteHsm, request, handler, context);
        }

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
        template<typename DescribeBackupsRequestT = Model::DescribeBackupsRequest>
        Model::DescribeBackupsOutcomeCallable DescribeBackupsCallable(const DescribeBackupsRequestT& request) const
        {
            return SubmitCallable(&CloudHSMV2Client::DescribeBackups, request);
        }

        /**
         * An Async wrapper for DescribeBackups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBackupsRequestT = Model::DescribeBackupsRequest>
        void DescribeBackupsAsync(const DescribeBackupsRequestT& request, const DescribeBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMV2Client::DescribeBackups, request, handler, context);
        }

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
        template<typename DescribeClustersRequestT = Model::DescribeClustersRequest>
        Model::DescribeClustersOutcomeCallable DescribeClustersCallable(const DescribeClustersRequestT& request) const
        {
            return SubmitCallable(&CloudHSMV2Client::DescribeClusters, request);
        }

        /**
         * An Async wrapper for DescribeClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeClustersRequestT = Model::DescribeClustersRequest>
        void DescribeClustersAsync(const DescribeClustersRequestT& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMV2Client::DescribeClusters, request, handler, context);
        }

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
        template<typename InitializeClusterRequestT = Model::InitializeClusterRequest>
        Model::InitializeClusterOutcomeCallable InitializeClusterCallable(const InitializeClusterRequestT& request) const
        {
            return SubmitCallable(&CloudHSMV2Client::InitializeCluster, request);
        }

        /**
         * An Async wrapper for InitializeCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InitializeClusterRequestT = Model::InitializeClusterRequest>
        void InitializeClusterAsync(const InitializeClusterRequestT& request, const InitializeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMV2Client::InitializeCluster, request, handler, context);
        }

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
        template<typename ListTagsRequestT = Model::ListTagsRequest>
        Model::ListTagsOutcomeCallable ListTagsCallable(const ListTagsRequestT& request) const
        {
            return SubmitCallable(&CloudHSMV2Client::ListTags, request);
        }

        /**
         * An Async wrapper for ListTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsRequestT = Model::ListTagsRequest>
        void ListTagsAsync(const ListTagsRequestT& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMV2Client::ListTags, request, handler, context);
        }

        /**
         * <p>Modifies attributes for AWS CloudHSM backup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/ModifyBackupAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyBackupAttributesOutcome ModifyBackupAttributes(const Model::ModifyBackupAttributesRequest& request) const;

        /**
         * A Callable wrapper for ModifyBackupAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyBackupAttributesRequestT = Model::ModifyBackupAttributesRequest>
        Model::ModifyBackupAttributesOutcomeCallable ModifyBackupAttributesCallable(const ModifyBackupAttributesRequestT& request) const
        {
            return SubmitCallable(&CloudHSMV2Client::ModifyBackupAttributes, request);
        }

        /**
         * An Async wrapper for ModifyBackupAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyBackupAttributesRequestT = Model::ModifyBackupAttributesRequest>
        void ModifyBackupAttributesAsync(const ModifyBackupAttributesRequestT& request, const ModifyBackupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMV2Client::ModifyBackupAttributes, request, handler, context);
        }

        /**
         * <p>Modifies AWS CloudHSM cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/ModifyCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyClusterOutcome ModifyCluster(const Model::ModifyClusterRequest& request) const;

        /**
         * A Callable wrapper for ModifyCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyClusterRequestT = Model::ModifyClusterRequest>
        Model::ModifyClusterOutcomeCallable ModifyClusterCallable(const ModifyClusterRequestT& request) const
        {
            return SubmitCallable(&CloudHSMV2Client::ModifyCluster, request);
        }

        /**
         * An Async wrapper for ModifyCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyClusterRequestT = Model::ModifyClusterRequest>
        void ModifyClusterAsync(const ModifyClusterRequestT& request, const ModifyClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMV2Client::ModifyCluster, request, handler, context);
        }

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
        template<typename RestoreBackupRequestT = Model::RestoreBackupRequest>
        Model::RestoreBackupOutcomeCallable RestoreBackupCallable(const RestoreBackupRequestT& request) const
        {
            return SubmitCallable(&CloudHSMV2Client::RestoreBackup, request);
        }

        /**
         * An Async wrapper for RestoreBackup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreBackupRequestT = Model::RestoreBackupRequest>
        void RestoreBackupAsync(const RestoreBackupRequestT& request, const RestoreBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMV2Client::RestoreBackup, request, handler, context);
        }

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
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&CloudHSMV2Client::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMV2Client::TagResource, request, handler, context);
        }

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
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&CloudHSMV2Client::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudHSMV2Client::UntagResource, request, handler, context);
        }


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
