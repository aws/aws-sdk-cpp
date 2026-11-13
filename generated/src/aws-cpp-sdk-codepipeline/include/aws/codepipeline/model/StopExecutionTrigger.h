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
 * <p>The interaction that stopped a pipeline execution.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/StopExecutionTrigger">AWS
 * API Reference</a></p>
 */
class StopExecutionTrigger {
 public:
  AWS_CODEPIPELINE_API StopExecutionTrigger() = default;
  AWS_CODEPIPELINE_API StopExecutionTrigger(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEPIPELINE_API StopExecutionTrigger& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEPIPELINE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The user-specified reason the pipeline was stopped.</p>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  StopExecutionTrigger& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_reason;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodePipeline
}  // namespace Aws
