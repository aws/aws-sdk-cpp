/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotdeviceadvisor/model/CreateSuiteDefinitionResult.h>
#include <aws/iotdeviceadvisor/model/DeleteSuiteDefinitionResult.h>
#include <aws/iotdeviceadvisor/model/GetSuiteDefinitionResult.h>
#include <aws/iotdeviceadvisor/model/GetSuiteRunResult.h>
#include <aws/iotdeviceadvisor/model/GetSuiteRunReportResult.h>
#include <aws/iotdeviceadvisor/model/ListSuiteDefinitionsResult.h>
#include <aws/iotdeviceadvisor/model/ListSuiteRunsResult.h>
#include <aws/iotdeviceadvisor/model/ListTagsForResourceResult.h>
#include <aws/iotdeviceadvisor/model/ListTestCasesResult.h>
#include <aws/iotdeviceadvisor/model/StartSuiteRunResult.h>
#include <aws/iotdeviceadvisor/model/TagResourceResult.h>
#include <aws/iotdeviceadvisor/model/UntagResourceResult.h>
#include <aws/iotdeviceadvisor/model/UpdateSuiteDefinitionResult.h>
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

namespace IoTDeviceAdvisor
{

namespace Model
{
        class CreateSuiteDefinitionRequest;
        class DeleteSuiteDefinitionRequest;
        class GetSuiteDefinitionRequest;
        class GetSuiteRunRequest;
        class GetSuiteRunReportRequest;
        class ListSuiteDefinitionsRequest;
        class ListSuiteRunsRequest;
        class ListTagsForResourceRequest;
        class ListTestCasesRequest;
        class StartSuiteRunRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateSuiteDefinitionRequest;

        typedef Aws::Utils::Outcome<CreateSuiteDefinitionResult, IoTDeviceAdvisorError> CreateSuiteDefinitionOutcome;
        typedef Aws::Utils::Outcome<DeleteSuiteDefinitionResult, IoTDeviceAdvisorError> DeleteSuiteDefinitionOutcome;
        typedef Aws::Utils::Outcome<GetSuiteDefinitionResult, IoTDeviceAdvisorError> GetSuiteDefinitionOutcome;
        typedef Aws::Utils::Outcome<GetSuiteRunResult, IoTDeviceAdvisorError> GetSuiteRunOutcome;
        typedef Aws::Utils::Outcome<GetSuiteRunReportResult, IoTDeviceAdvisorError> GetSuiteRunReportOutcome;
        typedef Aws::Utils::Outcome<ListSuiteDefinitionsResult, IoTDeviceAdvisorError> ListSuiteDefinitionsOutcome;
        typedef Aws::Utils::Outcome<ListSuiteRunsResult, IoTDeviceAdvisorError> ListSuiteRunsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, IoTDeviceAdvisorError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTestCasesResult, IoTDeviceAdvisorError> ListTestCasesOutcome;
        typedef Aws::Utils::Outcome<StartSuiteRunResult, IoTDeviceAdvisorError> StartSuiteRunOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, IoTDeviceAdvisorError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, IoTDeviceAdvisorError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateSuiteDefinitionResult, IoTDeviceAdvisorError> UpdateSuiteDefinitionOutcome;

        typedef std::future<CreateSuiteDefinitionOutcome> CreateSuiteDefinitionOutcomeCallable;
        typedef std::future<DeleteSuiteDefinitionOutcome> DeleteSuiteDefinitionOutcomeCallable;
        typedef std::future<GetSuiteDefinitionOutcome> GetSuiteDefinitionOutcomeCallable;
        typedef std::future<GetSuiteRunOutcome> GetSuiteRunOutcomeCallable;
        typedef std::future<GetSuiteRunReportOutcome> GetSuiteRunReportOutcomeCallable;
        typedef std::future<ListSuiteDefinitionsOutcome> ListSuiteDefinitionsOutcomeCallable;
        typedef std::future<ListSuiteRunsOutcome> ListSuiteRunsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListTestCasesOutcome> ListTestCasesOutcomeCallable;
        typedef std::future<StartSuiteRunOutcome> StartSuiteRunOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateSuiteDefinitionOutcome> UpdateSuiteDefinitionOutcomeCallable;
} // namespace Model

