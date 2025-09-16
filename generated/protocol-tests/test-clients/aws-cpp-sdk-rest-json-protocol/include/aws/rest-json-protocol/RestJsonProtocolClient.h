/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rest-json-protocol/RestJsonProtocolServiceClientModel.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

namespace Aws {
namespace RestJsonProtocol {
/**
 * <p>A REST JSON service that sends JSON requests and responses.</p>
 */
class AWS_RESTJSONPROTOCOL_API RestJsonProtocolClient : public Aws::Client::AWSJsonClient,
                                                        public Aws::Client::ClientWithAsyncTemplateMethods<RestJsonProtocolClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef RestJsonProtocolClientConfiguration ClientConfigurationType;
  typedef RestJsonProtocolEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  RestJsonProtocolClient(const Aws::RestJsonProtocol::RestJsonProtocolClientConfiguration& clientConfiguration =
                             Aws::RestJsonProtocol::RestJsonProtocolClientConfiguration(),
                         std::shared_ptr<RestJsonProtocolEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  RestJsonProtocolClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<RestJsonProtocolEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::RestJsonProtocol::RestJsonProtocolClientConfiguration& clientConfiguration =
                             Aws::RestJsonProtocol::RestJsonProtocolClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  RestJsonProtocolClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<RestJsonProtocolEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::RestJsonProtocol::RestJsonProtocolClientConfiguration& clientConfiguration =
                             Aws::RestJsonProtocol::RestJsonProtocolClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  RestJsonProtocolClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  RestJsonProtocolClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  RestJsonProtocolClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~RestJsonProtocolClient();

  /**
   * <p>This example uses all query string types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/AllQueryStringTypes">AWS
   * API Reference</a></p>
   */
  virtual Model::AllQueryStringTypesOutcome AllQueryStringTypes(const Model::AllQueryStringTypesRequest& request = {}) const;

  /**
   * A Callable wrapper for AllQueryStringTypes that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename AllQueryStringTypesRequestT = Model::AllQueryStringTypesRequest>
  Model::AllQueryStringTypesOutcomeCallable AllQueryStringTypesCallable(const AllQueryStringTypesRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::AllQueryStringTypes, request);
  }

  /**
   * An Async wrapper for AllQueryStringTypes that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename AllQueryStringTypesRequestT = Model::AllQueryStringTypesRequest>
  void AllQueryStringTypesAsync(const AllQueryStringTypesResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                const AllQueryStringTypesRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::AllQueryStringTypes, request, handler, context);
  }

  /**
   * <p>This example uses fixed query string params and variable query string params.
   * The fixed query string parameters and variable parameters must both be
   * serialized (implementations may need to merge them together).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/ConstantAndVariableQueryString">AWS
   * API Reference</a></p>
   */
  virtual Model::ConstantAndVariableQueryStringOutcome ConstantAndVariableQueryString(
      const Model::ConstantAndVariableQueryStringRequest& request = {}) const;

  /**
   * A Callable wrapper for ConstantAndVariableQueryString that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ConstantAndVariableQueryStringRequestT = Model::ConstantAndVariableQueryStringRequest>
  Model::ConstantAndVariableQueryStringOutcomeCallable ConstantAndVariableQueryStringCallable(
      const ConstantAndVariableQueryStringRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::ConstantAndVariableQueryString, request);
  }

  /**
   * An Async wrapper for ConstantAndVariableQueryString that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ConstantAndVariableQueryStringRequestT = Model::ConstantAndVariableQueryStringRequest>
  void ConstantAndVariableQueryStringAsync(const ConstantAndVariableQueryStringResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                           const ConstantAndVariableQueryStringRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::ConstantAndVariableQueryString, request, handler, context);
  }

  /**
   * <p>This example uses a constant query string parameters and a label. This simply
   * tests that labels and query string parameters are compatible. The fixed query
   * string parameter named &quot;hello&quot; should in no way conflict with the
   * label, <code>{hello}</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/ConstantQueryString">AWS
   * API Reference</a></p>
   */
  virtual Model::ConstantQueryStringOutcome ConstantQueryString(const Model::ConstantQueryStringRequest& request) const;

  /**
   * A Callable wrapper for ConstantQueryString that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ConstantQueryStringRequestT = Model::ConstantQueryStringRequest>
  Model::ConstantQueryStringOutcomeCallable ConstantQueryStringCallable(const ConstantQueryStringRequestT& request) const {
    return SubmitCallable(&RestJsonProtocolClient::ConstantQueryString, request);
  }

  /**
   * An Async wrapper for ConstantQueryString that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ConstantQueryStringRequestT = Model::ConstantQueryStringRequest>
  void ConstantQueryStringAsync(const ConstantQueryStringRequestT& request, const ConstantQueryStringResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RestJsonProtocolClient::ConstantQueryString, request, handler, context);
  }

  /**
   * <p>The example tests how servers must support requests containing a
   * <code>Content-Type</code> header with parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/ContentTypeParameters">AWS
   * API Reference</a></p>
   */
  virtual Model::ContentTypeParametersOutcome ContentTypeParameters(const Model::ContentTypeParametersRequest& request = {}) const;

  /**
   * A Callable wrapper for ContentTypeParameters that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ContentTypeParametersRequestT = Model::ContentTypeParametersRequest>
  Model::ContentTypeParametersOutcomeCallable ContentTypeParametersCallable(const ContentTypeParametersRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::ContentTypeParameters, request);
  }

  /**
   * An Async wrapper for ContentTypeParameters that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ContentTypeParametersRequestT = Model::ContentTypeParametersRequest>
  void ContentTypeParametersAsync(const ContentTypeParametersResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                  const ContentTypeParametersRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::ContentTypeParameters, request, handler, context);
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
    return SubmitCallable(&RestJsonProtocolClient::DatetimeOffsets, request);
  }

  /**
   * An Async wrapper for DatetimeOffsets that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DatetimeOffsetsRequestT = Model::DatetimeOffsetsRequest>
  void DatetimeOffsetsAsync(const DatetimeOffsetsResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const DatetimeOffsetsRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::DatetimeOffsets, request, handler, context);
  }

  /**
   * <p>This example serializes a document as part of the payload.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/DocumentType">AWS
   * API Reference</a></p>
   */
  virtual Model::DocumentTypeOutcome DocumentType(const Model::DocumentTypeRequest& request = {}) const;

  /**
   * A Callable wrapper for DocumentType that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DocumentTypeRequestT = Model::DocumentTypeRequest>
  Model::DocumentTypeOutcomeCallable DocumentTypeCallable(const DocumentTypeRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::DocumentType, request);
  }

  /**
   * An Async wrapper for DocumentType that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DocumentTypeRequestT = Model::DocumentTypeRequest>
  void DocumentTypeAsync(const DocumentTypeResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const DocumentTypeRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::DocumentType, request, handler, context);
  }

  /**
   * <p>This example serializes documents as the value of maps.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/DocumentTypeAsMapValue">AWS
   * API Reference</a></p>
   */
  virtual Model::DocumentTypeAsMapValueOutcome DocumentTypeAsMapValue(const Model::DocumentTypeAsMapValueRequest& request = {}) const;

  /**
   * A Callable wrapper for DocumentTypeAsMapValue that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DocumentTypeAsMapValueRequestT = Model::DocumentTypeAsMapValueRequest>
  Model::DocumentTypeAsMapValueOutcomeCallable DocumentTypeAsMapValueCallable(const DocumentTypeAsMapValueRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::DocumentTypeAsMapValue, request);
  }

  /**
   * An Async wrapper for DocumentTypeAsMapValue that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DocumentTypeAsMapValueRequestT = Model::DocumentTypeAsMapValueRequest>
  void DocumentTypeAsMapValueAsync(const DocumentTypeAsMapValueResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const DocumentTypeAsMapValueRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::DocumentTypeAsMapValue, request, handler, context);
  }

  /**
   * <p>This example serializes a document as the entire HTTP payload.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/DocumentTypeAsPayload">AWS
   * API Reference</a></p>
   */
  virtual Model::DocumentTypeAsPayloadOutcome DocumentTypeAsPayload(const Model::DocumentTypeAsPayloadRequest& request = {}) const;

  /**
   * A Callable wrapper for DocumentTypeAsPayload that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DocumentTypeAsPayloadRequestT = Model::DocumentTypeAsPayloadRequest>
  Model::DocumentTypeAsPayloadOutcomeCallable DocumentTypeAsPayloadCallable(const DocumentTypeAsPayloadRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::DocumentTypeAsPayload, request);
  }

  /**
   * An Async wrapper for DocumentTypeAsPayload that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DocumentTypeAsPayloadRequestT = Model::DocumentTypeAsPayloadRequest>
  void DocumentTypeAsPayloadAsync(const DocumentTypeAsPayloadResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                  const DocumentTypeAsPayloadRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::DocumentTypeAsPayload, request, handler, context);
  }

  /**
   * <p>The example tests how requests and responses are serialized when there's no
   * request or response payload because the operation has an empty input and empty
   * output structure that reuses the same shape. While this should be rare, code
   * generators must support this.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/EmptyInputAndEmptyOutput">AWS
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
    return SubmitCallable(&RestJsonProtocolClient::EmptyInputAndEmptyOutput, request);
  }

  /**
   * An Async wrapper for EmptyInputAndEmptyOutput that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename EmptyInputAndEmptyOutputRequestT = Model::EmptyInputAndEmptyOutputRequest>
  void EmptyInputAndEmptyOutputAsync(const EmptyInputAndEmptyOutputResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                     const EmptyInputAndEmptyOutputRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::EmptyInputAndEmptyOutput, request, handler, context);
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
    return SubmitCallable(&RestJsonProtocolClient::EndpointOperation, request);
  }

  /**
   * An Async wrapper for EndpointOperation that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename EndpointOperationRequestT = Model::EndpointOperationRequest>
  void EndpointOperationAsync(const EndpointOperationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const EndpointOperationRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::EndpointOperation, request, handler, context);
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
    return SubmitCallable(&RestJsonProtocolClient::EndpointWithHostLabelOperation, request);
  }

  /**
   * An Async wrapper for EndpointWithHostLabelOperation that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename EndpointWithHostLabelOperationRequestT = Model::EndpointWithHostLabelOperationRequest>
  void EndpointWithHostLabelOperationAsync(const EndpointWithHostLabelOperationRequestT& request,
                                           const EndpointWithHostLabelOperationResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RestJsonProtocolClient::EndpointWithHostLabelOperation, request, handler, context);
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
    return SubmitCallable(&RestJsonProtocolClient::FractionalSeconds, request);
  }

  /**
   * An Async wrapper for FractionalSeconds that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename FractionalSecondsRequestT = Model::FractionalSecondsRequest>
  void FractionalSecondsAsync(const FractionalSecondsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const FractionalSecondsRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::FractionalSeconds, request, handler, context);
  }

  /**
   * <p>This operation has four possible return values:</p> <ol> <li>A successful
   * response in the form of GreetingWithErrorsOutput</li> <li>An InvalidGreeting
   * error.</li> <li>A BadRequest error.</li> <li>A FooError.</li> </ol>
   * <p>Implementations must be able to successfully take a response and properly
   * (de)serialize successful and error responses based on the the presence of
   * the</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/GreetingWithErrors">AWS
   * API Reference</a></p>
   */
  virtual Model::GreetingWithErrorsOutcome GreetingWithErrors(const Model::GreetingWithErrorsRequest& request = {}) const;

  /**
   * A Callable wrapper for GreetingWithErrors that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GreetingWithErrorsRequestT = Model::GreetingWithErrorsRequest>
  Model::GreetingWithErrorsOutcomeCallable GreetingWithErrorsCallable(const GreetingWithErrorsRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::GreetingWithErrors, request);
  }

  /**
   * An Async wrapper for GreetingWithErrors that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GreetingWithErrorsRequestT = Model::GreetingWithErrorsRequest>
  void GreetingWithErrorsAsync(const GreetingWithErrorsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const GreetingWithErrorsRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::GreetingWithErrors, request, handler, context);
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
    return SubmitCallable(&RestJsonProtocolClient::HostWithPathOperation, request);
  }

  /**
   * An Async wrapper for HostWithPathOperation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename HostWithPathOperationRequestT = Model::HostWithPathOperationRequest>
  void HostWithPathOperationAsync(const HostWithPathOperationResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                  const HostWithPathOperationRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::HostWithPathOperation, request, handler, context);
  }

  /**
   * <p>This example tests httpChecksumRequired trait</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/HttpChecksumRequired">AWS
   * API Reference</a></p>
   */
  virtual Model::HttpChecksumRequiredOutcome HttpChecksumRequired(const Model::HttpChecksumRequiredRequest& request = {}) const;

  /**
   * A Callable wrapper for HttpChecksumRequired that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename HttpChecksumRequiredRequestT = Model::HttpChecksumRequiredRequest>
  Model::HttpChecksumRequiredOutcomeCallable HttpChecksumRequiredCallable(const HttpChecksumRequiredRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::HttpChecksumRequired, request);
  }

  /**
   * An Async wrapper for HttpChecksumRequired that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename HttpChecksumRequiredRequestT = Model::HttpChecksumRequiredRequest>
  void HttpChecksumRequiredAsync(const HttpChecksumRequiredResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                 const HttpChecksumRequiredRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::HttpChecksumRequired, request, handler, context);
  }

  /**
   *
   */
  virtual Model::HttpEnumPayloadOutcome HttpEnumPayload(const Model::HttpEnumPayloadRequest& request = {}) const;

  /**
   * A Callable wrapper for HttpEnumPayload that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename HttpEnumPayloadRequestT = Model::HttpEnumPayloadRequest>
  Model::HttpEnumPayloadOutcomeCallable HttpEnumPayloadCallable(const HttpEnumPayloadRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::HttpEnumPayload, request);
  }

  /**
   * An Async wrapper for HttpEnumPayload that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename HttpEnumPayloadRequestT = Model::HttpEnumPayloadRequest>
  void HttpEnumPayloadAsync(const HttpEnumPayloadResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const HttpEnumPayloadRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::HttpEnumPayload, request, handler, context);
  }

  /**
   * <p>This example serializes a blob shape in the payload.</p> <p>In this example,
   * no JSON document is synthesized because the payload is not a structure or a
   * union type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/HttpPayloadTraits">AWS
   * API Reference</a></p>
   */
  virtual Model::HttpPayloadTraitsOutcome HttpPayloadTraits(const Model::HttpPayloadTraitsRequest& request = {}) const;

  /**
   * A Callable wrapper for HttpPayloadTraits that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename HttpPayloadTraitsRequestT = Model::HttpPayloadTraitsRequest>
  Model::HttpPayloadTraitsOutcomeCallable HttpPayloadTraitsCallable(const HttpPayloadTraitsRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::HttpPayloadTraits, request);
  }

  /**
   * An Async wrapper for HttpPayloadTraits that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename HttpPayloadTraitsRequestT = Model::HttpPayloadTraitsRequest>
  void HttpPayloadTraitsAsync(const HttpPayloadTraitsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const HttpPayloadTraitsRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::HttpPayloadTraits, request, handler, context);
  }

  /**
   * <p>This example serializes a structure in the payload.</p> <p>Note that
   * serializing a structure changes the wrapper element name to match the targeted
   * structure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/HttpPayloadWithStructure">AWS
   * API Reference</a></p>
   */
  virtual Model::HttpPayloadWithStructureOutcome HttpPayloadWithStructure(const Model::HttpPayloadWithStructureRequest& request = {}) const;

  /**
   * A Callable wrapper for HttpPayloadWithStructure that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename HttpPayloadWithStructureRequestT = Model::HttpPayloadWithStructureRequest>
  Model::HttpPayloadWithStructureOutcomeCallable HttpPayloadWithStructureCallable(
      const HttpPayloadWithStructureRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::HttpPayloadWithStructure, request);
  }

  /**
   * An Async wrapper for HttpPayloadWithStructure that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename HttpPayloadWithStructureRequestT = Model::HttpPayloadWithStructureRequest>
  void HttpPayloadWithStructureAsync(const HttpPayloadWithStructureResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                     const HttpPayloadWithStructureRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::HttpPayloadWithStructure, request, handler, context);
  }

  /**
   * <p>This example serializes a union in the payload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/HttpPayloadWithUnion">AWS
   * API Reference</a></p>
   */
  virtual Model::HttpPayloadWithUnionOutcome HttpPayloadWithUnion(const Model::HttpPayloadWithUnionRequest& request = {}) const;

  /**
   * A Callable wrapper for HttpPayloadWithUnion that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename HttpPayloadWithUnionRequestT = Model::HttpPayloadWithUnionRequest>
  Model::HttpPayloadWithUnionOutcomeCallable HttpPayloadWithUnionCallable(const HttpPayloadWithUnionRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::HttpPayloadWithUnion, request);
  }

  /**
   * An Async wrapper for HttpPayloadWithUnion that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename HttpPayloadWithUnionRequestT = Model::HttpPayloadWithUnionRequest>
  void HttpPayloadWithUnionAsync(const HttpPayloadWithUnionResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                 const HttpPayloadWithUnionRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::HttpPayloadWithUnion, request, handler, context);
  }

  /**
   * <p>This examples adds headers to the input of a request and response by
   * prefix.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/HttpPrefixHeaders">AWS
   * API Reference</a></p>
   */
  virtual Model::HttpPrefixHeadersOutcome HttpPrefixHeaders(const Model::HttpPrefixHeadersRequest& request = {}) const;

  /**
   * A Callable wrapper for HttpPrefixHeaders that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename HttpPrefixHeadersRequestT = Model::HttpPrefixHeadersRequest>
  Model::HttpPrefixHeadersOutcomeCallable HttpPrefixHeadersCallable(const HttpPrefixHeadersRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::HttpPrefixHeaders, request);
  }

  /**
   * An Async wrapper for HttpPrefixHeaders that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename HttpPrefixHeadersRequestT = Model::HttpPrefixHeadersRequest>
  void HttpPrefixHeadersAsync(const HttpPrefixHeadersResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const HttpPrefixHeadersRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::HttpPrefixHeaders, request, handler, context);
  }

  /**
   * <p>Clients that perform this test extract all headers from the
   * response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/HttpPrefixHeadersInResponse">AWS
   * API Reference</a></p>
   */
  virtual Model::HttpPrefixHeadersInResponseOutcome HttpPrefixHeadersInResponse(
      const Model::HttpPrefixHeadersInResponseRequest& request = {}) const;

  /**
   * A Callable wrapper for HttpPrefixHeadersInResponse that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename HttpPrefixHeadersInResponseRequestT = Model::HttpPrefixHeadersInResponseRequest>
  Model::HttpPrefixHeadersInResponseOutcomeCallable HttpPrefixHeadersInResponseCallable(
      const HttpPrefixHeadersInResponseRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::HttpPrefixHeadersInResponse, request);
  }

  /**
   * An Async wrapper for HttpPrefixHeadersInResponse that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename HttpPrefixHeadersInResponseRequestT = Model::HttpPrefixHeadersInResponseRequest>
  void HttpPrefixHeadersInResponseAsync(const HttpPrefixHeadersInResponseResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                        const HttpPrefixHeadersInResponseRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::HttpPrefixHeadersInResponse, request, handler, context);
  }

  /**
   *
   */
  virtual Model::HttpRequestWithFloatLabelsOutcome HttpRequestWithFloatLabels(
      const Model::HttpRequestWithFloatLabelsRequest& request) const;

  /**
   * A Callable wrapper for HttpRequestWithFloatLabels that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename HttpRequestWithFloatLabelsRequestT = Model::HttpRequestWithFloatLabelsRequest>
  Model::HttpRequestWithFloatLabelsOutcomeCallable HttpRequestWithFloatLabelsCallable(
      const HttpRequestWithFloatLabelsRequestT& request) const {
    return SubmitCallable(&RestJsonProtocolClient::HttpRequestWithFloatLabels, request);
  }

  /**
   * An Async wrapper for HttpRequestWithFloatLabels that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename HttpRequestWithFloatLabelsRequestT = Model::HttpRequestWithFloatLabelsRequest>
  void HttpRequestWithFloatLabelsAsync(const HttpRequestWithFloatLabelsRequestT& request,
                                       const HttpRequestWithFloatLabelsResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RestJsonProtocolClient::HttpRequestWithFloatLabels, request, handler, context);
  }

  /**
   *
   */
  virtual Model::HttpRequestWithGreedyLabelInPathOutcome HttpRequestWithGreedyLabelInPath(
      const Model::HttpRequestWithGreedyLabelInPathRequest& request) const;

  /**
   * A Callable wrapper for HttpRequestWithGreedyLabelInPath that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename HttpRequestWithGreedyLabelInPathRequestT = Model::HttpRequestWithGreedyLabelInPathRequest>
  Model::HttpRequestWithGreedyLabelInPathOutcomeCallable HttpRequestWithGreedyLabelInPathCallable(
      const HttpRequestWithGreedyLabelInPathRequestT& request) const {
    return SubmitCallable(&RestJsonProtocolClient::HttpRequestWithGreedyLabelInPath, request);
  }

  /**
   * An Async wrapper for HttpRequestWithGreedyLabelInPath that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename HttpRequestWithGreedyLabelInPathRequestT = Model::HttpRequestWithGreedyLabelInPathRequest>
  void HttpRequestWithGreedyLabelInPathAsync(const HttpRequestWithGreedyLabelInPathRequestT& request,
                                             const HttpRequestWithGreedyLabelInPathResponseReceivedHandler& handler,
                                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RestJsonProtocolClient::HttpRequestWithGreedyLabelInPath, request, handler, context);
  }

  /**
   * <p>The example tests how requests are serialized when there's no input payload
   * but there are HTTP labels.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/HttpRequestWithLabels">AWS
   * API Reference</a></p>
   */
  virtual Model::HttpRequestWithLabelsOutcome HttpRequestWithLabels(const Model::HttpRequestWithLabelsRequest& request) const;

  /**
   * A Callable wrapper for HttpRequestWithLabels that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename HttpRequestWithLabelsRequestT = Model::HttpRequestWithLabelsRequest>
  Model::HttpRequestWithLabelsOutcomeCallable HttpRequestWithLabelsCallable(const HttpRequestWithLabelsRequestT& request) const {
    return SubmitCallable(&RestJsonProtocolClient::HttpRequestWithLabels, request);
  }

  /**
   * An Async wrapper for HttpRequestWithLabels that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename HttpRequestWithLabelsRequestT = Model::HttpRequestWithLabelsRequest>
  void HttpRequestWithLabelsAsync(const HttpRequestWithLabelsRequestT& request, const HttpRequestWithLabelsResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RestJsonProtocolClient::HttpRequestWithLabels, request, handler, context);
  }

  /**
   * <p>The example tests how requests serialize different timestamp formats in the
   * URI path.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/HttpRequestWithLabelsAndTimestampFormat">AWS
   * API Reference</a></p>
   */
  virtual Model::HttpRequestWithLabelsAndTimestampFormatOutcome HttpRequestWithLabelsAndTimestampFormat(
      const Model::HttpRequestWithLabelsAndTimestampFormatRequest& request) const;

  /**
   * A Callable wrapper for HttpRequestWithLabelsAndTimestampFormat that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename HttpRequestWithLabelsAndTimestampFormatRequestT = Model::HttpRequestWithLabelsAndTimestampFormatRequest>
  Model::HttpRequestWithLabelsAndTimestampFormatOutcomeCallable HttpRequestWithLabelsAndTimestampFormatCallable(
      const HttpRequestWithLabelsAndTimestampFormatRequestT& request) const {
    return SubmitCallable(&RestJsonProtocolClient::HttpRequestWithLabelsAndTimestampFormat, request);
  }

  /**
   * An Async wrapper for HttpRequestWithLabelsAndTimestampFormat that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename HttpRequestWithLabelsAndTimestampFormatRequestT = Model::HttpRequestWithLabelsAndTimestampFormatRequest>
  void HttpRequestWithLabelsAndTimestampFormatAsync(const HttpRequestWithLabelsAndTimestampFormatRequestT& request,
                                                    const HttpRequestWithLabelsAndTimestampFormatResponseReceivedHandler& handler,
                                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RestJsonProtocolClient::HttpRequestWithLabelsAndTimestampFormat, request, handler, context);
  }

  /**
   *
   */
  virtual Model::HttpRequestWithRegexLiteralOutcome HttpRequestWithRegexLiteral(
      const Model::HttpRequestWithRegexLiteralRequest& request) const;

  /**
   * A Callable wrapper for HttpRequestWithRegexLiteral that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename HttpRequestWithRegexLiteralRequestT = Model::HttpRequestWithRegexLiteralRequest>
  Model::HttpRequestWithRegexLiteralOutcomeCallable HttpRequestWithRegexLiteralCallable(
      const HttpRequestWithRegexLiteralRequestT& request) const {
    return SubmitCallable(&RestJsonProtocolClient::HttpRequestWithRegexLiteral, request);
  }

  /**
   * An Async wrapper for HttpRequestWithRegexLiteral that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename HttpRequestWithRegexLiteralRequestT = Model::HttpRequestWithRegexLiteralRequest>
  void HttpRequestWithRegexLiteralAsync(const HttpRequestWithRegexLiteralRequestT& request,
                                        const HttpRequestWithRegexLiteralResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RestJsonProtocolClient::HttpRequestWithRegexLiteral, request, handler, context);
  }

  /**
   *
   */
  virtual Model::HttpResponseCodeOutcome HttpResponseCode(const Model::HttpResponseCodeRequest& request = {}) const;

  /**
   * A Callable wrapper for HttpResponseCode that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename HttpResponseCodeRequestT = Model::HttpResponseCodeRequest>
  Model::HttpResponseCodeOutcomeCallable HttpResponseCodeCallable(const HttpResponseCodeRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::HttpResponseCode, request);
  }

  /**
   * An Async wrapper for HttpResponseCode that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename HttpResponseCodeRequestT = Model::HttpResponseCodeRequest>
  void HttpResponseCodeAsync(const HttpResponseCodeResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const HttpResponseCodeRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::HttpResponseCode, request, handler, context);
  }

  /**
   *
   */
  virtual Model::HttpStringPayloadOutcome HttpStringPayload(const Model::HttpStringPayloadRequest& request = {}) const;

  /**
   * A Callable wrapper for HttpStringPayload that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename HttpStringPayloadRequestT = Model::HttpStringPayloadRequest>
  Model::HttpStringPayloadOutcomeCallable HttpStringPayloadCallable(const HttpStringPayloadRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::HttpStringPayload, request);
  }

  /**
   * An Async wrapper for HttpStringPayload that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename HttpStringPayloadRequestT = Model::HttpStringPayloadRequest>
  void HttpStringPayloadAsync(const HttpStringPayloadResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const HttpStringPayloadRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::HttpStringPayload, request, handler, context);
  }

  /**
   * <p>This example ensures that query string bound request parameters are
   * serialized in the body of responses if the structure is used in both the request
   * and response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/IgnoreQueryParamsInResponse">AWS
   * API Reference</a></p>
   */
  virtual Model::IgnoreQueryParamsInResponseOutcome IgnoreQueryParamsInResponse(
      const Model::IgnoreQueryParamsInResponseRequest& request = {}) const;

  /**
   * A Callable wrapper for IgnoreQueryParamsInResponse that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename IgnoreQueryParamsInResponseRequestT = Model::IgnoreQueryParamsInResponseRequest>
  Model::IgnoreQueryParamsInResponseOutcomeCallable IgnoreQueryParamsInResponseCallable(
      const IgnoreQueryParamsInResponseRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::IgnoreQueryParamsInResponse, request);
  }

  /**
   * An Async wrapper for IgnoreQueryParamsInResponse that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename IgnoreQueryParamsInResponseRequestT = Model::IgnoreQueryParamsInResponseRequest>
  void IgnoreQueryParamsInResponseAsync(const IgnoreQueryParamsInResponseResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                        const IgnoreQueryParamsInResponseRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::IgnoreQueryParamsInResponse, request, handler, context);
  }

  /**
   * <p>The example tests how requests and responses are serialized when there is no
   * input or output payload but there are HTTP header bindings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/InputAndOutputWithHeaders">AWS
   * API Reference</a></p>
   */
  virtual Model::InputAndOutputWithHeadersOutcome InputAndOutputWithHeaders(
      const Model::InputAndOutputWithHeadersRequest& request = {}) const;

  /**
   * A Callable wrapper for InputAndOutputWithHeaders that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename InputAndOutputWithHeadersRequestT = Model::InputAndOutputWithHeadersRequest>
  Model::InputAndOutputWithHeadersOutcomeCallable InputAndOutputWithHeadersCallable(
      const InputAndOutputWithHeadersRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::InputAndOutputWithHeaders, request);
  }

  /**
   * An Async wrapper for InputAndOutputWithHeaders that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename InputAndOutputWithHeadersRequestT = Model::InputAndOutputWithHeadersRequest>
  void InputAndOutputWithHeadersAsync(const InputAndOutputWithHeadersResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                      const InputAndOutputWithHeadersRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::InputAndOutputWithHeaders, request, handler, context);
  }

  /**
   * <p>Blobs are base64 encoded</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/JsonBlobs">AWS
   * API Reference</a></p>
   */
  virtual Model::JsonBlobsOutcome JsonBlobs(const Model::JsonBlobsRequest& request = {}) const;

  /**
   * A Callable wrapper for JsonBlobs that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename JsonBlobsRequestT = Model::JsonBlobsRequest>
  Model::JsonBlobsOutcomeCallable JsonBlobsCallable(const JsonBlobsRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::JsonBlobs, request);
  }

  /**
   * An Async wrapper for JsonBlobs that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename JsonBlobsRequestT = Model::JsonBlobsRequest>
  void JsonBlobsAsync(const JsonBlobsResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                      const JsonBlobsRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::JsonBlobs, request, handler, context);
  }

  /**
   * <p>This example serializes enums as top level properties, in lists, sets, and
   * maps.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/JsonEnums">AWS
   * API Reference</a></p>
   */
  virtual Model::JsonEnumsOutcome JsonEnums(const Model::JsonEnumsRequest& request = {}) const;

  /**
   * A Callable wrapper for JsonEnums that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename JsonEnumsRequestT = Model::JsonEnumsRequest>
  Model::JsonEnumsOutcomeCallable JsonEnumsCallable(const JsonEnumsRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::JsonEnums, request);
  }

  /**
   * An Async wrapper for JsonEnums that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename JsonEnumsRequestT = Model::JsonEnumsRequest>
  void JsonEnumsAsync(const JsonEnumsResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                      const JsonEnumsRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::JsonEnums, request, handler, context);
  }

  /**
   * <p>This example serializes intEnums as top level properties, in lists, sets, and
   * maps.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/JsonIntEnums">AWS
   * API Reference</a></p>
   */
  virtual Model::JsonIntEnumsOutcome JsonIntEnums(const Model::JsonIntEnumsRequest& request = {}) const;

  /**
   * A Callable wrapper for JsonIntEnums that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename JsonIntEnumsRequestT = Model::JsonIntEnumsRequest>
  Model::JsonIntEnumsOutcomeCallable JsonIntEnumsCallable(const JsonIntEnumsRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::JsonIntEnums, request);
  }

  /**
   * An Async wrapper for JsonIntEnums that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename JsonIntEnumsRequestT = Model::JsonIntEnumsRequest>
  void JsonIntEnumsAsync(const JsonIntEnumsResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const JsonIntEnumsRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::JsonIntEnums, request, handler, context);
  }

  /**
   * <p>This test case serializes JSON lists for the following cases for both input
   * and output:</p> <ol> <li>Normal JSON lists.</li> <li>Normal JSON sets.</li>
   * <li>JSON lists of lists.</li> <li>Lists of structures.</li> </ol><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/JsonLists">AWS
   * API Reference</a></p>
   */
  virtual Model::JsonListsOutcome JsonLists(const Model::JsonListsRequest& request = {}) const;

  /**
   * A Callable wrapper for JsonLists that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename JsonListsRequestT = Model::JsonListsRequest>
  Model::JsonListsOutcomeCallable JsonListsCallable(const JsonListsRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::JsonLists, request);
  }

  /**
   * An Async wrapper for JsonLists that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename JsonListsRequestT = Model::JsonListsRequest>
  void JsonListsAsync(const JsonListsResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                      const JsonListsRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::JsonLists, request, handler, context);
  }

  /**
   * <p>The example tests basic map serialization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/JsonMaps">AWS
   * API Reference</a></p>
   */
  virtual Model::JsonMapsOutcome JsonMaps(const Model::JsonMapsRequest& request = {}) const;

  /**
   * A Callable wrapper for JsonMaps that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename JsonMapsRequestT = Model::JsonMapsRequest>
  Model::JsonMapsOutcomeCallable JsonMapsCallable(const JsonMapsRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::JsonMaps, request);
  }

  /**
   * An Async wrapper for JsonMaps that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename JsonMapsRequestT = Model::JsonMapsRequest>
  void JsonMapsAsync(const JsonMapsResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                     const JsonMapsRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::JsonMaps, request, handler, context);
  }

  /**
   * <p>This tests how timestamps are serialized, including using the default format
   * of date-time and various @timestampFormat trait values.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/JsonTimestamps">AWS
   * API Reference</a></p>
   */
  virtual Model::JsonTimestampsOutcome JsonTimestamps(const Model::JsonTimestampsRequest& request = {}) const;

  /**
   * A Callable wrapper for JsonTimestamps that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename JsonTimestampsRequestT = Model::JsonTimestampsRequest>
  Model::JsonTimestampsOutcomeCallable JsonTimestampsCallable(const JsonTimestampsRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::JsonTimestamps, request);
  }

  /**
   * An Async wrapper for JsonTimestamps that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename JsonTimestampsRequestT = Model::JsonTimestampsRequest>
  void JsonTimestampsAsync(const JsonTimestampsResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                           const JsonTimestampsRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::JsonTimestamps, request, handler, context);
  }

  /**
   * <p>This operation uses unions for inputs and outputs.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/JsonUnions">AWS
   * API Reference</a></p>
   */
  virtual Model::JsonUnionsOutcome JsonUnions(const Model::JsonUnionsRequest& request = {}) const;

  /**
   * A Callable wrapper for JsonUnions that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename JsonUnionsRequestT = Model::JsonUnionsRequest>
  Model::JsonUnionsOutcomeCallable JsonUnionsCallable(const JsonUnionsRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::JsonUnions, request);
  }

  /**
   * An Async wrapper for JsonUnions that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename JsonUnionsRequestT = Model::JsonUnionsRequest>
  void JsonUnionsAsync(const JsonUnionsResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                       const JsonUnionsRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::JsonUnions, request, handler, context);
  }

  /**
   * <p>This example ensures that mediaType strings are base64 encoded in
   * headers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/MediaTypeHeader">AWS
   * API Reference</a></p>
   */
  virtual Model::MediaTypeHeaderOutcome MediaTypeHeader(const Model::MediaTypeHeaderRequest& request = {}) const;

  /**
   * A Callable wrapper for MediaTypeHeader that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename MediaTypeHeaderRequestT = Model::MediaTypeHeaderRequest>
  Model::MediaTypeHeaderOutcomeCallable MediaTypeHeaderCallable(const MediaTypeHeaderRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::MediaTypeHeader, request);
  }

  /**
   * An Async wrapper for MediaTypeHeader that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename MediaTypeHeaderRequestT = Model::MediaTypeHeaderRequest>
  void MediaTypeHeaderAsync(const MediaTypeHeaderResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const MediaTypeHeaderRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::MediaTypeHeader, request, handler, context);
  }

  /**
   * <p>The example tests how requests and responses are serialized when there's no
   * request or response payload because the operation has no input or output. While
   * this should be rare, code generators must support this.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/NoInputAndNoOutput">AWS
   * API Reference</a></p>
   */
  virtual Model::NoInputAndNoOutputOutcome NoInputAndNoOutput(const Model::NoInputAndNoOutputRequest& request = {}) const;

  /**
   * A Callable wrapper for NoInputAndNoOutput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename NoInputAndNoOutputRequestT = Model::NoInputAndNoOutputRequest>
  Model::NoInputAndNoOutputOutcomeCallable NoInputAndNoOutputCallable(const NoInputAndNoOutputRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::NoInputAndNoOutput, request);
  }

  /**
   * An Async wrapper for NoInputAndNoOutput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename NoInputAndNoOutputRequestT = Model::NoInputAndNoOutputRequest>
  void NoInputAndNoOutputAsync(const NoInputAndNoOutputResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const NoInputAndNoOutputRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::NoInputAndNoOutput, request, handler, context);
  }

  /**
   * <p>The example tests how requests and responses are serialized when there's no
   * request or response payload because the operation has no input and the output is
   * empty. While this should be rare, code generators must support
   * this.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/NoInputAndOutput">AWS
   * API Reference</a></p>
   */
  virtual Model::NoInputAndOutputOutcome NoInputAndOutput(const Model::NoInputAndOutputRequest& request = {}) const;

  /**
   * A Callable wrapper for NoInputAndOutput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename NoInputAndOutputRequestT = Model::NoInputAndOutputRequest>
  Model::NoInputAndOutputOutcomeCallable NoInputAndOutputCallable(const NoInputAndOutputRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::NoInputAndOutput, request);
  }

  /**
   * An Async wrapper for NoInputAndOutput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename NoInputAndOutputRequestT = Model::NoInputAndOutputRequest>
  void NoInputAndOutputAsync(const NoInputAndOutputResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const NoInputAndOutputRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::NoInputAndOutput, request, handler, context);
  }

  /**
   * <p>Null headers are not sent over the wire, empty headers are serialized to
   * &quot;&quot;</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/NullAndEmptyHeadersClient">AWS
   * API Reference</a></p>
   */
  virtual Model::NullAndEmptyHeadersClientOutcome NullAndEmptyHeadersClient(
      const Model::NullAndEmptyHeadersClientRequest& request = {}) const;

  /**
   * A Callable wrapper for NullAndEmptyHeadersClient that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename NullAndEmptyHeadersClientRequestT = Model::NullAndEmptyHeadersClientRequest>
  Model::NullAndEmptyHeadersClientOutcomeCallable NullAndEmptyHeadersClientCallable(
      const NullAndEmptyHeadersClientRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::NullAndEmptyHeadersClient, request);
  }

  /**
   * An Async wrapper for NullAndEmptyHeadersClient that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename NullAndEmptyHeadersClientRequestT = Model::NullAndEmptyHeadersClientRequest>
  void NullAndEmptyHeadersClientAsync(const NullAndEmptyHeadersClientResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                      const NullAndEmptyHeadersClientRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::NullAndEmptyHeadersClient, request, handler, context);
  }

  /**
   * <p>Null headers are not sent over the wire, empty headers are serialized to
   * &quot;&quot;</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/NullAndEmptyHeadersServer">AWS
   * API Reference</a></p>
   */
  virtual Model::NullAndEmptyHeadersServerOutcome NullAndEmptyHeadersServer(
      const Model::NullAndEmptyHeadersServerRequest& request = {}) const;

  /**
   * A Callable wrapper for NullAndEmptyHeadersServer that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename NullAndEmptyHeadersServerRequestT = Model::NullAndEmptyHeadersServerRequest>
  Model::NullAndEmptyHeadersServerOutcomeCallable NullAndEmptyHeadersServerCallable(
      const NullAndEmptyHeadersServerRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::NullAndEmptyHeadersServer, request);
  }

  /**
   * An Async wrapper for NullAndEmptyHeadersServer that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename NullAndEmptyHeadersServerRequestT = Model::NullAndEmptyHeadersServerRequest>
  void NullAndEmptyHeadersServerAsync(const NullAndEmptyHeadersServerResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                      const NullAndEmptyHeadersServerRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::NullAndEmptyHeadersServer, request, handler, context);
  }

  /**
   * <p>Omits null, but serializes empty string value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/OmitsNullSerializesEmptyString">AWS
   * API Reference</a></p>
   */
  virtual Model::OmitsNullSerializesEmptyStringOutcome OmitsNullSerializesEmptyString(
      const Model::OmitsNullSerializesEmptyStringRequest& request = {}) const;

  /**
   * A Callable wrapper for OmitsNullSerializesEmptyString that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename OmitsNullSerializesEmptyStringRequestT = Model::OmitsNullSerializesEmptyStringRequest>
  Model::OmitsNullSerializesEmptyStringOutcomeCallable OmitsNullSerializesEmptyStringCallable(
      const OmitsNullSerializesEmptyStringRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::OmitsNullSerializesEmptyString, request);
  }

  /**
   * An Async wrapper for OmitsNullSerializesEmptyString that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename OmitsNullSerializesEmptyStringRequestT = Model::OmitsNullSerializesEmptyStringRequest>
  void OmitsNullSerializesEmptyStringAsync(const OmitsNullSerializesEmptyStringResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                           const OmitsNullSerializesEmptyStringRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::OmitsNullSerializesEmptyString, request, handler, context);
  }

  /**
   * <p>Omits serializing empty lists. Because empty strings are serilized as
   * <code>Foo=</code>, empty lists cannot also be serialized as <code>Foo=</code>
   * and instead must be omitted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/OmitsSerializingEmptyLists">AWS
   * API Reference</a></p>
   */
  virtual Model::OmitsSerializingEmptyListsOutcome OmitsSerializingEmptyLists(
      const Model::OmitsSerializingEmptyListsRequest& request = {}) const;

  /**
   * A Callable wrapper for OmitsSerializingEmptyLists that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename OmitsSerializingEmptyListsRequestT = Model::OmitsSerializingEmptyListsRequest>
  Model::OmitsSerializingEmptyListsOutcomeCallable OmitsSerializingEmptyListsCallable(
      const OmitsSerializingEmptyListsRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::OmitsSerializingEmptyLists, request);
  }

  /**
   * An Async wrapper for OmitsSerializingEmptyLists that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename OmitsSerializingEmptyListsRequestT = Model::OmitsSerializingEmptyListsRequest>
  void OmitsSerializingEmptyListsAsync(const OmitsSerializingEmptyListsResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                       const OmitsSerializingEmptyListsRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::OmitsSerializingEmptyLists, request, handler, context);
  }

  /**
   * <p>This operation defines a union that uses jsonName on some
   * members.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/PostUnionWithJsonName">AWS
   * API Reference</a></p>
   */
  virtual Model::PostUnionWithJsonNameOutcome PostUnionWithJsonName(const Model::PostUnionWithJsonNameRequest& request = {}) const;

  /**
   * A Callable wrapper for PostUnionWithJsonName that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PostUnionWithJsonNameRequestT = Model::PostUnionWithJsonNameRequest>
  Model::PostUnionWithJsonNameOutcomeCallable PostUnionWithJsonNameCallable(const PostUnionWithJsonNameRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::PostUnionWithJsonName, request);
  }

  /**
   * An Async wrapper for PostUnionWithJsonName that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename PostUnionWithJsonNameRequestT = Model::PostUnionWithJsonNameRequest>
  void PostUnionWithJsonNameAsync(const PostUnionWithJsonNameResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                  const PostUnionWithJsonNameRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::PostUnionWithJsonName, request, handler, context);
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
    return SubmitCallable(&RestJsonProtocolClient::PutWithContentEncoding, request);
  }

  /**
   * An Async wrapper for PutWithContentEncoding that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename PutWithContentEncodingRequestT = Model::PutWithContentEncodingRequest>
  void PutWithContentEncodingAsync(const PutWithContentEncodingResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const PutWithContentEncodingRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::PutWithContentEncoding, request, handler, context);
  }

  /**
   * <p>Automatically adds idempotency tokens.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/QueryIdempotencyTokenAutoFill">AWS
   * API Reference</a></p>
   */
  virtual Model::QueryIdempotencyTokenAutoFillOutcome QueryIdempotencyTokenAutoFill(
      const Model::QueryIdempotencyTokenAutoFillRequest& request = {}) const;

  /**
   * A Callable wrapper for QueryIdempotencyTokenAutoFill that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename QueryIdempotencyTokenAutoFillRequestT = Model::QueryIdempotencyTokenAutoFillRequest>
  Model::QueryIdempotencyTokenAutoFillOutcomeCallable QueryIdempotencyTokenAutoFillCallable(
      const QueryIdempotencyTokenAutoFillRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::QueryIdempotencyTokenAutoFill, request);
  }

  /**
   * An Async wrapper for QueryIdempotencyTokenAutoFill that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename QueryIdempotencyTokenAutoFillRequestT = Model::QueryIdempotencyTokenAutoFillRequest>
  void QueryIdempotencyTokenAutoFillAsync(const QueryIdempotencyTokenAutoFillResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                          const QueryIdempotencyTokenAutoFillRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::QueryIdempotencyTokenAutoFill, request, handler, context);
  }

  /**
   *
   */
  virtual Model::QueryParamsAsStringListMapOutcome QueryParamsAsStringListMap(
      const Model::QueryParamsAsStringListMapRequest& request = {}) const;

  /**
   * A Callable wrapper for QueryParamsAsStringListMap that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename QueryParamsAsStringListMapRequestT = Model::QueryParamsAsStringListMapRequest>
  Model::QueryParamsAsStringListMapOutcomeCallable QueryParamsAsStringListMapCallable(
      const QueryParamsAsStringListMapRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::QueryParamsAsStringListMap, request);
  }

  /**
   * An Async wrapper for QueryParamsAsStringListMap that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename QueryParamsAsStringListMapRequestT = Model::QueryParamsAsStringListMapRequest>
  void QueryParamsAsStringListMapAsync(const QueryParamsAsStringListMapResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                       const QueryParamsAsStringListMapRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::QueryParamsAsStringListMap, request, handler, context);
  }

  /**
   *
   */
  virtual Model::QueryPrecedenceOutcome QueryPrecedence(const Model::QueryPrecedenceRequest& request = {}) const;

  /**
   * A Callable wrapper for QueryPrecedence that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename QueryPrecedenceRequestT = Model::QueryPrecedenceRequest>
  Model::QueryPrecedenceOutcomeCallable QueryPrecedenceCallable(const QueryPrecedenceRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::QueryPrecedence, request);
  }

  /**
   * An Async wrapper for QueryPrecedence that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename QueryPrecedenceRequestT = Model::QueryPrecedenceRequest>
  void QueryPrecedenceAsync(const QueryPrecedenceResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const QueryPrecedenceRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::QueryPrecedence, request, handler, context);
  }

  /**
   * <p>Recursive shapes</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/RecursiveShapes">AWS
   * API Reference</a></p>
   */
  virtual Model::RecursiveShapesOutcome RecursiveShapes(const Model::RecursiveShapesRequest& request = {}) const;

  /**
   * A Callable wrapper for RecursiveShapes that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename RecursiveShapesRequestT = Model::RecursiveShapesRequest>
  Model::RecursiveShapesOutcomeCallable RecursiveShapesCallable(const RecursiveShapesRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::RecursiveShapes, request);
  }

  /**
   * An Async wrapper for RecursiveShapes that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename RecursiveShapesRequestT = Model::RecursiveShapesRequest>
  void RecursiveShapesAsync(const RecursiveShapesResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const RecursiveShapesRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::RecursiveShapes, request, handler, context);
  }

  /**
   *
   */
  virtual Model::ResponseCodeHttpFallbackOutcome ResponseCodeHttpFallback(const Model::ResponseCodeHttpFallbackRequest& request = {}) const;

  /**
   * A Callable wrapper for ResponseCodeHttpFallback that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ResponseCodeHttpFallbackRequestT = Model::ResponseCodeHttpFallbackRequest>
  Model::ResponseCodeHttpFallbackOutcomeCallable ResponseCodeHttpFallbackCallable(
      const ResponseCodeHttpFallbackRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::ResponseCodeHttpFallback, request);
  }

  /**
   * An Async wrapper for ResponseCodeHttpFallback that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ResponseCodeHttpFallbackRequestT = Model::ResponseCodeHttpFallbackRequest>
  void ResponseCodeHttpFallbackAsync(const ResponseCodeHttpFallbackResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                     const ResponseCodeHttpFallbackRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::ResponseCodeHttpFallback, request, handler, context);
  }

  /**
   *
   */
  virtual Model::ResponseCodeRequiredOutcome ResponseCodeRequired(const Model::ResponseCodeRequiredRequest& request = {}) const;

  /**
   * A Callable wrapper for ResponseCodeRequired that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ResponseCodeRequiredRequestT = Model::ResponseCodeRequiredRequest>
  Model::ResponseCodeRequiredOutcomeCallable ResponseCodeRequiredCallable(const ResponseCodeRequiredRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::ResponseCodeRequired, request);
  }

  /**
   * An Async wrapper for ResponseCodeRequired that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ResponseCodeRequiredRequestT = Model::ResponseCodeRequiredRequest>
  void ResponseCodeRequiredAsync(const ResponseCodeRequiredResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                 const ResponseCodeRequiredRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::ResponseCodeRequired, request, handler, context);
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
    return SubmitCallable(&RestJsonProtocolClient::SimpleScalarProperties, request);
  }

  /**
   * An Async wrapper for SimpleScalarProperties that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename SimpleScalarPropertiesRequestT = Model::SimpleScalarPropertiesRequest>
  void SimpleScalarPropertiesAsync(const SimpleScalarPropertiesResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const SimpleScalarPropertiesRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::SimpleScalarProperties, request, handler, context);
  }

  /**
   * <p>This example operation serializes a structure in the HTTP body.</p> <p>It
   * should ensure Content-Type: application/json is used in all requests and that an
   * &quot;empty&quot; body is an empty JSON document ({}).</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/TestBodyStructure">AWS
   * API Reference</a></p>
   */
  virtual Model::TestBodyStructureOutcome TestBodyStructure(const Model::TestBodyStructureRequest& request = {}) const;

  /**
   * A Callable wrapper for TestBodyStructure that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename TestBodyStructureRequestT = Model::TestBodyStructureRequest>
  Model::TestBodyStructureOutcomeCallable TestBodyStructureCallable(const TestBodyStructureRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::TestBodyStructure, request);
  }

  /**
   * An Async wrapper for TestBodyStructure that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename TestBodyStructureRequestT = Model::TestBodyStructureRequest>
  void TestBodyStructureAsync(const TestBodyStructureResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const TestBodyStructureRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::TestBodyStructure, request, handler, context);
  }

  /**
   * <p>This example GET operation has no input and serializes a request without a
   * HTTP body.</p> <p>These tests are to ensure we do not attach a body or related
   * headers (Content-Length, Content-Type) to operations that semantically cannot
   * produce an HTTP body.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/TestGetNoInputNoPayload">AWS
   * API Reference</a></p>
   */
  virtual Model::TestGetNoInputNoPayloadOutcome TestGetNoInputNoPayload(const Model::TestGetNoInputNoPayloadRequest& request = {}) const;

  /**
   * A Callable wrapper for TestGetNoInputNoPayload that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename TestGetNoInputNoPayloadRequestT = Model::TestGetNoInputNoPayloadRequest>
  Model::TestGetNoInputNoPayloadOutcomeCallable TestGetNoInputNoPayloadCallable(const TestGetNoInputNoPayloadRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::TestGetNoInputNoPayload, request);
  }

  /**
   * An Async wrapper for TestGetNoInputNoPayload that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename TestGetNoInputNoPayloadRequestT = Model::TestGetNoInputNoPayloadRequest>
  void TestGetNoInputNoPayloadAsync(const TestGetNoInputNoPayloadResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                    const TestGetNoInputNoPayloadRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::TestGetNoInputNoPayload, request, handler, context);
  }

  /**
   * <p>This example GET operation serializes a request without a modeled HTTP
   * body.</p> <p>These tests are to ensure we do not attach a body or related
   * headers (Content-Length, Content-Type) to operations that semantically cannot
   * produce an HTTP body.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/TestGetNoPayload">AWS
   * API Reference</a></p>
   */
  virtual Model::TestGetNoPayloadOutcome TestGetNoPayload(const Model::TestGetNoPayloadRequest& request = {}) const;

  /**
   * A Callable wrapper for TestGetNoPayload that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename TestGetNoPayloadRequestT = Model::TestGetNoPayloadRequest>
  Model::TestGetNoPayloadOutcomeCallable TestGetNoPayloadCallable(const TestGetNoPayloadRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::TestGetNoPayload, request);
  }

  /**
   * An Async wrapper for TestGetNoPayload that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename TestGetNoPayloadRequestT = Model::TestGetNoPayloadRequest>
  void TestGetNoPayloadAsync(const TestGetNoPayloadResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const TestGetNoPayloadRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::TestGetNoPayload, request, handler, context);
  }

  /**
   * <p>This example operation serializes a payload targeting a blob.</p> <p>The Blob
   * shape is not structured content and we cannot make assumptions about what data
   * will be sent. This test ensures only a generic &quot;Content-Type:
   * application/octet-stream&quot; header is used, and that we are not treating an
   * empty body as an empty JSON document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/TestPayloadBlob">AWS
   * API Reference</a></p>
   */
  virtual Model::TestPayloadBlobOutcome TestPayloadBlob(const Model::TestPayloadBlobRequest& request = {}) const;

  /**
   * A Callable wrapper for TestPayloadBlob that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TestPayloadBlobRequestT = Model::TestPayloadBlobRequest>
  Model::TestPayloadBlobOutcomeCallable TestPayloadBlobCallable(const TestPayloadBlobRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::TestPayloadBlob, request);
  }

  /**
   * An Async wrapper for TestPayloadBlob that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TestPayloadBlobRequestT = Model::TestPayloadBlobRequest>
  void TestPayloadBlobAsync(const TestPayloadBlobResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const TestPayloadBlobRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::TestPayloadBlob, request, handler, context);
  }

  /**
   * <p>This example operation serializes a payload targeting a structure.</p>
   * <p>This enforces the same requirements as TestBodyStructure but with the body
   * specified by the @httpPayload trait.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/TestPayloadStructure">AWS
   * API Reference</a></p>
   */
  virtual Model::TestPayloadStructureOutcome TestPayloadStructure(const Model::TestPayloadStructureRequest& request = {}) const;

  /**
   * A Callable wrapper for TestPayloadStructure that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename TestPayloadStructureRequestT = Model::TestPayloadStructureRequest>
  Model::TestPayloadStructureOutcomeCallable TestPayloadStructureCallable(const TestPayloadStructureRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::TestPayloadStructure, request);
  }

  /**
   * An Async wrapper for TestPayloadStructure that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename TestPayloadStructureRequestT = Model::TestPayloadStructureRequest>
  void TestPayloadStructureAsync(const TestPayloadStructureResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                 const TestPayloadStructureRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::TestPayloadStructure, request, handler, context);
  }

  /**
   * <p>This example POST operation has no input and serializes a request without a
   * HTTP body.</p> <p>These tests are to ensure we do not attach a body or related
   * headers (Content-Type) to a POST operation with no modeled input.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/TestPostNoInputNoPayload">AWS
   * API Reference</a></p>
   */
  virtual Model::TestPostNoInputNoPayloadOutcome TestPostNoInputNoPayload(const Model::TestPostNoInputNoPayloadRequest& request = {}) const;

  /**
   * A Callable wrapper for TestPostNoInputNoPayload that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename TestPostNoInputNoPayloadRequestT = Model::TestPostNoInputNoPayloadRequest>
  Model::TestPostNoInputNoPayloadOutcomeCallable TestPostNoInputNoPayloadCallable(
      const TestPostNoInputNoPayloadRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::TestPostNoInputNoPayload, request);
  }

  /**
   * An Async wrapper for TestPostNoInputNoPayload that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename TestPostNoInputNoPayloadRequestT = Model::TestPostNoInputNoPayloadRequest>
  void TestPostNoInputNoPayloadAsync(const TestPostNoInputNoPayloadResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                     const TestPostNoInputNoPayloadRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::TestPostNoInputNoPayload, request, handler, context);
  }

  /**
   * <p>This example POST operation serializes a request without a modeled HTTP
   * body.</p> <p>These tests are to ensure we do not attach a body or related
   * headers (Content-Type) to a POST operation with no modeled
   * payload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/TestPostNoPayload">AWS
   * API Reference</a></p>
   */
  virtual Model::TestPostNoPayloadOutcome TestPostNoPayload(const Model::TestPostNoPayloadRequest& request = {}) const;

  /**
   * A Callable wrapper for TestPostNoPayload that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename TestPostNoPayloadRequestT = Model::TestPostNoPayloadRequest>
  Model::TestPostNoPayloadOutcomeCallable TestPostNoPayloadCallable(const TestPostNoPayloadRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::TestPostNoPayload, request);
  }

  /**
   * An Async wrapper for TestPostNoPayload that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename TestPostNoPayloadRequestT = Model::TestPostNoPayloadRequest>
  void TestPostNoPayloadAsync(const TestPostNoPayloadResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const TestPostNoPayloadRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::TestPostNoPayload, request, handler, context);
  }

  /**
   * <p>This example tests how timestamp request and response headers are
   * serialized.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/TimestampFormatHeaders">AWS
   * API Reference</a></p>
   */
  virtual Model::TimestampFormatHeadersOutcome TimestampFormatHeaders(const Model::TimestampFormatHeadersRequest& request = {}) const;

  /**
   * A Callable wrapper for TimestampFormatHeaders that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename TimestampFormatHeadersRequestT = Model::TimestampFormatHeadersRequest>
  Model::TimestampFormatHeadersOutcomeCallable TimestampFormatHeadersCallable(const TimestampFormatHeadersRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::TimestampFormatHeaders, request);
  }

  /**
   * An Async wrapper for TimestampFormatHeaders that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename TimestampFormatHeadersRequestT = Model::TimestampFormatHeadersRequest>
  void TimestampFormatHeadersAsync(const TimestampFormatHeadersResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const TimestampFormatHeadersRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::TimestampFormatHeaders, request, handler, context);
  }

  /**
   * <p>This test is similar to NoInputAndNoOutput, but uses explicit Unit
   * types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/UnitInputAndOutput">AWS
   * API Reference</a></p>
   */
  virtual Model::UnitInputAndOutputOutcome UnitInputAndOutput(const Model::UnitInputAndOutputRequest& request = {}) const;

  /**
   * A Callable wrapper for UnitInputAndOutput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UnitInputAndOutputRequestT = Model::UnitInputAndOutputRequest>
  Model::UnitInputAndOutputOutcomeCallable UnitInputAndOutputCallable(const UnitInputAndOutputRequestT& request = {}) const {
    return SubmitCallable(&RestJsonProtocolClient::UnitInputAndOutput, request);
  }

  /**
   * An Async wrapper for UnitInputAndOutput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UnitInputAndOutputRequestT = Model::UnitInputAndOutputRequest>
  void UnitInputAndOutputAsync(const UnitInputAndOutputResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const UnitInputAndOutputRequestT& request = {}) const {
    return SubmitAsync(&RestJsonProtocolClient::UnitInputAndOutput, request, handler, context);
  }

  void OverrideEndpoint(const Aws::String& endpoint);
  std::shared_ptr<RestJsonProtocolEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<RestJsonProtocolClient>;
  void init(const RestJsonProtocolClientConfiguration& clientConfiguration);

  RestJsonProtocolClientConfiguration m_clientConfiguration;
  std::shared_ptr<RestJsonProtocolEndpointProviderBase> m_endpointProvider;
};

}  // namespace RestJsonProtocol
}  // namespace Aws
