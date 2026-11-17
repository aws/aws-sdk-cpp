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
   * <p>Creates a function. A function analyzes a feed by building a request from the
   * feed's media and metadata, optionally sending that request to an Amazon Bedrock
   * model in your account, and publishing the result to the feed's metadata
   * timeline. </p> <p>A function runs only after you attach it to a feed as a
   * function output. For more information, see <a
   * href="https://docs.aws.amazon.com/elemental-inference/latest/userguide/functions.html">Using
   * functions</a> in the <i>AWS Elemental Inference User Guide</i>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/CreateFunction">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateFunctionOutcome CreateFunction(const Model::CreateFunctionRequest& request) const;

  /**
   * A Callable wrapper for CreateFunction that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateFunctionRequestT = Model::CreateFunctionRequest>
  Model::CreateFunctionOutcomeCallable CreateFunctionCallable(const CreateFunctionRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::CreateFunction, request);
  }

  /**
   * An Async wrapper for CreateFunction that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateFunctionRequestT = Model::CreateFunctionRequest>
  void CreateFunctionAsync(const CreateFunctionRequestT& request, const CreateFunctionResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::CreateFunction, request, handler, context);
  }

  /**
   * <p>Creates a question set. Use a question set to get answers about content
   * that's specific to your business, in addition to the built-in contextual
   * metadata classifications. A question set contains your own questions. You ask
   * Elemental Inference these questions about each shot or scene of the media in a
   * contextual metadata output, and Elemental Inference answers each question with
   * scores. To use a question set, reference it in the customQuestions property of
   * the contextual metadata configuration of a feed output. </p>
   * <p>CreateQuestionSet creates the question set with a DRAFT version that contains
   * the questions in the request. To change DRAFT, use UpdateQuestionSet. To publish
   * DRAFT as a numbered version, use CreateQuestionSetVersion. You can't change a
   * published version. </p> <p>A question set can contain the following types of
   * questions. You must specify at least one question. </p> <ul> <li> <p>yesNo –
   * Elemental Inference answers yes or no.</p> </li> <li> <p>yesNoPerOption –
   * Elemental Inference answers yes or no for each option.</p> </li> <li>
   * <p>chooseOne – Elemental Inference chooses one of the options.</p> </li> </ul>
   * <p>A version can contain up to 100 scored items, where each yesNo question, each
   * option of a yesNoPerOption question, and each chooseOne question counts as one
   * item. The name of each question must be unique across all three types.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/CreateQuestionSet">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateQuestionSetOutcome CreateQuestionSet(const Model::CreateQuestionSetRequest& request) const;

  /**
   * A Callable wrapper for CreateQuestionSet that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateQuestionSetRequestT = Model::CreateQuestionSetRequest>
  Model::CreateQuestionSetOutcomeCallable CreateQuestionSetCallable(const CreateQuestionSetRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::CreateQuestionSet, request);
  }

  /**
   * An Async wrapper for CreateQuestionSet that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateQuestionSetRequestT = Model::CreateQuestionSetRequest>
  void CreateQuestionSetAsync(const CreateQuestionSetRequestT& request, const CreateQuestionSetResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::CreateQuestionSet, request, handler, context);
  }

  /**
   * <p>Publishes the DRAFT version of the specified question set as a new version.
   * The new version has the same name and questions as DRAFT, and you can't change
   * it. DRAFT doesn't change, so you can continue to update it. </p> <p>Version
   * numbers start at 1, and each new version has the next number. Elemental
   * Inference never reuses a version number, even after you delete that version.
   * </p> <p>If DRAFT hasn't changed since the latest published version, Elemental
   * Inference doesn't create a version. Instead, it returns the latest version. A
   * change to the name of the question set counts as a change to DRAFT. </p> <p>A
   * question set can have a limited number of versions. If the question set already
   * has the maximum number of versions, Elemental Inference returns
   * ServiceQuotaExceededException. To free space for a new version, delete a version
   * that you no longer need, or create a new question set. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/CreateQuestionSetVersion">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateQuestionSetVersionOutcome CreateQuestionSetVersion(const Model::CreateQuestionSetVersionRequest& request) const;

  /**
   * A Callable wrapper for CreateQuestionSetVersion that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateQuestionSetVersionRequestT = Model::CreateQuestionSetVersionRequest>
  Model::CreateQuestionSetVersionOutcomeCallable CreateQuestionSetVersionCallable(const CreateQuestionSetVersionRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::CreateQuestionSetVersion, request);
  }

  /**
   * An Async wrapper for CreateQuestionSetVersion that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateQuestionSetVersionRequestT = Model::CreateQuestionSetVersionRequest>
  void CreateQuestionSetVersionAsync(const CreateQuestionSetVersionRequestT& request,
                                     const CreateQuestionSetVersionResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::CreateQuestionSetVersion, request, handler, context);
  }

  /**
   * <p>Creates a schedule action on a feed. A schedule action applies configuration
   * changes to the feed at a time that you specify, in the same way as an UpdateFeed
   * request. </p> <p>Elemental Inference validates the targets of the action when
   * you create it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/CreateScheduleAction">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateScheduleActionOutcome CreateScheduleAction(const Model::CreateScheduleActionRequest& request) const;

  /**
   * A Callable wrapper for CreateScheduleAction that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateScheduleActionRequestT = Model::CreateScheduleActionRequest>
  Model::CreateScheduleActionOutcomeCallable CreateScheduleActionCallable(const CreateScheduleActionRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::CreateScheduleAction, request);
  }

  /**
   * An Async wrapper for CreateScheduleAction that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateScheduleActionRequestT = Model::CreateScheduleActionRequest>
  void CreateScheduleActionAsync(const CreateScheduleActionRequestT& request, const CreateScheduleActionResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::CreateScheduleAction, request, handler, context);
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
   * <p>Deletes the resource-based policy attached to the specified feed. After you
   * delete the policy, the operation revokes the cross-account access that the
   * policy granted. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/DeleteFeedPolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteFeedPolicyOutcome DeleteFeedPolicy(const Model::DeleteFeedPolicyRequest& request) const;

  /**
   * A Callable wrapper for DeleteFeedPolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteFeedPolicyRequestT = Model::DeleteFeedPolicyRequest>
  Model::DeleteFeedPolicyOutcomeCallable DeleteFeedPolicyCallable(const DeleteFeedPolicyRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::DeleteFeedPolicy, request);
  }

  /**
   * An Async wrapper for DeleteFeedPolicy that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteFeedPolicyRequestT = Model::DeleteFeedPolicyRequest>
  void DeleteFeedPolicyAsync(const DeleteFeedPolicyRequestT& request, const DeleteFeedPolicyResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::DeleteFeedPolicy, request, handler, context);
  }

  /**
   * <p>Deletes a function. If any feed still references the function, the operation
   * returns a ConflictException. A disabled function output still references the
   * function. Use GetFunction to find those feeds, then remove the function output
   * from each one with UpdateFeed, or delete the feed, before retrying. </p>
   * <p>Deleting a function doesn't delete the metadata that it has already
   * produced.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/DeleteFunction">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteFunctionOutcome DeleteFunction(const Model::DeleteFunctionRequest& request) const;

  /**
   * A Callable wrapper for DeleteFunction that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteFunctionRequestT = Model::DeleteFunctionRequest>
  Model::DeleteFunctionOutcomeCallable DeleteFunctionCallable(const DeleteFunctionRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::DeleteFunction, request);
  }

  /**
   * An Async wrapper for DeleteFunction that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteFunctionRequestT = Model::DeleteFunctionRequest>
  void DeleteFunctionAsync(const DeleteFunctionRequestT& request, const DeleteFunctionResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::DeleteFunction, request, handler, context);
  }

  /**
   * <p>Deletes the specified question set, including its DRAFT version and all its
   * published versions. You can't delete a question set while any feed references
   * any of its versions, including an archived feed. You must first remove the
   * question set from the customQuestions configuration of each feed output that
   * references it, or delete those feeds. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/DeleteQuestionSet">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteQuestionSetOutcome DeleteQuestionSet(const Model::DeleteQuestionSetRequest& request) const;

  /**
   * A Callable wrapper for DeleteQuestionSet that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteQuestionSetRequestT = Model::DeleteQuestionSetRequest>
  Model::DeleteQuestionSetOutcomeCallable DeleteQuestionSetCallable(const DeleteQuestionSetRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::DeleteQuestionSet, request);
  }

  /**
   * An Async wrapper for DeleteQuestionSet that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteQuestionSetRequestT = Model::DeleteQuestionSetRequest>
  void DeleteQuestionSetAsync(const DeleteQuestionSetRequestT& request, const DeleteQuestionSetResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::DeleteQuestionSet, request, handler, context);
  }

  /**
   * <p>Deletes a published version of the specified question set. You can't delete a
   * version while a feed references it, including an archived feed. You can't
   * restore a deleted version, and Elemental Inference doesn't reuse its number.
   * </p> <p>You can't delete the DRAFT version on its own. To delete DRAFT, delete
   * the question set by using DeleteQuestionSet. </p> <p>Deleting a version doesn't
   * change the latestVersion of the question set, even if you delete the highest
   * version. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/DeleteQuestionSetVersion">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteQuestionSetVersionOutcome DeleteQuestionSetVersion(const Model::DeleteQuestionSetVersionRequest& request) const;

  /**
   * A Callable wrapper for DeleteQuestionSetVersion that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteQuestionSetVersionRequestT = Model::DeleteQuestionSetVersionRequest>
  Model::DeleteQuestionSetVersionOutcomeCallable DeleteQuestionSetVersionCallable(const DeleteQuestionSetVersionRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::DeleteQuestionSetVersion, request);
  }

  /**
   * An Async wrapper for DeleteQuestionSetVersion that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteQuestionSetVersionRequestT = Model::DeleteQuestionSetVersionRequest>
  void DeleteQuestionSetVersionAsync(const DeleteQuestionSetVersionRequestT& request,
                                     const DeleteQuestionSetVersionResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::DeleteQuestionSetVersion, request, handler, context);
  }

  /**
   * <p>Deletes a schedule action from a feed. A deleted action never runs.</p>
   * <p>You can delete only an action whose status is PENDING. Deleting an action
   * doesn't reverse changes that the action already made to the feed. When you
   * delete or archive a feed, Elemental Inference deletes all the schedule actions
   * on that feed. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/DeleteScheduleAction">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteScheduleActionOutcome DeleteScheduleAction(const Model::DeleteScheduleActionRequest& request) const;

  /**
   * A Callable wrapper for DeleteScheduleAction that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteScheduleActionRequestT = Model::DeleteScheduleActionRequest>
  Model::DeleteScheduleActionOutcomeCallable DeleteScheduleActionCallable(const DeleteScheduleActionRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::DeleteScheduleAction, request);
  }

  /**
   * An Async wrapper for DeleteScheduleAction that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteScheduleActionRequestT = Model::DeleteScheduleActionRequest>
  void DeleteScheduleActionAsync(const DeleteScheduleActionRequestT& request, const DeleteScheduleActionResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::DeleteScheduleAction, request, handler, context);
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
   * <p>Retrieves the resource-based policy attached to the specified
   * feed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/GetFeedPolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::GetFeedPolicyOutcome GetFeedPolicy(const Model::GetFeedPolicyRequest& request) const;

  /**
   * A Callable wrapper for GetFeedPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetFeedPolicyRequestT = Model::GetFeedPolicyRequest>
  Model::GetFeedPolicyOutcomeCallable GetFeedPolicyCallable(const GetFeedPolicyRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::GetFeedPolicy, request);
  }

  /**
   * An Async wrapper for GetFeedPolicy that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetFeedPolicyRequestT = Model::GetFeedPolicyRequest>
  void GetFeedPolicyAsync(const GetFeedPolicyRequestT& request, const GetFeedPolicyResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::GetFeedPolicy, request, handler, context);
  }

  /**
   * <p>Retrieves information about the specified fixture (a sports event, such as a
   * specific basketball game). You obtain a fixtureId from SearchFixtures, or from
   * the clipping output of a feed. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/GetFixture">AWS
   * API Reference</a></p>
   */
  virtual Model::GetFixtureOutcome GetFixture(const Model::GetFixtureRequest& request) const;

  /**
   * A Callable wrapper for GetFixture that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetFixtureRequestT = Model::GetFixtureRequest>
  Model::GetFixtureOutcomeCallable GetFixtureCallable(const GetFixtureRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::GetFixture, request);
  }

  /**
   * An Async wrapper for GetFixture that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetFixtureRequestT = Model::GetFixtureRequest>
  void GetFixtureAsync(const GetFixtureRequestT& request, const GetFixtureResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::GetFixture, request, handler, context);
  }

  /**
   * <p>Retrieves the details of a function, including its expressions, the media
   * context that Elemental Inference derived from the request expression, and the
   * feeds that currently reference it. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/GetFunction">AWS
   * API Reference</a></p>
   */
  virtual Model::GetFunctionOutcome GetFunction(const Model::GetFunctionRequest& request) const;

  /**
   * A Callable wrapper for GetFunction that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetFunctionRequestT = Model::GetFunctionRequest>
  Model::GetFunctionOutcomeCallable GetFunctionCallable(const GetFunctionRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::GetFunction, request);
  }

  /**
   * An Async wrapper for GetFunction that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetFunctionRequestT = Model::GetFunctionRequest>
  void GetFunctionAsync(const GetFunctionRequestT& request, const GetFunctionResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::GetFunction, request, handler, context);
  }

  /**
   * <p>Retrieves information about the specified question set at one version. By
   * default, GetQuestionSet returns the DRAFT version. To retrieve a published
   * version, specify questionSetVersion. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/GetQuestionSet">AWS
   * API Reference</a></p>
   */
  virtual Model::GetQuestionSetOutcome GetQuestionSet(const Model::GetQuestionSetRequest& request) const;

  /**
   * A Callable wrapper for GetQuestionSet that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetQuestionSetRequestT = Model::GetQuestionSetRequest>
  Model::GetQuestionSetOutcomeCallable GetQuestionSetCallable(const GetQuestionSetRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::GetQuestionSet, request);
  }

  /**
   * An Async wrapper for GetQuestionSet that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetQuestionSetRequestT = Model::GetQuestionSetRequest>
  void GetQuestionSetAsync(const GetQuestionSetRequestT& request, const GetQuestionSetResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::GetQuestionSet, request, handler, context);
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
   * <p>Lists the functions in this account, in this Region. Each entry is a summary.
   * To get the expressions of a function, use GetFunction. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/ListFunctions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListFunctionsOutcome ListFunctions(const Model::ListFunctionsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListFunctions that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListFunctionsRequestT = Model::ListFunctionsRequest>
  Model::ListFunctionsOutcomeCallable ListFunctionsCallable(const ListFunctionsRequestT& request = {}) const {
    return SubmitCallable(&ElementalInferenceClient::ListFunctions, request);
  }

  /**
   * An Async wrapper for ListFunctions that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListFunctionsRequestT = Model::ListFunctionsRequest>
  void ListFunctionsAsync(const ListFunctionsResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                          const ListFunctionsRequestT& request = {}) const {
    return SubmitAsync(&ElementalInferenceClient::ListFunctions, request, handler, context);
  }

  /**
   * <p>Lists the versions of the specified question set. The list starts with the
   * DRAFT version, followed by the published versions from the highest version
   * number to the lowest. The list doesn't include deleted versions. </p> <p>The
   * response doesn't include the questions in each version. To retrieve them, use
   * GetQuestionSet and specify questionSetVersion. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/ListQuestionSetVersions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListQuestionSetVersionsOutcome ListQuestionSetVersions(const Model::ListQuestionSetVersionsRequest& request) const;

  /**
   * A Callable wrapper for ListQuestionSetVersions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListQuestionSetVersionsRequestT = Model::ListQuestionSetVersionsRequest>
  Model::ListQuestionSetVersionsOutcomeCallable ListQuestionSetVersionsCallable(const ListQuestionSetVersionsRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::ListQuestionSetVersions, request);
  }

  /**
   * An Async wrapper for ListQuestionSetVersions that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListQuestionSetVersionsRequestT = Model::ListQuestionSetVersionsRequest>
  void ListQuestionSetVersionsAsync(const ListQuestionSetVersionsRequestT& request,
                                    const ListQuestionSetVersionsResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::ListQuestionSetVersions, request, handler, context);
  }

  /**
   * <p>Lists the question sets in your account. The response doesn't include the
   * questions in each question set. To retrieve them, use GetQuestionSet.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/ListQuestionSets">AWS
   * API Reference</a></p>
   */
  virtual Model::ListQuestionSetsOutcome ListQuestionSets(const Model::ListQuestionSetsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListQuestionSets that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListQuestionSetsRequestT = Model::ListQuestionSetsRequest>
  Model::ListQuestionSetsOutcomeCallable ListQuestionSetsCallable(const ListQuestionSetsRequestT& request = {}) const {
    return SubmitCallable(&ElementalInferenceClient::ListQuestionSets, request);
  }

  /**
   * An Async wrapper for ListQuestionSets that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListQuestionSetsRequestT = Model::ListQuestionSetsRequest>
  void ListQuestionSetsAsync(const ListQuestionSetsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const ListQuestionSetsRequestT& request = {}) const {
    return SubmitAsync(&ElementalInferenceClient::ListQuestionSets, request, handler, context);
  }

  /**
   * <p>Displays a list of the schedule actions on a feed, including the status of
   * each action and, for a failed action, information about why it failed. </p>
   * <p>Elemental Inference keeps an action whose status is COMPLETED or FAILED for
   * about 48 hours after its scheduled time, and then deletes it automatically.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/ListScheduleActions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListScheduleActionsOutcome ListScheduleActions(const Model::ListScheduleActionsRequest& request) const;

  /**
   * A Callable wrapper for ListScheduleActions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListScheduleActionsRequestT = Model::ListScheduleActionsRequest>
  Model::ListScheduleActionsOutcomeCallable ListScheduleActionsCallable(const ListScheduleActionsRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::ListScheduleActions, request);
  }

  /**
   * An Async wrapper for ListScheduleActions that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListScheduleActionsRequestT = Model::ListScheduleActionsRequest>
  void ListScheduleActionsAsync(const ListScheduleActionsRequestT& request, const ListScheduleActionsResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::ListScheduleActions, request, handler, context);
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
   * <p>Attaches or replaces a resource-based policy on the specified feed. A
   * resource-based policy grants cross-account access to the feed. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/PutFeedPolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::PutFeedPolicyOutcome PutFeedPolicy(const Model::PutFeedPolicyRequest& request) const;

  /**
   * A Callable wrapper for PutFeedPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename PutFeedPolicyRequestT = Model::PutFeedPolicyRequest>
  Model::PutFeedPolicyOutcomeCallable PutFeedPolicyCallable(const PutFeedPolicyRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::PutFeedPolicy, request);
  }

  /**
   * An Async wrapper for PutFeedPolicy that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename PutFeedPolicyRequestT = Model::PutFeedPolicyRequest>
  void PutFeedPolicyAsync(const PutFeedPolicyRequestT& request, const PutFeedPolicyResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::PutFeedPolicy, request, handler, context);
  }

  /**
   * <p>Searches for the fixtures (sports events, such as a specific basketball game)
   * that are available for a sport in a date window. Each fixture in the response
   * includes a fixtureId that you specify in the clipping output of a feed, so that
   * Elemental Inference maps the event data for that fixture onto the clipping
   * metadata. This operation is paginated: if there are more fixtures than fit in
   * one page, the response includes a nextToken that you pass in a subsequent
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/SearchFixtures">AWS
   * API Reference</a></p>
   */
  virtual Model::SearchFixturesOutcome SearchFixtures(const Model::SearchFixturesRequest& request) const;

  /**
   * A Callable wrapper for SearchFixtures that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename SearchFixturesRequestT = Model::SearchFixturesRequest>
  Model::SearchFixturesOutcomeCallable SearchFixturesCallable(const SearchFixturesRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::SearchFixtures, request);
  }

  /**
   * An Async wrapper for SearchFixtures that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename SearchFixturesRequestT = Model::SearchFixturesRequest>
  void SearchFixturesAsync(const SearchFixturesRequestT& request, const SearchFixturesResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::SearchFixtures, request, handler, context);
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

  /**
   * <p>Updates a function. Include only the parameters that you want to change;
   * parameters that you don't include aren't affected. Elemental Inference validates
   * the updated expressions in the same way as CreateFunction. </p> <p>While a feed
   * references the function, you can change only its expressions and its
   * description, and you can set eventBridgeDelivery to DISABLED but not to ENABLED.
   * The request expression must keep referencing the same media context, as reported
   * in contextTypes. Changing an expression changes the behavior of every feed that
   * references the function. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/UpdateFunction">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateFunctionOutcome UpdateFunction(const Model::UpdateFunctionRequest& request) const;

  /**
   * A Callable wrapper for UpdateFunction that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateFunctionRequestT = Model::UpdateFunctionRequest>
  Model::UpdateFunctionOutcomeCallable UpdateFunctionCallable(const UpdateFunctionRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::UpdateFunction, request);
  }

  /**
   * An Async wrapper for UpdateFunction that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateFunctionRequestT = Model::UpdateFunctionRequest>
  void UpdateFunctionAsync(const UpdateFunctionRequestT& request, const UpdateFunctionResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::UpdateFunction, request, handler, context);
  }

  /**
   * <p>Updates the DRAFT version of the specified question set. UpdateQuestionSet
   * doesn't create a version and doesn't change published versions. To publish the
   * updated DRAFT as a new version, use CreateQuestionSetVersion. </p>
   * <p>UpdateQuestionSet replaces questions one type at a time. For each of yesNo,
   * yesNoPerOption, and chooseOne: if you omit the array, DRAFT keeps its questions
   * of that type. If you include the array, it replaces all the questions of that
   * type in DRAFT. If you include an empty array, DRAFT no longer has questions of
   * that type. The updated DRAFT must follow the same rules as in CreateQuestionSet,
   * and Elemental Inference applies those rules to the questions that DRAFT keeps as
   * well as to the questions in the request. </p> <p>Feeds that reference the DRAFT
   * version use the updated questions. To make sure that the questions for a feed
   * don't change, reference a published version instead. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/UpdateQuestionSet">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateQuestionSetOutcome UpdateQuestionSet(const Model::UpdateQuestionSetRequest& request) const;

  /**
   * A Callable wrapper for UpdateQuestionSet that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateQuestionSetRequestT = Model::UpdateQuestionSetRequest>
  Model::UpdateQuestionSetOutcomeCallable UpdateQuestionSetCallable(const UpdateQuestionSetRequestT& request) const {
    return SubmitCallable(&ElementalInferenceClient::UpdateQuestionSet, request);
  }

  /**
   * An Async wrapper for UpdateQuestionSet that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateQuestionSetRequestT = Model::UpdateQuestionSetRequest>
  void UpdateQuestionSetAsync(const UpdateQuestionSetRequestT& request, const UpdateQuestionSetResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ElementalInferenceClient::UpdateQuestionSet, request, handler, context);
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
