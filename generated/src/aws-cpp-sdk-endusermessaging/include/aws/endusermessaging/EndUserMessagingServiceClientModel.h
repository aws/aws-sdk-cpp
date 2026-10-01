/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessagingEndpointProvider.h>
#include <aws/endusermessaging/EndUserMessagingErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in EndUserMessagingClient header */
#include <aws/endusermessaging/model/CreateBrandProfileAttributesResult.h>
#include <aws/endusermessaging/model/CreateBrandProfileFromRegistrationResult.h>
#include <aws/endusermessaging/model/CreateBrandProfileResult.h>
#include <aws/endusermessaging/model/CreateNotifyCodeConfigurationResult.h>
#include <aws/endusermessaging/model/CreateRegistrationsFromBrandProfileResult.h>
#include <aws/endusermessaging/model/DeleteBrandProfileAttributeResult.h>
#include <aws/endusermessaging/model/DeleteBrandProfileResult.h>
#include <aws/endusermessaging/model/DeleteNotifyCodeConfigurationResult.h>
#include <aws/endusermessaging/model/GetBrandProfileAttributeResult.h>
#include <aws/endusermessaging/model/GetBrandProfileResult.h>
#include <aws/endusermessaging/model/GetJobResult.h>
#include <aws/endusermessaging/model/GetNotifyCodeConfigurationResult.h>
#include <aws/endusermessaging/model/ListBrandProfileAttributesResult.h>
#include <aws/endusermessaging/model/ListBrandProfilesRequest.h>
#include <aws/endusermessaging/model/ListBrandProfilesResult.h>
#include <aws/endusermessaging/model/ListJobsRequest.h>
#include <aws/endusermessaging/model/ListJobsResult.h>
#include <aws/endusermessaging/model/ListNotifyCodeConfigurationsRequest.h>
#include <aws/endusermessaging/model/ListNotifyCodeConfigurationsResult.h>
#include <aws/endusermessaging/model/ListRegistrationsFromBrandProfileResult.h>
#include <aws/endusermessaging/model/ListTagsForResourceResult.h>
#include <aws/endusermessaging/model/SendNotifyCodeVerificationResult.h>
#include <aws/endusermessaging/model/TagResourceResult.h>
#include <aws/endusermessaging/model/UntagResourceResult.h>
#include <aws/endusermessaging/model/UpdateBrandProfileAttributeResult.h>
#include <aws/endusermessaging/model/UpdateBrandProfileFromRegistrationResult.h>
#include <aws/endusermessaging/model/UpdateBrandProfileResult.h>
#include <aws/endusermessaging/model/UpdateNotifyCodeConfigurationResult.h>
#include <aws/endusermessaging/model/UpdateRegistrationsFromBrandProfileResult.h>
#include <aws/endusermessaging/model/ValidateNotifyCodeVerificationResult.h>
/* End of service model headers required in EndUserMessagingClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace EndUserMessaging {
using EndUserMessagingClientConfiguration = Aws::Client::GenericClientConfiguration;
using EndUserMessagingEndpointProviderBase = Aws::EndUserMessaging::Endpoint::EndUserMessagingEndpointProviderBase;
using EndUserMessagingEndpointProvider = Aws::EndUserMessaging::Endpoint::EndUserMessagingEndpointProvider;

namespace Model {
/* Service model forward declarations required in EndUserMessagingClient header */
class CreateBrandProfileRequest;
class CreateBrandProfileAttributesRequest;
class CreateBrandProfileFromRegistrationRequest;
class CreateNotifyCodeConfigurationRequest;
class CreateRegistrationsFromBrandProfileRequest;
class DeleteBrandProfileRequest;
class DeleteBrandProfileAttributeRequest;
class DeleteNotifyCodeConfigurationRequest;
class GetBrandProfileRequest;
class GetBrandProfileAttributeRequest;
class GetJobRequest;
class GetNotifyCodeConfigurationRequest;
class ListBrandProfileAttributesRequest;
class ListBrandProfilesRequest;
class ListJobsRequest;
class ListNotifyCodeConfigurationsRequest;
class ListRegistrationsFromBrandProfileRequest;
class ListTagsForResourceRequest;
class SendNotifyCodeVerificationRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateBrandProfileRequest;
class UpdateBrandProfileAttributeRequest;
class UpdateBrandProfileFromRegistrationRequest;
class UpdateNotifyCodeConfigurationRequest;
class UpdateRegistrationsFromBrandProfileRequest;
class ValidateNotifyCodeVerificationRequest;
/* End of service model forward declarations required in EndUserMessagingClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateBrandProfileResult, EndUserMessagingError> CreateBrandProfileOutcome;
typedef Aws::Utils::Outcome<CreateBrandProfileAttributesResult, EndUserMessagingError> CreateBrandProfileAttributesOutcome;
typedef Aws::Utils::Outcome<CreateBrandProfileFromRegistrationResult, EndUserMessagingError> CreateBrandProfileFromRegistrationOutcome;
typedef Aws::Utils::Outcome<CreateNotifyCodeConfigurationResult, EndUserMessagingError> CreateNotifyCodeConfigurationOutcome;
typedef Aws::Utils::Outcome<CreateRegistrationsFromBrandProfileResult, EndUserMessagingError> CreateRegistrationsFromBrandProfileOutcome;
typedef Aws::Utils::Outcome<DeleteBrandProfileResult, EndUserMessagingError> DeleteBrandProfileOutcome;
typedef Aws::Utils::Outcome<DeleteBrandProfileAttributeResult, EndUserMessagingError> DeleteBrandProfileAttributeOutcome;
typedef Aws::Utils::Outcome<DeleteNotifyCodeConfigurationResult, EndUserMessagingError> DeleteNotifyCodeConfigurationOutcome;
typedef Aws::Utils::Outcome<GetBrandProfileResult, EndUserMessagingError> GetBrandProfileOutcome;
typedef Aws::Utils::Outcome<GetBrandProfileAttributeResult, EndUserMessagingError> GetBrandProfileAttributeOutcome;
typedef Aws::Utils::Outcome<GetJobResult, EndUserMessagingError> GetJobOutcome;
typedef Aws::Utils::Outcome<GetNotifyCodeConfigurationResult, EndUserMessagingError> GetNotifyCodeConfigurationOutcome;
typedef Aws::Utils::Outcome<ListBrandProfileAttributesResult, EndUserMessagingError> ListBrandProfileAttributesOutcome;
typedef Aws::Utils::Outcome<ListBrandProfilesResult, EndUserMessagingError> ListBrandProfilesOutcome;
typedef Aws::Utils::Outcome<ListJobsResult, EndUserMessagingError> ListJobsOutcome;
typedef Aws::Utils::Outcome<ListNotifyCodeConfigurationsResult, EndUserMessagingError> ListNotifyCodeConfigurationsOutcome;
typedef Aws::Utils::Outcome<ListRegistrationsFromBrandProfileResult, EndUserMessagingError> ListRegistrationsFromBrandProfileOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, EndUserMessagingError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<SendNotifyCodeVerificationResult, EndUserMessagingError> SendNotifyCodeVerificationOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, EndUserMessagingError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, EndUserMessagingError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateBrandProfileResult, EndUserMessagingError> UpdateBrandProfileOutcome;
typedef Aws::Utils::Outcome<UpdateBrandProfileAttributeResult, EndUserMessagingError> UpdateBrandProfileAttributeOutcome;
typedef Aws::Utils::Outcome<UpdateBrandProfileFromRegistrationResult, EndUserMessagingError> UpdateBrandProfileFromRegistrationOutcome;
typedef Aws::Utils::Outcome<UpdateNotifyCodeConfigurationResult, EndUserMessagingError> UpdateNotifyCodeConfigurationOutcome;
typedef Aws::Utils::Outcome<UpdateRegistrationsFromBrandProfileResult, EndUserMessagingError> UpdateRegistrationsFromBrandProfileOutcome;
typedef Aws::Utils::Outcome<ValidateNotifyCodeVerificationResult, EndUserMessagingError> ValidateNotifyCodeVerificationOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateBrandProfileOutcome> CreateBrandProfileOutcomeCallable;
typedef std::future<CreateBrandProfileAttributesOutcome> CreateBrandProfileAttributesOutcomeCallable;
typedef std::future<CreateBrandProfileFromRegistrationOutcome> CreateBrandProfileFromRegistrationOutcomeCallable;
typedef std::future<CreateNotifyCodeConfigurationOutcome> CreateNotifyCodeConfigurationOutcomeCallable;
typedef std::future<CreateRegistrationsFromBrandProfileOutcome> CreateRegistrationsFromBrandProfileOutcomeCallable;
typedef std::future<DeleteBrandProfileOutcome> DeleteBrandProfileOutcomeCallable;
typedef std::future<DeleteBrandProfileAttributeOutcome> DeleteBrandProfileAttributeOutcomeCallable;
typedef std::future<DeleteNotifyCodeConfigurationOutcome> DeleteNotifyCodeConfigurationOutcomeCallable;
typedef std::future<GetBrandProfileOutcome> GetBrandProfileOutcomeCallable;
typedef std::future<GetBrandProfileAttributeOutcome> GetBrandProfileAttributeOutcomeCallable;
typedef std::future<GetJobOutcome> GetJobOutcomeCallable;
typedef std::future<GetNotifyCodeConfigurationOutcome> GetNotifyCodeConfigurationOutcomeCallable;
typedef std::future<ListBrandProfileAttributesOutcome> ListBrandProfileAttributesOutcomeCallable;
typedef std::future<ListBrandProfilesOutcome> ListBrandProfilesOutcomeCallable;
typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
typedef std::future<ListNotifyCodeConfigurationsOutcome> ListNotifyCodeConfigurationsOutcomeCallable;
typedef std::future<ListRegistrationsFromBrandProfileOutcome> ListRegistrationsFromBrandProfileOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<SendNotifyCodeVerificationOutcome> SendNotifyCodeVerificationOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateBrandProfileOutcome> UpdateBrandProfileOutcomeCallable;
typedef std::future<UpdateBrandProfileAttributeOutcome> UpdateBrandProfileAttributeOutcomeCallable;
typedef std::future<UpdateBrandProfileFromRegistrationOutcome> UpdateBrandProfileFromRegistrationOutcomeCallable;
typedef std::future<UpdateNotifyCodeConfigurationOutcome> UpdateNotifyCodeConfigurationOutcomeCallable;
typedef std::future<UpdateRegistrationsFromBrandProfileOutcome> UpdateRegistrationsFromBrandProfileOutcomeCallable;
typedef std::future<ValidateNotifyCodeVerificationOutcome> ValidateNotifyCodeVerificationOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class EndUserMessagingClient;

/* Service model async handlers definitions */
typedef std::function<void(const EndUserMessagingClient*, const Model::CreateBrandProfileRequest&, const Model::CreateBrandProfileOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateBrandProfileResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::CreateBrandProfileAttributesRequest&,
                           const Model::CreateBrandProfileAttributesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateBrandProfileAttributesResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::CreateBrandProfileFromRegistrationRequest&,
                           const Model::CreateBrandProfileFromRegistrationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateBrandProfileFromRegistrationResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::CreateNotifyCodeConfigurationRequest&,
                           const Model::CreateNotifyCodeConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateNotifyCodeConfigurationResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::CreateRegistrationsFromBrandProfileRequest&,
                           const Model::CreateRegistrationsFromBrandProfileOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateRegistrationsFromBrandProfileResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::DeleteBrandProfileRequest&, const Model::DeleteBrandProfileOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteBrandProfileResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::DeleteBrandProfileAttributeRequest&,
                           const Model::DeleteBrandProfileAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteBrandProfileAttributeResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::DeleteNotifyCodeConfigurationRequest&,
                           const Model::DeleteNotifyCodeConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteNotifyCodeConfigurationResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::GetBrandProfileRequest&, const Model::GetBrandProfileOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetBrandProfileResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::GetBrandProfileAttributeRequest&,
                           const Model::GetBrandProfileAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetBrandProfileAttributeResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::GetJobRequest&, const Model::GetJobOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetJobResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::GetNotifyCodeConfigurationRequest&,
                           const Model::GetNotifyCodeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetNotifyCodeConfigurationResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::ListBrandProfileAttributesRequest&,
                           const Model::ListBrandProfileAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListBrandProfileAttributesResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::ListBrandProfilesRequest&, const Model::ListBrandProfilesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListBrandProfilesResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListJobsResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::ListNotifyCodeConfigurationsRequest&,
                           const Model::ListNotifyCodeConfigurationsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListNotifyCodeConfigurationsResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::ListRegistrationsFromBrandProfileRequest&,
                           const Model::ListRegistrationsFromBrandProfileOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListRegistrationsFromBrandProfileResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::ListTagsForResourceRequest&,
                           const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::SendNotifyCodeVerificationRequest&,
                           const Model::SendNotifyCodeVerificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SendNotifyCodeVerificationResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::UpdateBrandProfileRequest&, const Model::UpdateBrandProfileOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateBrandProfileResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::UpdateBrandProfileAttributeRequest&,
                           const Model::UpdateBrandProfileAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateBrandProfileAttributeResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::UpdateBrandProfileFromRegistrationRequest&,
                           const Model::UpdateBrandProfileFromRegistrationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateBrandProfileFromRegistrationResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::UpdateNotifyCodeConfigurationRequest&,
                           const Model::UpdateNotifyCodeConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateNotifyCodeConfigurationResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::UpdateRegistrationsFromBrandProfileRequest&,
                           const Model::UpdateRegistrationsFromBrandProfileOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateRegistrationsFromBrandProfileResponseReceivedHandler;
typedef std::function<void(const EndUserMessagingClient*, const Model::ValidateNotifyCodeVerificationRequest&,
                           const Model::ValidateNotifyCodeVerificationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ValidateNotifyCodeVerificationResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace EndUserMessaging
}  // namespace Aws
