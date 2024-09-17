/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/apptest/AppTestServiceClientModel.h>

namespace Aws
{
namespace AppTest
{
  /**
   * <p>AWS Mainframe Modernization Application Testing provides tools and resources
   * for automated functional equivalence testing for your migration projects.</p>
   */
  class AWS_APPTEST_API AppTestClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AppTestClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef AppTestClientConfiguration ClientConfigurationType;
      typedef AppTestEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppTestClient(const Aws::AppTest::AppTestClientConfiguration& clientConfiguration = Aws::AppTest::AppTestClientConfiguration(),
                      std::shared_ptr<AppTestEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppTestClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<AppTestEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::AppTest::AppTestClientConfiguration& clientConfiguration = Aws::AppTest::AppTestClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppTestClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<AppTestEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::AppTest::AppTestClientConfiguration& clientConfiguration = Aws::AppTest::AppTestClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppTestClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppTestClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppTestClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AppTestClient();

        /**
         * <p>Creates a test case.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/CreateTestCase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTestCaseOutcome CreateTestCase(const Model::CreateTestCaseRequest& request) const;

        /**
         * A Callable wrapper for CreateTestCase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTestCaseRequestT = Model::CreateTestCaseRequest>
        Model::CreateTestCaseOutcomeCallable CreateTestCaseCallable(const CreateTestCaseRequestT& request) const
        {
            return SubmitCallable(&AppTestClient::CreateTestCase, request);
        }

        /**
         * An Async wrapper for CreateTestCase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTestCaseRequestT = Model::CreateTestCaseRequest>
        void CreateTestCaseAsync(const CreateTestCaseRequestT& request, const CreateTestCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppTestClient::CreateTestCase, request, handler, context);
        }

        /**
         * <p>Creates a test configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/CreateTestConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTestConfigurationOutcome CreateTestConfiguration(const Model::CreateTestConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateTestConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTestConfigurationRequestT = Model::CreateTestConfigurationRequest>
        Model::CreateTestConfigurationOutcomeCallable CreateTestConfigurationCallable(const CreateTestConfigurationRequestT& request) const
        {
            return SubmitCallable(&AppTestClient::CreateTestConfiguration, request);
        }

        /**
         * An Async wrapper for CreateTestConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTestConfigurationRequestT = Model::CreateTestConfigurationRequest>
        void CreateTestConfigurationAsync(const CreateTestConfigurationRequestT& request, const CreateTestConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppTestClient::CreateTestConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a test suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/CreateTestSuite">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTestSuiteOutcome CreateTestSuite(const Model::CreateTestSuiteRequest& request) const;

        /**
         * A Callable wrapper for CreateTestSuite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTestSuiteRequestT = Model::CreateTestSuiteRequest>
        Model::CreateTestSuiteOutcomeCallable CreateTestSuiteCallable(const CreateTestSuiteRequestT& request) const
        {
            return SubmitCallable(&AppTestClient::CreateTestSuite, request);
        }

        /**
         * An Async wrapper for CreateTestSuite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTestSuiteRequestT = Model::CreateTestSuiteRequest>
        void CreateTestSuiteAsync(const CreateTestSuiteRequestT& request, const CreateTestSuiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppTestClient::CreateTestSuite, request, handler, context);
        }

        /**
         * <p>Deletes a test case.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/DeleteTestCase">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTestCaseOutcome DeleteTestCase(const Model::DeleteTestCaseRequest& request) const;

        /**
         * A Callable wrapper for DeleteTestCase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTestCaseRequestT = Model::DeleteTestCaseRequest>
        Model::DeleteTestCaseOutcomeCallable DeleteTestCaseCallable(const DeleteTestCaseRequestT& request) const
        {
            return SubmitCallable(&AppTestClient::DeleteTestCase, request);
        }

        /**
         * An Async wrapper for DeleteTestCase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTestCaseRequestT = Model::DeleteTestCaseRequest>
        void DeleteTestCaseAsync(const DeleteTestCaseRequestT& request, const DeleteTestCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppTestClient::DeleteTestCase, request, handler, context);
        }

        /**
         * <p>Deletes a test configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/DeleteTestConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTestConfigurationOutcome DeleteTestConfiguration(const Model::DeleteTestConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteTestConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTestConfigurationRequestT = Model::DeleteTestConfigurationRequest>
        Model::DeleteTestConfigurationOutcomeCallable DeleteTestConfigurationCallable(const DeleteTestConfigurationRequestT& request) const
        {
            return SubmitCallable(&AppTestClient::DeleteTestConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteTestConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTestConfigurationRequestT = Model::DeleteTestConfigurationRequest>
        void DeleteTestConfigurationAsync(const DeleteTestConfigurationRequestT& request, const DeleteTestConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppTestClient::DeleteTestConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes a test run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/DeleteTestRun">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTestRunOutcome DeleteTestRun(const Model::DeleteTestRunRequest& request) const;

        /**
         * A Callable wrapper for DeleteTestRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTestRunRequestT = Model::DeleteTestRunRequest>
        Model::DeleteTestRunOutcomeCallable DeleteTestRunCallable(const DeleteTestRunRequestT& request) const
        {
            return SubmitCallable(&AppTestClient::DeleteTestRun, request);
        }

        /**
         * An Async wrapper for DeleteTestRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTestRunRequestT = Model::DeleteTestRunRequest>
        void DeleteTestRunAsync(const DeleteTestRunRequestT& request, const DeleteTestRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppTestClient::DeleteTestRun, request, handler, context);
        }

        /**
         * <p>Deletes a test suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/DeleteTestSuite">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTestSuiteOutcome DeleteTestSuite(const Model::DeleteTestSuiteRequest& request) const;

        /**
         * A Callable wrapper for DeleteTestSuite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTestSuiteRequestT = Model::DeleteTestSuiteRequest>
        Model::DeleteTestSuiteOutcomeCallable DeleteTestSuiteCallable(const DeleteTestSuiteRequestT& request) const
        {
            return SubmitCallable(&AppTestClient::DeleteTestSuite, request);
        }

        /**
         * An Async wrapper for DeleteTestSuite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTestSuiteRequestT = Model::DeleteTestSuiteRequest>
        void DeleteTestSuiteAsync(const DeleteTestSuiteRequestT& request, const DeleteTestSuiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppTestClient::DeleteTestSuite, request, handler, context);
        }

        /**
         * <p>Gets a test case.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/GetTestCase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTestCaseOutcome GetTestCase(const Model::GetTestCaseRequest& request) const;

        /**
         * A Callable wrapper for GetTestCase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTestCaseRequestT = Model::GetTestCaseRequest>
        Model::GetTestCaseOutcomeCallable GetTestCaseCallable(const GetTestCaseRequestT& request) const
        {
            return SubmitCallable(&AppTestClient::GetTestCase, request);
        }

        /**
         * An Async wrapper for GetTestCase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTestCaseRequestT = Model::GetTestCaseRequest>
        void GetTestCaseAsync(const GetTestCaseRequestT& request, const GetTestCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppTestClient::GetTestCase, request, handler, context);
        }

        /**
         * <p>Gets a test configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/GetTestConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTestConfigurationOutcome GetTestConfiguration(const Model::GetTestConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetTestConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTestConfigurationRequestT = Model::GetTestConfigurationRequest>
        Model::GetTestConfigurationOutcomeCallable GetTestConfigurationCallable(const GetTestConfigurationRequestT& request) const
        {
            return SubmitCallable(&AppTestClient::GetTestConfiguration, request);
        }

        /**
         * An Async wrapper for GetTestConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTestConfigurationRequestT = Model::GetTestConfigurationRequest>
        void GetTestConfigurationAsync(const GetTestConfigurationRequestT& request, const GetTestConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppTestClient::GetTestConfiguration, request, handler, context);
        }

        /**
         * <p>Gets a test run step.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/GetTestRunStep">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTestRunStepOutcome GetTestRunStep(const Model::GetTestRunStepRequest& request) const;

        /**
         * A Callable wrapper for GetTestRunStep that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTestRunStepRequestT = Model::GetTestRunStepRequest>
        Model::GetTestRunStepOutcomeCallable GetTestRunStepCallable(const GetTestRunStepRequestT& request) const
        {
            return SubmitCallable(&AppTestClient::GetTestRunStep, request);
        }

        /**
         * An Async wrapper for GetTestRunStep that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTestRunStepRequestT = Model::GetTestRunStepRequest>
        void GetTestRunStepAsync(const GetTestRunStepRequestT& request, const GetTestRunStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppTestClient::GetTestRunStep, request, handler, context);
        }

        /**
         * <p>Gets a test suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/GetTestSuite">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTestSuiteOutcome GetTestSuite(const Model::GetTestSuiteRequest& request) const;

        /**
         * A Callable wrapper for GetTestSuite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTestSuiteRequestT = Model::GetTestSuiteRequest>
        Model::GetTestSuiteOutcomeCallable GetTestSuiteCallable(const GetTestSuiteRequestT& request) const
        {
            return SubmitCallable(&AppTestClient::GetTestSuite, request);
        }

        /**
         * An Async wrapper for GetTestSuite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTestSuiteRequestT = Model::GetTestSuiteRequest>
        void GetTestSuiteAsync(const GetTestSuiteRequestT& request, const GetTestSuiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppTestClient::GetTestSuite, request, handler, context);
        }

        /**
         * <p>Lists tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&AppTestClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppTestClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists test cases.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/ListTestCases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestCasesOutcome ListTestCases(const Model::ListTestCasesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListTestCases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTestCasesRequestT = Model::ListTestCasesRequest>
        Model::ListTestCasesOutcomeCallable ListTestCasesCallable(const ListTestCasesRequestT& request = {}) const
        {
            return SubmitCallable(&AppTestClient::ListTestCases, request);
        }

        /**
         * An Async wrapper for ListTestCases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTestCasesRequestT = Model::ListTestCasesRequest>
        void ListTestCasesAsync(const ListTestCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListTestCasesRequestT& request = {}) const
        {
            return SubmitAsync(&AppTestClient::ListTestCases, request, handler, context);
        }

        /**
         * <p>Lists test configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/ListTestConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestConfigurationsOutcome ListTestConfigurations(const Model::ListTestConfigurationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListTestConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTestConfigurationsRequestT = Model::ListTestConfigurationsRequest>
        Model::ListTestConfigurationsOutcomeCallable ListTestConfigurationsCallable(const ListTestConfigurationsRequestT& request = {}) const
        {
            return SubmitCallable(&AppTestClient::ListTestConfigurations, request);
        }

        /**
         * An Async wrapper for ListTestConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTestConfigurationsRequestT = Model::ListTestConfigurationsRequest>
        void ListTestConfigurationsAsync(const ListTestConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListTestConfigurationsRequestT& request = {}) const
        {
            return SubmitAsync(&AppTestClient::ListTestConfigurations, request, handler, context);
        }

        /**
         * <p>Lists test run steps.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/ListTestRunSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestRunStepsOutcome ListTestRunSteps(const Model::ListTestRunStepsRequest& request) const;

        /**
         * A Callable wrapper for ListTestRunSteps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTestRunStepsRequestT = Model::ListTestRunStepsRequest>
        Model::ListTestRunStepsOutcomeCallable ListTestRunStepsCallable(const ListTestRunStepsRequestT& request) const
        {
            return SubmitCallable(&AppTestClient::ListTestRunSteps, request);
        }

        /**
         * An Async wrapper for ListTestRunSteps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTestRunStepsRequestT = Model::ListTestRunStepsRequest>
        void ListTestRunStepsAsync(const ListTestRunStepsRequestT& request, const ListTestRunStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppTestClient::ListTestRunSteps, request, handler, context);
        }

        /**
         * <p>Lists test run test cases.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/ListTestRunTestCases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestRunTestCasesOutcome ListTestRunTestCases(const Model::ListTestRunTestCasesRequest& request) const;

        /**
         * A Callable wrapper for ListTestRunTestCases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTestRunTestCasesRequestT = Model::ListTestRunTestCasesRequest>
        Model::ListTestRunTestCasesOutcomeCallable ListTestRunTestCasesCallable(const ListTestRunTestCasesRequestT& request) const
        {
            return SubmitCallable(&AppTestClient::ListTestRunTestCases, request);
        }

        /**
         * An Async wrapper for ListTestRunTestCases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTestRunTestCasesRequestT = Model::ListTestRunTestCasesRequest>
        void ListTestRunTestCasesAsync(const ListTestRunTestCasesRequestT& request, const ListTestRunTestCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppTestClient::ListTestRunTestCases, request, handler, context);
        }

        /**
         * <p>Lists test runs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/ListTestRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestRunsOutcome ListTestRuns(const Model::ListTestRunsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListTestRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTestRunsRequestT = Model::ListTestRunsRequest>
        Model::ListTestRunsOutcomeCallable ListTestRunsCallable(const ListTestRunsRequestT& request = {}) const
        {
            return SubmitCallable(&AppTestClient::ListTestRuns, request);
        }

        /**
         * An Async wrapper for ListTestRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTestRunsRequestT = Model::ListTestRunsRequest>
        void ListTestRunsAsync(const ListTestRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListTestRunsRequestT& request = {}) const
        {
            return SubmitAsync(&AppTestClient::ListTestRuns, request, handler, context);
        }

        /**
         * <p>Lists test suites.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/ListTestSuites">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestSuitesOutcome ListTestSuites(const Model::ListTestSuitesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListTestSuites that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTestSuitesRequestT = Model::ListTestSuitesRequest>
        Model::ListTestSuitesOutcomeCallable ListTestSuitesCallable(const ListTestSuitesRequestT& request = {}) const
        {
            return SubmitCallable(&AppTestClient::ListTestSuites, request);
        }

        /**
         * An Async wrapper for ListTestSuites that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTestSuitesRequestT = Model::ListTestSuitesRequest>
        void ListTestSuitesAsync(const ListTestSuitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListTestSuitesRequestT& request = {}) const
        {
            return SubmitAsync(&AppTestClient::ListTestSuites, request, handler, context);
        }

        /**
         * <p>Starts a test run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/StartTestRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTestRunOutcome StartTestRun(const Model::StartTestRunRequest& request) const;

        /**
         * A Callable wrapper for StartTestRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartTestRunRequestT = Model::StartTestRunRequest>
        Model::StartTestRunOutcomeCallable StartTestRunCallable(const StartTestRunRequestT& request) const
        {
            return SubmitCallable(&AppTestClient::StartTestRun, request);
        }

        /**
         * An Async wrapper for StartTestRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartTestRunRequestT = Model::StartTestRunRequest>
        void StartTestRunAsync(const StartTestRunRequestT& request, const StartTestRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppTestClient::StartTestRun, request, handler, context);
        }

        /**
         * <p>Specifies tags of a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&AppTestClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppTestClient::TagResource, request, handler, context);
        }

        /**
         * <p>Untags a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&AppTestClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppTestClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates a test case.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/UpdateTestCase">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTestCaseOutcome UpdateTestCase(const Model::UpdateTestCaseRequest& request) const;

        /**
         * A Callable wrapper for UpdateTestCase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTestCaseRequestT = Model::UpdateTestCaseRequest>
        Model::UpdateTestCaseOutcomeCallable UpdateTestCaseCallable(const UpdateTestCaseRequestT& request) const
        {
            return SubmitCallable(&AppTestClient::UpdateTestCase, request);
        }

        /**
         * An Async wrapper for UpdateTestCase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTestCaseRequestT = Model::UpdateTestCaseRequest>
        void UpdateTestCaseAsync(const UpdateTestCaseRequestT& request, const UpdateTestCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppTestClient::UpdateTestCase, request, handler, context);
        }

        /**
         * <p>Updates a test configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/UpdateTestConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTestConfigurationOutcome UpdateTestConfiguration(const Model::UpdateTestConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateTestConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTestConfigurationRequestT = Model::UpdateTestConfigurationRequest>
        Model::UpdateTestConfigurationOutcomeCallable UpdateTestConfigurationCallable(const UpdateTestConfigurationRequestT& request) const
        {
            return SubmitCallable(&AppTestClient::UpdateTestConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateTestConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTestConfigurationRequestT = Model::UpdateTestConfigurationRequest>
        void UpdateTestConfigurationAsync(const UpdateTestConfigurationRequestT& request, const UpdateTestConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppTestClient::UpdateTestConfiguration, request, handler, context);
        }

        /**
         * <p>Updates a test suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/UpdateTestSuite">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTestSuiteOutcome UpdateTestSuite(const Model::UpdateTestSuiteRequest& request) const;

        /**
         * A Callable wrapper for UpdateTestSuite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTestSuiteRequestT = Model::UpdateTestSuiteRequest>
        Model::UpdateTestSuiteOutcomeCallable UpdateTestSuiteCallable(const UpdateTestSuiteRequestT& request) const
        {
            return SubmitCallable(&AppTestClient::UpdateTestSuite, request);
        }

        /**
         * An Async wrapper for UpdateTestSuite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTestSuiteRequestT = Model::UpdateTestSuiteRequest>
        void UpdateTestSuiteAsync(const UpdateTestSuiteRequestT& request, const UpdateTestSuiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppTestClient::UpdateTestSuite, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AppTestEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AppTestClient>;
      void init(const AppTestClientConfiguration& clientConfiguration);

      AppTestClientConfiguration m_clientConfiguration;
      std::shared_ptr<AppTestEndpointProviderBase> m_endpointProvider;
  };

} // namespace AppTest
} // namespace Aws
