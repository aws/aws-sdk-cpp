/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatialServiceClientModel.h>

namespace Aws
{
namespace SageMakerGeospatial
{
  /**
   * <p>Provides APIs for creating and managing SageMaker geospatial resources.</p>
   */
  class AWS_SAGEMAKERGEOSPATIAL_API SageMakerGeospatialClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SageMakerGeospatialClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerGeospatialClient(const Aws::SageMakerGeospatial::SageMakerGeospatialClientConfiguration& clientConfiguration = Aws::SageMakerGeospatial::SageMakerGeospatialClientConfiguration(),
                                  std::shared_ptr<SageMakerGeospatialEndpointProviderBase> endpointProvider = Aws::MakeShared<SageMakerGeospatialEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerGeospatialClient(const Aws::Auth::AWSCredentials& credentials,
                                  std::shared_ptr<SageMakerGeospatialEndpointProviderBase> endpointProvider = Aws::MakeShared<SageMakerGeospatialEndpointProvider>(ALLOCATION_TAG),
                                  const Aws::SageMakerGeospatial::SageMakerGeospatialClientConfiguration& clientConfiguration = Aws::SageMakerGeospatial::SageMakerGeospatialClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SageMakerGeospatialClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  std::shared_ptr<SageMakerGeospatialEndpointProviderBase> endpointProvider = Aws::MakeShared<SageMakerGeospatialEndpointProvider>(ALLOCATION_TAG),
                                  const Aws::SageMakerGeospatial::SageMakerGeospatialClientConfiguration& clientConfiguration = Aws::SageMakerGeospatial::SageMakerGeospatialClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerGeospatialClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerGeospatialClient(const Aws::Auth::AWSCredentials& credentials,
                                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SageMakerGeospatialClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SageMakerGeospatialClient();

        /**
         * <p>Use this operation to delete an Earth Observation job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/DeleteEarthObservationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEarthObservationJobOutcome DeleteEarthObservationJob(const Model::DeleteEarthObservationJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteEarthObservationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEarthObservationJobOutcomeCallable DeleteEarthObservationJobCallable(const Model::DeleteEarthObservationJobRequest& request) const;

        /**
         * An Async wrapper for DeleteEarthObservationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEarthObservationJobAsync(const Model::DeleteEarthObservationJobRequest& request, const DeleteEarthObservationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to delete a Vector Enrichment job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/DeleteVectorEnrichmentJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVectorEnrichmentJobOutcome DeleteVectorEnrichmentJob(const Model::DeleteVectorEnrichmentJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteVectorEnrichmentJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVectorEnrichmentJobOutcomeCallable DeleteVectorEnrichmentJobCallable(const Model::DeleteVectorEnrichmentJobRequest& request) const;

        /**
         * An Async wrapper for DeleteVectorEnrichmentJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVectorEnrichmentJobAsync(const Model::DeleteVectorEnrichmentJobRequest& request, const DeleteVectorEnrichmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to export results of an Earth Observation job and
         * optionally source images used as input to the EOJ to an S3
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ExportEarthObservationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportEarthObservationJobOutcome ExportEarthObservationJob(const Model::ExportEarthObservationJobRequest& request) const;

        /**
         * A Callable wrapper for ExportEarthObservationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportEarthObservationJobOutcomeCallable ExportEarthObservationJobCallable(const Model::ExportEarthObservationJobRequest& request) const;

        /**
         * An Async wrapper for ExportEarthObservationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportEarthObservationJobAsync(const Model::ExportEarthObservationJobRequest& request, const ExportEarthObservationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to copy results of a Vector Enrichment job to an S3
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ExportVectorEnrichmentJob">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportVectorEnrichmentJobOutcome ExportVectorEnrichmentJob(const Model::ExportVectorEnrichmentJobRequest& request) const;

        /**
         * A Callable wrapper for ExportVectorEnrichmentJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportVectorEnrichmentJobOutcomeCallable ExportVectorEnrichmentJobCallable(const Model::ExportVectorEnrichmentJobRequest& request) const;

        /**
         * An Async wrapper for ExportVectorEnrichmentJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportVectorEnrichmentJobAsync(const Model::ExportVectorEnrichmentJobRequest& request, const ExportVectorEnrichmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the details for a previously initiated Earth Observation
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/GetEarthObservationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEarthObservationJobOutcome GetEarthObservationJob(const Model::GetEarthObservationJobRequest& request) const;

        /**
         * A Callable wrapper for GetEarthObservationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEarthObservationJobOutcomeCallable GetEarthObservationJobCallable(const Model::GetEarthObservationJobRequest& request) const;

        /**
         * An Async wrapper for GetEarthObservationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEarthObservationJobAsync(const Model::GetEarthObservationJobRequest& request, const GetEarthObservationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to get details of a specific raster data
         * collection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/GetRasterDataCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRasterDataCollectionOutcome GetRasterDataCollection(const Model::GetRasterDataCollectionRequest& request) const;

        /**
         * A Callable wrapper for GetRasterDataCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRasterDataCollectionOutcomeCallable GetRasterDataCollectionCallable(const Model::GetRasterDataCollectionRequest& request) const;

        /**
         * An Async wrapper for GetRasterDataCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRasterDataCollectionAsync(const Model::GetRasterDataCollectionRequest& request, const GetRasterDataCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a web mercator tile for the given Earth Observation job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/GetTile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTileOutcome GetTile(const Model::GetTileRequest& request) const;

        /**
         * A Callable wrapper for GetTile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTileOutcomeCallable GetTileCallable(const Model::GetTileRequest& request) const;

        /**
         * An Async wrapper for GetTile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTileAsync(const Model::GetTileRequest& request, const GetTileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details of a Vector Enrichment Job for a given job Amazon Resource
         * Name (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/GetVectorEnrichmentJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVectorEnrichmentJobOutcome GetVectorEnrichmentJob(const Model::GetVectorEnrichmentJobRequest& request) const;

        /**
         * A Callable wrapper for GetVectorEnrichmentJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVectorEnrichmentJobOutcomeCallable GetVectorEnrichmentJobCallable(const Model::GetVectorEnrichmentJobRequest& request) const;

        /**
         * An Async wrapper for GetVectorEnrichmentJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVectorEnrichmentJobAsync(const Model::GetVectorEnrichmentJobRequest& request, const GetVectorEnrichmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to get a list of the Earth Observation jobs associated
         * with the calling Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ListEarthObservationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEarthObservationJobsOutcome ListEarthObservationJobs(const Model::ListEarthObservationJobsRequest& request) const;

        /**
         * A Callable wrapper for ListEarthObservationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEarthObservationJobsOutcomeCallable ListEarthObservationJobsCallable(const Model::ListEarthObservationJobsRequest& request) const;

        /**
         * An Async wrapper for ListEarthObservationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEarthObservationJobsAsync(const Model::ListEarthObservationJobsRequest& request, const ListEarthObservationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to get raster data collections.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ListRasterDataCollections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRasterDataCollectionsOutcome ListRasterDataCollections(const Model::ListRasterDataCollectionsRequest& request) const;

        /**
         * A Callable wrapper for ListRasterDataCollections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRasterDataCollectionsOutcomeCallable ListRasterDataCollectionsCallable(const Model::ListRasterDataCollectionsRequest& request) const;

        /**
         * An Async wrapper for ListRasterDataCollections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRasterDataCollectionsAsync(const Model::ListRasterDataCollectionsRequest& request, const ListRasterDataCollectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags attached to the resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of vector enrichment jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ListVectorEnrichmentJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVectorEnrichmentJobsOutcome ListVectorEnrichmentJobs(const Model::ListVectorEnrichmentJobsRequest& request) const;

        /**
         * A Callable wrapper for ListVectorEnrichmentJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVectorEnrichmentJobsOutcomeCallable ListVectorEnrichmentJobsCallable(const Model::ListVectorEnrichmentJobsRequest& request) const;

        /**
         * An Async wrapper for ListVectorEnrichmentJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVectorEnrichmentJobsAsync(const Model::ListVectorEnrichmentJobsRequest& request, const ListVectorEnrichmentJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows you run image query on a specific raster data collection to get a list
         * of the satellite imagery matching the selected filters.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/SearchRasterDataCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchRasterDataCollectionOutcome SearchRasterDataCollection(const Model::SearchRasterDataCollectionRequest& request) const;

        /**
         * A Callable wrapper for SearchRasterDataCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchRasterDataCollectionOutcomeCallable SearchRasterDataCollectionCallable(const Model::SearchRasterDataCollectionRequest& request) const;

        /**
         * An Async wrapper for SearchRasterDataCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchRasterDataCollectionAsync(const Model::SearchRasterDataCollectionRequest& request, const SearchRasterDataCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to create an Earth observation job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/StartEarthObservationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartEarthObservationJobOutcome StartEarthObservationJob(const Model::StartEarthObservationJobRequest& request) const;

        /**
         * A Callable wrapper for StartEarthObservationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartEarthObservationJobOutcomeCallable StartEarthObservationJobCallable(const Model::StartEarthObservationJobRequest& request) const;

        /**
         * An Async wrapper for StartEarthObservationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartEarthObservationJobAsync(const Model::StartEarthObservationJobRequest& request, const StartEarthObservationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Vector Enrichment job for the supplied job type. Currently, there
         * are two supported job types: reverse geocoding and map matching.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/StartVectorEnrichmentJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartVectorEnrichmentJobOutcome StartVectorEnrichmentJob(const Model::StartVectorEnrichmentJobRequest& request) const;

        /**
         * A Callable wrapper for StartVectorEnrichmentJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartVectorEnrichmentJobOutcomeCallable StartVectorEnrichmentJobCallable(const Model::StartVectorEnrichmentJobRequest& request) const;

        /**
         * An Async wrapper for StartVectorEnrichmentJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartVectorEnrichmentJobAsync(const Model::StartVectorEnrichmentJobRequest& request, const StartVectorEnrichmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to stop an existing earth observation job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/StopEarthObservationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopEarthObservationJobOutcome StopEarthObservationJob(const Model::StopEarthObservationJobRequest& request) const;

        /**
         * A Callable wrapper for StopEarthObservationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopEarthObservationJobOutcomeCallable StopEarthObservationJobCallable(const Model::StopEarthObservationJobRequest& request) const;

        /**
         * An Async wrapper for StopEarthObservationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopEarthObservationJobAsync(const Model::StopEarthObservationJobRequest& request, const StopEarthObservationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the Vector Enrichment job for a given job ARN.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/StopVectorEnrichmentJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopVectorEnrichmentJobOutcome StopVectorEnrichmentJob(const Model::StopVectorEnrichmentJobRequest& request) const;

        /**
         * A Callable wrapper for StopVectorEnrichmentJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopVectorEnrichmentJobOutcomeCallable StopVectorEnrichmentJobCallable(const Model::StopVectorEnrichmentJobRequest& request) const;

        /**
         * An Async wrapper for StopVectorEnrichmentJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopVectorEnrichmentJobAsync(const Model::StopVectorEnrichmentJobRequest& request, const StopVectorEnrichmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The resource you want to tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The resource you want to untag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SageMakerGeospatialEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SageMakerGeospatialClient>;
      void init(const SageMakerGeospatialClientConfiguration& clientConfiguration);

      SageMakerGeospatialClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SageMakerGeospatialEndpointProviderBase> m_endpointProvider;
  };

} // namespace SageMakerGeospatial
} // namespace Aws
