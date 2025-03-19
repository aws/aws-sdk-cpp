/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ReservationValue.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>The total value of the Convertible Reserved Instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReservedInstanceReservationValue">AWS
   * API Reference</a></p>
   */
  class ReservedInstanceReservationValue
  {
  public:
    AWS_EC2_API ReservedInstanceReservationValue() = default;
    AWS_EC2_API ReservedInstanceReservationValue(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ReservedInstanceReservationValue& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The total value of the Convertible Reserved Instance that you are
     * exchanging.</p>
     */
    inline const ReservationValue& GetReservationValue() const { return m_reservationValue; }
    inline bool ReservationValueHasBeenSet() const { return m_reservationValueHasBeenSet; }
    template<typename ReservationValueT = ReservationValue>
    void SetReservationValue(ReservationValueT&& value) { m_reservationValueHasBeenSet = true; m_reservationValue = std::forward<ReservationValueT>(value); }
    template<typename ReservationValueT = ReservationValue>
    ReservedInstanceReservationValue& WithReservationValue(ReservationValueT&& value) { SetReservationValue(std::forward<ReservationValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Convertible Reserved Instance that you are exchanging.</p>
     */
    inline const Aws::String& GetReservedInstanceId() const { return m_reservedInstanceId; }
    inline bool ReservedInstanceIdHasBeenSet() const { return m_reservedInstanceIdHasBeenSet; }
    template<typename ReservedInstanceIdT = Aws::String>
    void SetReservedInstanceId(ReservedInstanceIdT&& value) { m_reservedInstanceIdHasBeenSet = true; m_reservedInstanceId = std::forward<ReservedInstanceIdT>(value); }
    template<typename ReservedInstanceIdT = Aws::String>
    ReservedInstanceReservationValue& WithReservedInstanceId(ReservedInstanceIdT&& value) { SetReservedInstanceId(std::forward<ReservedInstanceIdT>(value)); return *this;}
    ///@}
  private:

    ReservationValue m_reservationValue;
    bool m_reservationValueHasBeenSet = false;

    Aws::String m_reservedInstanceId;
    bool m_reservedInstanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
