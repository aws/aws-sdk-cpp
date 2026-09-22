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
 * <p>Describes the configuration that a Capacity Reservation has at the time a
 * modification quote is generated.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModificationQuoteCurrentConfiguration">AWS
 * API Reference</a></p>
 */
class ModificationQuoteCurrentConfiguration {
 public:
  AWS_EC2_API ModificationQuoteCurrentConfiguration() = default;
  AWS_EC2_API ModificationQuoteCurrentConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API ModificationQuoteCurrentConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The number of instances in the Capacity Reservation.</p>
   */
  inline int GetInstanceCount() const { return m_instanceCount; }
  inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
  inline void SetInstanceCount(int value) {
    m_instanceCountHasBeenSet = true;
    m_instanceCount = value;
  }
  inline ModificationQuoteCurrentConfiguration& WithInstanceCount(int value) {
    SetInstanceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the Capacity Reservation.</p>
   */
  inline const Aws::String& GetReservationState() const { return m_reservationState; }
  inline bool ReservationStateHasBeenSet() const { return m_reservationStateHasBeenSet; }
  template <typename ReservationStateT = Aws::String>
  void SetReservationState(ReservationStateT&& value) {
    m_reservationStateHasBeenSet = true;
    m_reservationState = std::forward<ReservationStateT>(value);
  }
  template <typename ReservationStateT = Aws::String>
  ModificationQuoteCurrentConfiguration& WithReservationState(ReservationStateT&& value) {
    SetReservationState(std::forward<ReservationStateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start date that the Capacity Reservation has before the quoted
   * modification is applied.</p>
   */
  inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
  inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
  template <typename StartDateT = Aws::Utils::DateTime>
  void SetStartDate(StartDateT&& value) {
    m_startDateHasBeenSet = true;
    m_startDate = std::forward<StartDateT>(value);
  }
  template <typename StartDateT = Aws::Utils::DateTime>
  ModificationQuoteCurrentConfiguration& WithStartDate(StartDateT&& value) {
    SetStartDate(std::forward<StartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start date that the Capacity Reservation was originally requested with.
   * This value does not change when you push out the start date.</p>
   */
  inline const Aws::Utils::DateTime& GetOriginalStartDate() const { return m_originalStartDate; }
  inline bool OriginalStartDateHasBeenSet() const { return m_originalStartDateHasBeenSet; }
  template <typename OriginalStartDateT = Aws::Utils::DateTime>
  void SetOriginalStartDate(OriginalStartDateT&& value) {
    m_originalStartDateHasBeenSet = true;
    m_originalStartDate = std::forward<OriginalStartDateT>(value);
  }
  template <typename OriginalStartDateT = Aws::Utils::DateTime>
  ModificationQuoteCurrentConfiguration& WithOriginalStartDate(OriginalStartDateT&& value) {
    SetOriginalStartDate(std::forward<OriginalStartDateT>(value));
    return *this;
  }
  ///@}
 private:
  int m_instanceCount{0};

  Aws::String m_reservationState;

  Aws::Utils::DateTime m_startDate{};

  Aws::Utils::DateTime m_originalStartDate{};
  bool m_instanceCountHasBeenSet = false;
  bool m_reservationStateHasBeenSet = false;
  bool m_startDateHasBeenSet = false;
  bool m_originalStartDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
