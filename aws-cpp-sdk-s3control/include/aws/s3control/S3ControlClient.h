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
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/DNS.h>
#include <aws/s3control/model/CreateJobResult.h>
#include <aws/s3control/model/DeleteJobTaggingResult.h>
#include <aws/s3control/model/DescribeJobResult.h>
#include <aws/s3control/model/GetAccessPointResult.h>
#include <aws/s3control/model/GetAccessPointPolicyResult.h>
#include <aws/s3control/model/GetAccessPointPolicyStatusResult.h>
#include <aws/s3control/model/GetJobTaggingResult.h>
#include <aws/s3control/model/GetPublicAccessBlockResult.h>
#include <aws/s3control/model/ListAccessPointsResult.h>
#include <aws/s3control/model/ListJobsResult.h>
#include <aws/s3control/model/PutJobTaggingResult.h>
#include <aws/s3control/model/UpdateJobPriorityResult.h>
#include <aws/s3control/model/UpdateJobStatusResult.h>
#include <aws/core/NoResult.h>
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

    namespace Xml
    {
      class XmlDocument;
    } // namespace Xml
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

  namespace S3Control
  {
    namespace Model
    {
        class CreateAccessPointRequest;
        class CreateJobRequest;
        class DeleteAccessPointRequest;
        class DeleteAccessPointPolicyRequest;
        class DeleteJobTaggingRequest;
        class DeletePublicAccessBlockRequest;
        class DescribeJobRequest;
        class GetAccessPointRequest;
        class GetAccessPointPolicyRequest;
        class GetAccessPointPolicyStatusRequest;
        class GetJobTaggingRequest;
        class GetPublicAccessBlockRequest;
        class ListAccessPointsRequest;
        class ListJobsRequest;
        class PutAccessPointPolicyRequest;
        class PutJobTaggingRequest;
        class PutPublicAccessBlockRequest;
        class UpdateJobPriorityRequest;
        class UpdateJobStatusRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<S3ControlErrors>> CreateAccessPointOutcome;
        typedef Aws::Utils::Outcome<CreateJobResult, Aws::Client::AWSError<S3ControlErrors>> CreateJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<S3ControlErrors>> DeleteAccessPointOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<S3ControlErrors>> DeleteAccessPointPolicyOutcome;
        typedef Aws::Utils::Outcome<DeleteJobTaggingResult, Aws::Client::AWSError<S3ControlErrors>> DeleteJobTaggingOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<S3ControlErrors>> DeletePublicAccessBlockOutcome;
        typedef Aws::Utils::Outcome<DescribeJobResult, Aws::Client::AWSError<S3ControlErrors>> DescribeJobOutcome;
        typedef Aws::Utils::Outcome<GetAccessPointResult, Aws::Client::AWSError<S3ControlErrors>> GetAccessPointOutcome;
        typedef Aws::Utils::Outcome<GetAccessPointPolicyResult, Aws::Client::AWSError<S3ControlErrors>> GetAccessPointPolicyOutcome;
        typedef Aws::Utils::Outcome<GetAccessPointPolicyStatusResult, Aws::Client::AWSError<S3ControlErrors>> GetAccessPointPolicyStatusOutcome;
        typedef Aws::Utils::Outcome<GetJobTaggingResult, Aws::Client::AWSError<S3ControlErrors>> GetJobTaggingOutcome;
        typedef Aws::Utils::Outcome<GetPublicAccessBlockResult, Aws::Client::AWSError<S3ControlErrors>> GetPublicAccessBlockOutcome;
        typedef Aws::Utils::Outcome<ListAccessPointsResult, Aws::Client::AWSError<S3ControlErrors>> ListAccessPointsOutcome;
        typedef Aws::Utils::Outcome<ListJobsResult, Aws::Client::AWSError<S3ControlErrors>> ListJobsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<S3ControlErrors>> PutAccessPointPolicyOutcome;
        typedef Aws::Utils::Outcome<PutJobTaggingResult, Aws::Client::AWSError<S3ControlErrors>> PutJobTaggingOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<S3ControlErrors>> PutPublicAccessBlockOutcome;
        typedef Aws::Utils::Outcome<UpdateJobPriorityResult, Aws::Client::AWSError<S3ControlErrors>> UpdateJobPriorityOutcome;
        typedef Aws::Utils::Outcome<UpdateJobStatusResult, Aws::Client::AWSError<S3ControlErrors>> UpdateJobStatusOutcome;

        typedef std::future<CreateAccessPointOutcome> CreateAccessPointOutcomeCallable;
        typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
        typedef std::future<DeleteAccessPointOutcome> DeleteAccessPointOutcomeCallable;
        typedef std::future<DeleteAccessPointPolicyOutcome> DeleteAccessPointPolicyOutcomeCallable;
        typedef std::future<DeleteJobTaggingOutcome> DeleteJobTaggingOutcomeCallable;
        typedef std::future<DeletePublicAccessBlockOutcome> DeletePublicAccessBlockOutcomeCallable;
        typedef std::future<DescribeJobOutcome> DescribeJobOutcomeCallable;
        typedef std::future<GetAccessPointOutcome> GetAccessPointOutcomeCallable;
        typedef std::future<GetAccessPointPolicyOutcome> GetAccessPointPolicyOutcomeCallable;
        typedef std::future<GetAccessPointPolicyStatusOutcome> GetAccessPointPolicyStatusOutcomeCallable;
        typedef std::future<GetJobTaggingOutcome> GetJobTaggingOutcomeCallable;
        typedef std::future<GetPublicAccessBlockOutcome> GetPublicAccessBlockOutcomeCallable;
        typedef std::future<ListAccessPointsOutcome> ListAccessPointsOutcomeCallable;
        typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
        typedef std::future<PutAccessPointPolicyOutcome> PutAccessPointPolicyOutcomeCallable;
        typedef std::future<PutJobTaggingOutcome> PutJobTaggingOutcomeCallable;
        typedef std::future<PutPublicAccessBlockOutcome> PutPublicAccessBlockOutcomeCallable;
        typedef std::future<UpdateJobPriorityOutcome> UpdateJobPriorityOutcomeCallable;
        typedef std::future<UpdateJobStatusOutcome> UpdateJobStatusOutcomeCallable;
    } // namespace Model

    class S3ControlClient;

    typedef std::function<void(const S3ControlClient*, const Model::CreateAccessPointRequest&, const Model::CreateAccessPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccessPointResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::CreateJobRequest&, const Model::CreateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteAccessPointRequest&, const Model::DeleteAccessPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessPointResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteAccessPointPolicyRequest&, const Model::DeleteAccessPointPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessPointPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteJobTaggingRequest&, const Model::DeleteJobTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeletePublicAccessBlockRequest&, const Model::DeletePublicAccessBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePublicAccessBlockResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DescribeJobRequest&, const Model::DescribeJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessPointRequest&, const Model::GetAccessPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPointResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessPointPolicyRequest&, const Model::GetAccessPointPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPointPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessPointPolicyStatusRequest&, const Model::GetAccessPointPolicyStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPointPolicyStatusResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetJobTaggingRequest&, const Model::GetJobTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetPublicAccessBlockRequest&, const Model::GetPublicAccessBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPublicAccessBlockResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListAccessPointsRequest&, const Model::ListAccessPointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessPointsResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutAccessPointPolicyRequest&, const Model::PutAccessPointPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccessPointPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutJobTaggingRequest&, const Model::PutJobTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutJobTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutPublicAccessBlockRequest&, const Model::PutPublicAccessBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPublicAccessBlockResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::UpdateJobPriorityRequest&, const Model::UpdateJobPriorityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobPriorityResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::UpdateJobStatusRequest&, const Model::UpdateJobStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobStatusResponseReceivedHandler;

    /**
     * <p> AWS S3 Control provides access to Amazon S3 control plane operations. </p>
     */
    class AWS_S3CONTROL_API S3ControlClient : public Aws::Client::AWSXMLClient
    {
    public:
        typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3ControlClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3ControlClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        S3ControlClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~S3ControlClient();

        inline virtual const char* GetServiceClientName() const override { return "S3 Control"; }


        /**
         * <p>Creates an access point and associates it with the specified
         * bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateAccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessPointOutcome CreateAccessPoint(const Model::CreateAccessPointRequest& request) const;

        /**
         * <p>Creates an access point and associates it with the specified
         * bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateAccessPoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccessPointOutcomeCallable CreateAccessPointCallable(const Model::CreateAccessPointRequest& request) const;

        /**
         * <p>Creates an access point and associates it with the specified
         * bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateAccessPoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccessPointAsync(const Model::CreateAccessPointRequest& request, const CreateAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon S3 batch operations job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobOutcome CreateJob(const Model::CreateJobRequest& request) const;

        /**
         * <p>Creates an Amazon S3 batch operations job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateJobOutcomeCallable CreateJobCallable(const Model::CreateJobRequest& request) const;

        /**
         * <p>Creates an Amazon S3 batch operations job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateJobAsync(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified access point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteAccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessPointOutcome DeleteAccessPoint(const Model::DeleteAccessPointRequest& request) const;

        /**
         * <p>Deletes the specified access point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteAccessPoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccessPointOutcomeCallable DeleteAccessPointCallable(const Model::DeleteAccessPointRequest& request) const;

        /**
         * <p>Deletes the specified access point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteAccessPoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccessPointAsync(const Model::DeleteAccessPointRequest& request, const DeleteAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the access point policy for the specified access point.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteAccessPointPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessPointPolicyOutcome DeleteAccessPointPolicy(const Model::DeleteAccessPointPolicyRequest& request) const;

        /**
         * <p>Deletes the access point policy for the specified access point.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteAccessPointPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccessPointPolicyOutcomeCallable DeleteAccessPointPolicyCallable(const Model::DeleteAccessPointPolicyRequest& request) const;

        /**
         * <p>Deletes the access point policy for the specified access point.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteAccessPointPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccessPointPolicyAsync(const Model::DeleteAccessPointPolicyRequest& request, const DeleteAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete the tags on a Amazon S3 batch operations job, if any.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteJobTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJobTaggingOutcome DeleteJobTagging(const Model::DeleteJobTaggingRequest& request) const;

        /**
         * <p>Delete the tags on a Amazon S3 batch operations job, if any.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteJobTagging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteJobTaggingOutcomeCallable DeleteJobTaggingCallable(const Model::DeleteJobTaggingRequest& request) const;

        /**
         * <p>Delete the tags on a Amazon S3 batch operations job, if any.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteJobTagging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteJobTaggingAsync(const Model::DeleteJobTaggingRequest& request, const DeleteJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the <code>PublicAccessBlock</code> configuration for an Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeletePublicAccessBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePublicAccessBlockOutcome DeletePublicAccessBlock(const Model::DeletePublicAccessBlockRequest& request) const;

        /**
         * <p>Removes the <code>PublicAccessBlock</code> configuration for an Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeletePublicAccessBlock">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePublicAccessBlockOutcomeCallable DeletePublicAccessBlockCallable(const Model::DeletePublicAccessBlockRequest& request) const;

        /**
         * <p>Removes the <code>PublicAccessBlock</code> configuration for an Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeletePublicAccessBlock">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePublicAccessBlockAsync(const Model::DeletePublicAccessBlockRequest& request, const DeletePublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the configuration parameters and status for a batch operations
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DescribeJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobOutcome DescribeJob(const Model::DescribeJobRequest& request) const;

        /**
         * <p>Retrieves the configuration parameters and status for a batch operations
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DescribeJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJobOutcomeCallable DescribeJobCallable(const Model::DescribeJobRequest& request) const;

        /**
         * <p>Retrieves the configuration parameters and status for a batch operations
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DescribeJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJobAsync(const Model::DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns configuration information about the specified access
         * point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessPointOutcome GetAccessPoint(const Model::GetAccessPointRequest& request) const;

        /**
         * <p>Returns configuration information about the specified access
         * point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccessPointOutcomeCallable GetAccessPointCallable(const Model::GetAccessPointRequest& request) const;

        /**
         * <p>Returns configuration information about the specified access
         * point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccessPointAsync(const Model::GetAccessPointRequest& request, const GetAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the access point policy associated with the specified access
         * point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPointPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessPointPolicyOutcome GetAccessPointPolicy(const Model::GetAccessPointPolicyRequest& request) const;

        /**
         * <p>Returns the access point policy associated with the specified access
         * point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPointPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccessPointPolicyOutcomeCallable GetAccessPointPolicyCallable(const Model::GetAccessPointPolicyRequest& request) const;

        /**
         * <p>Returns the access point policy associated with the specified access
         * point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPointPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccessPointPolicyAsync(const Model::GetAccessPointPolicyRequest& request, const GetAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Indicates whether the specified access point currently has a policy that
         * allows public access. For more information about public access through access
         * points, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-points.html">Managing
         * Data Access with Amazon S3 Access Points</a> in the <i>Amazon Simple Storage
         * Service Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPointPolicyStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessPointPolicyStatusOutcome GetAccessPointPolicyStatus(const Model::GetAccessPointPolicyStatusRequest& request) const;

        /**
         * <p>Indicates whether the specified access point currently has a policy that
         * allows public access. For more information about public access through access
         * points, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-points.html">Managing
         * Data Access with Amazon S3 Access Points</a> in the <i>Amazon Simple Storage
         * Service Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPointPolicyStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccessPointPolicyStatusOutcomeCallable GetAccessPointPolicyStatusCallable(const Model::GetAccessPointPolicyStatusRequest& request) const;

        /**
         * <p>Indicates whether the specified access point currently has a policy that
         * allows public access. For more information about public access through access
         * points, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-points.html">Managing
         * Data Access with Amazon S3 Access Points</a> in the <i>Amazon Simple Storage
         * Service Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPointPolicyStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccessPointPolicyStatusAsync(const Model::GetAccessPointPolicyStatusRequest& request, const GetAccessPointPolicyStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve the tags on a Amazon S3 batch operations job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetJobTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobTaggingOutcome GetJobTagging(const Model::GetJobTaggingRequest& request) const;

        /**
         * <p>Retrieve the tags on a Amazon S3 batch operations job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetJobTagging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobTaggingOutcomeCallable GetJobTaggingCallable(const Model::GetJobTaggingRequest& request) const;

        /**
         * <p>Retrieve the tags on a Amazon S3 batch operations job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetJobTagging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobTaggingAsync(const Model::GetJobTaggingRequest& request, const GetJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the <code>PublicAccessBlock</code> configuration for an Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetPublicAccessBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPublicAccessBlockOutcome GetPublicAccessBlock(const Model::GetPublicAccessBlockRequest& request) const;

        /**
         * <p>Retrieves the <code>PublicAccessBlock</code> configuration for an Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetPublicAccessBlock">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPublicAccessBlockOutcomeCallable GetPublicAccessBlockCallable(const Model::GetPublicAccessBlockRequest& request) const;

        /**
         * <p>Retrieves the <code>PublicAccessBlock</code> configuration for an Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetPublicAccessBlock">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPublicAccessBlockAsync(const Model::GetPublicAccessBlockRequest& request, const GetPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the access points currently associated with the specified
         * bucket. You can retrieve up to 1000 access points per call. If the specified
         * bucket has more than 1000 access points (or the number specified in
         * <code>maxResults</code>, whichever is less), then the response will include a
         * continuation token that you can use to list the additional access
         * points.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListAccessPoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessPointsOutcome ListAccessPoints(const Model::ListAccessPointsRequest& request) const;

        /**
         * <p>Returns a list of the access points currently associated with the specified
         * bucket. You can retrieve up to 1000 access points per call. If the specified
         * bucket has more than 1000 access points (or the number specified in
         * <code>maxResults</code>, whichever is less), then the response will include a
         * continuation token that you can use to list the additional access
         * points.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListAccessPoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccessPointsOutcomeCallable ListAccessPointsCallable(const Model::ListAccessPointsRequest& request) const;

        /**
         * <p>Returns a list of the access points currently associated with the specified
         * bucket. You can retrieve up to 1000 access points per call. If the specified
         * bucket has more than 1000 access points (or the number specified in
         * <code>maxResults</code>, whichever is less), then the response will include a
         * continuation token that you can use to list the additional access
         * points.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListAccessPoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccessPointsAsync(const Model::ListAccessPointsRequest& request, const ListAccessPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists current jobs and jobs that have ended within the last 30 days for the
         * AWS account making the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * <p>Lists current jobs and jobs that have ended within the last 30 days for the
         * AWS account making the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobsOutcomeCallable ListJobsCallable(const Model::ListJobsRequest& request) const;

        /**
         * <p>Lists current jobs and jobs that have ended within the last 30 days for the
         * AWS account making the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobsAsync(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates an access policy with the specified access point. Each access
         * point can have only one policy, so a request made to this API replaces any
         * existing policy associated with the specified access point.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutAccessPointPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccessPointPolicyOutcome PutAccessPointPolicy(const Model::PutAccessPointPolicyRequest& request) const;

        /**
         * <p>Associates an access policy with the specified access point. Each access
         * point can have only one policy, so a request made to this API replaces any
         * existing policy associated with the specified access point.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutAccessPointPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAccessPointPolicyOutcomeCallable PutAccessPointPolicyCallable(const Model::PutAccessPointPolicyRequest& request) const;

        /**
         * <p>Associates an access policy with the specified access point. Each access
         * point can have only one policy, so a request made to this API replaces any
         * existing policy associated with the specified access point.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutAccessPointPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAccessPointPolicyAsync(const Model::PutAccessPointPolicyRequest& request, const PutAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replace the set of tags on a Amazon S3 batch operations job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutJobTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::PutJobTaggingOutcome PutJobTagging(const Model::PutJobTaggingRequest& request) const;

        /**
         * <p>Replace the set of tags on a Amazon S3 batch operations job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutJobTagging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutJobTaggingOutcomeCallable PutJobTaggingCallable(const Model::PutJobTaggingRequest& request) const;

        /**
         * <p>Replace the set of tags on a Amazon S3 batch operations job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutJobTagging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutJobTaggingAsync(const Model::PutJobTaggingRequest& request, const PutJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or modifies the <code>PublicAccessBlock</code> configuration for an
         * Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutPublicAccessBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPublicAccessBlockOutcome PutPublicAccessBlock(const Model::PutPublicAccessBlockRequest& request) const;

        /**
         * <p>Creates or modifies the <code>PublicAccessBlock</code> configuration for an
         * Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutPublicAccessBlock">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPublicAccessBlockOutcomeCallable PutPublicAccessBlockCallable(const Model::PutPublicAccessBlockRequest& request) const;

        /**
         * <p>Creates or modifies the <code>PublicAccessBlock</code> configuration for an
         * Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutPublicAccessBlock">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPublicAccessBlockAsync(const Model::PutPublicAccessBlockRequest& request, const PutPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing job's priority.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/UpdateJobPriority">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJobPriorityOutcome UpdateJobPriority(const Model::UpdateJobPriorityRequest& request) const;

        /**
         * <p>Updates an existing job's priority.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/UpdateJobPriority">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateJobPriorityOutcomeCallable UpdateJobPriorityCallable(const Model::UpdateJobPriorityRequest& request) const;

        /**
         * <p>Updates an existing job's priority.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/UpdateJobPriority">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateJobPriorityAsync(const Model::UpdateJobPriorityRequest& request, const UpdateJobPriorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status for the specified job. Use this operation to confirm that
         * you want to run a job or to cancel an existing job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/UpdateJobStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJobStatusOutcome UpdateJobStatus(const Model::UpdateJobStatusRequest& request) const;

        /**
         * <p>Updates the status for the specified job. Use this operation to confirm that
         * you want to run a job or to cancel an existing job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/UpdateJobStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateJobStatusOutcomeCallable UpdateJobStatusCallable(const Model::UpdateJobStatusRequest& request) const;

        /**
         * <p>Updates the status for the specified job. Use this operation to confirm that
         * you want to run a job or to cancel an existing job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/UpdateJobStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateJobStatusAsync(const Model::UpdateJobStatusRequest& request, const UpdateJobStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        
        void OverrideEndpoint(const Aws::String& endpoint);
    private:
        void init(const Client::ClientConfiguration& clientConfiguration);
        Aws::String ComputeEndpointString(const Aws::String& accountId) const;
        Aws::String ComputeEndpointString() const;

        void CreateAccessPointAsyncHelper(const Model::CreateAccessPointRequest& request, const CreateAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateJobAsyncHelper(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAccessPointAsyncHelper(const Model::DeleteAccessPointRequest& request, const DeleteAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAccessPointPolicyAsyncHelper(const Model::DeleteAccessPointPolicyRequest& request, const DeleteAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteJobTaggingAsyncHelper(const Model::DeleteJobTaggingRequest& request, const DeleteJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePublicAccessBlockAsyncHelper(const Model::DeletePublicAccessBlockRequest& request, const DeletePublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeJobAsyncHelper(const Model::DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccessPointAsyncHelper(const Model::GetAccessPointRequest& request, const GetAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccessPointPolicyAsyncHelper(const Model::GetAccessPointPolicyRequest& request, const GetAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccessPointPolicyStatusAsyncHelper(const Model::GetAccessPointPolicyStatusRequest& request, const GetAccessPointPolicyStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetJobTaggingAsyncHelper(const Model::GetJobTaggingRequest& request, const GetJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPublicAccessBlockAsyncHelper(const Model::GetPublicAccessBlockRequest& request, const GetPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAccessPointsAsyncHelper(const Model::ListAccessPointsRequest& request, const ListAccessPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJobsAsyncHelper(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAccessPointPolicyAsyncHelper(const Model::PutAccessPointPolicyRequest& request, const PutAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutJobTaggingAsyncHelper(const Model::PutJobTaggingRequest& request, const PutJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutPublicAccessBlockAsyncHelper(const Model::PutPublicAccessBlockRequest& request, const PutPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateJobPriorityAsyncHelper(const Model::UpdateJobPriorityRequest& request, const UpdateJobPriorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateJobStatusAsyncHelper(const Model::UpdateJobStatusRequest& request, const UpdateJobStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

        Aws::String m_baseUri;
        Aws::String m_scheme;
        Aws::String m_configScheme;
        std::shared_ptr<Utils::Threading::Executor> m_executor;
    };

  } // namespace S3Control
} // namespace Aws
