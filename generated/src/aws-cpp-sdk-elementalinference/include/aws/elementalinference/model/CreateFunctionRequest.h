/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInferenceRequest.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/EventBridgeDeliveryMode.h>
#include <aws/elementalinference/model/FunctionTarget.h>

#include <utility>

namespace Aws {
namespace ElementalInference {
namespace Model {

/**
 */
class CreateFunctionRequest : public ElementalInferenceRequest {
 public:
  AWS_ELEMENTALINFERENCE_API CreateFunctionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateFunction"; }

  AWS_ELEMENTALINFERENCE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A name for this function.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateFunctionRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination for the request that the function builds.</p>
   */
  inline const FunctionTarget& GetTarget() const { return m_target; }
  inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
  template <typename TargetT = FunctionTarget>
  void SetTarget(TargetT&& value) {
    m_targetHasBeenSet = true;
    m_target = std::forward<TargetT>(value);
  }
  template <typename TargetT = FunctionTarget>
  CreateFunctionRequest& WithTarget(TargetT&& value) {
    SetTarget(std::forward<TargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSONata expression that builds the request. Elemental Inference evaluates
   * it against the media object of the feed, which holds the media and metadata that
   * the function asked for. Maximum length: 5,120 characters. </p> <p>When you save
   * the function, Elemental Inference evaluates the expression against sample media
   * and rejects it if the evaluation fails. For a Bedrock target, the result must be
   * a JSON object; Elemental Inference doesn't check that the object is a valid
   * request body for the model. The expression can reference at most one of
   * media.transcript, media.contextual, and media.clip. For a passthrough target, it
   * can't reference media.frames. </p>
   */
  inline const Aws::String& GetRequestExpression() const { return m_requestExpression; }
  inline bool RequestExpressionHasBeenSet() const { return m_requestExpressionHasBeenSet; }
  template <typename RequestExpressionT = Aws::String>
  void SetRequestExpression(RequestExpressionT&& value) {
    m_requestExpressionHasBeenSet = true;
    m_requestExpression = std::forward<RequestExpressionT>(value);
  }
  template <typename RequestExpressionT = Aws::String>
  CreateFunctionRequest& WithRequestExpression(RequestExpressionT&& value) {
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
   * result. Maximum length: 5,120 characters. </p> <p>When you save the function,
   * Elemental Inference checks that the expression is valid JSONata. For a
   * passthrough target, it also evaluates the request and response expressions
   * together against sample media, and rejects them if they produce no value. </p>
   */
  inline const Aws::String& GetResponseExpression() const { return m_responseExpression; }
  inline bool ResponseExpressionHasBeenSet() const { return m_responseExpressionHasBeenSet; }
  template <typename ResponseExpressionT = Aws::String>
  void SetResponseExpression(ResponseExpressionT&& value) {
    m_responseExpressionHasBeenSet = true;
    m_responseExpression = std::forward<ResponseExpressionT>(value);
  }
  template <typename ResponseExpressionT = Aws::String>
  CreateFunctionRequest& WithResponseExpression(ResponseExpressionT&& value) {
    SetResponseExpression(std::forward<ResponseExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the function. Maximum length: 1,024 characters.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateFunctionRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether Elemental Inference also sends this function's results to
   * Amazon EventBridge. Elemental Inference sends a result only when the result is a
   * JSON object with a top-level <code>eventBridge</code> field set to
   * <code>true</code>. It sends the result, unchanged, as a Function Metadata
   * Generated event to the default event bus in your account, after the result is
   * available from GetMetadata. If the result is larger than 64 KB, the event has
   * <code>resultOmitted</code> set to <code>true</code> in place of the result. </p>
   * <p>Valid values:</p> <ul> <li> <p>ENABLED – Elemental Inference sends each
   * marked result as an event.</p> </li> <li> <p>DISABLED (default) – Elemental
   * Inference doesn't send events.</p> </li> </ul> <p>For a Bedrock target, ENABLED
   * requires a response expression, because the model response itself never has a
   * top-level <code>eventBridge</code> field. A feed output that runs a function
   * with ENABLED can't use a fixedInterval trigger shorter than 4 seconds. </p>
   */
  inline EventBridgeDeliveryMode GetEventBridgeDelivery() const { return m_eventBridgeDelivery; }
  inline bool EventBridgeDeliveryHasBeenSet() const { return m_eventBridgeDeliveryHasBeenSet; }
  inline void SetEventBridgeDelivery(EventBridgeDeliveryMode value) {
    m_eventBridgeDeliveryHasBeenSet = true;
    m_eventBridgeDelivery = value;
  }
  inline CreateFunctionRequest& WithEventBridgeDelivery(EventBridgeDeliveryMode value) {
    SetEventBridgeDelivery(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to associate with this function.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateFunctionRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateFunctionRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  FunctionTarget m_target;

  Aws::String m_requestExpression;

  Aws::String m_responseExpression;

  Aws::String m_description;

  EventBridgeDeliveryMode m_eventBridgeDelivery{EventBridgeDeliveryMode::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_nameHasBeenSet = false;
  bool m_targetHasBeenSet = false;
  bool m_requestExpressionHasBeenSet = false;
  bool m_responseExpressionHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_eventBridgeDeliveryHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
