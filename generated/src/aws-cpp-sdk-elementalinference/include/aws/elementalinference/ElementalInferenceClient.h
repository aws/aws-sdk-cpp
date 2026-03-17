/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/ElementalInferencePaginationBase.h>
#include <aws/elementalinference/ElementalInferenceServiceClientModel.h>
#include <aws/elementalinference/ElementalInferenceWaiter.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

namespace Aws {
namespace ElementalInference {
/**
 * <p>This is the AWS Elemental Inference REST API Reference. It provides
 * information on the URL, request contents, and response contents of each AWS
 * Elemental Inference REST operation. </p> <p>We assume that you have the IAM
 * permissions that you need to use AWS Elemental Inference via the REST API. We
 * also assume that you are familiar with the features and operations of AWS
 * Elemental Inference as described in <i>AWS Elemental Inference User Guide</i>.
 * </p>
 */
class AWS_ELEMENTALINFERENCE_API ElementalInferenceClient : public Aws::Client::AWSJsonClient,
                                                            public Aws::Client::ClientWithAsyncTemplateMethods<ElementalInferenceClient>,
                                                            public ElementalInferencePaginationBase<ElementalInferenceClient>,
                                                            public ElementalInferenceWaiter<ElementalInferenceClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef ElementalInferenceClientConfiguration ClientConfigurationType;
  typedef ElementalInferenceEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ElementalInferenceClient(const Aws::ElementalInference::ElementalInferenceClientConfiguration& clientConfiguration =
                               Aws::ElementalInference::ElementalInferenceClientConfiguration(),
                           std::shared_ptr<ElementalInferenceEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ElementalInferenceClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<ElementalInferenceEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::ElementalInference::ElementalInferenceClientConfiguration& clientConfiguration =
                               Aws::ElementalInference::ElementalInferenceClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  ElementalInferenceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<ElementalInferenceEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::ElementalInference::ElementalInferenceClientConfiguration& clientConfiguration =
                               Aws::ElementalInference::ElementalInferenceClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ElementalInferenceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ElementalInferenceClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  ElementalInferenceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~ElementalInferenceClient();

  /**
   * <p>Associates a resource with the feed. The resource provides the input that
   * Elemental Inference needs needs in order to perform an Elemental Inference
   * feature, such as cropping video. You always provide the resource by associating
   * it with a feed. You can associate only one resource with each
   * feed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/AssociateFeed">AWS
   * API Reference</a></p>
   */
  virtual Model::AssociateFeedOutcome AssociateFeed(const Model::AssociateFeedRequest& request) const;

  /**
   * A Callable wrapper for AssociateFeed that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename AssociateFeedRequestT = Model::AssociateFeedRequest>
  Model::AssociateFeedOutcomeCallable AssociateFeedCallable(const AssociateFeedRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::AssociateFeed, request);
  }

  /**
   * An Async wrapper for AssociateFeed that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename AssociateFeedRequestT = Model::AssociateFeedRequest>
  void AssociateFeedAsync(const AssociateFeedRequestT& request, const AssociateFeedResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::AssociateFeed, request, handler, context);
  }

  /**
   * <p>Creates a feed. The feed is the target for live streams being sent by the
   * calling application. An example of a calling application is AWS Elemental
   * MediaLive. After you create the feed, you can associate a resource with the
   * feed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/CreateFeed">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateFeedOutcome CreateFeed(const Model::CreateFeedRequest& request) const;

  /**
   * A Callable wrapper for CreateFeed that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateFeedRequestT = Model::CreateFeedRequest>
  Model::CreateFeedOutcomeCallable CreateFeedCallable(const CreateFeedRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::CreateFeed, request);
  }

  /**
   * An Async wrapper for CreateFeed that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateFeedRequestT = Model::CreateFeedRequest>
  void CreateFeedAsync(const CreateFeedRequestT& request, const CreateFeedResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::CreateFeed, request, handler, context);
  }

  /**
   * <p>Deletes the specified feed. The feed can be deleted at any
   * time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/DeleteFeed">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteFeedOutcome DeleteFeed(const Model::DeleteFeedRequest& request) const;

  /**
   * A Callable wrapper for DeleteFeed that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteFeedRequestT = Model::DeleteFeedRequest>
  Model::DeleteFeedOutcomeCallable DeleteFeedCallable(const DeleteFeedRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::DeleteFeed, request);
  }

  /**
   * An Async wrapper for DeleteFeed that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteFeedRequestT = Model::DeleteFeedRequest>
  void DeleteFeedAsync(const DeleteFeedRequestT& request, const DeleteFeedResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::DeleteFeed, request, handler, context);
  }

  /**
   * <p>Releases the resource (for example, an MediaLive channel) that is associated
   * with this feed. The outputs in the feed become disabled.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/DisassociateFeed">AWS
   * API Reference</a></p>
   */
  virtual Model::DisassociateFeedOutcome DisassociateFeed(const Model::DisassociateFeedRequest& request) const;

  /**
   * A Callable wrapper for DisassociateFeed that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DisassociateFeedRequestT = Model::DisassociateFeedRequest>
  Model::DisassociateFeedOutcomeCallable DisassociateFeedCallable(const DisassociateFeedRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::DisassociateFeed, request);
  }

  /**
   * An Async wrapper for DisassociateFeed that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DisassociateFeedRequestT = Model::DisassociateFeedRequest>
  void DisassociateFeedAsync(const DisassociateFeedRequestT& request, const DisassociateFeedResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::DisassociateFeed, request, handler, context);
  }

  /**
   * <p>Retrieves information about the specified feed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/GetFeed">AWS
   * API Reference</a></p>
   */
  virtual Model::GetFeedOutcome GetFeed(const Model::GetFeedRequest& request) const;

  /**
   * A Callable wrapper for GetFeed that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetFeedRequestT = Model::GetFeedRequest>
  Model::GetFeedOutcomeCallable GetFeedCallable(const GetFeedRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::GetFeed, request);
  }

  /**
   * An Async wrapper for GetFeed that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetFeedRequestT = Model::GetFeedRequest>
  void GetFeedAsync(const GetFeedRequestT& request, const GetFeedResponseReceivedHandler& handler,
                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::GetFeed, request, handler, context);
  }

  /**
   * <p>Displays a list of feeds that belong to this AWS account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/ListFeeds">AWS
   * API Reference</a></p>
   */
  virtual Model::ListFeedsOutcome ListFeeds(const Model::ListFeedsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListFeeds that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListFeedsRequestT = Model::ListFeedsRequest>
  Model::ListFeedsOutcomeCallable ListFeedsCallable(const ListFeedsRequestT& request = {}) const {
    return SubmitCallable(&ElementalInferenceClient::ListFeeds, request);
  }

  /**
   * An Async wrapper for ListFeeds that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListFeedsRequestT = Model::ListFeedsRequest>
  void ListFeedsAsync(const ListFeedsResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                      const ListFeedsRequestT& request = {}) const {
    return SubmitAsync(&ElementalInferenceClient::ListFeeds, request, handler, context);
  }

  /**
   * <p>List all tags that are on an Elemental Inference resource in the current
   * region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Associates the specified tags to the resource identified by the specified
   * resourceArn in the current region. If existing tags on a resource are not
   * specified in the request parameters, they are not changed. When a resource is
   * deleted, the tags associated with that resource are also deleted.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::TagResource, request, handler, context);
  }

  /**
   * <p>Deletes specified tags from the specified resource in the current
   * region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates the name and/or outputs in a feed. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/UpdateFeed">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateFeedOutcome UpdateFeed(const Model::UpdateFeedRequest& request) const;

  /**
   * A Callable wrapper for UpdateFeed that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateFeedRequestT = Model::UpdateFeedRequest>
  Model::UpdateFeedOutcomeCallable UpdateFeedCallable(const UpdateFeedRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::UpdateFeed, request);
  }

  /**
   * An Async wrapper for UpdateFeed that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateFeedRequestT = Model::UpdateFeedRequest>
  void UpdateFeedAsync(const UpdateFeedRequestT& request, const UpdateFeedResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::UpdateFeed, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<ElementalInferenceEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<ElementalInferenceClient>;
  void init(const ElementalInferenceClientConfiguration& clientConfiguration);

  ElementalInferenceClientConfiguration m_clientConfiguration;
  std::shared_ptr<ElementalInferenceEndpointProviderBase> m_endpointProvider;
};

}  // namespace ElementalInference
}  // namespace Aws
