/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/S3Errors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/Event.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/s3/model/AbortMultipartUploadResult.h>
#include <aws/s3/model/CompleteMultipartUploadResult.h>
#include <aws/s3/model/CopyObjectResult.h>
#include <aws/s3/model/CreateBucketResult.h>
#include <aws/s3/model/CreateMultipartUploadResult.h>
#include <aws/s3/model/DeleteObjectResult.h>
#include <aws/s3/model/DeleteObjectsResult.h>
#include <aws/s3/model/GetBucketAclResult.h>
#include <aws/s3/model/GetBucketCorsResult.h>
#include <aws/s3/model/GetBucketLifecycleResult.h>
#include <aws/s3/model/GetBucketLocationResult.h>
#include <aws/s3/model/GetBucketLoggingResult.h>
#include <aws/s3/model/GetBucketNotificationConfigurationResult.h>
#include <aws/s3/model/GetBucketPolicyResult.h>
#include <aws/s3/model/GetBucketReplicationResult.h>
#include <aws/s3/model/GetBucketRequestPaymentResult.h>
#include <aws/s3/model/GetBucketTaggingResult.h>
#include <aws/s3/model/GetBucketVersioningResult.h>
#include <aws/s3/model/GetBucketWebsiteResult.h>
#include <aws/s3/model/GetObjectResult.h>
#include <aws/s3/model/GetObjectAclResult.h>
#include <aws/s3/model/GetObjectTorrentResult.h>
#include <aws/s3/model/HeadObjectResult.h>
#include <aws/s3/model/ListBucketsResult.h>
#include <aws/s3/model/ListMultipartUploadsResult.h>
#include <aws/s3/model/ListObjectVersionsResult.h>
#include <aws/s3/model/ListObjectsResult.h>
#include <aws/s3/model/ListPartsResult.h>
#include <aws/s3/model/PutObjectResult.h>
#include <aws/s3/model/PutObjectAclResult.h>
#include <aws/s3/model/RestoreObjectResult.h>
#include <aws/s3/model/UploadPartResult.h>
#include <aws/s3/model/UploadPartCopyResult.h>
#include <aws/core/NoResult.h>
#include <future>

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

namespace S3
{

namespace Model
{
  class AbortMultipartUploadRequest;
  class CompleteMultipartUploadRequest;
  class CopyObjectRequest;
  class CreateBucketRequest;
  class CreateMultipartUploadRequest;
  class DeleteBucketRequest;
  class DeleteBucketCorsRequest;
  class DeleteBucketLifecycleRequest;
  class DeleteBucketPolicyRequest;
  class DeleteBucketReplicationRequest;
  class DeleteBucketTaggingRequest;
  class DeleteBucketWebsiteRequest;
  class DeleteObjectRequest;
  class DeleteObjectsRequest;
  class GetBucketAclRequest;
  class GetBucketCorsRequest;
  class GetBucketLifecycleRequest;
  class GetBucketLocationRequest;
  class GetBucketLoggingRequest;
  class GetBucketNotificationConfigurationRequest;
  class GetBucketPolicyRequest;
  class GetBucketReplicationRequest;
  class GetBucketRequestPaymentRequest;
  class GetBucketTaggingRequest;
  class GetBucketVersioningRequest;
  class GetBucketWebsiteRequest;
  class GetObjectRequest;
  class GetObjectAclRequest;
  class GetObjectTorrentRequest;
  class HeadBucketRequest;
  class HeadObjectRequest;
  class ListMultipartUploadsRequest;
  class ListObjectVersionsRequest;
  class ListObjectsRequest;
  class ListPartsRequest;
  class PutBucketAclRequest;
  class PutBucketCorsRequest;
  class PutBucketLifecycleRequest;
  class PutBucketLoggingRequest;
  class PutBucketNotificationConfigurationRequest;
  class PutBucketPolicyRequest;
  class PutBucketReplicationRequest;
  class PutBucketRequestPaymentRequest;
  class PutBucketTaggingRequest;
  class PutBucketVersioningRequest;
  class PutBucketWebsiteRequest;
  class PutObjectRequest;
  class PutObjectAclRequest;
  class RestoreObjectRequest;
  class UploadPartRequest;
  class UploadPartCopyRequest;

  typedef Utils::Outcome<AbortMultipartUploadResult, Client::AWSError<S3Errors>> AbortMultipartUploadOutcome;
  typedef Utils::Outcome<CompleteMultipartUploadResult, Client::AWSError<S3Errors>> CompleteMultipartUploadOutcome;
  typedef Utils::Outcome<CopyObjectResult, Client::AWSError<S3Errors>> CopyObjectOutcome;
  typedef Utils::Outcome<CreateBucketResult, Client::AWSError<S3Errors>> CreateBucketOutcome;
  typedef Utils::Outcome<CreateMultipartUploadResult, Client::AWSError<S3Errors>> CreateMultipartUploadOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<S3Errors>> DeleteBucketOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<S3Errors>> DeleteBucketCorsOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<S3Errors>> DeleteBucketLifecycleOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<S3Errors>> DeleteBucketPolicyOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<S3Errors>> DeleteBucketReplicationOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<S3Errors>> DeleteBucketTaggingOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<S3Errors>> DeleteBucketWebsiteOutcome;
  typedef Utils::Outcome<DeleteObjectResult, Client::AWSError<S3Errors>> DeleteObjectOutcome;
  typedef Utils::Outcome<DeleteObjectsResult, Client::AWSError<S3Errors>> DeleteObjectsOutcome;
  typedef Utils::Outcome<GetBucketAclResult, Client::AWSError<S3Errors>> GetBucketAclOutcome;
  typedef Utils::Outcome<GetBucketCorsResult, Client::AWSError<S3Errors>> GetBucketCorsOutcome;
  typedef Utils::Outcome<GetBucketLifecycleResult, Client::AWSError<S3Errors>> GetBucketLifecycleOutcome;
  typedef Utils::Outcome<GetBucketLocationResult, Client::AWSError<S3Errors>> GetBucketLocationOutcome;
  typedef Utils::Outcome<GetBucketLoggingResult, Client::AWSError<S3Errors>> GetBucketLoggingOutcome;
  typedef Utils::Outcome<GetBucketNotificationConfigurationResult, Client::AWSError<S3Errors>> GetBucketNotificationConfigurationOutcome;
  typedef Utils::Outcome<GetBucketPolicyResult, Client::AWSError<S3Errors>> GetBucketPolicyOutcome;
  typedef Utils::Outcome<GetBucketReplicationResult, Client::AWSError<S3Errors>> GetBucketReplicationOutcome;
  typedef Utils::Outcome<GetBucketRequestPaymentResult, Client::AWSError<S3Errors>> GetBucketRequestPaymentOutcome;
  typedef Utils::Outcome<GetBucketTaggingResult, Client::AWSError<S3Errors>> GetBucketTaggingOutcome;
  typedef Utils::Outcome<GetBucketVersioningResult, Client::AWSError<S3Errors>> GetBucketVersioningOutcome;
  typedef Utils::Outcome<GetBucketWebsiteResult, Client::AWSError<S3Errors>> GetBucketWebsiteOutcome;
  typedef Utils::Outcome<GetObjectResult, Client::AWSError<S3Errors>> GetObjectOutcome;
  typedef Utils::Outcome<GetObjectAclResult, Client::AWSError<S3Errors>> GetObjectAclOutcome;
  typedef Utils::Outcome<GetObjectTorrentResult, Client::AWSError<S3Errors>> GetObjectTorrentOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<S3Errors>> HeadBucketOutcome;
  typedef Utils::Outcome<HeadObjectResult, Client::AWSError<S3Errors>> HeadObjectOutcome;
  typedef Utils::Outcome<ListBucketsResult, Client::AWSError<S3Errors>> ListBucketsOutcome;
  typedef Utils::Outcome<ListMultipartUploadsResult, Client::AWSError<S3Errors>> ListMultipartUploadsOutcome;
  typedef Utils::Outcome<ListObjectVersionsResult, Client::AWSError<S3Errors>> ListObjectVersionsOutcome;
  typedef Utils::Outcome<ListObjectsResult, Client::AWSError<S3Errors>> ListObjectsOutcome;
  typedef Utils::Outcome<ListPartsResult, Client::AWSError<S3Errors>> ListPartsOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<S3Errors>> PutBucketAclOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<S3Errors>> PutBucketCorsOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<S3Errors>> PutBucketLifecycleOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<S3Errors>> PutBucketLoggingOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<S3Errors>> PutBucketNotificationConfigurationOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<S3Errors>> PutBucketPolicyOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<S3Errors>> PutBucketReplicationOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<S3Errors>> PutBucketRequestPaymentOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<S3Errors>> PutBucketTaggingOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<S3Errors>> PutBucketVersioningOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<S3Errors>> PutBucketWebsiteOutcome;
  typedef Utils::Outcome<PutObjectResult, Client::AWSError<S3Errors>> PutObjectOutcome;
  typedef Utils::Outcome<PutObjectAclResult, Client::AWSError<S3Errors>> PutObjectAclOutcome;
  typedef Utils::Outcome<RestoreObjectResult, Client::AWSError<S3Errors>> RestoreObjectOutcome;
  typedef Utils::Outcome<UploadPartResult, Client::AWSError<S3Errors>> UploadPartOutcome;
  typedef Utils::Outcome<UploadPartCopyResult, Client::AWSError<S3Errors>> UploadPartCopyOutcome;

