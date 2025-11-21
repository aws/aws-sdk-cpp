/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>
#include <aws/bedrock-data-automation-runtime/model/CustomOutputStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockDataAutomationRuntime {
namespace Model {

/**
 * <p>Results for an output segment</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-runtime-2024-06-13/OutputSegment">AWS
 * API Reference</a></p>
 */
class OutputSegment {
 public:
  AWS_BEDROCKDATAAUTOMATIONRUNTIME_API OutputSegment() = default;
  AWS_BEDROCKDATAAUTOMATIONRUNTIME_API OutputSegment(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATIONRUNTIME_API OutputSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Status of blueprint match</p>
   */
  inline CustomOutputStatus GetCustomOutputStatus() const { return m_customOutputStatus; }
  inline bool CustomOutputStatusHasBeenSet() const { return m_customOutputStatusHasBeenSet; }
  inline void SetCustomOutputStatus(CustomOutputStatus value) {
    m_customOutputStatusHasBeenSet = true;
    m_customOutputStatus = value;
  }
  inline OutputSegment& WithCustomOutputStatus(CustomOutputStatus value) {
    SetCustomOutputStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Custom output response</p>
   */
  inline const Aws::String& GetCustomOutput() const { return m_customOutput; }
  inline bool CustomOutputHasBeenSet() const { return m_customOutputHasBeenSet; }
  template <typename CustomOutputT = Aws::String>
  void SetCustomOutput(CustomOutputT&& value) {
    m_customOutputHasBeenSet = true;
    m_customOutput = std::forward<CustomOutputT>(value);
  }
  template <typename CustomOutputT = Aws::String>
  OutputSegment& WithCustomOutput(CustomOutputT&& value) {
    SetCustomOutput(std::forward<CustomOutputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Standard output response</p>
   */
  inline const Aws::String& GetStandardOutput() const { return m_standardOutput; }
  inline bool StandardOutputHasBeenSet() const { return m_standardOutputHasBeenSet; }
  template <typename StandardOutputT = Aws::String>
  void SetStandardOutput(StandardOutputT&& value) {
    m_standardOutputHasBeenSet = true;
    m_standardOutput = std::forward<StandardOutputT>(value);
  }
  template <typename StandardOutputT = Aws::String>
  OutputSegment& WithStandardOutput(StandardOutputT&& value) {
    SetStandardOutput(std::forward<StandardOutputT>(value));
    return *this;
  }
  ///@}
 private:
  CustomOutputStatus m_customOutputStatus{CustomOutputStatus::NOT_SET};
  bool m_customOutputStatusHasBeenSet = false;

  Aws::String m_customOutput;
  bool m_customOutputHasBeenSet = false;

  Aws::String m_standardOutput;
  bool m_standardOutputHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomationRuntime
}  // namespace Aws
