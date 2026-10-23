/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/non-query-compatible-rpcv2-protocol/NonQueryCompatibleRpcV2ProtocolServiceClientModel.h>
#include <aws/non-query-compatible-rpcv2-protocol/NonQueryCompatibleRpcV2Protocol_EXPORTS.h>

namespace Aws {
namespace NonQueryCompatibleRpcV2Protocol {
class AWS_NONQUERYCOMPATIBLERPCV2PROTOCOL_API NonQueryCompatibleRpcV2ProtocolClient
    : public Aws::Client::AWSRpcV2CborClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<NonQueryCompatibleRpcV2ProtocolClient> {
 public:
  typedef Aws::Client::AWSRpcV2CborClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef NonQueryCompatibleRpcV2ProtocolClientConfiguration ClientConfigurationType;
  typedef NonQueryCompatibleRpcV2ProtocolEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  NonQueryCompatibleRpcV2ProtocolClient(
      const Aws::NonQueryCompatibleRpcV2Protocol::NonQueryCompatibleRpcV2ProtocolClientConfiguration& clientConfiguration =
          Aws::NonQueryCompatibleRpcV2Protocol::NonQueryCompatibleRpcV2ProtocolClientConfiguration(),
      std::shared_ptr<NonQueryCompatibleRpcV2ProtocolEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  NonQueryCompatibleRpcV2ProtocolClient(
      const Aws::Auth::AWSCredentials& credentials,
      std::shared_ptr<NonQueryCompatibleRpcV2ProtocolEndpointProviderBase> endpointProvider = nullptr,
      const Aws::NonQueryCompatibleRpcV2Protocol::NonQueryCompatibleRpcV2ProtocolClientConfiguration& clientConfiguration =
          Aws::NonQueryCompatibleRpcV2Protocol::NonQueryCompatibleRpcV2ProtocolClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  NonQueryCompatibleRpcV2ProtocolClient(
      const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
      std::shared_ptr<NonQueryCompatibleRpcV2ProtocolEndpointProviderBase> endpointProvider = nullptr,
      const Aws::NonQueryCompatibleRpcV2Protocol::NonQueryCompatibleRpcV2ProtocolClientConfiguration& clientConfiguration =
          Aws::NonQueryCompatibleRpcV2Protocol::NonQueryCompatibleRpcV2ProtocolClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  NonQueryCompatibleRpcV2ProtocolClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  NonQueryCompatibleRpcV2ProtocolClient(const Aws::Auth::AWSCredentials& credentials,
                                        const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  NonQueryCompatibleRpcV2ProtocolClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                        const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~NonQueryCompatibleRpcV2ProtocolClient();

  /**
   *
   */
  virtual Model::NonQueryCompatibleOperationOutcome NonQueryCompatibleOperation(
      const Model::NonQueryCompatibleOperationRequest& request = {}) const;

  /**
   * A Callable wrapper for NonQueryCompatibleOperation that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename NonQueryCompatibleOperationRequestT = Model::NonQueryCompatibleOperationRequest>
  Model::NonQueryCompatibleOperationOutcomeCallable NonQueryCompatibleOperationCallable(
      const NonQueryCompatibleOperationRequestT& request = {}) const {
    return SubmitCallable(&NonQueryCompatibleRpcV2ProtocolClient::NonQueryCompatibleOperation, request);
  }

  /**
   * An Async wrapper for NonQueryCompatibleOperation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename NonQueryCompatibleOperationRequestT = Model::NonQueryCompatibleOperationRequest>
  void NonQueryCompatibleOperationAsync(const NonQueryCompatibleOperationResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                        const NonQueryCompatibleOperationRequestT& request = {}) const {
    return SubmitAsync(&NonQueryCompatibleRpcV2ProtocolClient::NonQueryCompatibleOperation, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<NonQueryCompatibleRpcV2ProtocolEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<NonQueryCompatibleRpcV2ProtocolClient>;
  void init(const NonQueryCompatibleRpcV2ProtocolClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, NonQueryCompatibleRpcV2ProtocolError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const;

  NonQueryCompatibleRpcV2ProtocolClientConfiguration m_clientConfiguration;
  std::shared_ptr<NonQueryCompatibleRpcV2ProtocolEndpointProviderBase> m_endpointProvider;
};

}  // namespace NonQueryCompatibleRpcV2Protocol
}  // namespace Aws
