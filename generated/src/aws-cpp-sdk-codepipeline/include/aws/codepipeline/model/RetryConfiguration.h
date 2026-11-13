/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/StageRetryMode.h>
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
 * <p>The retry configuration specifies automatic retry for a failed stage, along
 * with the configured retry mode.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RetryConfiguration">AWS
 * API Reference</a></p>
 */
class RetryConfiguration {
 public:
  AWS_CODEPIPELINE_API RetryConfiguration() = default;
  AWS_CODEPIPELINE_API RetryConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEPIPELINE_API RetryConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEPIPELINE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The method that you want to configure for automatic stage retry on stage
   * failure. You can specify to retry only failed action in the stage or all actions
   * in the stage.</p>
   */
  inline StageRetryMode GetRetryMode() const { return m_retryMode; }
  inline bool RetryModeHasBeenSet() const { return m_retryModeHasBeenSet; }
  inline void SetRetryMode(StageRetryMode value) {
    m_retryModeHasBeenSet = true;
    m_retryMode = value;
  }
  inline RetryConfiguration& WithRetryMode(StageRetryMode value) {
    SetRetryMode(value);
    return *this;
  }
  ///@}
 private:
  StageRetryMode m_retryMode{StageRetryMode::NOT_SET};
  bool m_retryModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodePipeline
}  // namespace Aws
