/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/backupstorage/BackupStorageErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/backupstorage/BackupStorageEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in BackupStorageClient header */
#include <aws/backupstorage/model/GetChunkResult.h>
#include <aws/backupstorage/model/GetObjectMetadataResult.h>
#include <aws/backupstorage/model/ListChunksResult.h>
#include <aws/backupstorage/model/ListObjectsResult.h>
#include <aws/backupstorage/model/NotifyObjectCompleteResult.h>
#include <aws/backupstorage/model/PutChunkResult.h>
#include <aws/backupstorage/model/PutObjectResult.h>
#include <aws/backupstorage/model/StartObjectResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in BackupStorageClient header */

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

  namespace BackupStorage
  {
    using BackupStorageClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using BackupStorageEndpointProviderBase = Aws::BackupStorage::Endpoint::BackupStorageEndpointProviderBase;
    using BackupStorageEndpointProvider = Aws::BackupStorage::Endpoint::BackupStorageEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in BackupStorageClient header */
      class DeleteObjectRequest;
      class GetChunkRequest;
      class GetObjectMetadataRequest;
      class ListChunksRequest;
      class ListObjectsRequest;
      class NotifyObjectCompleteRequest;
      class PutChunkRequest;
      class PutObjectRequest;
      class StartObjectRequest;
      /* End of service model forward declarations required in BackupStorageClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, BackupStorageError> DeleteObjectOutcome;
      typedef Aws::Utils::Outcome<GetChunkResult, BackupStorageError> GetChunkOutcome;
      typedef Aws::Utils::Outcome<GetObjectMetadataResult, BackupStorageError> GetObjectMetadataOutcome;
      typedef Aws::Utils::Outcome<ListChunksResult, BackupStorageError> ListChunksOutcome;
      typedef Aws::Utils::Outcome<ListObjectsResult, BackupStorageError> ListObjectsOutcome;
      typedef Aws::Utils::Outcome<NotifyObjectCompleteResult, BackupStorageError> NotifyObjectCompleteOutcome;
      typedef Aws::Utils::Outcome<PutChunkResult, BackupStorageError> PutChunkOutcome;
      typedef Aws::Utils::Outcome<PutObjectResult, BackupStorageError> PutObjectOutcome;
      typedef Aws::Utils::Outcome<StartObjectResult, BackupStorageError> StartObjectOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DeleteObjectOutcome> DeleteObjectOutcomeCallable;
      typedef std::future<GetChunkOutcome> GetChunkOutcomeCallable;
      typedef std::future<GetObjectMetadataOutcome> GetObjectMetadataOutcomeCallable;
      typedef std::future<ListChunksOutcome> ListChunksOutcomeCallable;
      typedef std::future<ListObjectsOutcome> ListObjectsOutcomeCallable;
      typedef std::future<NotifyObjectCompleteOutcome> NotifyObjectCompleteOutcomeCallable;
      typedef std::future<PutChunkOutcome> PutChunkOutcomeCallable;
      typedef std::future<PutObjectOutcome> PutObjectOutcomeCallable;
      typedef std::future<StartObjectOutcome> StartObjectOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BackupStorageClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BackupStorageClient*, const Model::DeleteObjectRequest&, const Model::DeleteObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteObjectResponseReceivedHandler;
    typedef std::function<void(const BackupStorageClient*, const Model::GetChunkRequest&, Model::GetChunkOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChunkResponseReceivedHandler;
    typedef std::function<void(const BackupStorageClient*, const Model::GetObjectMetadataRequest&, Model::GetObjectMetadataOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetObjectMetadataResponseReceivedHandler;
    typedef std::function<void(const BackupStorageClient*, const Model::ListChunksRequest&, const Model::ListChunksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChunksResponseReceivedHandler;
    typedef std::function<void(const BackupStorageClient*, const Model::ListObjectsRequest&, const Model::ListObjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListObjectsResponseReceivedHandler;
    typedef std::function<void(const BackupStorageClient*, const Model::NotifyObjectCompleteRequest&, const Model::NotifyObjectCompleteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > NotifyObjectCompleteResponseReceivedHandler;
    typedef std::function<void(const BackupStorageClient*, const Model::PutChunkRequest&, const Model::PutChunkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutChunkResponseReceivedHandler;
    typedef std::function<void(const BackupStorageClient*, const Model::PutObjectRequest&, const Model::PutObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutObjectResponseReceivedHandler;
    typedef std::function<void(const BackupStorageClient*, const Model::StartObjectRequest&, const Model::StartObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartObjectResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace BackupStorage
} // namespace Aws
