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
   * <p>Amazon HealthLake is a HIPAA eligibile service that allows customers to
   * store, transform, query, and analyze their FHIR-formatted data in a consistent
   * fashion in the cloud.</p>
   */
  class AWS_HEALTHLAKE_API HealthLakeClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<HealthLakeClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        HealthLakeClient(const Aws::HealthLake::HealthLakeClientConfiguration& clientConfiguration = Aws::HealthLake::HealthLakeClientConfiguration(),
                         std::shared_ptr<HealthLakeEndpointProviderBase> endpointProvider = Aws::MakeShared<HealthLakeEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        HealthLakeClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<HealthLakeEndpointProviderBase> endpointProvider = Aws::MakeShared<HealthLakeEndpointProvider>(ALLOCATION_TAG),
                         const Aws::HealthLake::HealthLakeClientConfiguration& clientConfiguration = Aws::HealthLake::HealthLakeClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        HealthLakeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<HealthLakeEndpointProviderBase> endpointProvider = Aws::MakeShared<HealthLakeEndpointProvider>(ALLOCATION_TAG),
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
         * <p>Creates a Data Store that can ingest and export FHIR formatted
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/CreateFHIRDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFHIRDatastoreOutcome CreateFHIRDatastore(const Model::CreateFHIRDatastoreRequest& request) const;

        /**
         * A Callable wrapper for CreateFHIRDatastore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFHIRDatastoreOutcomeCallable CreateFHIRDatastoreCallable(const Model::CreateFHIRDatastoreRequest& request) const;

        /**
         * An Async wrapper for CreateFHIRDatastore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFHIRDatastoreAsync(const Model::CreateFHIRDatastoreRequest& request, const CreateFHIRDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Data Store. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DeleteFHIRDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFHIRDatastoreOutcome DeleteFHIRDatastore(const Model::DeleteFHIRDatastoreRequest& request) const;

        /**
         * A Callable wrapper for DeleteFHIRDatastore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFHIRDatastoreOutcomeCallable DeleteFHIRDatastoreCallable(const Model::DeleteFHIRDatastoreRequest& request) const;

        /**
         * An Async wrapper for DeleteFHIRDatastore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFHIRDatastoreAsync(const Model::DeleteFHIRDatastoreRequest& request, const DeleteFHIRDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties associated with the FHIR Data Store, including the Data
         * Store ID, Data Store ARN, Data Store name, Data Store status, created at, Data
         * Store type version, and Data Store endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DescribeFHIRDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFHIRDatastoreOutcome DescribeFHIRDatastore(const Model::DescribeFHIRDatastoreRequest& request) const;

        /**
         * A Callable wrapper for DescribeFHIRDatastore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFHIRDatastoreOutcomeCallable DescribeFHIRDatastoreCallable(const Model::DescribeFHIRDatastoreRequest& request) const;

        /**
         * An Async wrapper for DescribeFHIRDatastore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFHIRDatastoreAsync(const Model::DescribeFHIRDatastoreRequest& request, const DescribeFHIRDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeFHIRExportJobOutcomeCallable DescribeFHIRExportJobCallable(const Model::DescribeFHIRExportJobRequest& request) const;

        /**
         * An Async wrapper for DescribeFHIRExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFHIRExportJobAsync(const Model::DescribeFHIRExportJobRequest& request, const DescribeFHIRExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeFHIRImportJobOutcomeCallable DescribeFHIRImportJobCallable(const Model::DescribeFHIRImportJobRequest& request) const;

        /**
         * An Async wrapper for DescribeFHIRImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFHIRImportJobAsync(const Model::DescribeFHIRImportJobRequest& request, const DescribeFHIRImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all FHIR Data Stores that are in the user’s account, regardless of Data
         * Store status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ListFHIRDatastores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFHIRDatastoresOutcome ListFHIRDatastores(const Model::ListFHIRDatastoresRequest& request) const;

        /**
         * A Callable wrapper for ListFHIRDatastores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFHIRDatastoresOutcomeCallable ListFHIRDatastoresCallable(const Model::ListFHIRDatastoresRequest& request) const;

        /**
         * An Async wrapper for ListFHIRDatastores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFHIRDatastoresAsync(const Model::ListFHIRDatastoresRequest& request, const ListFHIRDatastoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListFHIRExportJobsOutcomeCallable ListFHIRExportJobsCallable(const Model::ListFHIRExportJobsRequest& request) const;

        /**
         * An Async wrapper for ListFHIRExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFHIRExportJobsAsync(const Model::ListFHIRExportJobsRequest& request, const ListFHIRExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListFHIRImportJobsOutcomeCallable ListFHIRImportJobsCallable(const Model::ListFHIRImportJobsRequest& request) const;

        /**
         * An Async wrapper for ListFHIRImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFHIRImportJobsAsync(const Model::ListFHIRImportJobsRequest& request, const ListFHIRImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of all existing tags associated with a Data Store.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ListTagsForResource">AWS
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
         * <p>Begins a FHIR export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/StartFHIRExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFHIRExportJobOutcome StartFHIRExportJob(const Model::StartFHIRExportJobRequest& request) const;

        /**
         * A Callable wrapper for StartFHIRExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartFHIRExportJobOutcomeCallable StartFHIRExportJobCallable(const Model::StartFHIRExportJobRequest& request) const;

        /**
         * An Async wrapper for StartFHIRExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartFHIRExportJobAsync(const Model::StartFHIRExportJobRequest& request, const StartFHIRExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Begins a FHIR Import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/StartFHIRImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFHIRImportJobOutcome StartFHIRImportJob(const Model::StartFHIRImportJobRequest& request) const;

        /**
         * A Callable wrapper for StartFHIRImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartFHIRImportJobOutcomeCallable StartFHIRImportJobCallable(const Model::StartFHIRImportJobRequest& request) const;

        /**
         * An Async wrapper for StartFHIRImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartFHIRImportJobAsync(const Model::StartFHIRImportJobRequest& request, const StartFHIRImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Adds a user specifed key and value tag to a Data Store. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/TagResource">AWS
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
         * <p> Removes tags from a Data Store. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/UntagResource">AWS
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
