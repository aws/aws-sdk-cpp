/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Filter for pipeline executions that have successfully completed the stage in
 * the current pipeline version.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/SucceededInStageFilter">AWS
 * API Reference</a></p>
 */
class SucceededInStageFilter {
 public:
  AWS_CODEPIPELINE_API SucceededInStageFilter() = default;
  AWS_CODEPIPELINE_API SucceededInStageFilter(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEPIPELINE_API SucceededInStageFilter& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEPIPELINE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The name of the stage for filtering for pipeline executions where the stage
   * was successful in the current pipeline version.</p>
   */
  inline const Aws::String& GetStageName() const { return m_stageName; }
  inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
  template <typename StageNameT = Aws::String>
  void SetStageName(StageNameT&& value) {
    m_stageNameHasBeenSet = true;
    m_stageName = std::forward<StageNameT>(value);
  }
  template <typename StageNameT = Aws::String>
  SucceededInStageFilter& WithStageName(StageNameT&& value) {
    SetStageName(std::forward<StageNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_stageName;
  bool m_stageNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodePipeline
}  // namespace Aws
