/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/CustomTemplateBase.h>
#include <aws/connecthealth/model/TemplateSectionInstruction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {

/**
 * <p>Configuration for using a custom note template with specific
 * instructions</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/CustomTemplate">AWS
 * API Reference</a></p>
 */
class CustomTemplate {
 public:
  AWS_CONNECTHEALTH_API CustomTemplate() = default;
  AWS_CONNECTHEALTH_API CustomTemplate(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API CustomTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The base template type to customize</p>
   */
  inline CustomTemplateBase GetTemplateType() const { return m_templateType; }
  inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
  inline void SetTemplateType(CustomTemplateBase value) {
    m_templateTypeHasBeenSet = true;
    m_templateType = value;
  }
  inline CustomTemplate& WithTemplateType(CustomTemplateBase value) {
    SetTemplateType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Custom instructions for each section of the template</p>
   */
  inline const Aws::Vector<TemplateSectionInstruction>& GetTemplateInstructions() const { return m_templateInstructions; }
  inline bool TemplateInstructionsHasBeenSet() const { return m_templateInstructionsHasBeenSet; }
  template <typename TemplateInstructionsT = Aws::Vector<TemplateSectionInstruction>>
  void SetTemplateInstructions(TemplateInstructionsT&& value) {
    m_templateInstructionsHasBeenSet = true;
    m_templateInstructions = std::forward<TemplateInstructionsT>(value);
  }
  template <typename TemplateInstructionsT = Aws::Vector<TemplateSectionInstruction>>
  CustomTemplate& WithTemplateInstructions(TemplateInstructionsT&& value) {
    SetTemplateInstructions(std::forward<TemplateInstructionsT>(value));
    return *this;
  }
  template <typename TemplateInstructionsT = TemplateSectionInstruction>
  CustomTemplate& AddTemplateInstructions(TemplateInstructionsT&& value) {
    m_templateInstructionsHasBeenSet = true;
    m_templateInstructions.emplace_back(std::forward<TemplateInstructionsT>(value));
    return *this;
  }
  ///@}
 private:
  CustomTemplateBase m_templateType{CustomTemplateBase::NOT_SET};

  Aws::Vector<TemplateSectionInstruction> m_templateInstructions;
  bool m_templateTypeHasBeenSet = false;
  bool m_templateInstructionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
