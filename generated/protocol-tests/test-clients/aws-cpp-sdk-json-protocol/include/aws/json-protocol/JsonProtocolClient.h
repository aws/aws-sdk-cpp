/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/json-protocol/JsonProtocolServiceClientModel.h>
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>

namespace Aws {
namespace JsonProtocol {
class AWS_JSONPROTOCOL_API JsonProtocolClient : public Aws::Client::AWSJsonClient,
                                                public Aws::Client::ClientWithAsyncTemplateMethods<JsonProtocolClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef JsonProtocolClientConfiguration ClientConfigurationType;
  typedef JsonProtocolEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  JsonProtocolClient(
      const Aws::JsonProtocol::JsonProtocolClientConfiguration& clientConfiguration = Aws::JsonProtocol::JsonProtocolClientConfiguration(),
      std::shared_ptr<JsonProtocolEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  JsonProtocolClient(
      const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<JsonProtocolEndpointProviderBase> endpointProvider = nullptr,
      const Aws::JsonProtocol::JsonProtocolClientConfiguration& clientConfiguration = Aws::JsonProtocol::JsonProtocolClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  JsonProtocolClient(
      const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
      std::shared_ptr<JsonProtocolEndpointProviderBase> endpointProvider = nullptr,
      const Aws::JsonProtocol::JsonProtocolClientConfiguration& clientConfiguration = Aws::JsonProtocol::JsonProtocolClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  JsonProtocolClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  JsonProtocolClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  JsonProtocolClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~JsonProtocolClient();

  /**
   * <p>The example tests how servers must support requests containing a
   * <code>Content-Type</code> header with parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/json-protocol-2018-01-01/ContentTypeParameters">AWS
   * API Reference</a></p>
   */
  virtual Model::ContentTypeParametersOutcome ContentTypeParameters(const Model::ContentTypeParametersRequest& request = {}) const;

  /**
   * A Callable wrapper for ContentTypeParameters that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ContentTypeParametersRequestT = Model::ContentTypeParametersRequest>
  Model::ContentTypeParametersOutcomeCallable ContentTypeParametersCallable(const ContentTypeParametersRequestT& request = {}) const {
    return SubmitCallable(&JsonProtocolClient::ContentTypeParameters, request);
  }

  /**
   * An Async wrapper for ContentTypeParameters that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ContentTypeParametersRequestT = Model::ContentTypeParametersRequest>
  void ContentTypeParametersAsync(const ContentTypeParametersResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                  const ContentTypeParametersRequestT& request = {}) const {
    return SubmitAsync(&JsonProtocolClient::ContentTypeParameters, request, handler, context);
  }

  /**
   *
   */
  virtual Model::DatetimeOffsetsOutcome DatetimeOffsets(const Model::DatetimeOffsetsRequest& request = {}) const;

  /**
   * A Callable wrapper for DatetimeOffsets that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DatetimeOffsetsRequestT = Model::DatetimeOffsetsRequest>
  Model::DatetimeOffsetsOutcomeCallable DatetimeOffsetsCallable(const DatetimeOffsetsRequestT& request = {}) const {
    return SubmitCallable(&JsonProtocolClient::DatetimeOffsets, request);
  }

  /**
   * An Async wrapper for DatetimeOffsets that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DatetimeOffsetsRequestT = Model::DatetimeOffsetsRequest>
  void DatetimeOffsetsAsync(const DatetimeOffsetsResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const DatetimeOffsetsRequestT& request = {}) const {
    return SubmitAsync(&JsonProtocolClient::DatetimeOffsets, request, handler, context);
  }

  /**
   *
   */
  virtual Model::EmptyOperationOutcome EmptyOperation(const Model::EmptyOperationRequest& request = {}) const;

  /**
   * A Callable wrapper for EmptyOperation that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename EmptyOperationRequestT = Model::EmptyOperationRequest>
  Model::EmptyOperationOutcomeCallable EmptyOperationCallable(const EmptyOperationRequestT& request = {}) const {
    return SubmitCallable(&JsonProtocolClient::EmptyOperation, request);
  }

  /**
   * An Async wrapper for EmptyOperation that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename EmptyOperationRequestT = Model::EmptyOperationRequest>
  void EmptyOperationAsync(const EmptyOperationResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                           const EmptyOperationRequestT& request = {}) const {
    return SubmitAsync(&JsonProtocolClient::EmptyOperation, request, handler, context);
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
    return SubmitCallable(&JsonProtocolClient::EndpointOperation, request);
  }

  /**
   * An Async wrapper for EndpointOperation that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename EndpointOperationRequestT = Model::EndpointOperationRequest>
  void EndpointOperationAsync(const EndpointOperationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const EndpointOperationRequestT& request = {}) const {
    return SubmitAsync(&JsonProtocolClient::EndpointOperation, request, handler, context);
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
    return SubmitCallable(&JsonProtocolClient::EndpointWithHostLabelOperation, request);
  }

  /**
   * An Async wrapper for EndpointWithHostLabelOperation that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename EndpointWithHostLabelOperationRequestT = Model::EndpointWithHostLabelOperationRequest>
  void EndpointWithHostLabelOperationAsync(const EndpointWithHostLabelOperationRequestT& request,
                                           const EndpointWithHostLabelOperationResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&JsonProtocolClient::EndpointWithHostLabelOperation, request, handler, context);
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
    return SubmitCallable(&JsonProtocolClient::FractionalSeconds, request);
  }

  /**
   * An Async wrapper for FractionalSeconds that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename FractionalSecondsRequestT = Model::FractionalSecondsRequest>
  void FractionalSecondsAsync(const FractionalSecondsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const FractionalSecondsRequestT& request = {}) const {
    return SubmitAsync(&JsonProtocolClient::FractionalSeconds, request, handler, context);
  }

  /**
   * <p>This operation has three possible return values:</p> <ol> <li>A successful
   * response in the form of GreetingWithErrorsOutput</li> <li>An InvalidGreeting
   * error.</li> <li>A ComplexError error.</li> </ol> <p>Implementations must be able
   * to successfully take a response and properly deserialize successful and error
   * responses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/json-protocol-2018-01-01/GreetingWithErrors">AWS
   * API Reference</a></p>
   */
  virtual Model::GreetingWithErrorsOutcome GreetingWithErrors(const Model::GreetingWithErrorsRequest& request = {}) const;

  /**
   * A Callable wrapper for GreetingWithErrors that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GreetingWithErrorsRequestT = Model::GreetingWithErrorsRequest>
  Model::GreetingWithErrorsOutcomeCallable GreetingWithErrorsCallable(const GreetingWithErrorsRequestT& request = {}) const {
    return SubmitCallable(&JsonProtocolClient::GreetingWithErrors, request);
  }

  /**
   * An Async wrapper for GreetingWithErrors that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GreetingWithErrorsRequestT = Model::GreetingWithErrorsRequest>
  void GreetingWithErrorsAsync(const GreetingWithErrorsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const GreetingWithErrorsRequestT& request = {}) const {
    return SubmitAsync(&JsonProtocolClient::GreetingWithErrors, request, handler, context);
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
    return SubmitCallable(&JsonProtocolClient::HostWithPathOperation, request);
  }

  /**
   * An Async wrapper for HostWithPathOperation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename HostWithPathOperationRequestT = Model::HostWithPathOperationRequest>
  void HostWithPathOperationAsync(const HostWithPathOperationResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                  const HostWithPathOperationRequestT& request = {}) const {
    return SubmitAsync(&JsonProtocolClient::HostWithPathOperation, request, handler, context);
  }

  /**
   * <p>This example serializes enums as top level properties, in lists, sets, and
   * maps.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/json-protocol-2018-01-01/JsonEnums">AWS
   * API Reference</a></p>
   */
  virtual Model::JsonEnumsOutcome JsonEnums(const Model::JsonEnumsRequest& request = {}) const;

  /**
   * A Callable wrapper for JsonEnums that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename JsonEnumsRequestT = Model::JsonEnumsRequest>
  Model::JsonEnumsOutcomeCallable JsonEnumsCallable(const JsonEnumsRequestT& request = {}) const {
    return SubmitCallable(&JsonProtocolClient::JsonEnums, request);
  }

  /**
   * An Async wrapper for JsonEnums that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename JsonEnumsRequestT = Model::JsonEnumsRequest>
  void JsonEnumsAsync(const JsonEnumsResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                      const JsonEnumsRequestT& request = {}) const {
    return SubmitAsync(&JsonProtocolClient::JsonEnums, request, handler, context);
  }

  /**
   * <p>This example serializes intEnums as top level properties, in lists, sets, and
   * maps.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/json-protocol-2018-01-01/JsonIntEnums">AWS
   * API Reference</a></p>
   */
  virtual Model::JsonIntEnumsOutcome JsonIntEnums(const Model::JsonIntEnumsRequest& request = {}) const;

  /**
   * A Callable wrapper for JsonIntEnums that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename JsonIntEnumsRequestT = Model::JsonIntEnumsRequest>
  Model::JsonIntEnumsOutcomeCallable JsonIntEnumsCallable(const JsonIntEnumsRequestT& request = {}) const {
    return SubmitCallable(&JsonProtocolClient::JsonIntEnums, request);
  }

  /**
   * An Async wrapper for JsonIntEnums that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename JsonIntEnumsRequestT = Model::JsonIntEnumsRequest>
  void JsonIntEnumsAsync(const JsonIntEnumsResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const JsonIntEnumsRequestT& request = {}) const {
    return SubmitAsync(&JsonProtocolClient::JsonIntEnums, request, handler, context);
  }

  /**
   * <p>This operation uses unions for inputs and outputs.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/json-protocol-2018-01-01/JsonUnions">AWS
   * API Reference</a></p>
   */
  virtual Model::JsonUnionsOutcome JsonUnions(const Model::JsonUnionsRequest& request = {}) const;

  /**
   * A Callable wrapper for JsonUnions that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename JsonUnionsRequestT = Model::JsonUnionsRequest>
  Model::JsonUnionsOutcomeCallable JsonUnionsCallable(const JsonUnionsRequestT& request = {}) const {
    return SubmitCallable(&JsonProtocolClient::JsonUnions, request);
  }

  /**
   * An Async wrapper for JsonUnions that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename JsonUnionsRequestT = Model::JsonUnionsRequest>
  void JsonUnionsAsync(const JsonUnionsResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                       const JsonUnionsRequestT& request = {}) const {
    return SubmitAsync(&JsonProtocolClient::JsonUnions, request, handler, context);
  }

  /**
   *
   */
  virtual Model::KitchenSinkOperationOutcome KitchenSinkOperation(const Model::KitchenSinkOperationRequest& request = {}) const;

  /**
   * A Callable wrapper for KitchenSinkOperation that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename KitchenSinkOperationRequestT = Model::KitchenSinkOperationRequest>
  Model::KitchenSinkOperationOutcomeCallable KitchenSinkOperationCallable(const KitchenSinkOperationRequestT& request = {}) const {
    return SubmitCallable(&JsonProtocolClient::KitchenSinkOperation, request);
  }

  /**
   * An Async wrapper for KitchenSinkOperation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename KitchenSinkOperationRequestT = Model::KitchenSinkOperationRequest>
  void KitchenSinkOperationAsync(const KitchenSinkOperationResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                 const KitchenSinkOperationRequestT& request = {}) const {
    return SubmitAsync(&JsonProtocolClient::KitchenSinkOperation, request, handler, context);
  }

  /**
   *
   */
  virtual Model::NullOperationOutcome NullOperation(const Model::NullOperationRequest& request = {}) const;

  /**
   * A Callable wrapper for NullOperation that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename NullOperationRequestT = Model::NullOperationRequest>
  Model::NullOperationOutcomeCallable NullOperationCallable(const NullOperationRequestT& request = {}) const {
    return SubmitCallable(&JsonProtocolClient::NullOperation, request);
  }

  /**
   * An Async wrapper for NullOperation that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename NullOperationRequestT = Model::NullOperationRequest>
  void NullOperationAsync(const NullOperationResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                          const NullOperationRequestT& request = {}) const {
    return SubmitAsync(&JsonProtocolClient::NullOperation, request, handler, context);
  }

  /**
   *
   */
  virtual Model::OperationWithOptionalInputOutputOutcome OperationWithOptionalInputOutput(
      const Model::OperationWithOptionalInputOutputRequest& request = {}) const;

  /**
   * A Callable wrapper for OperationWithOptionalInputOutput that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename OperationWithOptionalInputOutputRequestT = Model::OperationWithOptionalInputOutputRequest>
  Model::OperationWithOptionalInputOutputOutcomeCallable OperationWithOptionalInputOutputCallable(
      const OperationWithOptionalInputOutputRequestT& request = {}) const {
    return SubmitCallable(&JsonProtocolClient::OperationWithOptionalInputOutput, request);
  }

  /**
   * An Async wrapper for OperationWithOptionalInputOutput that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename OperationWithOptionalInputOutputRequestT = Model::OperationWithOptionalInputOutputRequest>
  void OperationWithOptionalInputOutputAsync(const OperationWithOptionalInputOutputResponseReceivedHandler& handler,
                                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                             const OperationWithOptionalInputOutputRequestT& request = {}) const {
    return SubmitAsync(&JsonProtocolClient::OperationWithOptionalInputOutput, request, handler, context);
  }

  /**
   * <p>This example serializes an inline document as part of the
   * payload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/json-protocol-2018-01-01/PutAndGetInlineDocuments">AWS
   * API Reference</a></p>
   */
  virtual Model::PutAndGetInlineDocumentsOutcome PutAndGetInlineDocuments(const Model::PutAndGetInlineDocumentsRequest& request = {}) const;

  /**
   * A Callable wrapper for PutAndGetInlineDocuments that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PutAndGetInlineDocumentsRequestT = Model::PutAndGetInlineDocumentsRequest>
  Model::PutAndGetInlineDocumentsOutcomeCallable PutAndGetInlineDocumentsCallable(
      const PutAndGetInlineDocumentsRequestT& request = {}) const {
    return SubmitCallable(&JsonProtocolClient::PutAndGetInlineDocuments, request);
  }

  /**
   * An Async wrapper for PutAndGetInlineDocuments that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename PutAndGetInlineDocumentsRequestT = Model::PutAndGetInlineDocumentsRequest>
  void PutAndGetInlineDocumentsAsync(const PutAndGetInlineDocumentsResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                     const PutAndGetInlineDocumentsRequestT& request = {}) const {
    return SubmitAsync(&JsonProtocolClient::PutAndGetInlineDocuments, request, handler, context);
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
    return SubmitCallable(&JsonProtocolClient::PutWithContentEncoding, request);
  }

  /**
   * An Async wrapper for PutWithContentEncoding that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename PutWithContentEncodingRequestT = Model::PutWithContentEncodingRequest>
  void PutWithContentEncodingAsync(const PutWithContentEncodingResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const PutWithContentEncodingRequestT& request = {}) const {
    return SubmitAsync(&JsonProtocolClient::PutWithContentEncoding, request, handler, context);
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
    return SubmitCallable(&JsonProtocolClient::SimpleScalarProperties, request);
  }

  /**
   * An Async wrapper for SimpleScalarProperties that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename SimpleScalarPropertiesRequestT = Model::SimpleScalarPropertiesRequest>
  void SimpleScalarPropertiesAsync(const SimpleScalarPropertiesResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const SimpleScalarPropertiesRequestT& request = {}) const {
    return SubmitAsync(&JsonProtocolClient::SimpleScalarProperties, request, handler, context);
  }

  void OverrideEndpoint(const Aws::String& endpoint);
  std::shared_ptr<JsonProtocolEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<JsonProtocolClient>;
  void init(const JsonProtocolClientConfiguration& clientConfiguration);

  JsonProtocolClientConfiguration m_clientConfiguration;
  std::shared_ptr<JsonProtocolEndpointProviderBase> m_endpointProvider;
};

}  // namespace JsonProtocol
}  // namespace Aws
