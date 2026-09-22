/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Describes the configuration that a Capacity Reservation will have after a
 * pending adjustment is applied.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityReservationAdjustmentDetails">AWS
 * API Reference</a></p>
 */
class CapacityReservationAdjustmentDetails {
 public:
  AWS_EC2_API CapacityReservationAdjustmentDetails() = default;
  AWS_EC2_API CapacityReservationAdjustmentDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API CapacityReservationAdjustmentDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The start date that the Capacity Reservation will have after the
   * adjustment.</p>
   */
  inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
  inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
  template <typename StartDateT = Aws::Utils::DateTime>
  void SetStartDate(StartDateT&& value) {
    m_startDateHasBeenSet = true;
    m_startDate = std::forward<StartDateT>(value);
  }
  template <typename StartDateT = Aws::Utils::DateTime>
  CapacityReservationAdjustmentDetails& WithStartDate(StartDateT&& value) {
    SetStartDate(std::forward<StartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end date that the Capacity Reservation will have after the
   * adjustment.</p>
   */
  inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
  inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
  template <typename EndDateT = Aws::Utils::DateTime>
  void SetEndDate(EndDateT&& value) {
    m_endDateHasBeenSet = true;
    m_endDate = std::forward<EndDateT>(value);
  }
  template <typename EndDateT = Aws::Utils::DateTime>
  CapacityReservationAdjustmentDetails& WithEndDate(EndDateT&& value) {
    SetEndDate(std::forward<EndDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time at which the commitment duration will expire after the
   * adjustment.</p>
   */
  inline const Aws::Utils::DateTime& GetCommitmentEndDate() const { return m_commitmentEndDate; }
  inline bool CommitmentEndDateHasBeenSet() const { return m_commitmentEndDateHasBeenSet; }
  template <typename CommitmentEndDateT = Aws::Utils::DateTime>
  void SetCommitmentEndDate(CommitmentEndDateT&& value) {
    m_commitmentEndDateHasBeenSet = true;
    m_commitmentEndDate = std::forward<CommitmentEndDateT>(value);
  }
  template <typename CommitmentEndDateT = Aws::Utils::DateTime>
  CapacityReservationAdjustmentDetails& WithCommitmentEndDate(CommitmentEndDateT&& value) {
    SetCommitmentEndDate(std::forward<CommitmentEndDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates the way in which the Capacity Reservation will end after the
   * adjustment. Possible values are:</p> <ul> <li> <p> <code>unlimited</code> - The
   * Capacity Reservation remains active until you explicitly cancel it.</p> </li>
   * <li> <p> <code>limited</code> - The Capacity Reservation expires automatically
   * at the date and time given by <code>endDate</code>.</p> </li> </ul>
   */
  inline const Aws::String& GetEndDateType() const { return m_endDateType; }
  inline bool EndDateTypeHasBeenSet() const { return m_endDateTypeHasBeenSet; }
  template <typename EndDateTypeT = Aws::String>
  void SetEndDateType(EndDateTypeT&& value) {
    m_endDateTypeHasBeenSet = true;
    m_endDateType = std::forward<EndDateTypeT>(value);
  }
  template <typename EndDateTypeT = Aws::String>
  CapacityReservationAdjustmentDetails& WithEndDateType(EndDateTypeT&& value) {
    SetEndDateType(std::forward<EndDateTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The commitment duration, in seconds, that the Capacity Reservation will have
   * after the adjustment.</p>
   */
  inline long long GetCommitmentDuration() const { return m_commitmentDuration; }
  inline bool CommitmentDurationHasBeenSet() const { return m_commitmentDurationHasBeenSet; }
  inline void SetCommitmentDuration(long long value) {
    m_commitmentDurationHasBeenSet = true;
    m_commitmentDuration = value;
  }
  inline CapacityReservationAdjustmentDetails& WithCommitmentDuration(long long value) {
    SetCommitmentDuration(value);
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_startDate{};

  Aws::Utils::DateTime m_endDate{};

  Aws::Utils::DateTime m_commitmentEndDate{};

  Aws::String m_endDateType;

  long long m_commitmentDuration{0};
  bool m_startDateHasBeenSet = false;
  bool m_endDateHasBeenSet = false;
  bool m_commitmentEndDateHasBeenSet = false;
  bool m_endDateTypeHasBeenSet = false;
  bool m_commitmentDurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
