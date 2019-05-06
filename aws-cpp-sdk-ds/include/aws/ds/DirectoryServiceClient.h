/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ds/model/AcceptSharedDirectoryResult.h>
#include <aws/ds/model/AddIpRoutesResult.h>
#include <aws/ds/model/AddTagsToResourceResult.h>
#include <aws/ds/model/CancelSchemaExtensionResult.h>
#include <aws/ds/model/ConnectDirectoryResult.h>
#include <aws/ds/model/CreateAliasResult.h>
#include <aws/ds/model/CreateComputerResult.h>
#include <aws/ds/model/CreateConditionalForwarderResult.h>
#include <aws/ds/model/CreateDirectoryResult.h>
#include <aws/ds/model/CreateLogSubscriptionResult.h>
#include <aws/ds/model/CreateMicrosoftADResult.h>
#include <aws/ds/model/CreateSnapshotResult.h>
#include <aws/ds/model/CreateTrustResult.h>
#include <aws/ds/model/DeleteConditionalForwarderResult.h>
#include <aws/ds/model/DeleteDirectoryResult.h>
#include <aws/ds/model/DeleteLogSubscriptionResult.h>
#include <aws/ds/model/DeleteSnapshotResult.h>
#include <aws/ds/model/DeleteTrustResult.h>
#include <aws/ds/model/DeregisterEventTopicResult.h>
#include <aws/ds/model/DescribeConditionalForwardersResult.h>
#include <aws/ds/model/DescribeDirectoriesResult.h>
#include <aws/ds/model/DescribeDomainControllersResult.h>
#include <aws/ds/model/DescribeEventTopicsResult.h>
#include <aws/ds/model/DescribeSharedDirectoriesResult.h>
#include <aws/ds/model/DescribeSnapshotsResult.h>
#include <aws/ds/model/DescribeTrustsResult.h>
#include <aws/ds/model/DisableRadiusResult.h>
#include <aws/ds/model/DisableSsoResult.h>
#include <aws/ds/model/EnableRadiusResult.h>
#include <aws/ds/model/EnableSsoResult.h>
#include <aws/ds/model/GetDirectoryLimitsResult.h>
#include <aws/ds/model/GetSnapshotLimitsResult.h>
#include <aws/ds/model/ListIpRoutesResult.h>
#include <aws/ds/model/ListLogSubscriptionsResult.h>
#include <aws/ds/model/ListSchemaExtensionsResult.h>
#include <aws/ds/model/ListTagsForResourceResult.h>
#include <aws/ds/model/RegisterEventTopicResult.h>
#include <aws/ds/model/RejectSharedDirectoryResult.h>
#include <aws/ds/model/RemoveIpRoutesResult.h>
#include <aws/ds/model/RemoveTagsFromResourceResult.h>
#include <aws/ds/model/ResetUserPasswordResult.h>
#include <aws/ds/model/RestoreFromSnapshotResult.h>
#include <aws/ds/model/ShareDirectoryResult.h>
#include <aws/ds/model/StartSchemaExtensionResult.h>
#include <aws/ds/model/UnshareDirectoryResult.h>
#include <aws/ds/model/UpdateConditionalForwarderResult.h>
#include <aws/ds/model/UpdateNumberOfDomainControllersResult.h>
#include <aws/ds/model/UpdateRadiusResult.h>
#include <aws/ds/model/UpdateTrustResult.h>
#include <aws/ds/model/VerifyTrustResult.h>
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

namespace DirectoryService
{

namespace Model
{
        class AcceptSharedDirectoryRequest;
        class AddIpRoutesRequest;
        class AddTagsToResourceRequest;
        class CancelSchemaExtensionRequest;
        class ConnectDirectoryRequest;
        class CreateAliasRequest;
        class CreateComputerRequest;
        class CreateConditionalForwarderRequest;
        class CreateDirectoryRequest;
        class CreateLogSubscriptionRequest;
        class CreateMicrosoftADRequest;
        class CreateSnapshotRequest;
        class CreateTrustRequest;
        class DeleteConditionalForwarderRequest;
        class DeleteDirectoryRequest;
        class DeleteLogSubscriptionRequest;
        class DeleteSnapshotRequest;
        class DeleteTrustRequest;
        class DeregisterEventTopicRequest;
        class DescribeConditionalForwardersRequest;
        class DescribeDirectoriesRequest;
        class DescribeDomainControllersRequest;
        class DescribeEventTopicsRequest;
        class DescribeSharedDirectoriesRequest;
        class DescribeSnapshotsRequest;
        class DescribeTrustsRequest;
        class DisableRadiusRequest;
        class DisableSsoRequest;
        class EnableRadiusRequest;
        class EnableSsoRequest;
        class GetDirectoryLimitsRequest;
        class GetSnapshotLimitsRequest;
        class ListIpRoutesRequest;
        class ListLogSubscriptionsRequest;
        class ListSchemaExtensionsRequest;
        class ListTagsForResourceRequest;
        class RegisterEventTopicRequest;
        class RejectSharedDirectoryRequest;
        class RemoveIpRoutesRequest;
        class RemoveTagsFromResourceRequest;
        class ResetUserPasswordRequest;
        class RestoreFromSnapshotRequest;
        class ShareDirectoryRequest;
        class StartSchemaExtensionRequest;
        class UnshareDirectoryRequest;
        class UpdateConditionalForwarderRequest;
        class UpdateNumberOfDomainControllersRequest;
        class UpdateRadiusRequest;
        class UpdateTrustRequest;
        class VerifyTrustRequest;

