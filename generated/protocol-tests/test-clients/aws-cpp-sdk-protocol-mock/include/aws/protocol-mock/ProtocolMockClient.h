/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/protocol-mock/ProtocolMockServiceClientModel.h>
#include <aws/protocol-mock/ProtocolMock_EXPORTS.h>

namespace Aws {
namespace ProtocolMock {
/**
 * <p>Client for a AWS SDK C++ Protocol test http mock</p>
 */
class AWS_PROTOCOLMOCK_API ProtocolMockClient : public Aws::Client::AWSJsonClient,
                                                public Aws::Client::ClientWithAsyncTemplateMethods<ProtocolMockClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef ProtocolMockClientConfiguration ClientConfigurationType;
  typedef ProtocolMockEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ProtocolMockClient(
      const Aws::ProtocolMock::ProtocolMockClientConfiguration& clientConfiguration = Aws::ProtocolMock::ProtocolMockClientConfiguration(),
      std::shared_ptr<ProtocolMockEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ProtocolMockClient(
      const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<ProtocolMockEndpointProviderBase> endpointProvider = nullptr,
      const Aws::ProtocolMock::ProtocolMockClientConfiguration& clientConfiguration = Aws::ProtocolMock::ProtocolMockClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  ProtocolMockClient(
      const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
      std::shared_ptr<ProtocolMockEndpointProviderBase> endpointProvider = nullptr,
      const Aws::ProtocolMock::ProtocolMockClientConfiguration& clientConfiguration = Aws::ProtocolMock::ProtocolMockClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ProtocolMockClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ProtocolMockClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  ProtocolMockClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~ProtocolMockClient();

  /**
   * <p>Gets back all cached received requests</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/protocol-mock-2025-05-05/GetRequestsReceived">AWS
   * API Reference</a></p>
   */
  virtual Model::GetRequestsReceivedOutcome GetRequestsReceived(const Model::GetRequestsReceivedRequest& request = {}) const;

  /**
   * A Callable wrapper for GetRequestsReceived that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetRequestsReceivedRequestT = Model::GetRequestsReceivedRequest>
  Model::GetRequestsReceivedOutcomeCallable GetRequestsReceivedCallable(const GetRequestsReceivedRequestT& request = {}) const {
    return SubmitCallable(&ProtocolMockClient::GetRequestsReceived, request);
  }

  /**
   * An Async wrapper for GetRequestsReceived that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetRequestsReceivedRequestT = Model::GetRequestsReceivedRequest>
  void GetRequestsReceivedAsync(const GetRequestsReceivedResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                const GetRequestsReceivedRequestT& request = {}) const {
    return SubmitAsync(&ProtocolMockClient::GetRequestsReceived, request, handler, context);
  }

  /**
   * <p>Checks if the mock server is up and running and in a valid
   * state</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/protocol-mock-2025-05-05/Ping">AWS
   * API Reference</a></p>
   */
  virtual Model::PingOutcome Ping(const Model::PingRequest& request = {}) const;

  /**
   * A Callable wrapper for Ping that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename PingRequestT = Model::PingRequest>
  Model::PingOutcomeCallable PingCallable(const PingRequestT& request = {}) const {
    return SubmitCallable(&ProtocolMockClient::Ping, request);
  }

  /**
   * An Async wrapper for Ping that queues the request into a thread executor and triggers associated callback when operation has finished.
   */
  template <typename PingRequestT = Model::PingRequest>
  void PingAsync(const PingResponseReceivedHandler& handler,
                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const PingRequestT& request = {}) const {
    return SubmitAsync(&ProtocolMockClient::Ping, request, handler, context);
  }

  /**
   * <p>Resets all cached requests and preset responses in the mock
   * server</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/protocol-mock-2025-05-05/Reset">AWS
   * API Reference</a></p>
   */
  virtual Model::ResetOutcome Reset(const Model::ResetRequest& request = {}) const;

  /**
   * A Callable wrapper for Reset that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ResetRequestT = Model::ResetRequest>
  Model::ResetOutcomeCallable ResetCallable(const ResetRequestT& request = {}) const {
    return SubmitCallable(&ProtocolMockClient::Reset, request);
  }

  /**
   * An Async wrapper for Reset that queues the request into a thread executor and triggers associated callback when operation has finished.
   */
  template <typename ResetRequestT = Model::ResetRequest>
  void ResetAsync(const ResetResponseReceivedHandler& handler,
                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                  const ResetRequestT& request = {}) const {
    return SubmitAsync(&ProtocolMockClient::Reset, request, handler, context);
  }

  /**
   * <p>Sets the mocked response to be sent for all following non-control API
   * requests</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/protocol-mock-2025-05-05/SetNextResponse">AWS
   * API Reference</a></p>
   */
  virtual Model::SetNextResponseOutcome SetNextResponse(const Model::SetNextResponseRequest& request = {}) const;

  /**
   * A Callable wrapper for SetNextResponse that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename SetNextResponseRequestT = Model::SetNextResponseRequest>
  Model::SetNextResponseOutcomeCallable SetNextResponseCallable(const SetNextResponseRequestT& request = {}) const {
    return SubmitCallable(&ProtocolMockClient::SetNextResponse, request);
  }

  /**
   * An Async wrapper for SetNextResponse that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename SetNextResponseRequestT = Model::SetNextResponseRequest>
  void SetNextResponseAsync(const SetNextResponseResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const SetNextResponseRequestT& request = {}) const {
    return SubmitAsync(&ProtocolMockClient::SetNextResponse, request, handler, context);
  }

  /**
   * <p>Terminates the mock server</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/protocol-mock-2025-05-05/Terminate">AWS
   * API Reference</a></p>
   */
  virtual Model::TerminateOutcome Terminate(const Model::TerminateRequest& request = {}) const;

  /**
   * A Callable wrapper for Terminate that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TerminateRequestT = Model::TerminateRequest>
  Model::TerminateOutcomeCallable TerminateCallable(const TerminateRequestT& request = {}) const {
    return SubmitCallable(&ProtocolMockClient::Terminate, request);
  }

  /**
   * An Async wrapper for Terminate that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TerminateRequestT = Model::TerminateRequest>
  void TerminateAsync(const TerminateResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                      const TerminateRequestT& request = {}) const {
    return SubmitAsync(&ProtocolMockClient::Terminate, request, handler, context);
  }

  void OverrideEndpoint(const Aws::String& endpoint);
  std::shared_ptr<ProtocolMockEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<ProtocolMockClient>;
  void init(const ProtocolMockClientConfiguration& clientConfiguration);

  ProtocolMockClientConfiguration m_clientConfiguration;
  std::shared_ptr<ProtocolMockEndpointProviderBase> m_endpointProvider;
};

}  // namespace ProtocolMock
}  // namespace Aws
