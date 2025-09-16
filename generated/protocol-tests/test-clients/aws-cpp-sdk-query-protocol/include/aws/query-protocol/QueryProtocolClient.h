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
#include <aws/query-protocol/QueryProtocolServiceClientModel.h>
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>

namespace Aws {
namespace QueryProtocol {
/**
 * <p>A query service that sends query requests and XML responses.</p>
 */
class AWS_QUERYPROTOCOL_API QueryProtocolClient : public Aws::Client::AWSXMLClient,
                                                  public Aws::Client::ClientWithAsyncTemplateMethods<QueryProtocolClient> {
 public:
  typedef Aws::Client::AWSXMLClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef QueryProtocolClientConfiguration ClientConfigurationType;
  typedef QueryProtocolEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  QueryProtocolClient(const Aws::QueryProtocol::QueryProtocolClientConfiguration& clientConfiguration =
                          Aws::QueryProtocol::QueryProtocolClientConfiguration(),
                      std::shared_ptr<QueryProtocolEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  QueryProtocolClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<QueryProtocolEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::QueryProtocol::QueryProtocolClientConfiguration& clientConfiguration =
                          Aws::QueryProtocol::QueryProtocolClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  QueryProtocolClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<QueryProtocolEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::QueryProtocol::QueryProtocolClientConfiguration& clientConfiguration =
                          Aws::QueryProtocol::QueryProtocolClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  QueryProtocolClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  QueryProtocolClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  QueryProtocolClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~QueryProtocolClient();

  /**
   * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
   */
  Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;

  /**
   *
   */
  virtual Model::DatetimeOffsetsOutcome DatetimeOffsets(const Model::DatetimeOffsetsRequest& request = {}) const;

  /**
   * A Callable wrapper for DatetimeOffsets that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DatetimeOffsetsRequestT = Model::DatetimeOffsetsRequest>
  Model::DatetimeOffsetsOutcomeCallable DatetimeOffsetsCallable(const DatetimeOffsetsRequestT& request = {}) const {
    return SubmitCallable(&QueryProtocolClient::DatetimeOffsets, request);
  }

  /**
   * An Async wrapper for DatetimeOffsets that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DatetimeOffsetsRequestT = Model::DatetimeOffsetsRequest>
  void DatetimeOffsetsAsync(const DatetimeOffsetsResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const DatetimeOffsetsRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::DatetimeOffsets, request, handler, context);
  }

  /**
   * <p>The example tests how requests and responses are serialized when there's no
   * request or response members.</p> <p>While this should be rare, code generators
   * must support this.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/query-protocol-2020-01-08/EmptyInputAndEmptyOutput">AWS
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
    return SubmitCallable(&QueryProtocolClient::EmptyInputAndEmptyOutput, request);
  }

  /**
   * An Async wrapper for EmptyInputAndEmptyOutput that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename EmptyInputAndEmptyOutputRequestT = Model::EmptyInputAndEmptyOutputRequest>
  void EmptyInputAndEmptyOutputAsync(const EmptyInputAndEmptyOutputResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                     const EmptyInputAndEmptyOutputRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::EmptyInputAndEmptyOutput, request, handler, context);
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
    return SubmitCallable(&QueryProtocolClient::EndpointOperation, request);
  }

  /**
   * An Async wrapper for EndpointOperation that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename EndpointOperationRequestT = Model::EndpointOperationRequest>
  void EndpointOperationAsync(const EndpointOperationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const EndpointOperationRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::EndpointOperation, request, handler, context);
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
    return SubmitCallable(&QueryProtocolClient::EndpointWithHostLabelOperation, request);
  }

  /**
   * An Async wrapper for EndpointWithHostLabelOperation that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename EndpointWithHostLabelOperationRequestT = Model::EndpointWithHostLabelOperationRequest>
  void EndpointWithHostLabelOperationAsync(const EndpointWithHostLabelOperationRequestT& request,
                                           const EndpointWithHostLabelOperationResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&QueryProtocolClient::EndpointWithHostLabelOperation, request, handler, context);
  }

  /**
   * <p>Flattened maps</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/query-protocol-2020-01-08/FlattenedXmlMap">AWS
   * API Reference</a></p>
   */
  virtual Model::FlattenedXmlMapOutcome FlattenedXmlMap(const Model::FlattenedXmlMapRequest& request = {}) const;

  /**
   * A Callable wrapper for FlattenedXmlMap that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename FlattenedXmlMapRequestT = Model::FlattenedXmlMapRequest>
  Model::FlattenedXmlMapOutcomeCallable FlattenedXmlMapCallable(const FlattenedXmlMapRequestT& request = {}) const {
    return SubmitCallable(&QueryProtocolClient::FlattenedXmlMap, request);
  }

  /**
   * An Async wrapper for FlattenedXmlMap that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename FlattenedXmlMapRequestT = Model::FlattenedXmlMapRequest>
  void FlattenedXmlMapAsync(const FlattenedXmlMapResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const FlattenedXmlMapRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::FlattenedXmlMap, request, handler, context);
  }

  /**
   * <p>Flattened maps with @xmlName</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/query-protocol-2020-01-08/FlattenedXmlMapWithXmlName">AWS
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
    return SubmitCallable(&QueryProtocolClient::FlattenedXmlMapWithXmlName, request);
  }

  /**
   * An Async wrapper for FlattenedXmlMapWithXmlName that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename FlattenedXmlMapWithXmlNameRequestT = Model::FlattenedXmlMapWithXmlNameRequest>
  void FlattenedXmlMapWithXmlNameAsync(const FlattenedXmlMapWithXmlNameResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                       const FlattenedXmlMapWithXmlNameRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::FlattenedXmlMapWithXmlName, request, handler, context);
  }

  /**
   * <p>Flattened maps with @xmlNamespace and @xmlName</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/query-protocol-2020-01-08/FlattenedXmlMapWithXmlNamespace">AWS
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
    return SubmitCallable(&QueryProtocolClient::FlattenedXmlMapWithXmlNamespace, request);
  }

  /**
   * An Async wrapper for FlattenedXmlMapWithXmlNamespace that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename FlattenedXmlMapWithXmlNamespaceRequestT = Model::FlattenedXmlMapWithXmlNamespaceRequest>
  void FlattenedXmlMapWithXmlNamespaceAsync(const FlattenedXmlMapWithXmlNamespaceResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                            const FlattenedXmlMapWithXmlNamespaceRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::FlattenedXmlMapWithXmlNamespace, request, handler, context);
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
    return SubmitCallable(&QueryProtocolClient::FractionalSeconds, request);
  }

  /**
   * An Async wrapper for FractionalSeconds that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename FractionalSecondsRequestT = Model::FractionalSecondsRequest>
  void FractionalSecondsAsync(const FractionalSecondsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const FractionalSecondsRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::FractionalSeconds, request, handler, context);
  }

  /**
   * <p>This operation has three possible return values:</p> <ol> <li>A successful
   * response in the form of GreetingWithErrorsOutput</li> <li>An InvalidGreeting
   * error.</li> <li>A BadRequest error.</li> </ol><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/query-protocol-2020-01-08/GreetingWithErrors">AWS
   * API Reference</a></p>
   */
  virtual Model::GreetingWithErrorsOutcome GreetingWithErrors(const Model::GreetingWithErrorsRequest& request = {}) const;

  /**
   * A Callable wrapper for GreetingWithErrors that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GreetingWithErrorsRequestT = Model::GreetingWithErrorsRequest>
  Model::GreetingWithErrorsOutcomeCallable GreetingWithErrorsCallable(const GreetingWithErrorsRequestT& request = {}) const {
    return SubmitCallable(&QueryProtocolClient::GreetingWithErrors, request);
  }

  /**
   * An Async wrapper for GreetingWithErrors that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GreetingWithErrorsRequestT = Model::GreetingWithErrorsRequest>
  void GreetingWithErrorsAsync(const GreetingWithErrorsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const GreetingWithErrorsRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::GreetingWithErrors, request, handler, context);
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
    return SubmitCallable(&QueryProtocolClient::HostWithPathOperation, request);
  }

  /**
   * An Async wrapper for HostWithPathOperation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename HostWithPathOperationRequestT = Model::HostWithPathOperationRequest>
  void HostWithPathOperationAsync(const HostWithPathOperationResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                  const HostWithPathOperationRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::HostWithPathOperation, request, handler, context);
  }

  /**
   * <p>The xmlName trait on the output structure is ignored in AWS Query.</p> <p>The
   * wrapping element is always operation name + &quot;Response&quot;, and inside of
   * that wrapper is another wrapper named operation name +
   * &quot;Result&quot;.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/query-protocol-2020-01-08/IgnoresWrappingXmlName">AWS
   * API Reference</a></p>
   */
  virtual Model::IgnoresWrappingXmlNameOutcome IgnoresWrappingXmlName(const Model::IgnoresWrappingXmlNameRequest& request = {}) const;

  /**
   * A Callable wrapper for IgnoresWrappingXmlName that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename IgnoresWrappingXmlNameRequestT = Model::IgnoresWrappingXmlNameRequest>
  Model::IgnoresWrappingXmlNameOutcomeCallable IgnoresWrappingXmlNameCallable(const IgnoresWrappingXmlNameRequestT& request = {}) const {
    return SubmitCallable(&QueryProtocolClient::IgnoresWrappingXmlName, request);
  }

  /**
   * An Async wrapper for IgnoresWrappingXmlName that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename IgnoresWrappingXmlNameRequestT = Model::IgnoresWrappingXmlNameRequest>
  void IgnoresWrappingXmlNameAsync(const IgnoresWrappingXmlNameResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const IgnoresWrappingXmlNameRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::IgnoresWrappingXmlName, request, handler, context);
  }

  /**
   * <p>This test serializes nested and recursive structure members.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/query-protocol-2020-01-08/NestedStructures">AWS
   * API Reference</a></p>
   */
  virtual Model::NestedStructuresOutcome NestedStructures(const Model::NestedStructuresRequest& request = {}) const;

  /**
   * A Callable wrapper for NestedStructures that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename NestedStructuresRequestT = Model::NestedStructuresRequest>
  Model::NestedStructuresOutcomeCallable NestedStructuresCallable(const NestedStructuresRequestT& request = {}) const {
    return SubmitCallable(&QueryProtocolClient::NestedStructures, request);
  }

  /**
   * An Async wrapper for NestedStructures that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename NestedStructuresRequestT = Model::NestedStructuresRequest>
  void NestedStructuresAsync(const NestedStructuresResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const NestedStructuresRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::NestedStructures, request, handler, context);
  }

  /**
   * <p>The example tests how requests and responses are serialized when there's no
   * request or response payload because the operation has no input or output.</p>
   * <p>While this should be rare, code generators must support this.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/query-protocol-2020-01-08/NoInputAndNoOutput">AWS
   * API Reference</a></p>
   */
  virtual Model::NoInputAndNoOutputOutcome NoInputAndNoOutput(const Model::NoInputAndNoOutputRequest& request = {}) const;

  /**
   * A Callable wrapper for NoInputAndNoOutput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename NoInputAndNoOutputRequestT = Model::NoInputAndNoOutputRequest>
  Model::NoInputAndNoOutputOutcomeCallable NoInputAndNoOutputCallable(const NoInputAndNoOutputRequestT& request = {}) const {
    return SubmitCallable(&QueryProtocolClient::NoInputAndNoOutput, request);
  }

  /**
   * An Async wrapper for NoInputAndNoOutput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename NoInputAndNoOutputRequestT = Model::NoInputAndNoOutputRequest>
  void NoInputAndNoOutputAsync(const NoInputAndNoOutputResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const NoInputAndNoOutputRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::NoInputAndNoOutput, request, handler, context);
  }

  /**
   * <p>The example tests how requests and responses are serialized when there's no
   * request payload or response members.</p> <p>While this should be rare, code
   * generators must support this.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/query-protocol-2020-01-08/NoInputAndOutput">AWS
   * API Reference</a></p>
   */
  virtual Model::NoInputAndOutputOutcome NoInputAndOutput(const Model::NoInputAndOutputRequest& request = {}) const;

  /**
   * A Callable wrapper for NoInputAndOutput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename NoInputAndOutputRequestT = Model::NoInputAndOutputRequest>
  Model::NoInputAndOutputOutcomeCallable NoInputAndOutputCallable(const NoInputAndOutputRequestT& request = {}) const {
    return SubmitCallable(&QueryProtocolClient::NoInputAndOutput, request);
  }

  /**
   * An Async wrapper for NoInputAndOutput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename NoInputAndOutputRequestT = Model::NoInputAndOutputRequest>
  void NoInputAndOutputAsync(const NoInputAndOutputResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const NoInputAndOutputRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::NoInputAndOutput, request, handler, context);
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
    return SubmitCallable(&QueryProtocolClient::PutWithContentEncoding, request);
  }

  /**
   * An Async wrapper for PutWithContentEncoding that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename PutWithContentEncodingRequestT = Model::PutWithContentEncodingRequest>
  void PutWithContentEncodingAsync(const PutWithContentEncodingResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const PutWithContentEncodingRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::PutWithContentEncoding, request, handler, context);
  }

  /**
   * <p>Automatically adds idempotency tokens.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/query-protocol-2020-01-08/QueryIdempotencyTokenAutoFill">AWS
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
    return SubmitCallable(&QueryProtocolClient::QueryIdempotencyTokenAutoFill, request);
  }

  /**
   * An Async wrapper for QueryIdempotencyTokenAutoFill that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename QueryIdempotencyTokenAutoFillRequestT = Model::QueryIdempotencyTokenAutoFillRequest>
  void QueryIdempotencyTokenAutoFillAsync(const QueryIdempotencyTokenAutoFillResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                          const QueryIdempotencyTokenAutoFillRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::QueryIdempotencyTokenAutoFill, request, handler, context);
  }

  /**
   * <p>This test serializes simple and complex lists.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/query-protocol-2020-01-08/QueryLists">AWS
   * API Reference</a></p>
   */
  virtual Model::QueryListsOutcome QueryLists(const Model::QueryListsRequest& request = {}) const;

  /**
   * A Callable wrapper for QueryLists that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename QueryListsRequestT = Model::QueryListsRequest>
  Model::QueryListsOutcomeCallable QueryListsCallable(const QueryListsRequestT& request = {}) const {
    return SubmitCallable(&QueryProtocolClient::QueryLists, request);
  }

  /**
   * An Async wrapper for QueryLists that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename QueryListsRequestT = Model::QueryListsRequest>
  void QueryListsAsync(const QueryListsResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                       const QueryListsRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::QueryLists, request, handler, context);
  }

  /**
   * <p>This test serializes simple and complex maps.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/query-protocol-2020-01-08/QueryMaps">AWS
   * API Reference</a></p>
   */
  virtual Model::QueryMapsOutcome QueryMaps(const Model::QueryMapsRequest& request = {}) const;

  /**
   * A Callable wrapper for QueryMaps that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename QueryMapsRequestT = Model::QueryMapsRequest>
  Model::QueryMapsOutcomeCallable QueryMapsCallable(const QueryMapsRequestT& request = {}) const {
    return SubmitCallable(&QueryProtocolClient::QueryMaps, request);
  }

  /**
   * An Async wrapper for QueryMaps that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename QueryMapsRequestT = Model::QueryMapsRequest>
  void QueryMapsAsync(const QueryMapsResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                      const QueryMapsRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::QueryMaps, request, handler, context);
  }

  /**
   * <p>This test serializes timestamps.</p> <ol> <li>Timestamps are serialized as
   * RFC 3339 date-time values by default.</li> <li>A timestampFormat trait on a
   * member changes the format.</li> <li>A timestampFormat trait on the shape
   * targeted by the member changes the format.</li> </ol><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/query-protocol-2020-01-08/QueryTimestamps">AWS
   * API Reference</a></p>
   */
  virtual Model::QueryTimestampsOutcome QueryTimestamps(const Model::QueryTimestampsRequest& request = {}) const;

  /**
   * A Callable wrapper for QueryTimestamps that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename QueryTimestampsRequestT = Model::QueryTimestampsRequest>
  Model::QueryTimestampsOutcomeCallable QueryTimestampsCallable(const QueryTimestampsRequestT& request = {}) const {
    return SubmitCallable(&QueryProtocolClient::QueryTimestamps, request);
  }

  /**
   * An Async wrapper for QueryTimestamps that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename QueryTimestampsRequestT = Model::QueryTimestampsRequest>
  void QueryTimestampsAsync(const QueryTimestampsResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const QueryTimestampsRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::QueryTimestamps, request, handler, context);
  }

  /**
   * <p>Recursive shapes</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/query-protocol-2020-01-08/RecursiveXmlShapes">AWS
   * API Reference</a></p>
   */
  virtual Model::RecursiveXmlShapesOutcome RecursiveXmlShapes(const Model::RecursiveXmlShapesRequest& request = {}) const;

  /**
   * A Callable wrapper for RecursiveXmlShapes that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename RecursiveXmlShapesRequestT = Model::RecursiveXmlShapesRequest>
  Model::RecursiveXmlShapesOutcomeCallable RecursiveXmlShapesCallable(const RecursiveXmlShapesRequestT& request = {}) const {
    return SubmitCallable(&QueryProtocolClient::RecursiveXmlShapes, request);
  }

  /**
   * An Async wrapper for RecursiveXmlShapes that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename RecursiveXmlShapesRequestT = Model::RecursiveXmlShapesRequest>
  void RecursiveXmlShapesAsync(const RecursiveXmlShapesResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const RecursiveXmlShapesRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::RecursiveXmlShapes, request, handler, context);
  }

  /**
   * <p>This test serializes strings, numbers, and boolean values.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/query-protocol-2020-01-08/SimpleInputParams">AWS
   * API Reference</a></p>
   */
  virtual Model::SimpleInputParamsOutcome SimpleInputParams(const Model::SimpleInputParamsRequest& request = {}) const;

  /**
   * A Callable wrapper for SimpleInputParams that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename SimpleInputParamsRequestT = Model::SimpleInputParamsRequest>
  Model::SimpleInputParamsOutcomeCallable SimpleInputParamsCallable(const SimpleInputParamsRequestT& request = {}) const {
    return SubmitCallable(&QueryProtocolClient::SimpleInputParams, request);
  }

  /**
   * An Async wrapper for SimpleInputParams that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename SimpleInputParamsRequestT = Model::SimpleInputParamsRequest>
  void SimpleInputParamsAsync(const SimpleInputParamsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const SimpleInputParamsRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::SimpleInputParams, request, handler, context);
  }

  /**
   *
   */
  virtual Model::SimpleScalarXmlPropertiesOutcome SimpleScalarXmlProperties(
      const Model::SimpleScalarXmlPropertiesRequest& request = {}) const;

  /**
   * A Callable wrapper for SimpleScalarXmlProperties that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename SimpleScalarXmlPropertiesRequestT = Model::SimpleScalarXmlPropertiesRequest>
  Model::SimpleScalarXmlPropertiesOutcomeCallable SimpleScalarXmlPropertiesCallable(
      const SimpleScalarXmlPropertiesRequestT& request = {}) const {
    return SubmitCallable(&QueryProtocolClient::SimpleScalarXmlProperties, request);
  }

  /**
   * An Async wrapper for SimpleScalarXmlProperties that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename SimpleScalarXmlPropertiesRequestT = Model::SimpleScalarXmlPropertiesRequest>
  void SimpleScalarXmlPropertiesAsync(const SimpleScalarXmlPropertiesResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                      const SimpleScalarXmlPropertiesRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::SimpleScalarXmlProperties, request, handler, context);
  }

  /**
   * <p>Blobs are base64 encoded</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/query-protocol-2020-01-08/XmlBlobs">AWS
   * API Reference</a></p>
   */
  virtual Model::XmlBlobsOutcome XmlBlobs(const Model::XmlBlobsRequest& request = {}) const;

  /**
   * A Callable wrapper for XmlBlobs that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename XmlBlobsRequestT = Model::XmlBlobsRequest>
  Model::XmlBlobsOutcomeCallable XmlBlobsCallable(const XmlBlobsRequestT& request = {}) const {
    return SubmitCallable(&QueryProtocolClient::XmlBlobs, request);
  }

  /**
   * An Async wrapper for XmlBlobs that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlBlobsRequestT = Model::XmlBlobsRequest>
  void XmlBlobsAsync(const XmlBlobsResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                     const XmlBlobsRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::XmlBlobs, request, handler, context);
  }

  /**
   *
   */
  virtual Model::XmlEmptyBlobsOutcome XmlEmptyBlobs(const Model::XmlEmptyBlobsRequest& request = {}) const;

  /**
   * A Callable wrapper for XmlEmptyBlobs that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename XmlEmptyBlobsRequestT = Model::XmlEmptyBlobsRequest>
  Model::XmlEmptyBlobsOutcomeCallable XmlEmptyBlobsCallable(const XmlEmptyBlobsRequestT& request = {}) const {
    return SubmitCallable(&QueryProtocolClient::XmlEmptyBlobs, request);
  }

  /**
   * An Async wrapper for XmlEmptyBlobs that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlEmptyBlobsRequestT = Model::XmlEmptyBlobsRequest>
  void XmlEmptyBlobsAsync(const XmlEmptyBlobsResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                          const XmlEmptyBlobsRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::XmlEmptyBlobs, request, handler, context);
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
    return SubmitCallable(&QueryProtocolClient::XmlEmptyLists, request);
  }

  /**
   * An Async wrapper for XmlEmptyLists that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlEmptyListsRequestT = Model::XmlEmptyListsRequest>
  void XmlEmptyListsAsync(const XmlEmptyListsResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                          const XmlEmptyListsRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::XmlEmptyLists, request, handler, context);
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
    return SubmitCallable(&QueryProtocolClient::XmlEmptyMaps, request);
  }

  /**
   * An Async wrapper for XmlEmptyMaps that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlEmptyMapsRequestT = Model::XmlEmptyMapsRequest>
  void XmlEmptyMapsAsync(const XmlEmptyMapsResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const XmlEmptyMapsRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::XmlEmptyMaps, request, handler, context);
  }

  /**
   * <p>This example serializes enums as top level properties, in lists, sets, and
   * maps.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/query-protocol-2020-01-08/XmlEnums">AWS
   * API Reference</a></p>
   */
  virtual Model::XmlEnumsOutcome XmlEnums(const Model::XmlEnumsRequest& request = {}) const;

  /**
   * A Callable wrapper for XmlEnums that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename XmlEnumsRequestT = Model::XmlEnumsRequest>
  Model::XmlEnumsOutcomeCallable XmlEnumsCallable(const XmlEnumsRequestT& request = {}) const {
    return SubmitCallable(&QueryProtocolClient::XmlEnums, request);
  }

  /**
   * An Async wrapper for XmlEnums that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlEnumsRequestT = Model::XmlEnumsRequest>
  void XmlEnumsAsync(const XmlEnumsResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                     const XmlEnumsRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::XmlEnums, request, handler, context);
  }

  /**
   * <p>This example serializes enums as top level properties, in lists, sets, and
   * maps.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/query-protocol-2020-01-08/XmlIntEnums">AWS
   * API Reference</a></p>
   */
  virtual Model::XmlIntEnumsOutcome XmlIntEnums(const Model::XmlIntEnumsRequest& request = {}) const;

  /**
   * A Callable wrapper for XmlIntEnums that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename XmlIntEnumsRequestT = Model::XmlIntEnumsRequest>
  Model::XmlIntEnumsOutcomeCallable XmlIntEnumsCallable(const XmlIntEnumsRequestT& request = {}) const {
    return SubmitCallable(&QueryProtocolClient::XmlIntEnums, request);
  }

  /**
   * An Async wrapper for XmlIntEnums that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlIntEnumsRequestT = Model::XmlIntEnumsRequest>
  void XmlIntEnumsAsync(const XmlIntEnumsResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                        const XmlIntEnumsRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::XmlIntEnums, request, handler, context);
  }

  /**
   * <p>This test case serializes XML lists for the following cases for both input
   * and output:</p> <ol> <li>Normal XML lists.</li> <li>Normal XML sets.</li>
   * <li>XML lists of lists.</li> <li>XML lists with @xmlName on its members</li>
   * <li>Flattened XML lists.</li> <li>Flattened XML lists with @xmlName.</li>
   * <li>Lists of structures.</li> </ol><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/query-protocol-2020-01-08/XmlLists">AWS
   * API Reference</a></p>
   */
  virtual Model::XmlListsOutcome XmlLists(const Model::XmlListsRequest& request = {}) const;

  /**
   * A Callable wrapper for XmlLists that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename XmlListsRequestT = Model::XmlListsRequest>
  Model::XmlListsOutcomeCallable XmlListsCallable(const XmlListsRequestT& request = {}) const {
    return SubmitCallable(&QueryProtocolClient::XmlLists, request);
  }

  /**
   * An Async wrapper for XmlLists that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlListsRequestT = Model::XmlListsRequest>
  void XmlListsAsync(const XmlListsResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                     const XmlListsRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::XmlLists, request, handler, context);
  }

  /**
   * <p>The example tests basic map serialization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/query-protocol-2020-01-08/XmlMaps">AWS
   * API Reference</a></p>
   */
  virtual Model::XmlMapsOutcome XmlMaps(const Model::XmlMapsRequest& request = {}) const;

  /**
   * A Callable wrapper for XmlMaps that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename XmlMapsRequestT = Model::XmlMapsRequest>
  Model::XmlMapsOutcomeCallable XmlMapsCallable(const XmlMapsRequestT& request = {}) const {
    return SubmitCallable(&QueryProtocolClient::XmlMaps, request);
  }

  /**
   * An Async wrapper for XmlMaps that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlMapsRequestT = Model::XmlMapsRequest>
  void XmlMapsAsync(const XmlMapsResponseReceivedHandler& handler,
                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                    const XmlMapsRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::XmlMaps, request, handler, context);
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
    return SubmitCallable(&QueryProtocolClient::XmlMapsXmlName, request);
  }

  /**
   * An Async wrapper for XmlMapsXmlName that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlMapsXmlNameRequestT = Model::XmlMapsXmlNameRequest>
  void XmlMapsXmlNameAsync(const XmlMapsXmlNameResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                           const XmlMapsXmlNameRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::XmlMapsXmlName, request, handler, context);
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
    return SubmitCallable(&QueryProtocolClient::XmlNamespaces, request);
  }

  /**
   * An Async wrapper for XmlNamespaces that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlNamespacesRequestT = Model::XmlNamespacesRequest>
  void XmlNamespacesAsync(const XmlNamespacesResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                          const XmlNamespacesRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::XmlNamespaces, request, handler, context);
  }

  /**
   * <p>This tests how timestamps are serialized, including using the default format
   * of date-time and various @timestampFormat trait values.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/query-protocol-2020-01-08/XmlTimestamps">AWS
   * API Reference</a></p>
   */
  virtual Model::XmlTimestampsOutcome XmlTimestamps(const Model::XmlTimestampsRequest& request = {}) const;

  /**
   * A Callable wrapper for XmlTimestamps that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename XmlTimestampsRequestT = Model::XmlTimestampsRequest>
  Model::XmlTimestampsOutcomeCallable XmlTimestampsCallable(const XmlTimestampsRequestT& request = {}) const {
    return SubmitCallable(&QueryProtocolClient::XmlTimestamps, request);
  }

  /**
   * An Async wrapper for XmlTimestamps that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename XmlTimestampsRequestT = Model::XmlTimestampsRequest>
  void XmlTimestampsAsync(const XmlTimestampsResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                          const XmlTimestampsRequestT& request = {}) const {
    return SubmitAsync(&QueryProtocolClient::XmlTimestamps, request, handler, context);
  }

  void OverrideEndpoint(const Aws::String& endpoint);
  std::shared_ptr<QueryProtocolEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<QueryProtocolClient>;
  void init(const QueryProtocolClientConfiguration& clientConfiguration);

  QueryProtocolClientConfiguration m_clientConfiguration;
  std::shared_ptr<QueryProtocolEndpointProviderBase> m_endpointProvider;
};

}  // namespace QueryProtocol
}  // namespace Aws