        typedef Aws::Utils::Outcome<AcceptSharedDirectoryResult, Aws::Client::AWSError<DirectoryServiceErrors>> AcceptSharedDirectoryOutcome;
        typedef Aws::Utils::Outcome<AddIpRoutesResult, Aws::Client::AWSError<DirectoryServiceErrors>> AddIpRoutesOutcome;
        typedef Aws::Utils::Outcome<AddTagsToResourceResult, Aws::Client::AWSError<DirectoryServiceErrors>> AddTagsToResourceOutcome;
        typedef Aws::Utils::Outcome<CancelSchemaExtensionResult, Aws::Client::AWSError<DirectoryServiceErrors>> CancelSchemaExtensionOutcome;
        typedef Aws::Utils::Outcome<ConnectDirectoryResult, Aws::Client::AWSError<DirectoryServiceErrors>> ConnectDirectoryOutcome;
        typedef Aws::Utils::Outcome<CreateAliasResult, Aws::Client::AWSError<DirectoryServiceErrors>> CreateAliasOutcome;
        typedef Aws::Utils::Outcome<CreateComputerResult, Aws::Client::AWSError<DirectoryServiceErrors>> CreateComputerOutcome;
        typedef Aws::Utils::Outcome<CreateConditionalForwarderResult, Aws::Client::AWSError<DirectoryServiceErrors>> CreateConditionalForwarderOutcome;
        typedef Aws::Utils::Outcome<CreateDirectoryResult, Aws::Client::AWSError<DirectoryServiceErrors>> CreateDirectoryOutcome;
        typedef Aws::Utils::Outcome<CreateLogSubscriptionResult, Aws::Client::AWSError<DirectoryServiceErrors>> CreateLogSubscriptionOutcome;
        typedef Aws::Utils::Outcome<CreateMicrosoftADResult, Aws::Client::AWSError<DirectoryServiceErrors>> CreateMicrosoftADOutcome;
        typedef Aws::Utils::Outcome<CreateSnapshotResult, Aws::Client::AWSError<DirectoryServiceErrors>> CreateSnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateTrustResult, Aws::Client::AWSError<DirectoryServiceErrors>> CreateTrustOutcome;
        typedef Aws::Utils::Outcome<DeleteConditionalForwarderResult, Aws::Client::AWSError<DirectoryServiceErrors>> DeleteConditionalForwarderOutcome;
        typedef Aws::Utils::Outcome<DeleteDirectoryResult, Aws::Client::AWSError<DirectoryServiceErrors>> DeleteDirectoryOutcome;
        typedef Aws::Utils::Outcome<DeleteLogSubscriptionResult, Aws::Client::AWSError<DirectoryServiceErrors>> DeleteLogSubscriptionOutcome;
        typedef Aws::Utils::Outcome<DeleteSnapshotResult, Aws::Client::AWSError<DirectoryServiceErrors>> DeleteSnapshotOutcome;
        typedef Aws::Utils::Outcome<DeleteTrustResult, Aws::Client::AWSError<DirectoryServiceErrors>> DeleteTrustOutcome;
        typedef Aws::Utils::Outcome<DeregisterEventTopicResult, Aws::Client::AWSError<DirectoryServiceErrors>> DeregisterEventTopicOutcome;
        typedef Aws::Utils::Outcome<DescribeConditionalForwardersResult, Aws::Client::AWSError<DirectoryServiceErrors>> DescribeConditionalForwardersOutcome;
        typedef Aws::Utils::Outcome<DescribeDirectoriesResult, Aws::Client::AWSError<DirectoryServiceErrors>> DescribeDirectoriesOutcome;
        typedef Aws::Utils::Outcome<DescribeDomainControllersResult, Aws::Client::AWSError<DirectoryServiceErrors>> DescribeDomainControllersOutcome;
        typedef Aws::Utils::Outcome<DescribeEventTopicsResult, Aws::Client::AWSError<DirectoryServiceErrors>> DescribeEventTopicsOutcome;
        typedef Aws::Utils::Outcome<DescribeSharedDirectoriesResult, Aws::Client::AWSError<DirectoryServiceErrors>> DescribeSharedDirectoriesOutcome;
        typedef Aws::Utils::Outcome<DescribeSnapshotsResult, Aws::Client::AWSError<DirectoryServiceErrors>> DescribeSnapshotsOutcome;
        typedef Aws::Utils::Outcome<DescribeTrustsResult, Aws::Client::AWSError<DirectoryServiceErrors>> DescribeTrustsOutcome;
        typedef Aws::Utils::Outcome<DisableRadiusResult, Aws::Client::AWSError<DirectoryServiceErrors>> DisableRadiusOutcome;
        typedef Aws::Utils::Outcome<DisableSsoResult, Aws::Client::AWSError<DirectoryServiceErrors>> DisableSsoOutcome;
        typedef Aws::Utils::Outcome<EnableRadiusResult, Aws::Client::AWSError<DirectoryServiceErrors>> EnableRadiusOutcome;
        typedef Aws::Utils::Outcome<EnableSsoResult, Aws::Client::AWSError<DirectoryServiceErrors>> EnableSsoOutcome;
        typedef Aws::Utils::Outcome<GetDirectoryLimitsResult, Aws::Client::AWSError<DirectoryServiceErrors>> GetDirectoryLimitsOutcome;
        typedef Aws::Utils::Outcome<GetSnapshotLimitsResult, Aws::Client::AWSError<DirectoryServiceErrors>> GetSnapshotLimitsOutcome;
        typedef Aws::Utils::Outcome<ListIpRoutesResult, Aws::Client::AWSError<DirectoryServiceErrors>> ListIpRoutesOutcome;
        typedef Aws::Utils::Outcome<ListLogSubscriptionsResult, Aws::Client::AWSError<DirectoryServiceErrors>> ListLogSubscriptionsOutcome;
        typedef Aws::Utils::Outcome<ListSchemaExtensionsResult, Aws::Client::AWSError<DirectoryServiceErrors>> ListSchemaExtensionsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<DirectoryServiceErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<RegisterEventTopicResult, Aws::Client::AWSError<DirectoryServiceErrors>> RegisterEventTopicOutcome;
        typedef Aws::Utils::Outcome<RejectSharedDirectoryResult, Aws::Client::AWSError<DirectoryServiceErrors>> RejectSharedDirectoryOutcome;
        typedef Aws::Utils::Outcome<RemoveIpRoutesResult, Aws::Client::AWSError<DirectoryServiceErrors>> RemoveIpRoutesOutcome;
        typedef Aws::Utils::Outcome<RemoveTagsFromResourceResult, Aws::Client::AWSError<DirectoryServiceErrors>> RemoveTagsFromResourceOutcome;
        typedef Aws::Utils::Outcome<ResetUserPasswordResult, Aws::Client::AWSError<DirectoryServiceErrors>> ResetUserPasswordOutcome;
        typedef Aws::Utils::Outcome<RestoreFromSnapshotResult, Aws::Client::AWSError<DirectoryServiceErrors>> RestoreFromSnapshotOutcome;
        typedef Aws::Utils::Outcome<ShareDirectoryResult, Aws::Client::AWSError<DirectoryServiceErrors>> ShareDirectoryOutcome;
        typedef Aws::Utils::Outcome<StartSchemaExtensionResult, Aws::Client::AWSError<DirectoryServiceErrors>> StartSchemaExtensionOutcome;
        typedef Aws::Utils::Outcome<UnshareDirectoryResult, Aws::Client::AWSError<DirectoryServiceErrors>> UnshareDirectoryOutcome;
        typedef Aws::Utils::Outcome<UpdateConditionalForwarderResult, Aws::Client::AWSError<DirectoryServiceErrors>> UpdateConditionalForwarderOutcome;
        typedef Aws::Utils::Outcome<UpdateNumberOfDomainControllersResult, Aws::Client::AWSError<DirectoryServiceErrors>> UpdateNumberOfDomainControllersOutcome;
        typedef Aws::Utils::Outcome<UpdateRadiusResult, Aws::Client::AWSError<DirectoryServiceErrors>> UpdateRadiusOutcome;
        typedef Aws::Utils::Outcome<UpdateTrustResult, Aws::Client::AWSError<DirectoryServiceErrors>> UpdateTrustOutcome;
        typedef Aws::Utils::Outcome<VerifyTrustResult, Aws::Client::AWSError<DirectoryServiceErrors>> VerifyTrustOutcome;

        typedef std::future<AcceptSharedDirectoryOutcome> AcceptSharedDirectoryOutcomeCallable;
        typedef std::future<AddIpRoutesOutcome> AddIpRoutesOutcomeCallable;
        typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
        typedef std::future<CancelSchemaExtensionOutcome> CancelSchemaExtensionOutcomeCallable;
        typedef std::future<ConnectDirectoryOutcome> ConnectDirectoryOutcomeCallable;
        typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
        typedef std::future<CreateComputerOutcome> CreateComputerOutcomeCallable;
        typedef std::future<CreateConditionalForwarderOutcome> CreateConditionalForwarderOutcomeCallable;
        typedef std::future<CreateDirectoryOutcome> CreateDirectoryOutcomeCallable;
        typedef std::future<CreateLogSubscriptionOutcome> CreateLogSubscriptionOutcomeCallable;
        typedef std::future<CreateMicrosoftADOutcome> CreateMicrosoftADOutcomeCallable;
        typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
        typedef std::future<CreateTrustOutcome> CreateTrustOutcomeCallable;
        typedef std::future<DeleteConditionalForwarderOutcome> DeleteConditionalForwarderOutcomeCallable;
        typedef std::future<DeleteDirectoryOutcome> DeleteDirectoryOutcomeCallable;
        typedef std::future<DeleteLogSubscriptionOutcome> DeleteLogSubscriptionOutcomeCallable;
        typedef std::future<DeleteSnapshotOutcome> DeleteSnapshotOutcomeCallable;
        typedef std::future<DeleteTrustOutcome> DeleteTrustOutcomeCallable;
        typedef std::future<DeregisterEventTopicOutcome> DeregisterEventTopicOutcomeCallable;
        typedef std::future<DescribeConditionalForwardersOutcome> DescribeConditionalForwardersOutcomeCallable;
        typedef std::future<DescribeDirectoriesOutcome> DescribeDirectoriesOutcomeCallable;
        typedef std::future<DescribeDomainControllersOutcome> DescribeDomainControllersOutcomeCallable;
        typedef std::future<DescribeEventTopicsOutcome> DescribeEventTopicsOutcomeCallable;
        typedef std::future<DescribeSharedDirectoriesOutcome> DescribeSharedDirectoriesOutcomeCallable;
        typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
        typedef std::future<DescribeTrustsOutcome> DescribeTrustsOutcomeCallable;
        typedef std::future<DisableRadiusOutcome> DisableRadiusOutcomeCallable;
        typedef std::future<DisableSsoOutcome> DisableSsoOutcomeCallable;
        typedef std::future<EnableRadiusOutcome> EnableRadiusOutcomeCallable;
        typedef std::future<EnableSsoOutcome> EnableSsoOutcomeCallable;
        typedef std::future<GetDirectoryLimitsOutcome> GetDirectoryLimitsOutcomeCallable;
        typedef std::future<GetSnapshotLimitsOutcome> GetSnapshotLimitsOutcomeCallable;
        typedef std::future<ListIpRoutesOutcome> ListIpRoutesOutcomeCallable;
        typedef std::future<ListLogSubscriptionsOutcome> ListLogSubscriptionsOutcomeCallable;
        typedef std::future<ListSchemaExtensionsOutcome> ListSchemaExtensionsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<RegisterEventTopicOutcome> RegisterEventTopicOutcomeCallable;
        typedef std::future<RejectSharedDirectoryOutcome> RejectSharedDirectoryOutcomeCallable;
        typedef std::future<RemoveIpRoutesOutcome> RemoveIpRoutesOutcomeCallable;
        typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
        typedef std::future<ResetUserPasswordOutcome> ResetUserPasswordOutcomeCallable;
        typedef std::future<RestoreFromSnapshotOutcome> RestoreFromSnapshotOutcomeCallable;
        typedef std::future<ShareDirectoryOutcome> ShareDirectoryOutcomeCallable;
        typedef std::future<StartSchemaExtensionOutcome> StartSchemaExtensionOutcomeCallable;
        typedef std::future<UnshareDirectoryOutcome> UnshareDirectoryOutcomeCallable;
        typedef std::future<UpdateConditionalForwarderOutcome> UpdateConditionalForwarderOutcomeCallable;
        typedef std::future<UpdateNumberOfDomainControllersOutcome> UpdateNumberOfDomainControllersOutcomeCallable;
        typedef std::future<UpdateRadiusOutcome> UpdateRadiusOutcomeCallable;
        typedef std::future<UpdateTrustOutcome> UpdateTrustOutcomeCallable;
        typedef std::future<VerifyTrustOutcome> VerifyTrustOutcomeCallable;
} // namespace Model

  class DirectoryServiceClient;

