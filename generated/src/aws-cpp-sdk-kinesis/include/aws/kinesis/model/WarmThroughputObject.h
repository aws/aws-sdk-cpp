/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kinesis {
namespace Model {

/**
 * <p>Represents the warm throughput configuration on the stream. This is only
 * present for On-Demand Kinesis Data Streams in accounts that have
 * <code>MinimumThroughputBillingCommitment</code> enabled.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/WarmThroughputObject">AWS
 * API Reference</a></p>
 */
class WarmThroughputObject {
 public:
  AWS_KINESIS_API WarmThroughputObject() = default;
  AWS_KINESIS_API WarmThroughputObject(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API WarmThroughputObject& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The target warm throughput value on the stream. This indicates that the
   * stream is currently scaling towards this target value.</p>
   */
  inline int GetTargetMiBps() const { return m_targetMiBps; }
  inline bool TargetMiBpsHasBeenSet() const { return m_targetMiBpsHasBeenSet; }
  inline void SetTargetMiBps(int value) {
    m_targetMiBpsHasBeenSet = true;
    m_targetMiBps = value;
  }
  inline WarmThroughputObject& WithTargetMiBps(int value) {
    SetTargetMiBps(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current warm throughput value on the stream. This is the write throughput
   * in MiBps that the stream is currently scaled to handle.</p>
   */
  inline int GetCurrentMiBps() const { return m_currentMiBps; }
  inline bool CurrentMiBpsHasBeenSet() const { return m_currentMiBpsHasBeenSet; }
  inline void SetCurrentMiBps(int value) {
    m_currentMiBpsHasBeenSet = true;
    m_currentMiBps = value;
  }
  inline WarmThroughputObject& WithCurrentMiBps(int value) {
    SetCurrentMiBps(value);
    return *this;
  }
  ///@}
 private:
  int m_targetMiBps{0};

  int m_currentMiBps{0};
  bool m_targetMiBpsHasBeenSet = false;
  bool m_currentMiBpsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
