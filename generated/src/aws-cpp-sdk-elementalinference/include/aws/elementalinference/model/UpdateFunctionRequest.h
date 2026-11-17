/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
class UpdateFunctionRequest : public ElementalInferenceRequest {
 public:
  AWS_ELEMENTALINFERENCE_API UpdateFunctionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateFunction"; }

  AWS_ELEMENTALINFERENCE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the function.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  UpdateFunctionRequest& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new name for the function. You can't change the name while the function is
   * referenced by a feed. </p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateFunctionRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new target for the function. You can't change the target while the function
   * is referenced by a feed. </p>
   */
  inline const FunctionTarget& GetTarget() const { return m_target; }
  inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
  template <typename TargetT = FunctionTarget>
  void SetTarget(TargetT&& value) {
    m_targetHasBeenSet = true;
    m_target = std::forward<TargetT>(value);
  }
  template <typename TargetT = FunctionTarget>
  UpdateFunctionRequest& WithTarget(TargetT&& value) {
    SetTarget(std::forward<TargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new request expression for the function. Elemental Inference derives
   * contextTypes again from the new expression. While a feed references the
   * function, the new expression must reference the same media context as the
   * current one. </p>
   */
  inline const Aws::String& GetRequestExpression() const { return m_requestExpression; }
  inline bool RequestExpressionHasBeenSet() const { return m_requestExpressionHasBeenSet; }
  template <typename RequestExpressionT = Aws::String>
  void SetRequestExpression(RequestExpressionT&& value) {
    m_requestExpressionHasBeenSet = true;
    m_requestExpression = std::forward<RequestExpressionT>(value);
  }
  template <typename RequestExpressionT = Aws::String>
  UpdateFunctionRequest& WithRequestExpression(RequestExpressionT&& value) {
    SetRequestExpression(std::forward<RequestExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new response expression for the function. To remove the response
   * expression, specify an empty string. A function with a Bedrock target and
   * eventBridgeDelivery set to ENABLED must keep a response expression. </p>
   */
  inline const Aws::String& GetResponseExpression() const { return m_responseExpression; }
  inline bool ResponseExpressionHasBeenSet() const { return m_responseExpressionHasBeenSet; }
  template <typename ResponseExpressionT = Aws::String>
  void SetResponseExpression(ResponseExpressionT&& value) {
    m_responseExpressionHasBeenSet = true;
    m_responseExpression = std::forward<ResponseExpressionT>(value);
  }
  template <typename ResponseExpressionT = Aws::String>
  UpdateFunctionRequest& WithResponseExpression(ResponseExpressionT&& value) {
    SetResponseExpression(std::forward<ResponseExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new description for the function.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateFunctionRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether Elemental Inference also sends this function's marked
   * results to Amazon EventBridge, as described for CreateFunction. If you omit this
   * parameter, the current value is kept. While a feed references the function, you
   * can change this value to DISABLED, but not to ENABLED. </p>
   */
  inline EventBridgeDeliveryMode GetEventBridgeDelivery() const { return m_eventBridgeDelivery; }
  inline bool EventBridgeDeliveryHasBeenSet() const { return m_eventBridgeDeliveryHasBeenSet; }
  inline void SetEventBridgeDelivery(EventBridgeDeliveryMode value) {
    m_eventBridgeDeliveryHasBeenSet = true;
    m_eventBridgeDelivery = value;
  }
  inline UpdateFunctionRequest& WithEventBridgeDelivery(EventBridgeDeliveryMode value) {
    SetEventBridgeDelivery(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_name;

  FunctionTarget m_target;

  Aws::String m_requestExpression;

  Aws::String m_responseExpression;

  Aws::String m_description;

  EventBridgeDeliveryMode m_eventBridgeDelivery{EventBridgeDeliveryMode::NOT_SET};
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_targetHasBeenSet = false;
  bool m_requestExpressionHasBeenSet = false;
  bool m_responseExpressionHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_eventBridgeDeliveryHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
