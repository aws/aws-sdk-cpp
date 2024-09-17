/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/apptest/AppTestErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/apptest/AppTestEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AppTestClient header */
#include <aws/apptest/model/CreateTestCaseResult.h>
#include <aws/apptest/model/CreateTestConfigurationResult.h>
#include <aws/apptest/model/CreateTestSuiteResult.h>
#include <aws/apptest/model/DeleteTestCaseResult.h>
#include <aws/apptest/model/DeleteTestConfigurationResult.h>
#include <aws/apptest/model/DeleteTestRunResult.h>
#include <aws/apptest/model/DeleteTestSuiteResult.h>
#include <aws/apptest/model/GetTestCaseResult.h>
#include <aws/apptest/model/GetTestConfigurationResult.h>
#include <aws/apptest/model/GetTestRunStepResult.h>
#include <aws/apptest/model/GetTestSuiteResult.h>
#include <aws/apptest/model/ListTagsForResourceResult.h>
#include <aws/apptest/model/ListTestCasesResult.h>
#include <aws/apptest/model/ListTestConfigurationsResult.h>
#include <aws/apptest/model/ListTestRunStepsResult.h>
#include <aws/apptest/model/ListTestRunTestCasesResult.h>
#include <aws/apptest/model/ListTestRunsResult.h>
#include <aws/apptest/model/ListTestSuitesResult.h>
#include <aws/apptest/model/StartTestRunResult.h>
#include <aws/apptest/model/TagResourceResult.h>
#include <aws/apptest/model/UntagResourceResult.h>
#include <aws/apptest/model/UpdateTestCaseResult.h>
#include <aws/apptest/model/UpdateTestConfigurationResult.h>
#include <aws/apptest/model/UpdateTestSuiteResult.h>
#include <aws/apptest/model/ListTestSuitesRequest.h>
#include <aws/apptest/model/ListTestRunsRequest.h>
#include <aws/apptest/model/ListTestConfigurationsRequest.h>
#include <aws/apptest/model/ListTestCasesRequest.h>
/* End of service model headers required in AppTestClient header */

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

  namespace AppTest
  {
    using AppTestClientConfiguration = Aws::Client::GenericClientConfiguration;
    using AppTestEndpointProviderBase = Aws::AppTest::Endpoint::AppTestEndpointProviderBase;
    using AppTestEndpointProvider = Aws::AppTest::Endpoint::AppTestEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AppTestClient header */
      class CreateTestCaseRequest;
      class CreateTestConfigurationRequest;
      class CreateTestSuiteRequest;
      class DeleteTestCaseRequest;
      class DeleteTestConfigurationRequest;
      class DeleteTestRunRequest;
      class DeleteTestSuiteRequest;
      class GetTestCaseRequest;
      class GetTestConfigurationRequest;
      class GetTestRunStepRequest;
      class GetTestSuiteRequest;
      class ListTagsForResourceRequest;
      class ListTestCasesRequest;
      class ListTestConfigurationsRequest;
      class ListTestRunStepsRequest;
      class ListTestRunTestCasesRequest;
      class ListTestRunsRequest;
      class ListTestSuitesRequest;
      class StartTestRunRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateTestCaseRequest;
      class UpdateTestConfigurationRequest;
      class UpdateTestSuiteRequest;
      /* End of service model forward declarations required in AppTestClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateTestCaseResult, AppTestError> CreateTestCaseOutcome;
      typedef Aws::Utils::Outcome<CreateTestConfigurationResult, AppTestError> CreateTestConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateTestSuiteResult, AppTestError> CreateTestSuiteOutcome;
      typedef Aws::Utils::Outcome<DeleteTestCaseResult, AppTestError> DeleteTestCaseOutcome;
      typedef Aws::Utils::Outcome<DeleteTestConfigurationResult, AppTestError> DeleteTestConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteTestRunResult, AppTestError> DeleteTestRunOutcome;
      typedef Aws::Utils::Outcome<DeleteTestSuiteResult, AppTestError> DeleteTestSuiteOutcome;
      typedef Aws::Utils::Outcome<GetTestCaseResult, AppTestError> GetTestCaseOutcome;
      typedef Aws::Utils::Outcome<GetTestConfigurationResult, AppTestError> GetTestConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetTestRunStepResult, AppTestError> GetTestRunStepOutcome;
      typedef Aws::Utils::Outcome<GetTestSuiteResult, AppTestError> GetTestSuiteOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, AppTestError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTestCasesResult, AppTestError> ListTestCasesOutcome;
      typedef Aws::Utils::Outcome<ListTestConfigurationsResult, AppTestError> ListTestConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListTestRunStepsResult, AppTestError> ListTestRunStepsOutcome;
      typedef Aws::Utils::Outcome<ListTestRunTestCasesResult, AppTestError> ListTestRunTestCasesOutcome;
      typedef Aws::Utils::Outcome<ListTestRunsResult, AppTestError> ListTestRunsOutcome;
      typedef Aws::Utils::Outcome<ListTestSuitesResult, AppTestError> ListTestSuitesOutcome;
      typedef Aws::Utils::Outcome<StartTestRunResult, AppTestError> StartTestRunOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, AppTestError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, AppTestError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateTestCaseResult, AppTestError> UpdateTestCaseOutcome;
      typedef Aws::Utils::Outcome<UpdateTestConfigurationResult, AppTestError> UpdateTestConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateTestSuiteResult, AppTestError> UpdateTestSuiteOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateTestCaseOutcome> CreateTestCaseOutcomeCallable;
      typedef std::future<CreateTestConfigurationOutcome> CreateTestConfigurationOutcomeCallable;
      typedef std::future<CreateTestSuiteOutcome> CreateTestSuiteOutcomeCallable;
      typedef std::future<DeleteTestCaseOutcome> DeleteTestCaseOutcomeCallable;
      typedef std::future<DeleteTestConfigurationOutcome> DeleteTestConfigurationOutcomeCallable;
      typedef std::future<DeleteTestRunOutcome> DeleteTestRunOutcomeCallable;
      typedef std::future<DeleteTestSuiteOutcome> DeleteTestSuiteOutcomeCallable;
      typedef std::future<GetTestCaseOutcome> GetTestCaseOutcomeCallable;
      typedef std::future<GetTestConfigurationOutcome> GetTestConfigurationOutcomeCallable;
      typedef std::future<GetTestRunStepOutcome> GetTestRunStepOutcomeCallable;
      typedef std::future<GetTestSuiteOutcome> GetTestSuiteOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTestCasesOutcome> ListTestCasesOutcomeCallable;
      typedef std::future<ListTestConfigurationsOutcome> ListTestConfigurationsOutcomeCallable;
      typedef std::future<ListTestRunStepsOutcome> ListTestRunStepsOutcomeCallable;
      typedef std::future<ListTestRunTestCasesOutcome> ListTestRunTestCasesOutcomeCallable;
      typedef std::future<ListTestRunsOutcome> ListTestRunsOutcomeCallable;
      typedef std::future<ListTestSuitesOutcome> ListTestSuitesOutcomeCallable;
      typedef std::future<StartTestRunOutcome> StartTestRunOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateTestCaseOutcome> UpdateTestCaseOutcomeCallable;
      typedef std::future<UpdateTestConfigurationOutcome> UpdateTestConfigurationOutcomeCallable;
      typedef std::future<UpdateTestSuiteOutcome> UpdateTestSuiteOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AppTestClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AppTestClient*, const Model::CreateTestCaseRequest&, const Model::CreateTestCaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTestCaseResponseReceivedHandler;
    typedef std::function<void(const AppTestClient*, const Model::CreateTestConfigurationRequest&, const Model::CreateTestConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTestConfigurationResponseReceivedHandler;
    typedef std::function<void(const AppTestClient*, const Model::CreateTestSuiteRequest&, const Model::CreateTestSuiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTestSuiteResponseReceivedHandler;
    typedef std::function<void(const AppTestClient*, const Model::DeleteTestCaseRequest&, const Model::DeleteTestCaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTestCaseResponseReceivedHandler;
    typedef std::function<void(const AppTestClient*, const Model::DeleteTestConfigurationRequest&, const Model::DeleteTestConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTestConfigurationResponseReceivedHandler;
    typedef std::function<void(const AppTestClient*, const Model::DeleteTestRunRequest&, const Model::DeleteTestRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTestRunResponseReceivedHandler;
    typedef std::function<void(const AppTestClient*, const Model::DeleteTestSuiteRequest&, const Model::DeleteTestSuiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTestSuiteResponseReceivedHandler;
    typedef std::function<void(const AppTestClient*, const Model::GetTestCaseRequest&, const Model::GetTestCaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTestCaseResponseReceivedHandler;
    typedef std::function<void(const AppTestClient*, const Model::GetTestConfigurationRequest&, const Model::GetTestConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTestConfigurationResponseReceivedHandler;
    typedef std::function<void(const AppTestClient*, const Model::GetTestRunStepRequest&, const Model::GetTestRunStepOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTestRunStepResponseReceivedHandler;
    typedef std::function<void(const AppTestClient*, const Model::GetTestSuiteRequest&, const Model::GetTestSuiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTestSuiteResponseReceivedHandler;
    typedef std::function<void(const AppTestClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AppTestClient*, const Model::ListTestCasesRequest&, const Model::ListTestCasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTestCasesResponseReceivedHandler;
    typedef std::function<void(const AppTestClient*, const Model::ListTestConfigurationsRequest&, const Model::ListTestConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTestConfigurationsResponseReceivedHandler;
    typedef std::function<void(const AppTestClient*, const Model::ListTestRunStepsRequest&, const Model::ListTestRunStepsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTestRunStepsResponseReceivedHandler;
    typedef std::function<void(const AppTestClient*, const Model::ListTestRunTestCasesRequest&, const Model::ListTestRunTestCasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTestRunTestCasesResponseReceivedHandler;
    typedef std::function<void(const AppTestClient*, const Model::ListTestRunsRequest&, const Model::ListTestRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTestRunsResponseReceivedHandler;
    typedef std::function<void(const AppTestClient*, const Model::ListTestSuitesRequest&, const Model::ListTestSuitesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTestSuitesResponseReceivedHandler;
    typedef std::function<void(const AppTestClient*, const Model::StartTestRunRequest&, const Model::StartTestRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTestRunResponseReceivedHandler;
    typedef std::function<void(const AppTestClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AppTestClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AppTestClient*, const Model::UpdateTestCaseRequest&, const Model::UpdateTestCaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTestCaseResponseReceivedHandler;
    typedef std::function<void(const AppTestClient*, const Model::UpdateTestConfigurationRequest&, const Model::UpdateTestConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTestConfigurationResponseReceivedHandler;
    typedef std::function<void(const AppTestClient*, const Model::UpdateTestSuiteRequest&, const Model::UpdateTestSuiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTestSuiteResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace AppTest
} // namespace Aws
