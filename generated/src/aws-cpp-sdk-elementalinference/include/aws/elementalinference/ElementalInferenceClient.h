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
   * Elemental Inference needs in order to perform an Elemental Inference feature,
   * such as cropping video. You always provide the resource by associating it with a
   * feed. You can associate only one resource with each feed. With an association, a
   * specific source media is claiming ownership of the feed. </p> <p>AssociateFeed
   * is a PATCH operation, which means that you can include only parameters that you
   * want to change. Parameters that you don't include will not be affected by the
   * operation. </p> <p>Specifically:</p> <ul> <li> <p>You can add more outputs to
   * the existing outputs. New outputs will be appended.</p> </li> <li> <p>You can't
   * modify an existing output (for example to change its name). Instead, use
   * UpdateFeed. </p> </li> <li> <p>You can't delete an existing output. Instead, use
   * UpdateFeed.</p> </li> </ul> <p>Also note that you can't change the feed name
   * with AssociateFeed. Instead, use UpdateFeed. </p><p><h3>See Also:</h3>   <a
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
   * <p>Creates a custom dictionary for improving transcription accuracy. A
   * dictionary contains custom words and phrases that the ASR engine might not
   * recognize, such as brand names, technical terms, or proper nouns. You can
   * reference a dictionary when configuring a smart subtitles output. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/CreateDictionary">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateDictionaryOutcome CreateDictionary(const Model::CreateDictionaryRequest& request) const;

  /**
   * A Callable wrapper for CreateDictionary that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateDictionaryRequestT = Model::CreateDictionaryRequest>
  Model::CreateDictionaryOutcomeCallable CreateDictionaryCallable(const CreateDictionaryRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::CreateDictionary, request);
  }

  /**
   * An Async wrapper for CreateDictionary that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateDictionaryRequestT = Model::CreateDictionaryRequest>
  void CreateDictionaryAsync(const CreateDictionaryRequestT& request, const CreateDictionaryResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::CreateDictionary, request, handler, context);
  }

  /**
   * <p>Creates a feed. The feed is the target for the live media stream that is
   * being sent by the calling application. An example of a calling application is
   * AWS Elemental MediaLive. </p> <p>The key contents of the feed is an array of
   * outputs. Each output represents an Elemental Inference feature. After you create
   * the feed, you must associate a resource with the feed. At that point, you will
   * have a useable feed: resource - feed - output or outputs. </p><p><h3>See
   * Also:</h3>   <a
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
   * <p>Deletes the specified dictionary. You cannot delete a dictionary that is
   * referenced by a feed. You must first remove the dictionary reference from the
   * feed's subtitling configuration. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/DeleteDictionary">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteDictionaryOutcome DeleteDictionary(const Model::DeleteDictionaryRequest& request) const;

  /**
   * A Callable wrapper for DeleteDictionary that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteDictionaryRequestT = Model::DeleteDictionaryRequest>
  Model::DeleteDictionaryOutcomeCallable DeleteDictionaryCallable(const DeleteDictionaryRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::DeleteDictionary, request);
  }

  /**
   * An Async wrapper for DeleteDictionary that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteDictionaryRequestT = Model::DeleteDictionaryRequest>
  void DeleteDictionaryAsync(const DeleteDictionaryRequestT& request, const DeleteDictionaryResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::DeleteDictionary, request, handler, context);
  }

  /**
   * <p>Deletes the specified feed. You can delete the feed at any time. Elemental
   * Inference doesn't block you from deleting a feed when the calling application is
   * calling PutMedia or GetMetadata on that feed, although both these calls will
   * start to fail. For more information about managing inactive feeds, see the
   * Elemental Inference User Guide. </p><p><h3>See Also:</h3>   <a
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
   * <p>Releases the resource (the source media) that is associated with this feed.
   * The outputs in the feed become DISABLED. </p><p><h3>See Also:</h3>   <a
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
   * <p>Exports the entries from the specified dictionary.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/ExportDictionaryEntries">AWS
   * API Reference</a></p>
   */
  virtual Model::ExportDictionaryEntriesOutcome ExportDictionaryEntries(const Model::ExportDictionaryEntriesRequest& request) const;

  /**
   * A Callable wrapper for ExportDictionaryEntries that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ExportDictionaryEntriesRequestT = Model::ExportDictionaryEntriesRequest>
  Model::ExportDictionaryEntriesOutcomeCallable ExportDictionaryEntriesCallable(const ExportDictionaryEntriesRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::ExportDictionaryEntries, request);
  }

  /**
   * An Async wrapper for ExportDictionaryEntries that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ExportDictionaryEntriesRequestT = Model::ExportDictionaryEntriesRequest>
  void ExportDictionaryEntriesAsync(const ExportDictionaryEntriesRequestT& request,
                                    const ExportDictionaryEntriesResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::ExportDictionaryEntries, request, handler, context);
  }

  /**
   * <p>Retrieves information about the specified dictionary.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/GetDictionary">AWS
   * API Reference</a></p>
   */
  virtual Model::GetDictionaryOutcome GetDictionary(const Model::GetDictionaryRequest& request) const;

  /**
   * A Callable wrapper for GetDictionary that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetDictionaryRequestT = Model::GetDictionaryRequest>
  Model::GetDictionaryOutcomeCallable GetDictionaryCallable(const GetDictionaryRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::GetDictionary, request);
  }

  /**
   * An Async wrapper for GetDictionary that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetDictionaryRequestT = Model::GetDictionaryRequest>
  void GetDictionaryAsync(const GetDictionaryRequestT& request, const GetDictionaryResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::GetDictionary, request, handler, context);
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
   * <p>Lists the dictionaries in your account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/ListDictionaries">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDictionariesOutcome ListDictionaries(const Model::ListDictionariesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListDictionaries that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListDictionariesRequestT = Model::ListDictionariesRequest>
  Model::ListDictionariesOutcomeCallable ListDictionariesCallable(const ListDictionariesRequestT& request = {}) const {
    return SubmitCallable(&ElementalInferenceClient::ListDictionaries, request);
  }

  /**
   * An Async wrapper for ListDictionaries that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListDictionariesRequestT = Model::ListDictionariesRequest>
  void ListDictionariesAsync(const ListDictionariesResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const ListDictionariesRequestT& request = {}) const {
    return SubmitAsync(&ElementalInferenceClient::ListDictionaries, request, handler, context);
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
   * deleted, the tags associated with that resource are also deleted. </p><p><h3>See
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
   * <p>Updates the specified dictionary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/UpdateDictionary">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateDictionaryOutcome UpdateDictionary(const Model::UpdateDictionaryRequest& request) const;

  /**
   * A Callable wrapper for UpdateDictionary that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateDictionaryRequestT = Model::UpdateDictionaryRequest>
  Model::UpdateDictionaryOutcomeCallable UpdateDictionaryCallable(const UpdateDictionaryRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::UpdateDictionary, request);
  }

  /**
   * An Async wrapper for UpdateDictionary that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateDictionaryRequestT = Model::UpdateDictionaryRequest>
  void UpdateDictionaryAsync(const UpdateDictionaryRequestT& request, const UpdateDictionaryResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::UpdateDictionary, request, handler, context);
  }

  /**
   * <p>Updates the name and/or outputs in a feed. </p> <p>UpdateFeed is a PUT
   * operation, which means that the payload that you specify completely overwrites
   * the existing payload. </p> <p>This means that if you want to touch the array of
   * outputs, you must pass in the full new list. So you must omit outputs you want
   * to delete, and include outputs you want to add or modify. </p> <p>If you want to
   * patch the array of outputs to make selective additions, use AssociateFeed.
   * </p><p><h3>See Also:</h3>   <a
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

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, ElementalInferenceError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  ElementalInferenceClientConfiguration m_clientConfiguration;
  std::shared_ptr<ElementalInferenceEndpointProviderBase> m_endpointProvider;
};

}  // namespace ElementalInference
}  // namespace Aws
