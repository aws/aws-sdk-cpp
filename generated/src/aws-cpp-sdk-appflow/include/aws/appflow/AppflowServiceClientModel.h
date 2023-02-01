/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/appflow/AppflowErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/appflow/AppflowEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AppflowClient header */
#include <aws/appflow/model/CreateConnectorProfileResult.h>
#include <aws/appflow/model/CreateFlowResult.h>
#include <aws/appflow/model/DeleteConnectorProfileResult.h>
#include <aws/appflow/model/DeleteFlowResult.h>
#include <aws/appflow/model/DescribeConnectorResult.h>
#include <aws/appflow/model/DescribeConnectorEntityResult.h>
#include <aws/appflow/model/DescribeConnectorProfilesResult.h>
#include <aws/appflow/model/DescribeConnectorsResult.h>
#include <aws/appflow/model/DescribeFlowResult.h>
#include <aws/appflow/model/DescribeFlowExecutionRecordsResult.h>
#include <aws/appflow/model/ListConnectorEntitiesResult.h>
#include <aws/appflow/model/ListConnectorsResult.h>
#include <aws/appflow/model/ListFlowsResult.h>
#include <aws/appflow/model/ListTagsForResourceResult.h>
#include <aws/appflow/model/RegisterConnectorResult.h>
#include <aws/appflow/model/StartFlowResult.h>
#include <aws/appflow/model/StopFlowResult.h>
#include <aws/appflow/model/TagResourceResult.h>
#include <aws/appflow/model/UnregisterConnectorResult.h>
#include <aws/appflow/model/UntagResourceResult.h>
#include <aws/appflow/model/UpdateConnectorProfileResult.h>
#include <aws/appflow/model/UpdateConnectorRegistrationResult.h>
#include <aws/appflow/model/UpdateFlowResult.h>
/* End of service model headers required in AppflowClient header */

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

  namespace Appflow
  {
    using AppflowClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using AppflowEndpointProviderBase = Aws::Appflow::Endpoint::AppflowEndpointProviderBase;
    using AppflowEndpointProvider = Aws::Appflow::Endpoint::AppflowEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AppflowClient header */
      class CreateConnectorProfileRequest;
      class CreateFlowRequest;
      class DeleteConnectorProfileRequest;
      class DeleteFlowRequest;
      class DescribeConnectorRequest;
      class DescribeConnectorEntityRequest;
      class DescribeConnectorProfilesRequest;
      class DescribeConnectorsRequest;
      class DescribeFlowRequest;
      class DescribeFlowExecutionRecordsRequest;
      class ListConnectorEntitiesRequest;
      class ListConnectorsRequest;
      class ListFlowsRequest;
      class ListTagsForResourceRequest;
      class RegisterConnectorRequest;
      class StartFlowRequest;
      class StopFlowRequest;
      class TagResourceRequest;
      class UnregisterConnectorRequest;
      class UntagResourceRequest;
      class UpdateConnectorProfileRequest;
      class UpdateConnectorRegistrationRequest;
      class UpdateFlowRequest;
      /* End of service model forward declarations required in AppflowClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateConnectorProfileResult, AppflowError> CreateConnectorProfileOutcome;
      typedef Aws::Utils::Outcome<CreateFlowResult, AppflowError> CreateFlowOutcome;
      typedef Aws::Utils::Outcome<DeleteConnectorProfileResult, AppflowError> DeleteConnectorProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteFlowResult, AppflowError> DeleteFlowOutcome;
      typedef Aws::Utils::Outcome<DescribeConnectorResult, AppflowError> DescribeConnectorOutcome;
      typedef Aws::Utils::Outcome<DescribeConnectorEntityResult, AppflowError> DescribeConnectorEntityOutcome;
      typedef Aws::Utils::Outcome<DescribeConnectorProfilesResult, AppflowError> DescribeConnectorProfilesOutcome;
      typedef Aws::Utils::Outcome<DescribeConnectorsResult, AppflowError> DescribeConnectorsOutcome;
      typedef Aws::Utils::Outcome<DescribeFlowResult, AppflowError> DescribeFlowOutcome;
      typedef Aws::Utils::Outcome<DescribeFlowExecutionRecordsResult, AppflowError> DescribeFlowExecutionRecordsOutcome;
      typedef Aws::Utils::Outcome<ListConnectorEntitiesResult, AppflowError> ListConnectorEntitiesOutcome;
      typedef Aws::Utils::Outcome<ListConnectorsResult, AppflowError> ListConnectorsOutcome;
      typedef Aws::Utils::Outcome<ListFlowsResult, AppflowError> ListFlowsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, AppflowError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<RegisterConnectorResult, AppflowError> RegisterConnectorOutcome;
      typedef Aws::Utils::Outcome<StartFlowResult, AppflowError> StartFlowOutcome;
      typedef Aws::Utils::Outcome<StopFlowResult, AppflowError> StopFlowOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, AppflowError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UnregisterConnectorResult, AppflowError> UnregisterConnectorOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, AppflowError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateConnectorProfileResult, AppflowError> UpdateConnectorProfileOutcome;
      typedef Aws::Utils::Outcome<UpdateConnectorRegistrationResult, AppflowError> UpdateConnectorRegistrationOutcome;
      typedef Aws::Utils::Outcome<UpdateFlowResult, AppflowError> UpdateFlowOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateConnectorProfileOutcome> CreateConnectorProfileOutcomeCallable;
      typedef std::future<CreateFlowOutcome> CreateFlowOutcomeCallable;
      typedef std::future<DeleteConnectorProfileOutcome> DeleteConnectorProfileOutcomeCallable;
      typedef std::future<DeleteFlowOutcome> DeleteFlowOutcomeCallable;
      typedef std::future<DescribeConnectorOutcome> DescribeConnectorOutcomeCallable;
      typedef std::future<DescribeConnectorEntityOutcome> DescribeConnectorEntityOutcomeCallable;
      typedef std::future<DescribeConnectorProfilesOutcome> DescribeConnectorProfilesOutcomeCallable;
      typedef std::future<DescribeConnectorsOutcome> DescribeConnectorsOutcomeCallable;
      typedef std::future<DescribeFlowOutcome> DescribeFlowOutcomeCallable;
      typedef std::future<DescribeFlowExecutionRecordsOutcome> DescribeFlowExecutionRecordsOutcomeCallable;
      typedef std::future<ListConnectorEntitiesOutcome> ListConnectorEntitiesOutcomeCallable;
      typedef std::future<ListConnectorsOutcome> ListConnectorsOutcomeCallable;
      typedef std::future<ListFlowsOutcome> ListFlowsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<RegisterConnectorOutcome> RegisterConnectorOutcomeCallable;
      typedef std::future<StartFlowOutcome> StartFlowOutcomeCallable;
      typedef std::future<StopFlowOutcome> StopFlowOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UnregisterConnectorOutcome> UnregisterConnectorOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateConnectorProfileOutcome> UpdateConnectorProfileOutcomeCallable;
      typedef std::future<UpdateConnectorRegistrationOutcome> UpdateConnectorRegistrationOutcomeCallable;
      typedef std::future<UpdateFlowOutcome> UpdateFlowOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AppflowClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AppflowClient*, const Model::CreateConnectorProfileRequest&, const Model::CreateConnectorProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectorProfileResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::CreateFlowRequest&, const Model::CreateFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFlowResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::DeleteConnectorProfileRequest&, const Model::DeleteConnectorProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectorProfileResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::DeleteFlowRequest&, const Model::DeleteFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFlowResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::DescribeConnectorRequest&, const Model::DescribeConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectorResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::DescribeConnectorEntityRequest&, const Model::DescribeConnectorEntityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectorEntityResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::DescribeConnectorProfilesRequest&, const Model::DescribeConnectorProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectorProfilesResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::DescribeConnectorsRequest&, const Model::DescribeConnectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectorsResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::DescribeFlowRequest&, const Model::DescribeFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFlowResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::DescribeFlowExecutionRecordsRequest&, const Model::DescribeFlowExecutionRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFlowExecutionRecordsResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::ListConnectorEntitiesRequest&, const Model::ListConnectorEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConnectorEntitiesResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::ListConnectorsRequest&, const Model::ListConnectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConnectorsResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::ListFlowsRequest&, const Model::ListFlowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFlowsResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::RegisterConnectorRequest&, const Model::RegisterConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterConnectorResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::StartFlowRequest&, const Model::StartFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFlowResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::StopFlowRequest&, const Model::StopFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopFlowResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::UnregisterConnectorRequest&, const Model::UnregisterConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnregisterConnectorResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::UpdateConnectorProfileRequest&, const Model::UpdateConnectorProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConnectorProfileResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::UpdateConnectorRegistrationRequest&, const Model::UpdateConnectorRegistrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConnectorRegistrationResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::UpdateFlowRequest&, const Model::UpdateFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFlowResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Appflow
} // namespace Aws
