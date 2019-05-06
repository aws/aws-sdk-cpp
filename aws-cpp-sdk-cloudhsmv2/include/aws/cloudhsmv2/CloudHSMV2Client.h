/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/CloudHSMV2Errors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cloudhsmv2/model/CopyBackupToRegionResult.h>
#include <aws/cloudhsmv2/model/CreateClusterResult.h>
#include <aws/cloudhsmv2/model/CreateHsmResult.h>
#include <aws/cloudhsmv2/model/DeleteBackupResult.h>
#include <aws/cloudhsmv2/model/DeleteClusterResult.h>
#include <aws/cloudhsmv2/model/DeleteHsmResult.h>
#include <aws/cloudhsmv2/model/DescribeBackupsResult.h>
#include <aws/cloudhsmv2/model/DescribeClustersResult.h>
#include <aws/cloudhsmv2/model/InitializeClusterResult.h>
#include <aws/cloudhsmv2/model/ListTagsResult.h>
#include <aws/cloudhsmv2/model/RestoreBackupResult.h>
#include <aws/cloudhsmv2/model/TagResourceResult.h>
#include <aws/cloudhsmv2/model/UntagResourceResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace CloudHSMV2
{

namespace Model
{
        class CopyBackupToRegionRequest;
        class CreateClusterRequest;
        class CreateHsmRequest;
        class DeleteBackupRequest;
        class DeleteClusterRequest;
        class DeleteHsmRequest;
        class DescribeBackupsRequest;
        class DescribeClustersRequest;
        class InitializeClusterRequest;
        class ListTagsRequest;
        class RestoreBackupRequest;
        class TagResourceRequest;
        class UntagResourceRequest;

        typedef Aws::Utils::Outcome<CopyBackupToRegionResult, Aws::Client::AWSError<CloudHSMV2Errors>> CopyBackupToRegionOutcome;
        typedef Aws::Utils::Outcome<CreateClusterResult, Aws::Client::AWSError<CloudHSMV2Errors>> CreateClusterOutcome;
        typedef Aws::Utils::Outcome<CreateHsmResult, Aws::Client::AWSError<CloudHSMV2Errors>> CreateHsmOutcome;
        typedef Aws::Utils::Outcome<DeleteBackupResult, Aws::Client::AWSError<CloudHSMV2Errors>> DeleteBackupOutcome;
        typedef Aws::Utils::Outcome<DeleteClusterResult, Aws::Client::AWSError<CloudHSMV2Errors>> DeleteClusterOutcome;
        typedef Aws::Utils::Outcome<DeleteHsmResult, Aws::Client::AWSError<CloudHSMV2Errors>> DeleteHsmOutcome;
        typedef Aws::Utils::Outcome<DescribeBackupsResult, Aws::Client::AWSError<CloudHSMV2Errors>> DescribeBackupsOutcome;
        typedef Aws::Utils::Outcome<DescribeClustersResult, Aws::Client::AWSError<CloudHSMV2Errors>> DescribeClustersOutcome;
        typedef Aws::Utils::Outcome<InitializeClusterResult, Aws::Client::AWSError<CloudHSMV2Errors>> InitializeClusterOutcome;
        typedef Aws::Utils::Outcome<ListTagsResult, Aws::Client::AWSError<CloudHSMV2Errors>> ListTagsOutcome;
        typedef Aws::Utils::Outcome<RestoreBackupResult, Aws::Client::AWSError<CloudHSMV2Errors>> RestoreBackupOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<CloudHSMV2Errors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<CloudHSMV2Errors>> UntagResourceOutcome;

        typedef std::future<CopyBackupToRegionOutcome> CopyBackupToRegionOutcomeCallable;
        typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
        typedef std::future<CreateHsmOutcome> CreateHsmOutcomeCallable;
        typedef std::future<DeleteBackupOutcome> DeleteBackupOutcomeCallable;
        typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
        typedef std::future<DeleteHsmOutcome> DeleteHsmOutcomeCallable;
        typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
        typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
        typedef std::future<InitializeClusterOutcome> InitializeClusterOutcomeCallable;
        typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
        typedef std::future<RestoreBackupOutcome> RestoreBackupOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
} // namespace Model

  class CloudHSMV2Client;

    typedef std::function<void(const CloudHSMV2Client*, const Model::CopyBackupToRegionRequest&, const Model::CopyBackupToRegionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyBackupToRegionResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::CreateHsmRequest&, const Model::CreateHsmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHsmResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::DeleteBackupRequest&, const Model::DeleteBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackupResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::DeleteHsmRequest&, const Model::DeleteHsmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHsmResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::DescribeBackupsRequest&, const Model::DescribeBackupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBackupsResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::DescribeClustersRequest&, const Model::DescribeClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClustersResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::InitializeClusterRequest&, const Model::InitializeClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InitializeClusterResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::RestoreBackupRequest&, const Model::RestoreBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreBackupResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CloudHSMV2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;

  /**
   * <p>For more information about AWS CloudHSM, see <a
   * href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
   * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
   * Guide</a>.</p>
   */
  class AWS_CLOUDHSMV2_API CloudHSMV2Client : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudHSMV2Client(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudHSMV2Client(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudHSMV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CloudHSMV2Client();

        inline virtual const char* GetServiceClientName() const override { return "CloudHSM V2"; }


        /**
         * <p>Copy an AWS CloudHSM cluster backup to a different region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/CopyBackupToRegion">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyBackupToRegionOutcome CopyBackupToRegion(const Model::CopyBackupToRegionRequest& request) const;

        /**
         * <p>Copy an AWS CloudHSM cluster backup to a different region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/CopyBackupToRegion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyBackupToRegionOutcomeCallable CopyBackupToRegionCallable(const Model::CopyBackupToRegionRequest& request) const;

        /**
         * <p>Copy an AWS CloudHSM cluster backup to a different region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/CopyBackupToRegion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyBackupToRegionAsync(const Model::CopyBackupToRegionRequest& request, const CopyBackupToRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new AWS CloudHSM cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

        /**
         * <p>Creates a new AWS CloudHSM cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/CreateCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request) const;

        /**
         * <p>Creates a new AWS CloudHSM cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/CreateCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates a new hardware security module (HSM) in the specified AWS CloudHSM
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/CreateHsm">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHsmOutcomeCallable CreateHsmCallable(const Model::CreateHsmRequest& request) const;

        /**
         * <p>Creates a new hardware security module (HSM) in the specified AWS CloudHSM
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/CreateHsm">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHsmAsync(const Model::CreateHsmRequest& request, const CreateHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified AWS CloudHSM backup. A backup can be restored up to 7
         * days after the DeleteBackup request. For more information on restoring a backup,
         * see <a>RestoreBackup</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/DeleteBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackupOutcome DeleteBackup(const Model::DeleteBackupRequest& request) const;

        /**
         * <p>Deletes a specified AWS CloudHSM backup. A backup can be restored up to 7
         * days after the DeleteBackup request. For more information on restoring a backup,
         * see <a>RestoreBackup</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/DeleteBackup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBackupOutcomeCallable DeleteBackupCallable(const Model::DeleteBackupRequest& request) const;

        /**
         * <p>Deletes a specified AWS CloudHSM backup. A backup can be restored up to 7
         * days after the DeleteBackup request. For more information on restoring a backup,
         * see <a>RestoreBackup</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/DeleteBackup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes the specified AWS CloudHSM cluster. Before you can delete a cluster,
         * you must delete all HSMs in the cluster. To see if the cluster contains any
         * HSMs, use <a>DescribeClusters</a>. To delete an HSM, use
         * <a>DeleteHsm</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/DeleteCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request) const;

        /**
         * <p>Deletes the specified AWS CloudHSM cluster. Before you can delete a cluster,
         * you must delete all HSMs in the cluster. To see if the cluster contains any
         * HSMs, use <a>DescribeClusters</a>. To delete an HSM, use
         * <a>DeleteHsm</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/DeleteCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes the specified HSM. To specify an HSM, you can use its identifier
         * (ID), the IP address of the HSM's elastic network interface (ENI), or the ID of
         * the HSM's ENI. You need to specify only one of these values. To find these
         * values, use <a>DescribeClusters</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/DeleteHsm">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHsmOutcomeCallable DeleteHsmCallable(const Model::DeleteHsmRequest& request) const;

        /**
         * <p>Deletes the specified HSM. To specify an HSM, you can use its identifier
         * (ID), the IP address of the HSM's elastic network interface (ENI), or the ID of
         * the HSM's ENI. You need to specify only one of these values. To find these
         * values, use <a>DescribeClusters</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/DeleteHsm">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets information about backups of AWS CloudHSM clusters.</p> <p>This is a
         * paginated operation, which means that each response might contain only a subset
         * of all the backups. When the response contains only a subset of backups, it
         * includes a <code>NextToken</code> value. Use this value in a subsequent
         * <code>DescribeBackups</code> request to get more backups. When you receive a
         * response with no <code>NextToken</code> (or an empty or null value), that means
         * there are no more backups to get.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/DescribeBackups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBackupsOutcomeCallable DescribeBackupsCallable(const Model::DescribeBackupsRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets information about AWS CloudHSM clusters.</p> <p>This is a paginated
         * operation, which means that each response might contain only a subset of all the
         * clusters. When the response contains only a subset of clusters, it includes a
         * <code>NextToken</code> value. Use this value in a subsequent
         * <code>DescribeClusters</code> request to get more clusters. When you receive a
         * response with no <code>NextToken</code> (or an empty or null value), that means
         * there are no more clusters to get.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/DescribeClusters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Claims an AWS CloudHSM cluster by submitting the cluster certificate issued
         * by your issuing certificate authority (CA) and the CA's root certificate. Before
         * you can claim a cluster, you must sign the cluster's certificate signing request
         * (CSR) with your issuing CA. To get the cluster's CSR, use
         * <a>DescribeClusters</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/InitializeCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InitializeClusterOutcomeCallable InitializeClusterCallable(const Model::InitializeClusterRequest& request) const;

        /**
         * <p>Claims an AWS CloudHSM cluster by submitting the cluster certificate issued
         * by your issuing certificate authority (CA) and the CA's root certificate. Before
         * you can claim a cluster, you must sign the cluster's certificate signing request
         * (CSR) with your issuing CA. To get the cluster's CSR, use
         * <a>DescribeClusters</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/InitializeCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets a list of tags for the specified AWS CloudHSM cluster.</p> <p>This is a
         * paginated operation, which means that each response might contain only a subset
         * of all the tags. When the response contains only a subset of tags, it includes a
         * <code>NextToken</code> value. Use this value in a subsequent
         * <code>ListTags</code> request to get more tags. When you receive a response with
         * no <code>NextToken</code> (or an empty or null value), that means there are no
         * more tags to get.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/ListTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsAsync(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores a specified AWS CloudHSM backup that is in the
         * <code>PENDING_DELETION</code> state. For more information on deleting a backup,
         * see <a>DeleteBackup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/RestoreBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreBackupOutcome RestoreBackup(const Model::RestoreBackupRequest& request) const;

        /**
         * <p>Restores a specified AWS CloudHSM backup that is in the
         * <code>PENDING_DELETION</code> state. For more information on deleting a backup,
         * see <a>DeleteBackup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/RestoreBackup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreBackupOutcomeCallable RestoreBackupCallable(const Model::RestoreBackupRequest& request) const;

        /**
         * <p>Restores a specified AWS CloudHSM backup that is in the
         * <code>PENDING_DELETION</code> state. For more information on deleting a backup,
         * see <a>DeleteBackup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/RestoreBackup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Adds or overwrites one or more tags for the specified AWS CloudHSM
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified AWS CloudHSM
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Removes the specified tag or tags from the specified AWS CloudHSM
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the specified tag or tags from the specified AWS CloudHSM
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CopyBackupToRegionAsyncHelper(const Model::CopyBackupToRegionRequest& request, const CopyBackupToRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateClusterAsyncHelper(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateHsmAsyncHelper(const Model::CreateHsmRequest& request, const CreateHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBackupAsyncHelper(const Model::DeleteBackupRequest& request, const DeleteBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteClusterAsyncHelper(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteHsmAsyncHelper(const Model::DeleteHsmRequest& request, const DeleteHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBackupsAsyncHelper(const Model::DescribeBackupsRequest& request, const DescribeBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClustersAsyncHelper(const Model::DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InitializeClusterAsyncHelper(const Model::InitializeClusterRequest& request, const InitializeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsAsyncHelper(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreBackupAsyncHelper(const Model::RestoreBackupRequest& request, const RestoreBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CloudHSMV2
} // namespace Aws
