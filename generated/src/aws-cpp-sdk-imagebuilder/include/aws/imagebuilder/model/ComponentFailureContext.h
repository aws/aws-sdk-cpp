/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace imagebuilder {
namespace Model {

/**
 * <p>Contains details about the component that caused the image creation process
 * to fail. The details identify the first step that failed when the component
 * ran.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ComponentFailureContext">AWS
 * API Reference</a></p>
 */
class ComponentFailureContext {
 public:
  AWS_IMAGEBUILDER_API ComponentFailureContext() = default;
  AWS_IMAGEBUILDER_API ComponentFailureContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API ComponentFailureContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the component build version that
   * failed.</p>
   */
  inline const Aws::String& GetComponentArn() const { return m_componentArn; }
  inline bool ComponentArnHasBeenSet() const { return m_componentArnHasBeenSet; }
  template <typename ComponentArnT = Aws::String>
  void SetComponentArn(ComponentArnT&& value) {
    m_componentArnHasBeenSet = true;
    m_componentArn = std::forward<ComponentArnT>(value);
  }
  template <typename ComponentArnT = Aws::String>
  ComponentFailureContext& WithComponentArn(ComponentArnT&& value) {
    SetComponentArn(std::forward<ComponentArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the phase in the component document where the failure occurred,
   * such as <code>build</code>, <code>validate</code>, or <code>test</code>.</p>
   */
  inline const Aws::String& GetPhaseName() const { return m_phaseName; }
  inline bool PhaseNameHasBeenSet() const { return m_phaseNameHasBeenSet; }
  template <typename PhaseNameT = Aws::String>
  void SetPhaseName(PhaseNameT&& value) {
    m_phaseNameHasBeenSet = true;
    m_phaseName = std::forward<PhaseNameT>(value);
  }
  template <typename PhaseNameT = Aws::String>
  ComponentFailureContext& WithPhaseName(PhaseNameT&& value) {
    SetPhaseName(std::forward<PhaseNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the step in the component document that failed.</p>
   */
  inline const Aws::String& GetStepName() const { return m_stepName; }
  inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }
  template <typename StepNameT = Aws::String>
  void SetStepName(StepNameT&& value) {
    m_stepNameHasBeenSet = true;
    m_stepName = std::forward<StepNameT>(value);
  }
  template <typename StepNameT = Aws::String>
  ComponentFailureContext& WithStepName(StepNameT&& value) {
    SetStepName(std::forward<StepNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action that the failed step runs, for example
   * <code>ExecuteBash</code>.</p>
   */
  inline const Aws::String& GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  template <typename ActionT = Aws::String>
  void SetAction(ActionT&& value) {
    m_actionHasBeenSet = true;
    m_action = std::forward<ActionT>(value);
  }
  template <typename ActionT = Aws::String>
  ComponentFailureContext& WithAction(ActionT&& value) {
    SetAction(std::forward<ActionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error message from the step that failed. Image Builder truncates messages
   * that are longer than 1024 characters. The component log in Amazon CloudWatch
   * Logs contains the full output.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  ComponentFailureContext& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_componentArn;

  Aws::String m_phaseName;

  Aws::String m_stepName;

  Aws::String m_action;

  Aws::String m_errorMessage;
  bool m_componentArnHasBeenSet = false;
  bool m_phaseNameHasBeenSet = false;
  bool m_stepNameHasBeenSet = false;
  bool m_actionHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
