/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/json-rpc-10/JSONRPC10ServiceClientModel.h>
#include <aws/json-rpc-10/JSONRPC10_EXPORTS.h>

namespace Aws {
namespace JSONRPC10 {
class AWS_JSONRPC10_API JSONRPC10Client : public Aws::Client::AWSJsonClient,
                                          public Aws::Client::ClientWithAsyncTemplateMethods<JSONRPC10Client> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef JSONRPC10ClientConfiguration ClientConfigurationType;
  typedef JSONRPC10EndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  JSONRPC10Client(const Aws::JSONRPC10::JSONRPC10ClientConfiguration& clientConfiguration = Aws::JSONRPC10::JSONRPC10ClientConfiguration(),
                  std::shared_ptr<JSONRPC10EndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  JSONRPC10Client(const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<JSONRPC10EndpointProviderBase> endpointProvider = nullptr,
                  const Aws::JSONRPC10::JSONRPC10ClientConfiguration& clientConfiguration = Aws::JSONRPC10::JSONRPC10ClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  JSONRPC10Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<JSONRPC10EndpointProviderBase> endpointProvider = nullptr,
                  const Aws::JSONRPC10::JSONRPC10ClientConfiguration& clientConfiguration = Aws::JSONRPC10::JSONRPC10ClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  JSONRPC10Client(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  JSONRPC10Client(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  JSONRPC10Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~JSONRPC10Client();

  /**
   * <p>The example tests how servers must support requests containing a
   * <code>Content-Type</code> header with parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/json-rpc-10-2020-07-14/ContentTypeParameters">AWS
   * API Reference</a></p>
   */
  virtual Model::ContentTypeParametersOutcome ContentTypeParameters(const Model::ContentTypeParametersRequest& request = {}) const;

  /**
   * A Callable wrapper for ContentTypeParameters that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ContentTypeParametersRequestT = Model::ContentTypeParametersRequest>
  Model::ContentTypeParametersOutcomeCallable ContentTypeParametersCallable(const ContentTypeParametersRequestT& request = {}) const {
    return SubmitCallable(&JSONRPC10Client::ContentTypeParameters, request);
  }

  /**
   * An Async wrapper for ContentTypeParameters that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ContentTypeParametersRequestT = Model::ContentTypeParametersRequest>
  void ContentTypeParametersAsync(const ContentTypeParametersResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                  const ContentTypeParametersRequestT& request = {}) const {
    return SubmitAsync(&JSONRPC10Client::ContentTypeParameters, request, handler, context);
  }

  /**
   * <p>The example tests how requests and responses are serialized when there's no
   * request or response payload because the operation has an empty input and empty
   * output structure that reuses the same shape. While this should be rare, code
   * generators must support this.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/json-rpc-10-2020-07-14/EmptyInputAndEmptyOutput">AWS
   * API Reference</a></p>
   */
  virtual Model::EmptyInputAndEmptyOutputOutcome EmptyInputAndEmptyOutput(const Model::EmptyInputAndEmptyOutputRequest& request = {}) const;

  /**
   * A Callable wrapper for EmptyInputAndEmptyOutput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename EmptyInputAndEmptyOutputRequestT = Model::EmptyInputAndEmptyOutputRequest>
  Model::EmptyInputAndEmptyOutputOutcomeCallable EmptyInputAndEmptyOutputCallable(
      const EmptyInputAndEmptyOutputRequestT& request = {}) const {
    return SubmitCallable(&JSONRPC10Client::EmptyInputAndEmptyOutput, request);
  }

  /**
   * An Async wrapper for EmptyInputAndEmptyOutput that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename EmptyInputAndEmptyOutputRequestT = Model::EmptyInputAndEmptyOutputRequest>
  void EmptyInputAndEmptyOutputAsync(const EmptyInputAndEmptyOutputResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                     const EmptyInputAndEmptyOutputRequestT& request = {}) const {
    return SubmitAsync(&JSONRPC10Client::EmptyInputAndEmptyOutput, request, handler, context);
  }

  /**
   *
   */
  virtual Model::EndpointOperationOutcome EndpointOperation(const Model::EndpointOperationRequest& request = {}) const;

  /**
   * A Callable wrapper for EndpointOperation that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename EndpointOperationRequestT = Model::EndpointOperationRequest>
  Model::EndpointOperationOutcomeCallable EndpointOperationCallable(const EndpointOperationRequestT& request = {}) const {
    return SubmitCallable(&JSONRPC10Client::EndpointOperation, request);
  }

  /**
   * An Async wrapper for EndpointOperation that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename EndpointOperationRequestT = Model::EndpointOperationRequest>
  void EndpointOperationAsync(const EndpointOperationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const EndpointOperationRequestT& request = {}) const {
    return SubmitAsync(&JSONRPC10Client::EndpointOperation, request, handler, context);
  }

  /**
   *
   */
  virtual Model::EndpointWithHostLabelOperationOutcome EndpointWithHostLabelOperation(
      const Model::EndpointWithHostLabelOperationRequest& request) const;

  /**
   * A Callable wrapper for EndpointWithHostLabelOperation that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename EndpointWithHostLabelOperationRequestT = Model::EndpointWithHostLabelOperationRequest>
  Model::EndpointWithHostLabelOperationOutcomeCallable EndpointWithHostLabelOperationCallable(
      const EndpointWithHostLabelOperationRequestT& request) const {
    return SubmitCallable(&JSONRPC10Client::EndpointWithHostLabelOperation, request);
  }

  /**
   * An Async wrapper for EndpointWithHostLabelOperation that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename EndpointWithHostLabelOperationRequestT = Model::EndpointWithHostLabelOperationRequest>
  void EndpointWithHostLabelOperationAsync(const EndpointWithHostLabelOperationRequestT& request,
                                           const EndpointWithHostLabelOperationResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&JSONRPC10Client::EndpointWithHostLabelOperation, request, handler, context);
  }

  /**
   * <p>This operation has three possible return values:</p> <ol> <li>A successful
   * response in the form of GreetingWithErrorsOutput</li> <li>An InvalidGreeting
   * error.</li> <li>A ComplexError error.</li> </ol> <p>Implementations must be able
   * to successfully take a response and properly deserialize successful and error
   * responses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/json-rpc-10-2020-07-14/GreetingWithErrors">AWS
   * API Reference</a></p>
   */
  virtual Model::GreetingWithErrorsOutcome GreetingWithErrors(const Model::GreetingWithErrorsRequest& request = {}) const;

  /**
   * A Callable wrapper for GreetingWithErrors that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GreetingWithErrorsRequestT = Model::GreetingWithErrorsRequest>
  Model::GreetingWithErrorsOutcomeCallable GreetingWithErrorsCallable(const GreetingWithErrorsRequestT& request = {}) const {
    return SubmitCallable(&JSONRPC10Client::GreetingWithErrors, request);
  }

  /**
   * An Async wrapper for GreetingWithErrors that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GreetingWithErrorsRequestT = Model::GreetingWithErrorsRequest>
  void GreetingWithErrorsAsync(const GreetingWithErrorsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const GreetingWithErrorsRequestT& request = {}) const {
    return SubmitAsync(&JSONRPC10Client::GreetingWithErrors, request, handler, context);
  }

  /**
   *
   */
  virtual Model::HostWithPathOperationOutcome HostWithPathOperation(const Model::HostWithPathOperationRequest& request = {}) const;

  /**
   * A Callable wrapper for HostWithPathOperation that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename HostWithPathOperationRequestT = Model::HostWithPathOperationRequest>
  Model::HostWithPathOperationOutcomeCallable HostWithPathOperationCallable(const HostWithPathOperationRequestT& request = {}) const {
    return SubmitCallable(&JSONRPC10Client::HostWithPathOperation, request);
  }

  /**
   * An Async wrapper for HostWithPathOperation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename HostWithPathOperationRequestT = Model::HostWithPathOperationRequest>
  void HostWithPathOperationAsync(const HostWithPathOperationResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                  const HostWithPathOperationRequestT& request = {}) const {
    return SubmitAsync(&JSONRPC10Client::HostWithPathOperation, request, handler, context);
  }

  /**
   * <p>This operation uses unions for inputs and outputs.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/json-rpc-10-2020-07-14/JsonUnions">AWS
   * API Reference</a></p>
   */
  virtual Model::JsonUnionsOutcome JsonUnions(const Model::JsonUnionsRequest& request = {}) const;

  /**
   * A Callable wrapper for JsonUnions that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename JsonUnionsRequestT = Model::JsonUnionsRequest>
  Model::JsonUnionsOutcomeCallable JsonUnionsCallable(const JsonUnionsRequestT& request = {}) const {
    return SubmitCallable(&JSONRPC10Client::JsonUnions, request);
  }

  /**
   * An Async wrapper for JsonUnions that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename JsonUnionsRequestT = Model::JsonUnionsRequest>
  void JsonUnionsAsync(const JsonUnionsResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                       const JsonUnionsRequestT& request = {}) const {
    return SubmitAsync(&JSONRPC10Client::JsonUnions, request, handler, context);
  }

  /**
   * <p>The example tests how requests and responses are serialized when there's no
   * request or response payload because the operation has no input or output. While
   * this should be rare, code generators must support this.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/json-rpc-10-2020-07-14/NoInputAndNoOutput">AWS
   * API Reference</a></p>
   */
  virtual Model::NoInputAndNoOutputOutcome NoInputAndNoOutput(const Model::NoInputAndNoOutputRequest& request = {}) const;

  /**
   * A Callable wrapper for NoInputAndNoOutput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename NoInputAndNoOutputRequestT = Model::NoInputAndNoOutputRequest>
  Model::NoInputAndNoOutputOutcomeCallable NoInputAndNoOutputCallable(const NoInputAndNoOutputRequestT& request = {}) const {
    return SubmitCallable(&JSONRPC10Client::NoInputAndNoOutput, request);
  }

  /**
   * An Async wrapper for NoInputAndNoOutput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename NoInputAndNoOutputRequestT = Model::NoInputAndNoOutputRequest>
  void NoInputAndNoOutputAsync(const NoInputAndNoOutputResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const NoInputAndNoOutputRequestT& request = {}) const {
    return SubmitAsync(&JSONRPC10Client::NoInputAndNoOutput, request, handler, context);
  }

  /**
   * <p>The example tests how requests and responses are serialized when there's no
   * request or response payload because the operation has no input and the output is
   * empty. While this should be rare, code generators must support
   * this.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/json-rpc-10-2020-07-14/NoInputAndOutput">AWS
   * API Reference</a></p>
   */
  virtual Model::NoInputAndOutputOutcome NoInputAndOutput(const Model::NoInputAndOutputRequest& request = {}) const;

  /**
   * A Callable wrapper for NoInputAndOutput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename NoInputAndOutputRequestT = Model::NoInputAndOutputRequest>
  Model::NoInputAndOutputOutcomeCallable NoInputAndOutputCallable(const NoInputAndOutputRequestT& request = {}) const {
    return SubmitCallable(&JSONRPC10Client::NoInputAndOutput, request);
  }

  /**
   * An Async wrapper for NoInputAndOutput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename NoInputAndOutputRequestT = Model::NoInputAndOutputRequest>
  void NoInputAndOutputAsync(const NoInputAndOutputResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const NoInputAndOutputRequestT& request = {}) const {
    return SubmitAsync(&JSONRPC10Client::NoInputAndOutput, request, handler, context);
  }

  /**
   *
   */
  virtual Model::PutWithContentEncodingOutcome PutWithContentEncoding(const Model::PutWithContentEncodingRequest& request = {}) const;

  /**
   * A Callable wrapper for PutWithContentEncoding that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PutWithContentEncodingRequestT = Model::PutWithContentEncodingRequest>
  Model::PutWithContentEncodingOutcomeCallable PutWithContentEncodingCallable(const PutWithContentEncodingRequestT& request = {}) const {
    return SubmitCallable(&JSONRPC10Client::PutWithContentEncoding, request);
  }

  /**
   * An Async wrapper for PutWithContentEncoding that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename PutWithContentEncodingRequestT = Model::PutWithContentEncodingRequest>
  void PutWithContentEncodingAsync(const PutWithContentEncodingResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const PutWithContentEncodingRequestT& request = {}) const {
    return SubmitAsync(&JSONRPC10Client::PutWithContentEncoding, request, handler, context);
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
    return SubmitCallable(&JSONRPC10Client::SimpleScalarProperties, request);
  }

  /**
   * An Async wrapper for SimpleScalarProperties that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename SimpleScalarPropertiesRequestT = Model::SimpleScalarPropertiesRequest>
  void SimpleScalarPropertiesAsync(const SimpleScalarPropertiesResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const SimpleScalarPropertiesRequestT& request = {}) const {
    return SubmitAsync(&JSONRPC10Client::SimpleScalarProperties, request, handler, context);
  }

  void OverrideEndpoint(const Aws::String& endpoint);
  std::shared_ptr<JSONRPC10EndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<JSONRPC10Client>;
  void init(const JSONRPC10ClientConfiguration& clientConfiguration);

  JSONRPC10ClientConfiguration m_clientConfiguration;
  std::shared_ptr<JSONRPC10EndpointProviderBase> m_endpointProvider;
};

}  // namespace JSONRPC10
}  // namespace Aws
