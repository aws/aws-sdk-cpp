/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/connect/model/AssociateInstanceStorageConfigResult.h>
#include <aws/connect/model/AssociateSecurityKeyResult.h>
#include <aws/connect/model/CreateContactFlowResult.h>
#include <aws/connect/model/CreateInstanceResult.h>
#include <aws/connect/model/CreateRoutingProfileResult.h>
#include <aws/connect/model/CreateUserResult.h>
#include <aws/connect/model/CreateUserHierarchyGroupResult.h>
#include <aws/connect/model/DescribeContactFlowResult.h>
#include <aws/connect/model/DescribeInstanceResult.h>
#include <aws/connect/model/DescribeInstanceAttributeResult.h>
#include <aws/connect/model/DescribeInstanceStorageConfigResult.h>
#include <aws/connect/model/DescribeRoutingProfileResult.h>
#include <aws/connect/model/DescribeUserResult.h>
#include <aws/connect/model/DescribeUserHierarchyGroupResult.h>
#include <aws/connect/model/DescribeUserHierarchyStructureResult.h>
#include <aws/connect/model/GetContactAttributesResult.h>
#include <aws/connect/model/GetCurrentMetricDataResult.h>
#include <aws/connect/model/GetFederationTokenResult.h>
#include <aws/connect/model/GetMetricDataResult.h>
#include <aws/connect/model/ListApprovedOriginsResult.h>
#include <aws/connect/model/ListContactFlowsResult.h>
#include <aws/connect/model/ListHoursOfOperationsResult.h>
#include <aws/connect/model/ListInstanceAttributesResult.h>
#include <aws/connect/model/ListInstanceStorageConfigsResult.h>
#include <aws/connect/model/ListInstancesResult.h>
#include <aws/connect/model/ListLambdaFunctionsResult.h>
#include <aws/connect/model/ListLexBotsResult.h>
#include <aws/connect/model/ListPhoneNumbersResult.h>
#include <aws/connect/model/ListPromptsResult.h>
#include <aws/connect/model/ListQueuesResult.h>
#include <aws/connect/model/ListRoutingProfileQueuesResult.h>
#include <aws/connect/model/ListRoutingProfilesResult.h>
#include <aws/connect/model/ListSecurityKeysResult.h>
#include <aws/connect/model/ListSecurityProfilesResult.h>
#include <aws/connect/model/ListTagsForResourceResult.h>
#include <aws/connect/model/ListUserHierarchyGroupsResult.h>
#include <aws/connect/model/ListUsersResult.h>
#include <aws/connect/model/ResumeContactRecordingResult.h>
#include <aws/connect/model/StartChatContactResult.h>
#include <aws/connect/model/StartContactRecordingResult.h>
#include <aws/connect/model/StartOutboundVoiceContactResult.h>
#include <aws/connect/model/StopContactResult.h>
#include <aws/connect/model/StopContactRecordingResult.h>
#include <aws/connect/model/SuspendContactRecordingResult.h>
#include <aws/connect/model/UpdateContactAttributesResult.h>
#include <aws/core/NoResult.h>
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

namespace Connect
{

namespace Model
{
        class AssociateApprovedOriginRequest;
        class AssociateInstanceStorageConfigRequest;
        class AssociateLambdaFunctionRequest;
        class AssociateLexBotRequest;
        class AssociateRoutingProfileQueuesRequest;
        class AssociateSecurityKeyRequest;
        class CreateContactFlowRequest;
        class CreateInstanceRequest;
        class CreateRoutingProfileRequest;
        class CreateUserRequest;
        class CreateUserHierarchyGroupRequest;
        class DeleteInstanceRequest;
        class DeleteUserRequest;
        class DeleteUserHierarchyGroupRequest;
        class DescribeContactFlowRequest;
        class DescribeInstanceRequest;
        class DescribeInstanceAttributeRequest;
        class DescribeInstanceStorageConfigRequest;
        class DescribeRoutingProfileRequest;
        class DescribeUserRequest;
        class DescribeUserHierarchyGroupRequest;
        class DescribeUserHierarchyStructureRequest;
        class DisassociateApprovedOriginRequest;
        class DisassociateInstanceStorageConfigRequest;
        class DisassociateLambdaFunctionRequest;
        class DisassociateLexBotRequest;
        class DisassociateRoutingProfileQueuesRequest;
        class DisassociateSecurityKeyRequest;
        class GetContactAttributesRequest;
        class GetCurrentMetricDataRequest;
        class GetFederationTokenRequest;
        class GetMetricDataRequest;
        class ListApprovedOriginsRequest;
        class ListContactFlowsRequest;
        class ListHoursOfOperationsRequest;
        class ListInstanceAttributesRequest;
        class ListInstanceStorageConfigsRequest;
        class ListInstancesRequest;
        class ListLambdaFunctionsRequest;
        class ListLexBotsRequest;
        class ListPhoneNumbersRequest;
        class ListPromptsRequest;
        class ListQueuesRequest;
        class ListRoutingProfileQueuesRequest;
        class ListRoutingProfilesRequest;
        class ListSecurityKeysRequest;
        class ListSecurityProfilesRequest;
        class ListTagsForResourceRequest;
        class ListUserHierarchyGroupsRequest;
        class ListUsersRequest;
        class ResumeContactRecordingRequest;
        class StartChatContactRequest;
        class StartContactRecordingRequest;
        class StartOutboundVoiceContactRequest;
        class StopContactRequest;
        class StopContactRecordingRequest;
        class SuspendContactRecordingRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateContactAttributesRequest;
        class UpdateContactFlowContentRequest;
        class UpdateContactFlowNameRequest;
        class UpdateInstanceAttributeRequest;
        class UpdateInstanceStorageConfigRequest;
        class UpdateRoutingProfileConcurrencyRequest;
        class UpdateRoutingProfileDefaultOutboundQueueRequest;
        class UpdateRoutingProfileNameRequest;
        class UpdateRoutingProfileQueuesRequest;
        class UpdateUserHierarchyRequest;
        class UpdateUserHierarchyGroupNameRequest;
        class UpdateUserHierarchyStructureRequest;
        class UpdateUserIdentityInfoRequest;
        class UpdateUserPhoneConfigRequest;
        class UpdateUserRoutingProfileRequest;
        class UpdateUserSecurityProfilesRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> AssociateApprovedOriginOutcome;
        typedef Aws::Utils::Outcome<AssociateInstanceStorageConfigResult, ConnectError> AssociateInstanceStorageConfigOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> AssociateLambdaFunctionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> AssociateLexBotOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> AssociateRoutingProfileQueuesOutcome;
        typedef Aws::Utils::Outcome<AssociateSecurityKeyResult, ConnectError> AssociateSecurityKeyOutcome;
        typedef Aws::Utils::Outcome<CreateContactFlowResult, ConnectError> CreateContactFlowOutcome;
        typedef Aws::Utils::Outcome<CreateInstanceResult, ConnectError> CreateInstanceOutcome;
        typedef Aws::Utils::Outcome<CreateRoutingProfileResult, ConnectError> CreateRoutingProfileOutcome;
        typedef Aws::Utils::Outcome<CreateUserResult, ConnectError> CreateUserOutcome;
        typedef Aws::Utils::Outcome<CreateUserHierarchyGroupResult, ConnectError> CreateUserHierarchyGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteUserOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DeleteUserHierarchyGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeContactFlowResult, ConnectError> DescribeContactFlowOutcome;
        typedef Aws::Utils::Outcome<DescribeInstanceResult, ConnectError> DescribeInstanceOutcome;
        typedef Aws::Utils::Outcome<DescribeInstanceAttributeResult, ConnectError> DescribeInstanceAttributeOutcome;
        typedef Aws::Utils::Outcome<DescribeInstanceStorageConfigResult, ConnectError> DescribeInstanceStorageConfigOutcome;
        typedef Aws::Utils::Outcome<DescribeRoutingProfileResult, ConnectError> DescribeRoutingProfileOutcome;
        typedef Aws::Utils::Outcome<DescribeUserResult, ConnectError> DescribeUserOutcome;
        typedef Aws::Utils::Outcome<DescribeUserHierarchyGroupResult, ConnectError> DescribeUserHierarchyGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeUserHierarchyStructureResult, ConnectError> DescribeUserHierarchyStructureOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateApprovedOriginOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateInstanceStorageConfigOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateLambdaFunctionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateLexBotOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateRoutingProfileQueuesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> DisassociateSecurityKeyOutcome;
        typedef Aws::Utils::Outcome<GetContactAttributesResult, ConnectError> GetContactAttributesOutcome;
        typedef Aws::Utils::Outcome<GetCurrentMetricDataResult, ConnectError> GetCurrentMetricDataOutcome;
        typedef Aws::Utils::Outcome<GetFederationTokenResult, ConnectError> GetFederationTokenOutcome;
        typedef Aws::Utils::Outcome<GetMetricDataResult, ConnectError> GetMetricDataOutcome;
        typedef Aws::Utils::Outcome<ListApprovedOriginsResult, ConnectError> ListApprovedOriginsOutcome;
        typedef Aws::Utils::Outcome<ListContactFlowsResult, ConnectError> ListContactFlowsOutcome;
        typedef Aws::Utils::Outcome<ListHoursOfOperationsResult, ConnectError> ListHoursOfOperationsOutcome;
        typedef Aws::Utils::Outcome<ListInstanceAttributesResult, ConnectError> ListInstanceAttributesOutcome;
        typedef Aws::Utils::Outcome<ListInstanceStorageConfigsResult, ConnectError> ListInstanceStorageConfigsOutcome;
        typedef Aws::Utils::Outcome<ListInstancesResult, ConnectError> ListInstancesOutcome;
        typedef Aws::Utils::Outcome<ListLambdaFunctionsResult, ConnectError> ListLambdaFunctionsOutcome;
        typedef Aws::Utils::Outcome<ListLexBotsResult, ConnectError> ListLexBotsOutcome;
        typedef Aws::Utils::Outcome<ListPhoneNumbersResult, ConnectError> ListPhoneNumbersOutcome;
        typedef Aws::Utils::Outcome<ListPromptsResult, ConnectError> ListPromptsOutcome;
        typedef Aws::Utils::Outcome<ListQueuesResult, ConnectError> ListQueuesOutcome;
        typedef Aws::Utils::Outcome<ListRoutingProfileQueuesResult, ConnectError> ListRoutingProfileQueuesOutcome;
        typedef Aws::Utils::Outcome<ListRoutingProfilesResult, ConnectError> ListRoutingProfilesOutcome;
        typedef Aws::Utils::Outcome<ListSecurityKeysResult, ConnectError> ListSecurityKeysOutcome;
        typedef Aws::Utils::Outcome<ListSecurityProfilesResult, ConnectError> ListSecurityProfilesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, ConnectError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListUserHierarchyGroupsResult, ConnectError> ListUserHierarchyGroupsOutcome;
        typedef Aws::Utils::Outcome<ListUsersResult, ConnectError> ListUsersOutcome;
        typedef Aws::Utils::Outcome<ResumeContactRecordingResult, ConnectError> ResumeContactRecordingOutcome;
        typedef Aws::Utils::Outcome<StartChatContactResult, ConnectError> StartChatContactOutcome;
        typedef Aws::Utils::Outcome<StartContactRecordingResult, ConnectError> StartContactRecordingOutcome;
        typedef Aws::Utils::Outcome<StartOutboundVoiceContactResult, ConnectError> StartOutboundVoiceContactOutcome;
        typedef Aws::Utils::Outcome<StopContactResult, ConnectError> StopContactOutcome;
        typedef Aws::Utils::Outcome<StopContactRecordingResult, ConnectError> StopContactRecordingOutcome;
        typedef Aws::Utils::Outcome<SuspendContactRecordingResult, ConnectError> SuspendContactRecordingOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateContactAttributesResult, ConnectError> UpdateContactAttributesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateContactFlowContentOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateContactFlowNameOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateInstanceAttributeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateInstanceStorageConfigOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateRoutingProfileConcurrencyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateRoutingProfileDefaultOutboundQueueOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateRoutingProfileNameOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateRoutingProfileQueuesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserHierarchyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserHierarchyGroupNameOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserHierarchyStructureOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserIdentityInfoOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserPhoneConfigOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserRoutingProfileOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectError> UpdateUserSecurityProfilesOutcome;

