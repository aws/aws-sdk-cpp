/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/HealthLakeServiceClientModel.h>

namespace Aws
{
namespace HealthLake
{
  /**
   * <p>AWS HealthLake is a HIPAA eligibile service that allows customers to store,
   * transform, query, and analyze their FHIR-formatted data in a consistent fashion
   * in the cloud.</p>
   */
  class AWS_HEALTHLAKE_API HealthLakeClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<HealthLakeClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef HealthLakeClientConfiguration ClientConfigurationType;
      typedef HealthLakeEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        HealthLakeClient(const Aws::HealthLake::HealthLakeClientConfiguration& clientConfiguration = Aws::HealthLake::HealthLakeClientConfiguration(),
                         std::shared_ptr<HealthLakeEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        HealthLakeClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<HealthLakeEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::HealthLake::HealthLakeClientConfiguration& clientConfiguration = Aws::HealthLake::HealthLakeClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        HealthLakeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<HealthLakeEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::HealthLake::HealthLakeClientConfiguration& clientConfiguration = Aws::HealthLake::HealthLakeClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        HealthLakeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        HealthLakeClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        HealthLakeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~HealthLakeClient();

        /**
         * <p>Creates a data store that can ingest and export FHIR formatted
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/CreateFHIRDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFHIRDatastoreOutcome CreateFHIRDatastore(const Model::CreateFHIRDatastoreRequest& request) const;

        /**
         * A Callable wrapper for CreateFHIRDatastore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFHIRDatastoreRequestT = Model::CreateFHIRDatastoreRequest>
        Model::CreateFHIRDatastoreOutcomeCallable CreateFHIRDatastoreCallable(const CreateFHIRDatastoreRequestT& request) const
        {
            return SubmitCallable(&HealthLakeClient::CreateFHIRDatastore, request);
        }

        /**
         * An Async wrapper for CreateFHIRDatastore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFHIRDatastoreRequestT = Model::CreateFHIRDatastoreRequest>
        void CreateFHIRDatastoreAsync(const CreateFHIRDatastoreRequestT& request, const CreateFHIRDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HealthLakeClient::CreateFHIRDatastore, request, handler, context);
        }

        /**
         * <p>Deletes a data store. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DeleteFHIRDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFHIRDatastoreOutcome DeleteFHIRDatastore(const Model::DeleteFHIRDatastoreRequest& request) const;

        /**
         * A Callable wrapper for DeleteFHIRDatastore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFHIRDatastoreRequestT = Model::DeleteFHIRDatastoreRequest>
        Model::DeleteFHIRDatastoreOutcomeCallable DeleteFHIRDatastoreCallable(const DeleteFHIRDatastoreRequestT& request) const
        {
            return SubmitCallable(&HealthLakeClient::DeleteFHIRDatastore, request);
        }

        /**
         * An Async wrapper for DeleteFHIRDatastore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFHIRDatastoreRequestT = Model::DeleteFHIRDatastoreRequest>
        void DeleteFHIRDatastoreAsync(const DeleteFHIRDatastoreRequestT& request, const DeleteFHIRDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HealthLakeClient::DeleteFHIRDatastore, request, handler, context);
        }

        /**
         * <p>Gets the properties associated with the FHIR data store, including the data
         * store ID, data store ARN, data store name, data store status, when the data
         * store was created, data store type version, and the data store's
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DescribeFHIRDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFHIRDatastoreOutcome DescribeFHIRDatastore(const Model::DescribeFHIRDatastoreRequest& request) const;

        /**
         * A Callable wrapper for DescribeFHIRDatastore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFHIRDatastoreRequestT = Model::DescribeFHIRDatastoreRequest>
        Model::DescribeFHIRDatastoreOutcomeCallable DescribeFHIRDatastoreCallable(const DescribeFHIRDatastoreRequestT& request) const
        {
            return SubmitCallable(&HealthLakeClient::DescribeFHIRDatastore, request);
        }

        /**
         * An Async wrapper for DescribeFHIRDatastore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFHIRDatastoreRequestT = Model::DescribeFHIRDatastoreRequest>
        void DescribeFHIRDatastoreAsync(const DescribeFHIRDatastoreRequestT& request, const DescribeFHIRDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HealthLakeClient::DescribeFHIRDatastore, request, handler, context);
        }

        /**
         * <p>Displays the properties of a FHIR export job, including the ID, ARN, name,
         * and the status of the job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DescribeFHIRExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFHIRExportJobOutcome DescribeFHIRExportJob(const Model::DescribeFHIRExportJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeFHIRExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFHIRExportJobRequestT = Model::DescribeFHIRExportJobRequest>
        Model::DescribeFHIRExportJobOutcomeCallable DescribeFHIRExportJobCallable(const DescribeFHIRExportJobRequestT& request) const
        {
            return SubmitCallable(&HealthLakeClient::DescribeFHIRExportJob, request);
        }

        /**
         * An Async wrapper for DescribeFHIRExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFHIRExportJobRequestT = Model::DescribeFHIRExportJobRequest>
        void DescribeFHIRExportJobAsync(const DescribeFHIRExportJobRequestT& request, const DescribeFHIRExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HealthLakeClient::DescribeFHIRExportJob, request, handler, context);
        }

        /**
         * <p>Displays the properties of a FHIR import job, including the ID, ARN, name,
         * and the status of the job. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DescribeFHIRImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFHIRImportJobOutcome DescribeFHIRImportJob(const Model::DescribeFHIRImportJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeFHIRImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFHIRImportJobRequestT = Model::DescribeFHIRImportJobRequest>
        Model::DescribeFHIRImportJobOutcomeCallable DescribeFHIRImportJobCallable(const DescribeFHIRImportJobRequestT& request) const
        {
            return SubmitCallable(&HealthLakeClient::DescribeFHIRImportJob, request);
        }

        /**
         * An Async wrapper for DescribeFHIRImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFHIRImportJobRequestT = Model::DescribeFHIRImportJobRequest>
        void DescribeFHIRImportJobAsync(const DescribeFHIRImportJobRequestT& request, const DescribeFHIRImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HealthLakeClient::DescribeFHIRImportJob, request, handler, context);
        }

        /**
         * <p>Lists all FHIR data stores that are in the user’s account, regardless of data
         * store status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ListFHIRDatastores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFHIRDatastoresOutcome ListFHIRDatastores(const Model::ListFHIRDatastoresRequest& request) const;

        /**
         * A Callable wrapper for ListFHIRDatastores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFHIRDatastoresRequestT = Model::ListFHIRDatastoresRequest>
        Model::ListFHIRDatastoresOutcomeCallable ListFHIRDatastoresCallable(const ListFHIRDatastoresRequestT& request) const
        {
            return SubmitCallable(&HealthLakeClient::ListFHIRDatastores, request);
        }

        /**
         * An Async wrapper for ListFHIRDatastores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFHIRDatastoresRequestT = Model::ListFHIRDatastoresRequest>
        void ListFHIRDatastoresAsync(const ListFHIRDatastoresRequestT& request, const ListFHIRDatastoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HealthLakeClient::ListFHIRDatastores, request, handler, context);
        }

        /**
         * <p> Lists all FHIR export jobs associated with an account and their statuses.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ListFHIRExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFHIRExportJobsOutcome ListFHIRExportJobs(const Model::ListFHIRExportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListFHIRExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFHIRExportJobsRequestT = Model::ListFHIRExportJobsRequest>
        Model::ListFHIRExportJobsOutcomeCallable ListFHIRExportJobsCallable(const ListFHIRExportJobsRequestT& request) const
        {
            return SubmitCallable(&HealthLakeClient::ListFHIRExportJobs, request);
        }

        /**
         * An Async wrapper for ListFHIRExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFHIRExportJobsRequestT = Model::ListFHIRExportJobsRequest>
        void ListFHIRExportJobsAsync(const ListFHIRExportJobsRequestT& request, const ListFHIRExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HealthLakeClient::ListFHIRExportJobs, request, handler, context);
        }

        /**
         * <p> Lists all FHIR import jobs associated with an account and their statuses.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ListFHIRImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFHIRImportJobsOutcome ListFHIRImportJobs(const Model::ListFHIRImportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListFHIRImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFHIRImportJobsRequestT = Model::ListFHIRImportJobsRequest>
        Model::ListFHIRImportJobsOutcomeCallable ListFHIRImportJobsCallable(const ListFHIRImportJobsRequestT& request) const
        {
            return SubmitCallable(&HealthLakeClient::ListFHIRImportJobs, request);
        }

        /**
         * An Async wrapper for ListFHIRImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFHIRImportJobsRequestT = Model::ListFHIRImportJobsRequest>
        void ListFHIRImportJobsAsync(const ListFHIRImportJobsRequestT& request, const ListFHIRImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HealthLakeClient::ListFHIRImportJobs, request, handler, context);
        }

        /**
         * <p> Returns a list of all existing tags associated with a data store.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&HealthLakeClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HealthLakeClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Begins a FHIR export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/StartFHIRExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFHIRExportJobOutcome StartFHIRExportJob(const Model::StartFHIRExportJobRequest& request) const;

        /**
         * A Callable wrapper for StartFHIRExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartFHIRExportJobRequestT = Model::StartFHIRExportJobRequest>
        Model::StartFHIRExportJobOutcomeCallable StartFHIRExportJobCallable(const StartFHIRExportJobRequestT& request) const
        {
            return SubmitCallable(&HealthLakeClient::StartFHIRExportJob, request);
        }

        /**
         * An Async wrapper for StartFHIRExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartFHIRExportJobRequestT = Model::StartFHIRExportJobRequest>
        void StartFHIRExportJobAsync(const StartFHIRExportJobRequestT& request, const StartFHIRExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HealthLakeClient::StartFHIRExportJob, request, handler, context);
        }

        /**
         * <p>Begins a FHIR Import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/StartFHIRImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFHIRImportJobOutcome StartFHIRImportJob(const Model::StartFHIRImportJobRequest& request) const;

        /**
         * A Callable wrapper for StartFHIRImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartFHIRImportJobRequestT = Model::StartFHIRImportJobRequest>
        Model::StartFHIRImportJobOutcomeCallable StartFHIRImportJobCallable(const StartFHIRImportJobRequestT& request) const
        {
            return SubmitCallable(&HealthLakeClient::StartFHIRImportJob, request);
        }

        /**
         * An Async wrapper for StartFHIRImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartFHIRImportJobRequestT = Model::StartFHIRImportJobRequest>
        void StartFHIRImportJobAsync(const StartFHIRImportJobRequestT& request, const StartFHIRImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HealthLakeClient::StartFHIRImportJob, request, handler, context);
        }

        /**
         * <p> Adds a user specified key and value tag to a data store. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&HealthLakeClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HealthLakeClient::TagResource, request, handler, context);
        }

        /**
         * <p> Removes tags from a data store. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&HealthLakeClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&HealthLakeClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<HealthLakeEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<HealthLakeClient>;
      void init(const HealthLakeClientConfiguration& clientConfiguration);

      HealthLakeClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<HealthLakeEndpointProviderBase> m_endpointProvider;
  };

} // namespace HealthLake
} // namespace Aws
