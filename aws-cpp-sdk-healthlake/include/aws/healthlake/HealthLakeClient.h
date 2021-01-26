/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/HealthLakeErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/CreateFHIRDatastoreResult.h>
#include <aws/healthlake/model/DeleteFHIRDatastoreResult.h>
#include <aws/healthlake/model/DescribeFHIRDatastoreResult.h>
#include <aws/healthlake/model/DescribeFHIRExportJobResult.h>
#include <aws/healthlake/model/DescribeFHIRImportJobResult.h>
#include <aws/healthlake/model/ListFHIRDatastoresResult.h>
#include <aws/healthlake/model/StartFHIRExportJobResult.h>
#include <aws/healthlake/model/StartFHIRImportJobResult.h>
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

namespace HealthLake
{

namespace Model
{
        class CreateFHIRDatastoreRequest;
        class DeleteFHIRDatastoreRequest;
        class DescribeFHIRDatastoreRequest;
        class DescribeFHIRExportJobRequest;
        class DescribeFHIRImportJobRequest;
        class ListFHIRDatastoresRequest;
        class StartFHIRExportJobRequest;
        class StartFHIRImportJobRequest;

        typedef Aws::Utils::Outcome<CreateFHIRDatastoreResult, HealthLakeError> CreateFHIRDatastoreOutcome;
        typedef Aws::Utils::Outcome<DeleteFHIRDatastoreResult, HealthLakeError> DeleteFHIRDatastoreOutcome;
        typedef Aws::Utils::Outcome<DescribeFHIRDatastoreResult, HealthLakeError> DescribeFHIRDatastoreOutcome;
        typedef Aws::Utils::Outcome<DescribeFHIRExportJobResult, HealthLakeError> DescribeFHIRExportJobOutcome;
        typedef Aws::Utils::Outcome<DescribeFHIRImportJobResult, HealthLakeError> DescribeFHIRImportJobOutcome;
        typedef Aws::Utils::Outcome<ListFHIRDatastoresResult, HealthLakeError> ListFHIRDatastoresOutcome;
        typedef Aws::Utils::Outcome<StartFHIRExportJobResult, HealthLakeError> StartFHIRExportJobOutcome;
        typedef Aws::Utils::Outcome<StartFHIRImportJobResult, HealthLakeError> StartFHIRImportJobOutcome;

        typedef std::future<CreateFHIRDatastoreOutcome> CreateFHIRDatastoreOutcomeCallable;
        typedef std::future<DeleteFHIRDatastoreOutcome> DeleteFHIRDatastoreOutcomeCallable;
        typedef std::future<DescribeFHIRDatastoreOutcome> DescribeFHIRDatastoreOutcomeCallable;
        typedef std::future<DescribeFHIRExportJobOutcome> DescribeFHIRExportJobOutcomeCallable;
        typedef std::future<DescribeFHIRImportJobOutcome> DescribeFHIRImportJobOutcomeCallable;
        typedef std::future<ListFHIRDatastoresOutcome> ListFHIRDatastoresOutcomeCallable;
        typedef std::future<StartFHIRExportJobOutcome> StartFHIRExportJobOutcomeCallable;
        typedef std::future<StartFHIRImportJobOutcome> StartFHIRImportJobOutcomeCallable;
} // namespace Model

  class HealthLakeClient;

