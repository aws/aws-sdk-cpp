/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/applicationcostprofiler/ApplicationCostProfiler_EXPORTS.h>
#include <aws/applicationcostprofiler/ApplicationCostProfilerErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/applicationcostprofiler/model/DeleteReportDefinitionResult.h>
#include <aws/applicationcostprofiler/model/GetReportDefinitionResult.h>
#include <aws/applicationcostprofiler/model/ImportApplicationUsageResult.h>
#include <aws/applicationcostprofiler/model/ListReportDefinitionsResult.h>
#include <aws/applicationcostprofiler/model/PutReportDefinitionResult.h>
#include <aws/applicationcostprofiler/model/UpdateReportDefinitionResult.h>
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

namespace ApplicationCostProfiler
{

namespace Model
{
        class DeleteReportDefinitionRequest;
        class GetReportDefinitionRequest;
        class ImportApplicationUsageRequest;
        class ListReportDefinitionsRequest;
        class PutReportDefinitionRequest;
        class UpdateReportDefinitionRequest;

        typedef Aws::Utils::Outcome<DeleteReportDefinitionResult, ApplicationCostProfilerError> DeleteReportDefinitionOutcome;
        typedef Aws::Utils::Outcome<GetReportDefinitionResult, ApplicationCostProfilerError> GetReportDefinitionOutcome;
        typedef Aws::Utils::Outcome<ImportApplicationUsageResult, ApplicationCostProfilerError> ImportApplicationUsageOutcome;
        typedef Aws::Utils::Outcome<ListReportDefinitionsResult, ApplicationCostProfilerError> ListReportDefinitionsOutcome;
        typedef Aws::Utils::Outcome<PutReportDefinitionResult, ApplicationCostProfilerError> PutReportDefinitionOutcome;
        typedef Aws::Utils::Outcome<UpdateReportDefinitionResult, ApplicationCostProfilerError> UpdateReportDefinitionOutcome;

        typedef std::future<DeleteReportDefinitionOutcome> DeleteReportDefinitionOutcomeCallable;
        typedef std::future<GetReportDefinitionOutcome> GetReportDefinitionOutcomeCallable;
        typedef std::future<ImportApplicationUsageOutcome> ImportApplicationUsageOutcomeCallable;
        typedef std::future<ListReportDefinitionsOutcome> ListReportDefinitionsOutcomeCallable;
        typedef std::future<PutReportDefinitionOutcome> PutReportDefinitionOutcomeCallable;
        typedef std::future<UpdateReportDefinitionOutcome> UpdateReportDefinitionOutcomeCallable;
} // namespace Model

  class ApplicationCostProfilerClient;

