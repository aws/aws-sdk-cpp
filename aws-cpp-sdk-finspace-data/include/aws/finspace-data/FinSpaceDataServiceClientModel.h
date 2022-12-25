/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/finspace-data/FinSpaceDataErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/finspace-data/FinSpaceDataEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in FinSpaceDataClient header */
#include <aws/finspace-data/model/AssociateUserToPermissionGroupResult.h>
#include <aws/finspace-data/model/CreateChangesetResult.h>
#include <aws/finspace-data/model/CreateDataViewResult.h>
#include <aws/finspace-data/model/CreateDatasetResult.h>
#include <aws/finspace-data/model/CreatePermissionGroupResult.h>
#include <aws/finspace-data/model/CreateUserResult.h>
#include <aws/finspace-data/model/DeleteDatasetResult.h>
#include <aws/finspace-data/model/DeletePermissionGroupResult.h>
#include <aws/finspace-data/model/DisableUserResult.h>
#include <aws/finspace-data/model/DisassociateUserFromPermissionGroupResult.h>
#include <aws/finspace-data/model/EnableUserResult.h>
#include <aws/finspace-data/model/GetChangesetResult.h>
#include <aws/finspace-data/model/GetDataViewResult.h>
#include <aws/finspace-data/model/GetDatasetResult.h>
#include <aws/finspace-data/model/GetExternalDataViewAccessDetailsResult.h>
#include <aws/finspace-data/model/GetPermissionGroupResult.h>
#include <aws/finspace-data/model/GetProgrammaticAccessCredentialsResult.h>
#include <aws/finspace-data/model/GetUserResult.h>
#include <aws/finspace-data/model/GetWorkingLocationResult.h>
#include <aws/finspace-data/model/ListChangesetsResult.h>
#include <aws/finspace-data/model/ListDataViewsResult.h>
#include <aws/finspace-data/model/ListDatasetsResult.h>
#include <aws/finspace-data/model/ListPermissionGroupsResult.h>
#include <aws/finspace-data/model/ListPermissionGroupsByUserResult.h>
#include <aws/finspace-data/model/ListUsersResult.h>
#include <aws/finspace-data/model/ListUsersByPermissionGroupResult.h>
#include <aws/finspace-data/model/ResetUserPasswordResult.h>
#include <aws/finspace-data/model/UpdateChangesetResult.h>
#include <aws/finspace-data/model/UpdateDatasetResult.h>
#include <aws/finspace-data/model/UpdatePermissionGroupResult.h>
#include <aws/finspace-data/model/UpdateUserResult.h>
/* End of service model headers required in FinSpaceDataClient header */

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

  namespace FinSpaceData
  {
    using FinSpaceDataClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using FinSpaceDataEndpointProviderBase = Aws::FinSpaceData::Endpoint::FinSpaceDataEndpointProviderBase;
    using FinSpaceDataEndpointProvider = Aws::FinSpaceData::Endpoint::FinSpaceDataEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in FinSpaceDataClient header */
      class AssociateUserToPermissionGroupRequest;
      class CreateChangesetRequest;
      class CreateDataViewRequest;
      class CreateDatasetRequest;
      class CreatePermissionGroupRequest;
      class CreateUserRequest;
      class DeleteDatasetRequest;
      class DeletePermissionGroupRequest;
      class DisableUserRequest;
      class DisassociateUserFromPermissionGroupRequest;
      class EnableUserRequest;
      class GetChangesetRequest;
      class GetDataViewRequest;
      class GetDatasetRequest;
      class GetExternalDataViewAccessDetailsRequest;
      class GetPermissionGroupRequest;
      class GetProgrammaticAccessCredentialsRequest;
      class GetUserRequest;
      class GetWorkingLocationRequest;
      class ListChangesetsRequest;
      class ListDataViewsRequest;
      class ListDatasetsRequest;
      class ListPermissionGroupsRequest;
      class ListPermissionGroupsByUserRequest;
      class ListUsersRequest;
      class ListUsersByPermissionGroupRequest;
      class ResetUserPasswordRequest;
      class UpdateChangesetRequest;
      class UpdateDatasetRequest;
      class UpdatePermissionGroupRequest;
      class UpdateUserRequest;
      /* End of service model forward declarations required in FinSpaceDataClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateUserToPermissionGroupResult, FinSpaceDataError> AssociateUserToPermissionGroupOutcome;
      typedef Aws::Utils::Outcome<CreateChangesetResult, FinSpaceDataError> CreateChangesetOutcome;
      typedef Aws::Utils::Outcome<CreateDataViewResult, FinSpaceDataError> CreateDataViewOutcome;
      typedef Aws::Utils::Outcome<CreateDatasetResult, FinSpaceDataError> CreateDatasetOutcome;
      typedef Aws::Utils::Outcome<CreatePermissionGroupResult, FinSpaceDataError> CreatePermissionGroupOutcome;
      typedef Aws::Utils::Outcome<CreateUserResult, FinSpaceDataError> CreateUserOutcome;
      typedef Aws::Utils::Outcome<DeleteDatasetResult, FinSpaceDataError> DeleteDatasetOutcome;
      typedef Aws::Utils::Outcome<DeletePermissionGroupResult, FinSpaceDataError> DeletePermissionGroupOutcome;
      typedef Aws::Utils::Outcome<DisableUserResult, FinSpaceDataError> DisableUserOutcome;
      typedef Aws::Utils::Outcome<DisassociateUserFromPermissionGroupResult, FinSpaceDataError> DisassociateUserFromPermissionGroupOutcome;
      typedef Aws::Utils::Outcome<EnableUserResult, FinSpaceDataError> EnableUserOutcome;
      typedef Aws::Utils::Outcome<GetChangesetResult, FinSpaceDataError> GetChangesetOutcome;
      typedef Aws::Utils::Outcome<GetDataViewResult, FinSpaceDataError> GetDataViewOutcome;
      typedef Aws::Utils::Outcome<GetDatasetResult, FinSpaceDataError> GetDatasetOutcome;
      typedef Aws::Utils::Outcome<GetExternalDataViewAccessDetailsResult, FinSpaceDataError> GetExternalDataViewAccessDetailsOutcome;
      typedef Aws::Utils::Outcome<GetPermissionGroupResult, FinSpaceDataError> GetPermissionGroupOutcome;
      typedef Aws::Utils::Outcome<GetProgrammaticAccessCredentialsResult, FinSpaceDataError> GetProgrammaticAccessCredentialsOutcome;
      typedef Aws::Utils::Outcome<GetUserResult, FinSpaceDataError> GetUserOutcome;
      typedef Aws::Utils::Outcome<GetWorkingLocationResult, FinSpaceDataError> GetWorkingLocationOutcome;
      typedef Aws::Utils::Outcome<ListChangesetsResult, FinSpaceDataError> ListChangesetsOutcome;
      typedef Aws::Utils::Outcome<ListDataViewsResult, FinSpaceDataError> ListDataViewsOutcome;
      typedef Aws::Utils::Outcome<ListDatasetsResult, FinSpaceDataError> ListDatasetsOutcome;
      typedef Aws::Utils::Outcome<ListPermissionGroupsResult, FinSpaceDataError> ListPermissionGroupsOutcome;
      typedef Aws::Utils::Outcome<ListPermissionGroupsByUserResult, FinSpaceDataError> ListPermissionGroupsByUserOutcome;
      typedef Aws::Utils::Outcome<ListUsersResult, FinSpaceDataError> ListUsersOutcome;
      typedef Aws::Utils::Outcome<ListUsersByPermissionGroupResult, FinSpaceDataError> ListUsersByPermissionGroupOutcome;
      typedef Aws::Utils::Outcome<ResetUserPasswordResult, FinSpaceDataError> ResetUserPasswordOutcome;
      typedef Aws::Utils::Outcome<UpdateChangesetResult, FinSpaceDataError> UpdateChangesetOutcome;
      typedef Aws::Utils::Outcome<UpdateDatasetResult, FinSpaceDataError> UpdateDatasetOutcome;
      typedef Aws::Utils::Outcome<UpdatePermissionGroupResult, FinSpaceDataError> UpdatePermissionGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateUserResult, FinSpaceDataError> UpdateUserOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateUserToPermissionGroupOutcome> AssociateUserToPermissionGroupOutcomeCallable;
      typedef std::future<CreateChangesetOutcome> CreateChangesetOutcomeCallable;
      typedef std::future<CreateDataViewOutcome> CreateDataViewOutcomeCallable;
      typedef std::future<CreateDatasetOutcome> CreateDatasetOutcomeCallable;
      typedef std::future<CreatePermissionGroupOutcome> CreatePermissionGroupOutcomeCallable;
      typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
      typedef std::future<DeleteDatasetOutcome> DeleteDatasetOutcomeCallable;
      typedef std::future<DeletePermissionGroupOutcome> DeletePermissionGroupOutcomeCallable;
      typedef std::future<DisableUserOutcome> DisableUserOutcomeCallable;
      typedef std::future<DisassociateUserFromPermissionGroupOutcome> DisassociateUserFromPermissionGroupOutcomeCallable;
      typedef std::future<EnableUserOutcome> EnableUserOutcomeCallable;
      typedef std::future<GetChangesetOutcome> GetChangesetOutcomeCallable;
      typedef std::future<GetDataViewOutcome> GetDataViewOutcomeCallable;
      typedef std::future<GetDatasetOutcome> GetDatasetOutcomeCallable;
      typedef std::future<GetExternalDataViewAccessDetailsOutcome> GetExternalDataViewAccessDetailsOutcomeCallable;
      typedef std::future<GetPermissionGroupOutcome> GetPermissionGroupOutcomeCallable;
      typedef std::future<GetProgrammaticAccessCredentialsOutcome> GetProgrammaticAccessCredentialsOutcomeCallable;
      typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
      typedef std::future<GetWorkingLocationOutcome> GetWorkingLocationOutcomeCallable;
      typedef std::future<ListChangesetsOutcome> ListChangesetsOutcomeCallable;
      typedef std::future<ListDataViewsOutcome> ListDataViewsOutcomeCallable;
      typedef std::future<ListDatasetsOutcome> ListDatasetsOutcomeCallable;
      typedef std::future<ListPermissionGroupsOutcome> ListPermissionGroupsOutcomeCallable;
      typedef std::future<ListPermissionGroupsByUserOutcome> ListPermissionGroupsByUserOutcomeCallable;
      typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
      typedef std::future<ListUsersByPermissionGroupOutcome> ListUsersByPermissionGroupOutcomeCallable;
      typedef std::future<ResetUserPasswordOutcome> ResetUserPasswordOutcomeCallable;
      typedef std::future<UpdateChangesetOutcome> UpdateChangesetOutcomeCallable;
      typedef std::future<UpdateDatasetOutcome> UpdateDatasetOutcomeCallable;
      typedef std::future<UpdatePermissionGroupOutcome> UpdatePermissionGroupOutcomeCallable;
      typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class FinSpaceDataClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const FinSpaceDataClient*, const Model::AssociateUserToPermissionGroupRequest&, const Model::AssociateUserToPermissionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateUserToPermissionGroupResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::CreateChangesetRequest&, const Model::CreateChangesetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChangesetResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::CreateDataViewRequest&, const Model::CreateDataViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataViewResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::CreateDatasetRequest&, const Model::CreateDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::CreatePermissionGroupRequest&, const Model::CreatePermissionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePermissionGroupResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::DeleteDatasetRequest&, const Model::DeleteDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::DeletePermissionGroupRequest&, const Model::DeletePermissionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePermissionGroupResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::DisableUserRequest&, const Model::DisableUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableUserResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::DisassociateUserFromPermissionGroupRequest&, const Model::DisassociateUserFromPermissionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateUserFromPermissionGroupResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::EnableUserRequest&, const Model::EnableUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableUserResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::GetChangesetRequest&, const Model::GetChangesetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChangesetResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::GetDataViewRequest&, const Model::GetDataViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataViewResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::GetDatasetRequest&, const Model::GetDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDatasetResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::GetExternalDataViewAccessDetailsRequest&, const Model::GetExternalDataViewAccessDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExternalDataViewAccessDetailsResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::GetPermissionGroupRequest&, const Model::GetPermissionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPermissionGroupResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::GetProgrammaticAccessCredentialsRequest&, const Model::GetProgrammaticAccessCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProgrammaticAccessCredentialsResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::GetUserRequest&, const Model::GetUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::GetWorkingLocationRequest&, const Model::GetWorkingLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkingLocationResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::ListChangesetsRequest&, const Model::ListChangesetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChangesetsResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::ListDataViewsRequest&, const Model::ListDataViewsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataViewsResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::ListDatasetsRequest&, const Model::ListDatasetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetsResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::ListPermissionGroupsRequest&, const Model::ListPermissionGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPermissionGroupsResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::ListPermissionGroupsByUserRequest&, const Model::ListPermissionGroupsByUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPermissionGroupsByUserResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::ListUsersByPermissionGroupRequest&, const Model::ListUsersByPermissionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersByPermissionGroupResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::ResetUserPasswordRequest&, const Model::ResetUserPasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetUserPasswordResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::UpdateChangesetRequest&, const Model::UpdateChangesetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChangesetResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::UpdateDatasetRequest&, const Model::UpdateDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDatasetResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::UpdatePermissionGroupRequest&, const Model::UpdatePermissionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePermissionGroupResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::UpdateUserRequest&, const Model::UpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace FinSpaceData
} // namespace Aws
