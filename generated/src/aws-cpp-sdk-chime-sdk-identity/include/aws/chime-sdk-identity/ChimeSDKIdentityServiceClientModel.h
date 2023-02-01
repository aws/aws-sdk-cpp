/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/chime-sdk-identity/ChimeSDKIdentityErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ChimeSDKIdentityClient header */
#include <aws/chime-sdk-identity/model/CreateAppInstanceResult.h>
#include <aws/chime-sdk-identity/model/CreateAppInstanceAdminResult.h>
#include <aws/chime-sdk-identity/model/CreateAppInstanceUserResult.h>
#include <aws/chime-sdk-identity/model/DescribeAppInstanceResult.h>
#include <aws/chime-sdk-identity/model/DescribeAppInstanceAdminResult.h>
#include <aws/chime-sdk-identity/model/DescribeAppInstanceUserResult.h>
#include <aws/chime-sdk-identity/model/DescribeAppInstanceUserEndpointResult.h>
#include <aws/chime-sdk-identity/model/GetAppInstanceRetentionSettingsResult.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceAdminsResult.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceUserEndpointsResult.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceUsersResult.h>
#include <aws/chime-sdk-identity/model/ListAppInstancesResult.h>
#include <aws/chime-sdk-identity/model/ListTagsForResourceResult.h>
#include <aws/chime-sdk-identity/model/PutAppInstanceRetentionSettingsResult.h>
#include <aws/chime-sdk-identity/model/RegisterAppInstanceUserEndpointResult.h>
#include <aws/chime-sdk-identity/model/UpdateAppInstanceResult.h>
#include <aws/chime-sdk-identity/model/UpdateAppInstanceUserResult.h>
#include <aws/chime-sdk-identity/model/UpdateAppInstanceUserEndpointResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ChimeSDKIdentityClient header */

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

  namespace ChimeSDKIdentity
  {
    using ChimeSDKIdentityClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ChimeSDKIdentityEndpointProviderBase = Aws::ChimeSDKIdentity::Endpoint::ChimeSDKIdentityEndpointProviderBase;
    using ChimeSDKIdentityEndpointProvider = Aws::ChimeSDKIdentity::Endpoint::ChimeSDKIdentityEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ChimeSDKIdentityClient header */
      class CreateAppInstanceRequest;
      class CreateAppInstanceAdminRequest;
      class CreateAppInstanceUserRequest;
      class DeleteAppInstanceRequest;
      class DeleteAppInstanceAdminRequest;
      class DeleteAppInstanceUserRequest;
      class DeregisterAppInstanceUserEndpointRequest;
      class DescribeAppInstanceRequest;
      class DescribeAppInstanceAdminRequest;
      class DescribeAppInstanceUserRequest;
      class DescribeAppInstanceUserEndpointRequest;
      class GetAppInstanceRetentionSettingsRequest;
      class ListAppInstanceAdminsRequest;
      class ListAppInstanceUserEndpointsRequest;
      class ListAppInstanceUsersRequest;
      class ListAppInstancesRequest;
      class ListTagsForResourceRequest;
      class PutAppInstanceRetentionSettingsRequest;
      class RegisterAppInstanceUserEndpointRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAppInstanceRequest;
      class UpdateAppInstanceUserRequest;
      class UpdateAppInstanceUserEndpointRequest;
      /* End of service model forward declarations required in ChimeSDKIdentityClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateAppInstanceResult, ChimeSDKIdentityError> CreateAppInstanceOutcome;
      typedef Aws::Utils::Outcome<CreateAppInstanceAdminResult, ChimeSDKIdentityError> CreateAppInstanceAdminOutcome;
      typedef Aws::Utils::Outcome<CreateAppInstanceUserResult, ChimeSDKIdentityError> CreateAppInstanceUserOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKIdentityError> DeleteAppInstanceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKIdentityError> DeleteAppInstanceAdminOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKIdentityError> DeleteAppInstanceUserOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKIdentityError> DeregisterAppInstanceUserEndpointOutcome;
      typedef Aws::Utils::Outcome<DescribeAppInstanceResult, ChimeSDKIdentityError> DescribeAppInstanceOutcome;
      typedef Aws::Utils::Outcome<DescribeAppInstanceAdminResult, ChimeSDKIdentityError> DescribeAppInstanceAdminOutcome;
      typedef Aws::Utils::Outcome<DescribeAppInstanceUserResult, ChimeSDKIdentityError> DescribeAppInstanceUserOutcome;
      typedef Aws::Utils::Outcome<DescribeAppInstanceUserEndpointResult, ChimeSDKIdentityError> DescribeAppInstanceUserEndpointOutcome;
      typedef Aws::Utils::Outcome<GetAppInstanceRetentionSettingsResult, ChimeSDKIdentityError> GetAppInstanceRetentionSettingsOutcome;
      typedef Aws::Utils::Outcome<ListAppInstanceAdminsResult, ChimeSDKIdentityError> ListAppInstanceAdminsOutcome;
      typedef Aws::Utils::Outcome<ListAppInstanceUserEndpointsResult, ChimeSDKIdentityError> ListAppInstanceUserEndpointsOutcome;
      typedef Aws::Utils::Outcome<ListAppInstanceUsersResult, ChimeSDKIdentityError> ListAppInstanceUsersOutcome;
      typedef Aws::Utils::Outcome<ListAppInstancesResult, ChimeSDKIdentityError> ListAppInstancesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ChimeSDKIdentityError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutAppInstanceRetentionSettingsResult, ChimeSDKIdentityError> PutAppInstanceRetentionSettingsOutcome;
      typedef Aws::Utils::Outcome<RegisterAppInstanceUserEndpointResult, ChimeSDKIdentityError> RegisterAppInstanceUserEndpointOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKIdentityError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKIdentityError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAppInstanceResult, ChimeSDKIdentityError> UpdateAppInstanceOutcome;
      typedef Aws::Utils::Outcome<UpdateAppInstanceUserResult, ChimeSDKIdentityError> UpdateAppInstanceUserOutcome;
      typedef Aws::Utils::Outcome<UpdateAppInstanceUserEndpointResult, ChimeSDKIdentityError> UpdateAppInstanceUserEndpointOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateAppInstanceOutcome> CreateAppInstanceOutcomeCallable;
      typedef std::future<CreateAppInstanceAdminOutcome> CreateAppInstanceAdminOutcomeCallable;
      typedef std::future<CreateAppInstanceUserOutcome> CreateAppInstanceUserOutcomeCallable;
      typedef std::future<DeleteAppInstanceOutcome> DeleteAppInstanceOutcomeCallable;
      typedef std::future<DeleteAppInstanceAdminOutcome> DeleteAppInstanceAdminOutcomeCallable;
      typedef std::future<DeleteAppInstanceUserOutcome> DeleteAppInstanceUserOutcomeCallable;
      typedef std::future<DeregisterAppInstanceUserEndpointOutcome> DeregisterAppInstanceUserEndpointOutcomeCallable;
      typedef std::future<DescribeAppInstanceOutcome> DescribeAppInstanceOutcomeCallable;
      typedef std::future<DescribeAppInstanceAdminOutcome> DescribeAppInstanceAdminOutcomeCallable;
      typedef std::future<DescribeAppInstanceUserOutcome> DescribeAppInstanceUserOutcomeCallable;
      typedef std::future<DescribeAppInstanceUserEndpointOutcome> DescribeAppInstanceUserEndpointOutcomeCallable;
      typedef std::future<GetAppInstanceRetentionSettingsOutcome> GetAppInstanceRetentionSettingsOutcomeCallable;
      typedef std::future<ListAppInstanceAdminsOutcome> ListAppInstanceAdminsOutcomeCallable;
      typedef std::future<ListAppInstanceUserEndpointsOutcome> ListAppInstanceUserEndpointsOutcomeCallable;
      typedef std::future<ListAppInstanceUsersOutcome> ListAppInstanceUsersOutcomeCallable;
      typedef std::future<ListAppInstancesOutcome> ListAppInstancesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutAppInstanceRetentionSettingsOutcome> PutAppInstanceRetentionSettingsOutcomeCallable;
      typedef std::future<RegisterAppInstanceUserEndpointOutcome> RegisterAppInstanceUserEndpointOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAppInstanceOutcome> UpdateAppInstanceOutcomeCallable;
      typedef std::future<UpdateAppInstanceUserOutcome> UpdateAppInstanceUserOutcomeCallable;
      typedef std::future<UpdateAppInstanceUserEndpointOutcome> UpdateAppInstanceUserEndpointOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ChimeSDKIdentityClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::CreateAppInstanceRequest&, const Model::CreateAppInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppInstanceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::CreateAppInstanceAdminRequest&, const Model::CreateAppInstanceAdminOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppInstanceAdminResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::CreateAppInstanceUserRequest&, const Model::CreateAppInstanceUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppInstanceUserResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::DeleteAppInstanceRequest&, const Model::DeleteAppInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppInstanceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::DeleteAppInstanceAdminRequest&, const Model::DeleteAppInstanceAdminOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppInstanceAdminResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::DeleteAppInstanceUserRequest&, const Model::DeleteAppInstanceUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppInstanceUserResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::DeregisterAppInstanceUserEndpointRequest&, const Model::DeregisterAppInstanceUserEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterAppInstanceUserEndpointResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::DescribeAppInstanceRequest&, const Model::DescribeAppInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAppInstanceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::DescribeAppInstanceAdminRequest&, const Model::DescribeAppInstanceAdminOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAppInstanceAdminResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::DescribeAppInstanceUserRequest&, const Model::DescribeAppInstanceUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAppInstanceUserResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::DescribeAppInstanceUserEndpointRequest&, const Model::DescribeAppInstanceUserEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAppInstanceUserEndpointResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::GetAppInstanceRetentionSettingsRequest&, const Model::GetAppInstanceRetentionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppInstanceRetentionSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::ListAppInstanceAdminsRequest&, const Model::ListAppInstanceAdminsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppInstanceAdminsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::ListAppInstanceUserEndpointsRequest&, const Model::ListAppInstanceUserEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppInstanceUserEndpointsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::ListAppInstanceUsersRequest&, const Model::ListAppInstanceUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppInstanceUsersResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::ListAppInstancesRequest&, const Model::ListAppInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppInstancesResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::PutAppInstanceRetentionSettingsRequest&, const Model::PutAppInstanceRetentionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAppInstanceRetentionSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::RegisterAppInstanceUserEndpointRequest&, const Model::RegisterAppInstanceUserEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterAppInstanceUserEndpointResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::UpdateAppInstanceRequest&, const Model::UpdateAppInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAppInstanceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::UpdateAppInstanceUserRequest&, const Model::UpdateAppInstanceUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAppInstanceUserResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::UpdateAppInstanceUserEndpointRequest&, const Model::UpdateAppInstanceUserEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAppInstanceUserEndpointResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ChimeSDKIdentity
} // namespace Aws
