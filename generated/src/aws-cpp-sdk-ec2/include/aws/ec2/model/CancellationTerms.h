/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ApplyCancellationCharges.h>

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
 * <p>Describes the cancellation terms for cancelling a future-dated Capacity
 * Reservation during its commitment duration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancellationTerms">AWS
 * API Reference</a></p>
 */
class CancellationTerms {
 public:
  AWS_EC2_API CancellationTerms() = default;
  AWS_EC2_API CancellationTerms(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API CancellationTerms& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The type of cancellation charge. Possible values include
   * <code>commitment-wind-down</code>.</p>
   */
  inline ApplyCancellationCharges GetCancellationType() const { return m_cancellationType; }
  inline bool CancellationTypeHasBeenSet() const { return m_cancellationTypeHasBeenSet; }
  inline void SetCancellationType(ApplyCancellationCharges value) {
    m_cancellationTypeHasBeenSet = true;
    m_cancellationType = value;
  }
  inline CancellationTerms& WithCancellationType(ApplyCancellationCharges value) {
    SetCancellationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state that the Capacity Reservation will transition to after
   * cancellation.</p>
   */
  inline const Aws::String& GetReservationState() const { return m_reservationState; }
  inline bool ReservationStateHasBeenSet() const { return m_reservationStateHasBeenSet; }
  template <typename ReservationStateT = Aws::String>
  void SetReservationState(ReservationStateT&& value) {
    m_reservationStateHasBeenSet = true;
    m_reservationState = std::forward<ReservationStateT>(value);
  }
  template <typename ReservationStateT = Aws::String>
  CancellationTerms& WithReservationState(ReservationStateT&& value) {
    SetReservationState(std::forward<ReservationStateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of instances under commitment after cancellation.</p>
   */
  inline int GetCommittedInstanceCount() const { return m_committedInstanceCount; }
  inline bool CommittedInstanceCountHasBeenSet() const { return m_committedInstanceCountHasBeenSet; }
  inline void SetCommittedInstanceCount(int value) {
    m_committedInstanceCountHasBeenSet = true;
    m_committedInstanceCount = value;
  }
  inline CancellationTerms& WithCommittedInstanceCount(int value) {
    SetCommittedInstanceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of hours for which cancellation charges will apply.</p>
   */
  inline long long GetChargeCommitmentDurationHours() const { return m_chargeCommitmentDurationHours; }
  inline bool ChargeCommitmentDurationHoursHasBeenSet() const { return m_chargeCommitmentDurationHoursHasBeenSet; }
  inline void SetChargeCommitmentDurationHours(long long value) {
    m_chargeCommitmentDurationHoursHasBeenSet = true;
    m_chargeCommitmentDurationHours = value;
  }
  inline CancellationTerms& WithChargeCommitmentDurationHours(long long value) {
    SetChargeCommitmentDurationHours(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time at which cancellation charges will stop.</p>
   */
  inline const Aws::Utils::DateTime& GetChargeEndDate() const { return m_chargeEndDate; }
  inline bool ChargeEndDateHasBeenSet() const { return m_chargeEndDateHasBeenSet; }
  template <typename ChargeEndDateT = Aws::Utils::DateTime>
  void SetChargeEndDate(ChargeEndDateT&& value) {
    m_chargeEndDateHasBeenSet = true;
    m_chargeEndDate = std::forward<ChargeEndDateT>(value);
  }
  template <typename ChargeEndDateT = Aws::Utils::DateTime>
  CancellationTerms& WithChargeEndDate(ChargeEndDateT&& value) {
    SetChargeEndDate(std::forward<ChargeEndDateT>(value));
    return *this;
  }
  ///@}
 private:
  ApplyCancellationCharges m_cancellationType{ApplyCancellationCharges::NOT_SET};

  Aws::String m_reservationState;

  int m_committedInstanceCount{0};

  long long m_chargeCommitmentDurationHours{0};

  Aws::Utils::DateTime m_chargeEndDate{};
  bool m_cancellationTypeHasBeenSet = false;
  bool m_reservationStateHasBeenSet = false;
  bool m_committedInstanceCountHasBeenSet = false;
  bool m_chargeCommitmentDurationHoursHasBeenSet = false;
  bool m_chargeEndDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
