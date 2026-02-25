/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyStatementLocation.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {

/**
 * <p>Represents a single, indivisible statement extracted from a source document.
 * Atomic statements are the fundamental units used to ground policy rules and
 * variables to their source material.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyAtomicStatement">AWS
 * API Reference</a></p>
 */
class AutomatedReasoningPolicyAtomicStatement {
 public:
  AWS_BEDROCK_API AutomatedReasoningPolicyAtomicStatement() = default;
  AWS_BEDROCK_API AutomatedReasoningPolicyAtomicStatement(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API AutomatedReasoningPolicyAtomicStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A unique identifier for this atomic statement within the fidelity report.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  AutomatedReasoningPolicyAtomicStatement& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actual text content of the atomic statement as extracted from the source
   * document.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  AutomatedReasoningPolicyAtomicStatement& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about where this statement appears in the source document,
   * including line numbers.</p>
   */
  inline const AutomatedReasoningPolicyStatementLocation& GetLocation() const { return m_location; }
  inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
  template <typename LocationT = AutomatedReasoningPolicyStatementLocation>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = AutomatedReasoningPolicyStatementLocation>
  AutomatedReasoningPolicyAtomicStatement& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_text;

  AutomatedReasoningPolicyStatementLocation m_location;
  bool m_idHasBeenSet = false;
  bool m_textHasBeenSet = false;
  bool m_locationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
