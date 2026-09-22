/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Information about your commitment for a future-dated Capacity
 * Reservation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityReservationCommitmentInfo">AWS
 * API Reference</a></p>
 */
class CapacityReservationCommitmentInfo {
 public:
  AWS_EC2_API CapacityReservationCommitmentInfo() = default;
  AWS_EC2_API CapacityReservationCommitmentInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API CapacityReservationCommitmentInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The instance capacity that you committed to when you requested the
   * future-dated Capacity Reservation.</p>
   */
  inline int GetCommittedInstanceCount() const { return m_committedInstanceCount; }
  inline bool CommittedInstanceCountHasBeenSet() const { return m_committedInstanceCountHasBeenSet; }
  inline void SetCommittedInstanceCount(int value) {
    m_committedInstanceCountHasBeenSet = true;
    m_committedInstanceCount = value;
  }
  inline CapacityReservationCommitmentInfo& WithCommittedInstanceCount(int value) {
    SetCommittedInstanceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time at which the commitment duration expires, in the ISO8601
   * format in the UTC time zone (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>). You can't
   * decrease the instance count or cancel the Capacity Reservation before this date
   * and time.</p>
   */
  inline const Aws::Utils::DateTime& GetCommitmentEndDate() const { return m_commitmentEndDate; }
  inline bool CommitmentEndDateHasBeenSet() const { return m_commitmentEndDateHasBeenSet; }
  template <typename CommitmentEndDateT = Aws::Utils::DateTime>
  void SetCommitmentEndDate(CommitmentEndDateT&& value) {
    m_commitmentEndDateHasBeenSet = true;
    m_commitmentEndDate = std::forward<CommitmentEndDateT>(value);
  }
  template <typename CommitmentEndDateT = Aws::Utils::DateTime>
  CapacityReservationCommitmentInfo& WithCommitmentEndDate(CommitmentEndDateT&& value) {
    SetCommitmentEndDate(std::forward<CommitmentEndDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The commitment duration, in seconds, for the future-dated Capacity
   * Reservation. This is the minimum duration for which you commit to having the
   * Capacity Reservation in the <code>active</code> state in your account after it
   * has been delivered.</p>
   */
  inline long long GetCommitmentDuration() const { return m_commitmentDuration; }
  inline bool CommitmentDurationHasBeenSet() const { return m_commitmentDurationHasBeenSet; }
  inline void SetCommitmentDuration(long long value) {
    m_commitmentDurationHasBeenSet = true;
    m_commitmentDuration = value;
  }
  inline CapacityReservationCommitmentInfo& WithCommitmentDuration(long long value) {
    SetCommitmentDuration(value);
    return *this;
  }
  ///@}
 private:
  int m_committedInstanceCount{0};

  Aws::Utils::DateTime m_commitmentEndDate{};

  long long m_commitmentDuration{0};
  bool m_committedInstanceCountHasBeenSet = false;
  bool m_commitmentEndDateHasBeenSet = false;
  bool m_commitmentDurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
