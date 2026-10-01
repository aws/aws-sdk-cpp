/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/LambdaWebPaginationBase.h>
#include <aws/lambda-web/LambdaWebServiceClientModel.h>
#include <aws/lambda-web/LambdaWebWaiter.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>

namespace Aws {
namespace LambdaWeb {
/**
 * <p>AWS Lambda Web Functions let you run web applications and APIs as HTTP
 * servers on Lambda. A web function has one or more immutable revisions (code and
 * configuration) and one or more endpoints that expose it over HTTPS.</p>
 */
class AWS_LAMBDAWEB_API LambdaWebClient : public Aws::Client::AWSJsonClient,
                                          public Aws::Client::ClientWithAsyncTemplateMethods<LambdaWebClient>,
                                          public LambdaWebPaginationBase<LambdaWebClient>,
                                          public LambdaWebWaiter<LambdaWebClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef LambdaWebClientConfiguration ClientConfigurationType;
  typedef LambdaWebEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  LambdaWebClient(const Aws::LambdaWeb::LambdaWebClientConfiguration& clientConfiguration = Aws::LambdaWeb::LambdaWebClientConfiguration(),
                  std::shared_ptr<LambdaWebEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  LambdaWebClient(const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<LambdaWebEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::LambdaWeb::LambdaWebClientConfiguration& clientConfiguration = Aws::LambdaWeb::LambdaWebClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  LambdaWebClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<LambdaWebEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::LambdaWeb::LambdaWebClientConfiguration& clientConfiguration = Aws::LambdaWeb::LambdaWebClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  LambdaWebClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  LambdaWebClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  LambdaWebClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~LambdaWebClient();

  /**
   * <p>Creates a web function with an initial revision and endpoint. To create a web
   * function, you provide the function name, revision configuration (code and
   * service settings), and endpoint configuration.</p> <p>To use this operation, you
   * must have the <code>CreateWebFunction</code> permission on the web function. You
   * don't need separate permissions for the initial revision or
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/CreateWebFunction">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateWebFunctionOutcome CreateWebFunction(const Model::CreateWebFunctionRequest& request) const;

  /**
   * A Callable wrapper for CreateWebFunction that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateWebFunctionRequestT = Model::CreateWebFunctionRequest>
  Model::CreateWebFunctionOutcomeCallable CreateWebFunctionCallable(const CreateWebFunctionRequestT& request) const {
    return SubmitCallable(&LambdaWebClient::CreateWebFunction, request);
  }

  /**
   * An Async wrapper for CreateWebFunction that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateWebFunctionRequestT = Model::CreateWebFunctionRequest>
  void CreateWebFunctionAsync(const CreateWebFunctionRequestT& request, const CreateWebFunctionResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaWebClient::CreateWebFunction, request, handler, context);
  }

  /**
   * <p>Creates an endpoint for a web function. An endpoint exposes the web function
   * over HTTPS and routes traffic to one or more revisions.</p> <p>To use this
   * operation, you must have the <code>CreateWebFunctionEndpoint</code> permission
   * on the web function, not on the endpoint being created.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/CreateWebFunctionEndpoint">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateWebFunctionEndpointOutcome CreateWebFunctionEndpoint(const Model::CreateWebFunctionEndpointRequest& request) const;

  /**
   * A Callable wrapper for CreateWebFunctionEndpoint that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateWebFunctionEndpointRequestT = Model::CreateWebFunctionEndpointRequest>
  Model::CreateWebFunctionEndpointOutcomeCallable CreateWebFunctionEndpointCallable(
      const CreateWebFunctionEndpointRequestT& request) const {
    return SubmitCallable(&LambdaWebClient::CreateWebFunctionEndpoint, request);
  }

  /**
   * An Async wrapper for CreateWebFunctionEndpoint that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateWebFunctionEndpointRequestT = Model::CreateWebFunctionEndpointRequest>
  void CreateWebFunctionEndpointAsync(const CreateWebFunctionEndpointRequestT& request,
                                      const CreateWebFunctionEndpointResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaWebClient::CreateWebFunctionEndpoint, request, handler, context);
  }

  /**
   * <p>Creates an immutable revision for a web function. A revision represents a
   * specific version of the function code and configuration.</p> <p>To use this
   * operation, you must have the <code>CreateWebFunctionRevision</code> permission
   * on the web function, not on the revision being created.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/CreateWebFunctionRevision">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateWebFunctionRevisionOutcome CreateWebFunctionRevision(const Model::CreateWebFunctionRevisionRequest& request) const;

  /**
   * A Callable wrapper for CreateWebFunctionRevision that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateWebFunctionRevisionRequestT = Model::CreateWebFunctionRevisionRequest>
  Model::CreateWebFunctionRevisionOutcomeCallable CreateWebFunctionRevisionCallable(
      const CreateWebFunctionRevisionRequestT& request) const {
    return SubmitCallable(&LambdaWebClient::CreateWebFunctionRevision, request);
  }

  /**
   * An Async wrapper for CreateWebFunctionRevision that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateWebFunctionRevisionRequestT = Model::CreateWebFunctionRevisionRequest>
  void CreateWebFunctionRevisionAsync(const CreateWebFunctionRevisionRequestT& request,
                                      const CreateWebFunctionRevisionResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaWebClient::CreateWebFunctionRevision, request, handler, context);
  }

  /**
   * <p>Removes the resource-based policy from a web function.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/DeleteResourcePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

  /**
   * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
  Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const DeleteResourcePolicyRequestT& request) const {
    return SubmitCallable(&LambdaWebClient::DeleteResourcePolicy, request);
  }

  /**
   * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
  void DeleteResourcePolicyAsync(const DeleteResourcePolicyRequestT& request, const DeleteResourcePolicyResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaWebClient::DeleteResourcePolicy, request, handler, context);
  }

  /**
   * <p>Deletes a web function and all of its associated revisions and endpoints.</p>
   * <p>To use this operation, you must have the <code>DeleteWebFunction</code>
   * permission on the web function. You don't need the
   * <code>DeleteWebFunctionRevision</code> or <code>DeleteWebFunctionEndpoint</code>
   * permission.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/DeleteWebFunction">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteWebFunctionOutcome DeleteWebFunction(const Model::DeleteWebFunctionRequest& request) const;

  /**
   * A Callable wrapper for DeleteWebFunction that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteWebFunctionRequestT = Model::DeleteWebFunctionRequest>
  Model::DeleteWebFunctionOutcomeCallable DeleteWebFunctionCallable(const DeleteWebFunctionRequestT& request) const {
    return SubmitCallable(&LambdaWebClient::DeleteWebFunction, request);
  }

  /**
   * An Async wrapper for DeleteWebFunction that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteWebFunctionRequestT = Model::DeleteWebFunctionRequest>
  void DeleteWebFunctionAsync(const DeleteWebFunctionRequestT& request, const DeleteWebFunctionResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaWebClient::DeleteWebFunction, request, handler, context);
  }

  /**
   * <p>Deletes a web function endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/DeleteWebFunctionEndpoint">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteWebFunctionEndpointOutcome DeleteWebFunctionEndpoint(const Model::DeleteWebFunctionEndpointRequest& request) const;

  /**
   * A Callable wrapper for DeleteWebFunctionEndpoint that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteWebFunctionEndpointRequestT = Model::DeleteWebFunctionEndpointRequest>
  Model::DeleteWebFunctionEndpointOutcomeCallable DeleteWebFunctionEndpointCallable(
      const DeleteWebFunctionEndpointRequestT& request) const {
    return SubmitCallable(&LambdaWebClient::DeleteWebFunctionEndpoint, request);
  }

  /**
   * An Async wrapper for DeleteWebFunctionEndpoint that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteWebFunctionEndpointRequestT = Model::DeleteWebFunctionEndpointRequest>
  void DeleteWebFunctionEndpointAsync(const DeleteWebFunctionEndpointRequestT& request,
                                      const DeleteWebFunctionEndpointResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaWebClient::DeleteWebFunctionEndpoint, request, handler, context);
  }

  /**
   * <p>Deletes a web function revision. You cannot delete a revision that is
   * currently serving traffic on an endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/DeleteWebFunctionRevision">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteWebFunctionRevisionOutcome DeleteWebFunctionRevision(const Model::DeleteWebFunctionRevisionRequest& request) const;

  /**
   * A Callable wrapper for DeleteWebFunctionRevision that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteWebFunctionRevisionRequestT = Model::DeleteWebFunctionRevisionRequest>
  Model::DeleteWebFunctionRevisionOutcomeCallable DeleteWebFunctionRevisionCallable(
      const DeleteWebFunctionRevisionRequestT& request) const {
    return SubmitCallable(&LambdaWebClient::DeleteWebFunctionRevision, request);
  }

  /**
   * An Async wrapper for DeleteWebFunctionRevision that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteWebFunctionRevisionRequestT = Model::DeleteWebFunctionRevisionRequest>
  void DeleteWebFunctionRevisionAsync(const DeleteWebFunctionRevisionRequestT& request,
                                      const DeleteWebFunctionRevisionResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaWebClient::DeleteWebFunctionRevision, request, handler, context);
  }

  /**
   * <p>Retrieves the resource-based policy attached to a web function.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/GetResourcePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

  /**
   * A Callable wrapper for GetResourcePolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
  Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const GetResourcePolicyRequestT& request) const {
    return SubmitCallable(&LambdaWebClient::GetResourcePolicy, request);
  }

  /**
   * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
  void GetResourcePolicyAsync(const GetResourcePolicyRequestT& request, const GetResourcePolicyResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaWebClient::GetResourcePolicy, request, handler, context);
  }

  /**
   * <p>Retrieves details about your AWS Lambda Web Functions account settings for
   * the current AWS Region, including the quotas that apply to web functions and
   * your current usage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/GetWebAccountSettings">AWS
   * API Reference</a></p>
   */
  virtual Model::GetWebAccountSettingsOutcome GetWebAccountSettings(const Model::GetWebAccountSettingsRequest& request = {}) const;

  /**
   * A Callable wrapper for GetWebAccountSettings that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetWebAccountSettingsRequestT = Model::GetWebAccountSettingsRequest>
  Model::GetWebAccountSettingsOutcomeCallable GetWebAccountSettingsCallable(const GetWebAccountSettingsRequestT& request = {}) const {
    return SubmitCallable(&LambdaWebClient::GetWebAccountSettings, request);
  }

  /**
   * An Async wrapper for GetWebAccountSettings that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetWebAccountSettingsRequestT = Model::GetWebAccountSettingsRequest>
  void GetWebAccountSettingsAsync(const GetWebAccountSettingsResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                  const GetWebAccountSettingsRequestT& request = {}) const {
    return SubmitAsync(&LambdaWebClient::GetWebAccountSettings, request, handler, context);
  }

  /**
   * <p>Retrieves details about a web function, including its current state and
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/GetWebFunction">AWS
   * API Reference</a></p>
   */
  virtual Model::GetWebFunctionOutcome GetWebFunction(const Model::GetWebFunctionRequest& request) const;

  /**
   * A Callable wrapper for GetWebFunction that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetWebFunctionRequestT = Model::GetWebFunctionRequest>
  Model::GetWebFunctionOutcomeCallable GetWebFunctionCallable(const GetWebFunctionRequestT& request) const {
    return SubmitCallable(&LambdaWebClient::GetWebFunction, request);
  }

  /**
   * An Async wrapper for GetWebFunction that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetWebFunctionRequestT = Model::GetWebFunctionRequest>
  void GetWebFunctionAsync(const GetWebFunctionRequestT& request, const GetWebFunctionResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaWebClient::GetWebFunction, request, handler, context);
  }

  /**
   * <p>Retrieves details about a web function endpoint, including its current state,
   * configuration, and domain name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/GetWebFunctionEndpoint">AWS
   * API Reference</a></p>
   */
  virtual Model::GetWebFunctionEndpointOutcome GetWebFunctionEndpoint(const Model::GetWebFunctionEndpointRequest& request) const;

  /**
   * A Callable wrapper for GetWebFunctionEndpoint that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetWebFunctionEndpointRequestT = Model::GetWebFunctionEndpointRequest>
  Model::GetWebFunctionEndpointOutcomeCallable GetWebFunctionEndpointCallable(const GetWebFunctionEndpointRequestT& request) const {
    return SubmitCallable(&LambdaWebClient::GetWebFunctionEndpoint, request);
  }

  /**
   * An Async wrapper for GetWebFunctionEndpoint that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetWebFunctionEndpointRequestT = Model::GetWebFunctionEndpointRequest>
  void GetWebFunctionEndpointAsync(const GetWebFunctionEndpointRequestT& request,
                                   const GetWebFunctionEndpointResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaWebClient::GetWebFunctionEndpoint, request, handler, context);
  }

  /**
   * <p>Retrieves details about a web function revision, including its state and
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/GetWebFunctionRevision">AWS
   * API Reference</a></p>
   */
  virtual Model::GetWebFunctionRevisionOutcome GetWebFunctionRevision(const Model::GetWebFunctionRevisionRequest& request) const;

  /**
   * A Callable wrapper for GetWebFunctionRevision that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetWebFunctionRevisionRequestT = Model::GetWebFunctionRevisionRequest>
  Model::GetWebFunctionRevisionOutcomeCallable GetWebFunctionRevisionCallable(const GetWebFunctionRevisionRequestT& request) const {
    return SubmitCallable(&LambdaWebClient::GetWebFunctionRevision, request);
  }

  /**
   * An Async wrapper for GetWebFunctionRevision that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetWebFunctionRevisionRequestT = Model::GetWebFunctionRevisionRequest>
  void GetWebFunctionRevisionAsync(const GetWebFunctionRevisionRequestT& request,
                                   const GetWebFunctionRevisionResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaWebClient::GetWebFunctionRevision, request, handler, context);
  }

  /**
   * <p>Returns a list of tags applied to a web function.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/ListTags">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

  /**
   * A Callable wrapper for ListTags that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListTagsRequestT = Model::ListTagsRequest>
  Model::ListTagsOutcomeCallable ListTagsCallable(const ListTagsRequestT& request) const {
    return SubmitCallable(&LambdaWebClient::ListTags, request);
  }

  /**
   * An Async wrapper for ListTags that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListTagsRequestT = Model::ListTagsRequest>
  void ListTagsAsync(const ListTagsRequestT& request, const ListTagsResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaWebClient::ListTags, request, handler, context);
  }

  /**
   * <p>Lists endpoints for a web function. We recommend using pagination to ensure
   * that the operation returns quickly and successfully.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/ListWebFunctionEndpoints">AWS
   * API Reference</a></p>
   */
  virtual Model::ListWebFunctionEndpointsOutcome ListWebFunctionEndpoints(const Model::ListWebFunctionEndpointsRequest& request) const;

  /**
   * A Callable wrapper for ListWebFunctionEndpoints that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListWebFunctionEndpointsRequestT = Model::ListWebFunctionEndpointsRequest>
  Model::ListWebFunctionEndpointsOutcomeCallable ListWebFunctionEndpointsCallable(const ListWebFunctionEndpointsRequestT& request) const {
    return SubmitCallable(&LambdaWebClient::ListWebFunctionEndpoints, request);
  }

  /**
   * An Async wrapper for ListWebFunctionEndpoints that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListWebFunctionEndpointsRequestT = Model::ListWebFunctionEndpointsRequest>
  void ListWebFunctionEndpointsAsync(const ListWebFunctionEndpointsRequestT& request,
                                     const ListWebFunctionEndpointsResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaWebClient::ListWebFunctionEndpoints, request, handler, context);
  }

  /**
   * <p>Lists revisions for a web function. We recommend using pagination to ensure
   * that the operation returns quickly and successfully.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/ListWebFunctionRevisions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListWebFunctionRevisionsOutcome ListWebFunctionRevisions(const Model::ListWebFunctionRevisionsRequest& request) const;

  /**
   * A Callable wrapper for ListWebFunctionRevisions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListWebFunctionRevisionsRequestT = Model::ListWebFunctionRevisionsRequest>
  Model::ListWebFunctionRevisionsOutcomeCallable ListWebFunctionRevisionsCallable(const ListWebFunctionRevisionsRequestT& request) const {
    return SubmitCallable(&LambdaWebClient::ListWebFunctionRevisions, request);
  }

  /**
   * An Async wrapper for ListWebFunctionRevisions that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListWebFunctionRevisionsRequestT = Model::ListWebFunctionRevisionsRequest>
  void ListWebFunctionRevisionsAsync(const ListWebFunctionRevisionsRequestT& request,
                                     const ListWebFunctionRevisionsResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaWebClient::ListWebFunctionRevisions, request, handler, context);
  }

  /**
   * <p>Lists web functions in your account. We recommend using pagination to ensure
   * that the operation returns quickly and successfully.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/ListWebFunctions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListWebFunctionsOutcome ListWebFunctions(const Model::ListWebFunctionsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListWebFunctions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListWebFunctionsRequestT = Model::ListWebFunctionsRequest>
  Model::ListWebFunctionsOutcomeCallable ListWebFunctionsCallable(const ListWebFunctionsRequestT& request = {}) const {
    return SubmitCallable(&LambdaWebClient::ListWebFunctions, request);
  }

  /**
   * An Async wrapper for ListWebFunctions that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListWebFunctionsRequestT = Model::ListWebFunctionsRequest>
  void ListWebFunctionsAsync(const ListWebFunctionsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const ListWebFunctionsRequestT& request = {}) const {
    return SubmitAsync(&LambdaWebClient::ListWebFunctions, request, handler, context);
  }

  /**
   * <p>Adds or updates a resource-based policy on a web function. A resource-based
   * policy grants permissions to other AWS accounts or services to perform actions
   * on the web function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/PutResourcePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

  /**
   * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
  Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const PutResourcePolicyRequestT& request) const {
    return SubmitCallable(&LambdaWebClient::PutResourcePolicy, request);
  }

  /**
   * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
  void PutResourcePolicyAsync(const PutResourcePolicyRequestT& request, const PutResourcePolicyResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaWebClient::PutResourcePolicy, request, handler, context);
  }

  /**
   * <p>Adds tags to a web function. If a tag key already exists, the existing value
   * is overwritten with the new value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&LambdaWebClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaWebClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes tags from a web function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&LambdaWebClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaWebClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates the configuration of a web function endpoint. You can modify the
   * authorization type, auto-deployment mode, revision weights, scaling, and
   * throttling settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/UpdateWebFunctionEndpoint">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateWebFunctionEndpointOutcome UpdateWebFunctionEndpoint(const Model::UpdateWebFunctionEndpointRequest& request) const;

  /**
   * A Callable wrapper for UpdateWebFunctionEndpoint that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateWebFunctionEndpointRequestT = Model::UpdateWebFunctionEndpointRequest>
  Model::UpdateWebFunctionEndpointOutcomeCallable UpdateWebFunctionEndpointCallable(
      const UpdateWebFunctionEndpointRequestT& request) const {
    return SubmitCallable(&LambdaWebClient::UpdateWebFunctionEndpoint, request);
  }

  /**
   * An Async wrapper for UpdateWebFunctionEndpoint that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateWebFunctionEndpointRequestT = Model::UpdateWebFunctionEndpointRequest>
  void UpdateWebFunctionEndpointAsync(const UpdateWebFunctionEndpointRequestT& request,
                                      const UpdateWebFunctionEndpointResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&LambdaWebClient::UpdateWebFunctionEndpoint, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<LambdaWebEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<LambdaWebClient>;
  void init(const LambdaWebClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, LambdaWebError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  LambdaWebClientConfiguration m_clientConfiguration;
  std::shared_ptr<LambdaWebEndpointProviderBase> m_endpointProvider;
};

}  // namespace LambdaWeb
}  // namespace Aws
