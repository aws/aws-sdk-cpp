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
 * <p>Describes the changes that a Capacity Reservation modification quote will
 * apply to a Capacity Reservation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModificationReservationUpdate">AWS
 * API Reference</a></p>
 */
class ModificationReservationUpdate {
 public:
  AWS_EC2_API ModificationReservationUpdate() = default;
  AWS_EC2_API ModificationReservationUpdate(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API ModificationReservationUpdate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The date and time at which the commitment duration will expire after the
   * modification, in the ISO8601 format in the UTC time zone
   * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
   */
  inline const Aws::Utils::DateTime& GetNewCommitmentEndDate() const { return m_newCommitmentEndDate; }
  inline bool NewCommitmentEndDateHasBeenSet() const { return m_newCommitmentEndDateHasBeenSet; }
  template <typename NewCommitmentEndDateT = Aws::Utils::DateTime>
  void SetNewCommitmentEndDate(NewCommitmentEndDateT&& value) {
    m_newCommitmentEndDateHasBeenSet = true;
    m_newCommitmentEndDate = std::forward<NewCommitmentEndDateT>(value);
  }
  template <typename NewCommitmentEndDateT = Aws::Utils::DateTime>
  ModificationReservationUpdate& WithNewCommitmentEndDate(NewCommitmentEndDateT&& value) {
    SetNewCommitmentEndDate(std::forward<NewCommitmentEndDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start date that the Capacity Reservation will have after the
   * modification, in the ISO8601 format in the UTC time zone
   * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
   */
  inline const Aws::Utils::DateTime& GetNewStartDate() const { return m_newStartDate; }
  inline bool NewStartDateHasBeenSet() const { return m_newStartDateHasBeenSet; }
  template <typename NewStartDateT = Aws::Utils::DateTime>
  void SetNewStartDate(NewStartDateT&& value) {
    m_newStartDateHasBeenSet = true;
    m_newStartDate = std::forward<NewStartDateT>(value);
  }
  template <typename NewStartDateT = Aws::Utils::DateTime>
  ModificationReservationUpdate& WithNewStartDate(NewStartDateT&& value) {
    SetNewStartDate(std::forward<NewStartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The commitment duration, in seconds, that the Capacity Reservation will have
   * after the modification.</p>
   */
  inline int GetNewCommitmentDuration() const { return m_newCommitmentDuration; }
  inline bool NewCommitmentDurationHasBeenSet() const { return m_newCommitmentDurationHasBeenSet; }
  inline void SetNewCommitmentDuration(int value) {
    m_newCommitmentDurationHasBeenSet = true;
    m_newCommitmentDuration = value;
  }
  inline ModificationReservationUpdate& WithNewCommitmentDuration(int value) {
    SetNewCommitmentDuration(value);
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_newCommitmentEndDate{};

  Aws::Utils::DateTime m_newStartDate{};

  int m_newCommitmentDuration{0};
  bool m_newCommitmentEndDateHasBeenSet = false;
  bool m_newStartDateHasBeenSet = false;
  bool m_newCommitmentDurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
