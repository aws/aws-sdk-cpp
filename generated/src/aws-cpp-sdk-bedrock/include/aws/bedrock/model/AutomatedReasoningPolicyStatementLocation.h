/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Describes the location of a statement within a source document using line
 * numbers.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyStatementLocation">AWS
 * API Reference</a></p>
 */
class AutomatedReasoningPolicyStatementLocation {
 public:
  AWS_BEDROCK_API AutomatedReasoningPolicyStatementLocation() = default;
  AWS_BEDROCK_API AutomatedReasoningPolicyStatementLocation(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API AutomatedReasoningPolicyStatementLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The line numbers in the source document where this statement appears.</p>
   */
  inline const Aws::Vector<int>& GetLines() const { return m_lines; }
  inline bool LinesHasBeenSet() const { return m_linesHasBeenSet; }
  template <typename LinesT = Aws::Vector<int>>
  void SetLines(LinesT&& value) {
    m_linesHasBeenSet = true;
    m_lines = std::forward<LinesT>(value);
  }
  template <typename LinesT = Aws::Vector<int>>
  AutomatedReasoningPolicyStatementLocation& WithLines(LinesT&& value) {
    SetLines(std::forward<LinesT>(value));
    return *this;
  }
  inline AutomatedReasoningPolicyStatementLocation& AddLines(int value) {
    m_linesHasBeenSet = true;
    m_lines.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<int> m_lines;
  bool m_linesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
