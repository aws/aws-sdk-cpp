/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeErrorMarshaller.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimePaginationBase.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeServiceClientModel.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <smithy/identity/auth/built-in/GenericAuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>

namespace Aws {
namespace BedrockDataAutomationRuntime {
AWS_BEDROCKDATAAUTOMATIONRUNTIME_API extern const char SERVICE_NAME[];
/**
 * <p>Amazon Bedrock Data Automation Runtime</p>
 */
class AWS_BEDROCKDATAAUTOMATIONRUNTIME_API BedrockDataAutomationRuntimeClient
    : Aws::Client::ClientWithAsyncTemplateMethods<BedrockDataAutomationRuntimeClient>,
      public smithy::client::AwsSmithyClientT<Aws::BedrockDataAutomationRuntime::SERVICE_NAME,
                                              Aws::BedrockDataAutomationRuntime::BedrockDataAutomationRuntimeClientConfiguration,
                                              smithy::AuthSchemeResolverBase<>, Aws::Crt::Variant<smithy::SigV4AuthScheme>,
                                              BedrockDataAutomationRuntimeEndpointProviderBase, smithy::client::JsonOutcomeSerializer,
                                              smithy::client::JsonOutcome, Aws::Client::BedrockDataAutomationRuntimeErrorMarshaller>,
      public BedrockDataAutomationRuntimePaginationBase<BedrockDataAutomationRuntimeClient> {
 public:
  static const char* GetServiceName();
  static const char* GetAllocationTag();
  inline const char* GetServiceClientName() const override { return "Bedrock Data Automation Runtime"; }

  typedef BedrockDataAutomationRuntimeClientConfiguration ClientConfigurationType;
  typedef BedrockDataAutomationRuntimeEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  BedrockDataAutomationRuntimeClient(
      const Aws::BedrockDataAutomationRuntime::BedrockDataAutomationRuntimeClientConfiguration& clientConfiguration =
          Aws::BedrockDataAutomationRuntime::BedrockDataAutomationRuntimeClientConfiguration(),
      std::shared_ptr<BedrockDataAutomationRuntimeEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  BedrockDataAutomationRuntimeClient(
      const Aws::Auth::AWSCredentials& credentials,
      std::shared_ptr<BedrockDataAutomationRuntimeEndpointProviderBase> endpointProvider = nullptr,
      const Aws::BedrockDataAutomationRuntime::BedrockDataAutomationRuntimeClientConfiguration& clientConfiguration =
          Aws::BedrockDataAutomationRuntime::BedrockDataAutomationRuntimeClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  BedrockDataAutomationRuntimeClient(
      const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
      std::shared_ptr<BedrockDataAutomationRuntimeEndpointProviderBase> endpointProvider = nullptr,
      const Aws::BedrockDataAutomationRuntime::BedrockDataAutomationRuntimeClientConfiguration& clientConfiguration =
          Aws::BedrockDataAutomationRuntime::BedrockDataAutomationRuntimeClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  BedrockDataAutomationRuntimeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  BedrockDataAutomationRuntimeClient(const Aws::Auth::AWSCredentials& credentials,
                                     const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  BedrockDataAutomationRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~BedrockDataAutomationRuntimeClient();

  /**
   * <p>API used to get data automation status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-runtime-2024-06-13/GetDataAutomationStatus">AWS
   * API Reference</a></p>
   */
  virtual Model::GetDataAutomationStatusOutcome GetDataAutomationStatus(const Model::GetDataAutomationStatusRequest& request) const;

  /**
   * A Callable wrapper for GetDataAutomationStatus that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetDataAutomationStatusRequestT = Model::GetDataAutomationStatusRequest>
  Model::GetDataAutomationStatusOutcomeCallable GetDataAutomationStatusCallable(const GetDataAutomationStatusRequestT& request) const {
    return SubmitCallable(&BedrockDataAutomationRuntimeClient::GetDataAutomationStatus, request);
  }

  /**
   * An Async wrapper for GetDataAutomationStatus that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetDataAutomationStatusRequestT = Model::GetDataAutomationStatusRequest>
  void GetDataAutomationStatusAsync(const GetDataAutomationStatusRequestT& request,
                                    const GetDataAutomationStatusResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockDataAutomationRuntimeClient::GetDataAutomationStatus, request, handler, context);
  }

  /**
   * <p>Sync API: Invoke data automation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-runtime-2024-06-13/InvokeDataAutomation">AWS
   * API Reference</a></p>
   */
  virtual Model::InvokeDataAutomationOutcome InvokeDataAutomation(const Model::InvokeDataAutomationRequest& request) const;

  /**
   * A Callable wrapper for InvokeDataAutomation that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename InvokeDataAutomationRequestT = Model::InvokeDataAutomationRequest>
  Model::InvokeDataAutomationOutcomeCallable InvokeDataAutomationCallable(const InvokeDataAutomationRequestT& request) const {
    return SubmitCallable(&BedrockDataAutomationRuntimeClient::InvokeDataAutomation, request);
  }

  /**
   * An Async wrapper for InvokeDataAutomation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename InvokeDataAutomationRequestT = Model::InvokeDataAutomationRequest>
  void InvokeDataAutomationAsync(const InvokeDataAutomationRequestT& request, const InvokeDataAutomationResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockDataAutomationRuntimeClient::InvokeDataAutomation, request, handler, context);
  }

  /**
   * <p>Async API: Invoke data automation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-runtime-2024-06-13/InvokeDataAutomationAsync">AWS
   * API Reference</a></p>
   */
  virtual Model::InvokeDataAutomationAsyncOutcome InvokeDataAutomationAsync(const Model::InvokeDataAutomationAsyncRequest& request) const;

  /**
   * A Callable wrapper for InvokeDataAutomationAsync that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename InvokeDataAutomationAsyncRequestT = Model::InvokeDataAutomationAsyncRequest>
  Model::InvokeDataAutomationAsyncOutcomeCallable InvokeDataAutomationAsyncCallable(
      const InvokeDataAutomationAsyncRequestT& request) const {
    return SubmitCallable(&BedrockDataAutomationRuntimeClient::InvokeDataAutomationAsync, request);
  }

  /**
   * An Async wrapper for InvokeDataAutomationAsync that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename InvokeDataAutomationAsyncRequestT = Model::InvokeDataAutomationAsyncRequest>
  void InvokeDataAutomationAsyncAsync(const InvokeDataAutomationAsyncRequestT& request,
                                      const InvokeDataAutomationAsyncResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockDataAutomationRuntimeClient::InvokeDataAutomationAsync, request, handler, context);
  }

  /**
   * <p>List tags for an Amazon Bedrock Data Automation resource</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-runtime-2024-06-13/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&BedrockDataAutomationRuntimeClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockDataAutomationRuntimeClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Tag an Amazon Bedrock Data Automation resource</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-runtime-2024-06-13/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&BedrockDataAutomationRuntimeClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockDataAutomationRuntimeClient::TagResource, request, handler, context);
  }

  /**
   * <p>Untag an Amazon Bedrock Data Automation resource</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-runtime-2024-06-13/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&BedrockDataAutomationRuntimeClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockDataAutomationRuntimeClient::UntagResource, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<BedrockDataAutomationRuntimeEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<BedrockDataAutomationRuntimeClient>;
};

}  // namespace BedrockDataAutomationRuntime
}  // namespace Aws
