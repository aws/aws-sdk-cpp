/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/ContextType.h>
#include <aws/elementalinference/model/EventBridgeDeliveryMode.h>
#include <aws/elementalinference/model/FunctionStatus.h>
#include <aws/elementalinference/model/FunctionTarget.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {
class CreateFunctionResult {
 public:
  AWS_ELEMENTALINFERENCE_API CreateFunctionResult() = default;
  AWS_ELEMENTALINFERENCE_API CreateFunctionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ELEMENTALINFERENCE_API CreateFunctionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the function.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateFunctionResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination for the request that the function builds.</p>
   */
  inline const FunctionTarget& GetTarget() const { return m_target; }
  template <typename TargetT = FunctionTarget>
  void SetTarget(TargetT&& value) {
    m_targetHasBeenSet = true;
    m_target = std::forward<TargetT>(value);
  }
  template <typename TargetT = FunctionTarget>
  CreateFunctionResult& WithTarget(TargetT&& value) {
    SetTarget(std::forward<TargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSONata expression that builds the request. Elemental Inference evaluates
   * it against the media object of the feed, which holds the media and metadata that
   * the function asked for. </p>
   */
  inline const Aws::String& GetRequestExpression() const { return m_requestExpression; }
  template <typename RequestExpressionT = Aws::String>
  void SetRequestExpression(RequestExpressionT&& value) {
    m_requestExpressionHasBeenSet = true;
    m_requestExpression = std::forward<RequestExpressionT>(value);
  }
  template <typename RequestExpressionT = Aws::String>
  CreateFunctionResult& WithRequestExpression(RequestExpressionT&& value) {
    SetRequestExpression(std::forward<RequestExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSONata expression that selects what to store. Elemental Inference
   * evaluates it against the result as its root: the model response for a Bedrock
   * target, or the output of the request expression for a passthrough target. If a
   * function has no response expression, Elemental Inference stores the entire
   * result. </p>
   */
  inline const Aws::String& GetResponseExpression() const { return m_responseExpression; }
  template <typename ResponseExpressionT = Aws::String>
  void SetResponseExpression(ResponseExpressionT&& value) {
    m_responseExpressionHasBeenSet = true;
    m_responseExpression = std::forward<ResponseExpressionT>(value);
  }
  template <typename ResponseExpressionT = Aws::String>
  CreateFunctionResult& WithResponseExpression(ResponseExpressionT&& value) {
    SetResponseExpression(std::forward<ResponseExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the function.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateFunctionResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether Elemental Inference also sends this function's results to
   * Amazon EventBridge. With ENABLED, each result that is a JSON object with a
   * top-level <code>eventBridge</code> field set to <code>true</code> is also sent
   * as a Function Metadata Generated event to the default event bus in your account.
   * </p>
   */
  inline EventBridgeDeliveryMode GetEventBridgeDelivery() const { return m_eventBridgeDelivery; }
  inline void SetEventBridgeDelivery(EventBridgeDeliveryMode value) {
    m_eventBridgeDeliveryHasBeenSet = true;
    m_eventBridgeDelivery = value;
  }
  inline CreateFunctionResult& WithEventBridgeDelivery(EventBridgeDeliveryMode value) {
    SetEventBridgeDelivery(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the function.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CreateFunctionResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the function.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CreateFunctionResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the function. A successful request returns CREATING. The
   * function is ready to use as soon as the request succeeds. </p>
   */
  inline FunctionStatus GetStatus() const { return m_status; }
  inline void SetStatus(FunctionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateFunctionResult& WithStatus(FunctionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the feeds that have a function output, enabled or disabled, that
   * references this function. While this list isn't empty, the function can't be
   * deleted, and its name and target can't be changed. </p>
   */
  inline const Aws::Vector<Aws::String>& GetReferences() const { return m_references; }
  template <typename ReferencesT = Aws::Vector<Aws::String>>
  void SetReferences(ReferencesT&& value) {
    m_referencesHasBeenSet = true;
    m_references = std::forward<ReferencesT>(value);
  }
  template <typename ReferencesT = Aws::Vector<Aws::String>>
  CreateFunctionResult& WithReferences(ReferencesT&& value) {
    SetReferences(std::forward<ReferencesT>(value));
    return *this;
  }
  template <typename ReferencesT = Aws::String>
  CreateFunctionResult& AddReferences(ReferencesT&& value) {
    m_referencesHasBeenSet = true;
    m_references.emplace_back(std::forward<ReferencesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The kinds of media context that this function uses. Elemental Inference
   * derives this field from the media paths that the request expression references;
   * you can't set it. An empty list means that the expression references no media,
   * so Elemental Inference supplies none at run time. </p>
   */
  inline const Aws::Vector<ContextType>& GetContextTypes() const { return m_contextTypes; }
  template <typename ContextTypesT = Aws::Vector<ContextType>>
  void SetContextTypes(ContextTypesT&& value) {
    m_contextTypesHasBeenSet = true;
    m_contextTypes = std::forward<ContextTypesT>(value);
  }
  template <typename ContextTypesT = Aws::Vector<ContextType>>
  CreateFunctionResult& WithContextTypes(ContextTypesT&& value) {
    SetContextTypes(std::forward<ContextTypesT>(value));
    return *this;
  }
  inline CreateFunctionResult& AddContextTypes(ContextType value) {
    m_contextTypesHasBeenSet = true;
    m_contextTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the function.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateFunctionResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateFunctionResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreateFunctionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_name;

  FunctionTarget m_target;

  Aws::String m_requestExpression;

  Aws::String m_responseExpression;

  Aws::String m_description;

  EventBridgeDeliveryMode m_eventBridgeDelivery{EventBridgeDeliveryMode::NOT_SET};

  Aws::String m_arn;

  Aws::String m_id;

  FunctionStatus m_status{FunctionStatus::NOT_SET};

  Aws::Vector<Aws::String> m_references;

  Aws::Vector<ContextType> m_contextTypes;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nameHasBeenSet = false;
  bool m_targetHasBeenSet = false;
  bool m_requestExpressionHasBeenSet = false;
  bool m_responseExpressionHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_eventBridgeDeliveryHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_referencesHasBeenSet = false;
  bool m_contextTypesHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
