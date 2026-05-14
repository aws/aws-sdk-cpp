/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/BedrockRequest.h>
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Bedrock {
namespace Model {

/**
 * <p>Batch Delete Advanced Prompt Optimization Jobs Request</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/BatchDeleteAdvancedPromptOptimizationJobRequest">AWS
 * API Reference</a></p>
 */
class BatchDeleteAdvancedPromptOptimizationJobRequest : public BedrockRequest {
 public:
  AWS_BEDROCK_API BatchDeleteAdvancedPromptOptimizationJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteAdvancedPromptOptimizationJob"; }

  AWS_BEDROCK_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>List of advanced prompt optimization job identifiers to delete.</p>
   */
  inline const Aws::Vector<Aws::String>& GetJobIdentifiers() const { return m_jobIdentifiers; }
  inline bool JobIdentifiersHasBeenSet() const { return m_jobIdentifiersHasBeenSet; }
  template <typename JobIdentifiersT = Aws::Vector<Aws::String>>
  void SetJobIdentifiers(JobIdentifiersT&& value) {
    m_jobIdentifiersHasBeenSet = true;
    m_jobIdentifiers = std::forward<JobIdentifiersT>(value);
  }
  template <typename JobIdentifiersT = Aws::Vector<Aws::String>>
  BatchDeleteAdvancedPromptOptimizationJobRequest& WithJobIdentifiers(JobIdentifiersT&& value) {
    SetJobIdentifiers(std::forward<JobIdentifiersT>(value));
    return *this;
  }
  template <typename JobIdentifiersT = Aws::String>
  BatchDeleteAdvancedPromptOptimizationJobRequest& AddJobIdentifiers(JobIdentifiersT&& value) {
    m_jobIdentifiersHasBeenSet = true;
    m_jobIdentifiers.emplace_back(std::forward<JobIdentifiersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_jobIdentifiers;
  bool m_jobIdentifiersHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
