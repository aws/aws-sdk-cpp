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
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/SnowballErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/snowball/model/CancelClusterResult.h>
#include <aws/snowball/model/CancelJobResult.h>
#include <aws/snowball/model/CreateAddressResult.h>
#include <aws/snowball/model/CreateClusterResult.h>
#include <aws/snowball/model/CreateJobResult.h>
#include <aws/snowball/model/DescribeAddressResult.h>
#include <aws/snowball/model/DescribeAddressesResult.h>
#include <aws/snowball/model/DescribeClusterResult.h>
#include <aws/snowball/model/DescribeJobResult.h>
#include <aws/snowball/model/GetJobManifestResult.h>
#include <aws/snowball/model/GetJobUnlockCodeResult.h>
#include <aws/snowball/model/GetSnowballUsageResult.h>
#include <aws/snowball/model/ListClusterJobsResult.h>
#include <aws/snowball/model/ListClustersResult.h>
#include <aws/snowball/model/ListCompatibleImagesResult.h>
#include <aws/snowball/model/ListJobsResult.h>
#include <aws/snowball/model/UpdateClusterResult.h>
#include <aws/snowball/model/UpdateJobResult.h>
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

namespace Snowball
{

namespace Model
{
        class CancelClusterRequest;
        class CancelJobRequest;
        class CreateAddressRequest;
        class CreateClusterRequest;
        class CreateJobRequest;
        class DescribeAddressRequest;
        class DescribeAddressesRequest;
        class DescribeClusterRequest;
        class DescribeJobRequest;
        class GetJobManifestRequest;
        class GetJobUnlockCodeRequest;
        class GetSnowballUsageRequest;
        class ListClusterJobsRequest;
        class ListClustersRequest;
        class ListCompatibleImagesRequest;
        class ListJobsRequest;
        class UpdateClusterRequest;
        class UpdateJobRequest;

        typedef Aws::Utils::Outcome<CancelClusterResult, Aws::Client::AWSError<SnowballErrors>> CancelClusterOutcome;
        typedef Aws::Utils::Outcome<CancelJobResult, Aws::Client::AWSError<SnowballErrors>> CancelJobOutcome;
        typedef Aws::Utils::Outcome<CreateAddressResult, Aws::Client::AWSError<SnowballErrors>> CreateAddressOutcome;
        typedef Aws::Utils::Outcome<CreateClusterResult, Aws::Client::AWSError<SnowballErrors>> CreateClusterOutcome;
        typedef Aws::Utils::Outcome<CreateJobResult, Aws::Client::AWSError<SnowballErrors>> CreateJobOutcome;
        typedef Aws::Utils::Outcome<DescribeAddressResult, Aws::Client::AWSError<SnowballErrors>> DescribeAddressOutcome;
        typedef Aws::Utils::Outcome<DescribeAddressesResult, Aws::Client::AWSError<SnowballErrors>> DescribeAddressesOutcome;
        typedef Aws::Utils::Outcome<DescribeClusterResult, Aws::Client::AWSError<SnowballErrors>> DescribeClusterOutcome;
        typedef Aws::Utils::Outcome<DescribeJobResult, Aws::Client::AWSError<SnowballErrors>> DescribeJobOutcome;
        typedef Aws::Utils::Outcome<GetJobManifestResult, Aws::Client::AWSError<SnowballErrors>> GetJobManifestOutcome;
        typedef Aws::Utils::Outcome<GetJobUnlockCodeResult, Aws::Client::AWSError<SnowballErrors>> GetJobUnlockCodeOutcome;
        typedef Aws::Utils::Outcome<GetSnowballUsageResult, Aws::Client::AWSError<SnowballErrors>> GetSnowballUsageOutcome;
        typedef Aws::Utils::Outcome<ListClusterJobsResult, Aws::Client::AWSError<SnowballErrors>> ListClusterJobsOutcome;
        typedef Aws::Utils::Outcome<ListClustersResult, Aws::Client::AWSError<SnowballErrors>> ListClustersOutcome;
        typedef Aws::Utils::Outcome<ListCompatibleImagesResult, Aws::Client::AWSError<SnowballErrors>> ListCompatibleImagesOutcome;
        typedef Aws::Utils::Outcome<ListJobsResult, Aws::Client::AWSError<SnowballErrors>> ListJobsOutcome;
        typedef Aws::Utils::Outcome<UpdateClusterResult, Aws::Client::AWSError<SnowballErrors>> UpdateClusterOutcome;
        typedef Aws::Utils::Outcome<UpdateJobResult, Aws::Client::AWSError<SnowballErrors>> UpdateJobOutcome;

