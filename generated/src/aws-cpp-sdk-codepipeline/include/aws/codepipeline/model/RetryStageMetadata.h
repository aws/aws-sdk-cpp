/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/RetryTrigger.h>
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
 * <p>The details of a specific automatic retry on stage failure, including the
 * attempt number and trigger.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RetryStageMetadata">AWS
 * API Reference</a></p>
 */
class RetryStageMetadata {
 public:
  AWS_CODEPIPELINE_API RetryStageMetadata() = default;
  AWS_CODEPIPELINE_API RetryStageMetadata(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEPIPELINE_API RetryStageMetadata& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEPIPELINE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The number of attempts for a specific stage with automatic retry on stage
   * failure. One attempt is allowed for automatic stage retry on failure.</p>
   */
  inline int64_t GetAutoStageRetryAttempt() const { return m_autoStageRetryAttempt; }
  inline bool AutoStageRetryAttemptHasBeenSet() const { return m_autoStageRetryAttemptHasBeenSet; }
  inline void SetAutoStageRetryAttempt(int64_t value) {
    m_autoStageRetryAttemptHasBeenSet = true;
    m_autoStageRetryAttempt = value;
  }
  inline RetryStageMetadata& WithAutoStageRetryAttempt(int64_t value) {
    SetAutoStageRetryAttempt(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of attempts for a specific stage where manual retries have been
   * made upon stage failure.</p>
   */
  inline int64_t GetManualStageRetryAttempt() const { return m_manualStageRetryAttempt; }
  inline bool ManualStageRetryAttemptHasBeenSet() const { return m_manualStageRetryAttemptHasBeenSet; }
  inline void SetManualStageRetryAttempt(int64_t value) {
    m_manualStageRetryAttemptHasBeenSet = true;
    m_manualStageRetryAttempt = value;
  }
  inline RetryStageMetadata& WithManualStageRetryAttempt(int64_t value) {
    SetManualStageRetryAttempt(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest trigger for a specific stage where manual or automatic retries
   * have been made upon stage failure.</p>
   */
  inline RetryTrigger GetLatestRetryTrigger() const { return m_latestRetryTrigger; }
  inline bool LatestRetryTriggerHasBeenSet() const { return m_latestRetryTriggerHasBeenSet; }
  inline void SetLatestRetryTrigger(RetryTrigger value) {
    m_latestRetryTriggerHasBeenSet = true;
    m_latestRetryTrigger = value;
  }
  inline RetryStageMetadata& WithLatestRetryTrigger(RetryTrigger value) {
    SetLatestRetryTrigger(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_autoStageRetryAttempt{0};

  int64_t m_manualStageRetryAttempt{0};

  RetryTrigger m_latestRetryTrigger{RetryTrigger::NOT_SET};
  bool m_autoStageRetryAttemptHasBeenSet = false;
  bool m_manualStageRetryAttemptHasBeenSet = false;
  bool m_latestRetryTriggerHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodePipeline
}  // namespace Aws
