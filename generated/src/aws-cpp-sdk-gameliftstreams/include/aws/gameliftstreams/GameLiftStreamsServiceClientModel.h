/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/gameliftstreams/GameLiftStreamsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/gameliftstreams/GameLiftStreamsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in GameLiftStreamsClient header */
#include <aws/gameliftstreams/model/AddStreamGroupLocationsResult.h>
#include <aws/gameliftstreams/model/AssociateApplicationsResult.h>
#include <aws/gameliftstreams/model/CreateApplicationResult.h>
#include <aws/gameliftstreams/model/CreateStreamGroupResult.h>
#include <aws/gameliftstreams/model/CreateStreamSessionConnectionResult.h>
#include <aws/gameliftstreams/model/DisassociateApplicationsResult.h>
#include <aws/gameliftstreams/model/ExportStreamSessionFilesResult.h>
#include <aws/gameliftstreams/model/GetApplicationResult.h>
#include <aws/gameliftstreams/model/GetStreamGroupResult.h>
#include <aws/gameliftstreams/model/GetStreamSessionResult.h>
#include <aws/gameliftstreams/model/ListApplicationsResult.h>
#include <aws/gameliftstreams/model/ListStreamGroupsResult.h>
#include <aws/gameliftstreams/model/ListStreamSessionsResult.h>
#include <aws/gameliftstreams/model/ListStreamSessionsByAccountResult.h>
#include <aws/gameliftstreams/model/ListTagsForResourceResult.h>
#include <aws/gameliftstreams/model/StartStreamSessionResult.h>
#include <aws/gameliftstreams/model/TagResourceResult.h>
#include <aws/gameliftstreams/model/UntagResourceResult.h>
#include <aws/gameliftstreams/model/UpdateApplicationResult.h>
#include <aws/gameliftstreams/model/UpdateStreamGroupResult.h>
#include <aws/gameliftstreams/model/ListStreamGroupsRequest.h>
#include <aws/gameliftstreams/model/ListApplicationsRequest.h>
#include <aws/gameliftstreams/model/ListStreamSessionsByAccountRequest.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in GameLiftStreamsClient header */

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

  namespace GameLiftStreams
  {
    using GameLiftStreamsClientConfiguration = Aws::Client::GenericClientConfiguration;
    using GameLiftStreamsEndpointProviderBase = Aws::GameLiftStreams::Endpoint::GameLiftStreamsEndpointProviderBase;
    using GameLiftStreamsEndpointProvider = Aws::GameLiftStreams::Endpoint::GameLiftStreamsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in GameLiftStreamsClient header */
      class AddStreamGroupLocationsRequest;
      class AssociateApplicationsRequest;
      class CreateApplicationRequest;
      class CreateStreamGroupRequest;
      class CreateStreamSessionConnectionRequest;
      class DeleteApplicationRequest;
      class DeleteStreamGroupRequest;
      class DisassociateApplicationsRequest;
      class ExportStreamSessionFilesRequest;
      class GetApplicationRequest;
      class GetStreamGroupRequest;
      class GetStreamSessionRequest;
      class ListApplicationsRequest;
      class ListStreamGroupsRequest;
      class ListStreamSessionsRequest;
      class ListStreamSessionsByAccountRequest;
      class ListTagsForResourceRequest;
      class RemoveStreamGroupLocationsRequest;
      class StartStreamSessionRequest;
      class TagResourceRequest;
      class TerminateStreamSessionRequest;
      class UntagResourceRequest;
      class UpdateApplicationRequest;
      class UpdateStreamGroupRequest;
      /* End of service model forward declarations required in GameLiftStreamsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddStreamGroupLocationsResult, GameLiftStreamsError> AddStreamGroupLocationsOutcome;
      typedef Aws::Utils::Outcome<AssociateApplicationsResult, GameLiftStreamsError> AssociateApplicationsOutcome;
      typedef Aws::Utils::Outcome<CreateApplicationResult, GameLiftStreamsError> CreateApplicationOutcome;
      typedef Aws::Utils::Outcome<CreateStreamGroupResult, GameLiftStreamsError> CreateStreamGroupOutcome;
      typedef Aws::Utils::Outcome<CreateStreamSessionConnectionResult, GameLiftStreamsError> CreateStreamSessionConnectionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GameLiftStreamsError> DeleteApplicationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GameLiftStreamsError> DeleteStreamGroupOutcome;
      typedef Aws::Utils::Outcome<DisassociateApplicationsResult, GameLiftStreamsError> DisassociateApplicationsOutcome;
      typedef Aws::Utils::Outcome<ExportStreamSessionFilesResult, GameLiftStreamsError> ExportStreamSessionFilesOutcome;
      typedef Aws::Utils::Outcome<GetApplicationResult, GameLiftStreamsError> GetApplicationOutcome;
      typedef Aws::Utils::Outcome<GetStreamGroupResult, GameLiftStreamsError> GetStreamGroupOutcome;
      typedef Aws::Utils::Outcome<GetStreamSessionResult, GameLiftStreamsError> GetStreamSessionOutcome;
      typedef Aws::Utils::Outcome<ListApplicationsResult, GameLiftStreamsError> ListApplicationsOutcome;
      typedef Aws::Utils::Outcome<ListStreamGroupsResult, GameLiftStreamsError> ListStreamGroupsOutcome;
      typedef Aws::Utils::Outcome<ListStreamSessionsResult, GameLiftStreamsError> ListStreamSessionsOutcome;
      typedef Aws::Utils::Outcome<ListStreamSessionsByAccountResult, GameLiftStreamsError> ListStreamSessionsByAccountOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, GameLiftStreamsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GameLiftStreamsError> RemoveStreamGroupLocationsOutcome;
      typedef Aws::Utils::Outcome<StartStreamSessionResult, GameLiftStreamsError> StartStreamSessionOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, GameLiftStreamsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GameLiftStreamsError> TerminateStreamSessionOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, GameLiftStreamsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateApplicationResult, GameLiftStreamsError> UpdateApplicationOutcome;
      typedef Aws::Utils::Outcome<UpdateStreamGroupResult, GameLiftStreamsError> UpdateStreamGroupOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddStreamGroupLocationsOutcome> AddStreamGroupLocationsOutcomeCallable;
      typedef std::future<AssociateApplicationsOutcome> AssociateApplicationsOutcomeCallable;
      typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
      typedef std::future<CreateStreamGroupOutcome> CreateStreamGroupOutcomeCallable;
      typedef std::future<CreateStreamSessionConnectionOutcome> CreateStreamSessionConnectionOutcomeCallable;
      typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
      typedef std::future<DeleteStreamGroupOutcome> DeleteStreamGroupOutcomeCallable;
      typedef std::future<DisassociateApplicationsOutcome> DisassociateApplicationsOutcomeCallable;
      typedef std::future<ExportStreamSessionFilesOutcome> ExportStreamSessionFilesOutcomeCallable;
      typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
      typedef std::future<GetStreamGroupOutcome> GetStreamGroupOutcomeCallable;
      typedef std::future<GetStreamSessionOutcome> GetStreamSessionOutcomeCallable;
      typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
      typedef std::future<ListStreamGroupsOutcome> ListStreamGroupsOutcomeCallable;
      typedef std::future<ListStreamSessionsOutcome> ListStreamSessionsOutcomeCallable;
      typedef std::future<ListStreamSessionsByAccountOutcome> ListStreamSessionsByAccountOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<RemoveStreamGroupLocationsOutcome> RemoveStreamGroupLocationsOutcomeCallable;
      typedef std::future<StartStreamSessionOutcome> StartStreamSessionOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TerminateStreamSessionOutcome> TerminateStreamSessionOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
      typedef std::future<UpdateStreamGroupOutcome> UpdateStreamGroupOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class GameLiftStreamsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const GameLiftStreamsClient*, const Model::AddStreamGroupLocationsRequest&, const Model::AddStreamGroupLocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddStreamGroupLocationsResponseReceivedHandler;
    typedef std::function<void(const GameLiftStreamsClient*, const Model::AssociateApplicationsRequest&, const Model::AssociateApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateApplicationsResponseReceivedHandler;
    typedef std::function<void(const GameLiftStreamsClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const GameLiftStreamsClient*, const Model::CreateStreamGroupRequest&, const Model::CreateStreamGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamGroupResponseReceivedHandler;
    typedef std::function<void(const GameLiftStreamsClient*, const Model::CreateStreamSessionConnectionRequest&, const Model::CreateStreamSessionConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamSessionConnectionResponseReceivedHandler;
    typedef std::function<void(const GameLiftStreamsClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const GameLiftStreamsClient*, const Model::DeleteStreamGroupRequest&, const Model::DeleteStreamGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStreamGroupResponseReceivedHandler;
    typedef std::function<void(const GameLiftStreamsClient*, const Model::DisassociateApplicationsRequest&, const Model::DisassociateApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateApplicationsResponseReceivedHandler;
    typedef std::function<void(const GameLiftStreamsClient*, const Model::ExportStreamSessionFilesRequest&, const Model::ExportStreamSessionFilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportStreamSessionFilesResponseReceivedHandler;
    typedef std::function<void(const GameLiftStreamsClient*, const Model::GetApplicationRequest&, const Model::GetApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationResponseReceivedHandler;
    typedef std::function<void(const GameLiftStreamsClient*, const Model::GetStreamGroupRequest&, const Model::GetStreamGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamGroupResponseReceivedHandler;
    typedef std::function<void(const GameLiftStreamsClient*, const Model::GetStreamSessionRequest&, const Model::GetStreamSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamSessionResponseReceivedHandler;
    typedef std::function<void(const GameLiftStreamsClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const GameLiftStreamsClient*, const Model::ListStreamGroupsRequest&, const Model::ListStreamGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamGroupsResponseReceivedHandler;
    typedef std::function<void(const GameLiftStreamsClient*, const Model::ListStreamSessionsRequest&, const Model::ListStreamSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamSessionsResponseReceivedHandler;
    typedef std::function<void(const GameLiftStreamsClient*, const Model::ListStreamSessionsByAccountRequest&, const Model::ListStreamSessionsByAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamSessionsByAccountResponseReceivedHandler;
    typedef std::function<void(const GameLiftStreamsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const GameLiftStreamsClient*, const Model::RemoveStreamGroupLocationsRequest&, const Model::RemoveStreamGroupLocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveStreamGroupLocationsResponseReceivedHandler;
    typedef std::function<void(const GameLiftStreamsClient*, const Model::StartStreamSessionRequest&, const Model::StartStreamSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartStreamSessionResponseReceivedHandler;
    typedef std::function<void(const GameLiftStreamsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const GameLiftStreamsClient*, const Model::TerminateStreamSessionRequest&, const Model::TerminateStreamSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateStreamSessionResponseReceivedHandler;
    typedef std::function<void(const GameLiftStreamsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const GameLiftStreamsClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    typedef std::function<void(const GameLiftStreamsClient*, const Model::UpdateStreamGroupRequest&, const Model::UpdateStreamGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStreamGroupResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace GameLiftStreams
} // namespace Aws