        typedef std::future<CancelClusterOutcome> CancelClusterOutcomeCallable;
        typedef std::future<CancelJobOutcome> CancelJobOutcomeCallable;
        typedef std::future<CreateAddressOutcome> CreateAddressOutcomeCallable;
        typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
        typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
        typedef std::future<DescribeAddressOutcome> DescribeAddressOutcomeCallable;
        typedef std::future<DescribeAddressesOutcome> DescribeAddressesOutcomeCallable;
        typedef std::future<DescribeClusterOutcome> DescribeClusterOutcomeCallable;
        typedef std::future<DescribeJobOutcome> DescribeJobOutcomeCallable;
        typedef std::future<GetJobManifestOutcome> GetJobManifestOutcomeCallable;
        typedef std::future<GetJobUnlockCodeOutcome> GetJobUnlockCodeOutcomeCallable;
        typedef std::future<GetSnowballUsageOutcome> GetSnowballUsageOutcomeCallable;
        typedef std::future<ListClusterJobsOutcome> ListClusterJobsOutcomeCallable;
        typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
        typedef std::future<ListCompatibleImagesOutcome> ListCompatibleImagesOutcomeCallable;
        typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
        typedef std::future<UpdateClusterOutcome> UpdateClusterOutcomeCallable;
        typedef std::future<UpdateJobOutcome> UpdateJobOutcomeCallable;
} // namespace Model

  class SnowballClient;

