﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-featurestore-runtime/model/BatchGetRecordResult.h>
#include <aws/sagemaker-featurestore-runtime/model/GetRecordResult.h>
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

namespace SageMakerFeatureStoreRuntime
{

namespace Model
{
        class BatchGetRecordRequest;
        class DeleteRecordRequest;
        class GetRecordRequest;
        class PutRecordRequest;

        typedef Aws::Utils::Outcome<BatchGetRecordResult, SageMakerFeatureStoreRuntimeError> BatchGetRecordOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerFeatureStoreRuntimeError> DeleteRecordOutcome;
        typedef Aws::Utils::Outcome<GetRecordResult, SageMakerFeatureStoreRuntimeError> GetRecordOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerFeatureStoreRuntimeError> PutRecordOutcome;

        typedef std::future<BatchGetRecordOutcome> BatchGetRecordOutcomeCallable;
        typedef std::future<DeleteRecordOutcome> DeleteRecordOutcomeCallable;
        typedef std::future<GetRecordOutcome> GetRecordOutcomeCallable;
        typedef std::future<PutRecordOutcome> PutRecordOutcomeCallable;
} // namespace Model

  class SageMakerFeatureStoreRuntimeClient;

    typedef std::function<void(const SageMakerFeatureStoreRuntimeClient*, const Model::BatchGetRecordRequest&, const Model::BatchGetRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetRecordResponseReceivedHandler;
    typedef std::function<void(const SageMakerFeatureStoreRuntimeClient*, const Model::DeleteRecordRequest&, const Model::DeleteRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRecordResponseReceivedHandler;
    typedef std::function<void(const SageMakerFeatureStoreRuntimeClient*, const Model::GetRecordRequest&, const Model::GetRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecordResponseReceivedHandler;
    typedef std::function<void(const SageMakerFeatureStoreRuntimeClient*, const Model::PutRecordRequest&, const Model::PutRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRecordResponseReceivedHandler;

  /**
   * <p>Contains all data plane API operations and data types for the Amazon
   * SageMaker Feature Store. Use this API to put, delete, and retrieve (get)
   * features from a feature store.</p> <p>Use the following operations to configure
   * your <code>OnlineStore</code> and <code>OfflineStore</code> features, and to
   * create and manage feature groups:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateFeatureGroup.html">CreateFeatureGroup</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DeleteFeatureGroup.html">DeleteFeatureGroup</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeFeatureGroup.html">DescribeFeatureGroup</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ListFeatureGroups.html">ListFeatureGroups</a>
   * </p> </li> </ul>
   */
  class AWS_SAGEMAKERFEATURESTORERUNTIME_API SageMakerFeatureStoreRuntimeClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerFeatureStoreRuntimeClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerFeatureStoreRuntimeClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SageMakerFeatureStoreRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SageMakerFeatureStoreRuntimeClient();


        /**
         * <p>Retrieves a batch of <code>Records</code> from a
         * <code>FeatureGroup</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/BatchGetRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetRecordOutcome BatchGetRecord(const Model::BatchGetRecordRequest& request) const;

        /**
         * <p>Retrieves a batch of <code>Records</code> from a
         * <code>FeatureGroup</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/BatchGetRecord">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetRecordOutcomeCallable BatchGetRecordCallable(const Model::BatchGetRecordRequest& request) const;

        /**
         * <p>Retrieves a batch of <code>Records</code> from a
         * <code>FeatureGroup</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/BatchGetRecord">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetRecordAsync(const Model::BatchGetRecordRequest& request, const BatchGetRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a <code>Record</code> from a <code>FeatureGroup</code>. A new record
         * will show up in the <code>OfflineStore</code> when the <code>DeleteRecord</code>
         * API is called. This record will have a value of <code>True</code> in the
         * <code>is_deleted</code> column.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/DeleteRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRecordOutcome DeleteRecord(const Model::DeleteRecordRequest& request) const;

        /**
         * <p>Deletes a <code>Record</code> from a <code>FeatureGroup</code>. A new record
         * will show up in the <code>OfflineStore</code> when the <code>DeleteRecord</code>
         * API is called. This record will have a value of <code>True</code> in the
         * <code>is_deleted</code> column.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/DeleteRecord">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRecordOutcomeCallable DeleteRecordCallable(const Model::DeleteRecordRequest& request) const;

        /**
         * <p>Deletes a <code>Record</code> from a <code>FeatureGroup</code>. A new record
         * will show up in the <code>OfflineStore</code> when the <code>DeleteRecord</code>
         * API is called. This record will have a value of <code>True</code> in the
         * <code>is_deleted</code> column.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/DeleteRecord">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRecordAsync(const Model::DeleteRecordRequest& request, const DeleteRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use for <code>OnlineStore</code> serving from a <code>FeatureStore</code>.
         * Only the latest records stored in the <code>OnlineStore</code> can be retrieved.
         * If no Record with <code>RecordIdentifierValue</code> is found, then an empty
         * result is returned. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/GetRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecordOutcome GetRecord(const Model::GetRecordRequest& request) const;

        /**
         * <p>Use for <code>OnlineStore</code> serving from a <code>FeatureStore</code>.
         * Only the latest records stored in the <code>OnlineStore</code> can be retrieved.
         * If no Record with <code>RecordIdentifierValue</code> is found, then an empty
         * result is returned. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/GetRecord">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRecordOutcomeCallable GetRecordCallable(const Model::GetRecordRequest& request) const;

        /**
         * <p>Use for <code>OnlineStore</code> serving from a <code>FeatureStore</code>.
         * Only the latest records stored in the <code>OnlineStore</code> can be retrieved.
         * If no Record with <code>RecordIdentifierValue</code> is found, then an empty
         * result is returned. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/GetRecord">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRecordAsync(const Model::GetRecordRequest& request, const GetRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used for data ingestion into the <code>FeatureStore</code>. The
         * <code>PutRecord</code> API writes to both the <code>OnlineStore</code> and
         * <code>OfflineStore</code>. If the record is the latest record for the
         * <code>recordIdentifier</code>, the record is written to both the
         * <code>OnlineStore</code> and <code>OfflineStore</code>. If the record is a
         * historic record, it is written only to the
         * <code>OfflineStore</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/PutRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRecordOutcome PutRecord(const Model::PutRecordRequest& request) const;

        /**
         * <p>Used for data ingestion into the <code>FeatureStore</code>. The
         * <code>PutRecord</code> API writes to both the <code>OnlineStore</code> and
         * <code>OfflineStore</code>. If the record is the latest record for the
         * <code>recordIdentifier</code>, the record is written to both the
         * <code>OnlineStore</code> and <code>OfflineStore</code>. If the record is a
         * historic record, it is written only to the
         * <code>OfflineStore</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/PutRecord">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRecordOutcomeCallable PutRecordCallable(const Model::PutRecordRequest& request) const;

        /**
         * <p>Used for data ingestion into the <code>FeatureStore</code>. The
         * <code>PutRecord</code> API writes to both the <code>OnlineStore</code> and
         * <code>OfflineStore</code>. If the record is the latest record for the
         * <code>recordIdentifier</code>, the record is written to both the
         * <code>OnlineStore</code> and <code>OfflineStore</code>. If the record is a
         * historic record, it is written only to the
         * <code>OfflineStore</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/PutRecord">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRecordAsync(const Model::PutRecordRequest& request, const PutRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchGetRecordAsyncHelper(const Model::BatchGetRecordRequest& request, const BatchGetRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRecordAsyncHelper(const Model::DeleteRecordRequest& request, const DeleteRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRecordAsyncHelper(const Model::GetRecordRequest& request, const GetRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRecordAsyncHelper(const Model::PutRecordRequest& request, const PutRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
