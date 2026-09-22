/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ModificationReservationUpdate.h>

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
 * <p>Describes the terms of a Capacity Reservation modification
 * quote.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModificationTerms">AWS
 * API Reference</a></p>
 */
class ModificationTerms {
 public:
  AWS_EC2_API ModificationTerms() = default;
  AWS_EC2_API ModificationTerms(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API ModificationTerms& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The changes that will be applied to the Capacity Reservation if you accept
   * the modification terms.</p>
   */
  inline const ModificationReservationUpdate& GetReservationUpdate() const { return m_reservationUpdate; }
  inline bool ReservationUpdateHasBeenSet() const { return m_reservationUpdateHasBeenSet; }
  template <typename ReservationUpdateT = ModificationReservationUpdate>
  void SetReservationUpdate(ReservationUpdateT&& value) {
    m_reservationUpdateHasBeenSet = true;
    m_reservationUpdate = std::forward<ReservationUpdateT>(value);
  }
  template <typename ReservationUpdateT = ModificationReservationUpdate>
  ModificationTerms& WithReservationUpdate(ReservationUpdateT&& value) {
    SetReservationUpdate(std::forward<ReservationUpdateT>(value));
    return *this;
  }
  ///@}
 private:
  ModificationReservationUpdate m_reservationUpdate;
  bool m_reservationUpdateHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
