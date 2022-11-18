/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cloudhsmv2/CloudHSMV2ServiceClientModel.h>
#include <aws/cloudhsmv2/CloudHSMV2LegacyAsyncMacros.h>

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
  class AWS_CLOUDHSMV2_API CloudHSMV2Client : public Aws::Client::AWSJsonClient
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
         * <p>Copy an AWS CloudHSM cluster backup to a different region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/CopyBackupToRegion">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyBackupToRegionOutcome CopyBackupToRegion(const Model::CopyBackupToRegionRequest& request) const;


        /**
         * <p>Creates a new AWS CloudHSM cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;


        /**
         * <p>Creates a new hardware security module (HSM) in the specified AWS CloudHSM
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/CreateHsm">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHsmOutcome CreateHsm(const Model::CreateHsmRequest& request) const;


        /**
         * <p>Deletes a specified AWS CloudHSM backup. A backup can be restored up to 7
         * days after the DeleteBackup request is made. For more information on restoring a
         * backup, see <a>RestoreBackup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/DeleteBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackupOutcome DeleteBackup(const Model::DeleteBackupRequest& request) const;


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
         * <p>Deletes the specified HSM. To specify an HSM, you can use its identifier
         * (ID), the IP address of the HSM's elastic network interface (ENI), or the ID of
         * the HSM's ENI. You need to specify only one of these values. To find these
         * values, use <a>DescribeClusters</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/DeleteHsm">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHsmOutcome DeleteHsm(const Model::DeleteHsmRequest& request) const;


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
         * <p>Modifies attributes for AWS CloudHSM backup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/ModifyBackupAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyBackupAttributesOutcome ModifyBackupAttributes(const Model::ModifyBackupAttributesRequest& request) const;


        /**
         * <p>Modifies AWS CloudHSM cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/ModifyCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyClusterOutcome ModifyCluster(const Model::ModifyClusterRequest& request) const;


        /**
         * <p>Restores a specified AWS CloudHSM backup that is in the
         * <code>PENDING_DELETION</code> state. For mor information on deleting a backup,
         * see <a>DeleteBackup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/RestoreBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreBackupOutcome RestoreBackup(const Model::RestoreBackupRequest& request) const;


        /**
         * <p>Adds or overwrites one or more tags for the specified AWS CloudHSM
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes the specified tag or tags from the specified AWS CloudHSM
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CloudHSMV2EndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const CloudHSMV2ClientConfiguration& clientConfiguration);

      CloudHSMV2ClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CloudHSMV2EndpointProviderBase> m_endpointProvider;
  };

} // namespace CloudHSMV2
} // namespace Aws