  typedef std::future<AbortMultipartUploadOutcome> AbortMultipartUploadOutcomeCallable;
  typedef std::future<CompleteMultipartUploadOutcome> CompleteMultipartUploadOutcomeCallable;
  typedef std::future<CopyObjectOutcome> CopyObjectOutcomeCallable;
  typedef std::future<CreateBucketOutcome> CreateBucketOutcomeCallable;
  typedef std::future<CreateMultipartUploadOutcome> CreateMultipartUploadOutcomeCallable;
  typedef std::future<DeleteBucketOutcome> DeleteBucketOutcomeCallable;
  typedef std::future<DeleteBucketCorsOutcome> DeleteBucketCorsOutcomeCallable;
  typedef std::future<DeleteBucketLifecycleOutcome> DeleteBucketLifecycleOutcomeCallable;
  typedef std::future<DeleteBucketPolicyOutcome> DeleteBucketPolicyOutcomeCallable;
  typedef std::future<DeleteBucketReplicationOutcome> DeleteBucketReplicationOutcomeCallable;
  typedef std::future<DeleteBucketTaggingOutcome> DeleteBucketTaggingOutcomeCallable;
  typedef std::future<DeleteBucketWebsiteOutcome> DeleteBucketWebsiteOutcomeCallable;
  typedef std::future<DeleteObjectOutcome> DeleteObjectOutcomeCallable;
  typedef std::future<DeleteObjectsOutcome> DeleteObjectsOutcomeCallable;
  typedef std::future<GetBucketAclOutcome> GetBucketAclOutcomeCallable;
  typedef std::future<GetBucketCorsOutcome> GetBucketCorsOutcomeCallable;
  typedef std::future<GetBucketLifecycleOutcome> GetBucketLifecycleOutcomeCallable;
  typedef std::future<GetBucketLocationOutcome> GetBucketLocationOutcomeCallable;
  typedef std::future<GetBucketLoggingOutcome> GetBucketLoggingOutcomeCallable;
  typedef std::future<GetBucketNotificationConfigurationOutcome> GetBucketNotificationConfigurationOutcomeCallable;
  typedef std::future<GetBucketPolicyOutcome> GetBucketPolicyOutcomeCallable;
  typedef std::future<GetBucketReplicationOutcome> GetBucketReplicationOutcomeCallable;
  typedef std::future<GetBucketRequestPaymentOutcome> GetBucketRequestPaymentOutcomeCallable;
  typedef std::future<GetBucketTaggingOutcome> GetBucketTaggingOutcomeCallable;
  typedef std::future<GetBucketVersioningOutcome> GetBucketVersioningOutcomeCallable;
  typedef std::future<GetBucketWebsiteOutcome> GetBucketWebsiteOutcomeCallable;
  typedef std::future<GetObjectOutcome> GetObjectOutcomeCallable;
  typedef std::future<GetObjectAclOutcome> GetObjectAclOutcomeCallable;
  typedef std::future<GetObjectTorrentOutcome> GetObjectTorrentOutcomeCallable;
  typedef std::future<HeadBucketOutcome> HeadBucketOutcomeCallable;
  typedef std::future<HeadObjectOutcome> HeadObjectOutcomeCallable;
  typedef std::future<ListBucketsOutcome> ListBucketsOutcomeCallable;
  typedef std::future<ListMultipartUploadsOutcome> ListMultipartUploadsOutcomeCallable;
  typedef std::future<ListObjectVersionsOutcome> ListObjectVersionsOutcomeCallable;
  typedef std::future<ListObjectsOutcome> ListObjectsOutcomeCallable;
  typedef std::future<ListPartsOutcome> ListPartsOutcomeCallable;
  typedef std::future<PutBucketAclOutcome> PutBucketAclOutcomeCallable;
  typedef std::future<PutBucketCorsOutcome> PutBucketCorsOutcomeCallable;
  typedef std::future<PutBucketLifecycleOutcome> PutBucketLifecycleOutcomeCallable;
  typedef std::future<PutBucketLoggingOutcome> PutBucketLoggingOutcomeCallable;
  typedef std::future<PutBucketNotificationConfigurationOutcome> PutBucketNotificationConfigurationOutcomeCallable;
  typedef std::future<PutBucketPolicyOutcome> PutBucketPolicyOutcomeCallable;
  typedef std::future<PutBucketReplicationOutcome> PutBucketReplicationOutcomeCallable;
  typedef std::future<PutBucketRequestPaymentOutcome> PutBucketRequestPaymentOutcomeCallable;
  typedef std::future<PutBucketTaggingOutcome> PutBucketTaggingOutcomeCallable;
  typedef std::future<PutBucketVersioningOutcome> PutBucketVersioningOutcomeCallable;
  typedef std::future<PutBucketWebsiteOutcome> PutBucketWebsiteOutcomeCallable;
  typedef std::future<PutObjectOutcome> PutObjectOutcomeCallable;
  typedef std::future<PutObjectAclOutcome> PutObjectAclOutcomeCallable;
  typedef std::future<RestoreObjectOutcome> RestoreObjectOutcomeCallable;
  typedef std::future<UploadPartOutcome> UploadPartOutcomeCallable;
  typedef std::future<UploadPartCopyOutcome> UploadPartCopyOutcomeCallable;
} // namespace Model

  class S3Client;

  typedef Aws::Utils::Event<S3Client, const Model::AbortMultipartUploadRequest&, const Model::AbortMultipartUploadOutcome&> AbortMultipartUploadOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::CompleteMultipartUploadRequest&, const Model::CompleteMultipartUploadOutcome&> CompleteMultipartUploadOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::CopyObjectRequest&, const Model::CopyObjectOutcome&> CopyObjectOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::CreateBucketRequest&, const Model::CreateBucketOutcome&> CreateBucketOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::CreateMultipartUploadRequest&, const Model::CreateMultipartUploadOutcome&> CreateMultipartUploadOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::DeleteBucketRequest&, const Model::DeleteBucketOutcome&> DeleteBucketOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::DeleteBucketCorsRequest&, const Model::DeleteBucketCorsOutcome&> DeleteBucketCorsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::DeleteBucketLifecycleRequest&, const Model::DeleteBucketLifecycleOutcome&> DeleteBucketLifecycleOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::DeleteBucketPolicyRequest&, const Model::DeleteBucketPolicyOutcome&> DeleteBucketPolicyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::DeleteBucketReplicationRequest&, const Model::DeleteBucketReplicationOutcome&> DeleteBucketReplicationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::DeleteBucketTaggingRequest&, const Model::DeleteBucketTaggingOutcome&> DeleteBucketTaggingOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::DeleteBucketWebsiteRequest&, const Model::DeleteBucketWebsiteOutcome&> DeleteBucketWebsiteOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::DeleteObjectRequest&, const Model::DeleteObjectOutcome&> DeleteObjectOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::DeleteObjectsRequest&, const Model::DeleteObjectsOutcome&> DeleteObjectsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::GetBucketAclRequest&, const Model::GetBucketAclOutcome&> GetBucketAclOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::GetBucketCorsRequest&, const Model::GetBucketCorsOutcome&> GetBucketCorsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::GetBucketLifecycleRequest&, const Model::GetBucketLifecycleOutcome&> GetBucketLifecycleOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::GetBucketLocationRequest&, const Model::GetBucketLocationOutcome&> GetBucketLocationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::GetBucketLoggingRequest&, const Model::GetBucketLoggingOutcome&> GetBucketLoggingOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::GetBucketNotificationConfigurationRequest&, const Model::GetBucketNotificationConfigurationOutcome&> GetBucketNotificationConfigurationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::GetBucketPolicyRequest&, const Model::GetBucketPolicyOutcome&> GetBucketPolicyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::GetBucketReplicationRequest&, const Model::GetBucketReplicationOutcome&> GetBucketReplicationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::GetBucketRequestPaymentRequest&, const Model::GetBucketRequestPaymentOutcome&> GetBucketRequestPaymentOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::GetBucketTaggingRequest&, const Model::GetBucketTaggingOutcome&> GetBucketTaggingOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::GetBucketVersioningRequest&, const Model::GetBucketVersioningOutcome&> GetBucketVersioningOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::GetBucketWebsiteRequest&, const Model::GetBucketWebsiteOutcome&> GetBucketWebsiteOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::GetObjectRequest&, const Model::GetObjectOutcome&> GetObjectOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::GetObjectAclRequest&, const Model::GetObjectAclOutcome&> GetObjectAclOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::GetObjectTorrentRequest&, const Model::GetObjectTorrentOutcome&> GetObjectTorrentOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::HeadBucketRequest&, const Model::HeadBucketOutcome&> HeadBucketOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::HeadObjectRequest&, const Model::HeadObjectOutcome&> HeadObjectOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::ListBucketsOutcome&> ListBucketsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::ListMultipartUploadsRequest&, const Model::ListMultipartUploadsOutcome&> ListMultipartUploadsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::ListObjectVersionsRequest&, const Model::ListObjectVersionsOutcome&> ListObjectVersionsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::ListObjectsRequest&, const Model::ListObjectsOutcome&> ListObjectsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::ListPartsRequest&, const Model::ListPartsOutcome&> ListPartsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::PutBucketAclRequest&, const Model::PutBucketAclOutcome&> PutBucketAclOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::PutBucketCorsRequest&, const Model::PutBucketCorsOutcome&> PutBucketCorsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::PutBucketLifecycleRequest&, const Model::PutBucketLifecycleOutcome&> PutBucketLifecycleOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::PutBucketLoggingRequest&, const Model::PutBucketLoggingOutcome&> PutBucketLoggingOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::PutBucketNotificationConfigurationRequest&, const Model::PutBucketNotificationConfigurationOutcome&> PutBucketNotificationConfigurationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::PutBucketPolicyRequest&, const Model::PutBucketPolicyOutcome&> PutBucketPolicyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::PutBucketReplicationRequest&, const Model::PutBucketReplicationOutcome&> PutBucketReplicationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::PutBucketRequestPaymentRequest&, const Model::PutBucketRequestPaymentOutcome&> PutBucketRequestPaymentOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::PutBucketTaggingRequest&, const Model::PutBucketTaggingOutcome&> PutBucketTaggingOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::PutBucketVersioningRequest&, const Model::PutBucketVersioningOutcome&> PutBucketVersioningOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::PutBucketWebsiteRequest&, const Model::PutBucketWebsiteOutcome&> PutBucketWebsiteOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::PutObjectRequest&, const Model::PutObjectOutcome&> PutObjectOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::PutObjectAclRequest&, const Model::PutObjectAclOutcome&> PutObjectAclOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::RestoreObjectRequest&, const Model::RestoreObjectOutcome&> RestoreObjectOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::UploadPartRequest&, const Model::UploadPartOutcome&> UploadPartOutcomeReceivedEvent;
  typedef Aws::Utils::Event<S3Client, const Model::UploadPartCopyRequest&, const Model::UploadPartCopyOutcome&> UploadPartCopyOutcomeReceivedEvent;

  /*
    ${serviceModel.documentation}
  */
  class AWS_S3_API S3Client : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

