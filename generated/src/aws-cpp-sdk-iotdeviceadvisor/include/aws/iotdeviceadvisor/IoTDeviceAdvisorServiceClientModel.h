/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in IoTDeviceAdvisorClient header */
#include <aws/iotdeviceadvisor/model/CreateSuiteDefinitionResult.h>
#include <aws/iotdeviceadvisor/model/DeleteSuiteDefinitionResult.h>
#include <aws/iotdeviceadvisor/model/GetEndpointResult.h>
#include <aws/iotdeviceadvisor/model/GetSuiteDefinitionResult.h>
#include <aws/iotdeviceadvisor/model/GetSuiteRunResult.h>
#include <aws/iotdeviceadvisor/model/GetSuiteRunReportResult.h>
#include <aws/iotdeviceadvisor/model/ListSuiteDefinitionsResult.h>
#include <aws/iotdeviceadvisor/model/ListSuiteRunsResult.h>
#include <aws/iotdeviceadvisor/model/ListTagsForResourceResult.h>
#include <aws/iotdeviceadvisor/model/StartSuiteRunResult.h>
#include <aws/iotdeviceadvisor/model/StopSuiteRunResult.h>
#include <aws/iotdeviceadvisor/model/TagResourceResult.h>
#include <aws/iotdeviceadvisor/model/UntagResourceResult.h>
#include <aws/iotdeviceadvisor/model/UpdateSuiteDefinitionResult.h>
/* End of service model headers required in IoTDeviceAdvisorClient header */

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
    using IoTDeviceAdvisorClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using IoTDeviceAdvisorEndpointProviderBase = Aws::IoTDeviceAdvisor::Endpoint::IoTDeviceAdvisorEndpointProviderBase;
    using IoTDeviceAdvisorEndpointProvider = Aws::IoTDeviceAdvisor::Endpoint::IoTDeviceAdvisorEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in IoTDeviceAdvisorClient header */
      class CreateSuiteDefinitionRequest;
      class DeleteSuiteDefinitionRequest;
      class GetEndpointRequest;
      class GetSuiteDefinitionRequest;
      class GetSuiteRunRequest;
      class GetSuiteRunReportRequest;
      class ListSuiteDefinitionsRequest;
      class ListSuiteRunsRequest;
      class ListTagsForResourceRequest;
      class StartSuiteRunRequest;
      class StopSuiteRunRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateSuiteDefinitionRequest;
      /* End of service model forward declarations required in IoTDeviceAdvisorClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateSuiteDefinitionResult, IoTDeviceAdvisorError> CreateSuiteDefinitionOutcome;
      typedef Aws::Utils::Outcome<DeleteSuiteDefinitionResult, IoTDeviceAdvisorError> DeleteSuiteDefinitionOutcome;
      typedef Aws::Utils::Outcome<GetEndpointResult, IoTDeviceAdvisorError> GetEndpointOutcome;
      typedef Aws::Utils::Outcome<GetSuiteDefinitionResult, IoTDeviceAdvisorError> GetSuiteDefinitionOutcome;
      typedef Aws::Utils::Outcome<GetSuiteRunResult, IoTDeviceAdvisorError> GetSuiteRunOutcome;
      typedef Aws::Utils::Outcome<GetSuiteRunReportResult, IoTDeviceAdvisorError> GetSuiteRunReportOutcome;
      typedef Aws::Utils::Outcome<ListSuiteDefinitionsResult, IoTDeviceAdvisorError> ListSuiteDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListSuiteRunsResult, IoTDeviceAdvisorError> ListSuiteRunsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, IoTDeviceAdvisorError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartSuiteRunResult, IoTDeviceAdvisorError> StartSuiteRunOutcome;
      typedef Aws::Utils::Outcome<StopSuiteRunResult, IoTDeviceAdvisorError> StopSuiteRunOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, IoTDeviceAdvisorError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, IoTDeviceAdvisorError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateSuiteDefinitionResult, IoTDeviceAdvisorError> UpdateSuiteDefinitionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateSuiteDefinitionOutcome> CreateSuiteDefinitionOutcomeCallable;
      typedef std::future<DeleteSuiteDefinitionOutcome> DeleteSuiteDefinitionOutcomeCallable;
      typedef std::future<GetEndpointOutcome> GetEndpointOutcomeCallable;
      typedef std::future<GetSuiteDefinitionOutcome> GetSuiteDefinitionOutcomeCallable;
      typedef std::future<GetSuiteRunOutcome> GetSuiteRunOutcomeCallable;
      typedef std::future<GetSuiteRunReportOutcome> GetSuiteRunReportOutcomeCallable;
      typedef std::future<ListSuiteDefinitionsOutcome> ListSuiteDefinitionsOutcomeCallable;
      typedef std::future<ListSuiteRunsOutcome> ListSuiteRunsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartSuiteRunOutcome> StartSuiteRunOutcomeCallable;
      typedef std::future<StopSuiteRunOutcome> StopSuiteRunOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateSuiteDefinitionOutcome> UpdateSuiteDefinitionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class IoTDeviceAdvisorClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::CreateSuiteDefinitionRequest&, const Model::CreateSuiteDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSuiteDefinitionResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::DeleteSuiteDefinitionRequest&, const Model::DeleteSuiteDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSuiteDefinitionResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::GetEndpointRequest&, const Model::GetEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEndpointResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::GetSuiteDefinitionRequest&, const Model::GetSuiteDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSuiteDefinitionResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::GetSuiteRunRequest&, const Model::GetSuiteRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSuiteRunResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::GetSuiteRunReportRequest&, const Model::GetSuiteRunReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSuiteRunReportResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::ListSuiteDefinitionsRequest&, const Model::ListSuiteDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSuiteDefinitionsResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::ListSuiteRunsRequest&, const Model::ListSuiteRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSuiteRunsResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::StartSuiteRunRequest&, const Model::StartSuiteRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSuiteRunResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::StopSuiteRunRequest&, const Model::StopSuiteRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopSuiteRunResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTDeviceAdvisorClient*, const Model::UpdateSuiteDefinitionRequest&, const Model::UpdateSuiteDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSuiteDefinitionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace IoTDeviceAdvisor
} // namespace Aws
