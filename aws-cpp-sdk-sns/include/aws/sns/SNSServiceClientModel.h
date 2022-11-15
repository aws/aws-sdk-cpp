/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/sns/SNSErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/sns/SNSEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SNSClient header */
#include <aws/sns/model/CheckIfPhoneNumberIsOptedOutResult.h>
#include <aws/sns/model/ConfirmSubscriptionResult.h>
#include <aws/sns/model/CreatePlatformApplicationResult.h>
#include <aws/sns/model/CreatePlatformEndpointResult.h>
#include <aws/sns/model/CreateSMSSandboxPhoneNumberResult.h>
#include <aws/sns/model/CreateTopicResult.h>
#include <aws/sns/model/DeleteSMSSandboxPhoneNumberResult.h>
#include <aws/sns/model/GetDataProtectionPolicyResult.h>
#include <aws/sns/model/GetEndpointAttributesResult.h>
#include <aws/sns/model/GetPlatformApplicationAttributesResult.h>
#include <aws/sns/model/GetSMSAttributesResult.h>
#include <aws/sns/model/GetSMSSandboxAccountStatusResult.h>
#include <aws/sns/model/GetSubscriptionAttributesResult.h>
#include <aws/sns/model/GetTopicAttributesResult.h>
#include <aws/sns/model/ListEndpointsByPlatformApplicationResult.h>
#include <aws/sns/model/ListOriginationNumbersResult.h>
#include <aws/sns/model/ListPhoneNumbersOptedOutResult.h>
#include <aws/sns/model/ListPlatformApplicationsResult.h>
#include <aws/sns/model/ListSMSSandboxPhoneNumbersResult.h>
#include <aws/sns/model/ListSubscriptionsResult.h>
#include <aws/sns/model/ListSubscriptionsByTopicResult.h>
#include <aws/sns/model/ListTagsForResourceResult.h>
#include <aws/sns/model/ListTopicsResult.h>
#include <aws/sns/model/OptInPhoneNumberResult.h>
#include <aws/sns/model/PublishResult.h>
#include <aws/sns/model/PublishBatchResult.h>
#include <aws/sns/model/SetSMSAttributesResult.h>
#include <aws/sns/model/SubscribeResult.h>
#include <aws/sns/model/TagResourceResult.h>
#include <aws/sns/model/UntagResourceResult.h>
#include <aws/sns/model/VerifySMSSandboxPhoneNumberResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in SNSClient header */

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

  namespace SNS
  {
    using SNSClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SNSEndpointProviderBase = Aws::SNS::Endpoint::SNSEndpointProviderBase;
    using SNSEndpointProvider = Aws::SNS::Endpoint::SNSEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SNSClient header */
      class AddPermissionRequest;
      class CheckIfPhoneNumberIsOptedOutRequest;
      class ConfirmSubscriptionRequest;
      class CreatePlatformApplicationRequest;
      class CreatePlatformEndpointRequest;
      class CreateSMSSandboxPhoneNumberRequest;
      class CreateTopicRequest;
      class DeleteEndpointRequest;
      class DeletePlatformApplicationRequest;
      class DeleteSMSSandboxPhoneNumberRequest;
      class DeleteTopicRequest;
      class GetDataProtectionPolicyRequest;
      class GetEndpointAttributesRequest;
      class GetPlatformApplicationAttributesRequest;
      class GetSMSAttributesRequest;
      class GetSMSSandboxAccountStatusRequest;
      class GetSubscriptionAttributesRequest;
      class GetTopicAttributesRequest;
      class ListEndpointsByPlatformApplicationRequest;
      class ListOriginationNumbersRequest;
      class ListPhoneNumbersOptedOutRequest;
      class ListPlatformApplicationsRequest;
      class ListSMSSandboxPhoneNumbersRequest;
      class ListSubscriptionsRequest;
      class ListSubscriptionsByTopicRequest;
      class ListTagsForResourceRequest;
      class ListTopicsRequest;
      class OptInPhoneNumberRequest;
      class PublishRequest;
      class PublishBatchRequest;
      class PutDataProtectionPolicyRequest;
      class RemovePermissionRequest;
      class SetEndpointAttributesRequest;
      class SetPlatformApplicationAttributesRequest;
      class SetSMSAttributesRequest;
      class SetSubscriptionAttributesRequest;
      class SetTopicAttributesRequest;
      class SubscribeRequest;
      class TagResourceRequest;
      class UnsubscribeRequest;
      class UntagResourceRequest;
      class VerifySMSSandboxPhoneNumberRequest;
      /* End of service model forward declarations required in SNSClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, SNSError> AddPermissionOutcome;
      typedef Aws::Utils::Outcome<CheckIfPhoneNumberIsOptedOutResult, SNSError> CheckIfPhoneNumberIsOptedOutOutcome;
      typedef Aws::Utils::Outcome<ConfirmSubscriptionResult, SNSError> ConfirmSubscriptionOutcome;
      typedef Aws::Utils::Outcome<CreatePlatformApplicationResult, SNSError> CreatePlatformApplicationOutcome;
      typedef Aws::Utils::Outcome<CreatePlatformEndpointResult, SNSError> CreatePlatformEndpointOutcome;
      typedef Aws::Utils::Outcome<CreateSMSSandboxPhoneNumberResult, SNSError> CreateSMSSandboxPhoneNumberOutcome;
      typedef Aws::Utils::Outcome<CreateTopicResult, SNSError> CreateTopicOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SNSError> DeleteEndpointOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SNSError> DeletePlatformApplicationOutcome;
      typedef Aws::Utils::Outcome<DeleteSMSSandboxPhoneNumberResult, SNSError> DeleteSMSSandboxPhoneNumberOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SNSError> DeleteTopicOutcome;
      typedef Aws::Utils::Outcome<GetDataProtectionPolicyResult, SNSError> GetDataProtectionPolicyOutcome;
      typedef Aws::Utils::Outcome<GetEndpointAttributesResult, SNSError> GetEndpointAttributesOutcome;
      typedef Aws::Utils::Outcome<GetPlatformApplicationAttributesResult, SNSError> GetPlatformApplicationAttributesOutcome;
      typedef Aws::Utils::Outcome<GetSMSAttributesResult, SNSError> GetSMSAttributesOutcome;
      typedef Aws::Utils::Outcome<GetSMSSandboxAccountStatusResult, SNSError> GetSMSSandboxAccountStatusOutcome;
      typedef Aws::Utils::Outcome<GetSubscriptionAttributesResult, SNSError> GetSubscriptionAttributesOutcome;
      typedef Aws::Utils::Outcome<GetTopicAttributesResult, SNSError> GetTopicAttributesOutcome;
      typedef Aws::Utils::Outcome<ListEndpointsByPlatformApplicationResult, SNSError> ListEndpointsByPlatformApplicationOutcome;
      typedef Aws::Utils::Outcome<ListOriginationNumbersResult, SNSError> ListOriginationNumbersOutcome;
      typedef Aws::Utils::Outcome<ListPhoneNumbersOptedOutResult, SNSError> ListPhoneNumbersOptedOutOutcome;
      typedef Aws::Utils::Outcome<ListPlatformApplicationsResult, SNSError> ListPlatformApplicationsOutcome;
      typedef Aws::Utils::Outcome<ListSMSSandboxPhoneNumbersResult, SNSError> ListSMSSandboxPhoneNumbersOutcome;
      typedef Aws::Utils::Outcome<ListSubscriptionsResult, SNSError> ListSubscriptionsOutcome;
      typedef Aws::Utils::Outcome<ListSubscriptionsByTopicResult, SNSError> ListSubscriptionsByTopicOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, SNSError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTopicsResult, SNSError> ListTopicsOutcome;
      typedef Aws::Utils::Outcome<OptInPhoneNumberResult, SNSError> OptInPhoneNumberOutcome;
      typedef Aws::Utils::Outcome<PublishResult, SNSError> PublishOutcome;
      typedef Aws::Utils::Outcome<PublishBatchResult, SNSError> PublishBatchOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SNSError> PutDataProtectionPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SNSError> RemovePermissionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SNSError> SetEndpointAttributesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SNSError> SetPlatformApplicationAttributesOutcome;
      typedef Aws::Utils::Outcome<SetSMSAttributesResult, SNSError> SetSMSAttributesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SNSError> SetSubscriptionAttributesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SNSError> SetTopicAttributesOutcome;
      typedef Aws::Utils::Outcome<SubscribeResult, SNSError> SubscribeOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, SNSError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SNSError> UnsubscribeOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, SNSError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<VerifySMSSandboxPhoneNumberResult, SNSError> VerifySMSSandboxPhoneNumberOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddPermissionOutcome> AddPermissionOutcomeCallable;
      typedef std::future<CheckIfPhoneNumberIsOptedOutOutcome> CheckIfPhoneNumberIsOptedOutOutcomeCallable;
      typedef std::future<ConfirmSubscriptionOutcome> ConfirmSubscriptionOutcomeCallable;
      typedef std::future<CreatePlatformApplicationOutcome> CreatePlatformApplicationOutcomeCallable;
      typedef std::future<CreatePlatformEndpointOutcome> CreatePlatformEndpointOutcomeCallable;
      typedef std::future<CreateSMSSandboxPhoneNumberOutcome> CreateSMSSandboxPhoneNumberOutcomeCallable;
      typedef std::future<CreateTopicOutcome> CreateTopicOutcomeCallable;
      typedef std::future<DeleteEndpointOutcome> DeleteEndpointOutcomeCallable;
      typedef std::future<DeletePlatformApplicationOutcome> DeletePlatformApplicationOutcomeCallable;
      typedef std::future<DeleteSMSSandboxPhoneNumberOutcome> DeleteSMSSandboxPhoneNumberOutcomeCallable;
      typedef std::future<DeleteTopicOutcome> DeleteTopicOutcomeCallable;
      typedef std::future<GetDataProtectionPolicyOutcome> GetDataProtectionPolicyOutcomeCallable;
      typedef std::future<GetEndpointAttributesOutcome> GetEndpointAttributesOutcomeCallable;
      typedef std::future<GetPlatformApplicationAttributesOutcome> GetPlatformApplicationAttributesOutcomeCallable;
      typedef std::future<GetSMSAttributesOutcome> GetSMSAttributesOutcomeCallable;
      typedef std::future<GetSMSSandboxAccountStatusOutcome> GetSMSSandboxAccountStatusOutcomeCallable;
      typedef std::future<GetSubscriptionAttributesOutcome> GetSubscriptionAttributesOutcomeCallable;
      typedef std::future<GetTopicAttributesOutcome> GetTopicAttributesOutcomeCallable;
      typedef std::future<ListEndpointsByPlatformApplicationOutcome> ListEndpointsByPlatformApplicationOutcomeCallable;
      typedef std::future<ListOriginationNumbersOutcome> ListOriginationNumbersOutcomeCallable;
      typedef std::future<ListPhoneNumbersOptedOutOutcome> ListPhoneNumbersOptedOutOutcomeCallable;
      typedef std::future<ListPlatformApplicationsOutcome> ListPlatformApplicationsOutcomeCallable;
      typedef std::future<ListSMSSandboxPhoneNumbersOutcome> ListSMSSandboxPhoneNumbersOutcomeCallable;
      typedef std::future<ListSubscriptionsOutcome> ListSubscriptionsOutcomeCallable;
      typedef std::future<ListSubscriptionsByTopicOutcome> ListSubscriptionsByTopicOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTopicsOutcome> ListTopicsOutcomeCallable;
      typedef std::future<OptInPhoneNumberOutcome> OptInPhoneNumberOutcomeCallable;
      typedef std::future<PublishOutcome> PublishOutcomeCallable;
      typedef std::future<PublishBatchOutcome> PublishBatchOutcomeCallable;
      typedef std::future<PutDataProtectionPolicyOutcome> PutDataProtectionPolicyOutcomeCallable;
      typedef std::future<RemovePermissionOutcome> RemovePermissionOutcomeCallable;
      typedef std::future<SetEndpointAttributesOutcome> SetEndpointAttributesOutcomeCallable;
      typedef std::future<SetPlatformApplicationAttributesOutcome> SetPlatformApplicationAttributesOutcomeCallable;
      typedef std::future<SetSMSAttributesOutcome> SetSMSAttributesOutcomeCallable;
      typedef std::future<SetSubscriptionAttributesOutcome> SetSubscriptionAttributesOutcomeCallable;
      typedef std::future<SetTopicAttributesOutcome> SetTopicAttributesOutcomeCallable;
      typedef std::future<SubscribeOutcome> SubscribeOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UnsubscribeOutcome> UnsubscribeOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<VerifySMSSandboxPhoneNumberOutcome> VerifySMSSandboxPhoneNumberOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SNSClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SNSClient*, const Model::AddPermissionRequest&, const Model::AddPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddPermissionResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::CheckIfPhoneNumberIsOptedOutRequest&, const Model::CheckIfPhoneNumberIsOptedOutOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CheckIfPhoneNumberIsOptedOutResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ConfirmSubscriptionRequest&, const Model::ConfirmSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmSubscriptionResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::CreatePlatformApplicationRequest&, const Model::CreatePlatformApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePlatformApplicationResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::CreatePlatformEndpointRequest&, const Model::CreatePlatformEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePlatformEndpointResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::CreateSMSSandboxPhoneNumberRequest&, const Model::CreateSMSSandboxPhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSMSSandboxPhoneNumberResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::CreateTopicRequest&, const Model::CreateTopicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTopicResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::DeleteEndpointRequest&, const Model::DeleteEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::DeletePlatformApplicationRequest&, const Model::DeletePlatformApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePlatformApplicationResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::DeleteSMSSandboxPhoneNumberRequest&, const Model::DeleteSMSSandboxPhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSMSSandboxPhoneNumberResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::DeleteTopicRequest&, const Model::DeleteTopicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTopicResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::GetDataProtectionPolicyRequest&, const Model::GetDataProtectionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataProtectionPolicyResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::GetEndpointAttributesRequest&, const Model::GetEndpointAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEndpointAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::GetPlatformApplicationAttributesRequest&, const Model::GetPlatformApplicationAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPlatformApplicationAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::GetSMSAttributesRequest&, const Model::GetSMSAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSMSAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::GetSMSSandboxAccountStatusRequest&, const Model::GetSMSSandboxAccountStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSMSSandboxAccountStatusResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::GetSubscriptionAttributesRequest&, const Model::GetSubscriptionAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubscriptionAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::GetTopicAttributesRequest&, const Model::GetTopicAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTopicAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListEndpointsByPlatformApplicationRequest&, const Model::ListEndpointsByPlatformApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEndpointsByPlatformApplicationResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListOriginationNumbersRequest&, const Model::ListOriginationNumbersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOriginationNumbersResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListPhoneNumbersOptedOutRequest&, const Model::ListPhoneNumbersOptedOutOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPhoneNumbersOptedOutResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListPlatformApplicationsRequest&, const Model::ListPlatformApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPlatformApplicationsResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListSMSSandboxPhoneNumbersRequest&, const Model::ListSMSSandboxPhoneNumbersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSMSSandboxPhoneNumbersResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListSubscriptionsRequest&, const Model::ListSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListSubscriptionsByTopicRequest&, const Model::ListSubscriptionsByTopicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscriptionsByTopicResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListTopicsRequest&, const Model::ListTopicsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTopicsResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::OptInPhoneNumberRequest&, const Model::OptInPhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > OptInPhoneNumberResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::PublishRequest&, const Model::PublishOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PublishResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::PublishBatchRequest&, const Model::PublishBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PublishBatchResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::PutDataProtectionPolicyRequest&, const Model::PutDataProtectionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDataProtectionPolicyResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::RemovePermissionRequest&, const Model::RemovePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemovePermissionResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::SetEndpointAttributesRequest&, const Model::SetEndpointAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetEndpointAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::SetPlatformApplicationAttributesRequest&, const Model::SetPlatformApplicationAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetPlatformApplicationAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::SetSMSAttributesRequest&, const Model::SetSMSAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetSMSAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::SetSubscriptionAttributesRequest&, const Model::SetSubscriptionAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetSubscriptionAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::SetTopicAttributesRequest&, const Model::SetTopicAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetTopicAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::SubscribeRequest&, const Model::SubscribeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubscribeResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::UnsubscribeRequest&, const Model::UnsubscribeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnsubscribeResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::VerifySMSSandboxPhoneNumberRequest&, const Model::VerifySMSSandboxPhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifySMSSandboxPhoneNumberResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SNS
} // namespace Aws
