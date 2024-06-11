﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ReservationValue.h>
#include <aws/ec2/model/TargetConfiguration.h>
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
   * <p>The total value of the new Convertible Reserved Instances.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TargetReservationValue">AWS
   * API Reference</a></p>
   */
  class TargetReservationValue
  {
  public:
    AWS_EC2_API TargetReservationValue();
    AWS_EC2_API TargetReservationValue(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TargetReservationValue& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The total value of the Convertible Reserved Instances that make up the
     * exchange. This is the sum of the list value, remaining upfront price, and
     * additional upfront cost of the exchange.</p>
     */
    inline const ReservationValue& GetReservationValue() const{ return m_reservationValue; }
    inline bool ReservationValueHasBeenSet() const { return m_reservationValueHasBeenSet; }
    inline void SetReservationValue(const ReservationValue& value) { m_reservationValueHasBeenSet = true; m_reservationValue = value; }
    inline void SetReservationValue(ReservationValue&& value) { m_reservationValueHasBeenSet = true; m_reservationValue = std::move(value); }
    inline TargetReservationValue& WithReservationValue(const ReservationValue& value) { SetReservationValue(value); return *this;}
    inline TargetReservationValue& WithReservationValue(ReservationValue&& value) { SetReservationValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the Convertible Reserved Instances that make up the
     * exchange.</p>
     */
    inline const TargetConfiguration& GetTargetConfiguration() const{ return m_targetConfiguration; }
    inline bool TargetConfigurationHasBeenSet() const { return m_targetConfigurationHasBeenSet; }
    inline void SetTargetConfiguration(const TargetConfiguration& value) { m_targetConfigurationHasBeenSet = true; m_targetConfiguration = value; }
    inline void SetTargetConfiguration(TargetConfiguration&& value) { m_targetConfigurationHasBeenSet = true; m_targetConfiguration = std::move(value); }
    inline TargetReservationValue& WithTargetConfiguration(const TargetConfiguration& value) { SetTargetConfiguration(value); return *this;}
    inline TargetReservationValue& WithTargetConfiguration(TargetConfiguration&& value) { SetTargetConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    ReservationValue m_reservationValue;
    bool m_reservationValueHasBeenSet = false;

    TargetConfiguration m_targetConfiguration;
    bool m_targetConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
