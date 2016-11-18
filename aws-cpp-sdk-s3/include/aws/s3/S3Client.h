﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/s3/model/AbortMultipartUploadResult.h>
#include <aws/s3/model/CompleteMultipartUploadResult.h>
#include <aws/s3/model/CopyObjectResult.h>
#include <aws/s3/model/CreateBucketResult.h>
#include <aws/s3/model/CreateMultipartUploadResult.h>
#include <aws/s3/model/DeleteObjectResult.h>
#include <aws/s3/model/DeleteObjectsResult.h>
#include <aws/s3/model/GetBucketAccelerateConfigurationResult.h>
#include <aws/s3/model/GetBucketAclResult.h>
#include <aws/s3/model/GetBucketCorsResult.h>
#include <aws/s3/model/GetBucketLifecycleConfigurationResult.h>
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
#include <aws/s3/model/ListObjectsV2Result.h>
#include <aws/s3/model/ListPartsResult.h>
#include <aws/s3/model/PutObjectResult.h>
#include <aws/s3/model/PutObjectAclResult.h>
#include <aws/s3/model/RestoreObjectResult.h>
#include <aws/s3/model/UploadPartResult.h>
#include <aws/s3/model/UploadPartCopyResult.h>
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
        class GetBucketAccelerateConfigurationRequest;
        class GetBucketAclRequest;
        class GetBucketCorsRequest;
        class GetBucketLifecycleConfigurationRequest;
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
        class ListObjectsV2Request;
        class ListPartsRequest;
        class PutBucketAccelerateConfigurationRequest;
        class PutBucketAclRequest;
        class PutBucketCorsRequest;
        class PutBucketLifecycleConfigurationRequest;
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

        typedef Aws::Utils::Outcome<AbortMultipartUploadResult, Aws::Client::AWSError<S3Errors>> AbortMultipartUploadOutcome;
        typedef Aws::Utils::Outcome<CompleteMultipartUploadResult, Aws::Client::AWSError<S3Errors>> CompleteMultipartUploadOutcome;
        typedef Aws::Utils::Outcome<CopyObjectResult, Aws::Client::AWSError<S3Errors>> CopyObjectOutcome;
        typedef Aws::Utils::Outcome<CreateBucketResult, Aws::Client::AWSError<S3Errors>> CreateBucketOutcome;
        typedef Aws::Utils::Outcome<CreateMultipartUploadResult, Aws::Client::AWSError<S3Errors>> CreateMultipartUploadOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<S3Errors>> DeleteBucketOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<S3Errors>> DeleteBucketCorsOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<S3Errors>> DeleteBucketLifecycleOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<S3Errors>> DeleteBucketPolicyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<S3Errors>> DeleteBucketReplicationOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<S3Errors>> DeleteBucketTaggingOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<S3Errors>> DeleteBucketWebsiteOutcome;
        typedef Aws::Utils::Outcome<DeleteObjectResult, Aws::Client::AWSError<S3Errors>> DeleteObjectOutcome;
        typedef Aws::Utils::Outcome<DeleteObjectsResult, Aws::Client::AWSError<S3Errors>> DeleteObjectsOutcome;
        typedef Aws::Utils::Outcome<GetBucketAccelerateConfigurationResult, Aws::Client::AWSError<S3Errors>> GetBucketAccelerateConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetBucketAclResult, Aws::Client::AWSError<S3Errors>> GetBucketAclOutcome;
        typedef Aws::Utils::Outcome<GetBucketCorsResult, Aws::Client::AWSError<S3Errors>> GetBucketCorsOutcome;
        typedef Aws::Utils::Outcome<GetBucketLifecycleConfigurationResult, Aws::Client::AWSError<S3Errors>> GetBucketLifecycleConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetBucketLocationResult, Aws::Client::AWSError<S3Errors>> GetBucketLocationOutcome;
        typedef Aws::Utils::Outcome<GetBucketLoggingResult, Aws::Client::AWSError<S3Errors>> GetBucketLoggingOutcome;
        typedef Aws::Utils::Outcome<GetBucketNotificationConfigurationResult, Aws::Client::AWSError<S3Errors>> GetBucketNotificationConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetBucketPolicyResult, Aws::Client::AWSError<S3Errors>> GetBucketPolicyOutcome;
        typedef Aws::Utils::Outcome<GetBucketReplicationResult, Aws::Client::AWSError<S3Errors>> GetBucketReplicationOutcome;
        typedef Aws::Utils::Outcome<GetBucketRequestPaymentResult, Aws::Client::AWSError<S3Errors>> GetBucketRequestPaymentOutcome;
        typedef Aws::Utils::Outcome<GetBucketTaggingResult, Aws::Client::AWSError<S3Errors>> GetBucketTaggingOutcome;
        typedef Aws::Utils::Outcome<GetBucketVersioningResult, Aws::Client::AWSError<S3Errors>> GetBucketVersioningOutcome;
        typedef Aws::Utils::Outcome<GetBucketWebsiteResult, Aws::Client::AWSError<S3Errors>> GetBucketWebsiteOutcome;
        typedef Aws::Utils::Outcome<GetObjectResult, Aws::Client::AWSError<S3Errors>> GetObjectOutcome;
        typedef Aws::Utils::Outcome<GetObjectAclResult, Aws::Client::AWSError<S3Errors>> GetObjectAclOutcome;
        typedef Aws::Utils::Outcome<GetObjectTorrentResult, Aws::Client::AWSError<S3Errors>> GetObjectTorrentOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<S3Errors>> HeadBucketOutcome;
        typedef Aws::Utils::Outcome<HeadObjectResult, Aws::Client::AWSError<S3Errors>> HeadObjectOutcome;
        typedef Aws::Utils::Outcome<ListBucketsResult, Aws::Client::AWSError<S3Errors>> ListBucketsOutcome;
        typedef Aws::Utils::Outcome<ListMultipartUploadsResult, Aws::Client::AWSError<S3Errors>> ListMultipartUploadsOutcome;
        typedef Aws::Utils::Outcome<ListObjectVersionsResult, Aws::Client::AWSError<S3Errors>> ListObjectVersionsOutcome;
        typedef Aws::Utils::Outcome<ListObjectsResult, Aws::Client::AWSError<S3Errors>> ListObjectsOutcome;
        typedef Aws::Utils::Outcome<ListObjectsV2Result, Aws::Client::AWSError<S3Errors>> ListObjectsV2Outcome;
        typedef Aws::Utils::Outcome<ListPartsResult, Aws::Client::AWSError<S3Errors>> ListPartsOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<S3Errors>> PutBucketAccelerateConfigurationOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<S3Errors>> PutBucketAclOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<S3Errors>> PutBucketCorsOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<S3Errors>> PutBucketLifecycleConfigurationOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<S3Errors>> PutBucketLoggingOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<S3Errors>> PutBucketNotificationConfigurationOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<S3Errors>> PutBucketPolicyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<S3Errors>> PutBucketReplicationOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<S3Errors>> PutBucketRequestPaymentOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<S3Errors>> PutBucketTaggingOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<S3Errors>> PutBucketVersioningOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<S3Errors>> PutBucketWebsiteOutcome;
        typedef Aws::Utils::Outcome<PutObjectResult, Aws::Client::AWSError<S3Errors>> PutObjectOutcome;
        typedef Aws::Utils::Outcome<PutObjectAclResult, Aws::Client::AWSError<S3Errors>> PutObjectAclOutcome;
        typedef Aws::Utils::Outcome<RestoreObjectResult, Aws::Client::AWSError<S3Errors>> RestoreObjectOutcome;
        typedef Aws::Utils::Outcome<UploadPartResult, Aws::Client::AWSError<S3Errors>> UploadPartOutcome;
        typedef Aws::Utils::Outcome<UploadPartCopyResult, Aws::Client::AWSError<S3Errors>> UploadPartCopyOutcome;

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
        typedef std::future<GetBucketAccelerateConfigurationOutcome> GetBucketAccelerateConfigurationOutcomeCallable;
        typedef std::future<GetBucketAclOutcome> GetBucketAclOutcomeCallable;
        typedef std::future<GetBucketCorsOutcome> GetBucketCorsOutcomeCallable;
        typedef std::future<GetBucketLifecycleConfigurationOutcome> GetBucketLifecycleConfigurationOutcomeCallable;
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
        typedef std::future<ListObjectsV2Outcome> ListObjectsV2OutcomeCallable;
        typedef std::future<ListPartsOutcome> ListPartsOutcomeCallable;
        typedef std::future<PutBucketAccelerateConfigurationOutcome> PutBucketAccelerateConfigurationOutcomeCallable;
        typedef std::future<PutBucketAclOutcome> PutBucketAclOutcomeCallable;
        typedef std::future<PutBucketCorsOutcome> PutBucketCorsOutcomeCallable;
        typedef std::future<PutBucketLifecycleConfigurationOutcome> PutBucketLifecycleConfigurationOutcomeCallable;
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

    typedef std::function<void(const S3Client*, const Model::AbortMultipartUploadRequest&, const Model::AbortMultipartUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AbortMultipartUploadResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::CompleteMultipartUploadRequest&, const Model::CompleteMultipartUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CompleteMultipartUploadResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::CopyObjectRequest&, const Model::CopyObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyObjectResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::CreateBucketRequest&, const Model::CreateBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBucketResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::CreateMultipartUploadRequest&, const Model::CreateMultipartUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMultipartUploadResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::DeleteBucketRequest&, const Model::DeleteBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::DeleteBucketCorsRequest&, const Model::DeleteBucketCorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketCorsResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::DeleteBucketLifecycleRequest&, const Model::DeleteBucketLifecycleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketLifecycleResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::DeleteBucketPolicyRequest&, const Model::DeleteBucketPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketPolicyResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::DeleteBucketReplicationRequest&, const Model::DeleteBucketReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketReplicationResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::DeleteBucketTaggingRequest&, const Model::DeleteBucketTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketTaggingResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::DeleteBucketWebsiteRequest&, const Model::DeleteBucketWebsiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketWebsiteResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::DeleteObjectRequest&, const Model::DeleteObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteObjectResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::DeleteObjectsRequest&, const Model::DeleteObjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteObjectsResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::GetBucketAccelerateConfigurationRequest&, const Model::GetBucketAccelerateConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketAccelerateConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::GetBucketAclRequest&, const Model::GetBucketAclOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketAclResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::GetBucketCorsRequest&, const Model::GetBucketCorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketCorsResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::GetBucketLifecycleConfigurationRequest&, const Model::GetBucketLifecycleConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketLifecycleConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::GetBucketLocationRequest&, const Model::GetBucketLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketLocationResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::GetBucketLoggingRequest&, const Model::GetBucketLoggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketLoggingResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::GetBucketNotificationConfigurationRequest&, const Model::GetBucketNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketNotificationConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::GetBucketPolicyRequest&, const Model::GetBucketPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketPolicyResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::GetBucketReplicationRequest&, const Model::GetBucketReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketReplicationResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::GetBucketRequestPaymentRequest&, const Model::GetBucketRequestPaymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketRequestPaymentResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::GetBucketTaggingRequest&, const Model::GetBucketTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketTaggingResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::GetBucketVersioningRequest&, const Model::GetBucketVersioningOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketVersioningResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::GetBucketWebsiteRequest&, const Model::GetBucketWebsiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketWebsiteResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::GetObjectRequest&, const Model::GetObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetObjectResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::GetObjectAclRequest&, const Model::GetObjectAclOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetObjectAclResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::GetObjectTorrentRequest&, const Model::GetObjectTorrentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetObjectTorrentResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::HeadBucketRequest&, const Model::HeadBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > HeadBucketResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::HeadObjectRequest&, const Model::HeadObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > HeadObjectResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::ListBucketsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBucketsResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::ListMultipartUploadsRequest&, const Model::ListMultipartUploadsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMultipartUploadsResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::ListObjectVersionsRequest&, const Model::ListObjectVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListObjectVersionsResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::ListObjectsRequest&, const Model::ListObjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListObjectsResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::ListObjectsV2Request&, const Model::ListObjectsV2Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListObjectsV2ResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::ListPartsRequest&, const Model::ListPartsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPartsResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::PutBucketAccelerateConfigurationRequest&, const Model::PutBucketAccelerateConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketAccelerateConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::PutBucketAclRequest&, const Model::PutBucketAclOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketAclResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::PutBucketCorsRequest&, const Model::PutBucketCorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketCorsResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::PutBucketLifecycleConfigurationRequest&, const Model::PutBucketLifecycleConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketLifecycleConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::PutBucketLoggingRequest&, const Model::PutBucketLoggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketLoggingResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::PutBucketNotificationConfigurationRequest&, const Model::PutBucketNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketNotificationConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::PutBucketPolicyRequest&, const Model::PutBucketPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketPolicyResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::PutBucketReplicationRequest&, const Model::PutBucketReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketReplicationResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::PutBucketRequestPaymentRequest&, const Model::PutBucketRequestPaymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketRequestPaymentResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::PutBucketTaggingRequest&, const Model::PutBucketTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketTaggingResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::PutBucketVersioningRequest&, const Model::PutBucketVersioningOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketVersioningResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::PutBucketWebsiteRequest&, const Model::PutBucketWebsiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketWebsiteResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::PutObjectRequest&, const Model::PutObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutObjectResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::PutObjectAclRequest&, const Model::PutObjectAclOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutObjectAclResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::RestoreObjectRequest&, const Model::RestoreObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreObjectResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::UploadPartRequest&, const Model::UploadPartOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UploadPartResponseReceivedHandler;
    typedef std::function<void(const S3Client*, const Model::UploadPartCopyRequest&, const Model::UploadPartCopyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UploadPartCopyResponseReceivedHandler;

    //max expiration for presigned urls in s3 is 7 days.
    static const unsigned MAX_EXPIRATION_SECONDS = 7 * 24 * 60 * 60;

    class AWS_S3_API S3Client : public Aws::Client::AWSXMLClient
    {
    public:
        typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3Client(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(), bool signPayloads = false);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3Client(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(), bool signPayloads = false);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        S3Client(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(), bool signPayloads = false);

        virtual ~S3Client();

        /**
         * <p>Aborts a multipart upload.</p><p>To verify that all parts have been removed,
         * so you don't get charged for the part storage, you should call the List Parts
         * operation and ensure the parts list is empty.</p>
         */
        virtual Model::AbortMultipartUploadOutcome AbortMultipartUpload(const Model::AbortMultipartUploadRequest& request) const;

        /**
         * <p>Aborts a multipart upload.</p><p>To verify that all parts have been removed,
         * so you don't get charged for the part storage, you should call the List Parts
         * operation and ensure the parts list is empty.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AbortMultipartUploadOutcomeCallable AbortMultipartUploadCallable(const Model::AbortMultipartUploadRequest& request) const;

        /**
         * <p>Aborts a multipart upload.</p><p>To verify that all parts have been removed,
         * so you don't get charged for the part storage, you should call the List Parts
         * operation and ensure the parts list is empty.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AbortMultipartUploadAsync(const Model::AbortMultipartUploadRequest& request, const AbortMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Completes a multipart upload by assembling previously uploaded parts.
         */
        virtual Model::CompleteMultipartUploadOutcome CompleteMultipartUpload(const Model::CompleteMultipartUploadRequest& request) const;

        /**
         * Completes a multipart upload by assembling previously uploaded parts.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CompleteMultipartUploadOutcomeCallable CompleteMultipartUploadCallable(const Model::CompleteMultipartUploadRequest& request) const;

        /**
         * Completes a multipart upload by assembling previously uploaded parts.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CompleteMultipartUploadAsync(const Model::CompleteMultipartUploadRequest& request, const CompleteMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a copy of an object that is already stored in Amazon S3.
         */
        virtual Model::CopyObjectOutcome CopyObject(const Model::CopyObjectRequest& request) const;

        /**
         * Creates a copy of an object that is already stored in Amazon S3.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyObjectOutcomeCallable CopyObjectCallable(const Model::CopyObjectRequest& request) const;

        /**
         * Creates a copy of an object that is already stored in Amazon S3.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyObjectAsync(const Model::CopyObjectRequest& request, const CopyObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a new bucket.
         */
        virtual Model::CreateBucketOutcome CreateBucket(const Model::CreateBucketRequest& request) const;

        /**
         * Creates a new bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBucketOutcomeCallable CreateBucketCallable(const Model::CreateBucketRequest& request) const;

        /**
         * Creates a new bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBucketAsync(const Model::CreateBucketRequest& request, const CreateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates a multipart upload and returns an upload ID.</p><p><b>Note:</b>
         * After you initiate multipart upload and upload one or more parts, you must
         * either complete or abort multipart upload in order to stop getting charged for
         * storage of the uploaded parts. Only after you either complete or abort multipart
         * upload, Amazon S3 frees up the parts storage and stops charging you for the
         * parts storage.</p>
         */
        virtual Model::CreateMultipartUploadOutcome CreateMultipartUpload(const Model::CreateMultipartUploadRequest& request) const;

        /**
         * <p>Initiates a multipart upload and returns an upload ID.</p><p><b>Note:</b>
         * After you initiate multipart upload and upload one or more parts, you must
         * either complete or abort multipart upload in order to stop getting charged for
         * storage of the uploaded parts. Only after you either complete or abort multipart
         * upload, Amazon S3 frees up the parts storage and stops charging you for the
         * parts storage.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMultipartUploadOutcomeCallable CreateMultipartUploadCallable(const Model::CreateMultipartUploadRequest& request) const;

        /**
         * <p>Initiates a multipart upload and returns an upload ID.</p><p><b>Note:</b>
         * After you initiate multipart upload and upload one or more parts, you must
         * either complete or abort multipart upload in order to stop getting charged for
         * storage of the uploaded parts. Only after you either complete or abort multipart
         * upload, Amazon S3 frees up the parts storage and stops charging you for the
         * parts storage.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMultipartUploadAsync(const Model::CreateMultipartUploadRequest& request, const CreateMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes the bucket. All objects (including all object versions and Delete
         * Markers) in the bucket must be deleted before the bucket itself can be deleted.
         */
        virtual Model::DeleteBucketOutcome DeleteBucket(const Model::DeleteBucketRequest& request) const;

        /**
         * Deletes the bucket. All objects (including all object versions and Delete
         * Markers) in the bucket must be deleted before the bucket itself can be deleted.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketOutcomeCallable DeleteBucketCallable(const Model::DeleteBucketRequest& request) const;

        /**
         * Deletes the bucket. All objects (including all object versions and Delete
         * Markers) in the bucket must be deleted before the bucket itself can be deleted.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketAsync(const Model::DeleteBucketRequest& request, const DeleteBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes the cors configuration information set for the bucket.
         */
        virtual Model::DeleteBucketCorsOutcome DeleteBucketCors(const Model::DeleteBucketCorsRequest& request) const;

        /**
         * Deletes the cors configuration information set for the bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketCorsOutcomeCallable DeleteBucketCorsCallable(const Model::DeleteBucketCorsRequest& request) const;

        /**
         * Deletes the cors configuration information set for the bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketCorsAsync(const Model::DeleteBucketCorsRequest& request, const DeleteBucketCorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes the lifecycle configuration from the bucket.
         */
        virtual Model::DeleteBucketLifecycleOutcome DeleteBucketLifecycle(const Model::DeleteBucketLifecycleRequest& request) const;

        /**
         * Deletes the lifecycle configuration from the bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketLifecycleOutcomeCallable DeleteBucketLifecycleCallable(const Model::DeleteBucketLifecycleRequest& request) const;

        /**
         * Deletes the lifecycle configuration from the bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketLifecycleAsync(const Model::DeleteBucketLifecycleRequest& request, const DeleteBucketLifecycleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes the policy from the bucket.
         */
        virtual Model::DeleteBucketPolicyOutcome DeleteBucketPolicy(const Model::DeleteBucketPolicyRequest& request) const;

        /**
         * Deletes the policy from the bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketPolicyOutcomeCallable DeleteBucketPolicyCallable(const Model::DeleteBucketPolicyRequest& request) const;

        /**
         * Deletes the policy from the bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketPolicyAsync(const Model::DeleteBucketPolicyRequest& request, const DeleteBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes the replication configuration from the bucket.
         */
        virtual Model::DeleteBucketReplicationOutcome DeleteBucketReplication(const Model::DeleteBucketReplicationRequest& request) const;

        /**
         * Deletes the replication configuration from the bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketReplicationOutcomeCallable DeleteBucketReplicationCallable(const Model::DeleteBucketReplicationRequest& request) const;

        /**
         * Deletes the replication configuration from the bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketReplicationAsync(const Model::DeleteBucketReplicationRequest& request, const DeleteBucketReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes the tags from the bucket.
         */
        virtual Model::DeleteBucketTaggingOutcome DeleteBucketTagging(const Model::DeleteBucketTaggingRequest& request) const;

        /**
         * Deletes the tags from the bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketTaggingOutcomeCallable DeleteBucketTaggingCallable(const Model::DeleteBucketTaggingRequest& request) const;

        /**
         * Deletes the tags from the bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketTaggingAsync(const Model::DeleteBucketTaggingRequest& request, const DeleteBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * This operation removes the website configuration from the bucket.
         */
        virtual Model::DeleteBucketWebsiteOutcome DeleteBucketWebsite(const Model::DeleteBucketWebsiteRequest& request) const;

        /**
         * This operation removes the website configuration from the bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketWebsiteOutcomeCallable DeleteBucketWebsiteCallable(const Model::DeleteBucketWebsiteRequest& request) const;

        /**
         * This operation removes the website configuration from the bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketWebsiteAsync(const Model::DeleteBucketWebsiteRequest& request, const DeleteBucketWebsiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Removes the null version (if there is one) of an object and inserts a delete
         * marker, which becomes the latest version of the object. If there isn't a null
         * version, Amazon S3 does not remove any objects.
         */
        virtual Model::DeleteObjectOutcome DeleteObject(const Model::DeleteObjectRequest& request) const;

        /**
         * Removes the null version (if there is one) of an object and inserts a delete
         * marker, which becomes the latest version of the object. If there isn't a null
         * version, Amazon S3 does not remove any objects.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteObjectOutcomeCallable DeleteObjectCallable(const Model::DeleteObjectRequest& request) const;

        /**
         * Removes the null version (if there is one) of an object and inserts a delete
         * marker, which becomes the latest version of the object. If there isn't a null
         * version, Amazon S3 does not remove any objects.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteObjectAsync(const Model::DeleteObjectRequest& request, const DeleteObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * This operation enables you to delete multiple objects from a bucket using a
         * single HTTP request. You may specify up to 1000 keys.
         */
        virtual Model::DeleteObjectsOutcome DeleteObjects(const Model::DeleteObjectsRequest& request) const;

        /**
         * This operation enables you to delete multiple objects from a bucket using a
         * single HTTP request. You may specify up to 1000 keys.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteObjectsOutcomeCallable DeleteObjectsCallable(const Model::DeleteObjectsRequest& request) const;

        /**
         * This operation enables you to delete multiple objects from a bucket using a
         * single HTTP request. You may specify up to 1000 keys.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteObjectsAsync(const Model::DeleteObjectsRequest& request, const DeleteObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns the accelerate configuration of a bucket.
         */
        virtual Model::GetBucketAccelerateConfigurationOutcome GetBucketAccelerateConfiguration(const Model::GetBucketAccelerateConfigurationRequest& request) const;

        /**
         * Returns the accelerate configuration of a bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketAccelerateConfigurationOutcomeCallable GetBucketAccelerateConfigurationCallable(const Model::GetBucketAccelerateConfigurationRequest& request) const;

        /**
         * Returns the accelerate configuration of a bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketAccelerateConfigurationAsync(const Model::GetBucketAccelerateConfigurationRequest& request, const GetBucketAccelerateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Gets the access control policy for the bucket.
         */
        virtual Model::GetBucketAclOutcome GetBucketAcl(const Model::GetBucketAclRequest& request) const;

        /**
         * Gets the access control policy for the bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketAclOutcomeCallable GetBucketAclCallable(const Model::GetBucketAclRequest& request) const;

        /**
         * Gets the access control policy for the bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketAclAsync(const Model::GetBucketAclRequest& request, const GetBucketAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns the cors configuration for the bucket.
         */
        virtual Model::GetBucketCorsOutcome GetBucketCors(const Model::GetBucketCorsRequest& request) const;

        /**
         * Returns the cors configuration for the bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketCorsOutcomeCallable GetBucketCorsCallable(const Model::GetBucketCorsRequest& request) const;

        /**
         * Returns the cors configuration for the bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketCorsAsync(const Model::GetBucketCorsRequest& request, const GetBucketCorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns the lifecycle configuration information set on the bucket.
         */
        virtual Model::GetBucketLifecycleConfigurationOutcome GetBucketLifecycleConfiguration(const Model::GetBucketLifecycleConfigurationRequest& request) const;

        /**
         * Returns the lifecycle configuration information set on the bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketLifecycleConfigurationOutcomeCallable GetBucketLifecycleConfigurationCallable(const Model::GetBucketLifecycleConfigurationRequest& request) const;

        /**
         * Returns the lifecycle configuration information set on the bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketLifecycleConfigurationAsync(const Model::GetBucketLifecycleConfigurationRequest& request, const GetBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns the region the bucket resides in.
         */
        virtual Model::GetBucketLocationOutcome GetBucketLocation(const Model::GetBucketLocationRequest& request) const;

        /**
         * Returns the region the bucket resides in.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketLocationOutcomeCallable GetBucketLocationCallable(const Model::GetBucketLocationRequest& request) const;

        /**
         * Returns the region the bucket resides in.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketLocationAsync(const Model::GetBucketLocationRequest& request, const GetBucketLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns the logging status of a bucket and the permissions users have to view
         * and modify that status. To use GET, you must be the bucket owner.
         */
        virtual Model::GetBucketLoggingOutcome GetBucketLogging(const Model::GetBucketLoggingRequest& request) const;

        /**
         * Returns the logging status of a bucket and the permissions users have to view
         * and modify that status. To use GET, you must be the bucket owner.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketLoggingOutcomeCallable GetBucketLoggingCallable(const Model::GetBucketLoggingRequest& request) const;

        /**
         * Returns the logging status of a bucket and the permissions users have to view
         * and modify that status. To use GET, you must be the bucket owner.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketLoggingAsync(const Model::GetBucketLoggingRequest& request, const GetBucketLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns the notification configuration of a bucket.
         */
        virtual Model::GetBucketNotificationConfigurationOutcome GetBucketNotificationConfiguration(const Model::GetBucketNotificationConfigurationRequest& request) const;

        /**
         * Returns the notification configuration of a bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketNotificationConfigurationOutcomeCallable GetBucketNotificationConfigurationCallable(const Model::GetBucketNotificationConfigurationRequest& request) const;

        /**
         * Returns the notification configuration of a bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketNotificationConfigurationAsync(const Model::GetBucketNotificationConfigurationRequest& request, const GetBucketNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns the policy of a specified bucket.
         */
        virtual Model::GetBucketPolicyOutcome GetBucketPolicy(const Model::GetBucketPolicyRequest& request) const;

        /**
         * Returns the policy of a specified bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketPolicyOutcomeCallable GetBucketPolicyCallable(const Model::GetBucketPolicyRequest& request) const;

        /**
         * Returns the policy of a specified bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketPolicyAsync(const Model::GetBucketPolicyRequest& request, const GetBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns the replication configuration of a bucket.
         */
        virtual Model::GetBucketReplicationOutcome GetBucketReplication(const Model::GetBucketReplicationRequest& request) const;

        /**
         * Returns the replication configuration of a bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketReplicationOutcomeCallable GetBucketReplicationCallable(const Model::GetBucketReplicationRequest& request) const;

        /**
         * Returns the replication configuration of a bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketReplicationAsync(const Model::GetBucketReplicationRequest& request, const GetBucketReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns the request payment configuration of a bucket.
         */
        virtual Model::GetBucketRequestPaymentOutcome GetBucketRequestPayment(const Model::GetBucketRequestPaymentRequest& request) const;

        /**
         * Returns the request payment configuration of a bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketRequestPaymentOutcomeCallable GetBucketRequestPaymentCallable(const Model::GetBucketRequestPaymentRequest& request) const;

        /**
         * Returns the request payment configuration of a bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketRequestPaymentAsync(const Model::GetBucketRequestPaymentRequest& request, const GetBucketRequestPaymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns the tag set associated with the bucket.
         */
        virtual Model::GetBucketTaggingOutcome GetBucketTagging(const Model::GetBucketTaggingRequest& request) const;

        /**
         * Returns the tag set associated with the bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketTaggingOutcomeCallable GetBucketTaggingCallable(const Model::GetBucketTaggingRequest& request) const;

        /**
         * Returns the tag set associated with the bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketTaggingAsync(const Model::GetBucketTaggingRequest& request, const GetBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns the versioning state of a bucket.
         */
        virtual Model::GetBucketVersioningOutcome GetBucketVersioning(const Model::GetBucketVersioningRequest& request) const;

        /**
         * Returns the versioning state of a bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketVersioningOutcomeCallable GetBucketVersioningCallable(const Model::GetBucketVersioningRequest& request) const;

        /**
         * Returns the versioning state of a bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketVersioningAsync(const Model::GetBucketVersioningRequest& request, const GetBucketVersioningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns the website configuration for a bucket.
         */
        virtual Model::GetBucketWebsiteOutcome GetBucketWebsite(const Model::GetBucketWebsiteRequest& request) const;

        /**
         * Returns the website configuration for a bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketWebsiteOutcomeCallable GetBucketWebsiteCallable(const Model::GetBucketWebsiteRequest& request) const;

        /**
         * Returns the website configuration for a bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketWebsiteAsync(const Model::GetBucketWebsiteRequest& request, const GetBucketWebsiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves objects from Amazon S3.
         */
        virtual Model::GetObjectOutcome GetObject(const Model::GetObjectRequest& request) const;

        /**
         * Retrieves objects from Amazon S3.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetObjectOutcomeCallable GetObjectCallable(const Model::GetObjectRequest& request) const;

        /**
         * Retrieves objects from Amazon S3.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetObjectAsync(const Model::GetObjectRequest& request, const GetObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns the access control list (ACL) of an object.
         */
        virtual Model::GetObjectAclOutcome GetObjectAcl(const Model::GetObjectAclRequest& request) const;

        /**
         * Returns the access control list (ACL) of an object.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetObjectAclOutcomeCallable GetObjectAclCallable(const Model::GetObjectAclRequest& request) const;

        /**
         * Returns the access control list (ACL) of an object.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetObjectAclAsync(const Model::GetObjectAclRequest& request, const GetObjectAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Return torrent files from a bucket.
         */
        virtual Model::GetObjectTorrentOutcome GetObjectTorrent(const Model::GetObjectTorrentRequest& request) const;

        /**
         * Return torrent files from a bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetObjectTorrentOutcomeCallable GetObjectTorrentCallable(const Model::GetObjectTorrentRequest& request) const;

        /**
         * Return torrent files from a bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetObjectTorrentAsync(const Model::GetObjectTorrentRequest& request, const GetObjectTorrentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * This operation is useful to determine if a bucket exists and you have permission
         * to access it.
         */
        virtual Model::HeadBucketOutcome HeadBucket(const Model::HeadBucketRequest& request) const;

        /**
         * This operation is useful to determine if a bucket exists and you have permission
         * to access it.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::HeadBucketOutcomeCallable HeadBucketCallable(const Model::HeadBucketRequest& request) const;

        /**
         * This operation is useful to determine if a bucket exists and you have permission
         * to access it.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void HeadBucketAsync(const Model::HeadBucketRequest& request, const HeadBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * The HEAD operation retrieves metadata from an object without returning the
         * object itself. This operation is useful if you're only interested in an object's
         * metadata. To use HEAD, you must have READ access to the object.
         */
        virtual Model::HeadObjectOutcome HeadObject(const Model::HeadObjectRequest& request) const;

        /**
         * The HEAD operation retrieves metadata from an object without returning the
         * object itself. This operation is useful if you're only interested in an object's
         * metadata. To use HEAD, you must have READ access to the object.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::HeadObjectOutcomeCallable HeadObjectCallable(const Model::HeadObjectRequest& request) const;

        /**
         * The HEAD operation retrieves metadata from an object without returning the
         * object itself. This operation is useful if you're only interested in an object's
         * metadata. To use HEAD, you must have READ access to the object.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void HeadObjectAsync(const Model::HeadObjectRequest& request, const HeadObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns a list of all buckets owned by the authenticated sender of the request.
         */
        virtual Model::ListBucketsOutcome ListBuckets() const;

        /**
         * Returns a list of all buckets owned by the authenticated sender of the request.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBucketsOutcomeCallable ListBucketsCallable() const;

        /**
         * Returns a list of all buckets owned by the authenticated sender of the request.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBucketsAsync(const ListBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * This operation lists in-progress multipart uploads.
         */
        virtual Model::ListMultipartUploadsOutcome ListMultipartUploads(const Model::ListMultipartUploadsRequest& request) const;

        /**
         * This operation lists in-progress multipart uploads.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMultipartUploadsOutcomeCallable ListMultipartUploadsCallable(const Model::ListMultipartUploadsRequest& request) const;

        /**
         * This operation lists in-progress multipart uploads.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMultipartUploadsAsync(const Model::ListMultipartUploadsRequest& request, const ListMultipartUploadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns metadata about all of the versions of objects in a bucket.
         */
        virtual Model::ListObjectVersionsOutcome ListObjectVersions(const Model::ListObjectVersionsRequest& request) const;

        /**
         * Returns metadata about all of the versions of objects in a bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListObjectVersionsOutcomeCallable ListObjectVersionsCallable(const Model::ListObjectVersionsRequest& request) const;

        /**
         * Returns metadata about all of the versions of objects in a bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListObjectVersionsAsync(const Model::ListObjectVersionsRequest& request, const ListObjectVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns some or all (up to 1000) of the objects in a bucket. You can use the
         * request parameters as selection criteria to return a subset of the objects in a
         * bucket.
         */
        virtual Model::ListObjectsOutcome ListObjects(const Model::ListObjectsRequest& request) const;

        /**
         * Returns some or all (up to 1000) of the objects in a bucket. You can use the
         * request parameters as selection criteria to return a subset of the objects in a
         * bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListObjectsOutcomeCallable ListObjectsCallable(const Model::ListObjectsRequest& request) const;

        /**
         * Returns some or all (up to 1000) of the objects in a bucket. You can use the
         * request parameters as selection criteria to return a subset of the objects in a
         * bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListObjectsAsync(const Model::ListObjectsRequest& request, const ListObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns some or all (up to 1000) of the objects in a bucket. You can use the
         * request parameters as selection criteria to return a subset of the objects in a
         * bucket. Note: ListObjectsV2 is the revised List Objects API and we recommend you
         * use this revised API for new application development.
         */
        virtual Model::ListObjectsV2Outcome ListObjectsV2(const Model::ListObjectsV2Request& request) const;

        /**
         * Returns some or all (up to 1000) of the objects in a bucket. You can use the
         * request parameters as selection criteria to return a subset of the objects in a
         * bucket. Note: ListObjectsV2 is the revised List Objects API and we recommend you
         * use this revised API for new application development.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListObjectsV2OutcomeCallable ListObjectsV2Callable(const Model::ListObjectsV2Request& request) const;

        /**
         * Returns some or all (up to 1000) of the objects in a bucket. You can use the
         * request parameters as selection criteria to return a subset of the objects in a
         * bucket. Note: ListObjectsV2 is the revised List Objects API and we recommend you
         * use this revised API for new application development.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListObjectsV2Async(const Model::ListObjectsV2Request& request, const ListObjectsV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists the parts that have been uploaded for a specific multipart upload.
         */
        virtual Model::ListPartsOutcome ListParts(const Model::ListPartsRequest& request) const;

        /**
         * Lists the parts that have been uploaded for a specific multipart upload.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPartsOutcomeCallable ListPartsCallable(const Model::ListPartsRequest& request) const;

        /**
         * Lists the parts that have been uploaded for a specific multipart upload.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPartsAsync(const Model::ListPartsRequest& request, const ListPartsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Sets the accelerate configuration of an existing bucket.
         */
        virtual Model::PutBucketAccelerateConfigurationOutcome PutBucketAccelerateConfiguration(const Model::PutBucketAccelerateConfigurationRequest& request) const;

        /**
         * Sets the accelerate configuration of an existing bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketAccelerateConfigurationOutcomeCallable PutBucketAccelerateConfigurationCallable(const Model::PutBucketAccelerateConfigurationRequest& request) const;

        /**
         * Sets the accelerate configuration of an existing bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketAccelerateConfigurationAsync(const Model::PutBucketAccelerateConfigurationRequest& request, const PutBucketAccelerateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Sets the permissions on a bucket using access control lists (ACL).
         */
        virtual Model::PutBucketAclOutcome PutBucketAcl(const Model::PutBucketAclRequest& request) const;

        /**
         * Sets the permissions on a bucket using access control lists (ACL).
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketAclOutcomeCallable PutBucketAclCallable(const Model::PutBucketAclRequest& request) const;

        /**
         * Sets the permissions on a bucket using access control lists (ACL).
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketAclAsync(const Model::PutBucketAclRequest& request, const PutBucketAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Sets the cors configuration for a bucket.
         */
        virtual Model::PutBucketCorsOutcome PutBucketCors(const Model::PutBucketCorsRequest& request) const;

        /**
         * Sets the cors configuration for a bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketCorsOutcomeCallable PutBucketCorsCallable(const Model::PutBucketCorsRequest& request) const;

        /**
         * Sets the cors configuration for a bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketCorsAsync(const Model::PutBucketCorsRequest& request, const PutBucketCorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Sets lifecycle configuration for your bucket. If a lifecycle configuration
         * exists, it replaces it.
         */
        virtual Model::PutBucketLifecycleConfigurationOutcome PutBucketLifecycleConfiguration(const Model::PutBucketLifecycleConfigurationRequest& request) const;

        /**
         * Sets lifecycle configuration for your bucket. If a lifecycle configuration
         * exists, it replaces it.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketLifecycleConfigurationOutcomeCallable PutBucketLifecycleConfigurationCallable(const Model::PutBucketLifecycleConfigurationRequest& request) const;

        /**
         * Sets lifecycle configuration for your bucket. If a lifecycle configuration
         * exists, it replaces it.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketLifecycleConfigurationAsync(const Model::PutBucketLifecycleConfigurationRequest& request, const PutBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Set the logging parameters for a bucket and to specify permissions for who can
         * view and modify the logging parameters. To set the logging status of a bucket,
         * you must be the bucket owner.
         */
        virtual Model::PutBucketLoggingOutcome PutBucketLogging(const Model::PutBucketLoggingRequest& request) const;

        /**
         * Set the logging parameters for a bucket and to specify permissions for who can
         * view and modify the logging parameters. To set the logging status of a bucket,
         * you must be the bucket owner.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketLoggingOutcomeCallable PutBucketLoggingCallable(const Model::PutBucketLoggingRequest& request) const;

        /**
         * Set the logging parameters for a bucket and to specify permissions for who can
         * view and modify the logging parameters. To set the logging status of a bucket,
         * you must be the bucket owner.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketLoggingAsync(const Model::PutBucketLoggingRequest& request, const PutBucketLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Enables notifications of specified events for a bucket.
         */
        virtual Model::PutBucketNotificationConfigurationOutcome PutBucketNotificationConfiguration(const Model::PutBucketNotificationConfigurationRequest& request) const;

        /**
         * Enables notifications of specified events for a bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketNotificationConfigurationOutcomeCallable PutBucketNotificationConfigurationCallable(const Model::PutBucketNotificationConfigurationRequest& request) const;

        /**
         * Enables notifications of specified events for a bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketNotificationConfigurationAsync(const Model::PutBucketNotificationConfigurationRequest& request, const PutBucketNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Replaces a policy on a bucket. If the bucket already has a policy, the one in
         * this request completely replaces it.
         */
        virtual Model::PutBucketPolicyOutcome PutBucketPolicy(const Model::PutBucketPolicyRequest& request) const;

        /**
         * Replaces a policy on a bucket. If the bucket already has a policy, the one in
         * this request completely replaces it.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketPolicyOutcomeCallable PutBucketPolicyCallable(const Model::PutBucketPolicyRequest& request) const;

        /**
         * Replaces a policy on a bucket. If the bucket already has a policy, the one in
         * this request completely replaces it.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketPolicyAsync(const Model::PutBucketPolicyRequest& request, const PutBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a new replication configuration (or replaces an existing one, if
         * present).
         */
        virtual Model::PutBucketReplicationOutcome PutBucketReplication(const Model::PutBucketReplicationRequest& request) const;

        /**
         * Creates a new replication configuration (or replaces an existing one, if
         * present).
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketReplicationOutcomeCallable PutBucketReplicationCallable(const Model::PutBucketReplicationRequest& request) const;

        /**
         * Creates a new replication configuration (or replaces an existing one, if
         * present).
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketReplicationAsync(const Model::PutBucketReplicationRequest& request, const PutBucketReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Sets the request payment configuration for a bucket. By default, the bucket
         * owner pays for downloads from the bucket. This configuration parameter enables
         * the bucket owner (only) to specify that the person requesting the download will
         * be charged for the download. Documentation on requester pays buckets can be
         * found at
         * http://docs.aws.amazon.com/AmazonS3/latest/dev/RequesterPaysBuckets.html
         */
        virtual Model::PutBucketRequestPaymentOutcome PutBucketRequestPayment(const Model::PutBucketRequestPaymentRequest& request) const;

        /**
         * Sets the request payment configuration for a bucket. By default, the bucket
         * owner pays for downloads from the bucket. This configuration parameter enables
         * the bucket owner (only) to specify that the person requesting the download will
         * be charged for the download. Documentation on requester pays buckets can be
         * found at
         * http://docs.aws.amazon.com/AmazonS3/latest/dev/RequesterPaysBuckets.html
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketRequestPaymentOutcomeCallable PutBucketRequestPaymentCallable(const Model::PutBucketRequestPaymentRequest& request) const;

        /**
         * Sets the request payment configuration for a bucket. By default, the bucket
         * owner pays for downloads from the bucket. This configuration parameter enables
         * the bucket owner (only) to specify that the person requesting the download will
         * be charged for the download. Documentation on requester pays buckets can be
         * found at
         * http://docs.aws.amazon.com/AmazonS3/latest/dev/RequesterPaysBuckets.html
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketRequestPaymentAsync(const Model::PutBucketRequestPaymentRequest& request, const PutBucketRequestPaymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Sets the tags for a bucket.
         */
        virtual Model::PutBucketTaggingOutcome PutBucketTagging(const Model::PutBucketTaggingRequest& request) const;

        /**
         * Sets the tags for a bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketTaggingOutcomeCallable PutBucketTaggingCallable(const Model::PutBucketTaggingRequest& request) const;

        /**
         * Sets the tags for a bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketTaggingAsync(const Model::PutBucketTaggingRequest& request, const PutBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Sets the versioning state of an existing bucket. To set the versioning state,
         * you must be the bucket owner.
         */
        virtual Model::PutBucketVersioningOutcome PutBucketVersioning(const Model::PutBucketVersioningRequest& request) const;

        /**
         * Sets the versioning state of an existing bucket. To set the versioning state,
         * you must be the bucket owner.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketVersioningOutcomeCallable PutBucketVersioningCallable(const Model::PutBucketVersioningRequest& request) const;

        /**
         * Sets the versioning state of an existing bucket. To set the versioning state,
         * you must be the bucket owner.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketVersioningAsync(const Model::PutBucketVersioningRequest& request, const PutBucketVersioningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Set the website configuration for a bucket.
         */
        virtual Model::PutBucketWebsiteOutcome PutBucketWebsite(const Model::PutBucketWebsiteRequest& request) const;

        /**
         * Set the website configuration for a bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketWebsiteOutcomeCallable PutBucketWebsiteCallable(const Model::PutBucketWebsiteRequest& request) const;

        /**
         * Set the website configuration for a bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketWebsiteAsync(const Model::PutBucketWebsiteRequest& request, const PutBucketWebsiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Adds an object to a bucket.
         */
        virtual Model::PutObjectOutcome PutObject(const Model::PutObjectRequest& request) const;

        /**
         * Adds an object to a bucket.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutObjectOutcomeCallable PutObjectCallable(const Model::PutObjectRequest& request) const;

        /**
         * Adds an object to a bucket.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutObjectAsync(const Model::PutObjectRequest& request, const PutObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * uses the acl subresource to set the access control list (ACL) permissions for an
         * object that already exists in a bucket
         */
        virtual Model::PutObjectAclOutcome PutObjectAcl(const Model::PutObjectAclRequest& request) const;

        /**
         * uses the acl subresource to set the access control list (ACL) permissions for an
         * object that already exists in a bucket
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutObjectAclOutcomeCallable PutObjectAclCallable(const Model::PutObjectAclRequest& request) const;

        /**
         * uses the acl subresource to set the access control list (ACL) permissions for an
         * object that already exists in a bucket
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutObjectAclAsync(const Model::PutObjectAclRequest& request, const PutObjectAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Restores an archived copy of an object back into Amazon S3
         */
        virtual Model::RestoreObjectOutcome RestoreObject(const Model::RestoreObjectRequest& request) const;

        /**
         * Restores an archived copy of an object back into Amazon S3
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreObjectOutcomeCallable RestoreObjectCallable(const Model::RestoreObjectRequest& request) const;

        /**
         * Restores an archived copy of an object back into Amazon S3
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreObjectAsync(const Model::RestoreObjectRequest& request, const RestoreObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads a part in a multipart upload.</p><p><b>Note:</b> After you initiate
         * multipart upload and upload one or more parts, you must either complete or abort
         * multipart upload in order to stop getting charged for storage of the uploaded
         * parts. Only after you either complete or abort multipart upload, Amazon S3 frees
         * up the parts storage and stops charging you for the parts storage.</p>
         */
        virtual Model::UploadPartOutcome UploadPart(const Model::UploadPartRequest& request) const;

        /**
         * <p>Uploads a part in a multipart upload.</p><p><b>Note:</b> After you initiate
         * multipart upload and upload one or more parts, you must either complete or abort
         * multipart upload in order to stop getting charged for storage of the uploaded
         * parts. Only after you either complete or abort multipart upload, Amazon S3 frees
         * up the parts storage and stops charging you for the parts storage.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UploadPartOutcomeCallable UploadPartCallable(const Model::UploadPartRequest& request) const;

        /**
         * <p>Uploads a part in a multipart upload.</p><p><b>Note:</b> After you initiate
         * multipart upload and upload one or more parts, you must either complete or abort
         * multipart upload in order to stop getting charged for storage of the uploaded
         * parts. Only after you either complete or abort multipart upload, Amazon S3 frees
         * up the parts storage and stops charging you for the parts storage.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UploadPartAsync(const Model::UploadPartRequest& request, const UploadPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Uploads a part by copying data from an existing object as data source.
         */
        virtual Model::UploadPartCopyOutcome UploadPartCopy(const Model::UploadPartCopyRequest& request) const;

        /**
         * Uploads a part by copying data from an existing object as data source.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UploadPartCopyOutcomeCallable UploadPartCopyCallable(const Model::UploadPartCopyRequest& request) const;

        /**
         * Uploads a part by copying data from an existing object as data source.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UploadPartCopyAsync(const Model::UploadPartCopyRequest& request, const UploadPartCopyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


        Aws::String GeneratePresignedUrl(const Aws::String& bucketName, const Aws::String& key, Http::HttpMethod method, long long expirationInSeconds = MAX_EXPIRATION_SECONDS);

    private:
        void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AbortMultipartUploadAsyncHelper(const Model::AbortMultipartUploadRequest& request, const AbortMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CompleteMultipartUploadAsyncHelper(const Model::CompleteMultipartUploadRequest& request, const CompleteMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopyObjectAsyncHelper(const Model::CopyObjectRequest& request, const CopyObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBucketAsyncHelper(const Model::CreateBucketRequest& request, const CreateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMultipartUploadAsyncHelper(const Model::CreateMultipartUploadRequest& request, const CreateMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketAsyncHelper(const Model::DeleteBucketRequest& request, const DeleteBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketCorsAsyncHelper(const Model::DeleteBucketCorsRequest& request, const DeleteBucketCorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketLifecycleAsyncHelper(const Model::DeleteBucketLifecycleRequest& request, const DeleteBucketLifecycleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketPolicyAsyncHelper(const Model::DeleteBucketPolicyRequest& request, const DeleteBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketReplicationAsyncHelper(const Model::DeleteBucketReplicationRequest& request, const DeleteBucketReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketTaggingAsyncHelper(const Model::DeleteBucketTaggingRequest& request, const DeleteBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketWebsiteAsyncHelper(const Model::DeleteBucketWebsiteRequest& request, const DeleteBucketWebsiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteObjectAsyncHelper(const Model::DeleteObjectRequest& request, const DeleteObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteObjectsAsyncHelper(const Model::DeleteObjectsRequest& request, const DeleteObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketAccelerateConfigurationAsyncHelper(const Model::GetBucketAccelerateConfigurationRequest& request, const GetBucketAccelerateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketAclAsyncHelper(const Model::GetBucketAclRequest& request, const GetBucketAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketCorsAsyncHelper(const Model::GetBucketCorsRequest& request, const GetBucketCorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketLifecycleConfigurationAsyncHelper(const Model::GetBucketLifecycleConfigurationRequest& request, const GetBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketLocationAsyncHelper(const Model::GetBucketLocationRequest& request, const GetBucketLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketLoggingAsyncHelper(const Model::GetBucketLoggingRequest& request, const GetBucketLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketNotificationConfigurationAsyncHelper(const Model::GetBucketNotificationConfigurationRequest& request, const GetBucketNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketPolicyAsyncHelper(const Model::GetBucketPolicyRequest& request, const GetBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketReplicationAsyncHelper(const Model::GetBucketReplicationRequest& request, const GetBucketReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketRequestPaymentAsyncHelper(const Model::GetBucketRequestPaymentRequest& request, const GetBucketRequestPaymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketTaggingAsyncHelper(const Model::GetBucketTaggingRequest& request, const GetBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketVersioningAsyncHelper(const Model::GetBucketVersioningRequest& request, const GetBucketVersioningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketWebsiteAsyncHelper(const Model::GetBucketWebsiteRequest& request, const GetBucketWebsiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetObjectAsyncHelper(const Model::GetObjectRequest& request, const GetObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetObjectAclAsyncHelper(const Model::GetObjectAclRequest& request, const GetObjectAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetObjectTorrentAsyncHelper(const Model::GetObjectTorrentRequest& request, const GetObjectTorrentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void HeadBucketAsyncHelper(const Model::HeadBucketRequest& request, const HeadBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void HeadObjectAsyncHelper(const Model::HeadObjectRequest& request, const HeadObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBucketsAsyncHelper(const ListBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMultipartUploadsAsyncHelper(const Model::ListMultipartUploadsRequest& request, const ListMultipartUploadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListObjectVersionsAsyncHelper(const Model::ListObjectVersionsRequest& request, const ListObjectVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListObjectsAsyncHelper(const Model::ListObjectsRequest& request, const ListObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListObjectsV2AsyncHelper(const Model::ListObjectsV2Request& request, const ListObjectsV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPartsAsyncHelper(const Model::ListPartsRequest& request, const ListPartsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketAccelerateConfigurationAsyncHelper(const Model::PutBucketAccelerateConfigurationRequest& request, const PutBucketAccelerateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketAclAsyncHelper(const Model::PutBucketAclRequest& request, const PutBucketAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketCorsAsyncHelper(const Model::PutBucketCorsRequest& request, const PutBucketCorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketLifecycleConfigurationAsyncHelper(const Model::PutBucketLifecycleConfigurationRequest& request, const PutBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketLoggingAsyncHelper(const Model::PutBucketLoggingRequest& request, const PutBucketLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketNotificationConfigurationAsyncHelper(const Model::PutBucketNotificationConfigurationRequest& request, const PutBucketNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketPolicyAsyncHelper(const Model::PutBucketPolicyRequest& request, const PutBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketReplicationAsyncHelper(const Model::PutBucketReplicationRequest& request, const PutBucketReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketRequestPaymentAsyncHelper(const Model::PutBucketRequestPaymentRequest& request, const PutBucketRequestPaymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketTaggingAsyncHelper(const Model::PutBucketTaggingRequest& request, const PutBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketVersioningAsyncHelper(const Model::PutBucketVersioningRequest& request, const PutBucketVersioningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketWebsiteAsyncHelper(const Model::PutBucketWebsiteRequest& request, const PutBucketWebsiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutObjectAsyncHelper(const Model::PutObjectRequest& request, const PutObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutObjectAclAsyncHelper(const Model::PutObjectAclRequest& request, const PutObjectAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreObjectAsyncHelper(const Model::RestoreObjectRequest& request, const RestoreObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UploadPartAsyncHelper(const Model::UploadPartRequest& request, const UploadPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UploadPartCopyAsyncHelper(const Model::UploadPartCopyRequest& request, const UploadPartCopyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

        Aws::String m_uri;
        std::shared_ptr<Utils::Threading::Executor> m_executor;
    };

  } // namespace S3
} // namespace Aws
