/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10ServiceClientModel.h>
#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10_EXPORTS.h>

namespace Aws {
namespace QueryCompatibleJSONRPC10 {
class AWS_QUERYCOMPATIBLEJSONRPC10_API QueryCompatibleJSONRPC10Client
    : public Aws::Client::AWSJsonClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<QueryCompatibleJSONRPC10Client> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef QueryCompatibleJSONRPC10ClientConfiguration ClientConfigurationType;
  typedef QueryCompatibleJSONRPC10EndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  QueryCompatibleJSONRPC10Client(const Aws::QueryCompatibleJSONRPC10::QueryCompatibleJSONRPC10ClientConfiguration& clientConfiguration =
                                     Aws::QueryCompatibleJSONRPC10::QueryCompatibleJSONRPC10ClientConfiguration(),
                                 std::shared_ptr<QueryCompatibleJSONRPC10EndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  QueryCompatibleJSONRPC10Client(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<QueryCompatibleJSONRPC10EndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::QueryCompatibleJSONRPC10::QueryCompatibleJSONRPC10ClientConfiguration& clientConfiguration =
                                     Aws::QueryCompatibleJSONRPC10::QueryCompatibleJSONRPC10ClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  QueryCompatibleJSONRPC10Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<QueryCompatibleJSONRPC10EndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::QueryCompatibleJSONRPC10::QueryCompatibleJSONRPC10ClientConfiguration& clientConfiguration =
                                     Aws::QueryCompatibleJSONRPC10::QueryCompatibleJSONRPC10ClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  QueryCompatibleJSONRPC10Client(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  QueryCompatibleJSONRPC10Client(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  QueryCompatibleJSONRPC10Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~QueryCompatibleJSONRPC10Client();

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
    return SubmitCallable(&QueryCompatibleJSONRPC10Client::QueryCompatibleOperation, request);
  }

  /**
   * An Async wrapper for QueryCompatibleOperation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename QueryCompatibleOperationRequestT = Model::QueryCompatibleOperationRequest>
  void QueryCompatibleOperationAsync(const QueryCompatibleOperationResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                     const QueryCompatibleOperationRequestT& request = {}) const {
    return SubmitAsync(&QueryCompatibleJSONRPC10Client::QueryCompatibleOperation, request, handler, context);
  }

  void OverrideEndpoint(const Aws::String& endpoint);
  std::shared_ptr<QueryCompatibleJSONRPC10EndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<QueryCompatibleJSONRPC10Client>;
  void init(const QueryCompatibleJSONRPC10ClientConfiguration& clientConfiguration);

  QueryCompatibleJSONRPC10ClientConfiguration m_clientConfiguration;
  std::shared_ptr<QueryCompatibleJSONRPC10EndpointProviderBase> m_endpointProvider;
};

}  // namespace QueryCompatibleJSONRPC10
}  // namespace Aws
