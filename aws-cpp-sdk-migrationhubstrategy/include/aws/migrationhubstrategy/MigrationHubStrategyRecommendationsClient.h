/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsServiceClientModel.h>

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
  /**
   * <p><fullname>Migration Hub Strategy Recommendations</fullname></p> <pre><code>
   * &lt;p&gt;This API reference provides descriptions, syntax, and other details
   * about each of the actions and data types for Migration Hub Strategy
   * Recommendations (Strategy Recommendations). The topic for each action shows the
   * API request parameters and the response. Alternatively, you can use one of the
   * AWS SDKs to access an API that is tailored to the programming language or
   * platform that you're using. For more information, see &lt;a
   * href=&quot;http://aws.amazon.com/tools/#SDKs&quot;&gt;AWS
   * SDKs&lt;/a&gt;.&lt;/p&gt; </code></pre>
   */
  class AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API MigrationHubStrategyRecommendationsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MigrationHubStrategyRecommendationsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubStrategyRecommendationsClient(const Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsClientConfiguration& clientConfiguration = Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsClientConfiguration(),
                                                  std::shared_ptr<MigrationHubStrategyRecommendationsEndpointProviderBase> endpointProvider = Aws::MakeShared<MigrationHubStrategyRecommendationsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubStrategyRecommendationsClient(const Aws::Auth::AWSCredentials& credentials,
                                                  std::shared_ptr<MigrationHubStrategyRecommendationsEndpointProviderBase> endpointProvider = Aws::MakeShared<MigrationHubStrategyRecommendationsEndpointProvider>(ALLOCATION_TAG),
                                                  const Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsClientConfiguration& clientConfiguration = Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MigrationHubStrategyRecommendationsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                                  std::shared_ptr<MigrationHubStrategyRecommendationsEndpointProviderBase> endpointProvider = Aws::MakeShared<MigrationHubStrategyRecommendationsEndpointProvider>(ALLOCATION_TAG),
                                                  const Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsClientConfiguration& clientConfiguration = Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubStrategyRecommendationsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubStrategyRecommendationsClient(const Aws::Auth::AWSCredentials& credentials,
                                                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MigrationHubStrategyRecommendationsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MigrationHubStrategyRecommendationsClient();

        /**
         * <p> Retrieves details about an application component. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetApplicationComponentDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationComponentDetailsOutcome GetApplicationComponentDetails(const Model::GetApplicationComponentDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetApplicationComponentDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApplicationComponentDetailsOutcomeCallable GetApplicationComponentDetailsCallable(const Model::GetApplicationComponentDetailsRequest& request) const;

        /**
         * An Async wrapper for GetApplicationComponentDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApplicationComponentDetailsAsync(const Model::GetApplicationComponentDetailsRequest& request, const GetApplicationComponentDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Retrieves a list of all the recommended strategies and tools for an
         * application component running on a server. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetApplicationComponentStrategies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationComponentStrategiesOutcome GetApplicationComponentStrategies(const Model::GetApplicationComponentStrategiesRequest& request) const;

        /**
         * A Callable wrapper for GetApplicationComponentStrategies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApplicationComponentStrategiesOutcomeCallable GetApplicationComponentStrategiesCallable(const Model::GetApplicationComponentStrategiesRequest& request) const;

        /**
         * An Async wrapper for GetApplicationComponentStrategies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApplicationComponentStrategiesAsync(const Model::GetApplicationComponentStrategiesRequest& request, const GetApplicationComponentStrategiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Retrieves the status of an on-going assessment. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssessmentOutcome GetAssessment(const Model::GetAssessmentRequest& request) const;

        /**
         * A Callable wrapper for GetAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAssessmentOutcomeCallable GetAssessmentCallable(const Model::GetAssessmentRequest& request) const;

        /**
         * An Async wrapper for GetAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAssessmentAsync(const Model::GetAssessmentRequest& request, const GetAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Retrieves the details about a specific import task. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetImportFileTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImportFileTaskOutcome GetImportFileTask(const Model::GetImportFileTaskRequest& request) const;

        /**
         * A Callable wrapper for GetImportFileTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImportFileTaskOutcomeCallable GetImportFileTaskCallable(const Model::GetImportFileTaskRequest& request) const;

        /**
         * An Async wrapper for GetImportFileTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImportFileTaskAsync(const Model::GetImportFileTaskRequest& request, const GetImportFileTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve the latest ID of a specific assessment task.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetLatestAssessmentId">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLatestAssessmentIdOutcome GetLatestAssessmentId(const Model::GetLatestAssessmentIdRequest& request) const;

        /**
         * A Callable wrapper for GetLatestAssessmentId that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLatestAssessmentIdOutcomeCallable GetLatestAssessmentIdCallable(const Model::GetLatestAssessmentIdRequest& request) const;

        /**
         * An Async wrapper for GetLatestAssessmentId that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLatestAssessmentIdAsync(const Model::GetLatestAssessmentIdRequest& request, const GetLatestAssessmentIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Retrieves your migration and modernization preferences. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetPortfolioPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPortfolioPreferencesOutcome GetPortfolioPreferences(const Model::GetPortfolioPreferencesRequest& request) const;

        /**
         * A Callable wrapper for GetPortfolioPreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPortfolioPreferencesOutcomeCallable GetPortfolioPreferencesCallable(const Model::GetPortfolioPreferencesRequest& request) const;

        /**
         * An Async wrapper for GetPortfolioPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPortfolioPreferencesAsync(const Model::GetPortfolioPreferencesRequest& request, const GetPortfolioPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Retrieves overall summary including the number of servers to rehost and the
         * overall number of anti-patterns. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetPortfolioSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPortfolioSummaryOutcome GetPortfolioSummary(const Model::GetPortfolioSummaryRequest& request) const;

        /**
         * A Callable wrapper for GetPortfolioSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPortfolioSummaryOutcomeCallable GetPortfolioSummaryCallable(const Model::GetPortfolioSummaryRequest& request) const;

        /**
         * An Async wrapper for GetPortfolioSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPortfolioSummaryAsync(const Model::GetPortfolioSummaryRequest& request, const GetPortfolioSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Retrieves detailed information about the specified recommendation report.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetRecommendationReportDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecommendationReportDetailsOutcome GetRecommendationReportDetails(const Model::GetRecommendationReportDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetRecommendationReportDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRecommendationReportDetailsOutcomeCallable GetRecommendationReportDetailsCallable(const Model::GetRecommendationReportDetailsRequest& request) const;

        /**
         * An Async wrapper for GetRecommendationReportDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRecommendationReportDetailsAsync(const Model::GetRecommendationReportDetailsRequest& request, const GetRecommendationReportDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Retrieves detailed information about a specified server. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetServerDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServerDetailsOutcome GetServerDetails(const Model::GetServerDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetServerDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServerDetailsOutcomeCallable GetServerDetailsCallable(const Model::GetServerDetailsRequest& request) const;

        /**
         * An Async wrapper for GetServerDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServerDetailsAsync(const Model::GetServerDetailsRequest& request, const GetServerDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Retrieves recommended strategies and tools for the specified server.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetServerStrategies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServerStrategiesOutcome GetServerStrategies(const Model::GetServerStrategiesRequest& request) const;

        /**
         * A Callable wrapper for GetServerStrategies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServerStrategiesOutcomeCallable GetServerStrategiesCallable(const Model::GetServerStrategiesRequest& request) const;

        /**
         * An Async wrapper for GetServerStrategies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServerStrategiesAsync(const Model::GetServerStrategiesRequest& request, const GetServerStrategiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Retrieves a list of all the application components (processes).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ListApplicationComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationComponentsOutcome ListApplicationComponents(const Model::ListApplicationComponentsRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationComponents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationComponentsOutcomeCallable ListApplicationComponentsCallable(const Model::ListApplicationComponentsRequest& request) const;

        /**
         * An Async wrapper for ListApplicationComponents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationComponentsAsync(const Model::ListApplicationComponentsRequest& request, const ListApplicationComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Retrieves a list of all the installed collectors. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ListCollectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCollectorsOutcome ListCollectors(const Model::ListCollectorsRequest& request) const;

        /**
         * A Callable wrapper for ListCollectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCollectorsOutcomeCallable ListCollectorsCallable(const Model::ListCollectorsRequest& request) const;

        /**
         * An Async wrapper for ListCollectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCollectorsAsync(const Model::ListCollectorsRequest& request, const ListCollectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Retrieves a list of all the imports performed. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ListImportFileTask">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImportFileTaskOutcome ListImportFileTask(const Model::ListImportFileTaskRequest& request) const;

        /**
         * A Callable wrapper for ListImportFileTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImportFileTaskOutcomeCallable ListImportFileTaskCallable(const Model::ListImportFileTaskRequest& request) const;

        /**
         * An Async wrapper for ListImportFileTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImportFileTaskAsync(const Model::ListImportFileTaskRequest& request, const ListImportFileTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of all the servers. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ListServers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServersOutcome ListServers(const Model::ListServersRequest& request) const;

        /**
         * A Callable wrapper for ListServers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServersOutcomeCallable ListServersCallable(const Model::ListServersRequest& request) const;

        /**
         * An Async wrapper for ListServers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServersAsync(const Model::ListServersRequest& request, const ListServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Saves the specified migration and modernization preferences. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/PutPortfolioPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPortfolioPreferencesOutcome PutPortfolioPreferences(const Model::PutPortfolioPreferencesRequest& request) const;

        /**
         * A Callable wrapper for PutPortfolioPreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPortfolioPreferencesOutcomeCallable PutPortfolioPreferencesCallable(const Model::PutPortfolioPreferencesRequest& request) const;

        /**
         * An Async wrapper for PutPortfolioPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPortfolioPreferencesAsync(const Model::PutPortfolioPreferencesRequest& request, const PutPortfolioPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Starts the assessment of an on-premises environment. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/StartAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAssessmentOutcome StartAssessment(const Model::StartAssessmentRequest& request) const;

        /**
         * A Callable wrapper for StartAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartAssessmentOutcomeCallable StartAssessmentCallable(const Model::StartAssessmentRequest& request) const;

        /**
         * An Async wrapper for StartAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartAssessmentAsync(const Model::StartAssessmentRequest& request, const StartAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Starts a file import. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/StartImportFileTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartImportFileTaskOutcome StartImportFileTask(const Model::StartImportFileTaskRequest& request) const;

        /**
         * A Callable wrapper for StartImportFileTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartImportFileTaskOutcomeCallable StartImportFileTaskCallable(const Model::StartImportFileTaskRequest& request) const;

        /**
         * An Async wrapper for StartImportFileTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartImportFileTaskAsync(const Model::StartImportFileTaskRequest& request, const StartImportFileTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Starts generating a recommendation report. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/StartRecommendationReportGeneration">AWS
         * API Reference</a></p>
         */
        virtual Model::StartRecommendationReportGenerationOutcome StartRecommendationReportGeneration(const Model::StartRecommendationReportGenerationRequest& request) const;

        /**
         * A Callable wrapper for StartRecommendationReportGeneration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartRecommendationReportGenerationOutcomeCallable StartRecommendationReportGenerationCallable(const Model::StartRecommendationReportGenerationRequest& request) const;

        /**
         * An Async wrapper for StartRecommendationReportGeneration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartRecommendationReportGenerationAsync(const Model::StartRecommendationReportGenerationRequest& request, const StartRecommendationReportGenerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Stops the assessment of an on-premises environment. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/StopAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::StopAssessmentOutcome StopAssessment(const Model::StopAssessmentRequest& request) const;

        /**
         * A Callable wrapper for StopAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopAssessmentOutcomeCallable StopAssessmentCallable(const Model::StopAssessmentRequest& request) const;

        /**
         * An Async wrapper for StopAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopAssessmentAsync(const Model::StopAssessmentRequest& request, const StopAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates the configuration of an application component. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/UpdateApplicationComponentConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationComponentConfigOutcome UpdateApplicationComponentConfig(const Model::UpdateApplicationComponentConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplicationComponentConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationComponentConfigOutcomeCallable UpdateApplicationComponentConfigCallable(const Model::UpdateApplicationComponentConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateApplicationComponentConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationComponentConfigAsync(const Model::UpdateApplicationComponentConfigRequest& request, const UpdateApplicationComponentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates the configuration of the specified server. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/UpdateServerConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServerConfigOutcome UpdateServerConfig(const Model::UpdateServerConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateServerConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServerConfigOutcomeCallable UpdateServerConfigCallable(const Model::UpdateServerConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateServerConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServerConfigAsync(const Model::UpdateServerConfigRequest& request, const UpdateServerConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MigrationHubStrategyRecommendationsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MigrationHubStrategyRecommendationsClient>;
      void init(const MigrationHubStrategyRecommendationsClientConfiguration& clientConfiguration);

      MigrationHubStrategyRecommendationsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MigrationHubStrategyRecommendationsEndpointProviderBase> m_endpointProvider;
  };

} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
