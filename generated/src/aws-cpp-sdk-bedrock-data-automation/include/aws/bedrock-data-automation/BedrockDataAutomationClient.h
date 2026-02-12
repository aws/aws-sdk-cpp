/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomationErrorMarshaller.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationPaginationBase.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationServiceClientModel.h>
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <smithy/identity/auth/built-in/GenericAuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>

namespace Aws {
namespace BedrockDataAutomation {
AWS_BEDROCKDATAAUTOMATION_API extern const char SERVICE_NAME[];
/**
 * <p>Amazon Bedrock Data Automation BuildTime</p>
 */
class AWS_BEDROCKDATAAUTOMATION_API BedrockDataAutomationClient
    : Aws::Client::ClientWithAsyncTemplateMethods<BedrockDataAutomationClient>,
      public smithy::client::AwsSmithyClientT<
          Aws::BedrockDataAutomation::SERVICE_NAME, Aws::BedrockDataAutomation::BedrockDataAutomationClientConfiguration,
          smithy::AuthSchemeResolverBase<>, Aws::Crt::Variant<smithy::SigV4AuthScheme>, BedrockDataAutomationEndpointProviderBase,
          smithy::client::JsonOutcomeSerializer, smithy::client::JsonOutcome, Aws::Client::BedrockDataAutomationErrorMarshaller>,
      public BedrockDataAutomationPaginationBase<BedrockDataAutomationClient> {
 public:
  static const char* GetServiceName();
  static const char* GetAllocationTag();
  inline const char* GetServiceClientName() const override { return "Bedrock Data Automation"; }

  typedef BedrockDataAutomationClientConfiguration ClientConfigurationType;
  typedef BedrockDataAutomationEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  BedrockDataAutomationClient(const Aws::BedrockDataAutomation::BedrockDataAutomationClientConfiguration& clientConfiguration =
                                  Aws::BedrockDataAutomation::BedrockDataAutomationClientConfiguration(),
                              std::shared_ptr<BedrockDataAutomationEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  BedrockDataAutomationClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<BedrockDataAutomationEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::BedrockDataAutomation::BedrockDataAutomationClientConfiguration& clientConfiguration =
                                  Aws::BedrockDataAutomation::BedrockDataAutomationClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  BedrockDataAutomationClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<BedrockDataAutomationEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::BedrockDataAutomation::BedrockDataAutomationClientConfiguration& clientConfiguration =
                                  Aws::BedrockDataAutomation::BedrockDataAutomationClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  BedrockDataAutomationClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  BedrockDataAutomationClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  BedrockDataAutomationClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~BedrockDataAutomationClient();

  /**
   * <p>Copies a Blueprint from one stage to another</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/CopyBlueprintStage">AWS
   * API Reference</a></p>
   */
  virtual Model::CopyBlueprintStageOutcome CopyBlueprintStage(const Model::CopyBlueprintStageRequest& request) const;

  /**
   * A Callable wrapper for CopyBlueprintStage that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CopyBlueprintStageRequestT = Model::CopyBlueprintStageRequest>
  Model::CopyBlueprintStageOutcomeCallable CopyBlueprintStageCallable(const CopyBlueprintStageRequestT& request) const {
    return SubmitCallable(&BedrockDataAutomationClient::CopyBlueprintStage, request);
  }

  /**
   * An Async wrapper for CopyBlueprintStage that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CopyBlueprintStageRequestT = Model::CopyBlueprintStageRequest>
  void CopyBlueprintStageAsync(const CopyBlueprintStageRequestT& request, const CopyBlueprintStageResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockDataAutomationClient::CopyBlueprintStage, request, handler, context);
  }

  /**
   * <p>Creates an Amazon Bedrock Data Automation Blueprint</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/CreateBlueprint">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateBlueprintOutcome CreateBlueprint(const Model::CreateBlueprintRequest& request) const;

  /**
   * A Callable wrapper for CreateBlueprint that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateBlueprintRequestT = Model::CreateBlueprintRequest>
  Model::CreateBlueprintOutcomeCallable CreateBlueprintCallable(const CreateBlueprintRequestT& request) const {
    return SubmitCallable(&BedrockDataAutomationClient::CreateBlueprint, request);
  }

  /**
   * An Async wrapper for CreateBlueprint that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateBlueprintRequestT = Model::CreateBlueprintRequest>
  void CreateBlueprintAsync(const CreateBlueprintRequestT& request, const CreateBlueprintResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockDataAutomationClient::CreateBlueprint, request, handler, context);
  }

  /**
   * <p>Creates a new version of an existing Amazon Bedrock Data Automation
   * Blueprint</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/CreateBlueprintVersion">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateBlueprintVersionOutcome CreateBlueprintVersion(const Model::CreateBlueprintVersionRequest& request) const;

  /**
   * A Callable wrapper for CreateBlueprintVersion that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateBlueprintVersionRequestT = Model::CreateBlueprintVersionRequest>
  Model::CreateBlueprintVersionOutcomeCallable CreateBlueprintVersionCallable(const CreateBlueprintVersionRequestT& request) const {
    return SubmitCallable(&BedrockDataAutomationClient::CreateBlueprintVersion, request);
  }

  /**
   * An Async wrapper for CreateBlueprintVersion that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateBlueprintVersionRequestT = Model::CreateBlueprintVersionRequest>
  void CreateBlueprintVersionAsync(const CreateBlueprintVersionRequestT& request,
                                   const CreateBlueprintVersionResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockDataAutomationClient::CreateBlueprintVersion, request, handler, context);
  }

  /**
   * <p>Creates an Amazon Bedrock Data Automation Project</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/CreateDataAutomationProject">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateDataAutomationProjectOutcome CreateDataAutomationProject(
      const Model::CreateDataAutomationProjectRequest& request) const;

  /**
   * A Callable wrapper for CreateDataAutomationProject that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateDataAutomationProjectRequestT = Model::CreateDataAutomationProjectRequest>
  Model::CreateDataAutomationProjectOutcomeCallable CreateDataAutomationProjectCallable(
      const CreateDataAutomationProjectRequestT& request) const {
    return SubmitCallable(&BedrockDataAutomationClient::CreateDataAutomationProject, request);
  }

  /**
   * An Async wrapper for CreateDataAutomationProject that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateDataAutomationProjectRequestT = Model::CreateDataAutomationProjectRequest>
  void CreateDataAutomationProjectAsync(const CreateDataAutomationProjectRequestT& request,
                                        const CreateDataAutomationProjectResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockDataAutomationClient::CreateDataAutomationProject, request, handler, context);
  }

  /**
   * <p>Deletes an existing Amazon Bedrock Data Automation Blueprint</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/DeleteBlueprint">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteBlueprintOutcome DeleteBlueprint(const Model::DeleteBlueprintRequest& request) const;

  /**
   * A Callable wrapper for DeleteBlueprint that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteBlueprintRequestT = Model::DeleteBlueprintRequest>
  Model::DeleteBlueprintOutcomeCallable DeleteBlueprintCallable(const DeleteBlueprintRequestT& request) const {
    return SubmitCallable(&BedrockDataAutomationClient::DeleteBlueprint, request);
  }

  /**
   * An Async wrapper for DeleteBlueprint that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteBlueprintRequestT = Model::DeleteBlueprintRequest>
  void DeleteBlueprintAsync(const DeleteBlueprintRequestT& request, const DeleteBlueprintResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockDataAutomationClient::DeleteBlueprint, request, handler, context);
  }

  /**
   * <p>Deletes an existing Amazon Bedrock Data Automation Project</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/DeleteDataAutomationProject">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteDataAutomationProjectOutcome DeleteDataAutomationProject(
      const Model::DeleteDataAutomationProjectRequest& request) const;

  /**
   * A Callable wrapper for DeleteDataAutomationProject that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteDataAutomationProjectRequestT = Model::DeleteDataAutomationProjectRequest>
  Model::DeleteDataAutomationProjectOutcomeCallable DeleteDataAutomationProjectCallable(
      const DeleteDataAutomationProjectRequestT& request) const {
    return SubmitCallable(&BedrockDataAutomationClient::DeleteDataAutomationProject, request);
  }

  /**
   * An Async wrapper for DeleteDataAutomationProject that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteDataAutomationProjectRequestT = Model::DeleteDataAutomationProjectRequest>
  void DeleteDataAutomationProjectAsync(const DeleteDataAutomationProjectRequestT& request,
                                        const DeleteDataAutomationProjectResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockDataAutomationClient::DeleteDataAutomationProject, request, handler, context);
  }

  /**
   * <p>Gets an existing Amazon Bedrock Data Automation Blueprint</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/GetBlueprint">AWS
   * API Reference</a></p>
   */
  virtual Model::GetBlueprintOutcome GetBlueprint(const Model::GetBlueprintRequest& request) const;

  /**
   * A Callable wrapper for GetBlueprint that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetBlueprintRequestT = Model::GetBlueprintRequest>
  Model::GetBlueprintOutcomeCallable GetBlueprintCallable(const GetBlueprintRequestT& request) const {
    return SubmitCallable(&BedrockDataAutomationClient::GetBlueprint, request);
  }

  /**
   * An Async wrapper for GetBlueprint that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetBlueprintRequestT = Model::GetBlueprintRequest>
  void GetBlueprintAsync(const GetBlueprintRequestT& request, const GetBlueprintResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockDataAutomationClient::GetBlueprint, request, handler, context);
  }

  /**
   * <p>API used to get blueprint optimization status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/GetBlueprintOptimizationStatus">AWS
   * API Reference</a></p>
   */
  virtual Model::GetBlueprintOptimizationStatusOutcome GetBlueprintOptimizationStatus(
      const Model::GetBlueprintOptimizationStatusRequest& request) const;

  /**
   * A Callable wrapper for GetBlueprintOptimizationStatus that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetBlueprintOptimizationStatusRequestT = Model::GetBlueprintOptimizationStatusRequest>
  Model::GetBlueprintOptimizationStatusOutcomeCallable GetBlueprintOptimizationStatusCallable(
      const GetBlueprintOptimizationStatusRequestT& request) const {
    return SubmitCallable(&BedrockDataAutomationClient::GetBlueprintOptimizationStatus, request);
  }

  /**
   * An Async wrapper for GetBlueprintOptimizationStatus that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename GetBlueprintOptimizationStatusRequestT = Model::GetBlueprintOptimizationStatusRequest>
  void GetBlueprintOptimizationStatusAsync(const GetBlueprintOptimizationStatusRequestT& request,
                                           const GetBlueprintOptimizationStatusResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockDataAutomationClient::GetBlueprintOptimizationStatus, request, handler, context);
  }

  /**
   * <p>Gets an existing Amazon Bedrock Data Automation Project</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/GetDataAutomationProject">AWS
   * API Reference</a></p>
   */
  virtual Model::GetDataAutomationProjectOutcome GetDataAutomationProject(const Model::GetDataAutomationProjectRequest& request) const;

  /**
   * A Callable wrapper for GetDataAutomationProject that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetDataAutomationProjectRequestT = Model::GetDataAutomationProjectRequest>
  Model::GetDataAutomationProjectOutcomeCallable GetDataAutomationProjectCallable(const GetDataAutomationProjectRequestT& request) const {
    return SubmitCallable(&BedrockDataAutomationClient::GetDataAutomationProject, request);
  }

  /**
   * An Async wrapper for GetDataAutomationProject that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetDataAutomationProjectRequestT = Model::GetDataAutomationProjectRequest>
  void GetDataAutomationProjectAsync(const GetDataAutomationProjectRequestT& request,
                                     const GetDataAutomationProjectResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockDataAutomationClient::GetDataAutomationProject, request, handler, context);
  }

  /**
   * <p>Invoke an async job to perform Blueprint Optimization</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/InvokeBlueprintOptimizationAsync">AWS
   * API Reference</a></p>
   */
  virtual Model::InvokeBlueprintOptimizationAsyncOutcome InvokeBlueprintOptimizationAsync(
      const Model::InvokeBlueprintOptimizationAsyncRequest& request) const;

  /**
   * A Callable wrapper for InvokeBlueprintOptimizationAsync that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename InvokeBlueprintOptimizationAsyncRequestT = Model::InvokeBlueprintOptimizationAsyncRequest>
  Model::InvokeBlueprintOptimizationAsyncOutcomeCallable InvokeBlueprintOptimizationAsyncCallable(
      const InvokeBlueprintOptimizationAsyncRequestT& request) const {
    return SubmitCallable(&BedrockDataAutomationClient::InvokeBlueprintOptimizationAsync, request);
  }

  /**
   * An Async wrapper for InvokeBlueprintOptimizationAsync that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename InvokeBlueprintOptimizationAsyncRequestT = Model::InvokeBlueprintOptimizationAsyncRequest>
  void InvokeBlueprintOptimizationAsyncAsync(const InvokeBlueprintOptimizationAsyncRequestT& request,
                                             const InvokeBlueprintOptimizationAsyncResponseReceivedHandler& handler,
                                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockDataAutomationClient::InvokeBlueprintOptimizationAsync, request, handler, context);
  }

  /**
   * <p>Lists all existing Amazon Bedrock Data Automation Blueprints</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/ListBlueprints">AWS
   * API Reference</a></p>
   */
  virtual Model::ListBlueprintsOutcome ListBlueprints(const Model::ListBlueprintsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListBlueprints that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListBlueprintsRequestT = Model::ListBlueprintsRequest>
  Model::ListBlueprintsOutcomeCallable ListBlueprintsCallable(const ListBlueprintsRequestT& request = {}) const {
    return SubmitCallable(&BedrockDataAutomationClient::ListBlueprints, request);
  }

  /**
   * An Async wrapper for ListBlueprints that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListBlueprintsRequestT = Model::ListBlueprintsRequest>
  void ListBlueprintsAsync(const ListBlueprintsResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                           const ListBlueprintsRequestT& request = {}) const {
    return SubmitAsync(&BedrockDataAutomationClient::ListBlueprints, request, handler, context);
  }

  /**
   * <p>Lists all existing Amazon Bedrock Data Automation Projects</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/ListDataAutomationProjects">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDataAutomationProjectsOutcome ListDataAutomationProjects(
      const Model::ListDataAutomationProjectsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListDataAutomationProjects that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListDataAutomationProjectsRequestT = Model::ListDataAutomationProjectsRequest>
  Model::ListDataAutomationProjectsOutcomeCallable ListDataAutomationProjectsCallable(
      const ListDataAutomationProjectsRequestT& request = {}) const {
    return SubmitCallable(&BedrockDataAutomationClient::ListDataAutomationProjects, request);
  }

  /**
   * An Async wrapper for ListDataAutomationProjects that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListDataAutomationProjectsRequestT = Model::ListDataAutomationProjectsRequest>
  void ListDataAutomationProjectsAsync(const ListDataAutomationProjectsResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                       const ListDataAutomationProjectsRequestT& request = {}) const {
    return SubmitAsync(&BedrockDataAutomationClient::ListDataAutomationProjects, request, handler, context);
  }

  /**
   * <p>List tags for an Amazon Bedrock Data Automation resource</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&BedrockDataAutomationClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockDataAutomationClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Tag an Amazon Bedrock Data Automation resource</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&BedrockDataAutomationClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockDataAutomationClient::TagResource, request, handler, context);
  }

  /**
   * <p>Untag an Amazon Bedrock Data Automation resource</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&BedrockDataAutomationClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockDataAutomationClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates an existing Amazon Bedrock Data Automation Blueprint</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/UpdateBlueprint">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateBlueprintOutcome UpdateBlueprint(const Model::UpdateBlueprintRequest& request) const;

  /**
   * A Callable wrapper for UpdateBlueprint that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateBlueprintRequestT = Model::UpdateBlueprintRequest>
  Model::UpdateBlueprintOutcomeCallable UpdateBlueprintCallable(const UpdateBlueprintRequestT& request) const {
    return SubmitCallable(&BedrockDataAutomationClient::UpdateBlueprint, request);
  }

  /**
   * An Async wrapper for UpdateBlueprint that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateBlueprintRequestT = Model::UpdateBlueprintRequest>
  void UpdateBlueprintAsync(const UpdateBlueprintRequestT& request, const UpdateBlueprintResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockDataAutomationClient::UpdateBlueprint, request, handler, context);
  }

  /**
   * <p>Updates an existing Amazon Bedrock Data Automation Project</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/UpdateDataAutomationProject">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateDataAutomationProjectOutcome UpdateDataAutomationProject(
      const Model::UpdateDataAutomationProjectRequest& request) const;

  /**
   * A Callable wrapper for UpdateDataAutomationProject that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateDataAutomationProjectRequestT = Model::UpdateDataAutomationProjectRequest>
  Model::UpdateDataAutomationProjectOutcomeCallable UpdateDataAutomationProjectCallable(
      const UpdateDataAutomationProjectRequestT& request) const {
    return SubmitCallable(&BedrockDataAutomationClient::UpdateDataAutomationProject, request);
  }

  /**
   * An Async wrapper for UpdateDataAutomationProject that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateDataAutomationProjectRequestT = Model::UpdateDataAutomationProjectRequest>
  void UpdateDataAutomationProjectAsync(const UpdateDataAutomationProjectRequestT& request,
                                        const UpdateDataAutomationProjectResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockDataAutomationClient::UpdateDataAutomationProject, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<BedrockDataAutomationEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<BedrockDataAutomationClient>;
};

}  // namespace BedrockDataAutomation
}  // namespace Aws
