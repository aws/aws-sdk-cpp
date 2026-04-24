/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/MinimumThroughputBillingCommitmentInputStatus.h>

#include <utility>

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
 * <p>Represents the request parameters for configuring minimum throughput billing
 * commitment.</p>  <ul> <li> <p>Minimum throughput billing commitments
 * provide cost savings on on-demand data streams in exchange for committing to a
 * minimum level of throughput usage.</p> </li> <li> <p>Commitments have a minimum
 * duration of 24 hours that must be honored before they can be disabled.</p> </li>
 * <li> <p>If you attempt to disable a commitment before the minimum commitment
 * period ends, the commitment will be scheduled for automatic disable at the
 * earliest allowed end time.</p> </li> <li> <p>You can cancel a pending disable by
 * enabling the commitment again before the earliest allowed end time.</p> </li>
 * </ul> <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/MinimumThroughputBillingCommitmentInput">AWS
 * API Reference</a></p>
 */
class MinimumThroughputBillingCommitmentInput {
 public:
  AWS_KINESIS_API MinimumThroughputBillingCommitmentInput() = default;
  AWS_KINESIS_API MinimumThroughputBillingCommitmentInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API MinimumThroughputBillingCommitmentInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The desired status of the minimum throughput billing commitment.</p>
   */
  inline MinimumThroughputBillingCommitmentInputStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(MinimumThroughputBillingCommitmentInputStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline MinimumThroughputBillingCommitmentInput& WithStatus(MinimumThroughputBillingCommitmentInputStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  MinimumThroughputBillingCommitmentInputStatus m_status{MinimumThroughputBillingCommitmentInputStatus::NOT_SET};
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
