/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlErrors.h>
#include <aws/s3control/S3ControlEndpoint.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/DNS.h>
#include <aws/s3control/model/CreateAccessPointResult.h>
#include <aws/s3control/model/CreateBucketResult.h>
#include <aws/s3control/model/CreateJobResult.h>
#include <aws/s3control/model/DeleteJobTaggingResult.h>
#include <aws/s3control/model/DeleteStorageLensConfigurationTaggingResult.h>
#include <aws/s3control/model/DescribeJobResult.h>
#include <aws/s3control/model/GetAccessPointResult.h>
#include <aws/s3control/model/GetAccessPointPolicyResult.h>
#include <aws/s3control/model/GetAccessPointPolicyStatusResult.h>
#include <aws/s3control/model/GetBucketResult.h>
#include <aws/s3control/model/GetBucketLifecycleConfigurationResult.h>
#include <aws/s3control/model/GetBucketPolicyResult.h>
#include <aws/s3control/model/GetBucketTaggingResult.h>
#include <aws/s3control/model/GetJobTaggingResult.h>
#include <aws/s3control/model/GetPublicAccessBlockResult.h>
#include <aws/s3control/model/GetStorageLensConfigurationResult.h>
#include <aws/s3control/model/GetStorageLensConfigurationTaggingResult.h>
#include <aws/s3control/model/ListAccessPointsResult.h>
#include <aws/s3control/model/ListJobsResult.h>
#include <aws/s3control/model/ListRegionalBucketsResult.h>
#include <aws/s3control/model/ListStorageLensConfigurationsResult.h>
#include <aws/s3control/model/PutJobTaggingResult.h>
#include <aws/s3control/model/PutStorageLensConfigurationTaggingResult.h>
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
        class CreateBucketRequest;
        class CreateJobRequest;
        class DeleteAccessPointRequest;
        class DeleteAccessPointPolicyRequest;
        class DeleteBucketRequest;
        class DeleteBucketLifecycleConfigurationRequest;
        class DeleteBucketPolicyRequest;
        class DeleteBucketTaggingRequest;
        class DeleteJobTaggingRequest;
        class DeletePublicAccessBlockRequest;
        class DeleteStorageLensConfigurationRequest;
        class DeleteStorageLensConfigurationTaggingRequest;
        class DescribeJobRequest;
        class GetAccessPointRequest;
        class GetAccessPointPolicyRequest;
        class GetAccessPointPolicyStatusRequest;
        class GetBucketRequest;
        class GetBucketLifecycleConfigurationRequest;
        class GetBucketPolicyRequest;
        class GetBucketTaggingRequest;
        class GetJobTaggingRequest;
        class GetPublicAccessBlockRequest;
        class GetStorageLensConfigurationRequest;
        class GetStorageLensConfigurationTaggingRequest;
        class ListAccessPointsRequest;
        class ListJobsRequest;
        class ListRegionalBucketsRequest;
        class ListStorageLensConfigurationsRequest;
        class PutAccessPointPolicyRequest;
        class PutBucketLifecycleConfigurationRequest;
        class PutBucketPolicyRequest;
        class PutBucketTaggingRequest;
        class PutJobTaggingRequest;
        class PutPublicAccessBlockRequest;
        class PutStorageLensConfigurationRequest;
        class PutStorageLensConfigurationTaggingRequest;
        class UpdateJobPriorityRequest;
        class UpdateJobStatusRequest;

        typedef Aws::Utils::Outcome<CreateAccessPointResult, S3ControlError> CreateAccessPointOutcome;
        typedef Aws::Utils::Outcome<CreateBucketResult, S3ControlError> CreateBucketOutcome;
        typedef Aws::Utils::Outcome<CreateJobResult, S3ControlError> CreateJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteAccessPointOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteAccessPointPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteBucketOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteBucketLifecycleConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteBucketPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteBucketTaggingOutcome;
        typedef Aws::Utils::Outcome<DeleteJobTaggingResult, S3ControlError> DeleteJobTaggingOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeletePublicAccessBlockOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteStorageLensConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteStorageLensConfigurationTaggingResult, S3ControlError> DeleteStorageLensConfigurationTaggingOutcome;
        typedef Aws::Utils::Outcome<DescribeJobResult, S3ControlError> DescribeJobOutcome;
        typedef Aws::Utils::Outcome<GetAccessPointResult, S3ControlError> GetAccessPointOutcome;
        typedef Aws::Utils::Outcome<GetAccessPointPolicyResult, S3ControlError> GetAccessPointPolicyOutcome;
        typedef Aws::Utils::Outcome<GetAccessPointPolicyStatusResult, S3ControlError> GetAccessPointPolicyStatusOutcome;
        typedef Aws::Utils::Outcome<GetBucketResult, S3ControlError> GetBucketOutcome;
        typedef Aws::Utils::Outcome<GetBucketLifecycleConfigurationResult, S3ControlError> GetBucketLifecycleConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetBucketPolicyResult, S3ControlError> GetBucketPolicyOutcome;
        typedef Aws::Utils::Outcome<GetBucketTaggingResult, S3ControlError> GetBucketTaggingOutcome;
        typedef Aws::Utils::Outcome<GetJobTaggingResult, S3ControlError> GetJobTaggingOutcome;
        typedef Aws::Utils::Outcome<GetPublicAccessBlockResult, S3ControlError> GetPublicAccessBlockOutcome;
        typedef Aws::Utils::Outcome<GetStorageLensConfigurationResult, S3ControlError> GetStorageLensConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetStorageLensConfigurationTaggingResult, S3ControlError> GetStorageLensConfigurationTaggingOutcome;
        typedef Aws::Utils::Outcome<ListAccessPointsResult, S3ControlError> ListAccessPointsOutcome;
        typedef Aws::Utils::Outcome<ListJobsResult, S3ControlError> ListJobsOutcome;
        typedef Aws::Utils::Outcome<ListRegionalBucketsResult, S3ControlError> ListRegionalBucketsOutcome;
        typedef Aws::Utils::Outcome<ListStorageLensConfigurationsResult, S3ControlError> ListStorageLensConfigurationsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutAccessPointPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutBucketLifecycleConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutBucketPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutBucketTaggingOutcome;
        typedef Aws::Utils::Outcome<PutJobTaggingResult, S3ControlError> PutJobTaggingOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutPublicAccessBlockOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutStorageLensConfigurationOutcome;
        typedef Aws::Utils::Outcome<PutStorageLensConfigurationTaggingResult, S3ControlError> PutStorageLensConfigurationTaggingOutcome;
        typedef Aws::Utils::Outcome<UpdateJobPriorityResult, S3ControlError> UpdateJobPriorityOutcome;
        typedef Aws::Utils::Outcome<UpdateJobStatusResult, S3ControlError> UpdateJobStatusOutcome;

        typedef std::future<CreateAccessPointOutcome> CreateAccessPointOutcomeCallable;
        typedef std::future<CreateBucketOutcome> CreateBucketOutcomeCallable;
        typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
        typedef std::future<DeleteAccessPointOutcome> DeleteAccessPointOutcomeCallable;
        typedef std::future<DeleteAccessPointPolicyOutcome> DeleteAccessPointPolicyOutcomeCallable;
        typedef std::future<DeleteBucketOutcome> DeleteBucketOutcomeCallable;
        typedef std::future<DeleteBucketLifecycleConfigurationOutcome> DeleteBucketLifecycleConfigurationOutcomeCallable;
        typedef std::future<DeleteBucketPolicyOutcome> DeleteBucketPolicyOutcomeCallable;
        typedef std::future<DeleteBucketTaggingOutcome> DeleteBucketTaggingOutcomeCallable;
        typedef std::future<DeleteJobTaggingOutcome> DeleteJobTaggingOutcomeCallable;
        typedef std::future<DeletePublicAccessBlockOutcome> DeletePublicAccessBlockOutcomeCallable;
        typedef std::future<DeleteStorageLensConfigurationOutcome> DeleteStorageLensConfigurationOutcomeCallable;
        typedef std::future<DeleteStorageLensConfigurationTaggingOutcome> DeleteStorageLensConfigurationTaggingOutcomeCallable;
        typedef std::future<DescribeJobOutcome> DescribeJobOutcomeCallable;
        typedef std::future<GetAccessPointOutcome> GetAccessPointOutcomeCallable;
        typedef std::future<GetAccessPointPolicyOutcome> GetAccessPointPolicyOutcomeCallable;
        typedef std::future<GetAccessPointPolicyStatusOutcome> GetAccessPointPolicyStatusOutcomeCallable;
        typedef std::future<GetBucketOutcome> GetBucketOutcomeCallable;
        typedef std::future<GetBucketLifecycleConfigurationOutcome> GetBucketLifecycleConfigurationOutcomeCallable;
        typedef std::future<GetBucketPolicyOutcome> GetBucketPolicyOutcomeCallable;
        typedef std::future<GetBucketTaggingOutcome> GetBucketTaggingOutcomeCallable;
        typedef std::future<GetJobTaggingOutcome> GetJobTaggingOutcomeCallable;
        typedef std::future<GetPublicAccessBlockOutcome> GetPublicAccessBlockOutcomeCallable;
        typedef std::future<GetStorageLensConfigurationOutcome> GetStorageLensConfigurationOutcomeCallable;
        typedef std::future<GetStorageLensConfigurationTaggingOutcome> GetStorageLensConfigurationTaggingOutcomeCallable;
        typedef std::future<ListAccessPointsOutcome> ListAccessPointsOutcomeCallable;
        typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
        typedef std::future<ListRegionalBucketsOutcome> ListRegionalBucketsOutcomeCallable;
        typedef std::future<ListStorageLensConfigurationsOutcome> ListStorageLensConfigurationsOutcomeCallable;
        typedef std::future<PutAccessPointPolicyOutcome> PutAccessPointPolicyOutcomeCallable;
        typedef std::future<PutBucketLifecycleConfigurationOutcome> PutBucketLifecycleConfigurationOutcomeCallable;
        typedef std::future<PutBucketPolicyOutcome> PutBucketPolicyOutcomeCallable;
        typedef std::future<PutBucketTaggingOutcome> PutBucketTaggingOutcomeCallable;
        typedef std::future<PutJobTaggingOutcome> PutJobTaggingOutcomeCallable;
        typedef std::future<PutPublicAccessBlockOutcome> PutPublicAccessBlockOutcomeCallable;
        typedef std::future<PutStorageLensConfigurationOutcome> PutStorageLensConfigurationOutcomeCallable;
        typedef std::future<PutStorageLensConfigurationTaggingOutcome> PutStorageLensConfigurationTaggingOutcomeCallable;
        typedef std::future<UpdateJobPriorityOutcome> UpdateJobPriorityOutcomeCallable;
        typedef std::future<UpdateJobStatusOutcome> UpdateJobStatusOutcomeCallable;
    } // namespace Model

    class S3ControlClient;

    typedef std::function<void(const S3ControlClient*, const Model::CreateAccessPointRequest&, const Model::CreateAccessPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccessPointResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::CreateBucketRequest&, const Model::CreateBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBucketResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::CreateJobRequest&, const Model::CreateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteAccessPointRequest&, const Model::DeleteAccessPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessPointResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteAccessPointPolicyRequest&, const Model::DeleteAccessPointPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessPointPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteBucketRequest&, const Model::DeleteBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteBucketLifecycleConfigurationRequest&, const Model::DeleteBucketLifecycleConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketLifecycleConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteBucketPolicyRequest&, const Model::DeleteBucketPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteBucketTaggingRequest&, const Model::DeleteBucketTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteJobTaggingRequest&, const Model::DeleteJobTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeletePublicAccessBlockRequest&, const Model::DeletePublicAccessBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePublicAccessBlockResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteStorageLensConfigurationRequest&, const Model::DeleteStorageLensConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStorageLensConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteStorageLensConfigurationTaggingRequest&, const Model::DeleteStorageLensConfigurationTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStorageLensConfigurationTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DescribeJobRequest&, const Model::DescribeJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessPointRequest&, const Model::GetAccessPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPointResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessPointPolicyRequest&, const Model::GetAccessPointPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPointPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessPointPolicyStatusRequest&, const Model::GetAccessPointPolicyStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPointPolicyStatusResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetBucketRequest&, const Model::GetBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetBucketLifecycleConfigurationRequest&, const Model::GetBucketLifecycleConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketLifecycleConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetBucketPolicyRequest&, const Model::GetBucketPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetBucketTaggingRequest&, const Model::GetBucketTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetJobTaggingRequest&, const Model::GetJobTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetPublicAccessBlockRequest&, const Model::GetPublicAccessBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPublicAccessBlockResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetStorageLensConfigurationRequest&, const Model::GetStorageLensConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStorageLensConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetStorageLensConfigurationTaggingRequest&, const Model::GetStorageLensConfigurationTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStorageLensConfigurationTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListAccessPointsRequest&, const Model::ListAccessPointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessPointsResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListRegionalBucketsRequest&, const Model::ListRegionalBucketsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRegionalBucketsResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListStorageLensConfigurationsRequest&, const Model::ListStorageLensConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStorageLensConfigurationsResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutAccessPointPolicyRequest&, const Model::PutAccessPointPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccessPointPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutBucketLifecycleConfigurationRequest&, const Model::PutBucketLifecycleConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketLifecycleConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutBucketPolicyRequest&, const Model::PutBucketPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutBucketTaggingRequest&, const Model::PutBucketTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutJobTaggingRequest&, const Model::PutJobTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutJobTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutPublicAccessBlockRequest&, const Model::PutPublicAccessBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPublicAccessBlockResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutStorageLensConfigurationRequest&, const Model::PutStorageLensConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutStorageLensConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutStorageLensConfigurationTaggingRequest&, const Model::PutStorageLensConfigurationTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutStorageLensConfigurationTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::UpdateJobPriorityRequest&, const Model::UpdateJobPriorityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobPriorityResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::UpdateJobStatusRequest&, const Model::UpdateJobStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobStatusResponseReceivedHandler;

    // Get endpoint, signer region and signer service name after computing the endpoint.
    struct ComputeEndpointResult
    {
      ComputeEndpointResult(const Aws::String& endpoint = "", const Aws::String& signerRegion = "", const Aws::String& signerServiceName = "") :
        endpoint(endpoint), signerRegion(signerRegion), signerServiceName(signerServiceName) {}

      Aws::String endpoint;
      Aws::String signerRegion;
      Aws::String signerServiceName;
    };
    typedef Aws::Utils::Outcome<ComputeEndpointResult, Aws::Client::AWSError<S3ControlErrors>> ComputeEndpointOutcome;

    /**
     * <p> AWS S3 Control provides access to Amazon S3 control plane actions. </p>
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


        /**
         * <p>Creates an access point and associates it with the specified bucket. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-points.html">Managing
         * Data Access with Amazon S3 Access Points</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p/> <p> <b>Using this action with Amazon S3 on
         * Outposts</b> </p> <p>This action: </p> <ul> <li> <p>Requires a virtual private
         * cloud (VPC) configuration as S3 on Outposts only supports VPC style access
         * points.</p> </li> <li> <p>Does not support ACL on S3 on Outposts buckets.</p>
         * </li> <li> <p>Does not support Public Access on S3 on Outposts buckets.</p>
         * </li> <li> <p>Does not support object lock for S3 on Outposts buckets.</p> </li>
         * </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon Simple Storage Service User Guide
         * </i>.</p> <p>All Amazon S3 on Outposts REST API requests for this action require
         * an additional parameter of <code>x-amz-outpost-id</code> to be passed with the
         * request and an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html#API_control_CreateAccessPoint_Examples">Examples</a>
         * section.</p> <p/> <p>The following actions are related to
         * <code>CreateAccessPoint</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html">GetAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html">DeleteAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPoints.html">ListAccessPoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateAccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessPointOutcome CreateAccessPoint(const Model::CreateAccessPointRequest& request) const;

        /**
         * <p>Creates an access point and associates it with the specified bucket. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-points.html">Managing
         * Data Access with Amazon S3 Access Points</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p/> <p> <b>Using this action with Amazon S3 on
         * Outposts</b> </p> <p>This action: </p> <ul> <li> <p>Requires a virtual private
         * cloud (VPC) configuration as S3 on Outposts only supports VPC style access
         * points.</p> </li> <li> <p>Does not support ACL on S3 on Outposts buckets.</p>
         * </li> <li> <p>Does not support Public Access on S3 on Outposts buckets.</p>
         * </li> <li> <p>Does not support object lock for S3 on Outposts buckets.</p> </li>
         * </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon Simple Storage Service User Guide
         * </i>.</p> <p>All Amazon S3 on Outposts REST API requests for this action require
         * an additional parameter of <code>x-amz-outpost-id</code> to be passed with the
         * request and an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html#API_control_CreateAccessPoint_Examples">Examples</a>
         * section.</p> <p/> <p>The following actions are related to
         * <code>CreateAccessPoint</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html">GetAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html">DeleteAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPoints.html">ListAccessPoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateAccessPoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccessPointOutcomeCallable CreateAccessPointCallable(const Model::CreateAccessPointRequest& request) const;

        /**
         * <p>Creates an access point and associates it with the specified bucket. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-points.html">Managing
         * Data Access with Amazon S3 Access Points</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p/> <p> <b>Using this action with Amazon S3 on
         * Outposts</b> </p> <p>This action: </p> <ul> <li> <p>Requires a virtual private
         * cloud (VPC) configuration as S3 on Outposts only supports VPC style access
         * points.</p> </li> <li> <p>Does not support ACL on S3 on Outposts buckets.</p>
         * </li> <li> <p>Does not support Public Access on S3 on Outposts buckets.</p>
         * </li> <li> <p>Does not support object lock for S3 on Outposts buckets.</p> </li>
         * </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon Simple Storage Service User Guide
         * </i>.</p> <p>All Amazon S3 on Outposts REST API requests for this action require
         * an additional parameter of <code>x-amz-outpost-id</code> to be passed with the
         * request and an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html#API_control_CreateAccessPoint_Examples">Examples</a>
         * section.</p> <p/> <p>The following actions are related to
         * <code>CreateAccessPoint</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html">GetAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html">DeleteAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPoints.html">ListAccessPoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateAccessPoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccessPointAsync(const Model::CreateAccessPointRequest& request, const CreateAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This action creates an Amazon S3 on Outposts bucket. To create an S3
         * bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">Create
         * Bucket</a> in the <i>Amazon Simple Storage Service API</i>. </p> 
         * <p>Creates a new Outposts bucket. By creating the bucket, you become the bucket
         * owner. To create an Outposts bucket, you must have S3 on Outposts. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>Not every string is an acceptable bucket name. For information
         * on bucket naming restrictions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/BucketRestrictions.html#bucketnamingrules">Working
         * with Amazon S3 Buckets</a>.</p> <p>S3 on Outposts buckets support:</p> <ul> <li>
         * <p>Tags</p> </li> <li> <p>LifecycleConfigurations for deleting expired
         * objects</p> </li> </ul> <p>For a list of Amazon S3 features not supported by
         * Amazon S3 on Outposts, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3OnOutpostsRestrictionsLimitations.html#S3OnOutpostsFeatureLimitations">Unsupported
         * Amazon S3 features</a>.</p> <p>For an example of the request syntax for Amazon
         * S3 on Outposts that uses the S3 on Outposts endpoint hostname prefix and
         * <code>x-amz-outpost-id</code> in your API request, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateBucket.html#API_control_CreateBucket_Examples">Examples</a>
         * section.</p> <p>The following actions are related to <code>CreateBucket</code>
         * for Amazon S3 on Outposts:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucket.html">GetBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html">PutAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBucketOutcome CreateBucket(const Model::CreateBucketRequest& request) const;

        /**
         *  <p>This action creates an Amazon S3 on Outposts bucket. To create an S3
         * bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">Create
         * Bucket</a> in the <i>Amazon Simple Storage Service API</i>. </p> 
         * <p>Creates a new Outposts bucket. By creating the bucket, you become the bucket
         * owner. To create an Outposts bucket, you must have S3 on Outposts. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>Not every string is an acceptable bucket name. For information
         * on bucket naming restrictions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/BucketRestrictions.html#bucketnamingrules">Working
         * with Amazon S3 Buckets</a>.</p> <p>S3 on Outposts buckets support:</p> <ul> <li>
         * <p>Tags</p> </li> <li> <p>LifecycleConfigurations for deleting expired
         * objects</p> </li> </ul> <p>For a list of Amazon S3 features not supported by
         * Amazon S3 on Outposts, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3OnOutpostsRestrictionsLimitations.html#S3OnOutpostsFeatureLimitations">Unsupported
         * Amazon S3 features</a>.</p> <p>For an example of the request syntax for Amazon
         * S3 on Outposts that uses the S3 on Outposts endpoint hostname prefix and
         * <code>x-amz-outpost-id</code> in your API request, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateBucket.html#API_control_CreateBucket_Examples">Examples</a>
         * section.</p> <p>The following actions are related to <code>CreateBucket</code>
         * for Amazon S3 on Outposts:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucket.html">GetBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html">PutAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateBucket">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBucketOutcomeCallable CreateBucketCallable(const Model::CreateBucketRequest& request) const;

        /**
         *  <p>This action creates an Amazon S3 on Outposts bucket. To create an S3
         * bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">Create
         * Bucket</a> in the <i>Amazon Simple Storage Service API</i>. </p> 
         * <p>Creates a new Outposts bucket. By creating the bucket, you become the bucket
         * owner. To create an Outposts bucket, you must have S3 on Outposts. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>Not every string is an acceptable bucket name. For information
         * on bucket naming restrictions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/BucketRestrictions.html#bucketnamingrules">Working
         * with Amazon S3 Buckets</a>.</p> <p>S3 on Outposts buckets support:</p> <ul> <li>
         * <p>Tags</p> </li> <li> <p>LifecycleConfigurations for deleting expired
         * objects</p> </li> </ul> <p>For a list of Amazon S3 features not supported by
         * Amazon S3 on Outposts, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3OnOutpostsRestrictionsLimitations.html#S3OnOutpostsFeatureLimitations">Unsupported
         * Amazon S3 features</a>.</p> <p>For an example of the request syntax for Amazon
         * S3 on Outposts that uses the S3 on Outposts endpoint hostname prefix and
         * <code>x-amz-outpost-id</code> in your API request, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateBucket.html#API_control_CreateBucket_Examples">Examples</a>
         * section.</p> <p>The following actions are related to <code>CreateBucket</code>
         * for Amazon S3 on Outposts:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucket.html">GetBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html">PutAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateBucket">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBucketAsync(const Model::CreateBucketRequest& request, const CreateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You can use S3 Batch Operations to perform large-scale batch actions on
         * Amazon S3 objects. Batch Operations can run a single action on lists of Amazon
         * S3 objects that you specify. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-basics.html">S3
         * Batch Operations</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p>
         * <p>This action creates a S3 Batch Operations job.</p> <p/> <p>Related actions
         * include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobPriority.html">UpdateJobPriority</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_JobOperation.html">JobOperation</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobOutcome CreateJob(const Model::CreateJobRequest& request) const;

        /**
         * <p>You can use S3 Batch Operations to perform large-scale batch actions on
         * Amazon S3 objects. Batch Operations can run a single action on lists of Amazon
         * S3 objects that you specify. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-basics.html">S3
         * Batch Operations</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p>
         * <p>This action creates a S3 Batch Operations job.</p> <p/> <p>Related actions
         * include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobPriority.html">UpdateJobPriority</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_JobOperation.html">JobOperation</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateJobOutcomeCallable CreateJobCallable(const Model::CreateJobRequest& request) const;

        /**
         * <p>You can use S3 Batch Operations to perform large-scale batch actions on
         * Amazon S3 objects. Batch Operations can run a single action on lists of Amazon
         * S3 objects that you specify. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-basics.html">S3
         * Batch Operations</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p>
         * <p>This action creates a S3 Batch Operations job.</p> <p/> <p>Related actions
         * include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobPriority.html">UpdateJobPriority</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_JobOperation.html">JobOperation</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateJobAsync(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified access point.</p> <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html#API_control_DeleteAccessPoint_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>DeleteAccessPoint</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html">GetAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPoints.html">ListAccessPoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteAccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessPointOutcome DeleteAccessPoint(const Model::DeleteAccessPointRequest& request) const;

        /**
         * <p>Deletes the specified access point.</p> <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html#API_control_DeleteAccessPoint_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>DeleteAccessPoint</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html">GetAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPoints.html">ListAccessPoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteAccessPoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccessPointOutcomeCallable DeleteAccessPointCallable(const Model::DeleteAccessPointRequest& request) const;

        /**
         * <p>Deletes the specified access point.</p> <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html#API_control_DeleteAccessPoint_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>DeleteAccessPoint</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html">GetAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPoints.html">ListAccessPoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteAccessPoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccessPointAsync(const Model::DeleteAccessPointRequest& request, const DeleteAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the access point policy for the specified access point.</p> <p/>
         * <p>All Amazon S3 on Outposts REST API requests for this action require an
         * additional parameter of <code>x-amz-outpost-id</code> to be passed with the
         * request and an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicy.html#API_control_DeleteAccessPointPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>DeleteAccessPointPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html">PutAccessPointPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointPolicy.html">GetAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteAccessPointPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessPointPolicyOutcome DeleteAccessPointPolicy(const Model::DeleteAccessPointPolicyRequest& request) const;

        /**
         * <p>Deletes the access point policy for the specified access point.</p> <p/>
         * <p>All Amazon S3 on Outposts REST API requests for this action require an
         * additional parameter of <code>x-amz-outpost-id</code> to be passed with the
         * request and an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicy.html#API_control_DeleteAccessPointPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>DeleteAccessPointPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html">PutAccessPointPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointPolicy.html">GetAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteAccessPointPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccessPointPolicyOutcomeCallable DeleteAccessPointPolicyCallable(const Model::DeleteAccessPointPolicyRequest& request) const;

        /**
         * <p>Deletes the access point policy for the specified access point.</p> <p/>
         * <p>All Amazon S3 on Outposts REST API requests for this action require an
         * additional parameter of <code>x-amz-outpost-id</code> to be passed with the
         * request and an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicy.html#API_control_DeleteAccessPointPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>DeleteAccessPointPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html">PutAccessPointPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointPolicy.html">GetAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteAccessPointPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccessPointPolicyAsync(const Model::DeleteAccessPointPolicyRequest& request, const DeleteAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This action deletes an Amazon S3 on Outposts bucket. To delete an S3
         * bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Deletes the
         * Amazon S3 on Outposts bucket. All objects (including all object versions and
         * delete markers) in the bucket must be deleted before the bucket itself can be
         * deleted. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>All Amazon S3 on Outposts REST API requests for this action
         * require an additional parameter of <code>x-amz-outpost-id</code> to be passed
         * with the request and an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucket.html#API_control_DeleteBucket_Examples">Examples</a>
         * section.</p> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucket.html">GetBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketOutcome DeleteBucket(const Model::DeleteBucketRequest& request) const;

        /**
         *  <p>This action deletes an Amazon S3 on Outposts bucket. To delete an S3
         * bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Deletes the
         * Amazon S3 on Outposts bucket. All objects (including all object versions and
         * delete markers) in the bucket must be deleted before the bucket itself can be
         * deleted. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>All Amazon S3 on Outposts REST API requests for this action
         * require an additional parameter of <code>x-amz-outpost-id</code> to be passed
         * with the request and an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucket.html#API_control_DeleteBucket_Examples">Examples</a>
         * section.</p> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucket.html">GetBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteBucket">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketOutcomeCallable DeleteBucketCallable(const Model::DeleteBucketRequest& request) const;

        /**
         *  <p>This action deletes an Amazon S3 on Outposts bucket. To delete an S3
         * bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Deletes the
         * Amazon S3 on Outposts bucket. All objects (including all object versions and
         * delete markers) in the bucket must be deleted before the bucket itself can be
         * deleted. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>All Amazon S3 on Outposts REST API requests for this action
         * require an additional parameter of <code>x-amz-outpost-id</code> to be passed
         * with the request and an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucket.html#API_control_DeleteBucket_Examples">Examples</a>
         * section.</p> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucket.html">GetBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteBucket">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketAsync(const Model::DeleteBucketRequest& request, const DeleteBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This action deletes an Amazon S3 on Outposts bucket's lifecycle
         * configuration. To delete an S3 bucket's lifecycle configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketLifecycle.html">DeleteBucketLifecycle</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Deletes the
         * lifecycle configuration from the specified Outposts bucket. Amazon S3 on
         * Outposts removes all the lifecycle configuration rules in the lifecycle
         * subresource associated with the bucket. Your objects never expire, and Amazon S3
         * on Outposts no longer automatically deletes any objects on the basis of rules
         * contained in the deleted lifecycle configuration. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>To use this action, you must have permission to perform the
         * <code>s3-outposts:DeleteLifecycleConfiguration</code> action. By default, the
         * bucket owner has this permission and the Outposts bucket owner can grant this
         * permission to others.</p> <p>All Amazon S3 on Outposts REST API requests for
         * this action require an additional parameter of <code>x-amz-outpost-id</code> to
         * be passed with the request and an S3 on Outposts endpoint hostname prefix
         * instead of <code>s3-control</code>. For an example of the request syntax for
         * Amazon S3 on Outposts that uses the S3 on Outposts endpoint hostname prefix and
         * the <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketLifecycleConfiguration.html#API_control_DeleteBucketLifecycleConfiguration_Examples">Examples</a>
         * section.</p> <p>For more information about object expiration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/intro-lifecycle-rules.html#intro-lifecycle-rules-actions">Elements
         * to Describe Lifecycle Actions</a>.</p> <p>Related actions include:</p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteBucketLifecycleConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketLifecycleConfigurationOutcome DeleteBucketLifecycleConfiguration(const Model::DeleteBucketLifecycleConfigurationRequest& request) const;

        /**
         *  <p>This action deletes an Amazon S3 on Outposts bucket's lifecycle
         * configuration. To delete an S3 bucket's lifecycle configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketLifecycle.html">DeleteBucketLifecycle</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Deletes the
         * lifecycle configuration from the specified Outposts bucket. Amazon S3 on
         * Outposts removes all the lifecycle configuration rules in the lifecycle
         * subresource associated with the bucket. Your objects never expire, and Amazon S3
         * on Outposts no longer automatically deletes any objects on the basis of rules
         * contained in the deleted lifecycle configuration. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>To use this action, you must have permission to perform the
         * <code>s3-outposts:DeleteLifecycleConfiguration</code> action. By default, the
         * bucket owner has this permission and the Outposts bucket owner can grant this
         * permission to others.</p> <p>All Amazon S3 on Outposts REST API requests for
         * this action require an additional parameter of <code>x-amz-outpost-id</code> to
         * be passed with the request and an S3 on Outposts endpoint hostname prefix
         * instead of <code>s3-control</code>. For an example of the request syntax for
         * Amazon S3 on Outposts that uses the S3 on Outposts endpoint hostname prefix and
         * the <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketLifecycleConfiguration.html#API_control_DeleteBucketLifecycleConfiguration_Examples">Examples</a>
         * section.</p> <p>For more information about object expiration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/intro-lifecycle-rules.html#intro-lifecycle-rules-actions">Elements
         * to Describe Lifecycle Actions</a>.</p> <p>Related actions include:</p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteBucketLifecycleConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketLifecycleConfigurationOutcomeCallable DeleteBucketLifecycleConfigurationCallable(const Model::DeleteBucketLifecycleConfigurationRequest& request) const;

        /**
         *  <p>This action deletes an Amazon S3 on Outposts bucket's lifecycle
         * configuration. To delete an S3 bucket's lifecycle configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketLifecycle.html">DeleteBucketLifecycle</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Deletes the
         * lifecycle configuration from the specified Outposts bucket. Amazon S3 on
         * Outposts removes all the lifecycle configuration rules in the lifecycle
         * subresource associated with the bucket. Your objects never expire, and Amazon S3
         * on Outposts no longer automatically deletes any objects on the basis of rules
         * contained in the deleted lifecycle configuration. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>To use this action, you must have permission to perform the
         * <code>s3-outposts:DeleteLifecycleConfiguration</code> action. By default, the
         * bucket owner has this permission and the Outposts bucket owner can grant this
         * permission to others.</p> <p>All Amazon S3 on Outposts REST API requests for
         * this action require an additional parameter of <code>x-amz-outpost-id</code> to
         * be passed with the request and an S3 on Outposts endpoint hostname prefix
         * instead of <code>s3-control</code>. For an example of the request syntax for
         * Amazon S3 on Outposts that uses the S3 on Outposts endpoint hostname prefix and
         * the <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketLifecycleConfiguration.html#API_control_DeleteBucketLifecycleConfiguration_Examples">Examples</a>
         * section.</p> <p>For more information about object expiration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/intro-lifecycle-rules.html#intro-lifecycle-rules-actions">Elements
         * to Describe Lifecycle Actions</a>.</p> <p>Related actions include:</p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteBucketLifecycleConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketLifecycleConfigurationAsync(const Model::DeleteBucketLifecycleConfigurationRequest& request, const DeleteBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This action deletes an Amazon S3 on Outposts bucket policy. To delete
         * an S3 bucket policy, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketPolicy.html">DeleteBucketPolicy</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>This
         * implementation of the DELETE action uses the policy subresource to delete the
         * policy of a specified Amazon S3 on Outposts bucket. If you are using an identity
         * other than the root user of the AWS account that owns the bucket, the calling
         * identity must have the <code>s3-outposts:DeleteBucketPolicy</code> permissions
         * on the specified Outposts bucket and belong to the bucket owner's account to use
         * this action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>If you don't have <code>DeleteBucketPolicy</code> permissions,
         * Amazon S3 returns a <code>403 Access Denied</code> error. If you have the
         * correct permissions, but you're not using an identity that belongs to the bucket
         * owner's account, Amazon S3 returns a <code>405 Method Not Allowed</code> error.
         * </p>  <p>As a security precaution, the root user of the AWS account
         * that owns a bucket can always use this action, even if the policy explicitly
         * denies the root user the ability to perform this action.</p>  <p>For
         * more information about bucket policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and User Policies</a>. </p> <p>All Amazon S3 on Outposts REST
         * API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketPolicy.html#API_control_DeleteBucketPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>DeleteBucketPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketPolicy.html">GetBucketPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketPolicy.html">PutBucketPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteBucketPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketPolicyOutcome DeleteBucketPolicy(const Model::DeleteBucketPolicyRequest& request) const;

        /**
         *  <p>This action deletes an Amazon S3 on Outposts bucket policy. To delete
         * an S3 bucket policy, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketPolicy.html">DeleteBucketPolicy</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>This
         * implementation of the DELETE action uses the policy subresource to delete the
         * policy of a specified Amazon S3 on Outposts bucket. If you are using an identity
         * other than the root user of the AWS account that owns the bucket, the calling
         * identity must have the <code>s3-outposts:DeleteBucketPolicy</code> permissions
         * on the specified Outposts bucket and belong to the bucket owner's account to use
         * this action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>If you don't have <code>DeleteBucketPolicy</code> permissions,
         * Amazon S3 returns a <code>403 Access Denied</code> error. If you have the
         * correct permissions, but you're not using an identity that belongs to the bucket
         * owner's account, Amazon S3 returns a <code>405 Method Not Allowed</code> error.
         * </p>  <p>As a security precaution, the root user of the AWS account
         * that owns a bucket can always use this action, even if the policy explicitly
         * denies the root user the ability to perform this action.</p>  <p>For
         * more information about bucket policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and User Policies</a>. </p> <p>All Amazon S3 on Outposts REST
         * API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketPolicy.html#API_control_DeleteBucketPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>DeleteBucketPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketPolicy.html">GetBucketPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketPolicy.html">PutBucketPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteBucketPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketPolicyOutcomeCallable DeleteBucketPolicyCallable(const Model::DeleteBucketPolicyRequest& request) const;

        /**
         *  <p>This action deletes an Amazon S3 on Outposts bucket policy. To delete
         * an S3 bucket policy, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketPolicy.html">DeleteBucketPolicy</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>This
         * implementation of the DELETE action uses the policy subresource to delete the
         * policy of a specified Amazon S3 on Outposts bucket. If you are using an identity
         * other than the root user of the AWS account that owns the bucket, the calling
         * identity must have the <code>s3-outposts:DeleteBucketPolicy</code> permissions
         * on the specified Outposts bucket and belong to the bucket owner's account to use
         * this action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>If you don't have <code>DeleteBucketPolicy</code> permissions,
         * Amazon S3 returns a <code>403 Access Denied</code> error. If you have the
         * correct permissions, but you're not using an identity that belongs to the bucket
         * owner's account, Amazon S3 returns a <code>405 Method Not Allowed</code> error.
         * </p>  <p>As a security precaution, the root user of the AWS account
         * that owns a bucket can always use this action, even if the policy explicitly
         * denies the root user the ability to perform this action.</p>  <p>For
         * more information about bucket policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and User Policies</a>. </p> <p>All Amazon S3 on Outposts REST
         * API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketPolicy.html#API_control_DeleteBucketPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>DeleteBucketPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketPolicy.html">GetBucketPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketPolicy.html">PutBucketPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteBucketPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketPolicyAsync(const Model::DeleteBucketPolicyRequest& request, const DeleteBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This action deletes an Amazon S3 on Outposts bucket's tags. To delete
         * an S3 bucket tags, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketTagging.html">DeleteBucketTagging</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Deletes the
         * tags from the Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>To use this action, you must have permission to perform the
         * <code>PutBucketTagging</code> action. By default, the bucket owner has this
         * permission and can grant this permission to others. </p> <p>All Amazon S3 on
         * Outposts REST API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketTagging.html#API_control_DeleteBucketTagging_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>DeleteBucketTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketTagging.html">GetBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketTagging.html">PutBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteBucketTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketTaggingOutcome DeleteBucketTagging(const Model::DeleteBucketTaggingRequest& request) const;

        /**
         *  <p>This action deletes an Amazon S3 on Outposts bucket's tags. To delete
         * an S3 bucket tags, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketTagging.html">DeleteBucketTagging</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Deletes the
         * tags from the Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>To use this action, you must have permission to perform the
         * <code>PutBucketTagging</code> action. By default, the bucket owner has this
         * permission and can grant this permission to others. </p> <p>All Amazon S3 on
         * Outposts REST API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketTagging.html#API_control_DeleteBucketTagging_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>DeleteBucketTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketTagging.html">GetBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketTagging.html">PutBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteBucketTagging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketTaggingOutcomeCallable DeleteBucketTaggingCallable(const Model::DeleteBucketTaggingRequest& request) const;

        /**
         *  <p>This action deletes an Amazon S3 on Outposts bucket's tags. To delete
         * an S3 bucket tags, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketTagging.html">DeleteBucketTagging</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Deletes the
         * tags from the Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>To use this action, you must have permission to perform the
         * <code>PutBucketTagging</code> action. By default, the bucket owner has this
         * permission and can grant this permission to others. </p> <p>All Amazon S3 on
         * Outposts REST API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketTagging.html#API_control_DeleteBucketTagging_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>DeleteBucketTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketTagging.html">GetBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketTagging.html">PutBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteBucketTagging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketTaggingAsync(const Model::DeleteBucketTaggingRequest& request, const DeleteBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the entire tag set from the specified S3 Batch Operations job. To use
         * this operation, you must have permission to perform the
         * <code>s3:DeleteJobTagging</code> action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-managing-jobs.html#batch-ops-job-tags">Controlling
         * access and labeling jobs using tags</a> in the <i>Amazon Simple Storage Service
         * User Guide</i>.</p> <p/> <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetJobTagging.html">GetJobTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutJobTagging.html">PutJobTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteJobTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJobTaggingOutcome DeleteJobTagging(const Model::DeleteJobTaggingRequest& request) const;

        /**
         * <p>Removes the entire tag set from the specified S3 Batch Operations job. To use
         * this operation, you must have permission to perform the
         * <code>s3:DeleteJobTagging</code> action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-managing-jobs.html#batch-ops-job-tags">Controlling
         * access and labeling jobs using tags</a> in the <i>Amazon Simple Storage Service
         * User Guide</i>.</p> <p/> <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetJobTagging.html">GetJobTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutJobTagging.html">PutJobTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteJobTagging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteJobTaggingOutcomeCallable DeleteJobTaggingCallable(const Model::DeleteJobTaggingRequest& request) const;

        /**
         * <p>Removes the entire tag set from the specified S3 Batch Operations job. To use
         * this operation, you must have permission to perform the
         * <code>s3:DeleteJobTagging</code> action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-managing-jobs.html#batch-ops-job-tags">Controlling
         * access and labeling jobs using tags</a> in the <i>Amazon Simple Storage Service
         * User Guide</i>.</p> <p/> <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetJobTagging.html">GetJobTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutJobTagging.html">PutJobTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteJobTagging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteJobTaggingAsync(const Model::DeleteJobTaggingRequest& request, const DeleteJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the <code>PublicAccessBlock</code> configuration for an AWS account.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">
         * Using Amazon S3 block public access</a>.</p> <p>Related actions include:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeletePublicAccessBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePublicAccessBlockOutcome DeletePublicAccessBlock(const Model::DeletePublicAccessBlockRequest& request) const;

        /**
         * <p>Removes the <code>PublicAccessBlock</code> configuration for an AWS account.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">
         * Using Amazon S3 block public access</a>.</p> <p>Related actions include:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeletePublicAccessBlock">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePublicAccessBlockOutcomeCallable DeletePublicAccessBlockCallable(const Model::DeletePublicAccessBlockRequest& request) const;

        /**
         * <p>Removes the <code>PublicAccessBlock</code> configuration for an AWS account.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">
         * Using Amazon S3 block public access</a>.</p> <p>Related actions include:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeletePublicAccessBlock">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePublicAccessBlockAsync(const Model::DeletePublicAccessBlockRequest& request, const DeletePublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the Amazon S3 Storage Lens configuration. For more information about
         * S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon Simple Storage Service User Guide</i>.</p>  <p>To use this
         * action, you must have permission to perform the
         * <code>s3:DeleteStorageLensConfiguration</code> action. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteStorageLensConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStorageLensConfigurationOutcome DeleteStorageLensConfiguration(const Model::DeleteStorageLensConfigurationRequest& request) const;

        /**
         * <p>Deletes the Amazon S3 Storage Lens configuration. For more information about
         * S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon Simple Storage Service User Guide</i>.</p>  <p>To use this
         * action, you must have permission to perform the
         * <code>s3:DeleteStorageLensConfiguration</code> action. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteStorageLensConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStorageLensConfigurationOutcomeCallable DeleteStorageLensConfigurationCallable(const Model::DeleteStorageLensConfigurationRequest& request) const;

        /**
         * <p>Deletes the Amazon S3 Storage Lens configuration. For more information about
         * S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon Simple Storage Service User Guide</i>.</p>  <p>To use this
         * action, you must have permission to perform the
         * <code>s3:DeleteStorageLensConfiguration</code> action. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteStorageLensConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStorageLensConfigurationAsync(const Model::DeleteStorageLensConfigurationRequest& request, const DeleteStorageLensConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the Amazon S3 Storage Lens configuration tags. For more information
         * about S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon Simple Storage Service User Guide</i>.</p>  <p>To use this
         * action, you must have permission to perform the
         * <code>s3:DeleteStorageLensConfigurationTagging</code> action. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteStorageLensConfigurationTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStorageLensConfigurationTaggingOutcome DeleteStorageLensConfigurationTagging(const Model::DeleteStorageLensConfigurationTaggingRequest& request) const;

        /**
         * <p>Deletes the Amazon S3 Storage Lens configuration tags. For more information
         * about S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon Simple Storage Service User Guide</i>.</p>  <p>To use this
         * action, you must have permission to perform the
         * <code>s3:DeleteStorageLensConfigurationTagging</code> action. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteStorageLensConfigurationTagging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStorageLensConfigurationTaggingOutcomeCallable DeleteStorageLensConfigurationTaggingCallable(const Model::DeleteStorageLensConfigurationTaggingRequest& request) const;

        /**
         * <p>Deletes the Amazon S3 Storage Lens configuration tags. For more information
         * about S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon Simple Storage Service User Guide</i>.</p>  <p>To use this
         * action, you must have permission to perform the
         * <code>s3:DeleteStorageLensConfigurationTagging</code> action. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteStorageLensConfigurationTagging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStorageLensConfigurationTaggingAsync(const Model::DeleteStorageLensConfigurationTaggingRequest& request, const DeleteStorageLensConfigurationTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the configuration parameters and status for a Batch Operations job.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-basics.html">S3
         * Batch Operations</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p>
         * <p/> <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobPriority.html">UpdateJobPriority</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DescribeJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobOutcome DescribeJob(const Model::DescribeJobRequest& request) const;

        /**
         * <p>Retrieves the configuration parameters and status for a Batch Operations job.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-basics.html">S3
         * Batch Operations</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p>
         * <p/> <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobPriority.html">UpdateJobPriority</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DescribeJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJobOutcomeCallable DescribeJobCallable(const Model::DescribeJobRequest& request) const;

        /**
         * <p>Retrieves the configuration parameters and status for a Batch Operations job.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-basics.html">S3
         * Batch Operations</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p>
         * <p/> <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobPriority.html">UpdateJobPriority</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DescribeJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJobAsync(const Model::DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns configuration information about the specified access point.</p> <p/>
         * <p>All Amazon S3 on Outposts REST API requests for this action require an
         * additional parameter of <code>x-amz-outpost-id</code> to be passed with the
         * request and an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html#API_control_GetAccessPoint_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>GetAccessPoint</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html">DeleteAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPoints.html">ListAccessPoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessPointOutcome GetAccessPoint(const Model::GetAccessPointRequest& request) const;

        /**
         * <p>Returns configuration information about the specified access point.</p> <p/>
         * <p>All Amazon S3 on Outposts REST API requests for this action require an
         * additional parameter of <code>x-amz-outpost-id</code> to be passed with the
         * request and an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html#API_control_GetAccessPoint_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>GetAccessPoint</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html">DeleteAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPoints.html">ListAccessPoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccessPointOutcomeCallable GetAccessPointCallable(const Model::GetAccessPointRequest& request) const;

        /**
         * <p>Returns configuration information about the specified access point.</p> <p/>
         * <p>All Amazon S3 on Outposts REST API requests for this action require an
         * additional parameter of <code>x-amz-outpost-id</code> to be passed with the
         * request and an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html#API_control_GetAccessPoint_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>GetAccessPoint</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html">DeleteAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPoints.html">ListAccessPoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccessPointAsync(const Model::GetAccessPointRequest& request, const GetAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the access point policy associated with the specified access
         * point.</p> <p>The following actions are related to
         * <code>GetAccessPointPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html">PutAccessPointPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicy.html">DeleteAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPointPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessPointPolicyOutcome GetAccessPointPolicy(const Model::GetAccessPointPolicyRequest& request) const;

        /**
         * <p>Returns the access point policy associated with the specified access
         * point.</p> <p>The following actions are related to
         * <code>GetAccessPointPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html">PutAccessPointPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicy.html">DeleteAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPointPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccessPointPolicyOutcomeCallable GetAccessPointPolicyCallable(const Model::GetAccessPointPolicyRequest& request) const;

        /**
         * <p>Returns the access point policy associated with the specified access
         * point.</p> <p>The following actions are related to
         * <code>GetAccessPointPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html">PutAccessPointPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicy.html">DeleteAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Gets an Amazon S3 on Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html"> Using
         * Amazon S3 on Outposts</a> in the <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>If you are using an identity other than the root user of the
         * AWS account that owns the bucket, the calling identity must have the
         * <code>s3-outposts:GetBucket</code> permissions on the specified bucket and
         * belong to the bucket owner's account in order to use this action. Only users
         * from Outposts bucket owner account with the right permissions can perform
         * actions on an Outposts bucket. </p> <p> If you don't have
         * <code>s3-outposts:GetBucket</code> permissions or you're not using an identity
         * that belongs to the bucket owner's account, Amazon S3 returns a <code>403 Access
         * Denied</code> error.</p> <p>The following actions are related to
         * <code>GetBucket</code> for Amazon S3 on Outposts:</p> <p>All Amazon S3 on
         * Outposts REST API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucket.html#API_control_GetBucket_Examples">Examples</a>
         * section.</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketOutcome GetBucket(const Model::GetBucketRequest& request) const;

        /**
         * <p>Gets an Amazon S3 on Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html"> Using
         * Amazon S3 on Outposts</a> in the <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>If you are using an identity other than the root user of the
         * AWS account that owns the bucket, the calling identity must have the
         * <code>s3-outposts:GetBucket</code> permissions on the specified bucket and
         * belong to the bucket owner's account in order to use this action. Only users
         * from Outposts bucket owner account with the right permissions can perform
         * actions on an Outposts bucket. </p> <p> If you don't have
         * <code>s3-outposts:GetBucket</code> permissions or you're not using an identity
         * that belongs to the bucket owner's account, Amazon S3 returns a <code>403 Access
         * Denied</code> error.</p> <p>The following actions are related to
         * <code>GetBucket</code> for Amazon S3 on Outposts:</p> <p>All Amazon S3 on
         * Outposts REST API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucket.html#API_control_GetBucket_Examples">Examples</a>
         * section.</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetBucket">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketOutcomeCallable GetBucketCallable(const Model::GetBucketRequest& request) const;

        /**
         * <p>Gets an Amazon S3 on Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html"> Using
         * Amazon S3 on Outposts</a> in the <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>If you are using an identity other than the root user of the
         * AWS account that owns the bucket, the calling identity must have the
         * <code>s3-outposts:GetBucket</code> permissions on the specified bucket and
         * belong to the bucket owner's account in order to use this action. Only users
         * from Outposts bucket owner account with the right permissions can perform
         * actions on an Outposts bucket. </p> <p> If you don't have
         * <code>s3-outposts:GetBucket</code> permissions or you're not using an identity
         * that belongs to the bucket owner's account, Amazon S3 returns a <code>403 Access
         * Denied</code> error.</p> <p>The following actions are related to
         * <code>GetBucket</code> for Amazon S3 on Outposts:</p> <p>All Amazon S3 on
         * Outposts REST API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucket.html#API_control_GetBucket_Examples">Examples</a>
         * section.</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetBucket">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketAsync(const Model::GetBucketRequest& request, const GetBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This action gets an Amazon S3 on Outposts bucket's lifecycle
         * configuration. To get an S3 bucket's lifecycle configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Returns the
         * lifecycle configuration information set on the Outposts bucket. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> and for information about lifecycle configuration, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lifecycle-mgmt.html">
         * Object Lifecycle Management</a> in <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>To use this action, you must have permission to perform the
         * <code>s3-outposts:GetLifecycleConfiguration</code> action. The Outposts bucket
         * owner has this permission, by default. The bucket owner can grant this
         * permission to others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>All Amazon S3 on
         * Outposts REST API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketLifecycleConfiguration.html#API_control_GetBucketLifecycleConfiguration_Examples">Examples</a>
         * section.</p> <p> <code>GetBucketLifecycleConfiguration</code> has the following
         * special error:</p> <ul> <li> <p>Error code:
         * <code>NoSuchLifecycleConfiguration</code> </p> <ul> <li> <p>Description: The
         * lifecycle configuration does not exist.</p> </li> <li> <p>HTTP Status Code: 404
         * Not Found</p> </li> <li> <p>SOAP Fault Code Prefix: Client</p> </li> </ul> </li>
         * </ul> <p>The following actions are related to
         * <code>GetBucketLifecycleConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketLifecycleConfiguration.html">DeleteBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetBucketLifecycleConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketLifecycleConfigurationOutcome GetBucketLifecycleConfiguration(const Model::GetBucketLifecycleConfigurationRequest& request) const;

        /**
         *  <p>This action gets an Amazon S3 on Outposts bucket's lifecycle
         * configuration. To get an S3 bucket's lifecycle configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Returns the
         * lifecycle configuration information set on the Outposts bucket. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> and for information about lifecycle configuration, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lifecycle-mgmt.html">
         * Object Lifecycle Management</a> in <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>To use this action, you must have permission to perform the
         * <code>s3-outposts:GetLifecycleConfiguration</code> action. The Outposts bucket
         * owner has this permission, by default. The bucket owner can grant this
         * permission to others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>All Amazon S3 on
         * Outposts REST API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketLifecycleConfiguration.html#API_control_GetBucketLifecycleConfiguration_Examples">Examples</a>
         * section.</p> <p> <code>GetBucketLifecycleConfiguration</code> has the following
         * special error:</p> <ul> <li> <p>Error code:
         * <code>NoSuchLifecycleConfiguration</code> </p> <ul> <li> <p>Description: The
         * lifecycle configuration does not exist.</p> </li> <li> <p>HTTP Status Code: 404
         * Not Found</p> </li> <li> <p>SOAP Fault Code Prefix: Client</p> </li> </ul> </li>
         * </ul> <p>The following actions are related to
         * <code>GetBucketLifecycleConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketLifecycleConfiguration.html">DeleteBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetBucketLifecycleConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketLifecycleConfigurationOutcomeCallable GetBucketLifecycleConfigurationCallable(const Model::GetBucketLifecycleConfigurationRequest& request) const;

        /**
         *  <p>This action gets an Amazon S3 on Outposts bucket's lifecycle
         * configuration. To get an S3 bucket's lifecycle configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Returns the
         * lifecycle configuration information set on the Outposts bucket. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> and for information about lifecycle configuration, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lifecycle-mgmt.html">
         * Object Lifecycle Management</a> in <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>To use this action, you must have permission to perform the
         * <code>s3-outposts:GetLifecycleConfiguration</code> action. The Outposts bucket
         * owner has this permission, by default. The bucket owner can grant this
         * permission to others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>All Amazon S3 on
         * Outposts REST API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketLifecycleConfiguration.html#API_control_GetBucketLifecycleConfiguration_Examples">Examples</a>
         * section.</p> <p> <code>GetBucketLifecycleConfiguration</code> has the following
         * special error:</p> <ul> <li> <p>Error code:
         * <code>NoSuchLifecycleConfiguration</code> </p> <ul> <li> <p>Description: The
         * lifecycle configuration does not exist.</p> </li> <li> <p>HTTP Status Code: 404
         * Not Found</p> </li> <li> <p>SOAP Fault Code Prefix: Client</p> </li> </ul> </li>
         * </ul> <p>The following actions are related to
         * <code>GetBucketLifecycleConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketLifecycleConfiguration.html">DeleteBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetBucketLifecycleConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketLifecycleConfigurationAsync(const Model::GetBucketLifecycleConfigurationRequest& request, const GetBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This action gets a bucket policy for an Amazon S3 on Outposts bucket.
         * To get a policy for an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketPolicy.html">GetBucketPolicy</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Returns the
         * policy of a specified Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>If you are using an identity other than the root user of the
         * AWS account that owns the bucket, the calling identity must have the
         * <code>GetBucketPolicy</code> permissions on the specified bucket and belong to
         * the bucket owner's account in order to use this action.</p> <p>Only users from
         * Outposts bucket owner account with the right permissions can perform actions on
         * an Outposts bucket. If you don't have <code>s3-outposts:GetBucketPolicy</code>
         * permissions or you're not using an identity that belongs to the bucket owner's
         * account, Amazon S3 returns a <code>403 Access Denied</code> error.</p>
         *  <p>As a security precaution, the root user of the AWS account that
         * owns a bucket can always use this action, even if the policy explicitly denies
         * the root user the ability to perform this action.</p>  <p>For more
         * information about bucket policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and User Policies</a>.</p> <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketPolicy.html#API_control_GetBucketPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>GetBucketPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketPolicy.html">PutBucketPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketPolicy.html">DeleteBucketPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetBucketPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketPolicyOutcome GetBucketPolicy(const Model::GetBucketPolicyRequest& request) const;

        /**
         *  <p>This action gets a bucket policy for an Amazon S3 on Outposts bucket.
         * To get a policy for an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketPolicy.html">GetBucketPolicy</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Returns the
         * policy of a specified Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>If you are using an identity other than the root user of the
         * AWS account that owns the bucket, the calling identity must have the
         * <code>GetBucketPolicy</code> permissions on the specified bucket and belong to
         * the bucket owner's account in order to use this action.</p> <p>Only users from
         * Outposts bucket owner account with the right permissions can perform actions on
         * an Outposts bucket. If you don't have <code>s3-outposts:GetBucketPolicy</code>
         * permissions or you're not using an identity that belongs to the bucket owner's
         * account, Amazon S3 returns a <code>403 Access Denied</code> error.</p>
         *  <p>As a security precaution, the root user of the AWS account that
         * owns a bucket can always use this action, even if the policy explicitly denies
         * the root user the ability to perform this action.</p>  <p>For more
         * information about bucket policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and User Policies</a>.</p> <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketPolicy.html#API_control_GetBucketPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>GetBucketPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketPolicy.html">PutBucketPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketPolicy.html">DeleteBucketPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetBucketPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketPolicyOutcomeCallable GetBucketPolicyCallable(const Model::GetBucketPolicyRequest& request) const;

        /**
         *  <p>This action gets a bucket policy for an Amazon S3 on Outposts bucket.
         * To get a policy for an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketPolicy.html">GetBucketPolicy</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Returns the
         * policy of a specified Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>If you are using an identity other than the root user of the
         * AWS account that owns the bucket, the calling identity must have the
         * <code>GetBucketPolicy</code> permissions on the specified bucket and belong to
         * the bucket owner's account in order to use this action.</p> <p>Only users from
         * Outposts bucket owner account with the right permissions can perform actions on
         * an Outposts bucket. If you don't have <code>s3-outposts:GetBucketPolicy</code>
         * permissions or you're not using an identity that belongs to the bucket owner's
         * account, Amazon S3 returns a <code>403 Access Denied</code> error.</p>
         *  <p>As a security precaution, the root user of the AWS account that
         * owns a bucket can always use this action, even if the policy explicitly denies
         * the root user the ability to perform this action.</p>  <p>For more
         * information about bucket policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and User Policies</a>.</p> <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketPolicy.html#API_control_GetBucketPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>GetBucketPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketPolicy.html">PutBucketPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketPolicy.html">DeleteBucketPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetBucketPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketPolicyAsync(const Model::GetBucketPolicyRequest& request, const GetBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This action gets an Amazon S3 on Outposts bucket's tags. To get an S3
         * bucket tags, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketTagging.html">GetBucketTagging</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Returns the tag
         * set associated with the Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>To use this action, you must have permission to perform the
         * <code>GetBucketTagging</code> action. By default, the bucket owner has this
         * permission and can grant this permission to others.</p> <p>
         * <code>GetBucketTagging</code> has the following special error:</p> <ul> <li>
         * <p>Error code: <code>NoSuchTagSetError</code> </p> <ul> <li> <p>Description:
         * There is no tag set associated with the bucket.</p> </li> </ul> </li> </ul>
         * <p>All Amazon S3 on Outposts REST API requests for this action require an
         * additional parameter of <code>x-amz-outpost-id</code> to be passed with the
         * request and an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketTagging.html#API_control_GetBucketTagging_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>GetBucketTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketTagging.html">PutBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketTagging.html">DeleteBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetBucketTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketTaggingOutcome GetBucketTagging(const Model::GetBucketTaggingRequest& request) const;

        /**
         *  <p>This action gets an Amazon S3 on Outposts bucket's tags. To get an S3
         * bucket tags, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketTagging.html">GetBucketTagging</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Returns the tag
         * set associated with the Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>To use this action, you must have permission to perform the
         * <code>GetBucketTagging</code> action. By default, the bucket owner has this
         * permission and can grant this permission to others.</p> <p>
         * <code>GetBucketTagging</code> has the following special error:</p> <ul> <li>
         * <p>Error code: <code>NoSuchTagSetError</code> </p> <ul> <li> <p>Description:
         * There is no tag set associated with the bucket.</p> </li> </ul> </li> </ul>
         * <p>All Amazon S3 on Outposts REST API requests for this action require an
         * additional parameter of <code>x-amz-outpost-id</code> to be passed with the
         * request and an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketTagging.html#API_control_GetBucketTagging_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>GetBucketTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketTagging.html">PutBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketTagging.html">DeleteBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetBucketTagging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketTaggingOutcomeCallable GetBucketTaggingCallable(const Model::GetBucketTaggingRequest& request) const;

        /**
         *  <p>This action gets an Amazon S3 on Outposts bucket's tags. To get an S3
         * bucket tags, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketTagging.html">GetBucketTagging</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Returns the tag
         * set associated with the Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>To use this action, you must have permission to perform the
         * <code>GetBucketTagging</code> action. By default, the bucket owner has this
         * permission and can grant this permission to others.</p> <p>
         * <code>GetBucketTagging</code> has the following special error:</p> <ul> <li>
         * <p>Error code: <code>NoSuchTagSetError</code> </p> <ul> <li> <p>Description:
         * There is no tag set associated with the bucket.</p> </li> </ul> </li> </ul>
         * <p>All Amazon S3 on Outposts REST API requests for this action require an
         * additional parameter of <code>x-amz-outpost-id</code> to be passed with the
         * request and an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketTagging.html#API_control_GetBucketTagging_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>GetBucketTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketTagging.html">PutBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketTagging.html">DeleteBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetBucketTagging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketTaggingAsync(const Model::GetBucketTaggingRequest& request, const GetBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the tags on an S3 Batch Operations job. To use this operation, you
         * must have permission to perform the <code>s3:GetJobTagging</code> action. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-managing-jobs.html#batch-ops-job-tags">Controlling
         * access and labeling jobs using tags</a> in the <i>Amazon Simple Storage Service
         * User Guide</i>.</p> <p/> <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutJobTagging.html">PutJobTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteJobTagging.html">DeleteJobTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetJobTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobTaggingOutcome GetJobTagging(const Model::GetJobTaggingRequest& request) const;

        /**
         * <p>Returns the tags on an S3 Batch Operations job. To use this operation, you
         * must have permission to perform the <code>s3:GetJobTagging</code> action. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-managing-jobs.html#batch-ops-job-tags">Controlling
         * access and labeling jobs using tags</a> in the <i>Amazon Simple Storage Service
         * User Guide</i>.</p> <p/> <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutJobTagging.html">PutJobTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteJobTagging.html">DeleteJobTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetJobTagging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobTaggingOutcomeCallable GetJobTaggingCallable(const Model::GetJobTaggingRequest& request) const;

        /**
         * <p>Returns the tags on an S3 Batch Operations job. To use this operation, you
         * must have permission to perform the <code>s3:GetJobTagging</code> action. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-managing-jobs.html#batch-ops-job-tags">Controlling
         * access and labeling jobs using tags</a> in the <i>Amazon Simple Storage Service
         * User Guide</i>.</p> <p/> <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutJobTagging.html">PutJobTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteJobTagging.html">DeleteJobTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetJobTagging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobTaggingAsync(const Model::GetJobTaggingRequest& request, const GetJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the <code>PublicAccessBlock</code> configuration for an AWS
         * account. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">
         * Using Amazon S3 block public access</a>.</p> <p>Related actions include:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetPublicAccessBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPublicAccessBlockOutcome GetPublicAccessBlock(const Model::GetPublicAccessBlockRequest& request) const;

        /**
         * <p>Retrieves the <code>PublicAccessBlock</code> configuration for an AWS
         * account. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">
         * Using Amazon S3 block public access</a>.</p> <p>Related actions include:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetPublicAccessBlock">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPublicAccessBlockOutcomeCallable GetPublicAccessBlockCallable(const Model::GetPublicAccessBlockRequest& request) const;

        /**
         * <p>Retrieves the <code>PublicAccessBlock</code> configuration for an AWS
         * account. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">
         * Using Amazon S3 block public access</a>.</p> <p>Related actions include:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetPublicAccessBlock">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPublicAccessBlockAsync(const Model::GetPublicAccessBlockRequest& request, const GetPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the Amazon S3 Storage Lens configuration. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon Simple Storage Service User Guide</i>.</p>  <p>To use this
         * action, you must have permission to perform the
         * <code>s3:GetStorageLensConfiguration</code> action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetStorageLensConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStorageLensConfigurationOutcome GetStorageLensConfiguration(const Model::GetStorageLensConfigurationRequest& request) const;

        /**
         * <p>Gets the Amazon S3 Storage Lens configuration. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon Simple Storage Service User Guide</i>.</p>  <p>To use this
         * action, you must have permission to perform the
         * <code>s3:GetStorageLensConfiguration</code> action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetStorageLensConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStorageLensConfigurationOutcomeCallable GetStorageLensConfigurationCallable(const Model::GetStorageLensConfigurationRequest& request) const;

        /**
         * <p>Gets the Amazon S3 Storage Lens configuration. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon Simple Storage Service User Guide</i>.</p>  <p>To use this
         * action, you must have permission to perform the
         * <code>s3:GetStorageLensConfiguration</code> action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetStorageLensConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStorageLensConfigurationAsync(const Model::GetStorageLensConfigurationRequest& request, const GetStorageLensConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the tags of Amazon S3 Storage Lens configuration. For more information
         * about S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon Simple Storage Service User Guide</i>.</p>  <p>To use this
         * action, you must have permission to perform the
         * <code>s3:GetStorageLensConfigurationTagging</code> action. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetStorageLensConfigurationTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStorageLensConfigurationTaggingOutcome GetStorageLensConfigurationTagging(const Model::GetStorageLensConfigurationTaggingRequest& request) const;

        /**
         * <p>Gets the tags of Amazon S3 Storage Lens configuration. For more information
         * about S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon Simple Storage Service User Guide</i>.</p>  <p>To use this
         * action, you must have permission to perform the
         * <code>s3:GetStorageLensConfigurationTagging</code> action. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetStorageLensConfigurationTagging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStorageLensConfigurationTaggingOutcomeCallable GetStorageLensConfigurationTaggingCallable(const Model::GetStorageLensConfigurationTaggingRequest& request) const;

        /**
         * <p>Gets the tags of Amazon S3 Storage Lens configuration. For more information
         * about S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon Simple Storage Service User Guide</i>.</p>  <p>To use this
         * action, you must have permission to perform the
         * <code>s3:GetStorageLensConfigurationTagging</code> action. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetStorageLensConfigurationTagging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStorageLensConfigurationTaggingAsync(const Model::GetStorageLensConfigurationTaggingRequest& request, const GetStorageLensConfigurationTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the access points currently associated with the specified
         * bucket. You can retrieve up to 1000 access points per call. If the specified
         * bucket has more than 1,000 access points (or the number specified in
         * <code>maxResults</code>, whichever is less), the response will include a
         * continuation token that you can use to list the additional access points.</p>
         * <p/> <p>All Amazon S3 on Outposts REST API requests for this action require an
         * additional parameter of <code>x-amz-outpost-id</code> to be passed with the
         * request and an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html#API_control_GetAccessPoint_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>ListAccessPoints</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html">DeleteAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html">GetAccessPoint</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListAccessPoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessPointsOutcome ListAccessPoints(const Model::ListAccessPointsRequest& request) const;

        /**
         * <p>Returns a list of the access points currently associated with the specified
         * bucket. You can retrieve up to 1000 access points per call. If the specified
         * bucket has more than 1,000 access points (or the number specified in
         * <code>maxResults</code>, whichever is less), the response will include a
         * continuation token that you can use to list the additional access points.</p>
         * <p/> <p>All Amazon S3 on Outposts REST API requests for this action require an
         * additional parameter of <code>x-amz-outpost-id</code> to be passed with the
         * request and an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html#API_control_GetAccessPoint_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>ListAccessPoints</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html">DeleteAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html">GetAccessPoint</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListAccessPoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccessPointsOutcomeCallable ListAccessPointsCallable(const Model::ListAccessPointsRequest& request) const;

        /**
         * <p>Returns a list of the access points currently associated with the specified
         * bucket. You can retrieve up to 1000 access points per call. If the specified
         * bucket has more than 1,000 access points (or the number specified in
         * <code>maxResults</code>, whichever is less), the response will include a
         * continuation token that you can use to list the additional access points.</p>
         * <p/> <p>All Amazon S3 on Outposts REST API requests for this action require an
         * additional parameter of <code>x-amz-outpost-id</code> to be passed with the
         * request and an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html#API_control_GetAccessPoint_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>ListAccessPoints</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html">DeleteAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html">GetAccessPoint</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListAccessPoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccessPointsAsync(const Model::ListAccessPointsRequest& request, const ListAccessPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists current S3 Batch Operations jobs and jobs that have ended within the
         * last 30 days for the AWS account making the request. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-basics.html">S3
         * Batch Operations</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p>
         * <p>Related actions include:</p> <p/> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobPriority.html">UpdateJobPriority</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * <p>Lists current S3 Batch Operations jobs and jobs that have ended within the
         * last 30 days for the AWS account making the request. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-basics.html">S3
         * Batch Operations</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p>
         * <p>Related actions include:</p> <p/> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobPriority.html">UpdateJobPriority</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobsOutcomeCallable ListJobsCallable(const Model::ListJobsRequest& request) const;

        /**
         * <p>Lists current S3 Batch Operations jobs and jobs that have ended within the
         * last 30 days for the AWS account making the request. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-basics.html">S3
         * Batch Operations</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p>
         * <p>Related actions include:</p> <p/> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobPriority.html">UpdateJobPriority</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobsAsync(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all Outposts buckets in an Outpost that are owned by the
         * authenticated sender of the request. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>For an example of the request syntax for Amazon S3 on Outposts
         * that uses the S3 on Outposts endpoint hostname prefix and
         * <code>x-amz-outpost-id</code> in your request, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListRegionalBuckets.html#API_control_ListRegionalBuckets_Examples">Examples</a>
         * section.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListRegionalBuckets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRegionalBucketsOutcome ListRegionalBuckets(const Model::ListRegionalBucketsRequest& request) const;

        /**
         * <p>Returns a list of all Outposts buckets in an Outpost that are owned by the
         * authenticated sender of the request. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>For an example of the request syntax for Amazon S3 on Outposts
         * that uses the S3 on Outposts endpoint hostname prefix and
         * <code>x-amz-outpost-id</code> in your request, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListRegionalBuckets.html#API_control_ListRegionalBuckets_Examples">Examples</a>
         * section.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListRegionalBuckets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRegionalBucketsOutcomeCallable ListRegionalBucketsCallable(const Model::ListRegionalBucketsRequest& request) const;

        /**
         * <p>Returns a list of all Outposts buckets in an Outpost that are owned by the
         * authenticated sender of the request. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>For an example of the request syntax for Amazon S3 on Outposts
         * that uses the S3 on Outposts endpoint hostname prefix and
         * <code>x-amz-outpost-id</code> in your request, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListRegionalBuckets.html#API_control_ListRegionalBuckets_Examples">Examples</a>
         * section.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListRegionalBuckets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRegionalBucketsAsync(const Model::ListRegionalBucketsRequest& request, const ListRegionalBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of Amazon S3 Storage Lens configurations. For more information
         * about S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon Simple Storage Service User Guide</i>.</p>  <p>To use this
         * action, you must have permission to perform the
         * <code>s3:ListStorageLensConfigurations</code> action. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListStorageLensConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStorageLensConfigurationsOutcome ListStorageLensConfigurations(const Model::ListStorageLensConfigurationsRequest& request) const;

        /**
         * <p>Gets a list of Amazon S3 Storage Lens configurations. For more information
         * about S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon Simple Storage Service User Guide</i>.</p>  <p>To use this
         * action, you must have permission to perform the
         * <code>s3:ListStorageLensConfigurations</code> action. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListStorageLensConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStorageLensConfigurationsOutcomeCallable ListStorageLensConfigurationsCallable(const Model::ListStorageLensConfigurationsRequest& request) const;

        /**
         * <p>Gets a list of Amazon S3 Storage Lens configurations. For more information
         * about S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon Simple Storage Service User Guide</i>.</p>  <p>To use this
         * action, you must have permission to perform the
         * <code>s3:ListStorageLensConfigurations</code> action. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListStorageLensConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStorageLensConfigurationsAsync(const Model::ListStorageLensConfigurationsRequest& request, const ListStorageLensConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates an access policy with the specified access point. Each access
         * point can have only one policy, so a request made to this API replaces any
         * existing policy associated with the specified access point.</p> <p/> <p>All
         * Amazon S3 on Outposts REST API requests for this action require an additional
         * parameter of <code>x-amz-outpost-id</code> to be passed with the request and an
         * S3 on Outposts endpoint hostname prefix instead of <code>s3-control</code>. For
         * an example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html#API_control_PutAccessPointPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>PutAccessPointPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointPolicy.html">GetAccessPointPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicy.html">DeleteAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutAccessPointPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccessPointPolicyOutcome PutAccessPointPolicy(const Model::PutAccessPointPolicyRequest& request) const;

        /**
         * <p>Associates an access policy with the specified access point. Each access
         * point can have only one policy, so a request made to this API replaces any
         * existing policy associated with the specified access point.</p> <p/> <p>All
         * Amazon S3 on Outposts REST API requests for this action require an additional
         * parameter of <code>x-amz-outpost-id</code> to be passed with the request and an
         * S3 on Outposts endpoint hostname prefix instead of <code>s3-control</code>. For
         * an example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html#API_control_PutAccessPointPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>PutAccessPointPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointPolicy.html">GetAccessPointPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicy.html">DeleteAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutAccessPointPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAccessPointPolicyOutcomeCallable PutAccessPointPolicyCallable(const Model::PutAccessPointPolicyRequest& request) const;

        /**
         * <p>Associates an access policy with the specified access point. Each access
         * point can have only one policy, so a request made to this API replaces any
         * existing policy associated with the specified access point.</p> <p/> <p>All
         * Amazon S3 on Outposts REST API requests for this action require an additional
         * parameter of <code>x-amz-outpost-id</code> to be passed with the request and an
         * S3 on Outposts endpoint hostname prefix instead of <code>s3-control</code>. For
         * an example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html#API_control_PutAccessPointPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>PutAccessPointPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointPolicy.html">GetAccessPointPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicy.html">DeleteAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutAccessPointPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAccessPointPolicyAsync(const Model::PutAccessPointPolicyRequest& request, const PutAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This action puts a lifecycle configuration to an Amazon S3 on Outposts
         * bucket. To put a lifecycle configuration to an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Creates a new
         * lifecycle configuration for the Outposts bucket or replaces an existing
         * lifecycle configuration. Outposts buckets only support lifecycle configurations
         * that delete/expire objects after a certain period of time and abort incomplete
         * multipart uploads. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Managing
         * Lifecycle Permissions for Amazon S3 on Outposts</a>.</p> <p/> <p>All Amazon S3
         * on Outposts REST API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketLifecycleConfiguration.html#API_control_PutBucketLifecycleConfiguration_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>PutBucketLifecycleConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketLifecycleConfiguration.html">DeleteBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutBucketLifecycleConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketLifecycleConfigurationOutcome PutBucketLifecycleConfiguration(const Model::PutBucketLifecycleConfigurationRequest& request) const;

        /**
         *  <p>This action puts a lifecycle configuration to an Amazon S3 on Outposts
         * bucket. To put a lifecycle configuration to an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Creates a new
         * lifecycle configuration for the Outposts bucket or replaces an existing
         * lifecycle configuration. Outposts buckets only support lifecycle configurations
         * that delete/expire objects after a certain period of time and abort incomplete
         * multipart uploads. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Managing
         * Lifecycle Permissions for Amazon S3 on Outposts</a>.</p> <p/> <p>All Amazon S3
         * on Outposts REST API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketLifecycleConfiguration.html#API_control_PutBucketLifecycleConfiguration_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>PutBucketLifecycleConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketLifecycleConfiguration.html">DeleteBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutBucketLifecycleConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketLifecycleConfigurationOutcomeCallable PutBucketLifecycleConfigurationCallable(const Model::PutBucketLifecycleConfigurationRequest& request) const;

        /**
         *  <p>This action puts a lifecycle configuration to an Amazon S3 on Outposts
         * bucket. To put a lifecycle configuration to an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Creates a new
         * lifecycle configuration for the Outposts bucket or replaces an existing
         * lifecycle configuration. Outposts buckets only support lifecycle configurations
         * that delete/expire objects after a certain period of time and abort incomplete
         * multipart uploads. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Managing
         * Lifecycle Permissions for Amazon S3 on Outposts</a>.</p> <p/> <p>All Amazon S3
         * on Outposts REST API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketLifecycleConfiguration.html#API_control_PutBucketLifecycleConfiguration_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>PutBucketLifecycleConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketLifecycleConfiguration.html">DeleteBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutBucketLifecycleConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketLifecycleConfigurationAsync(const Model::PutBucketLifecycleConfigurationRequest& request, const PutBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This action puts a bucket policy to an Amazon S3 on Outposts bucket.
         * To put a policy on an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketPolicy.html">PutBucketPolicy</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Applies an
         * Amazon S3 bucket policy to an Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>If you are using an identity other than the root user of the
         * AWS account that owns the Outposts bucket, the calling identity must have the
         * <code>PutBucketPolicy</code> permissions on the specified Outposts bucket and
         * belong to the bucket owner's account in order to use this action.</p> <p>If you
         * don't have <code>PutBucketPolicy</code> permissions, Amazon S3 returns a
         * <code>403 Access Denied</code> error. If you have the correct permissions, but
         * you're not using an identity that belongs to the bucket owner's account, Amazon
         * S3 returns a <code>405 Method Not Allowed</code> error.</p>  <p> As a
         * security precaution, the root user of the AWS account that owns a bucket can
         * always use this action, even if the policy explicitly denies the root user the
         * ability to perform this action. </p>  <p>For more information about
         * bucket policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and User Policies</a>.</p> <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketPolicy.html#API_control_PutBucketPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>PutBucketPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketPolicy.html">GetBucketPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketPolicy.html">DeleteBucketPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutBucketPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketPolicyOutcome PutBucketPolicy(const Model::PutBucketPolicyRequest& request) const;

        /**
         *  <p>This action puts a bucket policy to an Amazon S3 on Outposts bucket.
         * To put a policy on an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketPolicy.html">PutBucketPolicy</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Applies an
         * Amazon S3 bucket policy to an Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>If you are using an identity other than the root user of the
         * AWS account that owns the Outposts bucket, the calling identity must have the
         * <code>PutBucketPolicy</code> permissions on the specified Outposts bucket and
         * belong to the bucket owner's account in order to use this action.</p> <p>If you
         * don't have <code>PutBucketPolicy</code> permissions, Amazon S3 returns a
         * <code>403 Access Denied</code> error. If you have the correct permissions, but
         * you're not using an identity that belongs to the bucket owner's account, Amazon
         * S3 returns a <code>405 Method Not Allowed</code> error.</p>  <p> As a
         * security precaution, the root user of the AWS account that owns a bucket can
         * always use this action, even if the policy explicitly denies the root user the
         * ability to perform this action. </p>  <p>For more information about
         * bucket policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and User Policies</a>.</p> <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketPolicy.html#API_control_PutBucketPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>PutBucketPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketPolicy.html">GetBucketPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketPolicy.html">DeleteBucketPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutBucketPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketPolicyOutcomeCallable PutBucketPolicyCallable(const Model::PutBucketPolicyRequest& request) const;

        /**
         *  <p>This action puts a bucket policy to an Amazon S3 on Outposts bucket.
         * To put a policy on an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketPolicy.html">PutBucketPolicy</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Applies an
         * Amazon S3 bucket policy to an Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>If you are using an identity other than the root user of the
         * AWS account that owns the Outposts bucket, the calling identity must have the
         * <code>PutBucketPolicy</code> permissions on the specified Outposts bucket and
         * belong to the bucket owner's account in order to use this action.</p> <p>If you
         * don't have <code>PutBucketPolicy</code> permissions, Amazon S3 returns a
         * <code>403 Access Denied</code> error. If you have the correct permissions, but
         * you're not using an identity that belongs to the bucket owner's account, Amazon
         * S3 returns a <code>405 Method Not Allowed</code> error.</p>  <p> As a
         * security precaution, the root user of the AWS account that owns a bucket can
         * always use this action, even if the policy explicitly denies the root user the
         * ability to perform this action. </p>  <p>For more information about
         * bucket policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and User Policies</a>.</p> <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketPolicy.html#API_control_PutBucketPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>PutBucketPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketPolicy.html">GetBucketPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketPolicy.html">DeleteBucketPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutBucketPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketPolicyAsync(const Model::PutBucketPolicyRequest& request, const PutBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This action puts tags on an Amazon S3 on Outposts bucket. To put tags
         * on an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketTagging.html">PutBucketTagging</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Sets the tags
         * for an Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>Use tags to organize your AWS bill to reflect your own cost
         * structure. To do this, sign up to get your AWS account bill with tag key values
         * included. Then, to see the cost of combined resources, organize your billing
         * information according to resources with the same tag key values. For example,
         * you can tag several resources with a specific application name, and then
         * organize your billing information to see the total cost of that application
         * across several services. For more information, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Cost
         * Allocation and Tagging</a>.</p>  <p>Within a bucket, if you add a tag that
         * has the same key as an existing tag, the new value overwrites the old value. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/CostAllocTagging.html">
         * Using Cost Allocation in Amazon S3 Bucket Tags</a>.</p>  <p>To use this
         * action, you must have permissions to perform the
         * <code>s3-outposts:PutBucketTagging</code> action. The Outposts bucket owner has
         * this permission by default and can grant this permission to others. For more
         * information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">
         * Permissions Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>
         * <code>PutBucketTagging</code> has the following special errors:</p> <ul> <li>
         * <p>Error code: <code>InvalidTagError</code> </p> <ul> <li> <p>Description: The
         * tag provided was not a valid tag. This error can occur if the tag did not pass
         * input validation. For information about tag restrictions, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">
         * User-Defined Tag Restrictions</a> and <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/aws-tag-restrictions.html">
         * AWS-Generated Cost Allocation Tag Restrictions</a>.</p> </li> </ul> </li> <li>
         * <p>Error code: <code>MalformedXMLError</code> </p> <ul> <li> <p>Description: The
         * XML provided does not match the schema.</p> </li> </ul> </li> <li> <p>Error
         * code: <code>OperationAbortedError </code> </p> <ul> <li> <p>Description: A
         * conflicting conditional action is currently in progress against this resource.
         * Try again.</p> </li> </ul> </li> <li> <p>Error code: <code>InternalError</code>
         * </p> <ul> <li> <p>Description: The service was unable to apply the provided tag
         * to the bucket.</p> </li> </ul> </li> </ul> <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketTagging.html#API_control_PutBucketTagging_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>PutBucketTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketTagging.html">GetBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketTagging.html">DeleteBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutBucketTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketTaggingOutcome PutBucketTagging(const Model::PutBucketTaggingRequest& request) const;

        /**
         *  <p>This action puts tags on an Amazon S3 on Outposts bucket. To put tags
         * on an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketTagging.html">PutBucketTagging</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Sets the tags
         * for an Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>Use tags to organize your AWS bill to reflect your own cost
         * structure. To do this, sign up to get your AWS account bill with tag key values
         * included. Then, to see the cost of combined resources, organize your billing
         * information according to resources with the same tag key values. For example,
         * you can tag several resources with a specific application name, and then
         * organize your billing information to see the total cost of that application
         * across several services. For more information, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Cost
         * Allocation and Tagging</a>.</p>  <p>Within a bucket, if you add a tag that
         * has the same key as an existing tag, the new value overwrites the old value. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/CostAllocTagging.html">
         * Using Cost Allocation in Amazon S3 Bucket Tags</a>.</p>  <p>To use this
         * action, you must have permissions to perform the
         * <code>s3-outposts:PutBucketTagging</code> action. The Outposts bucket owner has
         * this permission by default and can grant this permission to others. For more
         * information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">
         * Permissions Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>
         * <code>PutBucketTagging</code> has the following special errors:</p> <ul> <li>
         * <p>Error code: <code>InvalidTagError</code> </p> <ul> <li> <p>Description: The
         * tag provided was not a valid tag. This error can occur if the tag did not pass
         * input validation. For information about tag restrictions, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">
         * User-Defined Tag Restrictions</a> and <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/aws-tag-restrictions.html">
         * AWS-Generated Cost Allocation Tag Restrictions</a>.</p> </li> </ul> </li> <li>
         * <p>Error code: <code>MalformedXMLError</code> </p> <ul> <li> <p>Description: The
         * XML provided does not match the schema.</p> </li> </ul> </li> <li> <p>Error
         * code: <code>OperationAbortedError </code> </p> <ul> <li> <p>Description: A
         * conflicting conditional action is currently in progress against this resource.
         * Try again.</p> </li> </ul> </li> <li> <p>Error code: <code>InternalError</code>
         * </p> <ul> <li> <p>Description: The service was unable to apply the provided tag
         * to the bucket.</p> </li> </ul> </li> </ul> <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketTagging.html#API_control_PutBucketTagging_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>PutBucketTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketTagging.html">GetBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketTagging.html">DeleteBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutBucketTagging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketTaggingOutcomeCallable PutBucketTaggingCallable(const Model::PutBucketTaggingRequest& request) const;

        /**
         *  <p>This action puts tags on an Amazon S3 on Outposts bucket. To put tags
         * on an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketTagging.html">PutBucketTagging</a>
         * in the <i>Amazon Simple Storage Service API</i>. </p>  <p>Sets the tags
         * for an Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon Simple Storage Service User
         * Guide</i>.</p> <p>Use tags to organize your AWS bill to reflect your own cost
         * structure. To do this, sign up to get your AWS account bill with tag key values
         * included. Then, to see the cost of combined resources, organize your billing
         * information according to resources with the same tag key values. For example,
         * you can tag several resources with a specific application name, and then
         * organize your billing information to see the total cost of that application
         * across several services. For more information, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Cost
         * Allocation and Tagging</a>.</p>  <p>Within a bucket, if you add a tag that
         * has the same key as an existing tag, the new value overwrites the old value. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/CostAllocTagging.html">
         * Using Cost Allocation in Amazon S3 Bucket Tags</a>.</p>  <p>To use this
         * action, you must have permissions to perform the
         * <code>s3-outposts:PutBucketTagging</code> action. The Outposts bucket owner has
         * this permission by default and can grant this permission to others. For more
         * information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">
         * Permissions Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>
         * <code>PutBucketTagging</code> has the following special errors:</p> <ul> <li>
         * <p>Error code: <code>InvalidTagError</code> </p> <ul> <li> <p>Description: The
         * tag provided was not a valid tag. This error can occur if the tag did not pass
         * input validation. For information about tag restrictions, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">
         * User-Defined Tag Restrictions</a> and <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/aws-tag-restrictions.html">
         * AWS-Generated Cost Allocation Tag Restrictions</a>.</p> </li> </ul> </li> <li>
         * <p>Error code: <code>MalformedXMLError</code> </p> <ul> <li> <p>Description: The
         * XML provided does not match the schema.</p> </li> </ul> </li> <li> <p>Error
         * code: <code>OperationAbortedError </code> </p> <ul> <li> <p>Description: A
         * conflicting conditional action is currently in progress against this resource.
         * Try again.</p> </li> </ul> </li> <li> <p>Error code: <code>InternalError</code>
         * </p> <ul> <li> <p>Description: The service was unable to apply the provided tag
         * to the bucket.</p> </li> </ul> </li> </ul> <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request and an S3 on
         * Outposts endpoint hostname prefix instead of <code>s3-control</code>. For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and the <code>x-amz-outpost-id</code> derived
         * using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketTagging.html#API_control_PutBucketTagging_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>PutBucketTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketTagging.html">GetBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketTagging.html">DeleteBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutBucketTagging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketTaggingAsync(const Model::PutBucketTaggingRequest& request, const PutBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the supplied tag-set on an S3 Batch Operations job.</p> <p>A tag is a
         * key-value pair. You can associate S3 Batch Operations tags with any job by
         * sending a PUT request against the tagging subresource that is associated with
         * the job. To modify the existing tag set, you can either replace the existing tag
         * set entirely, or make changes within the existing tag set by retrieving the
         * existing tag set using <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetJobTagging.html">GetJobTagging</a>,
         * modify that tag set, and use this action to replace the tag set with the one you
         * modified. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-managing-jobs.html#batch-ops-job-tags">Controlling
         * access and labeling jobs using tags</a> in the <i>Amazon Simple Storage Service
         * User Guide</i>. </p> <p/>  <ul> <li> <p>If you send this request with an
         * empty tag set, Amazon S3 deletes the existing tag set on the Batch Operations
         * job. If you use this method, you are charged for a Tier 1 Request (PUT). For
         * more information, see <a href="http://aws.amazon.com/s3/pricing/">Amazon S3
         * pricing</a>.</p> </li> <li> <p>For deleting existing tags for your Batch
         * Operations job, a <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteJobTagging.html">DeleteJobTagging</a>
         * request is preferred because it achieves the same result without incurring
         * charges.</p> </li> <li> <p>A few things to consider about using tags:</p> <ul>
         * <li> <p>Amazon S3 limits the maximum number of tags to 50 tags per job.</p>
         * </li> <li> <p>You can associate up to 50 tags with a job as long as they have
         * unique tag keys.</p> </li> <li> <p>A tag key can be up to 128 Unicode characters
         * in length, and tag values can be up to 256 Unicode characters in length.</p>
         * </li> <li> <p>The key and values are case sensitive.</p> </li> <li> <p>For
         * tagging-related restrictions related to characters and encodings, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-Defined
         * Tag Restrictions</a> in the <i>AWS Billing and Cost Management User
         * Guide</i>.</p> </li> </ul> </li> </ul>  <p/> <p>To use this action, you
         * must have permission to perform the <code>s3:PutJobTagging</code> action.</p>
         * <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreatJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetJobTagging.html">GetJobTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteJobTagging.html">DeleteJobTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutJobTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::PutJobTaggingOutcome PutJobTagging(const Model::PutJobTaggingRequest& request) const;

        /**
         * <p>Sets the supplied tag-set on an S3 Batch Operations job.</p> <p>A tag is a
         * key-value pair. You can associate S3 Batch Operations tags with any job by
         * sending a PUT request against the tagging subresource that is associated with
         * the job. To modify the existing tag set, you can either replace the existing tag
         * set entirely, or make changes within the existing tag set by retrieving the
         * existing tag set using <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetJobTagging.html">GetJobTagging</a>,
         * modify that tag set, and use this action to replace the tag set with the one you
         * modified. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-managing-jobs.html#batch-ops-job-tags">Controlling
         * access and labeling jobs using tags</a> in the <i>Amazon Simple Storage Service
         * User Guide</i>. </p> <p/>  <ul> <li> <p>If you send this request with an
         * empty tag set, Amazon S3 deletes the existing tag set on the Batch Operations
         * job. If you use this method, you are charged for a Tier 1 Request (PUT). For
         * more information, see <a href="http://aws.amazon.com/s3/pricing/">Amazon S3
         * pricing</a>.</p> </li> <li> <p>For deleting existing tags for your Batch
         * Operations job, a <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteJobTagging.html">DeleteJobTagging</a>
         * request is preferred because it achieves the same result without incurring
         * charges.</p> </li> <li> <p>A few things to consider about using tags:</p> <ul>
         * <li> <p>Amazon S3 limits the maximum number of tags to 50 tags per job.</p>
         * </li> <li> <p>You can associate up to 50 tags with a job as long as they have
         * unique tag keys.</p> </li> <li> <p>A tag key can be up to 128 Unicode characters
         * in length, and tag values can be up to 256 Unicode characters in length.</p>
         * </li> <li> <p>The key and values are case sensitive.</p> </li> <li> <p>For
         * tagging-related restrictions related to characters and encodings, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-Defined
         * Tag Restrictions</a> in the <i>AWS Billing and Cost Management User
         * Guide</i>.</p> </li> </ul> </li> </ul>  <p/> <p>To use this action, you
         * must have permission to perform the <code>s3:PutJobTagging</code> action.</p>
         * <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreatJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetJobTagging.html">GetJobTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteJobTagging.html">DeleteJobTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutJobTagging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutJobTaggingOutcomeCallable PutJobTaggingCallable(const Model::PutJobTaggingRequest& request) const;

        /**
         * <p>Sets the supplied tag-set on an S3 Batch Operations job.</p> <p>A tag is a
         * key-value pair. You can associate S3 Batch Operations tags with any job by
         * sending a PUT request against the tagging subresource that is associated with
         * the job. To modify the existing tag set, you can either replace the existing tag
         * set entirely, or make changes within the existing tag set by retrieving the
         * existing tag set using <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetJobTagging.html">GetJobTagging</a>,
         * modify that tag set, and use this action to replace the tag set with the one you
         * modified. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-managing-jobs.html#batch-ops-job-tags">Controlling
         * access and labeling jobs using tags</a> in the <i>Amazon Simple Storage Service
         * User Guide</i>. </p> <p/>  <ul> <li> <p>If you send this request with an
         * empty tag set, Amazon S3 deletes the existing tag set on the Batch Operations
         * job. If you use this method, you are charged for a Tier 1 Request (PUT). For
         * more information, see <a href="http://aws.amazon.com/s3/pricing/">Amazon S3
         * pricing</a>.</p> </li> <li> <p>For deleting existing tags for your Batch
         * Operations job, a <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteJobTagging.html">DeleteJobTagging</a>
         * request is preferred because it achieves the same result without incurring
         * charges.</p> </li> <li> <p>A few things to consider about using tags:</p> <ul>
         * <li> <p>Amazon S3 limits the maximum number of tags to 50 tags per job.</p>
         * </li> <li> <p>You can associate up to 50 tags with a job as long as they have
         * unique tag keys.</p> </li> <li> <p>A tag key can be up to 128 Unicode characters
         * in length, and tag values can be up to 256 Unicode characters in length.</p>
         * </li> <li> <p>The key and values are case sensitive.</p> </li> <li> <p>For
         * tagging-related restrictions related to characters and encodings, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-Defined
         * Tag Restrictions</a> in the <i>AWS Billing and Cost Management User
         * Guide</i>.</p> </li> </ul> </li> </ul>  <p/> <p>To use this action, you
         * must have permission to perform the <code>s3:PutJobTagging</code> action.</p>
         * <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreatJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetJobTagging.html">GetJobTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteJobTagging.html">DeleteJobTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutJobTagging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutJobTaggingAsync(const Model::PutJobTaggingRequest& request, const PutJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or modifies the <code>PublicAccessBlock</code> configuration for an
         * AWS account. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">
         * Using Amazon S3 block public access</a>.</p> <p>Related actions include:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutPublicAccessBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPublicAccessBlockOutcome PutPublicAccessBlock(const Model::PutPublicAccessBlockRequest& request) const;

        /**
         * <p>Creates or modifies the <code>PublicAccessBlock</code> configuration for an
         * AWS account. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">
         * Using Amazon S3 block public access</a>.</p> <p>Related actions include:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutPublicAccessBlock">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPublicAccessBlockOutcomeCallable PutPublicAccessBlockCallable(const Model::PutPublicAccessBlockRequest& request) const;

        /**
         * <p>Creates or modifies the <code>PublicAccessBlock</code> configuration for an
         * AWS account. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">
         * Using Amazon S3 block public access</a>.</p> <p>Related actions include:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutPublicAccessBlock">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPublicAccessBlockAsync(const Model::PutPublicAccessBlockRequest& request, const PutPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Puts an Amazon S3 Storage Lens configuration. For more information about S3
         * Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Working
         * with Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage Service User
         * Guide</i>.</p>  <p>To use this action, you must have permission to perform
         * the <code>s3:PutStorageLensConfiguration</code> action. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutStorageLensConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutStorageLensConfigurationOutcome PutStorageLensConfiguration(const Model::PutStorageLensConfigurationRequest& request) const;

        /**
         * <p>Puts an Amazon S3 Storage Lens configuration. For more information about S3
         * Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Working
         * with Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage Service User
         * Guide</i>.</p>  <p>To use this action, you must have permission to perform
         * the <code>s3:PutStorageLensConfiguration</code> action. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutStorageLensConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutStorageLensConfigurationOutcomeCallable PutStorageLensConfigurationCallable(const Model::PutStorageLensConfigurationRequest& request) const;

        /**
         * <p>Puts an Amazon S3 Storage Lens configuration. For more information about S3
         * Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Working
         * with Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage Service User
         * Guide</i>.</p>  <p>To use this action, you must have permission to perform
         * the <code>s3:PutStorageLensConfiguration</code> action. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutStorageLensConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutStorageLensConfigurationAsync(const Model::PutStorageLensConfigurationRequest& request, const PutStorageLensConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Put or replace tags on an existing Amazon S3 Storage Lens configuration. For
         * more information about S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon Simple Storage Service User Guide</i>.</p>  <p>To use this
         * action, you must have permission to perform the
         * <code>s3:PutStorageLensConfigurationTagging</code> action. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutStorageLensConfigurationTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::PutStorageLensConfigurationTaggingOutcome PutStorageLensConfigurationTagging(const Model::PutStorageLensConfigurationTaggingRequest& request) const;

        /**
         * <p>Put or replace tags on an existing Amazon S3 Storage Lens configuration. For
         * more information about S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon Simple Storage Service User Guide</i>.</p>  <p>To use this
         * action, you must have permission to perform the
         * <code>s3:PutStorageLensConfigurationTagging</code> action. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutStorageLensConfigurationTagging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutStorageLensConfigurationTaggingOutcomeCallable PutStorageLensConfigurationTaggingCallable(const Model::PutStorageLensConfigurationTaggingRequest& request) const;

        /**
         * <p>Put or replace tags on an existing Amazon S3 Storage Lens configuration. For
         * more information about S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon Simple Storage Service User Guide</i>.</p>  <p>To use this
         * action, you must have permission to perform the
         * <code>s3:PutStorageLensConfigurationTagging</code> action. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon Simple Storage
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutStorageLensConfigurationTagging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutStorageLensConfigurationTaggingAsync(const Model::PutStorageLensConfigurationTaggingRequest& request, const PutStorageLensConfigurationTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing S3 Batch Operations job's priority. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-basics.html">S3
         * Batch Operations</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p>
         * <p/> <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/UpdateJobPriority">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJobPriorityOutcome UpdateJobPriority(const Model::UpdateJobPriorityRequest& request) const;

        /**
         * <p>Updates an existing S3 Batch Operations job's priority. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-basics.html">S3
         * Batch Operations</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p>
         * <p/> <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/UpdateJobPriority">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateJobPriorityOutcomeCallable UpdateJobPriorityCallable(const Model::UpdateJobPriorityRequest& request) const;

        /**
         * <p>Updates an existing S3 Batch Operations job's priority. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-basics.html">S3
         * Batch Operations</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p>
         * <p/> <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/UpdateJobPriority">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateJobPriorityAsync(const Model::UpdateJobPriorityRequest& request, const UpdateJobPriorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status for the specified job. Use this action to confirm that you
         * want to run a job or to cancel an existing job. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-basics.html">S3
         * Batch Operations</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p>
         * <p/> <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/UpdateJobStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJobStatusOutcome UpdateJobStatus(const Model::UpdateJobStatusRequest& request) const;

        /**
         * <p>Updates the status for the specified job. Use this action to confirm that you
         * want to run a job or to cancel an existing job. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-basics.html">S3
         * Batch Operations</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p>
         * <p/> <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/UpdateJobStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateJobStatusOutcomeCallable UpdateJobStatusCallable(const Model::UpdateJobStatusRequest& request) const;

        /**
         * <p>Updates the status for the specified job. Use this action to confirm that you
         * want to run a job or to cancel an existing job. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-basics.html">S3
         * Batch Operations</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p>
         * <p/> <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/UpdateJobStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateJobStatusAsync(const Model::UpdateJobStatusRequest& request, const UpdateJobStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


        void OverrideEndpoint(const Aws::String& endpoint);
    private:
        void init(const Client::ClientConfiguration& clientConfiguration);
        void LoadS3ControlSpecificConfig(const Aws::String& profile);
        /**
         * For operations without account ID or ARN as parameters, e.g. CreateBucket, ListRegionalBuckets. Possible endpoints:
         * - s3-control[.dualstack].{region}.amazonaws.com
         * - s3-outposts.{region}.amazonaws.com
         * @param hasOutpostId: Use s3-outposts as service name for both endpoint and signer if true.
         */
        ComputeEndpointOutcome ComputeEndpointString(bool hasOutpostId = false) const;
        /**
         * For operations without account ID, but with ARN as parameters. e.g. GetBucket. Possible endpoints:
         * - {accountId}.s3-control[.dualstack].{region}.amazonaws.com
         * - s3-outposts.{region}.amazonaws.com
         * @param name: accesspoint name (ARN) or bucket name (ARN).
         * @param hasOutpostId: Use s3-outposts as service name to sign the request if true.
         * @param uriPathPrefix: Path prefix of the first resource in the uri.
         */
        ComputeEndpointOutcome ComputeEndpointString(const Aws::String& name, bool hasOutpostId, const Aws::String& uriPathPrefix) const;

        void CreateAccessPointAsyncHelper(const Model::CreateAccessPointRequest& request, const CreateAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBucketAsyncHelper(const Model::CreateBucketRequest& request, const CreateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateJobAsyncHelper(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAccessPointAsyncHelper(const Model::DeleteAccessPointRequest& request, const DeleteAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAccessPointPolicyAsyncHelper(const Model::DeleteAccessPointPolicyRequest& request, const DeleteAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketAsyncHelper(const Model::DeleteBucketRequest& request, const DeleteBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketLifecycleConfigurationAsyncHelper(const Model::DeleteBucketLifecycleConfigurationRequest& request, const DeleteBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketPolicyAsyncHelper(const Model::DeleteBucketPolicyRequest& request, const DeleteBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketTaggingAsyncHelper(const Model::DeleteBucketTaggingRequest& request, const DeleteBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteJobTaggingAsyncHelper(const Model::DeleteJobTaggingRequest& request, const DeleteJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePublicAccessBlockAsyncHelper(const Model::DeletePublicAccessBlockRequest& request, const DeletePublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStorageLensConfigurationAsyncHelper(const Model::DeleteStorageLensConfigurationRequest& request, const DeleteStorageLensConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStorageLensConfigurationTaggingAsyncHelper(const Model::DeleteStorageLensConfigurationTaggingRequest& request, const DeleteStorageLensConfigurationTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeJobAsyncHelper(const Model::DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccessPointAsyncHelper(const Model::GetAccessPointRequest& request, const GetAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccessPointPolicyAsyncHelper(const Model::GetAccessPointPolicyRequest& request, const GetAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccessPointPolicyStatusAsyncHelper(const Model::GetAccessPointPolicyStatusRequest& request, const GetAccessPointPolicyStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketAsyncHelper(const Model::GetBucketRequest& request, const GetBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketLifecycleConfigurationAsyncHelper(const Model::GetBucketLifecycleConfigurationRequest& request, const GetBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketPolicyAsyncHelper(const Model::GetBucketPolicyRequest& request, const GetBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketTaggingAsyncHelper(const Model::GetBucketTaggingRequest& request, const GetBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetJobTaggingAsyncHelper(const Model::GetJobTaggingRequest& request, const GetJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPublicAccessBlockAsyncHelper(const Model::GetPublicAccessBlockRequest& request, const GetPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStorageLensConfigurationAsyncHelper(const Model::GetStorageLensConfigurationRequest& request, const GetStorageLensConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStorageLensConfigurationTaggingAsyncHelper(const Model::GetStorageLensConfigurationTaggingRequest& request, const GetStorageLensConfigurationTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAccessPointsAsyncHelper(const Model::ListAccessPointsRequest& request, const ListAccessPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJobsAsyncHelper(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRegionalBucketsAsyncHelper(const Model::ListRegionalBucketsRequest& request, const ListRegionalBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStorageLensConfigurationsAsyncHelper(const Model::ListStorageLensConfigurationsRequest& request, const ListStorageLensConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAccessPointPolicyAsyncHelper(const Model::PutAccessPointPolicyRequest& request, const PutAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketLifecycleConfigurationAsyncHelper(const Model::PutBucketLifecycleConfigurationRequest& request, const PutBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketPolicyAsyncHelper(const Model::PutBucketPolicyRequest& request, const PutBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketTaggingAsyncHelper(const Model::PutBucketTaggingRequest& request, const PutBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutJobTaggingAsyncHelper(const Model::PutJobTaggingRequest& request, const PutJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutPublicAccessBlockAsyncHelper(const Model::PutPublicAccessBlockRequest& request, const PutPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutStorageLensConfigurationAsyncHelper(const Model::PutStorageLensConfigurationRequest& request, const PutStorageLensConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutStorageLensConfigurationTaggingAsyncHelper(const Model::PutStorageLensConfigurationTaggingRequest& request, const PutStorageLensConfigurationTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateJobPriorityAsyncHelper(const Model::UpdateJobPriorityRequest& request, const UpdateJobPriorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateJobStatusAsyncHelper(const Model::UpdateJobStatusRequest& request, const UpdateJobStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

        Aws::String m_baseUri;
        Aws::String m_scheme;
        bool m_enableHostPrefixInjection;
        Aws::String m_configScheme;
        std::shared_ptr<Utils::Threading::Executor> m_executor;
        bool m_useDualStack;
        bool m_useArnRegion;
        bool m_useCustomEndpoint;
    };

  } // namespace S3Control
} // namespace Aws
