/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/query-compatible-rpcv2-protocol/QueryCompatibleRpcV2ProtocolServiceClientModel.h>
#include <aws/query-compatible-rpcv2-protocol/QueryCompatibleRpcV2Protocol_EXPORTS.h>

namespace Aws {
namespace QueryCompatibleRpcV2Protocol {
class AWS_QUERYCOMPATIBLERPCV2PROTOCOL_API QueryCompatibleRpcV2ProtocolClient
    : public Aws::Client::AWSRpcV2CborClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<QueryCompatibleRpcV2ProtocolClient> {
 public:
  typedef Aws::Client::AWSRpcV2CborClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef QueryCompatibleRpcV2ProtocolClientConfiguration ClientConfigurationType;
  typedef QueryCompatibleRpcV2ProtocolEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  QueryCompatibleRpcV2ProtocolClient(
      const Aws::QueryCompatibleRpcV2Protocol::QueryCompatibleRpcV2ProtocolClientConfiguration& clientConfiguration =
          Aws::QueryCompatibleRpcV2Protocol::QueryCompatibleRpcV2ProtocolClientConfiguration(),
      std::shared_ptr<QueryCompatibleRpcV2ProtocolEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  QueryCompatibleRpcV2ProtocolClient(
      const Aws::Auth::AWSCredentials& credentials,
      std::shared_ptr<QueryCompatibleRpcV2ProtocolEndpointProviderBase> endpointProvider = nullptr,
      const Aws::QueryCompatibleRpcV2Protocol::QueryCompatibleRpcV2ProtocolClientConfiguration& clientConfiguration =
          Aws::QueryCompatibleRpcV2Protocol::QueryCompatibleRpcV2ProtocolClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  QueryCompatibleRpcV2ProtocolClient(
      const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
      std::shared_ptr<QueryCompatibleRpcV2ProtocolEndpointProviderBase> endpointProvider = nullptr,
      const Aws::QueryCompatibleRpcV2Protocol::QueryCompatibleRpcV2ProtocolClientConfiguration& clientConfiguration =
          Aws::QueryCompatibleRpcV2Protocol::QueryCompatibleRpcV2ProtocolClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  QueryCompatibleRpcV2ProtocolClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  QueryCompatibleRpcV2ProtocolClient(const Aws::Auth::AWSCredentials& credentials,
                                     const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  QueryCompatibleRpcV2ProtocolClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~QueryCompatibleRpcV2ProtocolClient();

  /**
   *
   */
  virtual Model::QueryCompatibleOperationOutcome QueryCompatibleOperation(const Model::QueryCompatibleOperationRequest& request = {}) const;

  /**
   * A Callable wrapper for QueryCompatibleOperation that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename QueryCompatibleOperationRequestT = Model::QueryCompatibleOperationRequest>
  Model::QueryCompatibleOperationOutcomeCallable QueryCompatibleOperationCallable(
      const QueryCompatibleOperationRequestT& request = {}) const {
    return SubmitCallable(&QueryCompatibleRpcV2ProtocolClient::QueryCompatibleOperation, request);
  }

  /**
   * An Async wrapper for QueryCompatibleOperation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename QueryCompatibleOperationRequestT = Model::QueryCompatibleOperationRequest>
  void QueryCompatibleOperationAsync(const QueryCompatibleOperationResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                     const QueryCompatibleOperationRequestT& request = {}) const {
    return SubmitAsync(&QueryCompatibleRpcV2ProtocolClient::QueryCompatibleOperation, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<QueryCompatibleRpcV2ProtocolEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<QueryCompatibleRpcV2ProtocolClient>;
  void init(const QueryCompatibleRpcV2ProtocolClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, QueryCompatibleRpcV2ProtocolError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const;

  QueryCompatibleRpcV2ProtocolClientConfiguration m_clientConfiguration;
  std::shared_ptr<QueryCompatibleRpcV2ProtocolEndpointProviderBase> m_endpointProvider;
};

}  // namespace QueryCompatibleRpcV2Protocol
}  // namespace Aws