    typedef std::function<void(const SnowballClient*, const Model::CancelClusterRequest&, const Model::CancelClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelClusterResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::CancelJobRequest&, const Model::CancelJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::CreateAddressRequest&, const Model::CreateAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAddressResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::CreateJobRequest&, const Model::CreateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::DescribeAddressRequest&, const Model::DescribeAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAddressResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::DescribeAddressesRequest&, const Model::DescribeAddressesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAddressesResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::DescribeClusterRequest&, const Model::DescribeClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::DescribeJobRequest&, const Model::DescribeJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::GetJobManifestRequest&, const Model::GetJobManifestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobManifestResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::GetJobUnlockCodeRequest&, const Model::GetJobUnlockCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobUnlockCodeResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::GetSnowballUsageRequest&, const Model::GetSnowballUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSnowballUsageResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::ListClusterJobsRequest&, const Model::ListClusterJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClusterJobsResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::ListClustersRequest&, const Model::ListClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClustersResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::ListCompatibleImagesRequest&, const Model::ListCompatibleImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCompatibleImagesResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::UpdateClusterRequest&, const Model::UpdateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClusterResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::UpdateJobRequest&, const Model::UpdateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobResponseReceivedHandler;

  /**
   * <p>AWS Snowball is a petabyte-scale data transport solution that uses secure
   * devices to transfer large amounts of data between your on-premises data centers
   * and Amazon Simple Storage Service (Amazon S3). The commands described here
   * provide access to the same functionality that is available in the AWS Snowball
   * Management Console, which enables you to create and manage jobs for Snowball and
   * Snowball Edge devices. To transfer data locally with a device, you'll need to
   * use the Snowball client or the Amazon S3 API adapter for Snowball.</p>
   */
  class AWS_SNOWBALL_API SnowballClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SnowballClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SnowballClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SnowballClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SnowballClient();

        inline virtual const char* GetServiceClientName() const override { return "Snowball"; }


        /**
         * <p>Cancels a cluster job. You can only cancel a cluster job while it's in the
         * <code>AwaitingQuorum</code> status. You'll have at least an hour after creating
         * a cluster job to cancel it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/CancelCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelClusterOutcome CancelCluster(const Model::CancelClusterRequest& request) const;

        /**
         * <p>Cancels a cluster job. You can only cancel a cluster job while it's in the
         * <code>AwaitingQuorum</code> status. You'll have at least an hour after creating
         * a cluster job to cancel it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/CancelCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelClusterOutcomeCallable CancelClusterCallable(const Model::CancelClusterRequest& request) const;

        /**
         * <p>Cancels a cluster job. You can only cancel a cluster job while it's in the
         * <code>AwaitingQuorum</code> status. You'll have at least an hour after creating
         * a cluster job to cancel it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/CancelCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelClusterAsync(const Model::CancelClusterRequest& request, const CancelClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the specified job. You can only cancel a job before its
         * <code>JobState</code> value changes to <code>PreparingAppliance</code>.
         * Requesting the <code>ListJobs</code> or <code>DescribeJob</code> action returns
         * a job's <code>JobState</code> as part of the response element data
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/CancelJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelJobOutcome CancelJob(const Model::CancelJobRequest& request) const;

        /**
         * <p>Cancels the specified job. You can only cancel a job before its
         * <code>JobState</code> value changes to <code>PreparingAppliance</code>.
         * Requesting the <code>ListJobs</code> or <code>DescribeJob</code> action returns
         * a job's <code>JobState</code> as part of the response element data
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/CancelJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelJobOutcomeCallable CancelJobCallable(const Model::CancelJobRequest& request) const;

        /**
         * <p>Cancels the specified job. You can only cancel a job before its
         * <code>JobState</code> value changes to <code>PreparingAppliance</code>.
         * Requesting the <code>ListJobs</code> or <code>DescribeJob</code> action returns
         * a job's <code>JobState</code> as part of the response element data
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/CancelJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelJobAsync(const Model::CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an address for a Snowball to be shipped to. In most regions,
         * addresses are validated at the time of creation. The address you provide must be
         * located within the serviceable area of your region. If the address is invalid or
         * unsupported, then an exception is thrown.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/CreateAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAddressOutcome CreateAddress(const Model::CreateAddressRequest& request) const;

        /**
         * <p>Creates an address for a Snowball to be shipped to. In most regions,
         * addresses are validated at the time of creation. The address you provide must be
         * located within the serviceable area of your region. If the address is invalid or
         * unsupported, then an exception is thrown.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/CreateAddress">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAddressOutcomeCallable CreateAddressCallable(const Model::CreateAddressRequest& request) const;

        /**
         * <p>Creates an address for a Snowball to be shipped to. In most regions,
         * addresses are validated at the time of creation. The address you provide must be
         * located within the serviceable area of your region. If the address is invalid or
         * unsupported, then an exception is thrown.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/CreateAddress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAddressAsync(const Model::CreateAddressRequest& request, const CreateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an empty cluster. Each cluster supports five nodes. You use the
         * <a>CreateJob</a> action separately to create the jobs for each of these nodes.
         * The cluster does not ship until these five node jobs have been
         * created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

        /**
         * <p>Creates an empty cluster. Each cluster supports five nodes. You use the
         * <a>CreateJob</a> action separately to create the jobs for each of these nodes.
         * The cluster does not ship until these five node jobs have been
         * created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/CreateCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request) const;

        /**
         * <p>Creates an empty cluster. Each cluster supports five nodes. You use the
         * <a>CreateJob</a> action separately to create the jobs for each of these nodes.
         * The cluster does not ship until these five node jobs have been
         * created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/CreateCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a job to import or export data between Amazon S3 and your on-premises
         * data center. Your AWS account must have the right trust policies and permissions
         * in place to create a job for Snowball. If you're creating a job for a node in a
         * cluster, you only need to provide the <code>clusterId</code> value; the other
         * job attributes are inherited from the cluster. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/CreateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobOutcome CreateJob(const Model::CreateJobRequest& request) const;

        /**
         * <p>Creates a job to import or export data between Amazon S3 and your on-premises
         * data center. Your AWS account must have the right trust policies and permissions
         * in place to create a job for Snowball. If you're creating a job for a node in a
         * cluster, you only need to provide the <code>clusterId</code> value; the other
         * job attributes are inherited from the cluster. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/CreateJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateJobOutcomeCallable CreateJobCallable(const Model::CreateJobRequest& request) const;

        /**
         * <p>Creates a job to import or export data between Amazon S3 and your on-premises
         * data center. Your AWS account must have the right trust policies and permissions
         * in place to create a job for Snowball. If you're creating a job for a node in a
         * cluster, you only need to provide the <code>clusterId</code> value; the other
         * job attributes are inherited from the cluster. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/CreateJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateJobAsync(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Takes an <code>AddressId</code> and returns specific details about that
         * address in the form of an <code>Address</code> object.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/DescribeAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAddressOutcome DescribeAddress(const Model::DescribeAddressRequest& request) const;

        /**
         * <p>Takes an <code>AddressId</code> and returns specific details about that
         * address in the form of an <code>Address</code> object.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/DescribeAddress">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAddressOutcomeCallable DescribeAddressCallable(const Model::DescribeAddressRequest& request) const;

        /**
         * <p>Takes an <code>AddressId</code> and returns specific details about that
         * address in the form of an <code>Address</code> object.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/DescribeAddress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAddressAsync(const Model::DescribeAddressRequest& request, const DescribeAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a specified number of <code>ADDRESS</code> objects. Calling this API
         * in one of the US regions will return addresses from the list of all addresses
         * associated with this account in all US regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/DescribeAddresses">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAddressesOutcome DescribeAddresses(const Model::DescribeAddressesRequest& request) const;

        /**
         * <p>Returns a specified number of <code>ADDRESS</code> objects. Calling this API
         * in one of the US regions will return addresses from the list of all addresses
         * associated with this account in all US regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/DescribeAddresses">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAddressesOutcomeCallable DescribeAddressesCallable(const Model::DescribeAddressesRequest& request) const;

        /**
         * <p>Returns a specified number of <code>ADDRESS</code> objects. Calling this API
         * in one of the US regions will return addresses from the list of all addresses
         * associated with this account in all US regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/DescribeAddresses">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAddressesAsync(const Model::DescribeAddressesRequest& request, const DescribeAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific cluster including shipping information,
         * cluster status, and other important metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/DescribeCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterOutcome DescribeCluster(const Model::DescribeClusterRequest& request) const;

        /**
         * <p>Returns information about a specific cluster including shipping information,
         * cluster status, and other important metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/DescribeCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterOutcomeCallable DescribeClusterCallable(const Model::DescribeClusterRequest& request) const;

        /**
         * <p>Returns information about a specific cluster including shipping information,
         * cluster status, and other important metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/DescribeCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterAsync(const Model::DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific job including shipping information, job
         * status, and other important metadata. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/DescribeJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobOutcome DescribeJob(const Model::DescribeJobRequest& request) const;

        /**
         * <p>Returns information about a specific job including shipping information, job
         * status, and other important metadata. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/DescribeJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJobOutcomeCallable DescribeJobCallable(const Model::DescribeJobRequest& request) const;

        /**
         * <p>Returns information about a specific job including shipping information, job
         * status, and other important metadata. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/DescribeJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJobAsync(const Model::DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a link to an Amazon S3 presigned URL for the manifest file associated
         * with the specified <code>JobId</code> value. You can access the manifest file
         * for up to 60 minutes after this request has been made. To access the manifest
         * file after 60 minutes have passed, you'll have to make another call to the
         * <code>GetJobManifest</code> action.</p> <p>The manifest is an encrypted file
         * that you can download after your job enters the <code>WithCustomer</code>
         * status. The manifest is decrypted by using the <code>UnlockCode</code> code
         * value, when you pass both values to the Snowball through the Snowball client
         * when the client is started for the first time.</p> <p>As a best practice, we
         * recommend that you don't save a copy of an <code>UnlockCode</code> value in the
         * same location as the manifest file for that job. Saving these separately helps
         * prevent unauthorized parties from gaining access to the Snowball associated with
         * that job.</p> <p>The credentials of a given job, including its manifest file and
         * unlock code, expire 90 days after the job is created.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/GetJobManifest">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobManifestOutcome GetJobManifest(const Model::GetJobManifestRequest& request) const;

        /**
         * <p>Returns a link to an Amazon S3 presigned URL for the manifest file associated
         * with the specified <code>JobId</code> value. You can access the manifest file
         * for up to 60 minutes after this request has been made. To access the manifest
         * file after 60 minutes have passed, you'll have to make another call to the
         * <code>GetJobManifest</code> action.</p> <p>The manifest is an encrypted file
         * that you can download after your job enters the <code>WithCustomer</code>
         * status. The manifest is decrypted by using the <code>UnlockCode</code> code
         * value, when you pass both values to the Snowball through the Snowball client
         * when the client is started for the first time.</p> <p>As a best practice, we
         * recommend that you don't save a copy of an <code>UnlockCode</code> value in the
         * same location as the manifest file for that job. Saving these separately helps
         * prevent unauthorized parties from gaining access to the Snowball associated with
         * that job.</p> <p>The credentials of a given job, including its manifest file and
         * unlock code, expire 90 days after the job is created.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/GetJobManifest">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobManifestOutcomeCallable GetJobManifestCallable(const Model::GetJobManifestRequest& request) const;

        /**
         * <p>Returns a link to an Amazon S3 presigned URL for the manifest file associated
         * with the specified <code>JobId</code> value. You can access the manifest file
         * for up to 60 minutes after this request has been made. To access the manifest
         * file after 60 minutes have passed, you'll have to make another call to the
         * <code>GetJobManifest</code> action.</p> <p>The manifest is an encrypted file
         * that you can download after your job enters the <code>WithCustomer</code>
         * status. The manifest is decrypted by using the <code>UnlockCode</code> code
         * value, when you pass both values to the Snowball through the Snowball client
         * when the client is started for the first time.</p> <p>As a best practice, we
         * recommend that you don't save a copy of an <code>UnlockCode</code> value in the
         * same location as the manifest file for that job. Saving these separately helps
         * prevent unauthorized parties from gaining access to the Snowball associated with
         * that job.</p> <p>The credentials of a given job, including its manifest file and
         * unlock code, expire 90 days after the job is created.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/GetJobManifest">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobManifestAsync(const Model::GetJobManifestRequest& request, const GetJobManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the <code>UnlockCode</code> code value for the specified job. A
         * particular <code>UnlockCode</code> value can be accessed for up to 90 days after
         * the associated job has been created.</p> <p>The <code>UnlockCode</code> value is
         * a 29-character code with 25 alphanumeric characters and 4 hyphens. This code is
         * used to decrypt the manifest file when it is passed along with the manifest to
         * the Snowball through the Snowball client when the client is started for the
         * first time.</p> <p>As a best practice, we recommend that you don't save a copy
         * of the <code>UnlockCode</code> in the same location as the manifest file for
         * that job. Saving these separately helps prevent unauthorized parties from
         * gaining access to the Snowball associated with that job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/GetJobUnlockCode">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobUnlockCodeOutcome GetJobUnlockCode(const Model::GetJobUnlockCodeRequest& request) const;

        /**
         * <p>Returns the <code>UnlockCode</code> code value for the specified job. A
         * particular <code>UnlockCode</code> value can be accessed for up to 90 days after
         * the associated job has been created.</p> <p>The <code>UnlockCode</code> value is
         * a 29-character code with 25 alphanumeric characters and 4 hyphens. This code is
         * used to decrypt the manifest file when it is passed along with the manifest to
         * the Snowball through the Snowball client when the client is started for the
         * first time.</p> <p>As a best practice, we recommend that you don't save a copy
         * of the <code>UnlockCode</code> in the same location as the manifest file for
         * that job. Saving these separately helps prevent unauthorized parties from
         * gaining access to the Snowball associated with that job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/GetJobUnlockCode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobUnlockCodeOutcomeCallable GetJobUnlockCodeCallable(const Model::GetJobUnlockCodeRequest& request) const;

        /**
         * <p>Returns the <code>UnlockCode</code> code value for the specified job. A
         * particular <code>UnlockCode</code> value can be accessed for up to 90 days after
         * the associated job has been created.</p> <p>The <code>UnlockCode</code> value is
         * a 29-character code with 25 alphanumeric characters and 4 hyphens. This code is
         * used to decrypt the manifest file when it is passed along with the manifest to
         * the Snowball through the Snowball client when the client is started for the
         * first time.</p> <p>As a best practice, we recommend that you don't save a copy
         * of the <code>UnlockCode</code> in the same location as the manifest file for
         * that job. Saving these separately helps prevent unauthorized parties from
         * gaining access to the Snowball associated with that job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/GetJobUnlockCode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobUnlockCodeAsync(const Model::GetJobUnlockCodeRequest& request, const GetJobUnlockCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the Snowball service limit for your account, and
         * also the number of Snowballs your account has in use.</p> <p>The default service
         * limit for the number of Snowballs that you can have at one time is 1. If you
         * want to increase your service limit, contact AWS Support.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/GetSnowballUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSnowballUsageOutcome GetSnowballUsage(const Model::GetSnowballUsageRequest& request) const;

        /**
         * <p>Returns information about the Snowball service limit for your account, and
         * also the number of Snowballs your account has in use.</p> <p>The default service
         * limit for the number of Snowballs that you can have at one time is 1. If you
         * want to increase your service limit, contact AWS Support.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/GetSnowballUsage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSnowballUsageOutcomeCallable GetSnowballUsageCallable(const Model::GetSnowballUsageRequest& request) const;

        /**
         * <p>Returns information about the Snowball service limit for your account, and
         * also the number of Snowballs your account has in use.</p> <p>The default service
         * limit for the number of Snowballs that you can have at one time is 1. If you
         * want to increase your service limit, contact AWS Support.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/GetSnowballUsage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSnowballUsageAsync(const Model::GetSnowballUsageRequest& request, const GetSnowballUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <code>JobListEntry</code> objects of the specified
         * length. Each <code>JobListEntry</code> object is for a job in the specified
         * cluster and contains a job's state, a job's ID, and other
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ListClusterJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClusterJobsOutcome ListClusterJobs(const Model::ListClusterJobsRequest& request) const;

        /**
         * <p>Returns an array of <code>JobListEntry</code> objects of the specified
         * length. Each <code>JobListEntry</code> object is for a job in the specified
         * cluster and contains a job's state, a job's ID, and other
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ListClusterJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListClusterJobsOutcomeCallable ListClusterJobsCallable(const Model::ListClusterJobsRequest& request) const;

        /**
         * <p>Returns an array of <code>JobListEntry</code> objects of the specified
         * length. Each <code>JobListEntry</code> object is for a job in the specified
         * cluster and contains a job's state, a job's ID, and other
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ListClusterJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListClusterJobsAsync(const Model::ListClusterJobsRequest& request, const ListClusterJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <code>ClusterListEntry</code> objects of the specified
         * length. Each <code>ClusterListEntry</code> object contains a cluster's state, a
         * cluster's ID, and other important status information.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ListClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClustersOutcome ListClusters(const Model::ListClustersRequest& request) const;

        /**
         * <p>Returns an array of <code>ClusterListEntry</code> objects of the specified
         * length. Each <code>ClusterListEntry</code> object contains a cluster's state, a
         * cluster's ID, and other important status information.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ListClusters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListClustersOutcomeCallable ListClustersCallable(const Model::ListClustersRequest& request) const;

        /**
         * <p>Returns an array of <code>ClusterListEntry</code> objects of the specified
         * length. Each <code>ClusterListEntry</code> object contains a cluster's state, a
         * cluster's ID, and other important status information.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ListClusters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListClustersAsync(const Model::ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This action returns a list of the different Amazon EC2 Amazon Machine Images
         * (AMIs) that are owned by your AWS account that would be supported for use on
         * <code>EDGE</code>, <code>EDGE_C</code>, and <code>EDGE_CG</code> devices. For
         * more information on compatible AMIs, see <a
         * href="http://docs.aws.amazon.com/snowball/latest/developer-guide/using-ec2.html">Using
         * Amazon EC2 Compute Instances</a> in the <i>AWS Snowball Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ListCompatibleImages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCompatibleImagesOutcome ListCompatibleImages(const Model::ListCompatibleImagesRequest& request) const;

        /**
         * <p>This action returns a list of the different Amazon EC2 Amazon Machine Images
         * (AMIs) that are owned by your AWS account that would be supported for use on
         * <code>EDGE</code>, <code>EDGE_C</code>, and <code>EDGE_CG</code> devices. For
         * more information on compatible AMIs, see <a
         * href="http://docs.aws.amazon.com/snowball/latest/developer-guide/using-ec2.html">Using
         * Amazon EC2 Compute Instances</a> in the <i>AWS Snowball Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ListCompatibleImages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCompatibleImagesOutcomeCallable ListCompatibleImagesCallable(const Model::ListCompatibleImagesRequest& request) const;

        /**
         * <p>This action returns a list of the different Amazon EC2 Amazon Machine Images
         * (AMIs) that are owned by your AWS account that would be supported for use on
         * <code>EDGE</code>, <code>EDGE_C</code>, and <code>EDGE_CG</code> devices. For
         * more information on compatible AMIs, see <a
         * href="http://docs.aws.amazon.com/snowball/latest/developer-guide/using-ec2.html">Using
         * Amazon EC2 Compute Instances</a> in the <i>AWS Snowball Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ListCompatibleImages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCompatibleImagesAsync(const Model::ListCompatibleImagesRequest& request, const ListCompatibleImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <code>JobListEntry</code> objects of the specified
         * length. Each <code>JobListEntry</code> object contains a job's state, a job's
         * ID, and a value that indicates whether the job is a job part, in the case of
         * export jobs. Calling this API action in one of the US regions will return jobs
         * from the list of all jobs associated with this account in all US
         * regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ListJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * <p>Returns an array of <code>JobListEntry</code> objects of the specified
         * length. Each <code>JobListEntry</code> object contains a job's state, a job's
         * ID, and a value that indicates whether the job is a job part, in the case of
         * export jobs. Calling this API action in one of the US regions will return jobs
         * from the list of all jobs associated with this account in all US
         * regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ListJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobsOutcomeCallable ListJobsCallable(const Model::ListJobsRequest& request) const;

        /**
         * <p>Returns an array of <code>JobListEntry</code> objects of the specified
         * length. Each <code>JobListEntry</code> object contains a job's state, a job's
         * ID, and a value that indicates whether the job is a job part, in the case of
         * export jobs. Calling this API action in one of the US regions will return jobs
         * from the list of all jobs associated with this account in all US
         * regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ListJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobsAsync(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>While a cluster's <code>ClusterState</code> value is in the
         * <code>AwaitingQuorum</code> state, you can update some of the information
         * associated with a cluster. Once the cluster changes to a different job state,
         * usually 60 minutes after the cluster being created, this action is no longer
         * available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/UpdateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClusterOutcome UpdateCluster(const Model::UpdateClusterRequest& request) const;

        /**
         * <p>While a cluster's <code>ClusterState</code> value is in the
         * <code>AwaitingQuorum</code> state, you can update some of the information
         * associated with a cluster. Once the cluster changes to a different job state,
         * usually 60 minutes after the cluster being created, this action is no longer
         * available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/UpdateCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateClusterOutcomeCallable UpdateClusterCallable(const Model::UpdateClusterRequest& request) const;

        /**
         * <p>While a cluster's <code>ClusterState</code> value is in the
         * <code>AwaitingQuorum</code> state, you can update some of the information
         * associated with a cluster. Once the cluster changes to a different job state,
         * usually 60 minutes after the cluster being created, this action is no longer
         * available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/UpdateCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateClusterAsync(const Model::UpdateClusterRequest& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>While a job's <code>JobState</code> value is <code>New</code>, you can update
         * some of the information associated with a job. Once the job changes to a
         * different job state, usually within 60 minutes of the job being created, this
         * action is no longer available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/UpdateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJobOutcome UpdateJob(const Model::UpdateJobRequest& request) const;

        /**
         * <p>While a job's <code>JobState</code> value is <code>New</code>, you can update
         * some of the information associated with a job. Once the job changes to a
         * different job state, usually within 60 minutes of the job being created, this
         * action is no longer available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/UpdateJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateJobOutcomeCallable UpdateJobCallable(const Model::UpdateJobRequest& request) const;

        /**
         * <p>While a job's <code>JobState</code> value is <code>New</code>, you can update
         * some of the information associated with a job. Once the job changes to a
         * different job state, usually within 60 minutes of the job being created, this
         * action is no longer available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/UpdateJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateJobAsync(const Model::UpdateJobRequest& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelClusterAsyncHelper(const Model::CancelClusterRequest& request, const CancelClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelJobAsyncHelper(const Model::CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAddressAsyncHelper(const Model::CreateAddressRequest& request, const CreateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateClusterAsyncHelper(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateJobAsyncHelper(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAddressAsyncHelper(const Model::DescribeAddressRequest& request, const DescribeAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAddressesAsyncHelper(const Model::DescribeAddressesRequest& request, const DescribeAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClusterAsyncHelper(const Model::DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeJobAsyncHelper(const Model::DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetJobManifestAsyncHelper(const Model::GetJobManifestRequest& request, const GetJobManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetJobUnlockCodeAsyncHelper(const Model::GetJobUnlockCodeRequest& request, const GetJobUnlockCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSnowballUsageAsyncHelper(const Model::GetSnowballUsageRequest& request, const GetSnowballUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListClusterJobsAsyncHelper(const Model::ListClusterJobsRequest& request, const ListClusterJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListClustersAsyncHelper(const Model::ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCompatibleImagesAsyncHelper(const Model::ListCompatibleImagesRequest& request, const ListCompatibleImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJobsAsyncHelper(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateClusterAsyncHelper(const Model::UpdateClusterRequest& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateJobAsyncHelper(const Model::UpdateJobRequest& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Snowball
} // namespace Aws