  class IoTDeviceAdvisorClient;

    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::CreateSuiteDefinitionRequest&, const Model::CreateSuiteDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSuiteDefinitionResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::DeleteSuiteDefinitionRequest&, const Model::DeleteSuiteDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSuiteDefinitionResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::GetSuiteDefinitionRequest&, const Model::GetSuiteDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSuiteDefinitionResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::GetSuiteRunRequest&, const Model::GetSuiteRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSuiteRunResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::GetSuiteRunReportRequest&, const Model::GetSuiteRunReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSuiteRunReportResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::ListSuiteDefinitionsRequest&, const Model::ListSuiteDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSuiteDefinitionsResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::ListSuiteRunsRequest&, const Model::ListSuiteRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSuiteRunsResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::ListTestCasesRequest&, const Model::ListTestCasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTestCasesResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::StartSuiteRunRequest&, const Model::StartSuiteRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSuiteRunResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::UpdateSuiteDefinitionRequest&, const Model::UpdateSuiteDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSuiteDefinitionResponseReceivedHandler;

  /**
   * <p>AWS IoT Core Device Advisor is a cloud-based, fully managed test capability
   * for validating IoT devices during device software development. Device Advisor
   * provides pre-built tests that you can use to validate IoT devices for reliable
   * and secure connectivity with AWS IoT Core before deploying devices to
   * production. By using Device Advisor, you can confirm that your devices can
   * connect to AWS IoT Core, follow security best practices and, if applicable,
   * receive software updates from IoT Device Management. You can also download
   * signed qualification reports to submit to the AWS Partner Network to get your
   * device qualified for the AWS Partner Device Catalog without the need to send
   * your device in and wait for it to be tested.</p>
   */
  class AWS_IOTDEVICEADVISOR_API IoTDeviceAdvisorClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTDeviceAdvisorClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTDeviceAdvisorClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTDeviceAdvisorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~IoTDeviceAdvisorClient();


