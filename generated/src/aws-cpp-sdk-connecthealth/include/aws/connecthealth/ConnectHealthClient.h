/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealthPaginationBase.h>
#include <aws/connecthealth/ConnectHealthServiceClientModel.h>
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

namespace Aws {
namespace ConnectHealth {
/**
 * <p>Health Agent for healthcare providers and patient engagement</p>
 */
class AWS_CONNECTHEALTH_API ConnectHealthClient : public Aws::Client::AWSJsonClient,
                                                  public Aws::Client::ClientWithAsyncTemplateMethods<ConnectHealthClient>,
                                                  public ConnectHealthPaginationBase<ConnectHealthClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef ConnectHealthClientConfiguration ClientConfigurationType;
  typedef ConnectHealthEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ConnectHealthClient(const Aws::ConnectHealth::ConnectHealthClientConfiguration& clientConfiguration =
                          Aws::ConnectHealth::ConnectHealthClientConfiguration(),
                      std::shared_ptr<ConnectHealthEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ConnectHealthClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<ConnectHealthEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::ConnectHealth::ConnectHealthClientConfiguration& clientConfiguration =
                          Aws::ConnectHealth::ConnectHealthClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  ConnectHealthClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<ConnectHealthEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::ConnectHealth::ConnectHealthClientConfiguration& clientConfiguration =
                          Aws::ConnectHealth::ConnectHealthClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ConnectHealthClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ConnectHealthClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  ConnectHealthClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~ConnectHealthClient();

  /**
   * <p>Activates a Subscription to enable billing for a user.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/ActivateSubscription">AWS
   * API Reference</a></p>
   */
  virtual Model::ActivateSubscriptionOutcome ActivateSubscription(const Model::ActivateSubscriptionRequest& request) const;

  /**
   * A Callable wrapper for ActivateSubscription that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ActivateSubscriptionRequestT = Model::ActivateSubscriptionRequest>
  Model::ActivateSubscriptionOutcomeCallable ActivateSubscriptionCallable(const ActivateSubscriptionRequestT& request) const {
    return SubmitCallable(&ConnectHealthClient::ActivateSubscription, request);
  }

  /**
   * An Async wrapper for ActivateSubscription that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ActivateSubscriptionRequestT = Model::ActivateSubscriptionRequest>
  void ActivateSubscriptionAsync(const ActivateSubscriptionRequestT& request, const ActivateSubscriptionResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ConnectHealthClient::ActivateSubscription, request, handler, context);
  }

  /**
   * <p>Creates a new Domain for managing HealthAgent resources.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/CreateDomain">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest& request) const;

  /**
   * A Callable wrapper for CreateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateDomainRequestT = Model::CreateDomainRequest>
  Model::CreateDomainOutcomeCallable CreateDomainCallable(const CreateDomainRequestT& request) const {
    return SubmitCallable(&ConnectHealthClient::CreateDomain, request);
  }

  /**
   * An Async wrapper for CreateDomain that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateDomainRequestT = Model::CreateDomainRequest>
  void CreateDomainAsync(const CreateDomainRequestT& request, const CreateDomainResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ConnectHealthClient::CreateDomain, request, handler, context);
  }

  /**
   * <p>Creates a new Subscription within a Domain for billing and user
   * management.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/CreateSubscription">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateSubscriptionOutcome CreateSubscription(const Model::CreateSubscriptionRequest& request) const;

  /**
   * A Callable wrapper for CreateSubscription that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateSubscriptionRequestT = Model::CreateSubscriptionRequest>
  Model::CreateSubscriptionOutcomeCallable CreateSubscriptionCallable(const CreateSubscriptionRequestT& request) const {
    return SubmitCallable(&ConnectHealthClient::CreateSubscription, request);
  }

  /**
   * An Async wrapper for CreateSubscription that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateSubscriptionRequestT = Model::CreateSubscriptionRequest>
  void CreateSubscriptionAsync(const CreateSubscriptionRequestT& request, const CreateSubscriptionResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ConnectHealthClient::CreateSubscription, request, handler, context);
  }

  /**
   * <p>Deactivates a Subscription to stop billing for a user.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/DeactivateSubscription">AWS
   * API Reference</a></p>
   */
  virtual Model::DeactivateSubscriptionOutcome DeactivateSubscription(const Model::DeactivateSubscriptionRequest& request) const;

  /**
   * A Callable wrapper for DeactivateSubscription that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeactivateSubscriptionRequestT = Model::DeactivateSubscriptionRequest>
  Model::DeactivateSubscriptionOutcomeCallable DeactivateSubscriptionCallable(const DeactivateSubscriptionRequestT& request) const {
    return SubmitCallable(&ConnectHealthClient::DeactivateSubscription, request);
  }

  /**
   * An Async wrapper for DeactivateSubscription that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeactivateSubscriptionRequestT = Model::DeactivateSubscriptionRequest>
  void DeactivateSubscriptionAsync(const DeactivateSubscriptionRequestT& request,
                                   const DeactivateSubscriptionResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ConnectHealthClient::DeactivateSubscription, request, handler, context);
  }

  /**
   * <p>Deletes a Domain and all associated resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/DeleteDomain">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest& request) const;

  /**
   * A Callable wrapper for DeleteDomain that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteDomainRequestT = Model::DeleteDomainRequest>
  Model::DeleteDomainOutcomeCallable DeleteDomainCallable(const DeleteDomainRequestT& request) const {
    return SubmitCallable(&ConnectHealthClient::DeleteDomain, request);
  }

  /**
   * An Async wrapper for DeleteDomain that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteDomainRequestT = Model::DeleteDomainRequest>
  void DeleteDomainAsync(const DeleteDomainRequestT& request, const DeleteDomainResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ConnectHealthClient::DeleteDomain, request, handler, context);
  }

  /**
   * <p>Retrieves information about a Domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/GetDomain">AWS
   * API Reference</a></p>
   */
  virtual Model::GetDomainOutcome GetDomain(const Model::GetDomainRequest& request) const;

  /**
   * A Callable wrapper for GetDomain that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetDomainRequestT = Model::GetDomainRequest>
  Model::GetDomainOutcomeCallable GetDomainCallable(const GetDomainRequestT& request) const {
    return SubmitCallable(&ConnectHealthClient::GetDomain, request);
  }

  /**
   * An Async wrapper for GetDomain that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetDomainRequestT = Model::GetDomainRequest>
  void GetDomainAsync(const GetDomainRequestT& request, const GetDomainResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ConnectHealthClient::GetDomain, request, handler, context);
  }

  /**
   * <p>Retrieves details about an existing Medical Scribe listening
   * session</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/GetMedicalScribeListeningSession">AWS
   * API Reference</a></p>
   */
  virtual Model::GetMedicalScribeListeningSessionOutcome GetMedicalScribeListeningSession(
      const Model::GetMedicalScribeListeningSessionRequest& request) const;

  /**
   * A Callable wrapper for GetMedicalScribeListeningSession that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename GetMedicalScribeListeningSessionRequestT = Model::GetMedicalScribeListeningSessionRequest>
  Model::GetMedicalScribeListeningSessionOutcomeCallable GetMedicalScribeListeningSessionCallable(
      const GetMedicalScribeListeningSessionRequestT& request) const {
    return SubmitCallable(&ConnectHealthClient::GetMedicalScribeListeningSession, request);
  }

  /**
   * An Async wrapper for GetMedicalScribeListeningSession that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename GetMedicalScribeListeningSessionRequestT = Model::GetMedicalScribeListeningSessionRequest>
  void GetMedicalScribeListeningSessionAsync(const GetMedicalScribeListeningSessionRequestT& request,
                                             const GetMedicalScribeListeningSessionResponseReceivedHandler& handler,
                                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ConnectHealthClient::GetMedicalScribeListeningSession, request, handler, context);
  }

  /**
   * <p>Get details of a started patient insights job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/GetPatientInsightsJob">AWS
   * API Reference</a></p>
   */
  virtual Model::GetPatientInsightsJobOutcome GetPatientInsightsJob(const Model::GetPatientInsightsJobRequest& request) const;

  /**
   * A Callable wrapper for GetPatientInsightsJob that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetPatientInsightsJobRequestT = Model::GetPatientInsightsJobRequest>
  Model::GetPatientInsightsJobOutcomeCallable GetPatientInsightsJobCallable(const GetPatientInsightsJobRequestT& request) const {
    return SubmitCallable(&ConnectHealthClient::GetPatientInsightsJob, request);
  }

  /**
   * An Async wrapper for GetPatientInsightsJob that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetPatientInsightsJobRequestT = Model::GetPatientInsightsJobRequest>
  void GetPatientInsightsJobAsync(const GetPatientInsightsJobRequestT& request, const GetPatientInsightsJobResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ConnectHealthClient::GetPatientInsightsJob, request, handler, context);
  }

  /**
   * <p>Retrieves information about a Subscription.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/GetSubscription">AWS
   * API Reference</a></p>
   */
  virtual Model::GetSubscriptionOutcome GetSubscription(const Model::GetSubscriptionRequest& request) const;

  /**
   * A Callable wrapper for GetSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetSubscriptionRequestT = Model::GetSubscriptionRequest>
  Model::GetSubscriptionOutcomeCallable GetSubscriptionCallable(const GetSubscriptionRequestT& request) const {
    return SubmitCallable(&ConnectHealthClient::GetSubscription, request);
  }

  /**
   * An Async wrapper for GetSubscription that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetSubscriptionRequestT = Model::GetSubscriptionRequest>
  void GetSubscriptionAsync(const GetSubscriptionRequestT& request, const GetSubscriptionResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ConnectHealthClient::GetSubscription, request, handler, context);
  }

  /**
   * <p>Lists Domains for a given account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/ListDomains">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListDomains that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListDomainsRequestT = Model::ListDomainsRequest>
  Model::ListDomainsOutcomeCallable ListDomainsCallable(const ListDomainsRequestT& request = {}) const {
    return SubmitCallable(&ConnectHealthClient::ListDomains, request);
  }

  /**
   * An Async wrapper for ListDomains that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListDomainsRequestT = Model::ListDomainsRequest>
  void ListDomainsAsync(const ListDomainsResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                        const ListDomainsRequestT& request = {}) const {
    return SubmitAsync(&ConnectHealthClient::ListDomains, request, handler, context);
  }

  /**
   * <p>Lists all Subscriptions within a Domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/ListSubscriptions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListSubscriptionsOutcome ListSubscriptions(const Model::ListSubscriptionsRequest& request) const;

  /**
   * A Callable wrapper for ListSubscriptions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListSubscriptionsRequestT = Model::ListSubscriptionsRequest>
  Model::ListSubscriptionsOutcomeCallable ListSubscriptionsCallable(const ListSubscriptionsRequestT& request) const {
    return SubmitCallable(&ConnectHealthClient::ListSubscriptions, request);
  }

  /**
   * An Async wrapper for ListSubscriptions that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListSubscriptionsRequestT = Model::ListSubscriptionsRequest>
  void ListSubscriptionsAsync(const ListSubscriptionsRequestT& request, const ListSubscriptionsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ConnectHealthClient::ListSubscriptions, request, handler, context);
  }

  /**
   * <p>Lists the tags associated with the specified resource</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&ConnectHealthClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ConnectHealthClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Starts a new Medical Scribe listening session for real-time audio
   * transcription</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/StartMedicalScribeListeningSession">AWS
   * API Reference</a></p>
   *
   * Queues the request into a thread executor.
   * The streamReadyHandler is triggered when the stream is ready to be written to.
   * The handler is triggered when the request is finished.
   */
  virtual void StartMedicalScribeListeningSessionAsync(
      Model::StartMedicalScribeListeningSessionRequest& request,
      const StartMedicalScribeListeningSessionStreamReadyHandler& streamReadyHandler,
      const StartMedicalScribeListeningSessionResponseReceivedHandler& handler,
      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext = nullptr) const;

  /**
   * <p>Starts a new patient insights job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/StartPatientInsightsJob">AWS
   * API Reference</a></p>
   */
  virtual Model::StartPatientInsightsJobOutcome StartPatientInsightsJob(const Model::StartPatientInsightsJobRequest& request) const;

  /**
   * A Callable wrapper for StartPatientInsightsJob that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartPatientInsightsJobRequestT = Model::StartPatientInsightsJobRequest>
  Model::StartPatientInsightsJobOutcomeCallable StartPatientInsightsJobCallable(const StartPatientInsightsJobRequestT& request) const {
    return SubmitCallable(&ConnectHealthClient::StartPatientInsightsJob, request);
  }

  /**
   * An Async wrapper for StartPatientInsightsJob that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StartPatientInsightsJobRequestT = Model::StartPatientInsightsJobRequest>
  void StartPatientInsightsJobAsync(const StartPatientInsightsJobRequestT& request,
                                    const StartPatientInsightsJobResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ConnectHealthClient::StartPatientInsightsJob, request, handler, context);
  }

  /**
   * <p>Associates the specified tags with the specified resource</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&ConnectHealthClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ConnectHealthClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes the specified tags from the specified resource</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&ConnectHealthClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ConnectHealthClient::UntagResource, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<ConnectHealthEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<ConnectHealthClient>;
  void init(const ConnectHealthClientConfiguration& clientConfiguration);

  ConnectHealthClientConfiguration m_clientConfiguration;
  std::shared_ptr<ConnectHealthEndpointProviderBase> m_endpointProvider;
};

}  // namespace ConnectHealth
}  // namespace Aws
