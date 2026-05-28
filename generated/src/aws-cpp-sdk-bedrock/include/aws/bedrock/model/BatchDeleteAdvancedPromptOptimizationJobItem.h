/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AdvancedPromptOptimizationJobStatus.h>
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
 * <p>Contains information about a successfully deleted advanced prompt
 * optimization job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/BatchDeleteAdvancedPromptOptimizationJobItem">AWS
 * API Reference</a></p>
 */
class BatchDeleteAdvancedPromptOptimizationJobItem {
 public:
  AWS_BEDROCK_API BatchDeleteAdvancedPromptOptimizationJobItem() = default;
  AWS_BEDROCK_API BatchDeleteAdvancedPromptOptimizationJobItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API BatchDeleteAdvancedPromptOptimizationJobItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the deleted job.</p>
   */
  inline const Aws::String& GetJobIdentifier() const { return m_jobIdentifier; }
  inline bool JobIdentifierHasBeenSet() const { return m_jobIdentifierHasBeenSet; }
  template <typename JobIdentifierT = Aws::String>
  void SetJobIdentifier(JobIdentifierT&& value) {
    m_jobIdentifierHasBeenSet = true;
    m_jobIdentifier = std::forward<JobIdentifierT>(value);
  }
  template <typename JobIdentifierT = Aws::String>
  BatchDeleteAdvancedPromptOptimizationJobItem& WithJobIdentifier(JobIdentifierT&& value) {
    SetJobIdentifier(std::forward<JobIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the deleted job.</p>
   */
  inline AdvancedPromptOptimizationJobStatus GetJobStatus() const { return m_jobStatus; }
  inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
  inline void SetJobStatus(AdvancedPromptOptimizationJobStatus value) {
    m_jobStatusHasBeenSet = true;
    m_jobStatus = value;
  }
  inline BatchDeleteAdvancedPromptOptimizationJobItem& WithJobStatus(AdvancedPromptOptimizationJobStatus value) {
    SetJobStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobIdentifier;

  AdvancedPromptOptimizationJobStatus m_jobStatus{AdvancedPromptOptimizationJobStatus::NOT_SET};
  bool m_jobIdentifierHasBeenSet = false;
  bool m_jobStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
