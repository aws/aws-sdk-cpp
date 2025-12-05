/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/MinimumThroughputBillingCommitmentOutputStatus.h>

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
 * <p>Represents the current status of minimum throughput billing commitment for an
 * account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/MinimumThroughputBillingCommitmentOutput">AWS
 * API Reference</a></p>
 */
class MinimumThroughputBillingCommitmentOutput {
 public:
  AWS_KINESIS_API MinimumThroughputBillingCommitmentOutput() = default;
  AWS_KINESIS_API MinimumThroughputBillingCommitmentOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API MinimumThroughputBillingCommitmentOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current status of the minimum throughput billing commitment.</p>
   */
  inline MinimumThroughputBillingCommitmentOutputStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(MinimumThroughputBillingCommitmentOutputStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline MinimumThroughputBillingCommitmentOutput& WithStatus(MinimumThroughputBillingCommitmentOutputStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the commitment was started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  MinimumThroughputBillingCommitmentOutput& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the commitment was ended.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  MinimumThroughputBillingCommitmentOutput& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The earliest timestamp when the commitment can be ended.</p>
   */
  inline const Aws::Utils::DateTime& GetEarliestAllowedEndAt() const { return m_earliestAllowedEndAt; }
  inline bool EarliestAllowedEndAtHasBeenSet() const { return m_earliestAllowedEndAtHasBeenSet; }
  template <typename EarliestAllowedEndAtT = Aws::Utils::DateTime>
  void SetEarliestAllowedEndAt(EarliestAllowedEndAtT&& value) {
    m_earliestAllowedEndAtHasBeenSet = true;
    m_earliestAllowedEndAt = std::forward<EarliestAllowedEndAtT>(value);
  }
  template <typename EarliestAllowedEndAtT = Aws::Utils::DateTime>
  MinimumThroughputBillingCommitmentOutput& WithEarliestAllowedEndAt(EarliestAllowedEndAtT&& value) {
    SetEarliestAllowedEndAt(std::forward<EarliestAllowedEndAtT>(value));
    return *this;
  }
  ///@}
 private:
  MinimumThroughputBillingCommitmentOutputStatus m_status{MinimumThroughputBillingCommitmentOutputStatus::NOT_SET};

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_endedAt{};

  Aws::Utils::DateTime m_earliestAllowedEndAt{};
  bool m_statusHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_earliestAllowedEndAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
