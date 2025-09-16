/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/RestXmlProtocolServiceClientModel.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>

namespace Aws {
namespace RestXmlProtocol {
/**
 * <p>A REST XML service that sends XML requests and responses.</p>
 */
class AWS_RESTXMLPROTOCOL_API RestXmlProtocolClient : public Aws::Client::AWSXMLClient,
                                                      public Aws::Client::ClientWithAsyncTemplateMethods<RestXmlProtocolClient> {
 public:
  typedef Aws::Client::AWSXMLClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef RestXmlProtocolClientConfiguration ClientConfigurationType;
  typedef RestXmlProtocolEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  RestXmlProtocolClient(const Aws::RestXmlProtocol::RestXmlProtocolClientConfiguration& clientConfiguration =
                            Aws::RestXmlProtocol::RestXmlProtocolClientConfiguration(),
                        std::shared_ptr<RestXmlProtocolEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  RestXmlProtocolClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<RestXmlProtocolEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::RestXmlProtocol::RestXmlProtocolClientConfiguration& clientConfiguration =
                            Aws::RestXmlProtocol::RestXmlProtocolClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  RestXmlProtocolClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<RestXmlProtocolEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::RestXmlProtocol::RestXmlProtocolClientConfiguration& clientConfiguration =
                            Aws::RestXmlProtocol::RestXmlProtocolClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  RestXmlProtocolClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  RestXmlProtocolClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  RestXmlProtocolClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~RestXmlProtocolClient();

  /**
   * <p>This example uses all query string types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/AllQueryStringTypes">AWS
   * API Reference</a></p>
   */
  virtual Model::AllQueryStringTypesOutcome AllQueryStringTypes(const Model::AllQueryStringTypesRequest& request = {}) const;

  /**
   * A Callable wrapper for AllQueryStringTypes that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename AllQueryStringTypesRequestT = Model::AllQueryStringTypesRequest>
  Model::AllQueryStringTypesOutcomeCallable AllQueryStringTypesCallable(const AllQueryStringTypesRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::AllQueryStringTypes, request);
  }

  /**
   * An Async wrapper for AllQueryStringTypes that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename AllQueryStringTypesRequestT = Model::AllQueryStringTypesRequest>
  void AllQueryStringTypesAsync(const AllQueryStringTypesResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                const AllQueryStringTypesRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::AllQueryStringTypes, request, handler, context);
  }

  /**
   * <p>The following example serializes a body that uses an XML name, changing the
   * wrapper name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/BodyWithXmlName">AWS
   * API Reference</a></p>
   */
  virtual Model::BodyWithXmlNameOutcome BodyWithXmlName(const Model::BodyWithXmlNameRequest& request = {}) const;

  /**
   * A Callable wrapper for BodyWithXmlName that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename BodyWithXmlNameRequestT = Model::BodyWithXmlNameRequest>
  Model::BodyWithXmlNameOutcomeCallable BodyWithXmlNameCallable(const BodyWithXmlNameRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::BodyWithXmlName, request);
  }

  /**
   * An Async wrapper for BodyWithXmlName that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename BodyWithXmlNameRequestT = Model::BodyWithXmlNameRequest>
  void BodyWithXmlNameAsync(const BodyWithXmlNameResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const BodyWithXmlNameRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::BodyWithXmlName, request, handler, context);
  }

  /**
   * <p>This example uses fixed query string params and variable query string params.
   * The fixed query string parameters and variable parameters must both be
   * serialized (implementations may need to merge them together).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/ConstantAndVariableQueryString">AWS
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
    return SubmitCallable(&RestXmlProtocolClient::ConstantAndVariableQueryString, request);
  }

  /**
   * An Async wrapper for ConstantAndVariableQueryString that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ConstantAndVariableQueryStringRequestT = Model::ConstantAndVariableQueryStringRequest>
  void ConstantAndVariableQueryStringAsync(const ConstantAndVariableQueryStringResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                           const ConstantAndVariableQueryStringRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::ConstantAndVariableQueryString, request, handler, context);
  }

  /**
   * <p>This example uses a constant query string parameters and a label. This simply
   * tests that labels and query string parameters are compatible. The fixed query
   * string parameter named &quot;hello&quot; should in no way conflict with the
   * label, <code>{hello}</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/ConstantQueryString">AWS
   * API Reference</a></p>
   */
  virtual Model::ConstantQueryStringOutcome ConstantQueryString(const Model::ConstantQueryStringRequest& request) const;

  /**
   * A Callable wrapper for ConstantQueryString that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ConstantQueryStringRequestT = Model::ConstantQueryStringRequest>
  Model::ConstantQueryStringOutcomeCallable ConstantQueryStringCallable(const ConstantQueryStringRequestT& request) const {
    return SubmitCallable(&RestXmlProtocolClient::ConstantQueryString, request);
  }

  /**
   * An Async wrapper for ConstantQueryString that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ConstantQueryStringRequestT = Model::ConstantQueryStringRequest>
  void ConstantQueryStringAsync(const ConstantQueryStringRequestT& request, const ConstantQueryStringResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RestXmlProtocolClient::ConstantQueryString, request, handler, context);
  }

  /**
   * <p>The example tests how servers must support requests containing a
   * <code>Content-Type</code> header with parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/ContentTypeParameters">AWS
   * API Reference</a></p>
   */
  virtual Model::ContentTypeParametersOutcome ContentTypeParameters(const Model::ContentTypeParametersRequest& request = {}) const;

  /**
   * A Callable wrapper for ContentTypeParameters that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ContentTypeParametersRequestT = Model::ContentTypeParametersRequest>
  Model::ContentTypeParametersOutcomeCallable ContentTypeParametersCallable(const ContentTypeParametersRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::ContentTypeParameters, request);
  }

  /**
   * An Async wrapper for ContentTypeParameters that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ContentTypeParametersRequestT = Model::ContentTypeParametersRequest>
  void ContentTypeParametersAsync(const ContentTypeParametersResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                  const ContentTypeParametersRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::ContentTypeParameters, request, handler, context);
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
    return SubmitCallable(&RestXmlProtocolClient::DatetimeOffsets, request);
  }

  /**
   * An Async wrapper for DatetimeOffsets that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DatetimeOffsetsRequestT = Model::DatetimeOffsetsRequest>
  void DatetimeOffsetsAsync(const DatetimeOffsetsResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const DatetimeOffsetsRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::DatetimeOffsets, request, handler, context);
  }

  /**
   * <p>The example tests how requests and responses are serialized when there's no
   * request or response payload because the operation has an empty input and empty
   * output structure that reuses the same shape. While this should be rare, code
   * generators must support this.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/EmptyInputAndEmptyOutput">AWS
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
    return SubmitCallable(&RestXmlProtocolClient::EmptyInputAndEmptyOutput, request);
  }

  /**
   * An Async wrapper for EmptyInputAndEmptyOutput that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename EmptyInputAndEmptyOutputRequestT = Model::EmptyInputAndEmptyOutputRequest>
  void EmptyInputAndEmptyOutputAsync(const EmptyInputAndEmptyOutputResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                     const EmptyInputAndEmptyOutputRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::EmptyInputAndEmptyOutput, request, handler, context);
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
    return SubmitCallable(&RestXmlProtocolClient::EndpointOperation, request);
  }

  /**
   * An Async wrapper for EndpointOperation that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename EndpointOperationRequestT = Model::EndpointOperationRequest>
  void EndpointOperationAsync(const EndpointOperationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const EndpointOperationRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::EndpointOperation, request, handler, context);
  }

  /**
   *
   */
  virtual Model::EndpointWithHostLabelHeaderOperationOutcome EndpointWithHostLabelHeaderOperation(
      const Model::EndpointWithHostLabelHeaderOperationRequest& request) const;

  /**
   * A Callable wrapper for EndpointWithHostLabelHeaderOperation that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename EndpointWithHostLabelHeaderOperationRequestT = Model::EndpointWithHostLabelHeaderOperationRequest>
  Model::EndpointWithHostLabelHeaderOperationOutcomeCallable EndpointWithHostLabelHeaderOperationCallable(
      const EndpointWithHostLabelHeaderOperationRequestT& request) const {
    return SubmitCallable(&RestXmlProtocolClient::EndpointWithHostLabelHeaderOperation, request);
  }

  /**
   * An Async wrapper for EndpointWithHostLabelHeaderOperation that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename EndpointWithHostLabelHeaderOperationRequestT = Model::EndpointWithHostLabelHeaderOperationRequest>
  void EndpointWithHostLabelHeaderOperationAsync(const EndpointWithHostLabelHeaderOperationRequestT& request,
                                                 const EndpointWithHostLabelHeaderOperationResponseReceivedHandler& handler,
                                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RestXmlProtocolClient::EndpointWithHostLabelHeaderOperation, request, handler, context);
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
    return SubmitCallable(&RestXmlProtocolClient::EndpointWithHostLabelOperation, request);
  }

  /**
   * An Async wrapper for EndpointWithHostLabelOperation that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename EndpointWithHostLabelOperationRequestT = Model::EndpointWithHostLabelOperationRequest>
  void EndpointWithHostLabelOperationAsync(const EndpointWithHostLabelOperationRequestT& request,
                                           const EndpointWithHostLabelOperationResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RestXmlProtocolClient::EndpointWithHostLabelOperation, request, handler, context);
  }

  /**
   * <p>Flattened maps</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/FlattenedXmlMap">AWS
   * API Reference</a></p>
   */
  virtual Model::FlattenedXmlMapOutcome FlattenedXmlMap(const Model::FlattenedXmlMapRequest& request = {}) const;

  /**
   * A Callable wrapper for FlattenedXmlMap that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename FlattenedXmlMapRequestT = Model::FlattenedXmlMapRequest>
  Model::FlattenedXmlMapOutcomeCallable FlattenedXmlMapCallable(const FlattenedXmlMapRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::FlattenedXmlMap, request);
  }

  /**
   * An Async wrapper for FlattenedXmlMap that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename FlattenedXmlMapRequestT = Model::FlattenedXmlMapRequest>
  void FlattenedXmlMapAsync(const FlattenedXmlMapResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const FlattenedXmlMapRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::FlattenedXmlMap, request, handler, context);
  }

  /**
   * <p>Flattened maps with @xmlName</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/FlattenedXmlMapWithXmlName">AWS
   * API Reference</a></p>
   */
  virtual Model::FlattenedXmlMapWithXmlNameOutcome FlattenedXmlMapWithXmlName(
      const Model::FlattenedXmlMapWithXmlNameRequest& request = {}) const;

  /**
   * A Callable wrapper for FlattenedXmlMapWithXmlName that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename FlattenedXmlMapWithXmlNameRequestT = Model::FlattenedXmlMapWithXmlNameRequest>
  Model::FlattenedXmlMapWithXmlNameOutcomeCallable FlattenedXmlMapWithXmlNameCallable(
      const FlattenedXmlMapWithXmlNameRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::FlattenedXmlMapWithXmlName, request);
  }

  /**
   * An Async wrapper for FlattenedXmlMapWithXmlName that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename FlattenedXmlMapWithXmlNameRequestT = Model::FlattenedXmlMapWithXmlNameRequest>
  void FlattenedXmlMapWithXmlNameAsync(const FlattenedXmlMapWithXmlNameResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                       const FlattenedXmlMapWithXmlNameRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::FlattenedXmlMapWithXmlName, request, handler, context);
  }

  /**
   * <p>Flattened maps with @xmlNamespace and @xmlName</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/FlattenedXmlMapWithXmlNamespace">AWS
   * API Reference</a></p>
   */
  virtual Model::FlattenedXmlMapWithXmlNamespaceOutcome FlattenedXmlMapWithXmlNamespace(
      const Model::FlattenedXmlMapWithXmlNamespaceRequest& request = {}) const;

  /**
   * A Callable wrapper for FlattenedXmlMapWithXmlNamespace that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename FlattenedXmlMapWithXmlNamespaceRequestT = Model::FlattenedXmlMapWithXmlNamespaceRequest>
  Model::FlattenedXmlMapWithXmlNamespaceOutcomeCallable FlattenedXmlMapWithXmlNamespaceCallable(
      const FlattenedXmlMapWithXmlNamespaceRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::FlattenedXmlMapWithXmlNamespace, request);
  }

  /**
   * An Async wrapper for FlattenedXmlMapWithXmlNamespace that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename FlattenedXmlMapWithXmlNamespaceRequestT = Model::FlattenedXmlMapWithXmlNamespaceRequest>
  void FlattenedXmlMapWithXmlNamespaceAsync(const FlattenedXmlMapWithXmlNamespaceResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                            const FlattenedXmlMapWithXmlNamespaceRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::FlattenedXmlMapWithXmlNamespace, request, handler, context);
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
    return SubmitCallable(&RestXmlProtocolClient::FractionalSeconds, request);
  }

  /**
   * An Async wrapper for FractionalSeconds that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename FractionalSecondsRequestT = Model::FractionalSecondsRequest>
  void FractionalSecondsAsync(const FractionalSecondsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const FractionalSecondsRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::FractionalSeconds, request, handler, context);
  }

  /**
   * <p>This operation has three possible return values:</p> <ol> <li>A successful
   * response in the form of GreetingWithErrorsOutput</li> <li>An InvalidGreeting
   * error.</li> <li>A BadRequest error.</li> </ol> <p>Implementations must be able
   * to successfully take a response and properly (de)serialize successful and error
   * responses based on the the presence of the</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/GreetingWithErrors">AWS
   * API Reference</a></p>
   */
  virtual Model::GreetingWithErrorsOutcome GreetingWithErrors(const Model::GreetingWithErrorsRequest& request = {}) const;

  /**
   * A Callable wrapper for GreetingWithErrors that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GreetingWithErrorsRequestT = Model::GreetingWithErrorsRequest>
  Model::GreetingWithErrorsOutcomeCallable GreetingWithErrorsCallable(const GreetingWithErrorsRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::GreetingWithErrors, request);
  }

  /**
   * An Async wrapper for GreetingWithErrors that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GreetingWithErrorsRequestT = Model::GreetingWithErrorsRequest>
  void GreetingWithErrorsAsync(const GreetingWithErrorsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const GreetingWithErrorsRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::GreetingWithErrors, request, handler, context);
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
    return SubmitCallable(&RestXmlProtocolClient::HttpEnumPayload, request);
  }

  /**
   * An Async wrapper for HttpEnumPayload that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename HttpEnumPayloadRequestT = Model::HttpEnumPayloadRequest>
  void HttpEnumPayloadAsync(const HttpEnumPayloadResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const HttpEnumPayloadRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::HttpEnumPayload, request, handler, context);
  }

  /**
   * <p>This example serializes a blob shape in the payload.</p> <p>In this example,
   * no XML document is synthesized because the payload is not a structure or a union
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/HttpPayloadTraits">AWS
   * API Reference</a></p>
   */
  virtual Model::HttpPayloadTraitsOutcome HttpPayloadTraits(const Model::HttpPayloadTraitsRequest& request = {}) const;

  /**
   * A Callable wrapper for HttpPayloadTraits that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename HttpPayloadTraitsRequestT = Model::HttpPayloadTraitsRequest>
  Model::HttpPayloadTraitsOutcomeCallable HttpPayloadTraitsCallable(const HttpPayloadTraitsRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::HttpPayloadTraits, request);
  }

  /**
   * An Async wrapper for HttpPayloadTraits that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename HttpPayloadTraitsRequestT = Model::HttpPayloadTraitsRequest>
  void HttpPayloadTraitsAsync(const HttpPayloadTraitsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const HttpPayloadTraitsRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::HttpPayloadTraits, request, handler, context);
  }

  /**
   * <p>The following example serializes a payload that uses an XML name on the
   * member, changing the wrapper name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/HttpPayloadWithMemberXmlName">AWS
   * API Reference</a></p>
   */
  virtual Model::HttpPayloadWithMemberXmlNameOutcome HttpPayloadWithMemberXmlName(
      const Model::HttpPayloadWithMemberXmlNameRequest& request = {}) const;

  /**
   * A Callable wrapper for HttpPayloadWithMemberXmlName that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename HttpPayloadWithMemberXmlNameRequestT = Model::HttpPayloadWithMemberXmlNameRequest>
  Model::HttpPayloadWithMemberXmlNameOutcomeCallable HttpPayloadWithMemberXmlNameCallable(
      const HttpPayloadWithMemberXmlNameRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::HttpPayloadWithMemberXmlName, request);
  }

  /**
   * An Async wrapper for HttpPayloadWithMemberXmlName that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename HttpPayloadWithMemberXmlNameRequestT = Model::HttpPayloadWithMemberXmlNameRequest>
  void HttpPayloadWithMemberXmlNameAsync(const HttpPayloadWithMemberXmlNameResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                         const HttpPayloadWithMemberXmlNameRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::HttpPayloadWithMemberXmlName, request, handler, context);
  }

  /**
   * <p>This example serializes a structure in the payload.</p> <p>Note that
   * serializing a structure changes the wrapper element name to match the targeted
   * structure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/HttpPayloadWithStructure">AWS
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
    return SubmitCallable(&RestXmlProtocolClient::HttpPayloadWithStructure, request);
  }

  /**
   * An Async wrapper for HttpPayloadWithStructure that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename HttpPayloadWithStructureRequestT = Model::HttpPayloadWithStructureRequest>
  void HttpPayloadWithStructureAsync(const HttpPayloadWithStructureResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                     const HttpPayloadWithStructureRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::HttpPayloadWithStructure, request, handler, context);
  }

  /**
   * <p>This example serializes a union in the payload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/HttpPayloadWithUnion">AWS
   * API Reference</a></p>
   */
  virtual Model::HttpPayloadWithUnionOutcome HttpPayloadWithUnion(const Model::HttpPayloadWithUnionRequest& request = {}) const;

  /**
   * A Callable wrapper for HttpPayloadWithUnion that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename HttpPayloadWithUnionRequestT = Model::HttpPayloadWithUnionRequest>
  Model::HttpPayloadWithUnionOutcomeCallable HttpPayloadWithUnionCallable(const HttpPayloadWithUnionRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::HttpPayloadWithUnion, request);
  }

  /**
   * An Async wrapper for HttpPayloadWithUnion that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename HttpPayloadWithUnionRequestT = Model::HttpPayloadWithUnionRequest>
  void HttpPayloadWithUnionAsync(const HttpPayloadWithUnionResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                 const HttpPayloadWithUnionRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::HttpPayloadWithUnion, request, handler, context);
  }

  /**
   * <p>The following example serializes a payload that uses an XML name, changing
   * the wrapper name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/HttpPayloadWithXmlName">AWS
   * API Reference</a></p>
   */
  virtual Model::HttpPayloadWithXmlNameOutcome HttpPayloadWithXmlName(const Model::HttpPayloadWithXmlNameRequest& request = {}) const;

  /**
   * A Callable wrapper for HttpPayloadWithXmlName that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename HttpPayloadWithXmlNameRequestT = Model::HttpPayloadWithXmlNameRequest>
  Model::HttpPayloadWithXmlNameOutcomeCallable HttpPayloadWithXmlNameCallable(const HttpPayloadWithXmlNameRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::HttpPayloadWithXmlName, request);
  }

  /**
   * An Async wrapper for HttpPayloadWithXmlName that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename HttpPayloadWithXmlNameRequestT = Model::HttpPayloadWithXmlNameRequest>
  void HttpPayloadWithXmlNameAsync(const HttpPayloadWithXmlNameResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const HttpPayloadWithXmlNameRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::HttpPayloadWithXmlName, request, handler, context);
  }

  /**
   * <p>The following example serializes a payload that uses an XML
   * namespace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/HttpPayloadWithXmlNamespace">AWS
   * API Reference</a></p>
   */
  virtual Model::HttpPayloadWithXmlNamespaceOutcome HttpPayloadWithXmlNamespace(
      const Model::HttpPayloadWithXmlNamespaceRequest& request = {}) const;

  /**
   * A Callable wrapper for HttpPayloadWithXmlNamespace that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename HttpPayloadWithXmlNamespaceRequestT = Model::HttpPayloadWithXmlNamespaceRequest>
  Model::HttpPayloadWithXmlNamespaceOutcomeCallable HttpPayloadWithXmlNamespaceCallable(
      const HttpPayloadWithXmlNamespaceRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::HttpPayloadWithXmlNamespace, request);
  }

  /**
   * An Async wrapper for HttpPayloadWithXmlNamespace that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename HttpPayloadWithXmlNamespaceRequestT = Model::HttpPayloadWithXmlNamespaceRequest>
  void HttpPayloadWithXmlNamespaceAsync(const HttpPayloadWithXmlNamespaceResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                        const HttpPayloadWithXmlNamespaceRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::HttpPayloadWithXmlNamespace, request, handler, context);
  }

  /**
   * <p>The following example serializes a payload that uses an XML
   * namespace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/HttpPayloadWithXmlNamespaceAndPrefix">AWS
   * API Reference</a></p>
   */
  virtual Model::HttpPayloadWithXmlNamespaceAndPrefixOutcome HttpPayloadWithXmlNamespaceAndPrefix(
      const Model::HttpPayloadWithXmlNamespaceAndPrefixRequest& request = {}) const;

  /**
   * A Callable wrapper for HttpPayloadWithXmlNamespaceAndPrefix that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename HttpPayloadWithXmlNamespaceAndPrefixRequestT = Model::HttpPayloadWithXmlNamespaceAndPrefixRequest>
  Model::HttpPayloadWithXmlNamespaceAndPrefixOutcomeCallable HttpPayloadWithXmlNamespaceAndPrefixCallable(
      const HttpPayloadWithXmlNamespaceAndPrefixRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::HttpPayloadWithXmlNamespaceAndPrefix, request);
  }

  /**
   * An Async wrapper for HttpPayloadWithXmlNamespaceAndPrefix that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename HttpPayloadWithXmlNamespaceAndPrefixRequestT = Model::HttpPayloadWithXmlNamespaceAndPrefixRequest>
  void HttpPayloadWithXmlNamespaceAndPrefixAsync(const HttpPayloadWithXmlNamespaceAndPrefixResponseReceivedHandler& handler,
                                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                                 const HttpPayloadWithXmlNamespaceAndPrefixRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::HttpPayloadWithXmlNamespaceAndPrefix, request, handler, context);
  }

  /**
   * <p>This examples adds headers to the input of a request and response by
   * prefix.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/HttpPrefixHeaders">AWS
   * API Reference</a></p>
   */
  virtual Model::HttpPrefixHeadersOutcome HttpPrefixHeaders(const Model::HttpPrefixHeadersRequest& request = {}) const;

  /**
   * A Callable wrapper for HttpPrefixHeaders that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename HttpPrefixHeadersRequestT = Model::HttpPrefixHeadersRequest>
  Model::HttpPrefixHeadersOutcomeCallable HttpPrefixHeadersCallable(const HttpPrefixHeadersRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::HttpPrefixHeaders, request);
  }

  /**
   * An Async wrapper for HttpPrefixHeaders that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename HttpPrefixHeadersRequestT = Model::HttpPrefixHeadersRequest>
  void HttpPrefixHeadersAsync(const HttpPrefixHeadersResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const HttpPrefixHeadersRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::HttpPrefixHeaders, request, handler, context);
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
    return SubmitCallable(&RestXmlProtocolClient::HttpRequestWithFloatLabels, request);
  }

  /**
   * An Async wrapper for HttpRequestWithFloatLabels that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename HttpRequestWithFloatLabelsRequestT = Model::HttpRequestWithFloatLabelsRequest>
  void HttpRequestWithFloatLabelsAsync(const HttpRequestWithFloatLabelsRequestT& request,
                                       const HttpRequestWithFloatLabelsResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RestXmlProtocolClient::HttpRequestWithFloatLabels, request, handler, context);
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
    return SubmitCallable(&RestXmlProtocolClient::HttpRequestWithGreedyLabelInPath, request);
  }

  /**
   * An Async wrapper for HttpRequestWithGreedyLabelInPath that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename HttpRequestWithGreedyLabelInPathRequestT = Model::HttpRequestWithGreedyLabelInPathRequest>
  void HttpRequestWithGreedyLabelInPathAsync(const HttpRequestWithGreedyLabelInPathRequestT& request,
                                             const HttpRequestWithGreedyLabelInPathResponseReceivedHandler& handler,
                                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RestXmlProtocolClient::HttpRequestWithGreedyLabelInPath, request, handler, context);
  }

  /**
   * <p>The example tests how requests are serialized when there's no input payload
   * but there are HTTP labels.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/HttpRequestWithLabels">AWS
   * API Reference</a></p>
   */
  virtual Model::HttpRequestWithLabelsOutcome HttpRequestWithLabels(const Model::HttpRequestWithLabelsRequest& request) const;

  /**
   * A Callable wrapper for HttpRequestWithLabels that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename HttpRequestWithLabelsRequestT = Model::HttpRequestWithLabelsRequest>
  Model::HttpRequestWithLabelsOutcomeCallable HttpRequestWithLabelsCallable(const HttpRequestWithLabelsRequestT& request) const {
    return SubmitCallable(&RestXmlProtocolClient::HttpRequestWithLabels, request);
  }

  /**
   * An Async wrapper for HttpRequestWithLabels that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename HttpRequestWithLabelsRequestT = Model::HttpRequestWithLabelsRequest>
  void HttpRequestWithLabelsAsync(const HttpRequestWithLabelsRequestT& request, const HttpRequestWithLabelsResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RestXmlProtocolClient::HttpRequestWithLabels, request, handler, context);
  }

  /**
   * <p>The example tests how requests serialize different timestamp formats in the
   * URI path.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/HttpRequestWithLabelsAndTimestampFormat">AWS
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
    return SubmitCallable(&RestXmlProtocolClient::HttpRequestWithLabelsAndTimestampFormat, request);
  }

  /**
   * An Async wrapper for HttpRequestWithLabelsAndTimestampFormat that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename HttpRequestWithLabelsAndTimestampFormatRequestT = Model::HttpRequestWithLabelsAndTimestampFormatRequest>
  void HttpRequestWithLabelsAndTimestampFormatAsync(const HttpRequestWithLabelsAndTimestampFormatRequestT& request,
                                                    const HttpRequestWithLabelsAndTimestampFormatResponseReceivedHandler& handler,
                                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RestXmlProtocolClient::HttpRequestWithLabelsAndTimestampFormat, request, handler, context);
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
    return SubmitCallable(&RestXmlProtocolClient::HttpResponseCode, request);
  }

  /**
   * An Async wrapper for HttpResponseCode that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename HttpResponseCodeRequestT = Model::HttpResponseCodeRequest>
  void HttpResponseCodeAsync(const HttpResponseCodeResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const HttpResponseCodeRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::HttpResponseCode, request, handler, context);
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
    return SubmitCallable(&RestXmlProtocolClient::HttpStringPayload, request);
  }

  /**
   * An Async wrapper for HttpStringPayload that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename HttpStringPayloadRequestT = Model::HttpStringPayloadRequest>
  void HttpStringPayloadAsync(const HttpStringPayloadResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const HttpStringPayloadRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::HttpStringPayload, request, handler, context);
  }

  /**
   * <p>This example ensures that query string bound request parameters are
   * serialized in the body of responses if the structure is used in both the request
   * and response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/IgnoreQueryParamsInResponse">AWS
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
    return SubmitCallable(&RestXmlProtocolClient::IgnoreQueryParamsInResponse, request);
  }

  /**
   * An Async wrapper for IgnoreQueryParamsInResponse that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename IgnoreQueryParamsInResponseRequestT = Model::IgnoreQueryParamsInResponseRequest>
  void IgnoreQueryParamsInResponseAsync(const IgnoreQueryParamsInResponseResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                        const IgnoreQueryParamsInResponseRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::IgnoreQueryParamsInResponse, request, handler, context);
  }

  /**
   * <p>The example tests how requests and responses are serialized when there is no
   * input or output payload but there are HTTP header bindings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/InputAndOutputWithHeaders">AWS
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
    return SubmitCallable(&RestXmlProtocolClient::InputAndOutputWithHeaders, request);
  }

  /**
   * An Async wrapper for InputAndOutputWithHeaders that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename InputAndOutputWithHeadersRequestT = Model::InputAndOutputWithHeadersRequest>
  void InputAndOutputWithHeadersAsync(const InputAndOutputWithHeadersResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                      const InputAndOutputWithHeadersRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::InputAndOutputWithHeaders, request, handler, context);
  }

  /**
   * <p>Nested Xml Maps with key/values with @xmlName</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/NestedXmlMapWithXmlName">AWS
   * API Reference</a></p>
   */
  virtual Model::NestedXmlMapWithXmlNameOutcome NestedXmlMapWithXmlName(const Model::NestedXmlMapWithXmlNameRequest& request = {}) const;

  /**
   * A Callable wrapper for NestedXmlMapWithXmlName that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename NestedXmlMapWithXmlNameRequestT = Model::NestedXmlMapWithXmlNameRequest>
  Model::NestedXmlMapWithXmlNameOutcomeCallable NestedXmlMapWithXmlNameCallable(const NestedXmlMapWithXmlNameRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::NestedXmlMapWithXmlName, request);
  }

  /**
   * An Async wrapper for NestedXmlMapWithXmlName that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename NestedXmlMapWithXmlNameRequestT = Model::NestedXmlMapWithXmlNameRequest>
  void NestedXmlMapWithXmlNameAsync(const NestedXmlMapWithXmlNameResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                    const NestedXmlMapWithXmlNameRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::NestedXmlMapWithXmlName, request, handler, context);
  }

  /**
   *
   */
  virtual Model::NestedXmlMapsOutcome NestedXmlMaps(const Model::NestedXmlMapsRequest& request = {}) const;

  /**
   * A Callable wrapper for NestedXmlMaps that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename NestedXmlMapsRequestT = Model::NestedXmlMapsRequest>
  Model::NestedXmlMapsOutcomeCallable NestedXmlMapsCallable(const NestedXmlMapsRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::NestedXmlMaps, request);
  }

  /**
   * An Async wrapper for NestedXmlMaps that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename NestedXmlMapsRequestT = Model::NestedXmlMapsRequest>
  void NestedXmlMapsAsync(const NestedXmlMapsResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                          const NestedXmlMapsRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::NestedXmlMaps, request, handler, context);
  }

  /**
   * <p>The example tests how requests and responses are serialized when there's no
   * request or response payload because the operation has no input or output. While
   * this should be rare, code generators must support this.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/NoInputAndNoOutput">AWS
   * API Reference</a></p>
   */
  virtual Model::NoInputAndNoOutputOutcome NoInputAndNoOutput(const Model::NoInputAndNoOutputRequest& request = {}) const;

  /**
   * A Callable wrapper for NoInputAndNoOutput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename NoInputAndNoOutputRequestT = Model::NoInputAndNoOutputRequest>
  Model::NoInputAndNoOutputOutcomeCallable NoInputAndNoOutputCallable(const NoInputAndNoOutputRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::NoInputAndNoOutput, request);
  }

  /**
   * An Async wrapper for NoInputAndNoOutput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename NoInputAndNoOutputRequestT = Model::NoInputAndNoOutputRequest>
  void NoInputAndNoOutputAsync(const NoInputAndNoOutputResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const NoInputAndNoOutputRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::NoInputAndNoOutput, request, handler, context);
  }

  /**
   * <p>The example tests how requests and responses are serialized when there's no
   * request or response payload because the operation has no input and the output is
   * empty. While this should be rare, code generators must support
   * this.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/NoInputAndOutput">AWS
   * API Reference</a></p>
   */
  virtual Model::NoInputAndOutputOutcome NoInputAndOutput(const Model::NoInputAndOutputRequest& request = {}) const;

  /**
   * A Callable wrapper for NoInputAndOutput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename NoInputAndOutputRequestT = Model::NoInputAndOutputRequest>
  Model::NoInputAndOutputOutcomeCallable NoInputAndOutputCallable(const NoInputAndOutputRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::NoInputAndOutput, request);
  }

  /**
   * An Async wrapper for NoInputAndOutput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename NoInputAndOutputRequestT = Model::NoInputAndOutputRequest>
  void NoInputAndOutputAsync(const NoInputAndOutputResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const NoInputAndOutputRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::NoInputAndOutput, request, handler, context);
  }

  /**
   * <p>Null headers are not sent over the wire, empty headers are serialized to
   * &quot;&quot;</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/NullAndEmptyHeadersClient">AWS
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
    return SubmitCallable(&RestXmlProtocolClient::NullAndEmptyHeadersClient, request);
  }

  /**
   * An Async wrapper for NullAndEmptyHeadersClient that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename NullAndEmptyHeadersClientRequestT = Model::NullAndEmptyHeadersClientRequest>
  void NullAndEmptyHeadersClientAsync(const NullAndEmptyHeadersClientResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                      const NullAndEmptyHeadersClientRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::NullAndEmptyHeadersClient, request, handler, context);
  }

  /**
   * <p>Null headers are not sent over the wire, empty headers are serialized to
   * &quot;&quot;</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/NullAndEmptyHeadersServer">AWS
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
    return SubmitCallable(&RestXmlProtocolClient::NullAndEmptyHeadersServer, request);
  }

  /**
   * An Async wrapper for NullAndEmptyHeadersServer that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename NullAndEmptyHeadersServerRequestT = Model::NullAndEmptyHeadersServerRequest>
  void NullAndEmptyHeadersServerAsync(const NullAndEmptyHeadersServerResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                      const NullAndEmptyHeadersServerRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::NullAndEmptyHeadersServer, request, handler, context);
  }

  /**
   * <p>Omits null, but serializes empty string value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/OmitsNullSerializesEmptyString">AWS
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
    return SubmitCallable(&RestXmlProtocolClient::OmitsNullSerializesEmptyString, request);
  }

  /**
   * An Async wrapper for OmitsNullSerializesEmptyString that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename OmitsNullSerializesEmptyStringRequestT = Model::OmitsNullSerializesEmptyStringRequest>
  void OmitsNullSerializesEmptyStringAsync(const OmitsNullSerializesEmptyStringResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                           const OmitsNullSerializesEmptyStringRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::OmitsNullSerializesEmptyString, request, handler, context);
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
    return SubmitCallable(&RestXmlProtocolClient::PutWithContentEncoding, request);
  }

  /**
   * An Async wrapper for PutWithContentEncoding that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename PutWithContentEncodingRequestT = Model::PutWithContentEncodingRequest>
  void PutWithContentEncodingAsync(const PutWithContentEncodingResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const PutWithContentEncodingRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::PutWithContentEncoding, request, handler, context);
  }

  /**
   * <p>Automatically adds idempotency tokens.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/QueryIdempotencyTokenAutoFill">AWS
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
    return SubmitCallable(&RestXmlProtocolClient::QueryIdempotencyTokenAutoFill, request);
  }

  /**
   * An Async wrapper for QueryIdempotencyTokenAutoFill that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename QueryIdempotencyTokenAutoFillRequestT = Model::QueryIdempotencyTokenAutoFillRequest>
  void QueryIdempotencyTokenAutoFillAsync(const QueryIdempotencyTokenAutoFillResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                          const QueryIdempotencyTokenAutoFillRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::QueryIdempotencyTokenAutoFill, request, handler, context);
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
    return SubmitCallable(&RestXmlProtocolClient::QueryParamsAsStringListMap, request);
  }

  /**
   * An Async wrapper for QueryParamsAsStringListMap that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename QueryParamsAsStringListMapRequestT = Model::QueryParamsAsStringListMapRequest>
  void QueryParamsAsStringListMapAsync(const QueryParamsAsStringListMapResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                       const QueryParamsAsStringListMapRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::QueryParamsAsStringListMap, request, handler, context);
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
    return SubmitCallable(&RestXmlProtocolClient::QueryPrecedence, request);
  }

  /**
   * An Async wrapper for QueryPrecedence that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename QueryPrecedenceRequestT = Model::QueryPrecedenceRequest>
  void QueryPrecedenceAsync(const QueryPrecedenceResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const QueryPrecedenceRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::QueryPrecedence, request, handler, context);
  }

  /**
   * <p>Recursive shapes</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/RecursiveShapes">AWS
   * API Reference</a></p>
   */
  virtual Model::RecursiveShapesOutcome RecursiveShapes(const Model::RecursiveShapesRequest& request = {}) const;

  /**
   * A Callable wrapper for RecursiveShapes that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename RecursiveShapesRequestT = Model::RecursiveShapesRequest>
  Model::RecursiveShapesOutcomeCallable RecursiveShapesCallable(const RecursiveShapesRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::RecursiveShapes, request);
  }

  /**
   * An Async wrapper for RecursiveShapes that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename RecursiveShapesRequestT = Model::RecursiveShapesRequest>
  void RecursiveShapesAsync(const RecursiveShapesResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const RecursiveShapesRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::RecursiveShapes, request, handler, context);
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
    return SubmitCallable(&RestXmlProtocolClient::SimpleScalarProperties, request);
  }

  /**
   * An Async wrapper for SimpleScalarProperties that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename SimpleScalarPropertiesRequestT = Model::SimpleScalarPropertiesRequest>
  void SimpleScalarPropertiesAsync(const SimpleScalarPropertiesResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const SimpleScalarPropertiesRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::SimpleScalarProperties, request, handler, context);
  }

  /**
   * <p>The example tests how timestamp request and response headers are
   * serialized.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/TimestampFormatHeaders">AWS
   * API Reference</a></p>
   */
  virtual Model::TimestampFormatHeadersOutcome TimestampFormatHeaders(const Model::TimestampFormatHeadersRequest& request = {}) const;

  /**
   * A Callable wrapper for TimestampFormatHeaders that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename TimestampFormatHeadersRequestT = Model::TimestampFormatHeadersRequest>
  Model::TimestampFormatHeadersOutcomeCallable TimestampFormatHeadersCallable(const TimestampFormatHeadersRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::TimestampFormatHeaders, request);
  }

  /**
   * An Async wrapper for TimestampFormatHeaders that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename TimestampFormatHeadersRequestT = Model::TimestampFormatHeadersRequest>
  void TimestampFormatHeadersAsync(const TimestampFormatHeadersResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const TimestampFormatHeadersRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::TimestampFormatHeaders, request, handler, context);
  }

  /**
   * <p>This example serializes an XML attributes on synthesized
   * document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/XmlAttributes">AWS
   * API Reference</a></p>
   */
  virtual Model::XmlAttributesOutcome XmlAttributes(const Model::XmlAttributesRequest& request = {}) const;

  /**
   * A Callable wrapper for XmlAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename XmlAttributesRequestT = Model::XmlAttributesRequest>
  Model::XmlAttributesOutcomeCallable XmlAttributesCallable(const XmlAttributesRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::XmlAttributes, request);
  }

  /**
   * An Async wrapper for XmlAttributes that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlAttributesRequestT = Model::XmlAttributesRequest>
  void XmlAttributesAsync(const XmlAttributesResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                          const XmlAttributesRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::XmlAttributes, request, handler, context);
  }

  /**
   * <p>This example serializes an XML attributes on a document targeted by
   * httpPayload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/XmlAttributesOnPayload">AWS
   * API Reference</a></p>
   */
  virtual Model::XmlAttributesOnPayloadOutcome XmlAttributesOnPayload(const Model::XmlAttributesOnPayloadRequest& request = {}) const;

  /**
   * A Callable wrapper for XmlAttributesOnPayload that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename XmlAttributesOnPayloadRequestT = Model::XmlAttributesOnPayloadRequest>
  Model::XmlAttributesOnPayloadOutcomeCallable XmlAttributesOnPayloadCallable(const XmlAttributesOnPayloadRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::XmlAttributesOnPayload, request);
  }

  /**
   * An Async wrapper for XmlAttributesOnPayload that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename XmlAttributesOnPayloadRequestT = Model::XmlAttributesOnPayloadRequest>
  void XmlAttributesOnPayloadAsync(const XmlAttributesOnPayloadResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const XmlAttributesOnPayloadRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::XmlAttributesOnPayload, request, handler, context);
  }

  /**
   * <p>Blobs are base64 encoded</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/XmlBlobs">AWS
   * API Reference</a></p>
   */
  virtual Model::XmlBlobsOutcome XmlBlobs(const Model::XmlBlobsRequest& request = {}) const;

  /**
   * A Callable wrapper for XmlBlobs that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename XmlBlobsRequestT = Model::XmlBlobsRequest>
  Model::XmlBlobsOutcomeCallable XmlBlobsCallable(const XmlBlobsRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::XmlBlobs, request);
  }

  /**
   * An Async wrapper for XmlBlobs that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlBlobsRequestT = Model::XmlBlobsRequest>
  void XmlBlobsAsync(const XmlBlobsResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                     const XmlBlobsRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::XmlBlobs, request, handler, context);
  }

  /**
   * <p>Blobs are base64 encoded</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/XmlEmptyBlobs">AWS
   * API Reference</a></p>
   */
  virtual Model::XmlEmptyBlobsOutcome XmlEmptyBlobs(const Model::XmlEmptyBlobsRequest& request = {}) const;

  /**
   * A Callable wrapper for XmlEmptyBlobs that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename XmlEmptyBlobsRequestT = Model::XmlEmptyBlobsRequest>
  Model::XmlEmptyBlobsOutcomeCallable XmlEmptyBlobsCallable(const XmlEmptyBlobsRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::XmlEmptyBlobs, request);
  }

  /**
   * An Async wrapper for XmlEmptyBlobs that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlEmptyBlobsRequestT = Model::XmlEmptyBlobsRequest>
  void XmlEmptyBlobsAsync(const XmlEmptyBlobsResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                          const XmlEmptyBlobsRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::XmlEmptyBlobs, request, handler, context);
  }

  /**
   *
   */
  virtual Model::XmlEmptyListsOutcome XmlEmptyLists(const Model::XmlEmptyListsRequest& request = {}) const;

  /**
   * A Callable wrapper for XmlEmptyLists that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename XmlEmptyListsRequestT = Model::XmlEmptyListsRequest>
  Model::XmlEmptyListsOutcomeCallable XmlEmptyListsCallable(const XmlEmptyListsRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::XmlEmptyLists, request);
  }

  /**
   * An Async wrapper for XmlEmptyLists that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlEmptyListsRequestT = Model::XmlEmptyListsRequest>
  void XmlEmptyListsAsync(const XmlEmptyListsResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                          const XmlEmptyListsRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::XmlEmptyLists, request, handler, context);
  }

  /**
   *
   */
  virtual Model::XmlEmptyMapsOutcome XmlEmptyMaps(const Model::XmlEmptyMapsRequest& request = {}) const;

  /**
   * A Callable wrapper for XmlEmptyMaps that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename XmlEmptyMapsRequestT = Model::XmlEmptyMapsRequest>
  Model::XmlEmptyMapsOutcomeCallable XmlEmptyMapsCallable(const XmlEmptyMapsRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::XmlEmptyMaps, request);
  }

  /**
   * An Async wrapper for XmlEmptyMaps that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlEmptyMapsRequestT = Model::XmlEmptyMapsRequest>
  void XmlEmptyMapsAsync(const XmlEmptyMapsResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const XmlEmptyMapsRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::XmlEmptyMaps, request, handler, context);
  }

  /**
   *
   */
  virtual Model::XmlEmptyStringsOutcome XmlEmptyStrings(const Model::XmlEmptyStringsRequest& request = {}) const;

  /**
   * A Callable wrapper for XmlEmptyStrings that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename XmlEmptyStringsRequestT = Model::XmlEmptyStringsRequest>
  Model::XmlEmptyStringsOutcomeCallable XmlEmptyStringsCallable(const XmlEmptyStringsRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::XmlEmptyStrings, request);
  }

  /**
   * An Async wrapper for XmlEmptyStrings that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlEmptyStringsRequestT = Model::XmlEmptyStringsRequest>
  void XmlEmptyStringsAsync(const XmlEmptyStringsResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const XmlEmptyStringsRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::XmlEmptyStrings, request, handler, context);
  }

  /**
   * <p>This example serializes enums as top level properties, in lists, sets, and
   * maps.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/XmlEnums">AWS
   * API Reference</a></p>
   */
  virtual Model::XmlEnumsOutcome XmlEnums(const Model::XmlEnumsRequest& request = {}) const;

  /**
   * A Callable wrapper for XmlEnums that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename XmlEnumsRequestT = Model::XmlEnumsRequest>
  Model::XmlEnumsOutcomeCallable XmlEnumsCallable(const XmlEnumsRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::XmlEnums, request);
  }

  /**
   * An Async wrapper for XmlEnums that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlEnumsRequestT = Model::XmlEnumsRequest>
  void XmlEnumsAsync(const XmlEnumsResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                     const XmlEnumsRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::XmlEnums, request, handler, context);
  }

  /**
   * <p>This example serializes enums as top level properties, in lists, sets, and
   * maps.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/XmlIntEnums">AWS
   * API Reference</a></p>
   */
  virtual Model::XmlIntEnumsOutcome XmlIntEnums(const Model::XmlIntEnumsRequest& request = {}) const;

  /**
   * A Callable wrapper for XmlIntEnums that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename XmlIntEnumsRequestT = Model::XmlIntEnumsRequest>
  Model::XmlIntEnumsOutcomeCallable XmlIntEnumsCallable(const XmlIntEnumsRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::XmlIntEnums, request);
  }

  /**
   * An Async wrapper for XmlIntEnums that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlIntEnumsRequestT = Model::XmlIntEnumsRequest>
  void XmlIntEnumsAsync(const XmlIntEnumsResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                        const XmlIntEnumsRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::XmlIntEnums, request, handler, context);
  }

  /**
   * <p>This test case serializes XML lists for the following cases for both input
   * and output:</p> <ol> <li>Normal XML lists.</li> <li>Normal XML sets.</li>
   * <li>XML lists of lists.</li> <li>XML lists with @xmlName on its members</li>
   * <li>Flattened XML lists.</li> <li>Flattened XML lists with @xmlName.</li>
   * <li>Flattened XML lists with @xmlNamespace.</li> <li>Lists of structures.</li>
   * <li>Flattened XML list of structures</li> </ol><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/XmlLists">AWS
   * API Reference</a></p>
   */
  virtual Model::XmlListsOutcome XmlLists(const Model::XmlListsRequest& request = {}) const;

  /**
   * A Callable wrapper for XmlLists that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename XmlListsRequestT = Model::XmlListsRequest>
  Model::XmlListsOutcomeCallable XmlListsCallable(const XmlListsRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::XmlLists, request);
  }

  /**
   * An Async wrapper for XmlLists that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlListsRequestT = Model::XmlListsRequest>
  void XmlListsAsync(const XmlListsResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                     const XmlListsRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::XmlLists, request, handler, context);
  }

  /**
   * <p>Maps with @xmlNamespace and @xmlName</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/XmlMapWithXmlNamespace">AWS
   * API Reference</a></p>
   */
  virtual Model::XmlMapWithXmlNamespaceOutcome XmlMapWithXmlNamespace(const Model::XmlMapWithXmlNamespaceRequest& request = {}) const;

  /**
   * A Callable wrapper for XmlMapWithXmlNamespace that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename XmlMapWithXmlNamespaceRequestT = Model::XmlMapWithXmlNamespaceRequest>
  Model::XmlMapWithXmlNamespaceOutcomeCallable XmlMapWithXmlNamespaceCallable(const XmlMapWithXmlNamespaceRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::XmlMapWithXmlNamespace, request);
  }

  /**
   * An Async wrapper for XmlMapWithXmlNamespace that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename XmlMapWithXmlNamespaceRequestT = Model::XmlMapWithXmlNamespaceRequest>
  void XmlMapWithXmlNamespaceAsync(const XmlMapWithXmlNamespaceResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const XmlMapWithXmlNamespaceRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::XmlMapWithXmlNamespace, request, handler, context);
  }

  /**
   * <p>The example tests basic map serialization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/XmlMaps">AWS
   * API Reference</a></p>
   */
  virtual Model::XmlMapsOutcome XmlMaps(const Model::XmlMapsRequest& request = {}) const;

  /**
   * A Callable wrapper for XmlMaps that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename XmlMapsRequestT = Model::XmlMapsRequest>
  Model::XmlMapsOutcomeCallable XmlMapsCallable(const XmlMapsRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::XmlMaps, request);
  }

  /**
   * An Async wrapper for XmlMaps that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlMapsRequestT = Model::XmlMapsRequest>
  void XmlMapsAsync(const XmlMapsResponseReceivedHandler& handler,
                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                    const XmlMapsRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::XmlMaps, request, handler, context);
  }

  /**
   *
   */
  virtual Model::XmlMapsXmlNameOutcome XmlMapsXmlName(const Model::XmlMapsXmlNameRequest& request = {}) const;

  /**
   * A Callable wrapper for XmlMapsXmlName that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename XmlMapsXmlNameRequestT = Model::XmlMapsXmlNameRequest>
  Model::XmlMapsXmlNameOutcomeCallable XmlMapsXmlNameCallable(const XmlMapsXmlNameRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::XmlMapsXmlName, request);
  }

  /**
   * An Async wrapper for XmlMapsXmlName that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlMapsXmlNameRequestT = Model::XmlMapsXmlNameRequest>
  void XmlMapsXmlNameAsync(const XmlMapsXmlNameResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                           const XmlMapsXmlNameRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::XmlMapsXmlName, request, handler, context);
  }

  /**
   *
   */
  virtual Model::XmlNamespacesOutcome XmlNamespaces(const Model::XmlNamespacesRequest& request = {}) const;

  /**
   * A Callable wrapper for XmlNamespaces that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename XmlNamespacesRequestT = Model::XmlNamespacesRequest>
  Model::XmlNamespacesOutcomeCallable XmlNamespacesCallable(const XmlNamespacesRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::XmlNamespaces, request);
  }

  /**
   * An Async wrapper for XmlNamespaces that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlNamespacesRequestT = Model::XmlNamespacesRequest>
  void XmlNamespacesAsync(const XmlNamespacesResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                          const XmlNamespacesRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::XmlNamespaces, request, handler, context);
  }

  /**
   * <p>This tests how timestamps are serialized, including using the default format
   * of date-time and various @timestampFormat trait values.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/XmlTimestamps">AWS
   * API Reference</a></p>
   */
  virtual Model::XmlTimestampsOutcome XmlTimestamps(const Model::XmlTimestampsRequest& request = {}) const;

  /**
   * A Callable wrapper for XmlTimestamps that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename XmlTimestampsRequestT = Model::XmlTimestampsRequest>
  Model::XmlTimestampsOutcomeCallable XmlTimestampsCallable(const XmlTimestampsRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::XmlTimestamps, request);
  }

  /**
   * An Async wrapper for XmlTimestamps that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlTimestampsRequestT = Model::XmlTimestampsRequest>
  void XmlTimestampsAsync(const XmlTimestampsResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                          const XmlTimestampsRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::XmlTimestamps, request, handler, context);
  }

  /**
   *
   */
  virtual Model::XmlUnionsOutcome XmlUnions(const Model::XmlUnionsRequest& request = {}) const;

  /**
   * A Callable wrapper for XmlUnions that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename XmlUnionsRequestT = Model::XmlUnionsRequest>
  Model::XmlUnionsOutcomeCallable XmlUnionsCallable(const XmlUnionsRequestT& request = {}) const {
    return SubmitCallable(&RestXmlProtocolClient::XmlUnions, request);
  }

  /**
   * An Async wrapper for XmlUnions that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlUnionsRequestT = Model::XmlUnionsRequest>
  void XmlUnionsAsync(const XmlUnionsResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                      const XmlUnionsRequestT& request = {}) const {
    return SubmitAsync(&RestXmlProtocolClient::XmlUnions, request, handler, context);
  }

  void OverrideEndpoint(const Aws::String& endpoint);
  std::shared_ptr<RestXmlProtocolEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<RestXmlProtocolClient>;
  void init(const RestXmlProtocolClientConfiguration& clientConfiguration);

  RestXmlProtocolClientConfiguration m_clientConfiguration;
  std::shared_ptr<RestXmlProtocolEndpointProviderBase> m_endpointProvider;
};

}  // namespace RestXmlProtocol
}  // namespace Aws