    typedef std::function<void(const DirectoryServiceClient*, const Model::AcceptSharedDirectoryRequest&, const Model::AcceptSharedDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptSharedDirectoryResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::AddIpRoutesRequest&, const Model::AddIpRoutesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddIpRoutesResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CancelSchemaExtensionRequest&, const Model::CancelSchemaExtensionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelSchemaExtensionResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::ConnectDirectoryRequest&, const Model::ConnectDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConnectDirectoryResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CreateAliasRequest&, const Model::CreateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAliasResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CreateComputerRequest&, const Model::CreateComputerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateComputerResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CreateConditionalForwarderRequest&, const Model::CreateConditionalForwarderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConditionalForwarderResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CreateDirectoryRequest&, const Model::CreateDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDirectoryResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CreateLogSubscriptionRequest&, const Model::CreateLogSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLogSubscriptionResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CreateMicrosoftADRequest&, const Model::CreateMicrosoftADOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMicrosoftADResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CreateSnapshotRequest&, const Model::CreateSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSnapshotResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CreateTrustRequest&, const Model::CreateTrustOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrustResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DeleteConditionalForwarderRequest&, const Model::DeleteConditionalForwarderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConditionalForwarderResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DeleteDirectoryRequest&, const Model::DeleteDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDirectoryResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DeleteLogSubscriptionRequest&, const Model::DeleteLogSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLogSubscriptionResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DeleteSnapshotRequest&, const Model::DeleteSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSnapshotResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DeleteTrustRequest&, const Model::DeleteTrustOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrustResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DeregisterEventTopicRequest&, const Model::DeregisterEventTopicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterEventTopicResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DescribeConditionalForwardersRequest&, const Model::DescribeConditionalForwardersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConditionalForwardersResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DescribeDirectoriesRequest&, const Model::DescribeDirectoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDirectoriesResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DescribeDomainControllersRequest&, const Model::DescribeDomainControllersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainControllersResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DescribeEventTopicsRequest&, const Model::DescribeEventTopicsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventTopicsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DescribeSharedDirectoriesRequest&, const Model::DescribeSharedDirectoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSharedDirectoriesResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DescribeSnapshotsRequest&, const Model::DescribeSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSnapshotsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DescribeTrustsRequest&, const Model::DescribeTrustsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrustsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DisableRadiusRequest&, const Model::DisableRadiusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableRadiusResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DisableSsoRequest&, const Model::DisableSsoOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableSsoResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::EnableRadiusRequest&, const Model::EnableRadiusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableRadiusResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::EnableSsoRequest&, const Model::EnableSsoOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableSsoResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::GetDirectoryLimitsRequest&, const Model::GetDirectoryLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDirectoryLimitsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::GetSnapshotLimitsRequest&, const Model::GetSnapshotLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSnapshotLimitsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::ListIpRoutesRequest&, const Model::ListIpRoutesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIpRoutesResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::ListLogSubscriptionsRequest&, const Model::ListLogSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLogSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::ListSchemaExtensionsRequest&, const Model::ListSchemaExtensionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchemaExtensionsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::RegisterEventTopicRequest&, const Model::RegisterEventTopicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterEventTopicResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::RejectSharedDirectoryRequest&, const Model::RejectSharedDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectSharedDirectoryResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::RemoveIpRoutesRequest&, const Model::RemoveIpRoutesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveIpRoutesResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromResourceResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::ResetUserPasswordRequest&, const Model::ResetUserPasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetUserPasswordResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::RestoreFromSnapshotRequest&, const Model::RestoreFromSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreFromSnapshotResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::ShareDirectoryRequest&, const Model::ShareDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ShareDirectoryResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::StartSchemaExtensionRequest&, const Model::StartSchemaExtensionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSchemaExtensionResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::UnshareDirectoryRequest&, const Model::UnshareDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnshareDirectoryResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::UpdateConditionalForwarderRequest&, const Model::UpdateConditionalForwarderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConditionalForwarderResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::UpdateNumberOfDomainControllersRequest&, const Model::UpdateNumberOfDomainControllersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNumberOfDomainControllersResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::UpdateRadiusRequest&, const Model::UpdateRadiusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRadiusResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::UpdateTrustRequest&, const Model::UpdateTrustOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTrustResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::VerifyTrustRequest&, const Model::VerifyTrustOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifyTrustResponseReceivedHandler;

  /**
   * <fullname>AWS Directory Service</fullname> <p>AWS Directory Service is a web
   * service that makes it easy for you to setup and run directories in the AWS
   * cloud, or connect your AWS resources with an existing on-premises Microsoft
   * Active Directory. This guide provides detailed information about AWS Directory
   * Service operations, data types, parameters, and errors. For information about
   * AWS Directory Services features, see <a
   * href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and
   * the <a
   * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS
   * Directory Service Administration Guide</a>.</p> <note> <p>AWS provides SDKs that
   * consist of libraries and sample code for various programming languages and
   * platforms (Java, Ruby, .Net, iOS, Android, etc.). The SDKs provide a convenient
   * way to create programmatic access to AWS Directory Service and other AWS
   * services. For more information about the AWS SDKs, including how to download and
   * install them, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
   * Services</a>.</p> </note>
   */
  class AWS_DIRECTORYSERVICE_API DirectoryServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DirectoryServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DirectoryServiceClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DirectoryServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~DirectoryServiceClient();

        inline virtual const char* GetServiceClientName() const override { return "Directory Service"; }


        /**
         * <p>Accepts a directory sharing request that was sent from the directory owner
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/AcceptSharedDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptSharedDirectoryOutcome AcceptSharedDirectory(const Model::AcceptSharedDirectoryRequest& request) const;

        /**
         * <p>Accepts a directory sharing request that was sent from the directory owner
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/AcceptSharedDirectory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptSharedDirectoryOutcomeCallable AcceptSharedDirectoryCallable(const Model::AcceptSharedDirectoryRequest& request) const;

        /**
         * <p>Accepts a directory sharing request that was sent from the directory owner
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/AcceptSharedDirectory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptSharedDirectoryAsync(const Model::AcceptSharedDirectoryRequest& request, const AcceptSharedDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>If the DNS server for your on-premises domain uses a publicly addressable IP
         * address, you must add a CIDR address block to correctly route traffic to and
         * from your Microsoft AD on Amazon Web Services. <i>AddIpRoutes</i> adds this
         * address block. You can also use <i>AddIpRoutes</i> to facilitate routing traffic
         * that uses public IP ranges from your Microsoft AD on AWS to a peer VPC. </p>
         * <p>Before you call <i>AddIpRoutes</i>, ensure that all of the required
         * permissions have been explicitly granted through a policy. For details about
         * what permissions are required to run the <i>AddIpRoutes</i> operation, see <a
         * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
         * Directory Service API Permissions: Actions, Resources, and Conditions
         * Reference</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/AddIpRoutes">AWS API
         * Reference</a></p>
         */
        virtual Model::AddIpRoutesOutcome AddIpRoutes(const Model::AddIpRoutesRequest& request) const;

        /**
         * <p>If the DNS server for your on-premises domain uses a publicly addressable IP
         * address, you must add a CIDR address block to correctly route traffic to and
         * from your Microsoft AD on Amazon Web Services. <i>AddIpRoutes</i> adds this
         * address block. You can also use <i>AddIpRoutes</i> to facilitate routing traffic
         * that uses public IP ranges from your Microsoft AD on AWS to a peer VPC. </p>
         * <p>Before you call <i>AddIpRoutes</i>, ensure that all of the required
         * permissions have been explicitly granted through a policy. For details about
         * what permissions are required to run the <i>AddIpRoutes</i> operation, see <a
         * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
         * Directory Service API Permissions: Actions, Resources, and Conditions
         * Reference</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/AddIpRoutes">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddIpRoutesOutcomeCallable AddIpRoutesCallable(const Model::AddIpRoutesRequest& request) const;

        /**
         * <p>If the DNS server for your on-premises domain uses a publicly addressable IP
         * address, you must add a CIDR address block to correctly route traffic to and
         * from your Microsoft AD on Amazon Web Services. <i>AddIpRoutes</i> adds this
         * address block. You can also use <i>AddIpRoutes</i> to facilitate routing traffic
         * that uses public IP ranges from your Microsoft AD on AWS to a peer VPC. </p>
         * <p>Before you call <i>AddIpRoutes</i>, ensure that all of the required
         * permissions have been explicitly granted through a policy. For details about
         * what permissions are required to run the <i>AddIpRoutes</i> operation, see <a
         * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
         * Directory Service API Permissions: Actions, Resources, and Conditions
         * Reference</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/AddIpRoutes">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddIpRoutesAsync(const Model::AddIpRoutesRequest& request, const AddIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified directory. Each
         * directory can have a maximum of 50 tags. Each tag consists of a key and optional
         * value. Tag keys must be unique to each resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/AddTagsToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified directory. Each
         * directory can have a maximum of 50 tags. Each tag consists of a key and optional
         * value. Tag keys must be unique to each resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/AddTagsToResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified directory. Each
         * directory can have a maximum of 50 tags. Each tag consists of a key and optional
         * value. Tag keys must be unique to each resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/AddTagsToResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsToResourceAsync(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels an in-progress schema extension to a Microsoft AD directory. Once a
         * schema extension has started replicating to all domain controllers, the task can
         * no longer be canceled. A schema extension can be canceled during any of the
         * following states; <code>Initializing</code>, <code>CreatingSnapshot</code>, and
         * <code>UpdatingSchema</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CancelSchemaExtension">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelSchemaExtensionOutcome CancelSchemaExtension(const Model::CancelSchemaExtensionRequest& request) const;

        /**
         * <p>Cancels an in-progress schema extension to a Microsoft AD directory. Once a
         * schema extension has started replicating to all domain controllers, the task can
         * no longer be canceled. A schema extension can be canceled during any of the
         * following states; <code>Initializing</code>, <code>CreatingSnapshot</code>, and
         * <code>UpdatingSchema</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CancelSchemaExtension">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelSchemaExtensionOutcomeCallable CancelSchemaExtensionCallable(const Model::CancelSchemaExtensionRequest& request) const;

        /**
         * <p>Cancels an in-progress schema extension to a Microsoft AD directory. Once a
         * schema extension has started replicating to all domain controllers, the task can
         * no longer be canceled. A schema extension can be canceled during any of the
         * following states; <code>Initializing</code>, <code>CreatingSnapshot</code>, and
         * <code>UpdatingSchema</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CancelSchemaExtension">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelSchemaExtensionAsync(const Model::CancelSchemaExtensionRequest& request, const CancelSchemaExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an AD Connector to connect to an on-premises directory.</p> <p>Before
         * you call <code>ConnectDirectory</code>, ensure that all of the required
         * permissions have been explicitly granted through a policy. For details about
         * what permissions are required to run the <code>ConnectDirectory</code>
         * operation, see <a
         * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
         * Directory Service API Permissions: Actions, Resources, and Conditions
         * Reference</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ConnectDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::ConnectDirectoryOutcome ConnectDirectory(const Model::ConnectDirectoryRequest& request) const;

        /**
         * <p>Creates an AD Connector to connect to an on-premises directory.</p> <p>Before
         * you call <code>ConnectDirectory</code>, ensure that all of the required
         * permissions have been explicitly granted through a policy. For details about
         * what permissions are required to run the <code>ConnectDirectory</code>
         * operation, see <a
         * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
         * Directory Service API Permissions: Actions, Resources, and Conditions
         * Reference</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ConnectDirectory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConnectDirectoryOutcomeCallable ConnectDirectoryCallable(const Model::ConnectDirectoryRequest& request) const;

        /**
         * <p>Creates an AD Connector to connect to an on-premises directory.</p> <p>Before
         * you call <code>ConnectDirectory</code>, ensure that all of the required
         * permissions have been explicitly granted through a policy. For details about
         * what permissions are required to run the <code>ConnectDirectory</code>
         * operation, see <a
         * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
         * Directory Service API Permissions: Actions, Resources, and Conditions
         * Reference</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ConnectDirectory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConnectDirectoryAsync(const Model::ConnectDirectoryRequest& request, const ConnectDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an alias for a directory and assigns the alias to the directory. The
         * alias is used to construct the access URL for the directory, such as
         * <code>http://&lt;alias&gt;.awsapps.com</code>.</p> <important> <p>After an alias
         * has been created, it cannot be deleted or reused, so this operation should only
         * be used when absolutely necessary.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateAlias">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateAliasOutcome CreateAlias(const Model::CreateAliasRequest& request) const;

        /**
         * <p>Creates an alias for a directory and assigns the alias to the directory. The
         * alias is used to construct the access URL for the directory, such as
         * <code>http://&lt;alias&gt;.awsapps.com</code>.</p> <important> <p>After an alias
         * has been created, it cannot be deleted or reused, so this operation should only
         * be used when absolutely necessary.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateAlias">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAliasOutcomeCallable CreateAliasCallable(const Model::CreateAliasRequest& request) const;

        /**
         * <p>Creates an alias for a directory and assigns the alias to the directory. The
         * alias is used to construct the access URL for the directory, such as
         * <code>http://&lt;alias&gt;.awsapps.com</code>.</p> <important> <p>After an alias
         * has been created, it cannot be deleted or reused, so this operation should only
         * be used when absolutely necessary.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateAlias">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAliasAsync(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a computer account in the specified directory, and joins the computer
         * to the directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateComputer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateComputerOutcome CreateComputer(const Model::CreateComputerRequest& request) const;

        /**
         * <p>Creates a computer account in the specified directory, and joins the computer
         * to the directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateComputer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateComputerOutcomeCallable CreateComputerCallable(const Model::CreateComputerRequest& request) const;

        /**
         * <p>Creates a computer account in the specified directory, and joins the computer
         * to the directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateComputer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateComputerAsync(const Model::CreateComputerRequest& request, const CreateComputerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a conditional forwarder associated with your AWS directory.
         * Conditional forwarders are required in order to set up a trust relationship with
         * another domain. The conditional forwarder points to the trusted
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateConditionalForwarder">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConditionalForwarderOutcome CreateConditionalForwarder(const Model::CreateConditionalForwarderRequest& request) const;

        /**
         * <p>Creates a conditional forwarder associated with your AWS directory.
         * Conditional forwarders are required in order to set up a trust relationship with
         * another domain. The conditional forwarder points to the trusted
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateConditionalForwarder">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConditionalForwarderOutcomeCallable CreateConditionalForwarderCallable(const Model::CreateConditionalForwarderRequest& request) const;

        /**
         * <p>Creates a conditional forwarder associated with your AWS directory.
         * Conditional forwarders are required in order to set up a trust relationship with
         * another domain. The conditional forwarder points to the trusted
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateConditionalForwarder">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConditionalForwarderAsync(const Model::CreateConditionalForwarderRequest& request, const CreateConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Simple AD directory.</p> <p>Before you call
         * <code>CreateDirectory</code>, ensure that all of the required permissions have
         * been explicitly granted through a policy. For details about what permissions are
         * required to run the <code>CreateDirectory</code> operation, see <a
         * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
         * Directory Service API Permissions: Actions, Resources, and Conditions
         * Reference</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDirectoryOutcome CreateDirectory(const Model::CreateDirectoryRequest& request) const;

        /**
         * <p>Creates a Simple AD directory.</p> <p>Before you call
         * <code>CreateDirectory</code>, ensure that all of the required permissions have
         * been explicitly granted through a policy. For details about what permissions are
         * required to run the <code>CreateDirectory</code> operation, see <a
         * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
         * Directory Service API Permissions: Actions, Resources, and Conditions
         * Reference</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateDirectory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDirectoryOutcomeCallable CreateDirectoryCallable(const Model::CreateDirectoryRequest& request) const;

        /**
         * <p>Creates a Simple AD directory.</p> <p>Before you call
         * <code>CreateDirectory</code>, ensure that all of the required permissions have
         * been explicitly granted through a policy. For details about what permissions are
         * required to run the <code>CreateDirectory</code> operation, see <a
         * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
         * Directory Service API Permissions: Actions, Resources, and Conditions
         * Reference</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateDirectory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDirectoryAsync(const Model::CreateDirectoryRequest& request, const CreateDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a subscription to forward real time Directory Service domain
         * controller security logs to the specified CloudWatch log group in your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateLogSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLogSubscriptionOutcome CreateLogSubscription(const Model::CreateLogSubscriptionRequest& request) const;

        /**
         * <p>Creates a subscription to forward real time Directory Service domain
         * controller security logs to the specified CloudWatch log group in your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateLogSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLogSubscriptionOutcomeCallable CreateLogSubscriptionCallable(const Model::CreateLogSubscriptionRequest& request) const;

        /**
         * <p>Creates a subscription to forward real time Directory Service domain
         * controller security logs to the specified CloudWatch log group in your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateLogSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLogSubscriptionAsync(const Model::CreateLogSubscriptionRequest& request, const CreateLogSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an AWS Managed Microsoft AD directory.</p> <p>Before you call
         * <i>CreateMicrosoftAD</i>, ensure that all of the required permissions have been
         * explicitly granted through a policy. For details about what permissions are
         * required to run the <i>CreateMicrosoftAD</i> operation, see <a
         * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
         * Directory Service API Permissions: Actions, Resources, and Conditions
         * Reference</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateMicrosoftAD">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMicrosoftADOutcome CreateMicrosoftAD(const Model::CreateMicrosoftADRequest& request) const;

        /**
         * <p>Creates an AWS Managed Microsoft AD directory.</p> <p>Before you call
         * <i>CreateMicrosoftAD</i>, ensure that all of the required permissions have been
         * explicitly granted through a policy. For details about what permissions are
         * required to run the <i>CreateMicrosoftAD</i> operation, see <a
         * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
         * Directory Service API Permissions: Actions, Resources, and Conditions
         * Reference</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateMicrosoftAD">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMicrosoftADOutcomeCallable CreateMicrosoftADCallable(const Model::CreateMicrosoftADRequest& request) const;

        /**
         * <p>Creates an AWS Managed Microsoft AD directory.</p> <p>Before you call
         * <i>CreateMicrosoftAD</i>, ensure that all of the required permissions have been
         * explicitly granted through a policy. For details about what permissions are
         * required to run the <i>CreateMicrosoftAD</i> operation, see <a
         * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
         * Directory Service API Permissions: Actions, Resources, and Conditions
         * Reference</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateMicrosoftAD">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMicrosoftADAsync(const Model::CreateMicrosoftADRequest& request, const CreateMicrosoftADResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a snapshot of a Simple AD or Microsoft AD directory in the AWS
         * cloud.</p> <note> <p>You cannot take snapshots of AD Connector directories.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest& request) const;

        /**
         * <p>Creates a snapshot of a Simple AD or Microsoft AD directory in the AWS
         * cloud.</p> <note> <p>You cannot take snapshots of AD Connector directories.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSnapshotOutcomeCallable CreateSnapshotCallable(const Model::CreateSnapshotRequest& request) const;

        /**
         * <p>Creates a snapshot of a Simple AD or Microsoft AD directory in the AWS
         * cloud.</p> <note> <p>You cannot take snapshots of AD Connector directories.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>AWS Directory Service for Microsoft Active Directory allows you to configure
         * trust relationships. For example, you can establish a trust between your AWS
         * Managed Microsoft AD directory, and your existing on-premises Microsoft Active
         * Directory. This would allow you to provide users and groups access to resources
         * in either domain, with a single set of credentials.</p> <p>This action initiates
         * the creation of the AWS side of a trust relationship between an AWS Managed
         * Microsoft AD directory and an external domain. You can create either a forest
         * trust or an external trust.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateTrust">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateTrustOutcome CreateTrust(const Model::CreateTrustRequest& request) const;

        /**
         * <p>AWS Directory Service for Microsoft Active Directory allows you to configure
         * trust relationships. For example, you can establish a trust between your AWS
         * Managed Microsoft AD directory, and your existing on-premises Microsoft Active
         * Directory. This would allow you to provide users and groups access to resources
         * in either domain, with a single set of credentials.</p> <p>This action initiates
         * the creation of the AWS side of a trust relationship between an AWS Managed
         * Microsoft AD directory and an external domain. You can create either a forest
         * trust or an external trust.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateTrust">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrustOutcomeCallable CreateTrustCallable(const Model::CreateTrustRequest& request) const;

        /**
         * <p>AWS Directory Service for Microsoft Active Directory allows you to configure
         * trust relationships. For example, you can establish a trust between your AWS
         * Managed Microsoft AD directory, and your existing on-premises Microsoft Active
         * Directory. This would allow you to provide users and groups access to resources
         * in either domain, with a single set of credentials.</p> <p>This action initiates
         * the creation of the AWS side of a trust relationship between an AWS Managed
         * Microsoft AD directory and an external domain. You can create either a forest
         * trust or an external trust.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateTrust">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrustAsync(const Model::CreateTrustRequest& request, const CreateTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a conditional forwarder that has been set up for your AWS
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteConditionalForwarder">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConditionalForwarderOutcome DeleteConditionalForwarder(const Model::DeleteConditionalForwarderRequest& request) const;

        /**
         * <p>Deletes a conditional forwarder that has been set up for your AWS
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteConditionalForwarder">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConditionalForwarderOutcomeCallable DeleteConditionalForwarderCallable(const Model::DeleteConditionalForwarderRequest& request) const;

        /**
         * <p>Deletes a conditional forwarder that has been set up for your AWS
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteConditionalForwarder">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConditionalForwarderAsync(const Model::DeleteConditionalForwarderRequest& request, const DeleteConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an AWS Directory Service directory.</p> <p>Before you call
         * <code>DeleteDirectory</code>, ensure that all of the required permissions have
         * been explicitly granted through a policy. For details about what permissions are
         * required to run the <code>DeleteDirectory</code> operation, see <a
         * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
         * Directory Service API Permissions: Actions, Resources, and Conditions
         * Reference</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDirectoryOutcome DeleteDirectory(const Model::DeleteDirectoryRequest& request) const;

        /**
         * <p>Deletes an AWS Directory Service directory.</p> <p>Before you call
         * <code>DeleteDirectory</code>, ensure that all of the required permissions have
         * been explicitly granted through a policy. For details about what permissions are
         * required to run the <code>DeleteDirectory</code> operation, see <a
         * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
         * Directory Service API Permissions: Actions, Resources, and Conditions
         * Reference</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteDirectory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDirectoryOutcomeCallable DeleteDirectoryCallable(const Model::DeleteDirectoryRequest& request) const;

        /**
         * <p>Deletes an AWS Directory Service directory.</p> <p>Before you call
         * <code>DeleteDirectory</code>, ensure that all of the required permissions have
         * been explicitly granted through a policy. For details about what permissions are
         * required to run the <code>DeleteDirectory</code> operation, see <a
         * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
         * Directory Service API Permissions: Actions, Resources, and Conditions
         * Reference</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteDirectory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDirectoryAsync(const Model::DeleteDirectoryRequest& request, const DeleteDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified log subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteLogSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLogSubscriptionOutcome DeleteLogSubscription(const Model::DeleteLogSubscriptionRequest& request) const;

        /**
         * <p>Deletes the specified log subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteLogSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLogSubscriptionOutcomeCallable DeleteLogSubscriptionCallable(const Model::DeleteLogSubscriptionRequest& request) const;

        /**
         * <p>Deletes the specified log subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteLogSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLogSubscriptionAsync(const Model::DeleteLogSubscriptionRequest& request, const DeleteLogSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a directory snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSnapshotOutcome DeleteSnapshot(const Model::DeleteSnapshotRequest& request) const;

        /**
         * <p>Deletes a directory snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSnapshotOutcomeCallable DeleteSnapshotCallable(const Model::DeleteSnapshotRequest& request) const;

        /**
         * <p>Deletes a directory snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSnapshotAsync(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing trust relationship between your AWS Managed Microsoft AD
         * directory and an external domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteTrust">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteTrustOutcome DeleteTrust(const Model::DeleteTrustRequest& request) const;

        /**
         * <p>Deletes an existing trust relationship between your AWS Managed Microsoft AD
         * directory and an external domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteTrust">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrustOutcomeCallable DeleteTrustCallable(const Model::DeleteTrustRequest& request) const;

        /**
         * <p>Deletes an existing trust relationship between your AWS Managed Microsoft AD
         * directory and an external domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteTrust">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrustAsync(const Model::DeleteTrustRequest& request, const DeleteTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified directory as a publisher to the specified SNS
         * topic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeregisterEventTopic">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterEventTopicOutcome DeregisterEventTopic(const Model::DeregisterEventTopicRequest& request) const;

        /**
         * <p>Removes the specified directory as a publisher to the specified SNS
         * topic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeregisterEventTopic">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterEventTopicOutcomeCallable DeregisterEventTopicCallable(const Model::DeregisterEventTopicRequest& request) const;

        /**
         * <p>Removes the specified directory as a publisher to the specified SNS
         * topic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeregisterEventTopic">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterEventTopicAsync(const Model::DeregisterEventTopicRequest& request, const DeregisterEventTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Obtains information about the conditional forwarders for this account.</p>
         * <p>If no input parameters are provided for RemoteDomainNames, this request
         * describes all conditional forwarders for the specified directory
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeConditionalForwarders">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConditionalForwardersOutcome DescribeConditionalForwarders(const Model::DescribeConditionalForwardersRequest& request) const;

        /**
         * <p>Obtains information about the conditional forwarders for this account.</p>
         * <p>If no input parameters are provided for RemoteDomainNames, this request
         * describes all conditional forwarders for the specified directory
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeConditionalForwarders">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConditionalForwardersOutcomeCallable DescribeConditionalForwardersCallable(const Model::DescribeConditionalForwardersRequest& request) const;

        /**
         * <p>Obtains information about the conditional forwarders for this account.</p>
         * <p>If no input parameters are provided for RemoteDomainNames, this request
         * describes all conditional forwarders for the specified directory
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeConditionalForwarders">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConditionalForwardersAsync(const Model::DescribeConditionalForwardersRequest& request, const DescribeConditionalForwardersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Obtains information about the directories that belong to this account.</p>
         * <p>You can retrieve information about specific directories by passing the
         * directory identifiers in the <code>DirectoryIds</code> parameter. Otherwise, all
         * directories that belong to the current account are returned.</p> <p>This
         * operation supports pagination with the use of the <code>NextToken</code> request
         * and response parameters. If more results are available, the
         * <code>DescribeDirectoriesResult.NextToken</code> member contains a token that
         * you pass in the next call to <a>DescribeDirectories</a> to retrieve the next set
         * of items.</p> <p>You can also specify a maximum number of return results with
         * the <code>Limit</code> parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeDirectories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDirectoriesOutcome DescribeDirectories(const Model::DescribeDirectoriesRequest& request) const;

        /**
         * <p>Obtains information about the directories that belong to this account.</p>
         * <p>You can retrieve information about specific directories by passing the
         * directory identifiers in the <code>DirectoryIds</code> parameter. Otherwise, all
         * directories that belong to the current account are returned.</p> <p>This
         * operation supports pagination with the use of the <code>NextToken</code> request
         * and response parameters. If more results are available, the
         * <code>DescribeDirectoriesResult.NextToken</code> member contains a token that
         * you pass in the next call to <a>DescribeDirectories</a> to retrieve the next set
         * of items.</p> <p>You can also specify a maximum number of return results with
         * the <code>Limit</code> parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeDirectories">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDirectoriesOutcomeCallable DescribeDirectoriesCallable(const Model::DescribeDirectoriesRequest& request) const;

        /**
         * <p>Obtains information about the directories that belong to this account.</p>
         * <p>You can retrieve information about specific directories by passing the
         * directory identifiers in the <code>DirectoryIds</code> parameter. Otherwise, all
         * directories that belong to the current account are returned.</p> <p>This
         * operation supports pagination with the use of the <code>NextToken</code> request
         * and response parameters. If more results are available, the
         * <code>DescribeDirectoriesResult.NextToken</code> member contains a token that
         * you pass in the next call to <a>DescribeDirectories</a> to retrieve the next set
         * of items.</p> <p>You can also specify a maximum number of return results with
         * the <code>Limit</code> parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeDirectories">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDirectoriesAsync(const Model::DescribeDirectoriesRequest& request, const DescribeDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about any domain controllers in your
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeDomainControllers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainControllersOutcome DescribeDomainControllers(const Model::DescribeDomainControllersRequest& request) const;

        /**
         * <p>Provides information about any domain controllers in your
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeDomainControllers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDomainControllersOutcomeCallable DescribeDomainControllersCallable(const Model::DescribeDomainControllersRequest& request) const;

        /**
         * <p>Provides information about any domain controllers in your
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeDomainControllers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDomainControllersAsync(const Model::DescribeDomainControllersRequest& request, const DescribeDomainControllersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Obtains information about which SNS topics receive status messages from the
         * specified directory.</p> <p>If no input parameters are provided, such as
         * DirectoryId or TopicName, this request describes all of the associations in the
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeEventTopics">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventTopicsOutcome DescribeEventTopics(const Model::DescribeEventTopicsRequest& request) const;

        /**
         * <p>Obtains information about which SNS topics receive status messages from the
         * specified directory.</p> <p>If no input parameters are provided, such as
         * DirectoryId or TopicName, this request describes all of the associations in the
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeEventTopics">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventTopicsOutcomeCallable DescribeEventTopicsCallable(const Model::DescribeEventTopicsRequest& request) const;

        /**
         * <p>Obtains information about which SNS topics receive status messages from the
         * specified directory.</p> <p>If no input parameters are provided, such as
         * DirectoryId or TopicName, this request describes all of the associations in the
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeEventTopics">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventTopicsAsync(const Model::DescribeEventTopicsRequest& request, const DescribeEventTopicsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the shared directories in your account. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeSharedDirectories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSharedDirectoriesOutcome DescribeSharedDirectories(const Model::DescribeSharedDirectoriesRequest& request) const;

        /**
         * <p>Returns the shared directories in your account. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeSharedDirectories">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSharedDirectoriesOutcomeCallable DescribeSharedDirectoriesCallable(const Model::DescribeSharedDirectoriesRequest& request) const;

        /**
         * <p>Returns the shared directories in your account. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeSharedDirectories">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSharedDirectoriesAsync(const Model::DescribeSharedDirectoriesRequest& request, const DescribeSharedDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Obtains information about the directory snapshots that belong to this
         * account.</p> <p>This operation supports pagination with the use of the
         * <i>NextToken</i> request and response parameters. If more results are available,
         * the <i>DescribeSnapshots.NextToken</i> member contains a token that you pass in
         * the next call to <a>DescribeSnapshots</a> to retrieve the next set of items.</p>
         * <p>You can also specify a maximum number of return results with the <i>Limit</i>
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSnapshotsOutcome DescribeSnapshots(const Model::DescribeSnapshotsRequest& request) const;

        /**
         * <p>Obtains information about the directory snapshots that belong to this
         * account.</p> <p>This operation supports pagination with the use of the
         * <i>NextToken</i> request and response parameters. If more results are available,
         * the <i>DescribeSnapshots.NextToken</i> member contains a token that you pass in
         * the next call to <a>DescribeSnapshots</a> to retrieve the next set of items.</p>
         * <p>You can also specify a maximum number of return results with the <i>Limit</i>
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeSnapshots">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSnapshotsOutcomeCallable DescribeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request) const;

        /**
         * <p>Obtains information about the directory snapshots that belong to this
         * account.</p> <p>This operation supports pagination with the use of the
         * <i>NextToken</i> request and response parameters. If more results are available,
         * the <i>DescribeSnapshots.NextToken</i> member contains a token that you pass in
         * the next call to <a>DescribeSnapshots</a> to retrieve the next set of items.</p>
         * <p>You can also specify a maximum number of return results with the <i>Limit</i>
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeSnapshots">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSnapshotsAsync(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Obtains information about the trust relationships for this account.</p> <p>If
         * no input parameters are provided, such as DirectoryId or TrustIds, this request
         * describes all the trust relationships belonging to the account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeTrusts">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrustsOutcome DescribeTrusts(const Model::DescribeTrustsRequest& request) const;

        /**
         * <p>Obtains information about the trust relationships for this account.</p> <p>If
         * no input parameters are provided, such as DirectoryId or TrustIds, this request
         * describes all the trust relationships belonging to the account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeTrusts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTrustsOutcomeCallable DescribeTrustsCallable(const Model::DescribeTrustsRequest& request) const;

        /**
         * <p>Obtains information about the trust relationships for this account.</p> <p>If
         * no input parameters are provided, such as DirectoryId or TrustIds, this request
         * describes all the trust relationships belonging to the account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeTrusts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTrustsAsync(const Model::DescribeTrustsRequest& request, const DescribeTrustsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables multi-factor authentication (MFA) with the Remote Authentication
         * Dial In User Service (RADIUS) server for an AD Connector or Microsoft AD
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DisableRadius">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableRadiusOutcome DisableRadius(const Model::DisableRadiusRequest& request) const;

        /**
         * <p>Disables multi-factor authentication (MFA) with the Remote Authentication
         * Dial In User Service (RADIUS) server for an AD Connector or Microsoft AD
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DisableRadius">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableRadiusOutcomeCallable DisableRadiusCallable(const Model::DisableRadiusRequest& request) const;

        /**
         * <p>Disables multi-factor authentication (MFA) with the Remote Authentication
         * Dial In User Service (RADIUS) server for an AD Connector or Microsoft AD
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DisableRadius">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableRadiusAsync(const Model::DisableRadiusRequest& request, const DisableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables single-sign on for a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DisableSso">AWS API
         * Reference</a></p>
         */
        virtual Model::DisableSsoOutcome DisableSso(const Model::DisableSsoRequest& request) const;

        /**
         * <p>Disables single-sign on for a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DisableSso">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableSsoOutcomeCallable DisableSsoCallable(const Model::DisableSsoRequest& request) const;

        /**
         * <p>Disables single-sign on for a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DisableSso">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableSsoAsync(const Model::DisableSsoRequest& request, const DisableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables multi-factor authentication (MFA) with the Remote Authentication Dial
         * In User Service (RADIUS) server for an AD Connector or Microsoft AD
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/EnableRadius">AWS API
         * Reference</a></p>
         */
        virtual Model::EnableRadiusOutcome EnableRadius(const Model::EnableRadiusRequest& request) const;

        /**
         * <p>Enables multi-factor authentication (MFA) with the Remote Authentication Dial
         * In User Service (RADIUS) server for an AD Connector or Microsoft AD
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/EnableRadius">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableRadiusOutcomeCallable EnableRadiusCallable(const Model::EnableRadiusRequest& request) const;

        /**
         * <p>Enables multi-factor authentication (MFA) with the Remote Authentication Dial
         * In User Service (RADIUS) server for an AD Connector or Microsoft AD
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/EnableRadius">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableRadiusAsync(const Model::EnableRadiusRequest& request, const EnableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables single sign-on for a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/EnableSso">AWS API
         * Reference</a></p>
         */
        virtual Model::EnableSsoOutcome EnableSso(const Model::EnableSsoRequest& request) const;

        /**
         * <p>Enables single sign-on for a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/EnableSso">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableSsoOutcomeCallable EnableSsoCallable(const Model::EnableSsoRequest& request) const;

        /**
         * <p>Enables single sign-on for a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/EnableSso">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableSsoAsync(const Model::EnableSsoRequest& request, const EnableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Obtains directory limit information for the current region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/GetDirectoryLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDirectoryLimitsOutcome GetDirectoryLimits(const Model::GetDirectoryLimitsRequest& request) const;

        /**
         * <p>Obtains directory limit information for the current region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/GetDirectoryLimits">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDirectoryLimitsOutcomeCallable GetDirectoryLimitsCallable(const Model::GetDirectoryLimitsRequest& request) const;

        /**
         * <p>Obtains directory limit information for the current region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/GetDirectoryLimits">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDirectoryLimitsAsync(const Model::GetDirectoryLimitsRequest& request, const GetDirectoryLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Obtains the manual snapshot limits for a directory.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/GetSnapshotLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSnapshotLimitsOutcome GetSnapshotLimits(const Model::GetSnapshotLimitsRequest& request) const;

        /**
         * <p>Obtains the manual snapshot limits for a directory.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/GetSnapshotLimits">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSnapshotLimitsOutcomeCallable GetSnapshotLimitsCallable(const Model::GetSnapshotLimitsRequest& request) const;

        /**
         * <p>Obtains the manual snapshot limits for a directory.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/GetSnapshotLimits">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSnapshotLimitsAsync(const Model::GetSnapshotLimitsRequest& request, const GetSnapshotLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the address blocks that you have added to a directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ListIpRoutes">AWS API
         * Reference</a></p>
         */
        virtual Model::ListIpRoutesOutcome ListIpRoutes(const Model::ListIpRoutesRequest& request) const;

        /**
         * <p>Lists the address blocks that you have added to a directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ListIpRoutes">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIpRoutesOutcomeCallable ListIpRoutesCallable(const Model::ListIpRoutesRequest& request) const;

        /**
         * <p>Lists the address blocks that you have added to a directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ListIpRoutes">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIpRoutesAsync(const Model::ListIpRoutesRequest& request, const ListIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the active log subscriptions for the AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ListLogSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLogSubscriptionsOutcome ListLogSubscriptions(const Model::ListLogSubscriptionsRequest& request) const;

        /**
         * <p>Lists the active log subscriptions for the AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ListLogSubscriptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLogSubscriptionsOutcomeCallable ListLogSubscriptionsCallable(const Model::ListLogSubscriptionsRequest& request) const;

        /**
         * <p>Lists the active log subscriptions for the AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ListLogSubscriptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLogSubscriptionsAsync(const Model::ListLogSubscriptionsRequest& request, const ListLogSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all schema extensions applied to a Microsoft AD
         * Directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ListSchemaExtensions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchemaExtensionsOutcome ListSchemaExtensions(const Model::ListSchemaExtensionsRequest& request) const;

        /**
         * <p>Lists all schema extensions applied to a Microsoft AD
         * Directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ListSchemaExtensions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSchemaExtensionsOutcomeCallable ListSchemaExtensionsCallable(const Model::ListSchemaExtensionsRequest& request) const;

        /**
         * <p>Lists all schema extensions applied to a Microsoft AD
         * Directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ListSchemaExtensions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSchemaExtensionsAsync(const Model::ListSchemaExtensionsRequest& request, const ListSchemaExtensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags on a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all tags on a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all tags on a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a directory with an SNS topic. This establishes the directory as a
         * publisher to the specified SNS topic. You can then receive email or text (SMS)
         * messages when the status of your directory changes. You get notified if your
         * directory goes from an Active status to an Impaired or Inoperable status. You
         * also receive a notification when the directory returns to an Active
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RegisterEventTopic">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterEventTopicOutcome RegisterEventTopic(const Model::RegisterEventTopicRequest& request) const;

        /**
         * <p>Associates a directory with an SNS topic. This establishes the directory as a
         * publisher to the specified SNS topic. You can then receive email or text (SMS)
         * messages when the status of your directory changes. You get notified if your
         * directory goes from an Active status to an Impaired or Inoperable status. You
         * also receive a notification when the directory returns to an Active
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RegisterEventTopic">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterEventTopicOutcomeCallable RegisterEventTopicCallable(const Model::RegisterEventTopicRequest& request) const;

        /**
         * <p>Associates a directory with an SNS topic. This establishes the directory as a
         * publisher to the specified SNS topic. You can then receive email or text (SMS)
         * messages when the status of your directory changes. You get notified if your
         * directory goes from an Active status to an Impaired or Inoperable status. You
         * also receive a notification when the directory returns to an Active
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RegisterEventTopic">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterEventTopicAsync(const Model::RegisterEventTopicRequest& request, const RegisterEventTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rejects a directory sharing request that was sent from the directory owner
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RejectSharedDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectSharedDirectoryOutcome RejectSharedDirectory(const Model::RejectSharedDirectoryRequest& request) const;

        /**
         * <p>Rejects a directory sharing request that was sent from the directory owner
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RejectSharedDirectory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectSharedDirectoryOutcomeCallable RejectSharedDirectoryCallable(const Model::RejectSharedDirectoryRequest& request) const;

        /**
         * <p>Rejects a directory sharing request that was sent from the directory owner
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RejectSharedDirectory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectSharedDirectoryAsync(const Model::RejectSharedDirectoryRequest& request, const RejectSharedDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes IP address blocks from a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RemoveIpRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveIpRoutesOutcome RemoveIpRoutes(const Model::RemoveIpRoutesRequest& request) const;

        /**
         * <p>Removes IP address blocks from a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RemoveIpRoutes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveIpRoutesOutcomeCallable RemoveIpRoutesCallable(const Model::RemoveIpRoutesRequest& request) const;

        /**
         * <p>Removes IP address blocks from a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RemoveIpRoutes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveIpRoutesAsync(const Model::RemoveIpRoutesRequest& request, const RemoveIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes tags from a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes tags from a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsFromResourceAsync(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets the password for any user in your AWS Managed Microsoft AD or Simple
         * AD directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ResetUserPassword">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetUserPasswordOutcome ResetUserPassword(const Model::ResetUserPasswordRequest& request) const;

        /**
         * <p>Resets the password for any user in your AWS Managed Microsoft AD or Simple
         * AD directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ResetUserPassword">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetUserPasswordOutcomeCallable ResetUserPasswordCallable(const Model::ResetUserPasswordRequest& request) const;

        /**
         * <p>Resets the password for any user in your AWS Managed Microsoft AD or Simple
         * AD directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ResetUserPassword">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetUserPasswordAsync(const Model::ResetUserPasswordRequest& request, const ResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores a directory using an existing directory snapshot.</p> <p>When you
         * restore a directory from a snapshot, any changes made to the directory after the
         * snapshot date are overwritten.</p> <p>This action returns as soon as the restore
         * operation is initiated. You can monitor the progress of the restore operation by
         * calling the <a>DescribeDirectories</a> operation with the directory identifier.
         * When the <b>DirectoryDescription.Stage</b> value changes to <code>Active</code>,
         * the restore operation is complete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RestoreFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreFromSnapshotOutcome RestoreFromSnapshot(const Model::RestoreFromSnapshotRequest& request) const;

        /**
         * <p>Restores a directory using an existing directory snapshot.</p> <p>When you
         * restore a directory from a snapshot, any changes made to the directory after the
         * snapshot date are overwritten.</p> <p>This action returns as soon as the restore
         * operation is initiated. You can monitor the progress of the restore operation by
         * calling the <a>DescribeDirectories</a> operation with the directory identifier.
         * When the <b>DirectoryDescription.Stage</b> value changes to <code>Active</code>,
         * the restore operation is complete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RestoreFromSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreFromSnapshotOutcomeCallable RestoreFromSnapshotCallable(const Model::RestoreFromSnapshotRequest& request) const;

        /**
         * <p>Restores a directory using an existing directory snapshot.</p> <p>When you
         * restore a directory from a snapshot, any changes made to the directory after the
         * snapshot date are overwritten.</p> <p>This action returns as soon as the restore
         * operation is initiated. You can monitor the progress of the restore operation by
         * calling the <a>DescribeDirectories</a> operation with the directory identifier.
         * When the <b>DirectoryDescription.Stage</b> value changes to <code>Active</code>,
         * the restore operation is complete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RestoreFromSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreFromSnapshotAsync(const Model::RestoreFromSnapshotRequest& request, const RestoreFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Shares a specified directory (<code>DirectoryId</code>) in your AWS account
         * (directory owner) with another AWS account (directory consumer). With this
         * operation you can use your directory from any AWS account and from any Amazon
         * VPC within an AWS Region.</p> <p>When you share your AWS Managed Microsoft AD
         * directory, AWS Directory Service creates a shared directory in the directory
         * consumer account. This shared directory contains the metadata to provide access
         * to the directory within the directory owner account. The shared directory is
         * visible in all VPCs in the directory consumer account.</p> <p>The
         * <code>ShareMethod</code> parameter determines whether the specified directory
         * can be shared between AWS accounts inside the same AWS organization
         * (<code>ORGANIZATIONS</code>). It also determines whether you can share the
         * directory with any other AWS account either inside or outside of the
         * organization (<code>HANDSHAKE</code>).</p> <p>The <code>ShareNotes</code>
         * parameter is only used when <code>HANDSHAKE</code> is called, which sends a
         * directory sharing request to the directory consumer. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ShareDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::ShareDirectoryOutcome ShareDirectory(const Model::ShareDirectoryRequest& request) const;

        /**
         * <p>Shares a specified directory (<code>DirectoryId</code>) in your AWS account
         * (directory owner) with another AWS account (directory consumer). With this
         * operation you can use your directory from any AWS account and from any Amazon
         * VPC within an AWS Region.</p> <p>When you share your AWS Managed Microsoft AD
         * directory, AWS Directory Service creates a shared directory in the directory
         * consumer account. This shared directory contains the metadata to provide access
         * to the directory within the directory owner account. The shared directory is
         * visible in all VPCs in the directory consumer account.</p> <p>The
         * <code>ShareMethod</code> parameter determines whether the specified directory
         * can be shared between AWS accounts inside the same AWS organization
         * (<code>ORGANIZATIONS</code>). It also determines whether you can share the
         * directory with any other AWS account either inside or outside of the
         * organization (<code>HANDSHAKE</code>).</p> <p>The <code>ShareNotes</code>
         * parameter is only used when <code>HANDSHAKE</code> is called, which sends a
         * directory sharing request to the directory consumer. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ShareDirectory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ShareDirectoryOutcomeCallable ShareDirectoryCallable(const Model::ShareDirectoryRequest& request) const;

        /**
         * <p>Shares a specified directory (<code>DirectoryId</code>) in your AWS account
         * (directory owner) with another AWS account (directory consumer). With this
         * operation you can use your directory from any AWS account and from any Amazon
         * VPC within an AWS Region.</p> <p>When you share your AWS Managed Microsoft AD
         * directory, AWS Directory Service creates a shared directory in the directory
         * consumer account. This shared directory contains the metadata to provide access
         * to the directory within the directory owner account. The shared directory is
         * visible in all VPCs in the directory consumer account.</p> <p>The
         * <code>ShareMethod</code> parameter determines whether the specified directory
         * can be shared between AWS accounts inside the same AWS organization
         * (<code>ORGANIZATIONS</code>). It also determines whether you can share the
         * directory with any other AWS account either inside or outside of the
         * organization (<code>HANDSHAKE</code>).</p> <p>The <code>ShareNotes</code>
         * parameter is only used when <code>HANDSHAKE</code> is called, which sends a
         * directory sharing request to the directory consumer. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ShareDirectory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ShareDirectoryAsync(const Model::ShareDirectoryRequest& request, const ShareDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies a schema extension to a Microsoft AD directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/StartSchemaExtension">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSchemaExtensionOutcome StartSchemaExtension(const Model::StartSchemaExtensionRequest& request) const;

        /**
         * <p>Applies a schema extension to a Microsoft AD directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/StartSchemaExtension">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartSchemaExtensionOutcomeCallable StartSchemaExtensionCallable(const Model::StartSchemaExtensionRequest& request) const;

        /**
         * <p>Applies a schema extension to a Microsoft AD directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/StartSchemaExtension">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartSchemaExtensionAsync(const Model::StartSchemaExtensionRequest& request, const StartSchemaExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the directory sharing between the directory owner and consumer
         * accounts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UnshareDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::UnshareDirectoryOutcome UnshareDirectory(const Model::UnshareDirectoryRequest& request) const;

        /**
         * <p>Stops the directory sharing between the directory owner and consumer
         * accounts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UnshareDirectory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnshareDirectoryOutcomeCallable UnshareDirectoryCallable(const Model::UnshareDirectoryRequest& request) const;

        /**
         * <p>Stops the directory sharing between the directory owner and consumer
         * accounts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UnshareDirectory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnshareDirectoryAsync(const Model::UnshareDirectoryRequest& request, const UnshareDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a conditional forwarder that has been set up for your AWS
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateConditionalForwarder">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConditionalForwarderOutcome UpdateConditionalForwarder(const Model::UpdateConditionalForwarderRequest& request) const;

        /**
         * <p>Updates a conditional forwarder that has been set up for your AWS
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateConditionalForwarder">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConditionalForwarderOutcomeCallable UpdateConditionalForwarderCallable(const Model::UpdateConditionalForwarderRequest& request) const;

        /**
         * <p>Updates a conditional forwarder that has been set up for your AWS
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateConditionalForwarder">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConditionalForwarderAsync(const Model::UpdateConditionalForwarderRequest& request, const UpdateConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or removes domain controllers to or from the directory. Based on the
         * difference between current value and new value (provided through this API call),
         * domain controllers will be added or removed. It may take up to 45 minutes for
         * any new domain controllers to become fully active once the requested number of
         * domain controllers is updated. During this time, you cannot make another update
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateNumberOfDomainControllers">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNumberOfDomainControllersOutcome UpdateNumberOfDomainControllers(const Model::UpdateNumberOfDomainControllersRequest& request) const;

        /**
         * <p>Adds or removes domain controllers to or from the directory. Based on the
         * difference between current value and new value (provided through this API call),
         * domain controllers will be added or removed. It may take up to 45 minutes for
         * any new domain controllers to become fully active once the requested number of
         * domain controllers is updated. During this time, you cannot make another update
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateNumberOfDomainControllers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNumberOfDomainControllersOutcomeCallable UpdateNumberOfDomainControllersCallable(const Model::UpdateNumberOfDomainControllersRequest& request) const;

        /**
         * <p>Adds or removes domain controllers to or from the directory. Based on the
         * difference between current value and new value (provided through this API call),
         * domain controllers will be added or removed. It may take up to 45 minutes for
         * any new domain controllers to become fully active once the requested number of
         * domain controllers is updated. During this time, you cannot make another update
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateNumberOfDomainControllers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNumberOfDomainControllersAsync(const Model::UpdateNumberOfDomainControllersRequest& request, const UpdateNumberOfDomainControllersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the Remote Authentication Dial In User Service (RADIUS) server
         * information for an AD Connector or Microsoft AD directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateRadius">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateRadiusOutcome UpdateRadius(const Model::UpdateRadiusRequest& request) const;

        /**
         * <p>Updates the Remote Authentication Dial In User Service (RADIUS) server
         * information for an AD Connector or Microsoft AD directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateRadius">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRadiusOutcomeCallable UpdateRadiusCallable(const Model::UpdateRadiusRequest& request) const;

        /**
         * <p>Updates the Remote Authentication Dial In User Service (RADIUS) server
         * information for an AD Connector or Microsoft AD directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateRadius">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRadiusAsync(const Model::UpdateRadiusRequest& request, const UpdateRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the trust that has been set up between your AWS Managed Microsoft AD
         * directory and an on-premises Active Directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateTrust">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateTrustOutcome UpdateTrust(const Model::UpdateTrustRequest& request) const;

        /**
         * <p>Updates the trust that has been set up between your AWS Managed Microsoft AD
         * directory and an on-premises Active Directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateTrust">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTrustOutcomeCallable UpdateTrustCallable(const Model::UpdateTrustRequest& request) const;

        /**
         * <p>Updates the trust that has been set up between your AWS Managed Microsoft AD
         * directory and an on-premises Active Directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateTrust">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTrustAsync(const Model::UpdateTrustRequest& request, const UpdateTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>AWS Directory Service for Microsoft Active Directory allows you to configure
         * and verify trust relationships.</p> <p>This action verifies a trust relationship
         * between your AWS Managed Microsoft AD directory and an external
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/VerifyTrust">AWS API
         * Reference</a></p>
         */
        virtual Model::VerifyTrustOutcome VerifyTrust(const Model::VerifyTrustRequest& request) const;

        /**
         * <p>AWS Directory Service for Microsoft Active Directory allows you to configure
         * and verify trust relationships.</p> <p>This action verifies a trust relationship
         * between your AWS Managed Microsoft AD directory and an external
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/VerifyTrust">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::VerifyTrustOutcomeCallable VerifyTrustCallable(const Model::VerifyTrustRequest& request) const;

        /**
         * <p>AWS Directory Service for Microsoft Active Directory allows you to configure
         * and verify trust relationships.</p> <p>This action verifies a trust relationship
         * between your AWS Managed Microsoft AD directory and an external
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/VerifyTrust">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void VerifyTrustAsync(const Model::VerifyTrustRequest& request, const VerifyTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AcceptSharedDirectoryAsyncHelper(const Model::AcceptSharedDirectoryRequest& request, const AcceptSharedDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddIpRoutesAsyncHelper(const Model::AddIpRoutesRequest& request, const AddIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddTagsToResourceAsyncHelper(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelSchemaExtensionAsyncHelper(const Model::CancelSchemaExtensionRequest& request, const CancelSchemaExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConnectDirectoryAsyncHelper(const Model::ConnectDirectoryRequest& request, const ConnectDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAliasAsyncHelper(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateComputerAsyncHelper(const Model::CreateComputerRequest& request, const CreateComputerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConditionalForwarderAsyncHelper(const Model::CreateConditionalForwarderRequest& request, const CreateConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDirectoryAsyncHelper(const Model::CreateDirectoryRequest& request, const CreateDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLogSubscriptionAsyncHelper(const Model::CreateLogSubscriptionRequest& request, const CreateLogSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMicrosoftADAsyncHelper(const Model::CreateMicrosoftADRequest& request, const CreateMicrosoftADResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSnapshotAsyncHelper(const Model::CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTrustAsyncHelper(const Model::CreateTrustRequest& request, const CreateTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConditionalForwarderAsyncHelper(const Model::DeleteConditionalForwarderRequest& request, const DeleteConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDirectoryAsyncHelper(const Model::DeleteDirectoryRequest& request, const DeleteDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLogSubscriptionAsyncHelper(const Model::DeleteLogSubscriptionRequest& request, const DeleteLogSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSnapshotAsyncHelper(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTrustAsyncHelper(const Model::DeleteTrustRequest& request, const DeleteTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterEventTopicAsyncHelper(const Model::DeregisterEventTopicRequest& request, const DeregisterEventTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConditionalForwardersAsyncHelper(const Model::DescribeConditionalForwardersRequest& request, const DescribeConditionalForwardersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDirectoriesAsyncHelper(const Model::DescribeDirectoriesRequest& request, const DescribeDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDomainControllersAsyncHelper(const Model::DescribeDomainControllersRequest& request, const DescribeDomainControllersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventTopicsAsyncHelper(const Model::DescribeEventTopicsRequest& request, const DescribeEventTopicsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSharedDirectoriesAsyncHelper(const Model::DescribeSharedDirectoriesRequest& request, const DescribeSharedDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSnapshotsAsyncHelper(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTrustsAsyncHelper(const Model::DescribeTrustsRequest& request, const DescribeTrustsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableRadiusAsyncHelper(const Model::DisableRadiusRequest& request, const DisableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableSsoAsyncHelper(const Model::DisableSsoRequest& request, const DisableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableRadiusAsyncHelper(const Model::EnableRadiusRequest& request, const EnableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableSsoAsyncHelper(const Model::EnableSsoRequest& request, const EnableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDirectoryLimitsAsyncHelper(const Model::GetDirectoryLimitsRequest& request, const GetDirectoryLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSnapshotLimitsAsyncHelper(const Model::GetSnapshotLimitsRequest& request, const GetSnapshotLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIpRoutesAsyncHelper(const Model::ListIpRoutesRequest& request, const ListIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLogSubscriptionsAsyncHelper(const Model::ListLogSubscriptionsRequest& request, const ListLogSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSchemaExtensionsAsyncHelper(const Model::ListSchemaExtensionsRequest& request, const ListSchemaExtensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterEventTopicAsyncHelper(const Model::RegisterEventTopicRequest& request, const RegisterEventTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RejectSharedDirectoryAsyncHelper(const Model::RejectSharedDirectoryRequest& request, const RejectSharedDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveIpRoutesAsyncHelper(const Model::RemoveIpRoutesRequest& request, const RemoveIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsFromResourceAsyncHelper(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetUserPasswordAsyncHelper(const Model::ResetUserPasswordRequest& request, const ResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreFromSnapshotAsyncHelper(const Model::RestoreFromSnapshotRequest& request, const RestoreFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ShareDirectoryAsyncHelper(const Model::ShareDirectoryRequest& request, const ShareDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartSchemaExtensionAsyncHelper(const Model::StartSchemaExtensionRequest& request, const StartSchemaExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UnshareDirectoryAsyncHelper(const Model::UnshareDirectoryRequest& request, const UnshareDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateConditionalForwarderAsyncHelper(const Model::UpdateConditionalForwarderRequest& request, const UpdateConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateNumberOfDomainControllersAsyncHelper(const Model::UpdateNumberOfDomainControllersRequest& request, const UpdateNumberOfDomainControllersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRadiusAsyncHelper(const Model::UpdateRadiusRequest& request, const UpdateRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTrustAsyncHelper(const Model::UpdateTrustRequest& request, const UpdateTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void VerifyTrustAsyncHelper(const Model::VerifyTrustRequest& request, const VerifyTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace DirectoryService
} // namespace Aws