        typedef std::future<AssociateApprovedOriginOutcome> AssociateApprovedOriginOutcomeCallable;
        typedef std::future<AssociateInstanceStorageConfigOutcome> AssociateInstanceStorageConfigOutcomeCallable;
        typedef std::future<AssociateLambdaFunctionOutcome> AssociateLambdaFunctionOutcomeCallable;
        typedef std::future<AssociateLexBotOutcome> AssociateLexBotOutcomeCallable;
        typedef std::future<AssociateRoutingProfileQueuesOutcome> AssociateRoutingProfileQueuesOutcomeCallable;
        typedef std::future<AssociateSecurityKeyOutcome> AssociateSecurityKeyOutcomeCallable;
        typedef std::future<CreateContactFlowOutcome> CreateContactFlowOutcomeCallable;
        typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
        typedef std::future<CreateRoutingProfileOutcome> CreateRoutingProfileOutcomeCallable;
        typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
        typedef std::future<CreateUserHierarchyGroupOutcome> CreateUserHierarchyGroupOutcomeCallable;
        typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
        typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
        typedef std::future<DeleteUserHierarchyGroupOutcome> DeleteUserHierarchyGroupOutcomeCallable;
        typedef std::future<DescribeContactFlowOutcome> DescribeContactFlowOutcomeCallable;
        typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
        typedef std::future<DescribeInstanceAttributeOutcome> DescribeInstanceAttributeOutcomeCallable;
        typedef std::future<DescribeInstanceStorageConfigOutcome> DescribeInstanceStorageConfigOutcomeCallable;
        typedef std::future<DescribeRoutingProfileOutcome> DescribeRoutingProfileOutcomeCallable;
        typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
        typedef std::future<DescribeUserHierarchyGroupOutcome> DescribeUserHierarchyGroupOutcomeCallable;
        typedef std::future<DescribeUserHierarchyStructureOutcome> DescribeUserHierarchyStructureOutcomeCallable;
        typedef std::future<DisassociateApprovedOriginOutcome> DisassociateApprovedOriginOutcomeCallable;
        typedef std::future<DisassociateInstanceStorageConfigOutcome> DisassociateInstanceStorageConfigOutcomeCallable;
        typedef std::future<DisassociateLambdaFunctionOutcome> DisassociateLambdaFunctionOutcomeCallable;
        typedef std::future<DisassociateLexBotOutcome> DisassociateLexBotOutcomeCallable;
        typedef std::future<DisassociateRoutingProfileQueuesOutcome> DisassociateRoutingProfileQueuesOutcomeCallable;
        typedef std::future<DisassociateSecurityKeyOutcome> DisassociateSecurityKeyOutcomeCallable;
        typedef std::future<GetContactAttributesOutcome> GetContactAttributesOutcomeCallable;
        typedef std::future<GetCurrentMetricDataOutcome> GetCurrentMetricDataOutcomeCallable;
        typedef std::future<GetFederationTokenOutcome> GetFederationTokenOutcomeCallable;
        typedef std::future<GetMetricDataOutcome> GetMetricDataOutcomeCallable;
        typedef std::future<ListApprovedOriginsOutcome> ListApprovedOriginsOutcomeCallable;
        typedef std::future<ListContactFlowsOutcome> ListContactFlowsOutcomeCallable;
        typedef std::future<ListHoursOfOperationsOutcome> ListHoursOfOperationsOutcomeCallable;
        typedef std::future<ListInstanceAttributesOutcome> ListInstanceAttributesOutcomeCallable;
        typedef std::future<ListInstanceStorageConfigsOutcome> ListInstanceStorageConfigsOutcomeCallable;
        typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
        typedef std::future<ListLambdaFunctionsOutcome> ListLambdaFunctionsOutcomeCallable;
        typedef std::future<ListLexBotsOutcome> ListLexBotsOutcomeCallable;
        typedef std::future<ListPhoneNumbersOutcome> ListPhoneNumbersOutcomeCallable;
        typedef std::future<ListPromptsOutcome> ListPromptsOutcomeCallable;
        typedef std::future<ListQueuesOutcome> ListQueuesOutcomeCallable;
        typedef std::future<ListRoutingProfileQueuesOutcome> ListRoutingProfileQueuesOutcomeCallable;
        typedef std::future<ListRoutingProfilesOutcome> ListRoutingProfilesOutcomeCallable;
        typedef std::future<ListSecurityKeysOutcome> ListSecurityKeysOutcomeCallable;
        typedef std::future<ListSecurityProfilesOutcome> ListSecurityProfilesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListUserHierarchyGroupsOutcome> ListUserHierarchyGroupsOutcomeCallable;
        typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
        typedef std::future<ResumeContactRecordingOutcome> ResumeContactRecordingOutcomeCallable;
        typedef std::future<StartChatContactOutcome> StartChatContactOutcomeCallable;
        typedef std::future<StartContactRecordingOutcome> StartContactRecordingOutcomeCallable;
        typedef std::future<StartOutboundVoiceContactOutcome> StartOutboundVoiceContactOutcomeCallable;
        typedef std::future<StopContactOutcome> StopContactOutcomeCallable;
        typedef std::future<StopContactRecordingOutcome> StopContactRecordingOutcomeCallable;
        typedef std::future<SuspendContactRecordingOutcome> SuspendContactRecordingOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateContactAttributesOutcome> UpdateContactAttributesOutcomeCallable;
        typedef std::future<UpdateContactFlowContentOutcome> UpdateContactFlowContentOutcomeCallable;
        typedef std::future<UpdateContactFlowNameOutcome> UpdateContactFlowNameOutcomeCallable;
        typedef std::future<UpdateInstanceAttributeOutcome> UpdateInstanceAttributeOutcomeCallable;
        typedef std::future<UpdateInstanceStorageConfigOutcome> UpdateInstanceStorageConfigOutcomeCallable;
        typedef std::future<UpdateRoutingProfileConcurrencyOutcome> UpdateRoutingProfileConcurrencyOutcomeCallable;
        typedef std::future<UpdateRoutingProfileDefaultOutboundQueueOutcome> UpdateRoutingProfileDefaultOutboundQueueOutcomeCallable;
        typedef std::future<UpdateRoutingProfileNameOutcome> UpdateRoutingProfileNameOutcomeCallable;
        typedef std::future<UpdateRoutingProfileQueuesOutcome> UpdateRoutingProfileQueuesOutcomeCallable;
        typedef std::future<UpdateUserHierarchyOutcome> UpdateUserHierarchyOutcomeCallable;
        typedef std::future<UpdateUserHierarchyGroupNameOutcome> UpdateUserHierarchyGroupNameOutcomeCallable;
        typedef std::future<UpdateUserHierarchyStructureOutcome> UpdateUserHierarchyStructureOutcomeCallable;
        typedef std::future<UpdateUserIdentityInfoOutcome> UpdateUserIdentityInfoOutcomeCallable;
        typedef std::future<UpdateUserPhoneConfigOutcome> UpdateUserPhoneConfigOutcomeCallable;
        typedef std::future<UpdateUserRoutingProfileOutcome> UpdateUserRoutingProfileOutcomeCallable;
        typedef std::future<UpdateUserSecurityProfilesOutcome> UpdateUserSecurityProfilesOutcomeCallable;
} // namespace Model

  class ConnectClient;