        /**
         * <p>Creates a Device Advisor test suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/CreateSuiteDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSuiteDefinitionOutcome CreateSuiteDefinition(const Model::CreateSuiteDefinitionRequest& request) const;

        /**
         * <p>Creates a Device Advisor test suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/CreateSuiteDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSuiteDefinitionOutcomeCallable CreateSuiteDefinitionCallable(const Model::CreateSuiteDefinitionRequest& request) const;

        /**
         * <p>Creates a Device Advisor test suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/CreateSuiteDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSuiteDefinitionAsync(const Model::CreateSuiteDefinitionRequest& request, const CreateSuiteDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Device Advisor test suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/DeleteSuiteDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSuiteDefinitionOutcome DeleteSuiteDefinition(const Model::DeleteSuiteDefinitionRequest& request) const;

        /**
         * <p>Deletes a Device Advisor test suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/DeleteSuiteDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSuiteDefinitionOutcomeCallable DeleteSuiteDefinitionCallable(const Model::DeleteSuiteDefinitionRequest& request) const;

        /**
         * <p>Deletes a Device Advisor test suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/DeleteSuiteDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSuiteDefinitionAsync(const Model::DeleteSuiteDefinitionRequest& request, const DeleteSuiteDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a Device Advisor test suite.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/GetSuiteDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSuiteDefinitionOutcome GetSuiteDefinition(const Model::GetSuiteDefinitionRequest& request) const;

        /**
         * <p>Gets information about a Device Advisor test suite.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/GetSuiteDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSuiteDefinitionOutcomeCallable GetSuiteDefinitionCallable(const Model::GetSuiteDefinitionRequest& request) const;

        /**
         * <p>Gets information about a Device Advisor test suite.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/GetSuiteDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSuiteDefinitionAsync(const Model::GetSuiteDefinitionRequest& request, const GetSuiteDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a Device Advisor test suite run.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/GetSuiteRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSuiteRunOutcome GetSuiteRun(const Model::GetSuiteRunRequest& request) const;

        /**
         * <p>Gets information about a Device Advisor test suite run.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/GetSuiteRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSuiteRunOutcomeCallable GetSuiteRunCallable(const Model::GetSuiteRunRequest& request) const;

        /**
         * <p>Gets information about a Device Advisor test suite run.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/GetSuiteRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSuiteRunAsync(const Model::GetSuiteRunRequest& request, const GetSuiteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a report download link for a successful Device Advisor qualifying test
         * suite run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/GetSuiteRunReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSuiteRunReportOutcome GetSuiteRunReport(const Model::GetSuiteRunReportRequest& request) const;

        /**
         * <p>Gets a report download link for a successful Device Advisor qualifying test
         * suite run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/GetSuiteRunReport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSuiteRunReportOutcomeCallable GetSuiteRunReportCallable(const Model::GetSuiteRunReportRequest& request) const;

        /**
         * <p>Gets a report download link for a successful Device Advisor qualifying test
         * suite run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/GetSuiteRunReport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSuiteRunReportAsync(const Model::GetSuiteRunReportRequest& request, const GetSuiteRunReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Device Advisor test suites you have created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/ListSuiteDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSuiteDefinitionsOutcome ListSuiteDefinitions(const Model::ListSuiteDefinitionsRequest& request) const;

        /**
         * <p>Lists the Device Advisor test suites you have created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/ListSuiteDefinitions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSuiteDefinitionsOutcomeCallable ListSuiteDefinitionsCallable(const Model::ListSuiteDefinitionsRequest& request) const;

        /**
         * <p>Lists the Device Advisor test suites you have created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/ListSuiteDefinitions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSuiteDefinitionsAsync(const Model::ListSuiteDefinitionsRequest& request, const ListSuiteDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the runs of the specified Device Advisor test suite. You can list all
         * runs of the test suite, or the runs of a specific version of the test
         * suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/ListSuiteRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSuiteRunsOutcome ListSuiteRuns(const Model::ListSuiteRunsRequest& request) const;

        /**
         * <p>Lists the runs of the specified Device Advisor test suite. You can list all
         * runs of the test suite, or the runs of a specific version of the test
         * suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/ListSuiteRuns">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSuiteRunsOutcomeCallable ListSuiteRunsCallable(const Model::ListSuiteRunsRequest& request) const;

        /**
         * <p>Lists the runs of the specified Device Advisor test suite. You can list all
         * runs of the test suite, or the runs of a specific version of the test
         * suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/ListSuiteRuns">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSuiteRunsAsync(const Model::ListSuiteRunsRequest& request, const ListSuiteRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags attached to an IoT Device Advisor resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags attached to an IoT Device Advisor resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags attached to an IoT Device Advisor resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the test cases in the test suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/ListTestCases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestCasesOutcome ListTestCases(const Model::ListTestCasesRequest& request) const;

        /**
         * <p>Lists all the test cases in the test suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/ListTestCases">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTestCasesOutcomeCallable ListTestCasesCallable(const Model::ListTestCasesRequest& request) const;

        /**
         * <p>Lists all the test cases in the test suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/ListTestCases">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTestCasesAsync(const Model::ListTestCasesRequest& request, const ListTestCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a Device Advisor test suite run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/StartSuiteRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSuiteRunOutcome StartSuiteRun(const Model::StartSuiteRunRequest& request) const;

        /**
         * <p>Starts a Device Advisor test suite run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/StartSuiteRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartSuiteRunOutcomeCallable StartSuiteRunCallable(const Model::StartSuiteRunRequest& request) const;

        /**
         * <p>Starts a Device Advisor test suite run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/StartSuiteRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartSuiteRunAsync(const Model::StartSuiteRunRequest& request, const StartSuiteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds to and modifies existing tags of an IoT Device Advisor
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds to and modifies existing tags of an IoT Device Advisor
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds to and modifies existing tags of an IoT Device Advisor
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from an IoT Device Advisor resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from an IoT Device Advisor resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from an IoT Device Advisor resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a Device Advisor test suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/UpdateSuiteDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSuiteDefinitionOutcome UpdateSuiteDefinition(const Model::UpdateSuiteDefinitionRequest& request) const;

        /**
         * <p>Updates a Device Advisor test suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/UpdateSuiteDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSuiteDefinitionOutcomeCallable UpdateSuiteDefinitionCallable(const Model::UpdateSuiteDefinitionRequest& request) const;

        /**
         * <p>Updates a Device Advisor test suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/UpdateSuiteDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSuiteDefinitionAsync(const Model::UpdateSuiteDefinitionRequest& request, const UpdateSuiteDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateSuiteDefinitionAsyncHelper(const Model::CreateSuiteDefinitionRequest& request, const CreateSuiteDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSuiteDefinitionAsyncHelper(const Model::DeleteSuiteDefinitionRequest& request, const DeleteSuiteDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSuiteDefinitionAsyncHelper(const Model::GetSuiteDefinitionRequest& request, const GetSuiteDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSuiteRunAsyncHelper(const Model::GetSuiteRunRequest& request, const GetSuiteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSuiteRunReportAsyncHelper(const Model::GetSuiteRunReportRequest& request, const GetSuiteRunReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSuiteDefinitionsAsyncHelper(const Model::ListSuiteDefinitionsRequest& request, const ListSuiteDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSuiteRunsAsyncHelper(const Model::ListSuiteRunsRequest& request, const ListSuiteRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTestCasesAsyncHelper(const Model::ListTestCasesRequest& request, const ListTestCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartSuiteRunAsyncHelper(const Model::StartSuiteRunRequest& request, const StartSuiteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSuiteDefinitionAsyncHelper(const Model::UpdateSuiteDefinitionRequest& request, const UpdateSuiteDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace IoTDeviceAdvisor
} // namespace Aws
