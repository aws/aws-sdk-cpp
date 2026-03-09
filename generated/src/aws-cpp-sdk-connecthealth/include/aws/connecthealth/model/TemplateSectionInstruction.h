/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Instructions for generating a specific section of a clinical
 * note</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/TemplateSectionInstruction">AWS
 * API Reference</a></p>
 */
class TemplateSectionInstruction {
 public:
  AWS_CONNECTHEALTH_API TemplateSectionInstruction() = default;
  AWS_CONNECTHEALTH_API TemplateSectionInstruction(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API TemplateSectionInstruction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The header for this section of the template</p>
   */
  inline const Aws::String& GetSectionHeader() const { return m_sectionHeader; }
  inline bool SectionHeaderHasBeenSet() const { return m_sectionHeaderHasBeenSet; }
  template <typename SectionHeaderT = Aws::String>
  void SetSectionHeader(SectionHeaderT&& value) {
    m_sectionHeaderHasBeenSet = true;
    m_sectionHeader = std::forward<SectionHeaderT>(value);
  }
  template <typename SectionHeaderT = Aws::String>
  TemplateSectionInstruction& WithSectionHeader(SectionHeaderT&& value) {
    SetSectionHeader(std::forward<SectionHeaderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instruction for generating this section</p>
   */
  inline const Aws::String& GetSectionInstruction() const { return m_sectionInstruction; }
  inline bool SectionInstructionHasBeenSet() const { return m_sectionInstructionHasBeenSet; }
  template <typename SectionInstructionT = Aws::String>
  void SetSectionInstruction(SectionInstructionT&& value) {
    m_sectionInstructionHasBeenSet = true;
    m_sectionInstruction = std::forward<SectionInstructionT>(value);
  }
  template <typename SectionInstructionT = Aws::String>
  TemplateSectionInstruction& WithSectionInstruction(SectionInstructionT&& value) {
    SetSectionInstruction(std::forward<SectionInstructionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sectionHeader;

  Aws::String m_sectionInstruction;
  bool m_sectionHeaderHasBeenSet = false;
  bool m_sectionInstructionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
