/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CloudFrontKeyValueStoreClient header */
#include <aws/cloudfront-keyvaluestore/model/DeleteKeyResult.h>
#include <aws/cloudfront-keyvaluestore/model/DescribeKeyValueStoreResult.h>
#include <aws/cloudfront-keyvaluestore/model/GetKeyResult.h>
#include <aws/cloudfront-keyvaluestore/model/ListKeysResult.h>
#include <aws/cloudfront-keyvaluestore/model/PutKeyResult.h>
#include <aws/cloudfront-keyvaluestore/model/UpdateKeysResult.h>
/* End of service model headers required in CloudFrontKeyValueStoreClient header */

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

  namespace CloudFrontKeyValueStore
  {
    using CloudFrontKeyValueStoreClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CloudFrontKeyValueStoreEndpointProviderBase = Aws::CloudFrontKeyValueStore::Endpoint::CloudFrontKeyValueStoreEndpointProviderBase;
    using CloudFrontKeyValueStoreEndpointProvider = Aws::CloudFrontKeyValueStore::Endpoint::CloudFrontKeyValueStoreEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CloudFrontKeyValueStoreClient header */
      class DeleteKeyRequest;
      class DescribeKeyValueStoreRequest;
      class GetKeyRequest;
      class ListKeysRequest;
      class PutKeyRequest;
      class UpdateKeysRequest;
      /* End of service model forward declarations required in CloudFrontKeyValueStoreClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DeleteKeyResult, CloudFrontKeyValueStoreError> DeleteKeyOutcome;
      typedef Aws::Utils::Outcome<DescribeKeyValueStoreResult, CloudFrontKeyValueStoreError> DescribeKeyValueStoreOutcome;
      typedef Aws::Utils::Outcome<GetKeyResult, CloudFrontKeyValueStoreError> GetKeyOutcome;
      typedef Aws::Utils::Outcome<ListKeysResult, CloudFrontKeyValueStoreError> ListKeysOutcome;
      typedef Aws::Utils::Outcome<PutKeyResult, CloudFrontKeyValueStoreError> PutKeyOutcome;
      typedef Aws::Utils::Outcome<UpdateKeysResult, CloudFrontKeyValueStoreError> UpdateKeysOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DeleteKeyOutcome> DeleteKeyOutcomeCallable;
      typedef std::future<DescribeKeyValueStoreOutcome> DescribeKeyValueStoreOutcomeCallable;
      typedef std::future<GetKeyOutcome> GetKeyOutcomeCallable;
      typedef std::future<ListKeysOutcome> ListKeysOutcomeCallable;
      typedef std::future<PutKeyOutcome> PutKeyOutcomeCallable;
      typedef std::future<UpdateKeysOutcome> UpdateKeysOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CloudFrontKeyValueStoreClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CloudFrontKeyValueStoreClient*, const Model::DeleteKeyRequest&, const Model::DeleteKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKeyResponseReceivedHandler;
    typedef std::function<void(const CloudFrontKeyValueStoreClient*, const Model::DescribeKeyValueStoreRequest&, const Model::DescribeKeyValueStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeKeyValueStoreResponseReceivedHandler;
    typedef std::function<void(const CloudFrontKeyValueStoreClient*, const Model::GetKeyRequest&, const Model::GetKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKeyResponseReceivedHandler;
    typedef std::function<void(const CloudFrontKeyValueStoreClient*, const Model::ListKeysRequest&, const Model::ListKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKeysResponseReceivedHandler;
    typedef std::function<void(const CloudFrontKeyValueStoreClient*, const Model::PutKeyRequest&, const Model::PutKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutKeyResponseReceivedHandler;
    typedef std::function<void(const CloudFrontKeyValueStoreClient*, const Model::UpdateKeysRequest&, const Model::UpdateKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKeysResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CloudFrontKeyValueStore
} // namespace Aws
