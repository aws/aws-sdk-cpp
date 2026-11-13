/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/SucceededInStageFilter.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CodePipeline {
namespace Model {

/**
 * <p>The pipeline execution to filter on.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PipelineExecutionFilter">AWS
 * API Reference</a></p>
 */
class PipelineExecutionFilter {
 public:
  AWS_CODEPIPELINE_API PipelineExecutionFilter() = default;
  AWS_CODEPIPELINE_API PipelineExecutionFilter(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEPIPELINE_API PipelineExecutionFilter& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEPIPELINE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Filter for pipeline executions where the stage was successful in the current
   * pipeline version.</p>
   */
  inline const SucceededInStageFilter& GetSucceededInStage() const { return m_succeededInStage; }
  inline bool SucceededInStageHasBeenSet() const { return m_succeededInStageHasBeenSet; }
  template <typename SucceededInStageT = SucceededInStageFilter>
  void SetSucceededInStage(SucceededInStageT&& value) {
    m_succeededInStageHasBeenSet = true;
    m_succeededInStage = std::forward<SucceededInStageT>(value);
  }
  template <typename SucceededInStageT = SucceededInStageFilter>
  PipelineExecutionFilter& WithSucceededInStage(SucceededInStageT&& value) {
    SetSucceededInStage(std::forward<SucceededInStageT>(value));
    return *this;
  }
  ///@}
 private:
  SucceededInStageFilter m_succeededInStage;
  bool m_succeededInStageHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodePipeline
}  // namespace Aws
