/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2protocol/RpcV2ProtocolServiceClientModel.h>
#include <aws/rpcv2protocol/RpcV2Protocol_EXPORTS.h>

namespace Aws {
namespace RpcV2Protocol {
class AWS_RPCV2PROTOCOL_API RpcV2ProtocolClient : public Aws::Client::AWSRpcV2CborClient,
                                                  public Aws::Client::ClientWithAsyncTemplateMethods<RpcV2ProtocolClient> {
 public:
  typedef Aws::Client::AWSRpcV2CborClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef RpcV2ProtocolClientConfiguration ClientConfigurationType;
  typedef RpcV2ProtocolEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  RpcV2ProtocolClient(const Aws::RpcV2Protocol::RpcV2ProtocolClientConfiguration& clientConfiguration =
                          Aws::RpcV2Protocol::RpcV2ProtocolClientConfiguration(),
                      std::shared_ptr<RpcV2ProtocolEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  RpcV2ProtocolClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<RpcV2ProtocolEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::RpcV2Protocol::RpcV2ProtocolClientConfiguration& clientConfiguration =
                          Aws::RpcV2Protocol::RpcV2ProtocolClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  RpcV2ProtocolClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<RpcV2ProtocolEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::RpcV2Protocol::RpcV2ProtocolClientConfiguration& clientConfiguration =
                          Aws::RpcV2Protocol::RpcV2ProtocolClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  RpcV2ProtocolClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  RpcV2ProtocolClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  RpcV2ProtocolClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~RpcV2ProtocolClient();

  /**
   *
   */
  virtual Model::EmptyInputOutputOutcome EmptyInputOutput(const Model::EmptyInputOutputRequest& request = {}) const;

  /**
   * A Callable wrapper for EmptyInputOutput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename EmptyInputOutputRequestT = Model::EmptyInputOutputRequest>
  Model::EmptyInputOutputOutcomeCallable EmptyInputOutputCallable(const EmptyInputOutputRequestT& request = {}) const {
    return SubmitCallable(&RpcV2ProtocolClient::EmptyInputOutput, request);
  }

  /**
   * An Async wrapper for EmptyInputOutput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename EmptyInputOutputRequestT = Model::EmptyInputOutputRequest>
  void EmptyInputOutputAsync(const EmptyInputOutputResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const EmptyInputOutputRequestT& request = {}) const {
    return SubmitAsync(&RpcV2ProtocolClient::EmptyInputOutput, request, handler, context);
  }

  /**
   *
   */
  virtual Model::Float16Outcome Float16(const Model::Float16Request& request = {}) const;

  /**
   * A Callable wrapper for Float16 that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename Float16RequestT = Model::Float16Request>
  Model::Float16OutcomeCallable Float16Callable(const Float16RequestT& request = {}) const {
    return SubmitCallable(&RpcV2ProtocolClient::Float16, request);
  }

  /**
   * An Async wrapper for Float16 that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename Float16RequestT = Model::Float16Request>
  void Float16Async(const Float16ResponseReceivedHandler& handler,
                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                    const Float16RequestT& request = {}) const {
    return SubmitAsync(&RpcV2ProtocolClient::Float16, request, handler, context);
  }

  /**
   *
   */
  virtual Model::FractionalSecondsOutcome FractionalSeconds(const Model::FractionalSecondsRequest& request = {}) const;

  /**
   * A Callable wrapper for FractionalSeconds that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename FractionalSecondsRequestT = Model::FractionalSecondsRequest>
  Model::FractionalSecondsOutcomeCallable FractionalSecondsCallable(const FractionalSecondsRequestT& request = {}) const {
    return SubmitCallable(&RpcV2ProtocolClient::FractionalSeconds, request);
  }

  /**
   * An Async wrapper for FractionalSeconds that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename FractionalSecondsRequestT = Model::FractionalSecondsRequest>
  void FractionalSecondsAsync(const FractionalSecondsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const FractionalSecondsRequestT& request = {}) const {
    return SubmitAsync(&RpcV2ProtocolClient::FractionalSeconds, request, handler, context);
  }

  /**
   * <p>This operation has three possible return values:</p> <ol> <li>A successful
   * response in the form of GreetingWithErrorsOutput</li> <li>An InvalidGreeting
   * error.</li> <li>A ComplexError error.</li> </ol> <p>Implementations must be able
   * to successfully take a response and properly deserialize successful and error
   * responses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rpcv2protocol-2020-07-14/GreetingWithErrors">AWS
   * API Reference</a></p>
   */
  virtual Model::GreetingWithErrorsOutcome GreetingWithErrors(const Model::GreetingWithErrorsRequest& request = {}) const;

  /**
   * A Callable wrapper for GreetingWithErrors that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GreetingWithErrorsRequestT = Model::GreetingWithErrorsRequest>
  Model::GreetingWithErrorsOutcomeCallable GreetingWithErrorsCallable(const GreetingWithErrorsRequestT& request = {}) const {
    return SubmitCallable(&RpcV2ProtocolClient::GreetingWithErrors, request);
  }

  /**
   * An Async wrapper for GreetingWithErrors that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GreetingWithErrorsRequestT = Model::GreetingWithErrorsRequest>
  void GreetingWithErrorsAsync(const GreetingWithErrorsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const GreetingWithErrorsRequestT& request = {}) const {
    return SubmitAsync(&RpcV2ProtocolClient::GreetingWithErrors, request, handler, context);
  }

  /**
   *
   */
  virtual Model::NoInputOutputOutcome NoInputOutput(const Model::NoInputOutputRequest& request = {}) const;

  /**
   * A Callable wrapper for NoInputOutput that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename NoInputOutputRequestT = Model::NoInputOutputRequest>
  Model::NoInputOutputOutcomeCallable NoInputOutputCallable(const NoInputOutputRequestT& request = {}) const {
    return SubmitCallable(&RpcV2ProtocolClient::NoInputOutput, request);
  }

  /**
   * An Async wrapper for NoInputOutput that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename NoInputOutputRequestT = Model::NoInputOutputRequest>
  void NoInputOutputAsync(const NoInputOutputResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                          const NoInputOutputRequestT& request = {}) const {
    return SubmitAsync(&RpcV2ProtocolClient::NoInputOutput, request, handler, context);
  }

  /**
   *
   */
  virtual Model::OptionalInputOutputOutcome OptionalInputOutput(const Model::OptionalInputOutputRequest& request = {}) const;

  /**
   * A Callable wrapper for OptionalInputOutput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename OptionalInputOutputRequestT = Model::OptionalInputOutputRequest>
  Model::OptionalInputOutputOutcomeCallable OptionalInputOutputCallable(const OptionalInputOutputRequestT& request = {}) const {
    return SubmitCallable(&RpcV2ProtocolClient::OptionalInputOutput, request);
  }

  /**
   * An Async wrapper for OptionalInputOutput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename OptionalInputOutputRequestT = Model::OptionalInputOutputRequest>
  void OptionalInputOutputAsync(const OptionalInputOutputResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                const OptionalInputOutputRequestT& request = {}) const {
    return SubmitAsync(&RpcV2ProtocolClient::OptionalInputOutput, request, handler, context);
  }

  /**
   *
   */
  virtual Model::RecursiveShapesOutcome RecursiveShapes(const Model::RecursiveShapesRequest& request = {}) const;

  /**
   * A Callable wrapper for RecursiveShapes that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename RecursiveShapesRequestT = Model::RecursiveShapesRequest>
  Model::RecursiveShapesOutcomeCallable RecursiveShapesCallable(const RecursiveShapesRequestT& request = {}) const {
    return SubmitCallable(&RpcV2ProtocolClient::RecursiveShapes, request);
  }

  /**
   * An Async wrapper for RecursiveShapes that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename RecursiveShapesRequestT = Model::RecursiveShapesRequest>
  void RecursiveShapesAsync(const RecursiveShapesResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const RecursiveShapesRequestT& request = {}) const {
    return SubmitAsync(&RpcV2ProtocolClient::RecursiveShapes, request, handler, context);
  }

  /**
   * <p>The example tests basic map serialization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rpcv2protocol-2020-07-14/RpcV2CborDenseMaps">AWS
   * API Reference</a></p>
   */
  virtual Model::RpcV2CborDenseMapsOutcome RpcV2CborDenseMaps(const Model::RpcV2CborDenseMapsRequest& request = {}) const;

  /**
   * A Callable wrapper for RpcV2CborDenseMaps that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename RpcV2CborDenseMapsRequestT = Model::RpcV2CborDenseMapsRequest>
  Model::RpcV2CborDenseMapsOutcomeCallable RpcV2CborDenseMapsCallable(const RpcV2CborDenseMapsRequestT& request = {}) const {
    return SubmitCallable(&RpcV2ProtocolClient::RpcV2CborDenseMaps, request);
  }

  /**
   * An Async wrapper for RpcV2CborDenseMaps that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename RpcV2CborDenseMapsRequestT = Model::RpcV2CborDenseMapsRequest>
  void RpcV2CborDenseMapsAsync(const RpcV2CborDenseMapsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const RpcV2CborDenseMapsRequestT& request = {}) const {
    return SubmitAsync(&RpcV2ProtocolClient::RpcV2CborDenseMaps, request, handler, context);
  }

  /**
   * <p>This test case serializes JSON lists for the following cases for both input
   * and output:</p> <ol> <li>Normal lists.</li> <li>Normal sets.</li> <li>Lists of
   * lists.</li> <li>Lists of structures.</li> </ol><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rpcv2protocol-2020-07-14/RpcV2CborLists">AWS
   * API Reference</a></p>
   */
  virtual Model::RpcV2CborListsOutcome RpcV2CborLists(const Model::RpcV2CborListsRequest& request = {}) const;

  /**
   * A Callable wrapper for RpcV2CborLists that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename RpcV2CborListsRequestT = Model::RpcV2CborListsRequest>
  Model::RpcV2CborListsOutcomeCallable RpcV2CborListsCallable(const RpcV2CborListsRequestT& request = {}) const {
    return SubmitCallable(&RpcV2ProtocolClient::RpcV2CborLists, request);
  }

  /**
   * An Async wrapper for RpcV2CborLists that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename RpcV2CborListsRequestT = Model::RpcV2CborListsRequest>
  void RpcV2CborListsAsync(const RpcV2CborListsResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                           const RpcV2CborListsRequestT& request = {}) const {
    return SubmitAsync(&RpcV2ProtocolClient::RpcV2CborLists, request, handler, context);
  }

  /**
   *
   */
  virtual Model::SimpleScalarPropertiesOutcome SimpleScalarProperties(const Model::SimpleScalarPropertiesRequest& request = {}) const;

  /**
   * A Callable wrapper for SimpleScalarProperties that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename SimpleScalarPropertiesRequestT = Model::SimpleScalarPropertiesRequest>
  Model::SimpleScalarPropertiesOutcomeCallable SimpleScalarPropertiesCallable(const SimpleScalarPropertiesRequestT& request = {}) const {
    return SubmitCallable(&RpcV2ProtocolClient::SimpleScalarProperties, request);
  }

  /**
   * An Async wrapper for SimpleScalarProperties that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename SimpleScalarPropertiesRequestT = Model::SimpleScalarPropertiesRequest>
  void SimpleScalarPropertiesAsync(const SimpleScalarPropertiesResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const SimpleScalarPropertiesRequestT& request = {}) const {
    return SubmitAsync(&RpcV2ProtocolClient::SimpleScalarProperties, request, handler, context);
  }

  void OverrideEndpoint(const Aws::String& endpoint);
  std::shared_ptr<RpcV2ProtocolEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<RpcV2ProtocolClient>;
  void init(const RpcV2ProtocolClientConfiguration& clientConfiguration);

  RpcV2ProtocolClientConfiguration m_clientConfiguration;
  std::shared_ptr<RpcV2ProtocolEndpointProviderBase> m_endpointProvider;
};

}  // namespace RpcV2Protocol
}  // namespace Aws
