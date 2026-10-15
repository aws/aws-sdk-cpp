/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10ErrorMarshaller.h>
#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10ServiceClientModel.h>
#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10_EXPORTS.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <smithy/identity/auth/built-in/GenericAuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>

namespace Aws {
namespace QueryCompatibleJSONRPC10 {
AWS_QUERYCOMPATIBLEJSONRPC10_API extern const char SERVICE_NAME[];
class AWS_QUERYCOMPATIBLEJSONRPC10_API QueryCompatibleJSONRPC10Client
    : Aws::Client::ClientWithAsyncTemplateMethods<QueryCompatibleJSONRPC10Client>,
      public smithy::client::AwsSmithyClientT<
          Aws::QueryCompatibleJSONRPC10::SERVICE_NAME, Aws::QueryCompatibleJSONRPC10::QueryCompatibleJSONRPC10ClientConfiguration,
          smithy::AuthSchemeResolverBase<>, Aws::Crt::Variant<smithy::SigV4AuthScheme>, QueryCompatibleJSONRPC10EndpointProviderBase,
          smithy::client::JsonOutcomeSerializer, smithy::client::JsonOutcome, Aws::Client::QueryCompatibleJSONRPC10ErrorMarshaller> {
 public:
  static const char* GetServiceName();
  static const char* GetAllocationTag();
  inline const char* GetServiceClientName() const override { return "Query Compatible JSON RPC 10"; }

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

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<QueryCompatibleJSONRPC10EndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<QueryCompatibleJSONRPC10Client>;

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>, QueryCompatibleJSONRPC10Error>
      InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const;
};

}  // namespace QueryCompatibleJSONRPC10
}  // namespace Aws