    typedef std::function<void(const ConnectClient*, const Model::AssociateApprovedOriginRequest&, const Model::AssociateApprovedOriginOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateApprovedOriginResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateInstanceStorageConfigRequest&, const Model::AssociateInstanceStorageConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateInstanceStorageConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateLambdaFunctionRequest&, const Model::AssociateLambdaFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateLambdaFunctionResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateLexBotRequest&, const Model::AssociateLexBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateLexBotResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateRoutingProfileQueuesRequest&, const Model::AssociateRoutingProfileQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateRoutingProfileQueuesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::AssociateSecurityKeyRequest&, const Model::AssociateSecurityKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateSecurityKeyResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateContactFlowRequest&, const Model::CreateContactFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContactFlowResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateInstanceRequest&, const Model::CreateInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInstanceResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateRoutingProfileRequest&, const Model::CreateRoutingProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRoutingProfileResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::CreateUserHierarchyGroupRequest&, const Model::CreateUserHierarchyGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserHierarchyGroupResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteInstanceRequest&, const Model::DeleteInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInstanceResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteUserHierarchyGroupRequest&, const Model::DeleteUserHierarchyGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserHierarchyGroupResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeContactFlowRequest&, const Model::DescribeContactFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeContactFlowResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeInstanceRequest&, const Model::DescribeInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeInstanceAttributeRequest&, const Model::DescribeInstanceAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceAttributeResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeInstanceStorageConfigRequest&, const Model::DescribeInstanceStorageConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceStorageConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeRoutingProfileRequest&, const Model::DescribeRoutingProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRoutingProfileResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeUserRequest&, const Model::DescribeUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeUserHierarchyGroupRequest&, const Model::DescribeUserHierarchyGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserHierarchyGroupResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeUserHierarchyStructureRequest&, const Model::DescribeUserHierarchyStructureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserHierarchyStructureResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateApprovedOriginRequest&, const Model::DisassociateApprovedOriginOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateApprovedOriginResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateInstanceStorageConfigRequest&, const Model::DisassociateInstanceStorageConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateInstanceStorageConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateLambdaFunctionRequest&, const Model::DisassociateLambdaFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateLambdaFunctionResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateLexBotRequest&, const Model::DisassociateLexBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateLexBotResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateRoutingProfileQueuesRequest&, const Model::DisassociateRoutingProfileQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateRoutingProfileQueuesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DisassociateSecurityKeyRequest&, const Model::DisassociateSecurityKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateSecurityKeyResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetContactAttributesRequest&, const Model::GetContactAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContactAttributesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetCurrentMetricDataRequest&, const Model::GetCurrentMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCurrentMetricDataResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetFederationTokenRequest&, const Model::GetFederationTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFederationTokenResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetMetricDataRequest&, const Model::GetMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMetricDataResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListApprovedOriginsRequest&, const Model::ListApprovedOriginsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApprovedOriginsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListContactFlowsRequest&, const Model::ListContactFlowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContactFlowsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListHoursOfOperationsRequest&, const Model::ListHoursOfOperationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHoursOfOperationsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListInstanceAttributesRequest&, const Model::ListInstanceAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstanceAttributesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListInstanceStorageConfigsRequest&, const Model::ListInstanceStorageConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstanceStorageConfigsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListInstancesRequest&, const Model::ListInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstancesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListLambdaFunctionsRequest&, const Model::ListLambdaFunctionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLambdaFunctionsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListLexBotsRequest&, const Model::ListLexBotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLexBotsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListPhoneNumbersRequest&, const Model::ListPhoneNumbersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPhoneNumbersResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListPromptsRequest&, const Model::ListPromptsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPromptsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListQueuesRequest&, const Model::ListQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQueuesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListRoutingProfileQueuesRequest&, const Model::ListRoutingProfileQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoutingProfileQueuesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListRoutingProfilesRequest&, const Model::ListRoutingProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoutingProfilesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListSecurityKeysRequest&, const Model::ListSecurityKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecurityKeysResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListSecurityProfilesRequest&, const Model::ListSecurityProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecurityProfilesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListUserHierarchyGroupsRequest&, const Model::ListUserHierarchyGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserHierarchyGroupsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ResumeContactRecordingRequest&, const Model::ResumeContactRecordingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResumeContactRecordingResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StartChatContactRequest&, const Model::StartChatContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartChatContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StartContactRecordingRequest&, const Model::StartContactRecordingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartContactRecordingResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StartOutboundVoiceContactRequest&, const Model::StartOutboundVoiceContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartOutboundVoiceContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StopContactRequest&, const Model::StopContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StopContactRecordingRequest&, const Model::StopContactRecordingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopContactRecordingResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::SuspendContactRecordingRequest&, const Model::SuspendContactRecordingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SuspendContactRecordingResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateContactAttributesRequest&, const Model::UpdateContactAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactAttributesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateContactFlowContentRequest&, const Model::UpdateContactFlowContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactFlowContentResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateContactFlowNameRequest&, const Model::UpdateContactFlowNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactFlowNameResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateInstanceAttributeRequest&, const Model::UpdateInstanceAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInstanceAttributeResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateInstanceStorageConfigRequest&, const Model::UpdateInstanceStorageConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInstanceStorageConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateRoutingProfileConcurrencyRequest&, const Model::UpdateRoutingProfileConcurrencyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoutingProfileConcurrencyResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateRoutingProfileDefaultOutboundQueueRequest&, const Model::UpdateRoutingProfileDefaultOutboundQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoutingProfileDefaultOutboundQueueResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateRoutingProfileNameRequest&, const Model::UpdateRoutingProfileNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoutingProfileNameResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateRoutingProfileQueuesRequest&, const Model::UpdateRoutingProfileQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoutingProfileQueuesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserHierarchyRequest&, const Model::UpdateUserHierarchyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserHierarchyResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserHierarchyGroupNameRequest&, const Model::UpdateUserHierarchyGroupNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserHierarchyGroupNameResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserHierarchyStructureRequest&, const Model::UpdateUserHierarchyStructureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserHierarchyStructureResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserIdentityInfoRequest&, const Model::UpdateUserIdentityInfoOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserIdentityInfoResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserPhoneConfigRequest&, const Model::UpdateUserPhoneConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserPhoneConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserRoutingProfileRequest&, const Model::UpdateUserRoutingProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserRoutingProfileResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserSecurityProfilesRequest&, const Model::UpdateUserSecurityProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserSecurityProfilesResponseReceivedHandler;

  /**
   * <p>Amazon Connect is a cloud-based contact center solution that makes it easy to
   * set up and manage a customer contact center and provide reliable customer
   * engagement at any scale.</p> <p>Amazon Connect provides rich metrics and
   * real-time reporting that allow you to optimize contact routing. You can also
   * resolve customer issues more efficiently by putting customers in touch with the
   * right agents.</p> <p>There are limits to the number of Amazon Connect resources
   * that you can create and limits to the number of requests that you can make per
   * second. For more information, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon
   * Connect Service Quotas</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
   * <p>To connect programmatically to an AWS service, you use an endpoint. For a
   * list of Amazon Connect endpoints, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon
   * Connect Endpoints</a>.</p>  <p>Working with contact flows? Check out the
   * <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
   * Connect Flow language</a>.</p> 
   */
  class AWS_CONNECT_API ConnectClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ConnectClient();


        /**
         * <p>Associates an approved origin to an Amazon Connect instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateApprovedOrigin">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateApprovedOriginOutcome AssociateApprovedOrigin(const Model::AssociateApprovedOriginRequest& request) const;

        /**
         * <p>Associates an approved origin to an Amazon Connect instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateApprovedOrigin">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateApprovedOriginOutcomeCallable AssociateApprovedOriginCallable(const Model::AssociateApprovedOriginRequest& request) const;

        /**
         * <p>Associates an approved origin to an Amazon Connect instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateApprovedOrigin">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateApprovedOriginAsync(const Model::AssociateApprovedOriginRequest& request, const AssociateApprovedOriginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a storage resource type for the first time. You can only associate
         * one type of storage configuration in a single call. This means, for example,
         * that you can't define an instance with multiple S3 buckets for storing chat
         * transcripts.</p> <p>This API does not create a resource that doesn't exist. It
         * only associates it to the instance. Ensure that the resource being specified in
         * the storage configuration, like an Amazon S3 bucket, exists when being used for
         * association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateInstanceStorageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateInstanceStorageConfigOutcome AssociateInstanceStorageConfig(const Model::AssociateInstanceStorageConfigRequest& request) const;

        /**
         * <p>Associates a storage resource type for the first time. You can only associate
         * one type of storage configuration in a single call. This means, for example,
         * that you can't define an instance with multiple S3 buckets for storing chat
         * transcripts.</p> <p>This API does not create a resource that doesn't exist. It
         * only associates it to the instance. Ensure that the resource being specified in
         * the storage configuration, like an Amazon S3 bucket, exists when being used for
         * association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateInstanceStorageConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateInstanceStorageConfigOutcomeCallable AssociateInstanceStorageConfigCallable(const Model::AssociateInstanceStorageConfigRequest& request) const;

        /**
         * <p>Associates a storage resource type for the first time. You can only associate
         * one type of storage configuration in a single call. This means, for example,
         * that you can't define an instance with multiple S3 buckets for storing chat
         * transcripts.</p> <p>This API does not create a resource that doesn't exist. It
         * only associates it to the instance. Ensure that the resource being specified in
         * the storage configuration, like an Amazon S3 bucket, exists when being used for
         * association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateInstanceStorageConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateInstanceStorageConfigAsync(const Model::AssociateInstanceStorageConfigRequest& request, const AssociateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows the specified Amazon Connect instance to access the specified Lambda
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateLambdaFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateLambdaFunctionOutcome AssociateLambdaFunction(const Model::AssociateLambdaFunctionRequest& request) const;

        /**
         * <p>Allows the specified Amazon Connect instance to access the specified Lambda
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateLambdaFunction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateLambdaFunctionOutcomeCallable AssociateLambdaFunctionCallable(const Model::AssociateLambdaFunctionRequest& request) const;

        /**
         * <p>Allows the specified Amazon Connect instance to access the specified Lambda
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateLambdaFunction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateLambdaFunctionAsync(const Model::AssociateLambdaFunctionRequest& request, const AssociateLambdaFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows the specified Amazon Connect instance to access the specified Amazon
         * Lex bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateLexBot">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateLexBotOutcome AssociateLexBot(const Model::AssociateLexBotRequest& request) const;

        /**
         * <p>Allows the specified Amazon Connect instance to access the specified Amazon
         * Lex bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateLexBot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateLexBotOutcomeCallable AssociateLexBotCallable(const Model::AssociateLexBotRequest& request) const;

        /**
         * <p>Allows the specified Amazon Connect instance to access the specified Amazon
         * Lex bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateLexBot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateLexBotAsync(const Model::AssociateLexBotRequest& request, const AssociateLexBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a set of queues with a routing profile.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateRoutingProfileQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateRoutingProfileQueuesOutcome AssociateRoutingProfileQueues(const Model::AssociateRoutingProfileQueuesRequest& request) const;

        /**
         * <p>Associates a set of queues with a routing profile.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateRoutingProfileQueues">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateRoutingProfileQueuesOutcomeCallable AssociateRoutingProfileQueuesCallable(const Model::AssociateRoutingProfileQueuesRequest& request) const;

        /**
         * <p>Associates a set of queues with a routing profile.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateRoutingProfileQueues">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateRoutingProfileQueuesAsync(const Model::AssociateRoutingProfileQueuesRequest& request, const AssociateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a security key to the instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateSecurityKey">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSecurityKeyOutcome AssociateSecurityKey(const Model::AssociateSecurityKeyRequest& request) const;

        /**
         * <p>Associates a security key to the instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateSecurityKey">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateSecurityKeyOutcomeCallable AssociateSecurityKeyCallable(const Model::AssociateSecurityKeyRequest& request) const;

        /**
         * <p>Associates a security key to the instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateSecurityKey">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateSecurityKeyAsync(const Model::AssociateSecurityKeyRequest& request, const AssociateSecurityKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a contact flow for the specified Amazon Connect instance.</p> <p>You
         * can also create and update contact flows using the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateContactFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactFlowOutcome CreateContactFlow(const Model::CreateContactFlowRequest& request) const;

        /**
         * <p>Creates a contact flow for the specified Amazon Connect instance.</p> <p>You
         * can also create and update contact flows using the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateContactFlow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateContactFlowOutcomeCallable CreateContactFlowCallable(const Model::CreateContactFlowRequest& request) const;

        /**
         * <p>Creates a contact flow for the specified Amazon Connect instance.</p> <p>You
         * can also create and update contact flows using the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateContactFlow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateContactFlowAsync(const Model::CreateContactFlowRequest& request, const CreateContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates an Amazon Connect instance with all the supported channels enabled.
         * It does not attach any storage (such as Amazon S3, or Kinesis) or allow for any
         * configurations on features such as Contact Lens for Amazon Connect.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest& request) const;

        /**
         * <p>Initiates an Amazon Connect instance with all the supported channels enabled.
         * It does not attach any storage (such as Amazon S3, or Kinesis) or allow for any
         * configurations on features such as Contact Lens for Amazon Connect.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInstanceOutcomeCallable CreateInstanceCallable(const Model::CreateInstanceRequest& request) const;

        /**
         * <p>Initiates an Amazon Connect instance with all the supported channels enabled.
         * It does not attach any storage (such as Amazon S3, or Kinesis) or allow for any
         * configurations on features such as Contact Lens for Amazon Connect.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new routing profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateRoutingProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRoutingProfileOutcome CreateRoutingProfile(const Model::CreateRoutingProfileRequest& request) const;

        /**
         * <p>Creates a new routing profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateRoutingProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRoutingProfileOutcomeCallable CreateRoutingProfileCallable(const Model::CreateRoutingProfileRequest& request) const;

        /**
         * <p>Creates a new routing profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateRoutingProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRoutingProfileAsync(const Model::CreateRoutingProfileRequest& request, const CreateRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a user account for the specified Amazon Connect instance.</p> <p>For
         * information about how to create user accounts using the Amazon Connect console,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/user-management.html">Add
         * Users</a> in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * <p>Creates a user account for the specified Amazon Connect instance.</p> <p>For
         * information about how to create user accounts using the Amazon Connect console,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/user-management.html">Add
         * Users</a> in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request) const;

        /**
         * <p>Creates a user account for the specified Amazon Connect instance.</p> <p>For
         * information about how to create user accounts using the Amazon Connect console,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/user-management.html">Add
         * Users</a> in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new user hierarchy group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateUserHierarchyGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserHierarchyGroupOutcome CreateUserHierarchyGroup(const Model::CreateUserHierarchyGroupRequest& request) const;

        /**
         * <p>Creates a new user hierarchy group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateUserHierarchyGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserHierarchyGroupOutcomeCallable CreateUserHierarchyGroupCallable(const Model::CreateUserHierarchyGroupRequest& request) const;

        /**
         * <p>Creates a new user hierarchy group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateUserHierarchyGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserHierarchyGroupAsync(const Model::CreateUserHierarchyGroupRequest& request, const CreateUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the Amazon Connect instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest& request) const;

        /**
         * <p>Deletes the Amazon Connect instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInstanceOutcomeCallable DeleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;

        /**
         * <p>Deletes the Amazon Connect instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a user account from the specified Amazon Connect instance.</p> <p>For
         * information about what happens to a user's data when their account is deleted,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/delete-users.html">Delete
         * Users from Your Amazon Connect Instance</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Deletes a user account from the specified Amazon Connect instance.</p> <p>For
         * information about what happens to a user's data when their account is deleted,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/delete-users.html">Delete
         * Users from Your Amazon Connect Instance</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Deletes a user account from the specified Amazon Connect instance.</p> <p>For
         * information about what happens to a user's data when their account is deleted,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/delete-users.html">Delete
         * Users from Your Amazon Connect Instance</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing user hierarchy group. It must not be associated with any
         * agents or have any active child groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteUserHierarchyGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserHierarchyGroupOutcome DeleteUserHierarchyGroup(const Model::DeleteUserHierarchyGroupRequest& request) const;

        /**
         * <p>Deletes an existing user hierarchy group. It must not be associated with any
         * agents or have any active child groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteUserHierarchyGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserHierarchyGroupOutcomeCallable DeleteUserHierarchyGroupCallable(const Model::DeleteUserHierarchyGroupRequest& request) const;

        /**
         * <p>Deletes an existing user hierarchy group. It must not be associated with any
         * agents or have any active child groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteUserHierarchyGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserHierarchyGroupAsync(const Model::DeleteUserHierarchyGroupRequest& request, const DeleteUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified contact flow.</p> <p>You can also create and update
         * contact flows using the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeContactFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContactFlowOutcome DescribeContactFlow(const Model::DescribeContactFlowRequest& request) const;

        /**
         * <p>Describes the specified contact flow.</p> <p>You can also create and update
         * contact flows using the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeContactFlow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeContactFlowOutcomeCallable DescribeContactFlowCallable(const Model::DescribeContactFlowRequest& request) const;

        /**
         * <p>Describes the specified contact flow.</p> <p>You can also create and update
         * contact flows using the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeContactFlow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeContactFlowAsync(const Model::DescribeContactFlowRequest& request, const DescribeContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the current state of the specified instance identifier. It tracks the
         * instance while it is being created and returns an error status if applicable.
         * </p> <p>If an instance is not created successfully, the instance status reason
         * field returns details relevant to the reason. The instance in a failed state is
         * returned only for 24 hours after the CreateInstance API was
         * invoked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceOutcome DescribeInstance(const Model::DescribeInstanceRequest& request) const;

        /**
         * <p>Returns the current state of the specified instance identifier. It tracks the
         * instance while it is being created and returns an error status if applicable.
         * </p> <p>If an instance is not created successfully, the instance status reason
         * field returns details relevant to the reason. The instance in a failed state is
         * returned only for 24 hours after the CreateInstance API was
         * invoked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceOutcomeCallable DescribeInstanceCallable(const Model::DescribeInstanceRequest& request) const;

        /**
         * <p>Returns the current state of the specified instance identifier. It tracks the
         * instance while it is being created and returns an error status if applicable.
         * </p> <p>If an instance is not created successfully, the instance status reason
         * field returns details relevant to the reason. The instance in a failed state is
         * returned only for 24 hours after the CreateInstance API was
         * invoked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified instance attribute.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeInstanceAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceAttributeOutcome DescribeInstanceAttribute(const Model::DescribeInstanceAttributeRequest& request) const;

        /**
         * <p>Describes the specified instance attribute.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeInstanceAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceAttributeOutcomeCallable DescribeInstanceAttributeCallable(const Model::DescribeInstanceAttributeRequest& request) const;

        /**
         * <p>Describes the specified instance attribute.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeInstanceAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceAttributeAsync(const Model::DescribeInstanceAttributeRequest& request, const DescribeInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the current storage configurations for the specified resource type,
         * association ID, and instance ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeInstanceStorageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceStorageConfigOutcome DescribeInstanceStorageConfig(const Model::DescribeInstanceStorageConfigRequest& request) const;

        /**
         * <p>Retrieves the current storage configurations for the specified resource type,
         * association ID, and instance ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeInstanceStorageConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceStorageConfigOutcomeCallable DescribeInstanceStorageConfigCallable(const Model::DescribeInstanceStorageConfigRequest& request) const;

        /**
         * <p>Retrieves the current storage configurations for the specified resource type,
         * association ID, and instance ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeInstanceStorageConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceStorageConfigAsync(const Model::DescribeInstanceStorageConfigRequest& request, const DescribeInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified routing profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeRoutingProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRoutingProfileOutcome DescribeRoutingProfile(const Model::DescribeRoutingProfileRequest& request) const;

        /**
         * <p>Describes the specified routing profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeRoutingProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRoutingProfileOutcomeCallable DescribeRoutingProfileCallable(const Model::DescribeRoutingProfileRequest& request) const;

        /**
         * <p>Describes the specified routing profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeRoutingProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRoutingProfileAsync(const Model::DescribeRoutingProfileRequest& request, const DescribeRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified user account. You can find the instance ID in the
         * console (it’s the final part of the ARN). The console does not display the user
         * IDs. Instead, list the users and note the IDs provided in the
         * output.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest& request) const;

        /**
         * <p>Describes the specified user account. You can find the instance ID in the
         * console (it’s the final part of the ARN). The console does not display the user
         * IDs. Instead, list the users and note the IDs provided in the
         * output.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserOutcomeCallable DescribeUserCallable(const Model::DescribeUserRequest& request) const;

        /**
         * <p>Describes the specified user account. You can find the instance ID in the
         * console (it’s the final part of the ARN). The console does not display the user
         * IDs. Instead, list the users and note the IDs provided in the
         * output.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserAsync(const Model::DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified hierarchy group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUserHierarchyGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserHierarchyGroupOutcome DescribeUserHierarchyGroup(const Model::DescribeUserHierarchyGroupRequest& request) const;

        /**
         * <p>Describes the specified hierarchy group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUserHierarchyGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserHierarchyGroupOutcomeCallable DescribeUserHierarchyGroupCallable(const Model::DescribeUserHierarchyGroupRequest& request) const;

        /**
         * <p>Describes the specified hierarchy group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUserHierarchyGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserHierarchyGroupAsync(const Model::DescribeUserHierarchyGroupRequest& request, const DescribeUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the hierarchy structure of the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUserHierarchyStructure">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserHierarchyStructureOutcome DescribeUserHierarchyStructure(const Model::DescribeUserHierarchyStructureRequest& request) const;

        /**
         * <p>Describes the hierarchy structure of the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUserHierarchyStructure">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserHierarchyStructureOutcomeCallable DescribeUserHierarchyStructureCallable(const Model::DescribeUserHierarchyStructureRequest& request) const;

        /**
         * <p>Describes the hierarchy structure of the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUserHierarchyStructure">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserHierarchyStructureAsync(const Model::DescribeUserHierarchyStructureRequest& request, const DescribeUserHierarchyStructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes access to integrated applications from Amazon Connect.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateApprovedOrigin">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateApprovedOriginOutcome DisassociateApprovedOrigin(const Model::DisassociateApprovedOriginRequest& request) const;

        /**
         * <p>Revokes access to integrated applications from Amazon Connect.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateApprovedOrigin">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateApprovedOriginOutcomeCallable DisassociateApprovedOriginCallable(const Model::DisassociateApprovedOriginRequest& request) const;

        /**
         * <p>Revokes access to integrated applications from Amazon Connect.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateApprovedOrigin">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateApprovedOriginAsync(const Model::DisassociateApprovedOriginRequest& request, const DisassociateApprovedOriginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the storage type configurations for the specified resource type and
         * association ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateInstanceStorageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateInstanceStorageConfigOutcome DisassociateInstanceStorageConfig(const Model::DisassociateInstanceStorageConfigRequest& request) const;

        /**
         * <p>Removes the storage type configurations for the specified resource type and
         * association ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateInstanceStorageConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateInstanceStorageConfigOutcomeCallable DisassociateInstanceStorageConfigCallable(const Model::DisassociateInstanceStorageConfigRequest& request) const;

        /**
         * <p>Removes the storage type configurations for the specified resource type and
         * association ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateInstanceStorageConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateInstanceStorageConfigAsync(const Model::DisassociateInstanceStorageConfigRequest& request, const DisassociateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove the Lambda function from the drop-down options available in the
         * relevant contact flow blocks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateLambdaFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateLambdaFunctionOutcome DisassociateLambdaFunction(const Model::DisassociateLambdaFunctionRequest& request) const;

        /**
         * <p>Remove the Lambda function from the drop-down options available in the
         * relevant contact flow blocks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateLambdaFunction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateLambdaFunctionOutcomeCallable DisassociateLambdaFunctionCallable(const Model::DisassociateLambdaFunctionRequest& request) const;

        /**
         * <p>Remove the Lambda function from the drop-down options available in the
         * relevant contact flow blocks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateLambdaFunction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateLambdaFunctionAsync(const Model::DisassociateLambdaFunctionRequest& request, const DisassociateLambdaFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes authorization from the specified instance to access the specified
         * Amazon Lex bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateLexBot">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateLexBotOutcome DisassociateLexBot(const Model::DisassociateLexBotRequest& request) const;

        /**
         * <p>Revokes authorization from the specified instance to access the specified
         * Amazon Lex bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateLexBot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateLexBotOutcomeCallable DisassociateLexBotCallable(const Model::DisassociateLexBotRequest& request) const;

        /**
         * <p>Revokes authorization from the specified instance to access the specified
         * Amazon Lex bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateLexBot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateLexBotAsync(const Model::DisassociateLexBotRequest& request, const DisassociateLexBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a set of queues from a routing profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateRoutingProfileQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateRoutingProfileQueuesOutcome DisassociateRoutingProfileQueues(const Model::DisassociateRoutingProfileQueuesRequest& request) const;

        /**
         * <p>Disassociates a set of queues from a routing profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateRoutingProfileQueues">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateRoutingProfileQueuesOutcomeCallable DisassociateRoutingProfileQueuesCallable(const Model::DisassociateRoutingProfileQueuesRequest& request) const;

        /**
         * <p>Disassociates a set of queues from a routing profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateRoutingProfileQueues">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateRoutingProfileQueuesAsync(const Model::DisassociateRoutingProfileQueuesRequest& request, const DisassociateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified security key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateSecurityKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateSecurityKeyOutcome DisassociateSecurityKey(const Model::DisassociateSecurityKeyRequest& request) const;

        /**
         * <p>Deletes the specified security key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateSecurityKey">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateSecurityKeyOutcomeCallable DisassociateSecurityKeyCallable(const Model::DisassociateSecurityKeyRequest& request) const;

        /**
         * <p>Deletes the specified security key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateSecurityKey">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateSecurityKeyAsync(const Model::DisassociateSecurityKeyRequest& request, const DisassociateSecurityKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the contact attributes for the specified contact.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetContactAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactAttributesOutcome GetContactAttributes(const Model::GetContactAttributesRequest& request) const;

        /**
         * <p>Retrieves the contact attributes for the specified contact.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetContactAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContactAttributesOutcomeCallable GetContactAttributesCallable(const Model::GetContactAttributesRequest& request) const;

        /**
         * <p>Retrieves the contact attributes for the specified contact.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetContactAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContactAttributesAsync(const Model::GetContactAttributesRequest& request, const GetContactAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the real-time metric data from the specified Amazon Connect
         * instance.</p> <p>For a description of each metric, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html">Real-time
         * Metrics Definitions</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetCurrentMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCurrentMetricDataOutcome GetCurrentMetricData(const Model::GetCurrentMetricDataRequest& request) const;

        /**
         * <p>Gets the real-time metric data from the specified Amazon Connect
         * instance.</p> <p>For a description of each metric, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html">Real-time
         * Metrics Definitions</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetCurrentMetricData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCurrentMetricDataOutcomeCallable GetCurrentMetricDataCallable(const Model::GetCurrentMetricDataRequest& request) const;

        /**
         * <p>Gets the real-time metric data from the specified Amazon Connect
         * instance.</p> <p>For a description of each metric, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html">Real-time
         * Metrics Definitions</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetCurrentMetricData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCurrentMetricDataAsync(const Model::GetCurrentMetricDataRequest& request, const GetCurrentMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a token for federation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetFederationToken">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFederationTokenOutcome GetFederationToken(const Model::GetFederationTokenRequest& request) const;

        /**
         * <p>Retrieves a token for federation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetFederationToken">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFederationTokenOutcomeCallable GetFederationTokenCallable(const Model::GetFederationTokenRequest& request) const;

        /**
         * <p>Retrieves a token for federation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetFederationToken">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFederationTokenAsync(const Model::GetFederationTokenRequest& request, const GetFederationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets historical metric data from the specified Amazon Connect instance.</p>
         * <p>For a description of each historical metric, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html">Historical
         * Metrics Definitions</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMetricDataOutcome GetMetricData(const Model::GetMetricDataRequest& request) const;

        /**
         * <p>Gets historical metric data from the specified Amazon Connect instance.</p>
         * <p>For a description of each historical metric, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html">Historical
         * Metrics Definitions</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetMetricData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMetricDataOutcomeCallable GetMetricDataCallable(const Model::GetMetricDataRequest& request) const;

        /**
         * <p>Gets historical metric data from the specified Amazon Connect instance.</p>
         * <p>For a description of each historical metric, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html">Historical
         * Metrics Definitions</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetMetricData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMetricDataAsync(const Model::GetMetricDataRequest& request, const GetMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of all approved origins associated with the
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListApprovedOrigins">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApprovedOriginsOutcome ListApprovedOrigins(const Model::ListApprovedOriginsRequest& request) const;

        /**
         * <p>Returns a paginated list of all approved origins associated with the
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListApprovedOrigins">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApprovedOriginsOutcomeCallable ListApprovedOriginsCallable(const Model::ListApprovedOriginsRequest& request) const;

        /**
         * <p>Returns a paginated list of all approved origins associated with the
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListApprovedOrigins">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApprovedOriginsAsync(const Model::ListApprovedOriginsRequest& request, const ListApprovedOriginsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about the contact flows for the specified Amazon Connect
         * instance.</p> <p>You can also create and update contact flows using the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p> <p>For more information about contact flows, see
         * <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-contact-flows.html">Contact
         * Flows</a> in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListContactFlows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactFlowsOutcome ListContactFlows(const Model::ListContactFlowsRequest& request) const;

        /**
         * <p>Provides information about the contact flows for the specified Amazon Connect
         * instance.</p> <p>You can also create and update contact flows using the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p> <p>For more information about contact flows, see
         * <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-contact-flows.html">Contact
         * Flows</a> in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListContactFlows">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListContactFlowsOutcomeCallable ListContactFlowsCallable(const Model::ListContactFlowsRequest& request) const;

        /**
         * <p>Provides information about the contact flows for the specified Amazon Connect
         * instance.</p> <p>You can also create and update contact flows using the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p> <p>For more information about contact flows, see
         * <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-contact-flows.html">Contact
         * Flows</a> in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListContactFlows">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListContactFlowsAsync(const Model::ListContactFlowsRequest& request, const ListContactFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about the hours of operation for the specified Amazon
         * Connect instance.</p> <p>For more information about hours of operation, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/set-hours-operation.html">Set
         * the Hours of Operation for a Queue</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListHoursOfOperations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHoursOfOperationsOutcome ListHoursOfOperations(const Model::ListHoursOfOperationsRequest& request) const;

        /**
         * <p>Provides information about the hours of operation for the specified Amazon
         * Connect instance.</p> <p>For more information about hours of operation, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/set-hours-operation.html">Set
         * the Hours of Operation for a Queue</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListHoursOfOperations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHoursOfOperationsOutcomeCallable ListHoursOfOperationsCallable(const Model::ListHoursOfOperationsRequest& request) const;

        /**
         * <p>Provides information about the hours of operation for the specified Amazon
         * Connect instance.</p> <p>For more information about hours of operation, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/set-hours-operation.html">Set
         * the Hours of Operation for a Queue</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListHoursOfOperations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHoursOfOperationsAsync(const Model::ListHoursOfOperationsRequest& request, const ListHoursOfOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of all attribute types for the given
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListInstanceAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceAttributesOutcome ListInstanceAttributes(const Model::ListInstanceAttributesRequest& request) const;

        /**
         * <p>Returns a paginated list of all attribute types for the given
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListInstanceAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstanceAttributesOutcomeCallable ListInstanceAttributesCallable(const Model::ListInstanceAttributesRequest& request) const;

        /**
         * <p>Returns a paginated list of all attribute types for the given
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListInstanceAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstanceAttributesAsync(const Model::ListInstanceAttributesRequest& request, const ListInstanceAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of storage configs for the identified instance and
         * resource type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListInstanceStorageConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceStorageConfigsOutcome ListInstanceStorageConfigs(const Model::ListInstanceStorageConfigsRequest& request) const;

        /**
         * <p>Returns a paginated list of storage configs for the identified instance and
         * resource type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListInstanceStorageConfigs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstanceStorageConfigsOutcomeCallable ListInstanceStorageConfigsCallable(const Model::ListInstanceStorageConfigsRequest& request) const;

        /**
         * <p>Returns a paginated list of storage configs for the identified instance and
         * resource type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListInstanceStorageConfigs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstanceStorageConfigsAsync(const Model::ListInstanceStorageConfigsRequest& request, const ListInstanceStorageConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Return a list of instances which are in active state, creation-in-progress
         * state, and failed state. Instances that aren't successfully created (they are in
         * a failed state) are returned only for 24 hours after the CreateInstance API was
         * invoked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstancesOutcome ListInstances(const Model::ListInstancesRequest& request) const;

        /**
         * <p>Return a list of instances which are in active state, creation-in-progress
         * state, and failed state. Instances that aren't successfully created (they are in
         * a failed state) are returned only for 24 hours after the CreateInstance API was
         * invoked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstancesOutcomeCallable ListInstancesCallable(const Model::ListInstancesRequest& request) const;

        /**
         * <p>Return a list of instances which are in active state, creation-in-progress
         * state, and failed state. Instances that aren't successfully created (they are in
         * a failed state) are returned only for 24 hours after the CreateInstance API was
         * invoked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstancesAsync(const Model::ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of all the Lambda functions that show up in the
         * drop-down options in the relevant contact flow blocks.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListLambdaFunctions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLambdaFunctionsOutcome ListLambdaFunctions(const Model::ListLambdaFunctionsRequest& request) const;

        /**
         * <p>Returns a paginated list of all the Lambda functions that show up in the
         * drop-down options in the relevant contact flow blocks.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListLambdaFunctions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLambdaFunctionsOutcomeCallable ListLambdaFunctionsCallable(const Model::ListLambdaFunctionsRequest& request) const;

        /**
         * <p>Returns a paginated list of all the Lambda functions that show up in the
         * drop-down options in the relevant contact flow blocks.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListLambdaFunctions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLambdaFunctionsAsync(const Model::ListLambdaFunctionsRequest& request, const ListLambdaFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of all the Amazon Lex bots currently associated with
         * the instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListLexBots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLexBotsOutcome ListLexBots(const Model::ListLexBotsRequest& request) const;

        /**
         * <p>Returns a paginated list of all the Amazon Lex bots currently associated with
         * the instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListLexBots">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLexBotsOutcomeCallable ListLexBotsCallable(const Model::ListLexBotsRequest& request) const;

        /**
         * <p>Returns a paginated list of all the Amazon Lex bots currently associated with
         * the instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListLexBots">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLexBotsAsync(const Model::ListLexBotsRequest& request, const ListLexBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about the phone numbers for the specified Amazon Connect
         * instance. </p> <p>For more information about phone numbers, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-center-phone-number.html">Set
         * Up Phone Numbers for Your Contact Center</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListPhoneNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPhoneNumbersOutcome ListPhoneNumbers(const Model::ListPhoneNumbersRequest& request) const;

        /**
         * <p>Provides information about the phone numbers for the specified Amazon Connect
         * instance. </p> <p>For more information about phone numbers, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-center-phone-number.html">Set
         * Up Phone Numbers for Your Contact Center</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListPhoneNumbers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPhoneNumbersOutcomeCallable ListPhoneNumbersCallable(const Model::ListPhoneNumbersRequest& request) const;

        /**
         * <p>Provides information about the phone numbers for the specified Amazon Connect
         * instance. </p> <p>For more information about phone numbers, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-center-phone-number.html">Set
         * Up Phone Numbers for Your Contact Center</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListPhoneNumbers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPhoneNumbersAsync(const Model::ListPhoneNumbersRequest& request, const ListPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about the prompts for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListPrompts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPromptsOutcome ListPrompts(const Model::ListPromptsRequest& request) const;

        /**
         * <p>Provides information about the prompts for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListPrompts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPromptsOutcomeCallable ListPromptsCallable(const Model::ListPromptsRequest& request) const;

        /**
         * <p>Provides information about the prompts for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListPrompts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPromptsAsync(const Model::ListPromptsRequest& request, const ListPromptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about the queues for the specified Amazon Connect
         * instance.</p> <p>For more information about queues, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-queues-standard-and-agent.html">Queues:
         * Standard and Agent</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueuesOutcome ListQueues(const Model::ListQueuesRequest& request) const;

        /**
         * <p>Provides information about the queues for the specified Amazon Connect
         * instance.</p> <p>For more information about queues, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-queues-standard-and-agent.html">Queues:
         * Standard and Agent</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListQueues">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListQueuesOutcomeCallable ListQueuesCallable(const Model::ListQueuesRequest& request) const;

        /**
         * <p>Provides information about the queues for the specified Amazon Connect
         * instance.</p> <p>For more information about queues, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-queues-standard-and-agent.html">Queues:
         * Standard and Agent</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListQueues">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListQueuesAsync(const Model::ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the queues associated with a routing profile.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListRoutingProfileQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoutingProfileQueuesOutcome ListRoutingProfileQueues(const Model::ListRoutingProfileQueuesRequest& request) const;

        /**
         * <p>List the queues associated with a routing profile.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListRoutingProfileQueues">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRoutingProfileQueuesOutcomeCallable ListRoutingProfileQueuesCallable(const Model::ListRoutingProfileQueuesRequest& request) const;

        /**
         * <p>List the queues associated with a routing profile.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListRoutingProfileQueues">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRoutingProfileQueuesAsync(const Model::ListRoutingProfileQueuesRequest& request, const ListRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides summary information about the routing profiles for the specified
         * Amazon Connect instance.</p> <p>For more information about routing profiles, see
         * <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-routing.html">Routing
         * Profiles</a> and <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/routing-profiles.html">Create
         * a Routing Profile</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListRoutingProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoutingProfilesOutcome ListRoutingProfiles(const Model::ListRoutingProfilesRequest& request) const;

        /**
         * <p>Provides summary information about the routing profiles for the specified
         * Amazon Connect instance.</p> <p>For more information about routing profiles, see
         * <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-routing.html">Routing
         * Profiles</a> and <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/routing-profiles.html">Create
         * a Routing Profile</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListRoutingProfiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRoutingProfilesOutcomeCallable ListRoutingProfilesCallable(const Model::ListRoutingProfilesRequest& request) const;

        /**
         * <p>Provides summary information about the routing profiles for the specified
         * Amazon Connect instance.</p> <p>For more information about routing profiles, see
         * <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-routing.html">Routing
         * Profiles</a> and <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/routing-profiles.html">Create
         * a Routing Profile</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListRoutingProfiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRoutingProfilesAsync(const Model::ListRoutingProfilesRequest& request, const ListRoutingProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of all security keys associated with the
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListSecurityKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityKeysOutcome ListSecurityKeys(const Model::ListSecurityKeysRequest& request) const;

        /**
         * <p>Returns a paginated list of all security keys associated with the
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListSecurityKeys">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSecurityKeysOutcomeCallable ListSecurityKeysCallable(const Model::ListSecurityKeysRequest& request) const;

        /**
         * <p>Returns a paginated list of all security keys associated with the
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListSecurityKeys">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSecurityKeysAsync(const Model::ListSecurityKeysRequest& request, const ListSecurityKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides summary information about the security profiles for the specified
         * Amazon Connect instance.</p> <p>For more information about security profiles,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/connect-security-profiles.html">Security
         * Profiles</a> in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListSecurityProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityProfilesOutcome ListSecurityProfiles(const Model::ListSecurityProfilesRequest& request) const;

        /**
         * <p>Provides summary information about the security profiles for the specified
         * Amazon Connect instance.</p> <p>For more information about security profiles,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/connect-security-profiles.html">Security
         * Profiles</a> in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListSecurityProfiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSecurityProfilesOutcomeCallable ListSecurityProfilesCallable(const Model::ListSecurityProfilesRequest& request) const;

        /**
         * <p>Provides summary information about the security profiles for the specified
         * Amazon Connect instance.</p> <p>For more information about security profiles,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/connect-security-profiles.html">Security
         * Profiles</a> in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListSecurityProfiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSecurityProfilesAsync(const Model::ListSecurityProfilesRequest& request, const ListSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for the specified resource.</p> <p>For sample policies that
         * use tags, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/security_iam_id-based-policy-examples.html">Amazon
         * Connect Identity-Based Policy Examples</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags for the specified resource.</p> <p>For sample policies that
         * use tags, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/security_iam_id-based-policy-examples.html">Amazon
         * Connect Identity-Based Policy Examples</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags for the specified resource.</p> <p>For sample policies that
         * use tags, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/security_iam_id-based-policy-examples.html">Amazon
         * Connect Identity-Based Policy Examples</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides summary information about the hierarchy groups for the specified
         * Amazon Connect instance.</p> <p>For more information about agent hierarchies,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/agent-hierarchy.html">Set
         * Up Agent Hierarchies</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListUserHierarchyGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserHierarchyGroupsOutcome ListUserHierarchyGroups(const Model::ListUserHierarchyGroupsRequest& request) const;

        /**
         * <p>Provides summary information about the hierarchy groups for the specified
         * Amazon Connect instance.</p> <p>For more information about agent hierarchies,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/agent-hierarchy.html">Set
         * Up Agent Hierarchies</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListUserHierarchyGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserHierarchyGroupsOutcomeCallable ListUserHierarchyGroupsCallable(const Model::ListUserHierarchyGroupsRequest& request) const;

        /**
         * <p>Provides summary information about the hierarchy groups for the specified
         * Amazon Connect instance.</p> <p>For more information about agent hierarchies,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/agent-hierarchy.html">Set
         * Up Agent Hierarchies</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListUserHierarchyGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserHierarchyGroupsAsync(const Model::ListUserHierarchyGroupsRequest& request, const ListUserHierarchyGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides summary information about the users for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * <p>Provides summary information about the users for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListUsers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request) const;

        /**
         * <p>Provides summary information about the users for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListUsers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>When a contact is being recorded, and the recording has been suspended using
         * SuspendContactRecording, this API resumes recording the call.</p> <p>Only voice
         * recordings are supported at this time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ResumeContactRecording">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeContactRecordingOutcome ResumeContactRecording(const Model::ResumeContactRecordingRequest& request) const;

        /**
         * <p>When a contact is being recorded, and the recording has been suspended using
         * SuspendContactRecording, this API resumes recording the call.</p> <p>Only voice
         * recordings are supported at this time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ResumeContactRecording">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResumeContactRecordingOutcomeCallable ResumeContactRecordingCallable(const Model::ResumeContactRecordingRequest& request) const;

        /**
         * <p>When a contact is being recorded, and the recording has been suspended using
         * SuspendContactRecording, this API resumes recording the call.</p> <p>Only voice
         * recordings are supported at this time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ResumeContactRecording">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResumeContactRecordingAsync(const Model::ResumeContactRecordingRequest& request, const ResumeContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates a contact flow to start a new chat for the customer. Response of
         * this API provides a token required to obtain credentials from the <a
         * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
         * API in the Amazon Connect Participant Service.</p> <p>When a new chat contact is
         * successfully created, clients need to subscribe to the participant’s connection
         * for the created chat within 5 minutes. This is achieved by invoking <a
         * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
         * with WEBSOCKET and CONNECTION_CREDENTIALS. </p> <p>A 429 error occurs in two
         * situations:</p> <ul> <li> <p>API rate limit is exceeded. API TPS throttling
         * returns a <code>TooManyRequests</code> exception from the API Gateway.</p> </li>
         * <li> <p>The <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">quota
         * for concurrent active chats</a> is exceeded. Active chat throttling returns a
         * <code>LimitExceededException</code>.</p> </li> </ul> <p>For more information
         * about how chat works, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat.html">Chat</a>
         * in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartChatContact">AWS
         * API Reference</a></p>
         */
        virtual Model::StartChatContactOutcome StartChatContact(const Model::StartChatContactRequest& request) const;

        /**
         * <p>Initiates a contact flow to start a new chat for the customer. Response of
         * this API provides a token required to obtain credentials from the <a
         * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
         * API in the Amazon Connect Participant Service.</p> <p>When a new chat contact is
         * successfully created, clients need to subscribe to the participant’s connection
         * for the created chat within 5 minutes. This is achieved by invoking <a
         * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
         * with WEBSOCKET and CONNECTION_CREDENTIALS. </p> <p>A 429 error occurs in two
         * situations:</p> <ul> <li> <p>API rate limit is exceeded. API TPS throttling
         * returns a <code>TooManyRequests</code> exception from the API Gateway.</p> </li>
         * <li> <p>The <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">quota
         * for concurrent active chats</a> is exceeded. Active chat throttling returns a
         * <code>LimitExceededException</code>.</p> </li> </ul> <p>For more information
         * about how chat works, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat.html">Chat</a>
         * in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartChatContact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartChatContactOutcomeCallable StartChatContactCallable(const Model::StartChatContactRequest& request) const;

        /**
         * <p>Initiates a contact flow to start a new chat for the customer. Response of
         * this API provides a token required to obtain credentials from the <a
         * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
         * API in the Amazon Connect Participant Service.</p> <p>When a new chat contact is
         * successfully created, clients need to subscribe to the participant’s connection
         * for the created chat within 5 minutes. This is achieved by invoking <a
         * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
         * with WEBSOCKET and CONNECTION_CREDENTIALS. </p> <p>A 429 error occurs in two
         * situations:</p> <ul> <li> <p>API rate limit is exceeded. API TPS throttling
         * returns a <code>TooManyRequests</code> exception from the API Gateway.</p> </li>
         * <li> <p>The <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">quota
         * for concurrent active chats</a> is exceeded. Active chat throttling returns a
         * <code>LimitExceededException</code>.</p> </li> </ul> <p>For more information
         * about how chat works, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat.html">Chat</a>
         * in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartChatContact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartChatContactAsync(const Model::StartChatContactRequest& request, const StartChatContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API starts recording the contact when the agent joins the call.
         * StartContactRecording is a one-time action. For example, if you use
         * StopContactRecording to stop recording an ongoing call, you can't use
         * StartContactRecording to restart it. For scenarios where the recording has
         * started and you want to suspend and resume it, such as when collecting sensitive
         * information (for example, a credit card number), use SuspendContactRecording and
         * ResumeContactRecording.</p> <p>You can use this API to override the recording
         * behavior configured in the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/set-recording-behavior.html">Set
         * recording behavior</a> block.</p> <p>Only voice recordings are supported at this
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartContactRecording">AWS
         * API Reference</a></p>
         */
        virtual Model::StartContactRecordingOutcome StartContactRecording(const Model::StartContactRecordingRequest& request) const;

        /**
         * <p>This API starts recording the contact when the agent joins the call.
         * StartContactRecording is a one-time action. For example, if you use
         * StopContactRecording to stop recording an ongoing call, you can't use
         * StartContactRecording to restart it. For scenarios where the recording has
         * started and you want to suspend and resume it, such as when collecting sensitive
         * information (for example, a credit card number), use SuspendContactRecording and
         * ResumeContactRecording.</p> <p>You can use this API to override the recording
         * behavior configured in the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/set-recording-behavior.html">Set
         * recording behavior</a> block.</p> <p>Only voice recordings are supported at this
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartContactRecording">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartContactRecordingOutcomeCallable StartContactRecordingCallable(const Model::StartContactRecordingRequest& request) const;

        /**
         * <p>This API starts recording the contact when the agent joins the call.
         * StartContactRecording is a one-time action. For example, if you use
         * StopContactRecording to stop recording an ongoing call, you can't use
         * StartContactRecording to restart it. For scenarios where the recording has
         * started and you want to suspend and resume it, such as when collecting sensitive
         * information (for example, a credit card number), use SuspendContactRecording and
         * ResumeContactRecording.</p> <p>You can use this API to override the recording
         * behavior configured in the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/set-recording-behavior.html">Set
         * recording behavior</a> block.</p> <p>Only voice recordings are supported at this
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartContactRecording">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartContactRecordingAsync(const Model::StartContactRecordingRequest& request, const StartContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API places an outbound call to a contact, and then initiates the contact
         * flow. It performs the actions in the contact flow that's specified (in
         * <code>ContactFlowId</code>).</p> <p>Agents are not involved in initiating the
         * outbound API (that is, dialing the contact). If the contact flow places an
         * outbound call to a contact, and then puts the contact in queue, that's when the
         * call is routed to the agent, like any other inbound case.</p> <p>There is a 60
         * second dialing timeout for this operation. If the call is not connected after 60
         * seconds, it fails.</p>  <p>UK numbers with a 447 prefix are not allowed by
         * default. Before you can dial these UK mobile numbers, you must submit a service
         * quota increase request. For more information, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon
         * Connect Service Quotas</a> in the <i>Amazon Connect Administrator Guide</i>.
         * </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartOutboundVoiceContact">AWS
         * API Reference</a></p>
         */
        virtual Model::StartOutboundVoiceContactOutcome StartOutboundVoiceContact(const Model::StartOutboundVoiceContactRequest& request) const;

        /**
         * <p>This API places an outbound call to a contact, and then initiates the contact
         * flow. It performs the actions in the contact flow that's specified (in
         * <code>ContactFlowId</code>).</p> <p>Agents are not involved in initiating the
         * outbound API (that is, dialing the contact). If the contact flow places an
         * outbound call to a contact, and then puts the contact in queue, that's when the
         * call is routed to the agent, like any other inbound case.</p> <p>There is a 60
         * second dialing timeout for this operation. If the call is not connected after 60
         * seconds, it fails.</p>  <p>UK numbers with a 447 prefix are not allowed by
         * default. Before you can dial these UK mobile numbers, you must submit a service
         * quota increase request. For more information, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon
         * Connect Service Quotas</a> in the <i>Amazon Connect Administrator Guide</i>.
         * </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartOutboundVoiceContact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartOutboundVoiceContactOutcomeCallable StartOutboundVoiceContactCallable(const Model::StartOutboundVoiceContactRequest& request) const;

        /**
         * <p>This API places an outbound call to a contact, and then initiates the contact
         * flow. It performs the actions in the contact flow that's specified (in
         * <code>ContactFlowId</code>).</p> <p>Agents are not involved in initiating the
         * outbound API (that is, dialing the contact). If the contact flow places an
         * outbound call to a contact, and then puts the contact in queue, that's when the
         * call is routed to the agent, like any other inbound case.</p> <p>There is a 60
         * second dialing timeout for this operation. If the call is not connected after 60
         * seconds, it fails.</p>  <p>UK numbers with a 447 prefix are not allowed by
         * default. Before you can dial these UK mobile numbers, you must submit a service
         * quota increase request. For more information, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon
         * Connect Service Quotas</a> in the <i>Amazon Connect Administrator Guide</i>.
         * </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartOutboundVoiceContact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartOutboundVoiceContactAsync(const Model::StartOutboundVoiceContactRequest& request, const StartOutboundVoiceContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Ends the specified contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StopContact">AWS
         * API Reference</a></p>
         */
        virtual Model::StopContactOutcome StopContact(const Model::StopContactRequest& request) const;

        /**
         * <p>Ends the specified contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StopContact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopContactOutcomeCallable StopContactCallable(const Model::StopContactRequest& request) const;

        /**
         * <p>Ends the specified contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StopContact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopContactAsync(const Model::StopContactRequest& request, const StopContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>When a contact is being recorded, this API stops recording the call.
         * StopContactRecording is a one-time action. If you use StopContactRecording to
         * stop recording an ongoing call, you can't use StartContactRecording to restart
         * it. For scenarios where the recording has started and you want to suspend it for
         * sensitive information (for example, to collect a credit card number), and then
         * restart it, use SuspendContactRecording and ResumeContactRecording.</p> <p>Only
         * voice recordings are supported at this time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StopContactRecording">AWS
         * API Reference</a></p>
         */
        virtual Model::StopContactRecordingOutcome StopContactRecording(const Model::StopContactRecordingRequest& request) const;

        /**
         * <p>When a contact is being recorded, this API stops recording the call.
         * StopContactRecording is a one-time action. If you use StopContactRecording to
         * stop recording an ongoing call, you can't use StartContactRecording to restart
         * it. For scenarios where the recording has started and you want to suspend it for
         * sensitive information (for example, to collect a credit card number), and then
         * restart it, use SuspendContactRecording and ResumeContactRecording.</p> <p>Only
         * voice recordings are supported at this time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StopContactRecording">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopContactRecordingOutcomeCallable StopContactRecordingCallable(const Model::StopContactRecordingRequest& request) const;

        /**
         * <p>When a contact is being recorded, this API stops recording the call.
         * StopContactRecording is a one-time action. If you use StopContactRecording to
         * stop recording an ongoing call, you can't use StartContactRecording to restart
         * it. For scenarios where the recording has started and you want to suspend it for
         * sensitive information (for example, to collect a credit card number), and then
         * restart it, use SuspendContactRecording and ResumeContactRecording.</p> <p>Only
         * voice recordings are supported at this time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StopContactRecording">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopContactRecordingAsync(const Model::StopContactRecordingRequest& request, const StopContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>When a contact is being recorded, this API suspends recording the call. For
         * example, you might suspend the call recording while collecting sensitive
         * information, such as a credit card number. Then use ResumeContactRecording to
         * restart recording. </p> <p>The period of time that the recording is suspended is
         * filled with silence in the final recording. </p> <p>Only voice recordings are
         * supported at this time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SuspendContactRecording">AWS
         * API Reference</a></p>
         */
        virtual Model::SuspendContactRecordingOutcome SuspendContactRecording(const Model::SuspendContactRecordingRequest& request) const;

        /**
         * <p>When a contact is being recorded, this API suspends recording the call. For
         * example, you might suspend the call recording while collecting sensitive
         * information, such as a credit card number. Then use ResumeContactRecording to
         * restart recording. </p> <p>The period of time that the recording is suspended is
         * filled with silence in the final recording. </p> <p>Only voice recordings are
         * supported at this time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SuspendContactRecording">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SuspendContactRecordingOutcomeCallable SuspendContactRecordingCallable(const Model::SuspendContactRecordingRequest& request) const;

        /**
         * <p>When a contact is being recorded, this API suspends recording the call. For
         * example, you might suspend the call recording while collecting sensitive
         * information, such as a credit card number. Then use ResumeContactRecording to
         * restart recording. </p> <p>The period of time that the recording is suspended is
         * filled with silence in the final recording. </p> <p>Only voice recordings are
         * supported at this time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SuspendContactRecording">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SuspendContactRecordingAsync(const Model::SuspendContactRecordingRequest& request, const SuspendContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified tags to the specified resource.</p> <p>The supported
         * resource types are users, routing profiles, and contact flows.</p> <p>For sample
         * policies that use tags, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/security_iam_id-based-policy-examples.html">Amazon
         * Connect Identity-Based Policy Examples</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds the specified tags to the specified resource.</p> <p>The supported
         * resource types are users, routing profiles, and contact flows.</p> <p>For sample
         * policies that use tags, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/security_iam_id-based-policy-examples.html">Amazon
         * Connect Identity-Based Policy Examples</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds the specified tags to the specified resource.</p> <p>The supported
         * resource types are users, routing profiles, and contact flows.</p> <p>For sample
         * policies that use tags, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/security_iam_id-based-policy-examples.html">Amazon
         * Connect Identity-Based Policy Examples</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates the contact attributes associated with the specified
         * contact.</p> <p>You can add or update attributes for both ongoing and completed
         * contacts. For example, you can update the customer's name or the reason the
         * customer called while the call is active, or add notes about steps that the
         * agent took during the call that are displayed to the next agent that takes the
         * call. You can also update attributes for a contact using data from your CRM
         * application and save the data with the contact in Amazon Connect. You could also
         * flag calls for additional analysis, such as legal review or identifying abusive
         * callers.</p> <p>Contact attributes are available in Amazon Connect for 24
         * months, and are then deleted.</p> <p> <b>Important:</b> You cannot use the
         * operation to update attributes for contacts that occurred prior to the release
         * of the API, September 12, 2018. You can update attributes only for contacts that
         * started after the release of the API. If you attempt to update attributes for a
         * contact that occurred prior to the release of the API, a 400 error is returned.
         * This applies also to queued callbacks that were initiated prior to the release
         * of the API but are still active in your instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactAttributesOutcome UpdateContactAttributes(const Model::UpdateContactAttributesRequest& request) const;

        /**
         * <p>Creates or updates the contact attributes associated with the specified
         * contact.</p> <p>You can add or update attributes for both ongoing and completed
         * contacts. For example, you can update the customer's name or the reason the
         * customer called while the call is active, or add notes about steps that the
         * agent took during the call that are displayed to the next agent that takes the
         * call. You can also update attributes for a contact using data from your CRM
         * application and save the data with the contact in Amazon Connect. You could also
         * flag calls for additional analysis, such as legal review or identifying abusive
         * callers.</p> <p>Contact attributes are available in Amazon Connect for 24
         * months, and are then deleted.</p> <p> <b>Important:</b> You cannot use the
         * operation to update attributes for contacts that occurred prior to the release
         * of the API, September 12, 2018. You can update attributes only for contacts that
         * started after the release of the API. If you attempt to update attributes for a
         * contact that occurred prior to the release of the API, a 400 error is returned.
         * This applies also to queued callbacks that were initiated prior to the release
         * of the API but are still active in your instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContactAttributesOutcomeCallable UpdateContactAttributesCallable(const Model::UpdateContactAttributesRequest& request) const;

        /**
         * <p>Creates or updates the contact attributes associated with the specified
         * contact.</p> <p>You can add or update attributes for both ongoing and completed
         * contacts. For example, you can update the customer's name or the reason the
         * customer called while the call is active, or add notes about steps that the
         * agent took during the call that are displayed to the next agent that takes the
         * call. You can also update attributes for a contact using data from your CRM
         * application and save the data with the contact in Amazon Connect. You could also
         * flag calls for additional analysis, such as legal review or identifying abusive
         * callers.</p> <p>Contact attributes are available in Amazon Connect for 24
         * months, and are then deleted.</p> <p> <b>Important:</b> You cannot use the
         * operation to update attributes for contacts that occurred prior to the release
         * of the API, September 12, 2018. You can update attributes only for contacts that
         * started after the release of the API. If you attempt to update attributes for a
         * contact that occurred prior to the release of the API, a 400 error is returned.
         * This applies also to queued callbacks that were initiated prior to the release
         * of the API but are still active in your instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContactAttributesAsync(const Model::UpdateContactAttributesRequest& request, const UpdateContactAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified contact flow.</p> <p>You can also create and update
         * contact flows using the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactFlowContent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactFlowContentOutcome UpdateContactFlowContent(const Model::UpdateContactFlowContentRequest& request) const;

        /**
         * <p>Updates the specified contact flow.</p> <p>You can also create and update
         * contact flows using the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactFlowContent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContactFlowContentOutcomeCallable UpdateContactFlowContentCallable(const Model::UpdateContactFlowContentRequest& request) const;

        /**
         * <p>Updates the specified contact flow.</p> <p>You can also create and update
         * contact flows using the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactFlowContent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContactFlowContentAsync(const Model::UpdateContactFlowContentRequest& request, const UpdateContactFlowContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The name of the contact flow.</p> <p>You can also create and update contact
         * flows using the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactFlowName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactFlowNameOutcome UpdateContactFlowName(const Model::UpdateContactFlowNameRequest& request) const;

        /**
         * <p>The name of the contact flow.</p> <p>You can also create and update contact
         * flows using the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactFlowName">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContactFlowNameOutcomeCallable UpdateContactFlowNameCallable(const Model::UpdateContactFlowNameRequest& request) const;

        /**
         * <p>The name of the contact flow.</p> <p>You can also create and update contact
         * flows using the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactFlowName">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContactFlowNameAsync(const Model::UpdateContactFlowNameRequest& request, const UpdateContactFlowNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the value for the specified attribute type.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateInstanceAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInstanceAttributeOutcome UpdateInstanceAttribute(const Model::UpdateInstanceAttributeRequest& request) const;

        /**
         * <p>Updates the value for the specified attribute type.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateInstanceAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInstanceAttributeOutcomeCallable UpdateInstanceAttributeCallable(const Model::UpdateInstanceAttributeRequest& request) const;

        /**
         * <p>Updates the value for the specified attribute type.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateInstanceAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInstanceAttributeAsync(const Model::UpdateInstanceAttributeRequest& request, const UpdateInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing configuration for a resource type. This API is
         * idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateInstanceStorageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInstanceStorageConfigOutcome UpdateInstanceStorageConfig(const Model::UpdateInstanceStorageConfigRequest& request) const;

        /**
         * <p>Updates an existing configuration for a resource type. This API is
         * idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateInstanceStorageConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInstanceStorageConfigOutcomeCallable UpdateInstanceStorageConfigCallable(const Model::UpdateInstanceStorageConfigRequest& request) const;

        /**
         * <p>Updates an existing configuration for a resource type. This API is
         * idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateInstanceStorageConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInstanceStorageConfigAsync(const Model::UpdateInstanceStorageConfigRequest& request, const UpdateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the channels that agents can handle in the Contact Control Panel
         * (CCP) for a routing profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileConcurrency">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoutingProfileConcurrencyOutcome UpdateRoutingProfileConcurrency(const Model::UpdateRoutingProfileConcurrencyRequest& request) const;

        /**
         * <p>Updates the channels that agents can handle in the Contact Control Panel
         * (CCP) for a routing profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileConcurrency">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoutingProfileConcurrencyOutcomeCallable UpdateRoutingProfileConcurrencyCallable(const Model::UpdateRoutingProfileConcurrencyRequest& request) const;

        /**
         * <p>Updates the channels that agents can handle in the Contact Control Panel
         * (CCP) for a routing profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileConcurrency">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoutingProfileConcurrencyAsync(const Model::UpdateRoutingProfileConcurrencyRequest& request, const UpdateRoutingProfileConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the default outbound queue of a routing profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileDefaultOutboundQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoutingProfileDefaultOutboundQueueOutcome UpdateRoutingProfileDefaultOutboundQueue(const Model::UpdateRoutingProfileDefaultOutboundQueueRequest& request) const;

        /**
         * <p>Updates the default outbound queue of a routing profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileDefaultOutboundQueue">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoutingProfileDefaultOutboundQueueOutcomeCallable UpdateRoutingProfileDefaultOutboundQueueCallable(const Model::UpdateRoutingProfileDefaultOutboundQueueRequest& request) const;

        /**
         * <p>Updates the default outbound queue of a routing profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileDefaultOutboundQueue">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoutingProfileDefaultOutboundQueueAsync(const Model::UpdateRoutingProfileDefaultOutboundQueueRequest& request, const UpdateRoutingProfileDefaultOutboundQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name and description of a routing profile. The request accepts
         * the following data in JSON format. At least <code>Name</code> or
         * <code>Description</code> must be provided.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoutingProfileNameOutcome UpdateRoutingProfileName(const Model::UpdateRoutingProfileNameRequest& request) const;

        /**
         * <p>Updates the name and description of a routing profile. The request accepts
         * the following data in JSON format. At least <code>Name</code> or
         * <code>Description</code> must be provided.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileName">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoutingProfileNameOutcomeCallable UpdateRoutingProfileNameCallable(const Model::UpdateRoutingProfileNameRequest& request) const;

        /**
         * <p>Updates the name and description of a routing profile. The request accepts
         * the following data in JSON format. At least <code>Name</code> or
         * <code>Description</code> must be provided.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileName">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoutingProfileNameAsync(const Model::UpdateRoutingProfileNameRequest& request, const UpdateRoutingProfileNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the properties associated with a set of queues for a routing
         * profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoutingProfileQueuesOutcome UpdateRoutingProfileQueues(const Model::UpdateRoutingProfileQueuesRequest& request) const;

        /**
         * <p>Updates the properties associated with a set of queues for a routing
         * profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileQueues">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoutingProfileQueuesOutcomeCallable UpdateRoutingProfileQueuesCallable(const Model::UpdateRoutingProfileQueuesRequest& request) const;

        /**
         * <p>Updates the properties associated with a set of queues for a routing
         * profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileQueues">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoutingProfileQueuesAsync(const Model::UpdateRoutingProfileQueuesRequest& request, const UpdateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns the specified hierarchy group to the specified user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserHierarchy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserHierarchyOutcome UpdateUserHierarchy(const Model::UpdateUserHierarchyRequest& request) const;

        /**
         * <p>Assigns the specified hierarchy group to the specified user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserHierarchy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserHierarchyOutcomeCallable UpdateUserHierarchyCallable(const Model::UpdateUserHierarchyRequest& request) const;

        /**
         * <p>Assigns the specified hierarchy group to the specified user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserHierarchy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserHierarchyAsync(const Model::UpdateUserHierarchyRequest& request, const UpdateUserHierarchyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name of the user hierarchy group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserHierarchyGroupName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserHierarchyGroupNameOutcome UpdateUserHierarchyGroupName(const Model::UpdateUserHierarchyGroupNameRequest& request) const;

        /**
         * <p>Updates the name of the user hierarchy group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserHierarchyGroupName">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserHierarchyGroupNameOutcomeCallable UpdateUserHierarchyGroupNameCallable(const Model::UpdateUserHierarchyGroupNameRequest& request) const;

        /**
         * <p>Updates the name of the user hierarchy group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserHierarchyGroupName">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserHierarchyGroupNameAsync(const Model::UpdateUserHierarchyGroupNameRequest& request, const UpdateUserHierarchyGroupNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the user hierarchy structure: add, remove, and rename user hierarchy
         * levels.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserHierarchyStructure">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserHierarchyStructureOutcome UpdateUserHierarchyStructure(const Model::UpdateUserHierarchyStructureRequest& request) const;

        /**
         * <p>Updates the user hierarchy structure: add, remove, and rename user hierarchy
         * levels.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserHierarchyStructure">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserHierarchyStructureOutcomeCallable UpdateUserHierarchyStructureCallable(const Model::UpdateUserHierarchyStructureRequest& request) const;

        /**
         * <p>Updates the user hierarchy structure: add, remove, and rename user hierarchy
         * levels.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserHierarchyStructure">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserHierarchyStructureAsync(const Model::UpdateUserHierarchyStructureRequest& request, const UpdateUserHierarchyStructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the identity information for the specified user.</p> 
         * <p>Someone with the ability to invoke <code>UpdateUserIndentityInfo</code> can
         * change the login credentials of other users by changing their email address.
         * This poses a security risk to your organization. They can change the email
         * address of a user to the attacker's email address, and then reset the password
         * through email. We strongly recommend limiting who has the ability to invoke
         * <code>UpdateUserIndentityInfo</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-best-practices.html">Best
         * Practices for Security Profiles</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserIdentityInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserIdentityInfoOutcome UpdateUserIdentityInfo(const Model::UpdateUserIdentityInfoRequest& request) const;

        /**
         * <p>Updates the identity information for the specified user.</p> 
         * <p>Someone with the ability to invoke <code>UpdateUserIndentityInfo</code> can
         * change the login credentials of other users by changing their email address.
         * This poses a security risk to your organization. They can change the email
         * address of a user to the attacker's email address, and then reset the password
         * through email. We strongly recommend limiting who has the ability to invoke
         * <code>UpdateUserIndentityInfo</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-best-practices.html">Best
         * Practices for Security Profiles</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserIdentityInfo">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserIdentityInfoOutcomeCallable UpdateUserIdentityInfoCallable(const Model::UpdateUserIdentityInfoRequest& request) const;

        /**
         * <p>Updates the identity information for the specified user.</p> 
         * <p>Someone with the ability to invoke <code>UpdateUserIndentityInfo</code> can
         * change the login credentials of other users by changing their email address.
         * This poses a security risk to your organization. They can change the email
         * address of a user to the attacker's email address, and then reset the password
         * through email. We strongly recommend limiting who has the ability to invoke
         * <code>UpdateUserIndentityInfo</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-best-practices.html">Best
         * Practices for Security Profiles</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserIdentityInfo">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserIdentityInfoAsync(const Model::UpdateUserIdentityInfoRequest& request, const UpdateUserIdentityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the phone configuration settings for the specified
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserPhoneConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserPhoneConfigOutcome UpdateUserPhoneConfig(const Model::UpdateUserPhoneConfigRequest& request) const;

        /**
         * <p>Updates the phone configuration settings for the specified
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserPhoneConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserPhoneConfigOutcomeCallable UpdateUserPhoneConfigCallable(const Model::UpdateUserPhoneConfigRequest& request) const;

        /**
         * <p>Updates the phone configuration settings for the specified
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserPhoneConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserPhoneConfigAsync(const Model::UpdateUserPhoneConfigRequest& request, const UpdateUserPhoneConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns the specified routing profile to the specified user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserRoutingProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserRoutingProfileOutcome UpdateUserRoutingProfile(const Model::UpdateUserRoutingProfileRequest& request) const;

        /**
         * <p>Assigns the specified routing profile to the specified user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserRoutingProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserRoutingProfileOutcomeCallable UpdateUserRoutingProfileCallable(const Model::UpdateUserRoutingProfileRequest& request) const;

        /**
         * <p>Assigns the specified routing profile to the specified user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserRoutingProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserRoutingProfileAsync(const Model::UpdateUserRoutingProfileRequest& request, const UpdateUserRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns the specified security profiles to the specified user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserSecurityProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserSecurityProfilesOutcome UpdateUserSecurityProfiles(const Model::UpdateUserSecurityProfilesRequest& request) const;

        /**
         * <p>Assigns the specified security profiles to the specified user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserSecurityProfiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserSecurityProfilesOutcomeCallable UpdateUserSecurityProfilesCallable(const Model::UpdateUserSecurityProfilesRequest& request) const;

        /**
         * <p>Assigns the specified security profiles to the specified user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserSecurityProfiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserSecurityProfilesAsync(const Model::UpdateUserSecurityProfilesRequest& request, const UpdateUserSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateApprovedOriginAsyncHelper(const Model::AssociateApprovedOriginRequest& request, const AssociateApprovedOriginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateInstanceStorageConfigAsyncHelper(const Model::AssociateInstanceStorageConfigRequest& request, const AssociateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateLambdaFunctionAsyncHelper(const Model::AssociateLambdaFunctionRequest& request, const AssociateLambdaFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateLexBotAsyncHelper(const Model::AssociateLexBotRequest& request, const AssociateLexBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateRoutingProfileQueuesAsyncHelper(const Model::AssociateRoutingProfileQueuesRequest& request, const AssociateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateSecurityKeyAsyncHelper(const Model::AssociateSecurityKeyRequest& request, const AssociateSecurityKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateContactFlowAsyncHelper(const Model::CreateContactFlowRequest& request, const CreateContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInstanceAsyncHelper(const Model::CreateInstanceRequest& request, const CreateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRoutingProfileAsyncHelper(const Model::CreateRoutingProfileRequest& request, const CreateRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserAsyncHelper(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserHierarchyGroupAsyncHelper(const Model::CreateUserHierarchyGroupRequest& request, const CreateUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInstanceAsyncHelper(const Model::DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAsyncHelper(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserHierarchyGroupAsyncHelper(const Model::DeleteUserHierarchyGroupRequest& request, const DeleteUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeContactFlowAsyncHelper(const Model::DescribeContactFlowRequest& request, const DescribeContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstanceAsyncHelper(const Model::DescribeInstanceRequest& request, const DescribeInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstanceAttributeAsyncHelper(const Model::DescribeInstanceAttributeRequest& request, const DescribeInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstanceStorageConfigAsyncHelper(const Model::DescribeInstanceStorageConfigRequest& request, const DescribeInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRoutingProfileAsyncHelper(const Model::DescribeRoutingProfileRequest& request, const DescribeRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserAsyncHelper(const Model::DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserHierarchyGroupAsyncHelper(const Model::DescribeUserHierarchyGroupRequest& request, const DescribeUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserHierarchyStructureAsyncHelper(const Model::DescribeUserHierarchyStructureRequest& request, const DescribeUserHierarchyStructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateApprovedOriginAsyncHelper(const Model::DisassociateApprovedOriginRequest& request, const DisassociateApprovedOriginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateInstanceStorageConfigAsyncHelper(const Model::DisassociateInstanceStorageConfigRequest& request, const DisassociateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateLambdaFunctionAsyncHelper(const Model::DisassociateLambdaFunctionRequest& request, const DisassociateLambdaFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateLexBotAsyncHelper(const Model::DisassociateLexBotRequest& request, const DisassociateLexBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateRoutingProfileQueuesAsyncHelper(const Model::DisassociateRoutingProfileQueuesRequest& request, const DisassociateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateSecurityKeyAsyncHelper(const Model::DisassociateSecurityKeyRequest& request, const DisassociateSecurityKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContactAttributesAsyncHelper(const Model::GetContactAttributesRequest& request, const GetContactAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCurrentMetricDataAsyncHelper(const Model::GetCurrentMetricDataRequest& request, const GetCurrentMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFederationTokenAsyncHelper(const Model::GetFederationTokenRequest& request, const GetFederationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMetricDataAsyncHelper(const Model::GetMetricDataRequest& request, const GetMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListApprovedOriginsAsyncHelper(const Model::ListApprovedOriginsRequest& request, const ListApprovedOriginsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListContactFlowsAsyncHelper(const Model::ListContactFlowsRequest& request, const ListContactFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListHoursOfOperationsAsyncHelper(const Model::ListHoursOfOperationsRequest& request, const ListHoursOfOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInstanceAttributesAsyncHelper(const Model::ListInstanceAttributesRequest& request, const ListInstanceAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInstanceStorageConfigsAsyncHelper(const Model::ListInstanceStorageConfigsRequest& request, const ListInstanceStorageConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInstancesAsyncHelper(const Model::ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLambdaFunctionsAsyncHelper(const Model::ListLambdaFunctionsRequest& request, const ListLambdaFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLexBotsAsyncHelper(const Model::ListLexBotsRequest& request, const ListLexBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPhoneNumbersAsyncHelper(const Model::ListPhoneNumbersRequest& request, const ListPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPromptsAsyncHelper(const Model::ListPromptsRequest& request, const ListPromptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListQueuesAsyncHelper(const Model::ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRoutingProfileQueuesAsyncHelper(const Model::ListRoutingProfileQueuesRequest& request, const ListRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRoutingProfilesAsyncHelper(const Model::ListRoutingProfilesRequest& request, const ListRoutingProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSecurityKeysAsyncHelper(const Model::ListSecurityKeysRequest& request, const ListSecurityKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSecurityProfilesAsyncHelper(const Model::ListSecurityProfilesRequest& request, const ListSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUserHierarchyGroupsAsyncHelper(const Model::ListUserHierarchyGroupsRequest& request, const ListUserHierarchyGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsersAsyncHelper(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResumeContactRecordingAsyncHelper(const Model::ResumeContactRecordingRequest& request, const ResumeContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartChatContactAsyncHelper(const Model::StartChatContactRequest& request, const StartChatContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartContactRecordingAsyncHelper(const Model::StartContactRecordingRequest& request, const StartContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartOutboundVoiceContactAsyncHelper(const Model::StartOutboundVoiceContactRequest& request, const StartOutboundVoiceContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopContactAsyncHelper(const Model::StopContactRequest& request, const StopContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopContactRecordingAsyncHelper(const Model::StopContactRecordingRequest& request, const StopContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SuspendContactRecordingAsyncHelper(const Model::SuspendContactRecordingRequest& request, const SuspendContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateContactAttributesAsyncHelper(const Model::UpdateContactAttributesRequest& request, const UpdateContactAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateContactFlowContentAsyncHelper(const Model::UpdateContactFlowContentRequest& request, const UpdateContactFlowContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateContactFlowNameAsyncHelper(const Model::UpdateContactFlowNameRequest& request, const UpdateContactFlowNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateInstanceAttributeAsyncHelper(const Model::UpdateInstanceAttributeRequest& request, const UpdateInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateInstanceStorageConfigAsyncHelper(const Model::UpdateInstanceStorageConfigRequest& request, const UpdateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRoutingProfileConcurrencyAsyncHelper(const Model::UpdateRoutingProfileConcurrencyRequest& request, const UpdateRoutingProfileConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRoutingProfileDefaultOutboundQueueAsyncHelper(const Model::UpdateRoutingProfileDefaultOutboundQueueRequest& request, const UpdateRoutingProfileDefaultOutboundQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRoutingProfileNameAsyncHelper(const Model::UpdateRoutingProfileNameRequest& request, const UpdateRoutingProfileNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRoutingProfileQueuesAsyncHelper(const Model::UpdateRoutingProfileQueuesRequest& request, const UpdateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserHierarchyAsyncHelper(const Model::UpdateUserHierarchyRequest& request, const UpdateUserHierarchyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserHierarchyGroupNameAsyncHelper(const Model::UpdateUserHierarchyGroupNameRequest& request, const UpdateUserHierarchyGroupNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserHierarchyStructureAsyncHelper(const Model::UpdateUserHierarchyStructureRequest& request, const UpdateUserHierarchyStructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserIdentityInfoAsyncHelper(const Model::UpdateUserIdentityInfoRequest& request, const UpdateUserIdentityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserPhoneConfigAsyncHelper(const Model::UpdateUserPhoneConfigRequest& request, const UpdateUserPhoneConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserRoutingProfileAsyncHelper(const Model::UpdateUserRoutingProfileRequest& request, const UpdateUserRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserSecurityProfilesAsyncHelper(const Model::UpdateUserSecurityProfilesRequest& request, const UpdateUserSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Connect
} // namespace Aws
