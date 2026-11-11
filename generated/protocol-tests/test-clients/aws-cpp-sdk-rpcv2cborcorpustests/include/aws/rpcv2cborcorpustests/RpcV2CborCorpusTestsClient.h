/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2cborcorpustests/RpcV2CborCorpusTestsServiceClientModel.h>
#include <aws/rpcv2cborcorpustests/RpcV2CborCorpusTests_EXPORTS.h>

namespace Aws {
namespace RpcV2CborCorpusTests {
class AWS_RPCV2CBORCORPUSTESTS_API RpcV2CborCorpusTestsClient
    : public Aws::Client::AWSRpcV2CborClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<RpcV2CborCorpusTestsClient> {
 public:
  typedef Aws::Client::AWSRpcV2CborClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef RpcV2CborCorpusTestsClientConfiguration ClientConfigurationType;
  typedef RpcV2CborCorpusTestsEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  RpcV2CborCorpusTestsClient(const Aws::RpcV2CborCorpusTests::RpcV2CborCorpusTestsClientConfiguration& clientConfiguration =
                                 Aws::RpcV2CborCorpusTests::RpcV2CborCorpusTestsClientConfiguration(),
                             std::shared_ptr<RpcV2CborCorpusTestsEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  RpcV2CborCorpusTestsClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<RpcV2CborCorpusTestsEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::RpcV2CborCorpusTests::RpcV2CborCorpusTestsClientConfiguration& clientConfiguration =
                                 Aws::RpcV2CborCorpusTests::RpcV2CborCorpusTestsClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  RpcV2CborCorpusTestsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<RpcV2CborCorpusTestsEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::RpcV2CborCorpusTests::RpcV2CborCorpusTestsClientConfiguration& clientConfiguration =
                                 Aws::RpcV2CborCorpusTests::RpcV2CborCorpusTestsClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  RpcV2CborCorpusTestsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  RpcV2CborCorpusTestsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  RpcV2CborCorpusTestsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~RpcV2CborCorpusTestsClient();

  /**
   *
   */
  virtual Model::EventStreamInitialResponseOutcome EventStreamInitialResponse(Model::EventStreamInitialResponseRequest& request) const;

  /**
   * A Callable wrapper for EventStreamInitialResponse that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename EventStreamInitialResponseRequestT = Model::EventStreamInitialResponseRequest>
  Model::EventStreamInitialResponseOutcomeCallable EventStreamInitialResponseCallable(EventStreamInitialResponseRequestT& request) const {
    return SubmitCallable(&RpcV2CborCorpusTestsClient::EventStreamInitialResponse, request);
  }

  /**
   * An Async wrapper for EventStreamInitialResponse that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename EventStreamInitialResponseRequestT = Model::EventStreamInitialResponseRequest>
  void EventStreamInitialResponseAsync(EventStreamInitialResponseRequestT& request,
                                       const EventStreamInitialResponseResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RpcV2CborCorpusTestsClient::EventStreamInitialResponse, request, handler, context);
  }

  /**
   *
   */
  virtual Model::EventStreamResponseOutcome EventStreamResponse(Model::EventStreamResponseRequest& request) const;

  /**
   * A Callable wrapper for EventStreamResponse that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename EventStreamResponseRequestT = Model::EventStreamResponseRequest>
  Model::EventStreamResponseOutcomeCallable EventStreamResponseCallable(EventStreamResponseRequestT& request) const {
    return SubmitCallable(&RpcV2CborCorpusTestsClient::EventStreamResponse, request);
  }

  /**
   * An Async wrapper for EventStreamResponse that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename EventStreamResponseRequestT = Model::EventStreamResponseRequest>
  void EventStreamResponseAsync(EventStreamResponseRequestT& request, const EventStreamResponseResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RpcV2CborCorpusTestsClient::EventStreamResponse, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<RpcV2CborCorpusTestsEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<RpcV2CborCorpusTestsClient>;
  void init(const RpcV2CborCorpusTestsClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, RpcV2CborCorpusTestsError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const;

  RpcV2CborCorpusTestsClientConfiguration m_clientConfiguration;
  std::shared_ptr<RpcV2CborCorpusTestsEndpointProviderBase> m_endpointProvider;
};

}  // namespace RpcV2CborCorpusTests
}  // namespace Aws