     /**
      * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      S3Client(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      S3Client(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
      * the default http client factory will be used
      */
      S3Client(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
        const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
        const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

      ~S3Client();

     /*
       <p>Aborts a multipart upload.</p> <p>To verify that all parts have been removed, so you don't get charged for the part storage, you should call the List Parts operation and ensure the parts list is empty.</p>
     */
     Model::AbortMultipartUploadOutcome AbortMultipartUpload(const Model::AbortMultipartUploadRequest& request) const;

     /*
       <p>Aborts a multipart upload.</p> <p>To verify that all parts have been removed, so you don't get charged for the part storage, you should call the List Parts operation and ensure the parts list is empty.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AbortMultipartUploadOutcomeCallable AbortMultipartUploadCallable(const Model::AbortMultipartUploadRequest& request) const;

     /*
       <p>Aborts a multipart upload.</p> <p>To verify that all parts have been removed, so you don't get charged for the part storage, you should call the List Parts operation and ensure the parts list is empty.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AbortMultipartUploadAsync(const Model::AbortMultipartUploadRequest& request) const;

     /*
       Completes a multipart upload by assembling previously uploaded parts.
     */
     Model::CompleteMultipartUploadOutcome CompleteMultipartUpload(const Model::CompleteMultipartUploadRequest& request) const;

     /*
       Completes a multipart upload by assembling previously uploaded parts.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CompleteMultipartUploadOutcomeCallable CompleteMultipartUploadCallable(const Model::CompleteMultipartUploadRequest& request) const;

     /*
       Completes a multipart upload by assembling previously uploaded parts.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CompleteMultipartUploadAsync(const Model::CompleteMultipartUploadRequest& request) const;

     /*
       Creates a copy of an object that is already stored in Amazon S3.
     */
     Model::CopyObjectOutcome CopyObject(const Model::CopyObjectRequest& request) const;

     /*
       Creates a copy of an object that is already stored in Amazon S3.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CopyObjectOutcomeCallable CopyObjectCallable(const Model::CopyObjectRequest& request) const;

     /*
       Creates a copy of an object that is already stored in Amazon S3.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CopyObjectAsync(const Model::CopyObjectRequest& request) const;

     /*
       Creates a new bucket.
     */
     Model::CreateBucketOutcome CreateBucket(const Model::CreateBucketRequest& request) const;

     /*
       Creates a new bucket.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateBucketOutcomeCallable CreateBucketCallable(const Model::CreateBucketRequest& request) const;

     /*
       Creates a new bucket.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateBucketAsync(const Model::CreateBucketRequest& request) const;

     /*
       <p>Initiates a multipart upload and returns an upload ID.</p> <p><b>Note:</b> After you initiate multipart upload and upload one or more parts, you must either complete or abort multipart upload in order to stop getting charged for storage of the uploaded parts. Only after you either complete or abort multipart upload, Amazon S3 frees up the parts storage and stops charging you for the parts storage.</p>
     */
     Model::CreateMultipartUploadOutcome CreateMultipartUpload(const Model::CreateMultipartUploadRequest& request) const;

     /*
       <p>Initiates a multipart upload and returns an upload ID.</p> <p><b>Note:</b> After you initiate multipart upload and upload one or more parts, you must either complete or abort multipart upload in order to stop getting charged for storage of the uploaded parts. Only after you either complete or abort multipart upload, Amazon S3 frees up the parts storage and stops charging you for the parts storage.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateMultipartUploadOutcomeCallable CreateMultipartUploadCallable(const Model::CreateMultipartUploadRequest& request) const;

     /*
       <p>Initiates a multipart upload and returns an upload ID.</p> <p><b>Note:</b> After you initiate multipart upload and upload one or more parts, you must either complete or abort multipart upload in order to stop getting charged for storage of the uploaded parts. Only after you either complete or abort multipart upload, Amazon S3 frees up the parts storage and stops charging you for the parts storage.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateMultipartUploadAsync(const Model::CreateMultipartUploadRequest& request) const;

     /*
       Deletes the bucket. All objects (including all object versions and Delete Markers) in the bucket must be deleted before the bucket itself can be deleted.
     */
     Model::DeleteBucketOutcome DeleteBucket(const Model::DeleteBucketRequest& request) const;

     /*
       Deletes the bucket. All objects (including all object versions and Delete Markers) in the bucket must be deleted before the bucket itself can be deleted.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteBucketOutcomeCallable DeleteBucketCallable(const Model::DeleteBucketRequest& request) const;

     /*
       Deletes the bucket. All objects (including all object versions and Delete Markers) in the bucket must be deleted before the bucket itself can be deleted.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteBucketAsync(const Model::DeleteBucketRequest& request) const;

     /*
       Deletes the cors configuration information set for the bucket.
     */
     Model::DeleteBucketCorsOutcome DeleteBucketCors(const Model::DeleteBucketCorsRequest& request) const;

     /*
       Deletes the cors configuration information set for the bucket.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteBucketCorsOutcomeCallable DeleteBucketCorsCallable(const Model::DeleteBucketCorsRequest& request) const;

     /*
       Deletes the cors configuration information set for the bucket.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteBucketCorsAsync(const Model::DeleteBucketCorsRequest& request) const;

     /*
       Deletes the lifecycle configuration from the bucket.
     */
     Model::DeleteBucketLifecycleOutcome DeleteBucketLifecycle(const Model::DeleteBucketLifecycleRequest& request) const;

     /*
       Deletes the lifecycle configuration from the bucket.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteBucketLifecycleOutcomeCallable DeleteBucketLifecycleCallable(const Model::DeleteBucketLifecycleRequest& request) const;

     /*
       Deletes the lifecycle configuration from the bucket.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteBucketLifecycleAsync(const Model::DeleteBucketLifecycleRequest& request) const;

     /*
       Deletes the policy from the bucket.
     */
     Model::DeleteBucketPolicyOutcome DeleteBucketPolicy(const Model::DeleteBucketPolicyRequest& request) const;

     /*
       Deletes the policy from the bucket.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteBucketPolicyOutcomeCallable DeleteBucketPolicyCallable(const Model::DeleteBucketPolicyRequest& request) const;

     /*
       Deletes the policy from the bucket.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteBucketPolicyAsync(const Model::DeleteBucketPolicyRequest& request) const;

     /*
       ${operation.documentation}
     */
     Model::DeleteBucketReplicationOutcome DeleteBucketReplication(const Model::DeleteBucketReplicationRequest& request) const;

     /*
       ${operation.documentation}

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteBucketReplicationOutcomeCallable DeleteBucketReplicationCallable(const Model::DeleteBucketReplicationRequest& request) const;

     /*
       ${operation.documentation}

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteBucketReplicationAsync(const Model::DeleteBucketReplicationRequest& request) const;

     /*
       Deletes the tags from the bucket.
     */
     Model::DeleteBucketTaggingOutcome DeleteBucketTagging(const Model::DeleteBucketTaggingRequest& request) const;

     /*
       Deletes the tags from the bucket.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteBucketTaggingOutcomeCallable DeleteBucketTaggingCallable(const Model::DeleteBucketTaggingRequest& request) const;

     /*
       Deletes the tags from the bucket.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteBucketTaggingAsync(const Model::DeleteBucketTaggingRequest& request) const;

     /*
       This operation removes the website configuration from the bucket.
     */
     Model::DeleteBucketWebsiteOutcome DeleteBucketWebsite(const Model::DeleteBucketWebsiteRequest& request) const;

     /*
       This operation removes the website configuration from the bucket.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteBucketWebsiteOutcomeCallable DeleteBucketWebsiteCallable(const Model::DeleteBucketWebsiteRequest& request) const;

     /*
       This operation removes the website configuration from the bucket.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteBucketWebsiteAsync(const Model::DeleteBucketWebsiteRequest& request) const;

     /*
       Removes the null version (if there is one) of an object and inserts a delete marker, which becomes the latest version of the object. If there isn't a null version, Amazon S3 does not remove any objects.
     */
     Model::DeleteObjectOutcome DeleteObject(const Model::DeleteObjectRequest& request) const;

     /*
       Removes the null version (if there is one) of an object and inserts a delete marker, which becomes the latest version of the object. If there isn't a null version, Amazon S3 does not remove any objects.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteObjectOutcomeCallable DeleteObjectCallable(const Model::DeleteObjectRequest& request) const;

     /*
       Removes the null version (if there is one) of an object and inserts a delete marker, which becomes the latest version of the object. If there isn't a null version, Amazon S3 does not remove any objects.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteObjectAsync(const Model::DeleteObjectRequest& request) const;

     /*
       This operation enables you to delete multiple objects from a bucket using a single HTTP request. You may specify up to 1000 keys.
     */
     Model::DeleteObjectsOutcome DeleteObjects(const Model::DeleteObjectsRequest& request) const;

     /*
       This operation enables you to delete multiple objects from a bucket using a single HTTP request. You may specify up to 1000 keys.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteObjectsOutcomeCallable DeleteObjectsCallable(const Model::DeleteObjectsRequest& request) const;

     /*
       This operation enables you to delete multiple objects from a bucket using a single HTTP request. You may specify up to 1000 keys.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteObjectsAsync(const Model::DeleteObjectsRequest& request) const;

     /*
       Gets the access control policy for the bucket.
     */
     Model::GetBucketAclOutcome GetBucketAcl(const Model::GetBucketAclRequest& request) const;

     /*
       Gets the access control policy for the bucket.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetBucketAclOutcomeCallable GetBucketAclCallable(const Model::GetBucketAclRequest& request) const;

     /*
       Gets the access control policy for the bucket.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetBucketAclAsync(const Model::GetBucketAclRequest& request) const;

     /*
       Returns the cors configuration for the bucket.
     */
     Model::GetBucketCorsOutcome GetBucketCors(const Model::GetBucketCorsRequest& request) const;

     /*
       Returns the cors configuration for the bucket.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetBucketCorsOutcomeCallable GetBucketCorsCallable(const Model::GetBucketCorsRequest& request) const;

     /*
       Returns the cors configuration for the bucket.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetBucketCorsAsync(const Model::GetBucketCorsRequest& request) const;

     /*
       Returns the lifecycle configuration information set on the bucket.
     */
     Model::GetBucketLifecycleOutcome GetBucketLifecycle(const Model::GetBucketLifecycleRequest& request) const;

     /*
       Returns the lifecycle configuration information set on the bucket.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetBucketLifecycleOutcomeCallable GetBucketLifecycleCallable(const Model::GetBucketLifecycleRequest& request) const;

     /*
       Returns the lifecycle configuration information set on the bucket.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetBucketLifecycleAsync(const Model::GetBucketLifecycleRequest& request) const;

     /*
       Returns the region the bucket resides in.
     */
     Model::GetBucketLocationOutcome GetBucketLocation(const Model::GetBucketLocationRequest& request) const;

     /*
       Returns the region the bucket resides in.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetBucketLocationOutcomeCallable GetBucketLocationCallable(const Model::GetBucketLocationRequest& request) const;

     /*
       Returns the region the bucket resides in.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetBucketLocationAsync(const Model::GetBucketLocationRequest& request) const;

     /*
       Returns the logging status of a bucket and the permissions users have to view and modify that status. To use GET, you must be the bucket owner.
     */
     Model::GetBucketLoggingOutcome GetBucketLogging(const Model::GetBucketLoggingRequest& request) const;

     /*
       Returns the logging status of a bucket and the permissions users have to view and modify that status. To use GET, you must be the bucket owner.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetBucketLoggingOutcomeCallable GetBucketLoggingCallable(const Model::GetBucketLoggingRequest& request) const;

     /*
       Returns the logging status of a bucket and the permissions users have to view and modify that status. To use GET, you must be the bucket owner.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetBucketLoggingAsync(const Model::GetBucketLoggingRequest& request) const;

     /*
       Returns the notification configuration of a bucket.
     */
     Model::GetBucketNotificationConfigurationOutcome GetBucketNotificationConfiguration(const Model::GetBucketNotificationConfigurationRequest& request) const;

     /*
       Returns the notification configuration of a bucket.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetBucketNotificationConfigurationOutcomeCallable GetBucketNotificationConfigurationCallable(const Model::GetBucketNotificationConfigurationRequest& request) const;

     /*
       Returns the notification configuration of a bucket.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetBucketNotificationConfigurationAsync(const Model::GetBucketNotificationConfigurationRequest& request) const;

     /*
       Returns the policy of a specified bucket.
     */
     Model::GetBucketPolicyOutcome GetBucketPolicy(const Model::GetBucketPolicyRequest& request) const;

     /*
       Returns the policy of a specified bucket.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetBucketPolicyOutcomeCallable GetBucketPolicyCallable(const Model::GetBucketPolicyRequest& request) const;

     /*
       Returns the policy of a specified bucket.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetBucketPolicyAsync(const Model::GetBucketPolicyRequest& request) const;

     /*
       ${operation.documentation}
     */
     Model::GetBucketReplicationOutcome GetBucketReplication(const Model::GetBucketReplicationRequest& request) const;

     /*
       ${operation.documentation}

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetBucketReplicationOutcomeCallable GetBucketReplicationCallable(const Model::GetBucketReplicationRequest& request) const;

     /*
       ${operation.documentation}

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetBucketReplicationAsync(const Model::GetBucketReplicationRequest& request) const;

     /*
       Returns the request payment configuration of a bucket.
     */
     Model::GetBucketRequestPaymentOutcome GetBucketRequestPayment(const Model::GetBucketRequestPaymentRequest& request) const;

     /*
       Returns the request payment configuration of a bucket.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetBucketRequestPaymentOutcomeCallable GetBucketRequestPaymentCallable(const Model::GetBucketRequestPaymentRequest& request) const;

     /*
       Returns the request payment configuration of a bucket.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetBucketRequestPaymentAsync(const Model::GetBucketRequestPaymentRequest& request) const;

     /*
       Returns the tag set associated with the bucket.
     */
     Model::GetBucketTaggingOutcome GetBucketTagging(const Model::GetBucketTaggingRequest& request) const;

     /*
       Returns the tag set associated with the bucket.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetBucketTaggingOutcomeCallable GetBucketTaggingCallable(const Model::GetBucketTaggingRequest& request) const;

     /*
       Returns the tag set associated with the bucket.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetBucketTaggingAsync(const Model::GetBucketTaggingRequest& request) const;

     /*
       Returns the versioning state of a bucket.
     */
     Model::GetBucketVersioningOutcome GetBucketVersioning(const Model::GetBucketVersioningRequest& request) const;

     /*
       Returns the versioning state of a bucket.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetBucketVersioningOutcomeCallable GetBucketVersioningCallable(const Model::GetBucketVersioningRequest& request) const;

     /*
       Returns the versioning state of a bucket.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetBucketVersioningAsync(const Model::GetBucketVersioningRequest& request) const;

     /*
       Returns the website configuration for a bucket.
     */
     Model::GetBucketWebsiteOutcome GetBucketWebsite(const Model::GetBucketWebsiteRequest& request) const;

     /*
       Returns the website configuration for a bucket.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetBucketWebsiteOutcomeCallable GetBucketWebsiteCallable(const Model::GetBucketWebsiteRequest& request) const;

     /*
       Returns the website configuration for a bucket.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetBucketWebsiteAsync(const Model::GetBucketWebsiteRequest& request) const;

     /*
       Retrieves objects from Amazon S3.
     */
     Model::GetObjectOutcome GetObject(const Model::GetObjectRequest& request) const;

     /*
       Retrieves objects from Amazon S3.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetObjectOutcomeCallable GetObjectCallable(const Model::GetObjectRequest& request) const;

     /*
       Retrieves objects from Amazon S3.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetObjectAsync(const Model::GetObjectRequest& request) const;

     /*
       Returns the access control list (ACL) of an object.
     */
     Model::GetObjectAclOutcome GetObjectAcl(const Model::GetObjectAclRequest& request) const;

     /*
       Returns the access control list (ACL) of an object.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetObjectAclOutcomeCallable GetObjectAclCallable(const Model::GetObjectAclRequest& request) const;

     /*
       Returns the access control list (ACL) of an object.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetObjectAclAsync(const Model::GetObjectAclRequest& request) const;

     /*
       Return torrent files from a bucket.
     */
     Model::GetObjectTorrentOutcome GetObjectTorrent(const Model::GetObjectTorrentRequest& request) const;

     /*
       Return torrent files from a bucket.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetObjectTorrentOutcomeCallable GetObjectTorrentCallable(const Model::GetObjectTorrentRequest& request) const;

     /*
       Return torrent files from a bucket.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetObjectTorrentAsync(const Model::GetObjectTorrentRequest& request) const;

     /*
       This operation is useful to determine if a bucket exists and you have permission to access it.
     */
     Model::HeadBucketOutcome HeadBucket(const Model::HeadBucketRequest& request) const;

     /*
       This operation is useful to determine if a bucket exists and you have permission to access it.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::HeadBucketOutcomeCallable HeadBucketCallable(const Model::HeadBucketRequest& request) const;

     /*
       This operation is useful to determine if a bucket exists and you have permission to access it.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void HeadBucketAsync(const Model::HeadBucketRequest& request) const;

     /*
       The HEAD operation retrieves metadata from an object without returning the object itself. This operation is useful if you're only interested in an object's metadata. To use HEAD, you must have READ access to the object.
     */
     Model::HeadObjectOutcome HeadObject(const Model::HeadObjectRequest& request) const;

     /*
       The HEAD operation retrieves metadata from an object without returning the object itself. This operation is useful if you're only interested in an object's metadata. To use HEAD, you must have READ access to the object.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::HeadObjectOutcomeCallable HeadObjectCallable(const Model::HeadObjectRequest& request) const;

     /*
       The HEAD operation retrieves metadata from an object without returning the object itself. This operation is useful if you're only interested in an object's metadata. To use HEAD, you must have READ access to the object.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void HeadObjectAsync(const Model::HeadObjectRequest& request) const;

      /*
       Returns a list of all buckets owned by the authenticated sender of the request.
     */
     Model::ListBucketsOutcome ListBuckets() const;

     /*
       Returns a list of all buckets owned by the authenticated sender of the request.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListBucketsOutcomeCallable ListBucketsCallable() const;

     /*
       Returns a list of all buckets owned by the authenticated sender of the request.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListBucketsAsync() const;

     /*
       This operation lists in-progress multipart uploads.
     */
     Model::ListMultipartUploadsOutcome ListMultipartUploads(const Model::ListMultipartUploadsRequest& request) const;

     /*
       This operation lists in-progress multipart uploads.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListMultipartUploadsOutcomeCallable ListMultipartUploadsCallable(const Model::ListMultipartUploadsRequest& request) const;

     /*
       This operation lists in-progress multipart uploads.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListMultipartUploadsAsync(const Model::ListMultipartUploadsRequest& request) const;

     /*
       Returns metadata about all of the versions of objects in a bucket.
     */
     Model::ListObjectVersionsOutcome ListObjectVersions(const Model::ListObjectVersionsRequest& request) const;

     /*
       Returns metadata about all of the versions of objects in a bucket.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListObjectVersionsOutcomeCallable ListObjectVersionsCallable(const Model::ListObjectVersionsRequest& request) const;

     /*
       Returns metadata about all of the versions of objects in a bucket.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListObjectVersionsAsync(const Model::ListObjectVersionsRequest& request) const;

     /*
       Returns some or all (up to 1000) of the objects in a bucket. You can use the request parameters as selection criteria to return a subset of the objects in a bucket.
     */
     Model::ListObjectsOutcome ListObjects(const Model::ListObjectsRequest& request) const;

     /*
       Returns some or all (up to 1000) of the objects in a bucket. You can use the request parameters as selection criteria to return a subset of the objects in a bucket.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListObjectsOutcomeCallable ListObjectsCallable(const Model::ListObjectsRequest& request) const;

     /*
       Returns some or all (up to 1000) of the objects in a bucket. You can use the request parameters as selection criteria to return a subset of the objects in a bucket.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListObjectsAsync(const Model::ListObjectsRequest& request) const;

     /*
       Lists the parts that have been uploaded for a specific multipart upload.
     */
     Model::ListPartsOutcome ListParts(const Model::ListPartsRequest& request) const;

     /*
       Lists the parts that have been uploaded for a specific multipart upload.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListPartsOutcomeCallable ListPartsCallable(const Model::ListPartsRequest& request) const;

     /*
       Lists the parts that have been uploaded for a specific multipart upload.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListPartsAsync(const Model::ListPartsRequest& request) const;

     /*
       Sets the permissions on a bucket using access control lists (ACL).
     */
     Model::PutBucketAclOutcome PutBucketAcl(const Model::PutBucketAclRequest& request) const;

     /*
       Sets the permissions on a bucket using access control lists (ACL).

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PutBucketAclOutcomeCallable PutBucketAclCallable(const Model::PutBucketAclRequest& request) const;

     /*
       Sets the permissions on a bucket using access control lists (ACL).

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PutBucketAclAsync(const Model::PutBucketAclRequest& request) const;

     /*
       Sets the cors configuration for a bucket.
     */
     Model::PutBucketCorsOutcome PutBucketCors(const Model::PutBucketCorsRequest& request) const;

     /*
       Sets the cors configuration for a bucket.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PutBucketCorsOutcomeCallable PutBucketCorsCallable(const Model::PutBucketCorsRequest& request) const;

     /*
       Sets the cors configuration for a bucket.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PutBucketCorsAsync(const Model::PutBucketCorsRequest& request) const;

     /*
       Sets lifecycle configuration for your bucket. If a lifecycle configuration exists, it replaces it.
     */
     Model::PutBucketLifecycleOutcome PutBucketLifecycle(const Model::PutBucketLifecycleRequest& request) const;

     /*
       Sets lifecycle configuration for your bucket. If a lifecycle configuration exists, it replaces it.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PutBucketLifecycleOutcomeCallable PutBucketLifecycleCallable(const Model::PutBucketLifecycleRequest& request) const;

     /*
       Sets lifecycle configuration for your bucket. If a lifecycle configuration exists, it replaces it.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PutBucketLifecycleAsync(const Model::PutBucketLifecycleRequest& request) const;

     /*
       Set the logging parameters for a bucket and to specify permissions for who can view and modify the logging parameters. To set the logging status of a bucket, you must be the bucket owner.
     */
     Model::PutBucketLoggingOutcome PutBucketLogging(const Model::PutBucketLoggingRequest& request) const;

     /*
       Set the logging parameters for a bucket and to specify permissions for who can view and modify the logging parameters. To set the logging status of a bucket, you must be the bucket owner.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PutBucketLoggingOutcomeCallable PutBucketLoggingCallable(const Model::PutBucketLoggingRequest& request) const;

     /*
       Set the logging parameters for a bucket and to specify permissions for who can view and modify the logging parameters. To set the logging status of a bucket, you must be the bucket owner.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PutBucketLoggingAsync(const Model::PutBucketLoggingRequest& request) const;

     /*
       Enables notifications of specified events for a bucket.
     */
     Model::PutBucketNotificationConfigurationOutcome PutBucketNotificationConfiguration(const Model::PutBucketNotificationConfigurationRequest& request) const;

     /*
       Enables notifications of specified events for a bucket.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PutBucketNotificationConfigurationOutcomeCallable PutBucketNotificationConfigurationCallable(const Model::PutBucketNotificationConfigurationRequest& request) const;

     /*
       Enables notifications of specified events for a bucket.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PutBucketNotificationConfigurationAsync(const Model::PutBucketNotificationConfigurationRequest& request) const;

     /*
       Replaces a policy on a bucket. If the bucket already has a policy, the one in this request completely replaces it.
     */
     Model::PutBucketPolicyOutcome PutBucketPolicy(const Model::PutBucketPolicyRequest& request) const;

     /*
       Replaces a policy on a bucket. If the bucket already has a policy, the one in this request completely replaces it.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PutBucketPolicyOutcomeCallable PutBucketPolicyCallable(const Model::PutBucketPolicyRequest& request) const;

     /*
       Replaces a policy on a bucket. If the bucket already has a policy, the one in this request completely replaces it.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PutBucketPolicyAsync(const Model::PutBucketPolicyRequest& request) const;

     /*
       Creates a new replication configuration (or replaces an existing one, if present).
     */
     Model::PutBucketReplicationOutcome PutBucketReplication(const Model::PutBucketReplicationRequest& request) const;

     /*
       Creates a new replication configuration (or replaces an existing one, if present).

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PutBucketReplicationOutcomeCallable PutBucketReplicationCallable(const Model::PutBucketReplicationRequest& request) const;

     /*
       Creates a new replication configuration (or replaces an existing one, if present).

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PutBucketReplicationAsync(const Model::PutBucketReplicationRequest& request) const;

     /*
       Sets the request payment configuration for a bucket. By default, the bucket owner pays for downloads from the bucket. This configuration parameter enables the bucket owner (only) to specify that the person requesting the download will be charged for the download. Documentation on requester pays buckets can be found at http://docs.aws.amazon.com/AmazonS3/latest/dev/RequesterPaysBuckets.html
     */
     Model::PutBucketRequestPaymentOutcome PutBucketRequestPayment(const Model::PutBucketRequestPaymentRequest& request) const;

     /*
       Sets the request payment configuration for a bucket. By default, the bucket owner pays for downloads from the bucket. This configuration parameter enables the bucket owner (only) to specify that the person requesting the download will be charged for the download. Documentation on requester pays buckets can be found at http://docs.aws.amazon.com/AmazonS3/latest/dev/RequesterPaysBuckets.html

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PutBucketRequestPaymentOutcomeCallable PutBucketRequestPaymentCallable(const Model::PutBucketRequestPaymentRequest& request) const;

     /*
       Sets the request payment configuration for a bucket. By default, the bucket owner pays for downloads from the bucket. This configuration parameter enables the bucket owner (only) to specify that the person requesting the download will be charged for the download. Documentation on requester pays buckets can be found at http://docs.aws.amazon.com/AmazonS3/latest/dev/RequesterPaysBuckets.html

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PutBucketRequestPaymentAsync(const Model::PutBucketRequestPaymentRequest& request) const;

     /*
       Sets the tags for a bucket.
     */
     Model::PutBucketTaggingOutcome PutBucketTagging(const Model::PutBucketTaggingRequest& request) const;

     /*
       Sets the tags for a bucket.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PutBucketTaggingOutcomeCallable PutBucketTaggingCallable(const Model::PutBucketTaggingRequest& request) const;

     /*
       Sets the tags for a bucket.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PutBucketTaggingAsync(const Model::PutBucketTaggingRequest& request) const;

     /*
       Sets the versioning state of an existing bucket. To set the versioning state, you must be the bucket owner.
     */
     Model::PutBucketVersioningOutcome PutBucketVersioning(const Model::PutBucketVersioningRequest& request) const;

     /*
       Sets the versioning state of an existing bucket. To set the versioning state, you must be the bucket owner.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PutBucketVersioningOutcomeCallable PutBucketVersioningCallable(const Model::PutBucketVersioningRequest& request) const;

     /*
       Sets the versioning state of an existing bucket. To set the versioning state, you must be the bucket owner.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PutBucketVersioningAsync(const Model::PutBucketVersioningRequest& request) const;

     /*
       Set the website configuration for a bucket.
     */
     Model::PutBucketWebsiteOutcome PutBucketWebsite(const Model::PutBucketWebsiteRequest& request) const;

     /*
       Set the website configuration for a bucket.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PutBucketWebsiteOutcomeCallable PutBucketWebsiteCallable(const Model::PutBucketWebsiteRequest& request) const;

     /*
       Set the website configuration for a bucket.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PutBucketWebsiteAsync(const Model::PutBucketWebsiteRequest& request) const;

     /*
       Adds an object to a bucket.
     */
     Model::PutObjectOutcome PutObject(const Model::PutObjectRequest& request) const;

     /*
       Adds an object to a bucket.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PutObjectOutcomeCallable PutObjectCallable(const Model::PutObjectRequest& request) const;

     /*
       Adds an object to a bucket.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PutObjectAsync(const Model::PutObjectRequest& request) const;

     /*
       uses the acl subresource to set the access control list (ACL) permissions for an object that already exists in a bucket
     */
     Model::PutObjectAclOutcome PutObjectAcl(const Model::PutObjectAclRequest& request) const;

     /*
       uses the acl subresource to set the access control list (ACL) permissions for an object that already exists in a bucket

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PutObjectAclOutcomeCallable PutObjectAclCallable(const Model::PutObjectAclRequest& request) const;

     /*
       uses the acl subresource to set the access control list (ACL) permissions for an object that already exists in a bucket

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PutObjectAclAsync(const Model::PutObjectAclRequest& request) const;

     /*
       Restores an archived copy of an object back into Amazon S3
     */
     Model::RestoreObjectOutcome RestoreObject(const Model::RestoreObjectRequest& request) const;

     /*
       Restores an archived copy of an object back into Amazon S3

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RestoreObjectOutcomeCallable RestoreObjectCallable(const Model::RestoreObjectRequest& request) const;

     /*
       Restores an archived copy of an object back into Amazon S3

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RestoreObjectAsync(const Model::RestoreObjectRequest& request) const;

     /*
       <p>Uploads a part in a multipart upload.</p> <p><b>Note:</b> After you initiate multipart upload and upload one or more parts, you must either complete or abort multipart upload in order to stop getting charged for storage of the uploaded parts. Only after you either complete or abort multipart upload, Amazon S3 frees up the parts storage and stops charging you for the parts storage.</p>
     */
     Model::UploadPartOutcome UploadPart(const Model::UploadPartRequest& request) const;

     /*
       <p>Uploads a part in a multipart upload.</p> <p><b>Note:</b> After you initiate multipart upload and upload one or more parts, you must either complete or abort multipart upload in order to stop getting charged for storage of the uploaded parts. Only after you either complete or abort multipart upload, Amazon S3 frees up the parts storage and stops charging you for the parts storage.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UploadPartOutcomeCallable UploadPartCallable(const Model::UploadPartRequest& request) const;

     /*
       <p>Uploads a part in a multipart upload.</p> <p><b>Note:</b> After you initiate multipart upload and upload one or more parts, you must either complete or abort multipart upload in order to stop getting charged for storage of the uploaded parts. Only after you either complete or abort multipart upload, Amazon S3 frees up the parts storage and stops charging you for the parts storage.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UploadPartAsync(const Model::UploadPartRequest& request) const;

     /*
       Uploads a part by copying data from an existing object as data source.
     */
     Model::UploadPartCopyOutcome UploadPartCopy(const Model::UploadPartCopyRequest& request) const;

     /*
       Uploads a part by copying data from an existing object as data source.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UploadPartCopyOutcomeCallable UploadPartCopyCallable(const Model::UploadPartCopyRequest& request) const;

     /*
       Uploads a part by copying data from an existing object as data source.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UploadPartCopyAsync(const Model::UploadPartCopyRequest& request) const;

   /**
    * Adds an event handler for AbortMultipartUploadAsync to call upon completion to the handler chain. You need to call this to
    * use AbortMultipartUploadAsync.
    */
    inline void RegisterAbortMultipartUploadOutcomeReceivedHandler(const AbortMultipartUploadOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAbortMultipartUploadOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AbortMultipartUpload.
    */
    inline void ClearAllAbortMultipartUploadOutcomeReceivedHandlers()
    {
      m_onAbortMultipartUploadOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CompleteMultipartUploadAsync to call upon completion to the handler chain. You need to call this to
    * use CompleteMultipartUploadAsync.
    */
    inline void RegisterCompleteMultipartUploadOutcomeReceivedHandler(const CompleteMultipartUploadOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCompleteMultipartUploadOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CompleteMultipartUpload.
    */
    inline void ClearAllCompleteMultipartUploadOutcomeReceivedHandlers()
    {
      m_onCompleteMultipartUploadOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CopyObjectAsync to call upon completion to the handler chain. You need to call this to
    * use CopyObjectAsync.
    */
    inline void RegisterCopyObjectOutcomeReceivedHandler(const CopyObjectOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCopyObjectOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CopyObject.
    */
    inline void ClearAllCopyObjectOutcomeReceivedHandlers()
    {
      m_onCopyObjectOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateBucketAsync to call upon completion to the handler chain. You need to call this to
    * use CreateBucketAsync.
    */
    inline void RegisterCreateBucketOutcomeReceivedHandler(const CreateBucketOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateBucketOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateBucket.
    */
    inline void ClearAllCreateBucketOutcomeReceivedHandlers()
    {
      m_onCreateBucketOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateMultipartUploadAsync to call upon completion to the handler chain. You need to call this to
    * use CreateMultipartUploadAsync.
    */
    inline void RegisterCreateMultipartUploadOutcomeReceivedHandler(const CreateMultipartUploadOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateMultipartUploadOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateMultipartUpload.
    */
    inline void ClearAllCreateMultipartUploadOutcomeReceivedHandlers()
    {
      m_onCreateMultipartUploadOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteBucketAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteBucketAsync.
    */
    inline void RegisterDeleteBucketOutcomeReceivedHandler(const DeleteBucketOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteBucketOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteBucket.
    */
    inline void ClearAllDeleteBucketOutcomeReceivedHandlers()
    {
      m_onDeleteBucketOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteBucketCorsAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteBucketCorsAsync.
    */
    inline void RegisterDeleteBucketCorsOutcomeReceivedHandler(const DeleteBucketCorsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteBucketCorsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteBucketCors.
    */
    inline void ClearAllDeleteBucketCorsOutcomeReceivedHandlers()
    {
      m_onDeleteBucketCorsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteBucketLifecycleAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteBucketLifecycleAsync.
    */
    inline void RegisterDeleteBucketLifecycleOutcomeReceivedHandler(const DeleteBucketLifecycleOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteBucketLifecycleOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteBucketLifecycle.
    */
    inline void ClearAllDeleteBucketLifecycleOutcomeReceivedHandlers()
    {
      m_onDeleteBucketLifecycleOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteBucketPolicyAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteBucketPolicyAsync.
    */
    inline void RegisterDeleteBucketPolicyOutcomeReceivedHandler(const DeleteBucketPolicyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteBucketPolicyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteBucketPolicy.
    */
    inline void ClearAllDeleteBucketPolicyOutcomeReceivedHandlers()
    {
      m_onDeleteBucketPolicyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteBucketReplicationAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteBucketReplicationAsync.
    */
    inline void RegisterDeleteBucketReplicationOutcomeReceivedHandler(const DeleteBucketReplicationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteBucketReplicationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteBucketReplication.
    */
    inline void ClearAllDeleteBucketReplicationOutcomeReceivedHandlers()
    {
      m_onDeleteBucketReplicationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteBucketTaggingAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteBucketTaggingAsync.
    */
    inline void RegisterDeleteBucketTaggingOutcomeReceivedHandler(const DeleteBucketTaggingOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteBucketTaggingOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteBucketTagging.
    */
    inline void ClearAllDeleteBucketTaggingOutcomeReceivedHandlers()
    {
      m_onDeleteBucketTaggingOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteBucketWebsiteAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteBucketWebsiteAsync.
    */
    inline void RegisterDeleteBucketWebsiteOutcomeReceivedHandler(const DeleteBucketWebsiteOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteBucketWebsiteOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteBucketWebsite.
    */
    inline void ClearAllDeleteBucketWebsiteOutcomeReceivedHandlers()
    {
      m_onDeleteBucketWebsiteOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteObjectAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteObjectAsync.
    */
    inline void RegisterDeleteObjectOutcomeReceivedHandler(const DeleteObjectOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteObjectOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteObject.
    */
    inline void ClearAllDeleteObjectOutcomeReceivedHandlers()
    {
      m_onDeleteObjectOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteObjectsAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteObjectsAsync.
    */
    inline void RegisterDeleteObjectsOutcomeReceivedHandler(const DeleteObjectsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteObjectsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteObjects.
    */
    inline void ClearAllDeleteObjectsOutcomeReceivedHandlers()
    {
      m_onDeleteObjectsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetBucketAclAsync to call upon completion to the handler chain. You need to call this to
    * use GetBucketAclAsync.
    */
    inline void RegisterGetBucketAclOutcomeReceivedHandler(const GetBucketAclOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetBucketAclOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetBucketAcl.
    */
    inline void ClearAllGetBucketAclOutcomeReceivedHandlers()
    {
      m_onGetBucketAclOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetBucketCorsAsync to call upon completion to the handler chain. You need to call this to
    * use GetBucketCorsAsync.
    */
    inline void RegisterGetBucketCorsOutcomeReceivedHandler(const GetBucketCorsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetBucketCorsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetBucketCors.
    */
    inline void ClearAllGetBucketCorsOutcomeReceivedHandlers()
    {
      m_onGetBucketCorsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetBucketLifecycleAsync to call upon completion to the handler chain. You need to call this to
    * use GetBucketLifecycleAsync.
    */
    inline void RegisterGetBucketLifecycleOutcomeReceivedHandler(const GetBucketLifecycleOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetBucketLifecycleOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetBucketLifecycle.
    */
    inline void ClearAllGetBucketLifecycleOutcomeReceivedHandlers()
    {
      m_onGetBucketLifecycleOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetBucketLocationAsync to call upon completion to the handler chain. You need to call this to
    * use GetBucketLocationAsync.
    */
    inline void RegisterGetBucketLocationOutcomeReceivedHandler(const GetBucketLocationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetBucketLocationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetBucketLocation.
    */
    inline void ClearAllGetBucketLocationOutcomeReceivedHandlers()
    {
      m_onGetBucketLocationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetBucketLoggingAsync to call upon completion to the handler chain. You need to call this to
    * use GetBucketLoggingAsync.
    */
    inline void RegisterGetBucketLoggingOutcomeReceivedHandler(const GetBucketLoggingOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetBucketLoggingOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetBucketLogging.
    */
    inline void ClearAllGetBucketLoggingOutcomeReceivedHandlers()
    {
      m_onGetBucketLoggingOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetBucketNotificationConfigurationAsync to call upon completion to the handler chain. You need to call this to
    * use GetBucketNotificationConfigurationAsync.
    */
    inline void RegisterGetBucketNotificationConfigurationOutcomeReceivedHandler(const GetBucketNotificationConfigurationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetBucketNotificationConfigurationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetBucketNotificationConfiguration.
    */
    inline void ClearAllGetBucketNotificationConfigurationOutcomeReceivedHandlers()
    {
      m_onGetBucketNotificationConfigurationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetBucketPolicyAsync to call upon completion to the handler chain. You need to call this to
    * use GetBucketPolicyAsync.
    */
    inline void RegisterGetBucketPolicyOutcomeReceivedHandler(const GetBucketPolicyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetBucketPolicyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetBucketPolicy.
    */
    inline void ClearAllGetBucketPolicyOutcomeReceivedHandlers()
    {
      m_onGetBucketPolicyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetBucketReplicationAsync to call upon completion to the handler chain. You need to call this to
    * use GetBucketReplicationAsync.
    */
    inline void RegisterGetBucketReplicationOutcomeReceivedHandler(const GetBucketReplicationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetBucketReplicationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetBucketReplication.
    */
    inline void ClearAllGetBucketReplicationOutcomeReceivedHandlers()
    {
      m_onGetBucketReplicationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetBucketRequestPaymentAsync to call upon completion to the handler chain. You need to call this to
    * use GetBucketRequestPaymentAsync.
    */
    inline void RegisterGetBucketRequestPaymentOutcomeReceivedHandler(const GetBucketRequestPaymentOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetBucketRequestPaymentOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetBucketRequestPayment.
    */
    inline void ClearAllGetBucketRequestPaymentOutcomeReceivedHandlers()
    {
      m_onGetBucketRequestPaymentOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetBucketTaggingAsync to call upon completion to the handler chain. You need to call this to
    * use GetBucketTaggingAsync.
    */
    inline void RegisterGetBucketTaggingOutcomeReceivedHandler(const GetBucketTaggingOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetBucketTaggingOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetBucketTagging.
    */
    inline void ClearAllGetBucketTaggingOutcomeReceivedHandlers()
    {
      m_onGetBucketTaggingOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetBucketVersioningAsync to call upon completion to the handler chain. You need to call this to
    * use GetBucketVersioningAsync.
    */
    inline void RegisterGetBucketVersioningOutcomeReceivedHandler(const GetBucketVersioningOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetBucketVersioningOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetBucketVersioning.
    */
    inline void ClearAllGetBucketVersioningOutcomeReceivedHandlers()
    {
      m_onGetBucketVersioningOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetBucketWebsiteAsync to call upon completion to the handler chain. You need to call this to
    * use GetBucketWebsiteAsync.
    */
    inline void RegisterGetBucketWebsiteOutcomeReceivedHandler(const GetBucketWebsiteOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetBucketWebsiteOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetBucketWebsite.
    */
    inline void ClearAllGetBucketWebsiteOutcomeReceivedHandlers()
    {
      m_onGetBucketWebsiteOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetObjectAsync to call upon completion to the handler chain. You need to call this to
    * use GetObjectAsync.
    */
    inline void RegisterGetObjectOutcomeReceivedHandler(const GetObjectOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetObjectOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetObject.
    */
    inline void ClearAllGetObjectOutcomeReceivedHandlers()
    {
      m_onGetObjectOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetObjectAclAsync to call upon completion to the handler chain. You need to call this to
    * use GetObjectAclAsync.
    */
    inline void RegisterGetObjectAclOutcomeReceivedHandler(const GetObjectAclOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetObjectAclOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetObjectAcl.
    */
    inline void ClearAllGetObjectAclOutcomeReceivedHandlers()
    {
      m_onGetObjectAclOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetObjectTorrentAsync to call upon completion to the handler chain. You need to call this to
    * use GetObjectTorrentAsync.
    */
    inline void RegisterGetObjectTorrentOutcomeReceivedHandler(const GetObjectTorrentOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetObjectTorrentOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetObjectTorrent.
    */
    inline void ClearAllGetObjectTorrentOutcomeReceivedHandlers()
    {
      m_onGetObjectTorrentOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for HeadBucketAsync to call upon completion to the handler chain. You need to call this to
    * use HeadBucketAsync.
    */
    inline void RegisterHeadBucketOutcomeReceivedHandler(const HeadBucketOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onHeadBucketOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for HeadBucket.
    */
    inline void ClearAllHeadBucketOutcomeReceivedHandlers()
    {
      m_onHeadBucketOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for HeadObjectAsync to call upon completion to the handler chain. You need to call this to
    * use HeadObjectAsync.
    */
    inline void RegisterHeadObjectOutcomeReceivedHandler(const HeadObjectOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onHeadObjectOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for HeadObject.
    */
    inline void ClearAllHeadObjectOutcomeReceivedHandlers()
    {
      m_onHeadObjectOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListBucketsAsync to call upon completion to the handler chain. You need to call this to
    * use ListBucketsAsync.
    */
    inline void RegisterListBucketsOutcomeReceivedHandler(const ListBucketsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListBucketsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListBuckets.
    */
    inline void ClearAllListBucketsOutcomeReceivedHandlers()
    {
      m_onListBucketsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListMultipartUploadsAsync to call upon completion to the handler chain. You need to call this to
    * use ListMultipartUploadsAsync.
    */
    inline void RegisterListMultipartUploadsOutcomeReceivedHandler(const ListMultipartUploadsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListMultipartUploadsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListMultipartUploads.
    */
    inline void ClearAllListMultipartUploadsOutcomeReceivedHandlers()
    {
      m_onListMultipartUploadsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListObjectVersionsAsync to call upon completion to the handler chain. You need to call this to
    * use ListObjectVersionsAsync.
    */
    inline void RegisterListObjectVersionsOutcomeReceivedHandler(const ListObjectVersionsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListObjectVersionsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListObjectVersions.
    */
    inline void ClearAllListObjectVersionsOutcomeReceivedHandlers()
    {
      m_onListObjectVersionsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListObjectsAsync to call upon completion to the handler chain. You need to call this to
    * use ListObjectsAsync.
    */
    inline void RegisterListObjectsOutcomeReceivedHandler(const ListObjectsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListObjectsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListObjects.
    */
    inline void ClearAllListObjectsOutcomeReceivedHandlers()
    {
      m_onListObjectsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListPartsAsync to call upon completion to the handler chain. You need to call this to
    * use ListPartsAsync.
    */
    inline void RegisterListPartsOutcomeReceivedHandler(const ListPartsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListPartsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListParts.
    */
    inline void ClearAllListPartsOutcomeReceivedHandlers()
    {
      m_onListPartsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PutBucketAclAsync to call upon completion to the handler chain. You need to call this to
    * use PutBucketAclAsync.
    */
    inline void RegisterPutBucketAclOutcomeReceivedHandler(const PutBucketAclOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPutBucketAclOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PutBucketAcl.
    */
    inline void ClearAllPutBucketAclOutcomeReceivedHandlers()
    {
      m_onPutBucketAclOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PutBucketCorsAsync to call upon completion to the handler chain. You need to call this to
    * use PutBucketCorsAsync.
    */
    inline void RegisterPutBucketCorsOutcomeReceivedHandler(const PutBucketCorsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPutBucketCorsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PutBucketCors.
    */
    inline void ClearAllPutBucketCorsOutcomeReceivedHandlers()
    {
      m_onPutBucketCorsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PutBucketLifecycleAsync to call upon completion to the handler chain. You need to call this to
    * use PutBucketLifecycleAsync.
    */
    inline void RegisterPutBucketLifecycleOutcomeReceivedHandler(const PutBucketLifecycleOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPutBucketLifecycleOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PutBucketLifecycle.
    */
    inline void ClearAllPutBucketLifecycleOutcomeReceivedHandlers()
    {
      m_onPutBucketLifecycleOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PutBucketLoggingAsync to call upon completion to the handler chain. You need to call this to
    * use PutBucketLoggingAsync.
    */
    inline void RegisterPutBucketLoggingOutcomeReceivedHandler(const PutBucketLoggingOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPutBucketLoggingOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PutBucketLogging.
    */
    inline void ClearAllPutBucketLoggingOutcomeReceivedHandlers()
    {
      m_onPutBucketLoggingOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PutBucketNotificationConfigurationAsync to call upon completion to the handler chain. You need to call this to
    * use PutBucketNotificationConfigurationAsync.
    */
    inline void RegisterPutBucketNotificationConfigurationOutcomeReceivedHandler(const PutBucketNotificationConfigurationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPutBucketNotificationConfigurationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PutBucketNotificationConfiguration.
    */
    inline void ClearAllPutBucketNotificationConfigurationOutcomeReceivedHandlers()
    {
      m_onPutBucketNotificationConfigurationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PutBucketPolicyAsync to call upon completion to the handler chain. You need to call this to
    * use PutBucketPolicyAsync.
    */
    inline void RegisterPutBucketPolicyOutcomeReceivedHandler(const PutBucketPolicyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPutBucketPolicyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PutBucketPolicy.
    */
    inline void ClearAllPutBucketPolicyOutcomeReceivedHandlers()
    {
      m_onPutBucketPolicyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PutBucketReplicationAsync to call upon completion to the handler chain. You need to call this to
    * use PutBucketReplicationAsync.
    */
    inline void RegisterPutBucketReplicationOutcomeReceivedHandler(const PutBucketReplicationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPutBucketReplicationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PutBucketReplication.
    */
    inline void ClearAllPutBucketReplicationOutcomeReceivedHandlers()
    {
      m_onPutBucketReplicationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PutBucketRequestPaymentAsync to call upon completion to the handler chain. You need to call this to
    * use PutBucketRequestPaymentAsync.
    */
    inline void RegisterPutBucketRequestPaymentOutcomeReceivedHandler(const PutBucketRequestPaymentOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPutBucketRequestPaymentOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PutBucketRequestPayment.
    */
    inline void ClearAllPutBucketRequestPaymentOutcomeReceivedHandlers()
    {
      m_onPutBucketRequestPaymentOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PutBucketTaggingAsync to call upon completion to the handler chain. You need to call this to
    * use PutBucketTaggingAsync.
    */
    inline void RegisterPutBucketTaggingOutcomeReceivedHandler(const PutBucketTaggingOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPutBucketTaggingOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PutBucketTagging.
    */
    inline void ClearAllPutBucketTaggingOutcomeReceivedHandlers()
    {
      m_onPutBucketTaggingOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PutBucketVersioningAsync to call upon completion to the handler chain. You need to call this to
    * use PutBucketVersioningAsync.
    */
    inline void RegisterPutBucketVersioningOutcomeReceivedHandler(const PutBucketVersioningOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPutBucketVersioningOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PutBucketVersioning.
    */
    inline void ClearAllPutBucketVersioningOutcomeReceivedHandlers()
    {
      m_onPutBucketVersioningOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PutBucketWebsiteAsync to call upon completion to the handler chain. You need to call this to
    * use PutBucketWebsiteAsync.
    */
    inline void RegisterPutBucketWebsiteOutcomeReceivedHandler(const PutBucketWebsiteOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPutBucketWebsiteOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PutBucketWebsite.
    */
    inline void ClearAllPutBucketWebsiteOutcomeReceivedHandlers()
    {
      m_onPutBucketWebsiteOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PutObjectAsync to call upon completion to the handler chain. You need to call this to
    * use PutObjectAsync.
    */
    inline void RegisterPutObjectOutcomeReceivedHandler(const PutObjectOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPutObjectOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PutObject.
    */
    inline void ClearAllPutObjectOutcomeReceivedHandlers()
    {
      m_onPutObjectOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PutObjectAclAsync to call upon completion to the handler chain. You need to call this to
    * use PutObjectAclAsync.
    */
    inline void RegisterPutObjectAclOutcomeReceivedHandler(const PutObjectAclOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPutObjectAclOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PutObjectAcl.
    */
    inline void ClearAllPutObjectAclOutcomeReceivedHandlers()
    {
      m_onPutObjectAclOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RestoreObjectAsync to call upon completion to the handler chain. You need to call this to
    * use RestoreObjectAsync.
    */
    inline void RegisterRestoreObjectOutcomeReceivedHandler(const RestoreObjectOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRestoreObjectOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RestoreObject.
    */
    inline void ClearAllRestoreObjectOutcomeReceivedHandlers()
    {
      m_onRestoreObjectOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UploadPartAsync to call upon completion to the handler chain. You need to call this to
    * use UploadPartAsync.
    */
    inline void RegisterUploadPartOutcomeReceivedHandler(const UploadPartOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUploadPartOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UploadPart.
    */
    inline void ClearAllUploadPartOutcomeReceivedHandlers()
    {
      m_onUploadPartOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UploadPartCopyAsync to call upon completion to the handler chain. You need to call this to
    * use UploadPartCopyAsync.
    */
    inline void RegisterUploadPartCopyOutcomeReceivedHandler(const UploadPartCopyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUploadPartCopyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UploadPartCopy.
    */
    inline void ClearAllUploadPartCopyOutcomeReceivedHandlers()
    {
      m_onUploadPartCopyOutcomeReceived.Clear();
    }

  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
    void AbortMultipartUploadAsyncHelper(const Model::AbortMultipartUploadRequest& request) const;
    void CompleteMultipartUploadAsyncHelper(const Model::CompleteMultipartUploadRequest& request) const;
    void CopyObjectAsyncHelper(const Model::CopyObjectRequest& request) const;
    void CreateBucketAsyncHelper(const Model::CreateBucketRequest& request) const;
    void CreateMultipartUploadAsyncHelper(const Model::CreateMultipartUploadRequest& request) const;
    void DeleteBucketAsyncHelper(const Model::DeleteBucketRequest& request) const;
    void DeleteBucketCorsAsyncHelper(const Model::DeleteBucketCorsRequest& request) const;
    void DeleteBucketLifecycleAsyncHelper(const Model::DeleteBucketLifecycleRequest& request) const;
    void DeleteBucketPolicyAsyncHelper(const Model::DeleteBucketPolicyRequest& request) const;
    void DeleteBucketReplicationAsyncHelper(const Model::DeleteBucketReplicationRequest& request) const;
    void DeleteBucketTaggingAsyncHelper(const Model::DeleteBucketTaggingRequest& request) const;
    void DeleteBucketWebsiteAsyncHelper(const Model::DeleteBucketWebsiteRequest& request) const;
    void DeleteObjectAsyncHelper(const Model::DeleteObjectRequest& request) const;
    void DeleteObjectsAsyncHelper(const Model::DeleteObjectsRequest& request) const;
    void GetBucketAclAsyncHelper(const Model::GetBucketAclRequest& request) const;
    void GetBucketCorsAsyncHelper(const Model::GetBucketCorsRequest& request) const;
    void GetBucketLifecycleAsyncHelper(const Model::GetBucketLifecycleRequest& request) const;
    void GetBucketLocationAsyncHelper(const Model::GetBucketLocationRequest& request) const;
    void GetBucketLoggingAsyncHelper(const Model::GetBucketLoggingRequest& request) const;
    void GetBucketNotificationConfigurationAsyncHelper(const Model::GetBucketNotificationConfigurationRequest& request) const;
    void GetBucketPolicyAsyncHelper(const Model::GetBucketPolicyRequest& request) const;
    void GetBucketReplicationAsyncHelper(const Model::GetBucketReplicationRequest& request) const;
    void GetBucketRequestPaymentAsyncHelper(const Model::GetBucketRequestPaymentRequest& request) const;
    void GetBucketTaggingAsyncHelper(const Model::GetBucketTaggingRequest& request) const;
    void GetBucketVersioningAsyncHelper(const Model::GetBucketVersioningRequest& request) const;
    void GetBucketWebsiteAsyncHelper(const Model::GetBucketWebsiteRequest& request) const;
    void GetObjectAsyncHelper(const Model::GetObjectRequest& request) const;
    void GetObjectAclAsyncHelper(const Model::GetObjectAclRequest& request) const;
    void GetObjectTorrentAsyncHelper(const Model::GetObjectTorrentRequest& request) const;
    void HeadBucketAsyncHelper(const Model::HeadBucketRequest& request) const;
    void HeadObjectAsyncHelper(const Model::HeadObjectRequest& request) const;
    void ListBucketsAsyncHelper() const;
    void ListMultipartUploadsAsyncHelper(const Model::ListMultipartUploadsRequest& request) const;
    void ListObjectVersionsAsyncHelper(const Model::ListObjectVersionsRequest& request) const;
    void ListObjectsAsyncHelper(const Model::ListObjectsRequest& request) const;
    void ListPartsAsyncHelper(const Model::ListPartsRequest& request) const;
    void PutBucketAclAsyncHelper(const Model::PutBucketAclRequest& request) const;
    void PutBucketCorsAsyncHelper(const Model::PutBucketCorsRequest& request) const;
    void PutBucketLifecycleAsyncHelper(const Model::PutBucketLifecycleRequest& request) const;
    void PutBucketLoggingAsyncHelper(const Model::PutBucketLoggingRequest& request) const;
    void PutBucketNotificationConfigurationAsyncHelper(const Model::PutBucketNotificationConfigurationRequest& request) const;
    void PutBucketPolicyAsyncHelper(const Model::PutBucketPolicyRequest& request) const;
    void PutBucketReplicationAsyncHelper(const Model::PutBucketReplicationRequest& request) const;
    void PutBucketRequestPaymentAsyncHelper(const Model::PutBucketRequestPaymentRequest& request) const;
    void PutBucketTaggingAsyncHelper(const Model::PutBucketTaggingRequest& request) const;
    void PutBucketVersioningAsyncHelper(const Model::PutBucketVersioningRequest& request) const;
    void PutBucketWebsiteAsyncHelper(const Model::PutBucketWebsiteRequest& request) const;
    void PutObjectAsyncHelper(const Model::PutObjectRequest& request) const;
    void PutObjectAclAsyncHelper(const Model::PutObjectAclRequest& request) const;
    void RestoreObjectAsyncHelper(const Model::RestoreObjectRequest& request) const;
    void UploadPartAsyncHelper(const Model::UploadPartRequest& request) const;
    void UploadPartCopyAsyncHelper(const Model::UploadPartCopyRequest& request) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;

    /** events **/
    AbortMultipartUploadOutcomeReceivedEvent m_onAbortMultipartUploadOutcomeReceived;
    CompleteMultipartUploadOutcomeReceivedEvent m_onCompleteMultipartUploadOutcomeReceived;
    CopyObjectOutcomeReceivedEvent m_onCopyObjectOutcomeReceived;
    CreateBucketOutcomeReceivedEvent m_onCreateBucketOutcomeReceived;
    CreateMultipartUploadOutcomeReceivedEvent m_onCreateMultipartUploadOutcomeReceived;
    DeleteBucketOutcomeReceivedEvent m_onDeleteBucketOutcomeReceived;
    DeleteBucketCorsOutcomeReceivedEvent m_onDeleteBucketCorsOutcomeReceived;
    DeleteBucketLifecycleOutcomeReceivedEvent m_onDeleteBucketLifecycleOutcomeReceived;
    DeleteBucketPolicyOutcomeReceivedEvent m_onDeleteBucketPolicyOutcomeReceived;
    DeleteBucketReplicationOutcomeReceivedEvent m_onDeleteBucketReplicationOutcomeReceived;
    DeleteBucketTaggingOutcomeReceivedEvent m_onDeleteBucketTaggingOutcomeReceived;
    DeleteBucketWebsiteOutcomeReceivedEvent m_onDeleteBucketWebsiteOutcomeReceived;
    DeleteObjectOutcomeReceivedEvent m_onDeleteObjectOutcomeReceived;
    DeleteObjectsOutcomeReceivedEvent m_onDeleteObjectsOutcomeReceived;
    GetBucketAclOutcomeReceivedEvent m_onGetBucketAclOutcomeReceived;
    GetBucketCorsOutcomeReceivedEvent m_onGetBucketCorsOutcomeReceived;
    GetBucketLifecycleOutcomeReceivedEvent m_onGetBucketLifecycleOutcomeReceived;
    GetBucketLocationOutcomeReceivedEvent m_onGetBucketLocationOutcomeReceived;
    GetBucketLoggingOutcomeReceivedEvent m_onGetBucketLoggingOutcomeReceived;
    GetBucketNotificationConfigurationOutcomeReceivedEvent m_onGetBucketNotificationConfigurationOutcomeReceived;
    GetBucketPolicyOutcomeReceivedEvent m_onGetBucketPolicyOutcomeReceived;
    GetBucketReplicationOutcomeReceivedEvent m_onGetBucketReplicationOutcomeReceived;
    GetBucketRequestPaymentOutcomeReceivedEvent m_onGetBucketRequestPaymentOutcomeReceived;
    GetBucketTaggingOutcomeReceivedEvent m_onGetBucketTaggingOutcomeReceived;
    GetBucketVersioningOutcomeReceivedEvent m_onGetBucketVersioningOutcomeReceived;
    GetBucketWebsiteOutcomeReceivedEvent m_onGetBucketWebsiteOutcomeReceived;
    GetObjectOutcomeReceivedEvent m_onGetObjectOutcomeReceived;
    GetObjectAclOutcomeReceivedEvent m_onGetObjectAclOutcomeReceived;
    GetObjectTorrentOutcomeReceivedEvent m_onGetObjectTorrentOutcomeReceived;
    HeadBucketOutcomeReceivedEvent m_onHeadBucketOutcomeReceived;
    HeadObjectOutcomeReceivedEvent m_onHeadObjectOutcomeReceived;
    ListBucketsOutcomeReceivedEvent m_onListBucketsOutcomeReceived;
    ListMultipartUploadsOutcomeReceivedEvent m_onListMultipartUploadsOutcomeReceived;
    ListObjectVersionsOutcomeReceivedEvent m_onListObjectVersionsOutcomeReceived;
    ListObjectsOutcomeReceivedEvent m_onListObjectsOutcomeReceived;
    ListPartsOutcomeReceivedEvent m_onListPartsOutcomeReceived;
    PutBucketAclOutcomeReceivedEvent m_onPutBucketAclOutcomeReceived;
    PutBucketCorsOutcomeReceivedEvent m_onPutBucketCorsOutcomeReceived;
    PutBucketLifecycleOutcomeReceivedEvent m_onPutBucketLifecycleOutcomeReceived;
    PutBucketLoggingOutcomeReceivedEvent m_onPutBucketLoggingOutcomeReceived;
    PutBucketNotificationConfigurationOutcomeReceivedEvent m_onPutBucketNotificationConfigurationOutcomeReceived;
    PutBucketPolicyOutcomeReceivedEvent m_onPutBucketPolicyOutcomeReceived;
    PutBucketReplicationOutcomeReceivedEvent m_onPutBucketReplicationOutcomeReceived;
    PutBucketRequestPaymentOutcomeReceivedEvent m_onPutBucketRequestPaymentOutcomeReceived;
    PutBucketTaggingOutcomeReceivedEvent m_onPutBucketTaggingOutcomeReceived;
    PutBucketVersioningOutcomeReceivedEvent m_onPutBucketVersioningOutcomeReceived;
    PutBucketWebsiteOutcomeReceivedEvent m_onPutBucketWebsiteOutcomeReceived;
    PutObjectOutcomeReceivedEvent m_onPutObjectOutcomeReceived;
    PutObjectAclOutcomeReceivedEvent m_onPutObjectAclOutcomeReceived;
    RestoreObjectOutcomeReceivedEvent m_onRestoreObjectOutcomeReceived;
    UploadPartOutcomeReceivedEvent m_onUploadPartOutcomeReceived;
    UploadPartCopyOutcomeReceivedEvent m_onUploadPartCopyOutcomeReceived;
  };

} // namespace S3
} // namespace Aws
