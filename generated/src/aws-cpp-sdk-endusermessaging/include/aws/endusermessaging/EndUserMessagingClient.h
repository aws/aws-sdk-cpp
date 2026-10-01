/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/EndUserMessagingPaginationBase.h>
#include <aws/endusermessaging/EndUserMessagingServiceClientModel.h>
#include <aws/endusermessaging/EndUserMessagingWaiter.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

namespace Aws {
namespace EndUserMessaging {
/**
 * <p>AWS End User Messaging provides a set of APIs to manage brand profiles,
 * synchronize brand profile data with SMS and Rich Communication Services (RCS)
 * registrations, and send and validate one-time passcodes across the SMS, voice,
 * and WhatsApp channels.</p>
 */
class AWS_ENDUSERMESSAGING_API EndUserMessagingClient : public Aws::Client::AWSJsonClient,
                                                        public Aws::Client::ClientWithAsyncTemplateMethods<EndUserMessagingClient>,
                                                        public EndUserMessagingPaginationBase<EndUserMessagingClient>,
                                                        public EndUserMessagingWaiter<EndUserMessagingClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef EndUserMessagingClientConfiguration ClientConfigurationType;
  typedef EndUserMessagingEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  EndUserMessagingClient(const Aws::EndUserMessaging::EndUserMessagingClientConfiguration& clientConfiguration =
                             Aws::EndUserMessaging::EndUserMessagingClientConfiguration(),
                         std::shared_ptr<EndUserMessagingEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  EndUserMessagingClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<EndUserMessagingEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::EndUserMessaging::EndUserMessagingClientConfiguration& clientConfiguration =
                             Aws::EndUserMessaging::EndUserMessagingClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  EndUserMessagingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<EndUserMessagingEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::EndUserMessaging::EndUserMessagingClientConfiguration& clientConfiguration =
                             Aws::EndUserMessaging::EndUserMessagingClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  EndUserMessagingClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  EndUserMessagingClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  EndUserMessagingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~EndUserMessagingClient();

  /**
   * <p>Creates a brand profile. A brand profile is a lightweight container that
   * holds your brand identity information as flexible attributes. After you create a
   * brand profile, use the CreateBrandProfileAttributes operation to add company
   * information, addresses, compliance documents, and logos.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/CreateBrandProfile">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateBrandProfileOutcome CreateBrandProfile(const Model::CreateBrandProfileRequest& request) const;

  /**
   * A Callable wrapper for CreateBrandProfile that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateBrandProfileRequestT = Model::CreateBrandProfileRequest>
  Model::CreateBrandProfileOutcomeCallable CreateBrandProfileCallable(const CreateBrandProfileRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::CreateBrandProfile, request);
  }

  /**
   * An Async wrapper for CreateBrandProfile that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateBrandProfileRequestT = Model::CreateBrandProfileRequest>
  void CreateBrandProfileAsync(const CreateBrandProfileRequestT& request, const CreateBrandProfileResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::CreateBrandProfile, request, handler, context);
  }

  /**
   * <p>Creates up to 10 attributes for a brand profile in a single request. For
   * attributes of type IMAGE or DOCUMENT, the response includes a presigned Amazon
   * S3 URL that you use to upload the media. This operation is atomic: either all of
   * the attributes are created, or none of them are.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/CreateBrandProfileAttributes">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateBrandProfileAttributesOutcome CreateBrandProfileAttributes(
      const Model::CreateBrandProfileAttributesRequest& request) const;

  /**
   * A Callable wrapper for CreateBrandProfileAttributes that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateBrandProfileAttributesRequestT = Model::CreateBrandProfileAttributesRequest>
  Model::CreateBrandProfileAttributesOutcomeCallable CreateBrandProfileAttributesCallable(
      const CreateBrandProfileAttributesRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::CreateBrandProfileAttributes, request);
  }

  /**
   * An Async wrapper for CreateBrandProfileAttributes that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateBrandProfileAttributesRequestT = Model::CreateBrandProfileAttributesRequest>
  void CreateBrandProfileAttributesAsync(const CreateBrandProfileAttributesRequestT& request,
                                         const CreateBrandProfileAttributesResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::CreateBrandProfileAttributes, request, handler, context);
  }

  /**
   * <p>Creates a brand profile and populates its attributes from an existing
   * registration. This operation runs asynchronously. Use the GetJob operation to
   * track its progress.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/CreateBrandProfileFromRegistration">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateBrandProfileFromRegistrationOutcome CreateBrandProfileFromRegistration(
      const Model::CreateBrandProfileFromRegistrationRequest& request) const;

  /**
   * A Callable wrapper for CreateBrandProfileFromRegistration that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename CreateBrandProfileFromRegistrationRequestT = Model::CreateBrandProfileFromRegistrationRequest>
  Model::CreateBrandProfileFromRegistrationOutcomeCallable CreateBrandProfileFromRegistrationCallable(
      const CreateBrandProfileFromRegistrationRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::CreateBrandProfileFromRegistration, request);
  }

  /**
   * An Async wrapper for CreateBrandProfileFromRegistration that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename CreateBrandProfileFromRegistrationRequestT = Model::CreateBrandProfileFromRegistrationRequest>
  void CreateBrandProfileFromRegistrationAsync(const CreateBrandProfileFromRegistrationRequestT& request,
                                               const CreateBrandProfileFromRegistrationResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::CreateBrandProfileFromRegistration, request, handler, context);
  }

  /**
   * <p>Creates a notify code configuration. A notify code configuration is a
   * reusable policy that defines how one-time passcodes are generated and rendered,
   * including the code type, length, validity period, maximum number of attempts,
   * and channel templates.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/CreateNotifyCodeConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateNotifyCodeConfigurationOutcome CreateNotifyCodeConfiguration(
      const Model::CreateNotifyCodeConfigurationRequest& request) const;

  /**
   * A Callable wrapper for CreateNotifyCodeConfiguration that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateNotifyCodeConfigurationRequestT = Model::CreateNotifyCodeConfigurationRequest>
  Model::CreateNotifyCodeConfigurationOutcomeCallable CreateNotifyCodeConfigurationCallable(
      const CreateNotifyCodeConfigurationRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::CreateNotifyCodeConfiguration, request);
  }

  /**
   * An Async wrapper for CreateNotifyCodeConfiguration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateNotifyCodeConfigurationRequestT = Model::CreateNotifyCodeConfigurationRequest>
  void CreateNotifyCodeConfigurationAsync(const CreateNotifyCodeConfigurationRequestT& request,
                                          const CreateNotifyCodeConfigurationResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::CreateNotifyCodeConfiguration, request, handler, context);
  }

  /**
   * <p>Creates one or more registrations in the DRAFT state and prefills their
   * fields from the attributes of a brand profile. This operation runs
   * asynchronously. Use the GetJob operation to track its progress.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/CreateRegistrationsFromBrandProfile">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateRegistrationsFromBrandProfileOutcome CreateRegistrationsFromBrandProfile(
      const Model::CreateRegistrationsFromBrandProfileRequest& request) const;

  /**
   * A Callable wrapper for CreateRegistrationsFromBrandProfile that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename CreateRegistrationsFromBrandProfileRequestT = Model::CreateRegistrationsFromBrandProfileRequest>
  Model::CreateRegistrationsFromBrandProfileOutcomeCallable CreateRegistrationsFromBrandProfileCallable(
      const CreateRegistrationsFromBrandProfileRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::CreateRegistrationsFromBrandProfile, request);
  }

  /**
   * An Async wrapper for CreateRegistrationsFromBrandProfile that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename CreateRegistrationsFromBrandProfileRequestT = Model::CreateRegistrationsFromBrandProfileRequest>
  void CreateRegistrationsFromBrandProfileAsync(const CreateRegistrationsFromBrandProfileRequestT& request,
                                                const CreateRegistrationsFromBrandProfileResponseReceivedHandler& handler,
                                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::CreateRegistrationsFromBrandProfile, request, handler, context);
  }

  /**
   * <p>Deletes a brand profile. This operation also deletes the attributes of the
   * profile and any associated media. The request fails if deletion protection is
   * enabled for the profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/DeleteBrandProfile">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteBrandProfileOutcome DeleteBrandProfile(const Model::DeleteBrandProfileRequest& request) const;

  /**
   * A Callable wrapper for DeleteBrandProfile that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteBrandProfileRequestT = Model::DeleteBrandProfileRequest>
  Model::DeleteBrandProfileOutcomeCallable DeleteBrandProfileCallable(const DeleteBrandProfileRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::DeleteBrandProfile, request);
  }

  /**
   * An Async wrapper for DeleteBrandProfile that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteBrandProfileRequestT = Model::DeleteBrandProfileRequest>
  void DeleteBrandProfileAsync(const DeleteBrandProfileRequestT& request, const DeleteBrandProfileResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::DeleteBrandProfile, request, handler, context);
  }

  /**
   * <p>Deletes a brand profile attribute. If the attribute stores media, this
   * operation also deletes the associated media.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/DeleteBrandProfileAttribute">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteBrandProfileAttributeOutcome DeleteBrandProfileAttribute(
      const Model::DeleteBrandProfileAttributeRequest& request) const;

  /**
   * A Callable wrapper for DeleteBrandProfileAttribute that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteBrandProfileAttributeRequestT = Model::DeleteBrandProfileAttributeRequest>
  Model::DeleteBrandProfileAttributeOutcomeCallable DeleteBrandProfileAttributeCallable(
      const DeleteBrandProfileAttributeRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::DeleteBrandProfileAttribute, request);
  }

  /**
   * An Async wrapper for DeleteBrandProfileAttribute that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteBrandProfileAttributeRequestT = Model::DeleteBrandProfileAttributeRequest>
  void DeleteBrandProfileAttributeAsync(const DeleteBrandProfileAttributeRequestT& request,
                                        const DeleteBrandProfileAttributeResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::DeleteBrandProfileAttribute, request, handler, context);
  }

  /**
   * <p>Deletes a notify code configuration. Verifications that are already in
   * progress are not affected, because they capture the policy at the time that the
   * passcode was sent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/DeleteNotifyCodeConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteNotifyCodeConfigurationOutcome DeleteNotifyCodeConfiguration(
      const Model::DeleteNotifyCodeConfigurationRequest& request) const;

  /**
   * A Callable wrapper for DeleteNotifyCodeConfiguration that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteNotifyCodeConfigurationRequestT = Model::DeleteNotifyCodeConfigurationRequest>
  Model::DeleteNotifyCodeConfigurationOutcomeCallable DeleteNotifyCodeConfigurationCallable(
      const DeleteNotifyCodeConfigurationRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::DeleteNotifyCodeConfiguration, request);
  }

  /**
   * An Async wrapper for DeleteNotifyCodeConfiguration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteNotifyCodeConfigurationRequestT = Model::DeleteNotifyCodeConfigurationRequest>
  void DeleteNotifyCodeConfigurationAsync(const DeleteNotifyCodeConfigurationRequestT& request,
                                          const DeleteNotifyCodeConfigurationResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::DeleteNotifyCodeConfiguration, request, handler, context);
  }

  /**
   * <p>Retrieves the metadata for a brand profile, including its name, status,
   * deletion protection setting, and timestamps. To retrieve the attributes of the
   * profile, use the ListBrandProfileAttributes operation.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/GetBrandProfile">AWS
   * API Reference</a></p>
   */
  virtual Model::GetBrandProfileOutcome GetBrandProfile(const Model::GetBrandProfileRequest& request) const;

  /**
   * A Callable wrapper for GetBrandProfile that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetBrandProfileRequestT = Model::GetBrandProfileRequest>
  Model::GetBrandProfileOutcomeCallable GetBrandProfileCallable(const GetBrandProfileRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::GetBrandProfile, request);
  }

  /**
   * An Async wrapper for GetBrandProfile that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetBrandProfileRequestT = Model::GetBrandProfileRequest>
  void GetBrandProfileAsync(const GetBrandProfileRequestT& request, const GetBrandProfileResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::GetBrandProfile, request, handler, context);
  }

  /**
   * <p>Retrieves a single brand profile attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/GetBrandProfileAttribute">AWS
   * API Reference</a></p>
   */
  virtual Model::GetBrandProfileAttributeOutcome GetBrandProfileAttribute(const Model::GetBrandProfileAttributeRequest& request) const;

  /**
   * A Callable wrapper for GetBrandProfileAttribute that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetBrandProfileAttributeRequestT = Model::GetBrandProfileAttributeRequest>
  Model::GetBrandProfileAttributeOutcomeCallable GetBrandProfileAttributeCallable(const GetBrandProfileAttributeRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::GetBrandProfileAttribute, request);
  }

  /**
   * An Async wrapper for GetBrandProfileAttribute that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetBrandProfileAttributeRequestT = Model::GetBrandProfileAttributeRequest>
  void GetBrandProfileAttributeAsync(const GetBrandProfileAttributeRequestT& request,
                                     const GetBrandProfileAttributeResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::GetBrandProfileAttribute, request, handler, context);
  }

  /**
   * <p>Retrieves the current state of an asynchronous job, including its status and
   * any resources that it created or updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/GetJob">AWS
   * API Reference</a></p>
   */
  virtual Model::GetJobOutcome GetJob(const Model::GetJobRequest& request) const;

  /**
   * A Callable wrapper for GetJob that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetJobRequestT = Model::GetJobRequest>
  Model::GetJobOutcomeCallable GetJobCallable(const GetJobRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::GetJob, request);
  }

  /**
   * An Async wrapper for GetJob that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetJobRequestT = Model::GetJobRequest>
  void GetJobAsync(const GetJobRequestT& request, const GetJobResponseReceivedHandler& handler,
                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::GetJob, request, handler, context);
  }

  /**
   * <p>Retrieves a notify code configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/GetNotifyCodeConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::GetNotifyCodeConfigurationOutcome GetNotifyCodeConfiguration(
      const Model::GetNotifyCodeConfigurationRequest& request) const;

  /**
   * A Callable wrapper for GetNotifyCodeConfiguration that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetNotifyCodeConfigurationRequestT = Model::GetNotifyCodeConfigurationRequest>
  Model::GetNotifyCodeConfigurationOutcomeCallable GetNotifyCodeConfigurationCallable(
      const GetNotifyCodeConfigurationRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::GetNotifyCodeConfiguration, request);
  }

  /**
   * An Async wrapper for GetNotifyCodeConfiguration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetNotifyCodeConfigurationRequestT = Model::GetNotifyCodeConfigurationRequest>
  void GetNotifyCodeConfigurationAsync(const GetNotifyCodeConfigurationRequestT& request,
                                       const GetNotifyCodeConfigurationResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::GetNotifyCodeConfiguration, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of the attributes for a brand
   * profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/ListBrandProfileAttributes">AWS
   * API Reference</a></p>
   */
  virtual Model::ListBrandProfileAttributesOutcome ListBrandProfileAttributes(
      const Model::ListBrandProfileAttributesRequest& request) const;

  /**
   * A Callable wrapper for ListBrandProfileAttributes that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListBrandProfileAttributesRequestT = Model::ListBrandProfileAttributesRequest>
  Model::ListBrandProfileAttributesOutcomeCallable ListBrandProfileAttributesCallable(
      const ListBrandProfileAttributesRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::ListBrandProfileAttributes, request);
  }

  /**
   * An Async wrapper for ListBrandProfileAttributes that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListBrandProfileAttributesRequestT = Model::ListBrandProfileAttributesRequest>
  void ListBrandProfileAttributesAsync(const ListBrandProfileAttributesRequestT& request,
                                       const ListBrandProfileAttributesResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::ListBrandProfileAttributes, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of the brand profiles in your account. Use the
   * nextToken parameter to retrieve additional results.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/ListBrandProfiles">AWS
   * API Reference</a></p>
   */
  virtual Model::ListBrandProfilesOutcome ListBrandProfiles(const Model::ListBrandProfilesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListBrandProfiles that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListBrandProfilesRequestT = Model::ListBrandProfilesRequest>
  Model::ListBrandProfilesOutcomeCallable ListBrandProfilesCallable(const ListBrandProfilesRequestT& request = {}) const {
    return SubmitCallable(&EndUserMessagingClient::ListBrandProfiles, request);
  }

  /**
   * An Async wrapper for ListBrandProfiles that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListBrandProfilesRequestT = Model::ListBrandProfilesRequest>
  void ListBrandProfilesAsync(const ListBrandProfilesResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const ListBrandProfilesRequestT& request = {}) const {
    return SubmitAsync(&EndUserMessagingClient::ListBrandProfiles, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of the asynchronous jobs in your account. You can
   * filter the results by status, brand profile, or operation type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/ListJobs">AWS
   * API Reference</a></p>
   */
  virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListJobs that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListJobsRequestT = Model::ListJobsRequest>
  Model::ListJobsOutcomeCallable ListJobsCallable(const ListJobsRequestT& request = {}) const {
    return SubmitCallable(&EndUserMessagingClient::ListJobs, request);
  }

  /**
   * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListJobsRequestT = Model::ListJobsRequest>
  void ListJobsAsync(const ListJobsResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                     const ListJobsRequestT& request = {}) const {
    return SubmitAsync(&EndUserMessagingClient::ListJobs, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of the notify code configurations in your
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/ListNotifyCodeConfigurations">AWS
   * API Reference</a></p>
   */
  virtual Model::ListNotifyCodeConfigurationsOutcome ListNotifyCodeConfigurations(
      const Model::ListNotifyCodeConfigurationsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListNotifyCodeConfigurations that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListNotifyCodeConfigurationsRequestT = Model::ListNotifyCodeConfigurationsRequest>
  Model::ListNotifyCodeConfigurationsOutcomeCallable ListNotifyCodeConfigurationsCallable(
      const ListNotifyCodeConfigurationsRequestT& request = {}) const {
    return SubmitCallable(&EndUserMessagingClient::ListNotifyCodeConfigurations, request);
  }

  /**
   * An Async wrapper for ListNotifyCodeConfigurations that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListNotifyCodeConfigurationsRequestT = Model::ListNotifyCodeConfigurationsRequest>
  void ListNotifyCodeConfigurationsAsync(const ListNotifyCodeConfigurationsResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                         const ListNotifyCodeConfigurationsRequestT& request = {}) const {
    return SubmitAsync(&EndUserMessagingClient::ListNotifyCodeConfigurations, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of the registrations that were created from a
   * brand profile through the synchronization operations.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/ListRegistrationsFromBrandProfile">AWS
   * API Reference</a></p>
   */
  virtual Model::ListRegistrationsFromBrandProfileOutcome ListRegistrationsFromBrandProfile(
      const Model::ListRegistrationsFromBrandProfileRequest& request) const;

  /**
   * A Callable wrapper for ListRegistrationsFromBrandProfile that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename ListRegistrationsFromBrandProfileRequestT = Model::ListRegistrationsFromBrandProfileRequest>
  Model::ListRegistrationsFromBrandProfileOutcomeCallable ListRegistrationsFromBrandProfileCallable(
      const ListRegistrationsFromBrandProfileRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::ListRegistrationsFromBrandProfile, request);
  }

  /**
   * An Async wrapper for ListRegistrationsFromBrandProfile that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListRegistrationsFromBrandProfileRequestT = Model::ListRegistrationsFromBrandProfileRequest>
  void ListRegistrationsFromBrandProfileAsync(const ListRegistrationsFromBrandProfileRequestT& request,
                                              const ListRegistrationsFromBrandProfileResponseReceivedHandler& handler,
                                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::ListRegistrationsFromBrandProfile, request, handler, context);
  }

  /**
   * <p>Retrieves the tags that are associated with a resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Generates a one-time passcode and delivers it to a recipient over the
   * requested channel. The passcode policy is captured from the referenced notify
   * code configuration at the time of the request, so later updates to the
   * configuration do not affect verifications that are already in
   * progress.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/SendNotifyCodeVerification">AWS
   * API Reference</a></p>
   */
  virtual Model::SendNotifyCodeVerificationOutcome SendNotifyCodeVerification(
      const Model::SendNotifyCodeVerificationRequest& request) const;

  /**
   * A Callable wrapper for SendNotifyCodeVerification that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename SendNotifyCodeVerificationRequestT = Model::SendNotifyCodeVerificationRequest>
  Model::SendNotifyCodeVerificationOutcomeCallable SendNotifyCodeVerificationCallable(
      const SendNotifyCodeVerificationRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::SendNotifyCodeVerification, request);
  }

  /**
   * An Async wrapper for SendNotifyCodeVerification that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename SendNotifyCodeVerificationRequestT = Model::SendNotifyCodeVerificationRequest>
  void SendNotifyCodeVerificationAsync(const SendNotifyCodeVerificationRequestT& request,
                                       const SendNotifyCodeVerificationResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::SendNotifyCodeVerification, request, handler, context);
  }

  /**
   * <p>Adds or overwrites the tags on a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes the specified tags from a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates the name or the deletion protection setting of a brand profile. To
   * change the information that is stored in the profile, use the brand profile
   * attribute operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/UpdateBrandProfile">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateBrandProfileOutcome UpdateBrandProfile(const Model::UpdateBrandProfileRequest& request) const;

  /**
   * A Callable wrapper for UpdateBrandProfile that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateBrandProfileRequestT = Model::UpdateBrandProfileRequest>
  Model::UpdateBrandProfileOutcomeCallable UpdateBrandProfileCallable(const UpdateBrandProfileRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::UpdateBrandProfile, request);
  }

  /**
   * An Async wrapper for UpdateBrandProfile that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateBrandProfileRequestT = Model::UpdateBrandProfileRequest>
  void UpdateBrandProfileAsync(const UpdateBrandProfileRequestT& request, const UpdateBrandProfileResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::UpdateBrandProfile, request, handler, context);
  }

  /**
   * <p>Updates the value, description, or category of an existing brand profile
   * attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/UpdateBrandProfileAttribute">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateBrandProfileAttributeOutcome UpdateBrandProfileAttribute(
      const Model::UpdateBrandProfileAttributeRequest& request) const;

  /**
   * A Callable wrapper for UpdateBrandProfileAttribute that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateBrandProfileAttributeRequestT = Model::UpdateBrandProfileAttributeRequest>
  Model::UpdateBrandProfileAttributeOutcomeCallable UpdateBrandProfileAttributeCallable(
      const UpdateBrandProfileAttributeRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::UpdateBrandProfileAttribute, request);
  }

  /**
   * An Async wrapper for UpdateBrandProfileAttribute that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateBrandProfileAttributeRequestT = Model::UpdateBrandProfileAttributeRequest>
  void UpdateBrandProfileAttributeAsync(const UpdateBrandProfileAttributeRequestT& request,
                                        const UpdateBrandProfileAttributeResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::UpdateBrandProfileAttribute, request, handler, context);
  }

  /**
   * <p>Imports or refreshes the attributes of an existing brand profile from an
   * existing registration. This operation runs asynchronously. Use the GetJob
   * operation to track its progress.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/UpdateBrandProfileFromRegistration">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateBrandProfileFromRegistrationOutcome UpdateBrandProfileFromRegistration(
      const Model::UpdateBrandProfileFromRegistrationRequest& request) const;

  /**
   * A Callable wrapper for UpdateBrandProfileFromRegistration that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename UpdateBrandProfileFromRegistrationRequestT = Model::UpdateBrandProfileFromRegistrationRequest>
  Model::UpdateBrandProfileFromRegistrationOutcomeCallable UpdateBrandProfileFromRegistrationCallable(
      const UpdateBrandProfileFromRegistrationRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::UpdateBrandProfileFromRegistration, request);
  }

  /**
   * An Async wrapper for UpdateBrandProfileFromRegistration that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename UpdateBrandProfileFromRegistrationRequestT = Model::UpdateBrandProfileFromRegistrationRequest>
  void UpdateBrandProfileFromRegistrationAsync(const UpdateBrandProfileFromRegistrationRequestT& request,
                                               const UpdateBrandProfileFromRegistrationResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::UpdateBrandProfileFromRegistration, request, handler, context);
  }

  /**
   * <p>Updates the mutable fields of a notify code configuration. Only the fields
   * that you supply are changed. For the template and language fields, supplying an
   * empty value clears the currently stored value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/UpdateNotifyCodeConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateNotifyCodeConfigurationOutcome UpdateNotifyCodeConfiguration(
      const Model::UpdateNotifyCodeConfigurationRequest& request) const;

  /**
   * A Callable wrapper for UpdateNotifyCodeConfiguration that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateNotifyCodeConfigurationRequestT = Model::UpdateNotifyCodeConfigurationRequest>
  Model::UpdateNotifyCodeConfigurationOutcomeCallable UpdateNotifyCodeConfigurationCallable(
      const UpdateNotifyCodeConfigurationRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::UpdateNotifyCodeConfiguration, request);
  }

  /**
   * An Async wrapper for UpdateNotifyCodeConfiguration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateNotifyCodeConfigurationRequestT = Model::UpdateNotifyCodeConfigurationRequest>
  void UpdateNotifyCodeConfigurationAsync(const UpdateNotifyCodeConfigurationRequestT& request,
                                          const UpdateNotifyCodeConfigurationResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::UpdateNotifyCodeConfiguration, request, handler, context);
  }

  /**
   * <p>Repushes the attributes of a brand profile into existing DRAFT registrations.
   * This operation runs asynchronously. Use the GetJob operation to track its
   * progress.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/UpdateRegistrationsFromBrandProfile">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateRegistrationsFromBrandProfileOutcome UpdateRegistrationsFromBrandProfile(
      const Model::UpdateRegistrationsFromBrandProfileRequest& request) const;

  /**
   * A Callable wrapper for UpdateRegistrationsFromBrandProfile that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename UpdateRegistrationsFromBrandProfileRequestT = Model::UpdateRegistrationsFromBrandProfileRequest>
  Model::UpdateRegistrationsFromBrandProfileOutcomeCallable UpdateRegistrationsFromBrandProfileCallable(
      const UpdateRegistrationsFromBrandProfileRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::UpdateRegistrationsFromBrandProfile, request);
  }

  /**
   * An Async wrapper for UpdateRegistrationsFromBrandProfile that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename UpdateRegistrationsFromBrandProfileRequestT = Model::UpdateRegistrationsFromBrandProfileRequest>
  void UpdateRegistrationsFromBrandProfileAsync(const UpdateRegistrationsFromBrandProfileRequestT& request,
                                                const UpdateRegistrationsFromBrandProfileResponseReceivedHandler& handler,
                                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::UpdateRegistrationsFromBrandProfile, request, handler, context);
  }

  /**
   * <p>Validates a one-time passcode that a recipient submitted. Validation succeeds
   * when the passcode matches, the validity period has not elapsed, and the maximum
   * number of attempts has not been exceeded.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/ValidateNotifyCodeVerification">AWS
   * API Reference</a></p>
   */
  virtual Model::ValidateNotifyCodeVerificationOutcome ValidateNotifyCodeVerification(
      const Model::ValidateNotifyCodeVerificationRequest& request) const;

  /**
   * A Callable wrapper for ValidateNotifyCodeVerification that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ValidateNotifyCodeVerificationRequestT = Model::ValidateNotifyCodeVerificationRequest>
  Model::ValidateNotifyCodeVerificationOutcomeCallable ValidateNotifyCodeVerificationCallable(
      const ValidateNotifyCodeVerificationRequestT& request) const {
    return SubmitCallable(&EndUserMessagingClient::ValidateNotifyCodeVerification, request);
  }

  /**
   * An Async wrapper for ValidateNotifyCodeVerification that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ValidateNotifyCodeVerificationRequestT = Model::ValidateNotifyCodeVerificationRequest>
  void ValidateNotifyCodeVerificationAsync(const ValidateNotifyCodeVerificationRequestT& request,
                                           const ValidateNotifyCodeVerificationResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EndUserMessagingClient::ValidateNotifyCodeVerification, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<EndUserMessagingEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<EndUserMessagingClient>;
  void init(const EndUserMessagingClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, EndUserMessagingError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  EndUserMessagingClientConfiguration m_clientConfiguration;
  std::shared_ptr<EndUserMessagingEndpointProviderBase> m_endpointProvider;
};

}  // namespace EndUserMessaging
}  // namespace Aws