    typedef std::function<void(const ApplicationCostProfilerClient*, const Model::DeleteReportDefinitionRequest&, const Model::DeleteReportDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReportDefinitionResponseReceivedHandler;
    typedef std::function<void(const ApplicationCostProfilerClient*, const Model::GetReportDefinitionRequest&, const Model::GetReportDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReportDefinitionResponseReceivedHandler;
    typedef std::function<void(const ApplicationCostProfilerClient*, const Model::ImportApplicationUsageRequest&, const Model::ImportApplicationUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportApplicationUsageResponseReceivedHandler;
    typedef std::function<void(const ApplicationCostProfilerClient*, const Model::ListReportDefinitionsRequest&, const Model::ListReportDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReportDefinitionsResponseReceivedHandler;
    typedef std::function<void(const ApplicationCostProfilerClient*, const Model::PutReportDefinitionRequest&, const Model::PutReportDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutReportDefinitionResponseReceivedHandler;
    typedef std::function<void(const ApplicationCostProfilerClient*, const Model::UpdateReportDefinitionRequest&, const Model::UpdateReportDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReportDefinitionResponseReceivedHandler;

  /**
   * <p>This reference provides descriptions of the AWS Application Cost Profiler
   * API.</p> <p>The AWS Application Cost Profiler API provides programmatic access
   * to view, create, update, and delete application cost report definitions, as well
   * as to import your usage data into the Application Cost Profiler service.</p>
   * <p>For more information about using this service, see the <a
   * href="https://docs.aws.amazon.com/application-cost-profiler/latest/userguide/introduction.html">AWS
   * Application Cost Profiler User Guide</a>.</p>
   */
  class AWS_APPLICATIONCOSTPROFILER_API ApplicationCostProfilerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationCostProfilerClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationCostProfilerClient(const Aws::Auth::AWSCredentials& credentials,
                                      const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApplicationCostProfilerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                      const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ApplicationCostProfilerClient();


        /**
         * <p>Deletes the specified report definition in AWS Application Cost Profiler.
         * This stops the report from being generated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSApplicationCostProfiler-2020-09-10/DeleteReportDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReportDefinitionOutcome DeleteReportDefinition(const Model::DeleteReportDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteReportDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReportDefinitionOutcomeCallable DeleteReportDefinitionCallable(const Model::DeleteReportDefinitionRequest& request) const;

        /**
         * An Async wrapper for DeleteReportDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReportDefinitionAsync(const Model::DeleteReportDefinitionRequest& request, const DeleteReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the definition of a report already configured in AWS Application
         * Cost Profiler.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSApplicationCostProfiler-2020-09-10/GetReportDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReportDefinitionOutcome GetReportDefinition(const Model::GetReportDefinitionRequest& request) const;

        /**
         * A Callable wrapper for GetReportDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReportDefinitionOutcomeCallable GetReportDefinitionCallable(const Model::GetReportDefinitionRequest& request) const;

        /**
         * An Async wrapper for GetReportDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReportDefinitionAsync(const Model::GetReportDefinitionRequest& request, const GetReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Ingests application usage data from Amazon Simple Storage Service (Amazon
         * S3).</p> <p>The data must already exist in the S3 location. As part of the
         * action, AWS Application Cost Profiler copies the object from your S3 bucket to
         * an S3 bucket owned by Amazon for processing asynchronously.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSApplicationCostProfiler-2020-09-10/ImportApplicationUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportApplicationUsageOutcome ImportApplicationUsage(const Model::ImportApplicationUsageRequest& request) const;

        /**
         * A Callable wrapper for ImportApplicationUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportApplicationUsageOutcomeCallable ImportApplicationUsageCallable(const Model::ImportApplicationUsageRequest& request) const;

        /**
         * An Async wrapper for ImportApplicationUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportApplicationUsageAsync(const Model::ImportApplicationUsageRequest& request, const ImportApplicationUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of all reports and their configurations for your AWS
         * account.</p> <p>The maximum number of reports is one.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSApplicationCostProfiler-2020-09-10/ListReportDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReportDefinitionsOutcome ListReportDefinitions(const Model::ListReportDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListReportDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReportDefinitionsOutcomeCallable ListReportDefinitionsCallable(const Model::ListReportDefinitionsRequest& request) const;

        /**
         * An Async wrapper for ListReportDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReportDefinitionsAsync(const Model::ListReportDefinitionsRequest& request, const ListReportDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the report definition for a report in Application Cost
         * Profiler.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSApplicationCostProfiler-2020-09-10/PutReportDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::PutReportDefinitionOutcome PutReportDefinition(const Model::PutReportDefinitionRequest& request) const;

        /**
         * A Callable wrapper for PutReportDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutReportDefinitionOutcomeCallable PutReportDefinitionCallable(const Model::PutReportDefinitionRequest& request) const;

        /**
         * An Async wrapper for PutReportDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutReportDefinitionAsync(const Model::PutReportDefinitionRequest& request, const PutReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates existing report in AWS Application Cost Profiler.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSApplicationCostProfiler-2020-09-10/UpdateReportDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReportDefinitionOutcome UpdateReportDefinition(const Model::UpdateReportDefinitionRequest& request) const;

        /**
         * A Callable wrapper for UpdateReportDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateReportDefinitionOutcomeCallable UpdateReportDefinitionCallable(const Model::UpdateReportDefinitionRequest& request) const;

        /**
         * An Async wrapper for UpdateReportDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateReportDefinitionAsync(const Model::UpdateReportDefinitionRequest& request, const UpdateReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void DeleteReportDefinitionAsyncHelper(const Model::DeleteReportDefinitionRequest& request, const DeleteReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetReportDefinitionAsyncHelper(const Model::GetReportDefinitionRequest& request, const GetReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportApplicationUsageAsyncHelper(const Model::ImportApplicationUsageRequest& request, const ImportApplicationUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListReportDefinitionsAsyncHelper(const Model::ListReportDefinitionsRequest& request, const ListReportDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutReportDefinitionAsyncHelper(const Model::PutReportDefinitionRequest& request, const PutReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateReportDefinitionAsyncHelper(const Model::UpdateReportDefinitionRequest& request, const UpdateReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ApplicationCostProfiler
} // namespace Aws
