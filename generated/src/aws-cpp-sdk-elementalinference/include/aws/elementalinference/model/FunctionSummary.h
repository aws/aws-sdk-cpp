/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/ContextType.h>
#include <aws/elementalinference/model/FunctionStatus.h>
#include <aws/elementalinference/model/FunctionTarget.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>Contains identifying and configuration details for a function, including its
 * name, target, status, and derived media context.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/FunctionSummary">AWS
 * API Reference</a></p>
 */
class FunctionSummary {
 public:
  AWS_ELEMENTALINFERENCE_API FunctionSummary() = default;
  AWS_ELEMENTALINFERENCE_API FunctionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API FunctionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the function.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  FunctionSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

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
  FunctionSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the function.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  FunctionSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the function.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  FunctionSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the function.</p>
   */
  inline FunctionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(FunctionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline FunctionSummary& WithStatus(FunctionStatus value) {
    SetStatus(value);
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
  FunctionSummary& WithTarget(TargetT&& value) {
    SetTarget(std::forward<TargetT>(value));
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
  inline bool ContextTypesHasBeenSet() const { return m_contextTypesHasBeenSet; }
  template <typename ContextTypesT = Aws::Vector<ContextType>>
  void SetContextTypes(ContextTypesT&& value) {
    m_contextTypesHasBeenSet = true;
    m_contextTypes = std::forward<ContextTypesT>(value);
  }
  template <typename ContextTypesT = Aws::Vector<ContextType>>
  FunctionSummary& WithContextTypes(ContextTypesT&& value) {
    SetContextTypes(std::forward<ContextTypesT>(value));
    return *this;
  }
  inline FunctionSummary& AddContextTypes(ContextType value) {
    m_contextTypesHasBeenSet = true;
    m_contextTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_id;

  Aws::String m_name;

  Aws::String m_description;

  FunctionStatus m_status{FunctionStatus::NOT_SET};

  FunctionTarget m_target;

  Aws::Vector<ContextType> m_contextTypes;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_targetHasBeenSet = false;
  bool m_contextTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