    typedef std::function<void(const HealthLakeClient*, const Model::CreateFHIRDatastoreRequest&, const Model::CreateFHIRDatastoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFHIRDatastoreResponseReceivedHandler;
    typedef std::function<void(const HealthLakeClient*, const Model::DeleteFHIRDatastoreRequest&, const Model::DeleteFHIRDatastoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFHIRDatastoreResponseReceivedHandler;
    typedef std::function<void(const HealthLakeClient*, const Model::DescribeFHIRDatastoreRequest&, const Model::DescribeFHIRDatastoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFHIRDatastoreResponseReceivedHandler;
    typedef std::function<void(const HealthLakeClient*, const Model::DescribeFHIRExportJobRequest&, const Model::DescribeFHIRExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFHIRExportJobResponseReceivedHandler;
    typedef std::function<void(const HealthLakeClient*, const Model::DescribeFHIRImportJobRequest&, const Model::DescribeFHIRImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFHIRImportJobResponseReceivedHandler;
    typedef std::function<void(const HealthLakeClient*, const Model::ListFHIRDatastoresRequest&, const Model::ListFHIRDatastoresOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFHIRDatastoresResponseReceivedHandler;
    typedef std::function<void(const HealthLakeClient*, const Model::StartFHIRExportJobRequest&, const Model::StartFHIRExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFHIRExportJobResponseReceivedHandler;
    typedef std::function<void(const HealthLakeClient*, const Model::StartFHIRImportJobRequest&, const Model::StartFHIRImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFHIRImportJobResponseReceivedHandler;

  /**
   * <p>Amazon HealthLake is a HIPAA eligibile service that allows customers to
   * store, transform, query, and analyze their FHIR-formatted data in a consistent
   * fashion in the cloud.</p>
   */
  class AWS_HEALTHLAKE_API HealthLakeClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        HealthLakeClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        HealthLakeClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        HealthLakeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~HealthLakeClient();


        /**
         * <p>Creates a Data Store that can ingest and export FHIR formatted
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/CreateFHIRDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFHIRDatastoreOutcome CreateFHIRDatastore(const Model::CreateFHIRDatastoreRequest& request) const;

        /**
         * <p>Creates a Data Store that can ingest and export FHIR formatted
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/CreateFHIRDatastore">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFHIRDatastoreOutcomeCallable CreateFHIRDatastoreCallable(const Model::CreateFHIRDatastoreRequest& request) const;

        /**
         * <p>Creates a Data Store that can ingest and export FHIR formatted
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/CreateFHIRDatastore">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFHIRDatastoreAsync(const Model::CreateFHIRDatastoreRequest& request, const CreateFHIRDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Data Store. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DeleteFHIRDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFHIRDatastoreOutcome DeleteFHIRDatastore(const Model::DeleteFHIRDatastoreRequest& request) const;

        /**
         * <p>Deletes a Data Store. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DeleteFHIRDatastore">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFHIRDatastoreOutcomeCallable DeleteFHIRDatastoreCallable(const Model::DeleteFHIRDatastoreRequest& request) const;

        /**
         * <p>Deletes a Data Store. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DeleteFHIRDatastore">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets the properties associated with the FHIR Data Store, including the Data
         * Store ID, Data Store ARN, Data Store name, Data Store status, created at, Data
         * Store type version, and Data Store endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DescribeFHIRDatastore">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFHIRDatastoreOutcomeCallable DescribeFHIRDatastoreCallable(const Model::DescribeFHIRDatastoreRequest& request) const;

        /**
         * <p>Gets the properties associated with the FHIR Data Store, including the Data
         * Store ID, Data Store ARN, Data Store name, Data Store status, created at, Data
         * Store type version, and Data Store endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DescribeFHIRDatastore">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Displays the properties of a FHIR export job, including the ID, ARN, name,
         * and the status of the job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DescribeFHIRExportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFHIRExportJobOutcomeCallable DescribeFHIRExportJobCallable(const Model::DescribeFHIRExportJobRequest& request) const;

        /**
         * <p>Displays the properties of a FHIR export job, including the ID, ARN, name,
         * and the status of the job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DescribeFHIRExportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFHIRExportJobAsync(const Model::DescribeFHIRExportJobRequest& request, const DescribeFHIRExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays the properties of a FHIR import job, including the ID, ARN, name,
         * and the status of the job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DescribeFHIRImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFHIRImportJobOutcome DescribeFHIRImportJob(const Model::DescribeFHIRImportJobRequest& request) const;

        /**
         * <p>Displays the properties of a FHIR import job, including the ID, ARN, name,
         * and the status of the job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DescribeFHIRImportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFHIRImportJobOutcomeCallable DescribeFHIRImportJobCallable(const Model::DescribeFHIRImportJobRequest& request) const;

        /**
         * <p>Displays the properties of a FHIR import job, including the ID, ARN, name,
         * and the status of the job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DescribeFHIRImportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists all FHIR Data Stores that are in the user’s account, regardless of Data
         * Store status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ListFHIRDatastores">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFHIRDatastoresOutcomeCallable ListFHIRDatastoresCallable(const Model::ListFHIRDatastoresRequest& request) const;

        /**
         * <p>Lists all FHIR Data Stores that are in the user’s account, regardless of Data
         * Store status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ListFHIRDatastores">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFHIRDatastoresAsync(const Model::ListFHIRDatastoresRequest& request, const ListFHIRDatastoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Begins a FHIR export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/StartFHIRExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFHIRExportJobOutcome StartFHIRExportJob(const Model::StartFHIRExportJobRequest& request) const;

        /**
         * <p>Begins a FHIR export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/StartFHIRExportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartFHIRExportJobOutcomeCallable StartFHIRExportJobCallable(const Model::StartFHIRExportJobRequest& request) const;

        /**
         * <p>Begins a FHIR export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/StartFHIRExportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartFHIRExportJobAsync(const Model::StartFHIRExportJobRequest& request, const StartFHIRExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Begins a FHIR Import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/StartFHIRImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFHIRImportJobOutcome StartFHIRImportJob(const Model::StartFHIRImportJobRequest& request) const;

        /**
         * <p>Begins a FHIR Import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/StartFHIRImportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartFHIRImportJobOutcomeCallable StartFHIRImportJobCallable(const Model::StartFHIRImportJobRequest& request) const;

        /**
         * <p>Begins a FHIR Import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/StartFHIRImportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartFHIRImportJobAsync(const Model::StartFHIRImportJobRequest& request, const StartFHIRImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateFHIRDatastoreAsyncHelper(const Model::CreateFHIRDatastoreRequest& request, const CreateFHIRDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFHIRDatastoreAsyncHelper(const Model::DeleteFHIRDatastoreRequest& request, const DeleteFHIRDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFHIRDatastoreAsyncHelper(const Model::DescribeFHIRDatastoreRequest& request, const DescribeFHIRDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFHIRExportJobAsyncHelper(const Model::DescribeFHIRExportJobRequest& request, const DescribeFHIRExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFHIRImportJobAsyncHelper(const Model::DescribeFHIRImportJobRequest& request, const DescribeFHIRImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFHIRDatastoresAsyncHelper(const Model::ListFHIRDatastoresRequest& request, const ListFHIRDatastoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartFHIRExportJobAsyncHelper(const Model::StartFHIRExportJobRequest& request, const StartFHIRExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartFHIRImportJobAsyncHelper(const Model::StartFHIRImportJobRequest& request, const StartFHIRImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace HealthLake
} // namespace Aws
