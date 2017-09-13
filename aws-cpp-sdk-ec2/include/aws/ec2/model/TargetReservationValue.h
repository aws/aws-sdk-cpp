/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EC2_API TargetReservationValue
  {
  public:
    TargetReservationValue();
    TargetReservationValue(const Aws::Utils::Xml::XmlNode& xmlNode);
    TargetReservationValue& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The total value of the Convertible Reserved Instances that make up the
     * exchange. This is the sum of the list value, remaining upfront price, and
     * additional upfront cost of the exchange.</p>
     */
    inline const ReservationValue& GetReservationValue() const{ return m_reservationValue; }

    /**
     * <p>The total value of the Convertible Reserved Instances that make up the
     * exchange. This is the sum of the list value, remaining upfront price, and
     * additional upfront cost of the exchange.</p>
     */
    inline void SetReservationValue(const ReservationValue& value) { m_reservationValueHasBeenSet = true; m_reservationValue = value; }

    /**
     * <p>The total value of the Convertible Reserved Instances that make up the
     * exchange. This is the sum of the list value, remaining upfront price, and
     * additional upfront cost of the exchange.</p>
     */
    inline void SetReservationValue(ReservationValue&& value) { m_reservationValueHasBeenSet = true; m_reservationValue = std::move(value); }

    /**
     * <p>The total value of the Convertible Reserved Instances that make up the
     * exchange. This is the sum of the list value, remaining upfront price, and
     * additional upfront cost of the exchange.</p>
     */
    inline TargetReservationValue& WithReservationValue(const ReservationValue& value) { SetReservationValue(value); return *this;}

    /**
     * <p>The total value of the Convertible Reserved Instances that make up the
     * exchange. This is the sum of the list value, remaining upfront price, and
     * additional upfront cost of the exchange.</p>
     */
    inline TargetReservationValue& WithReservationValue(ReservationValue&& value) { SetReservationValue(std::move(value)); return *this;}


    /**
     * <p>The configuration of the Convertible Reserved Instances that make up the
     * exchange.</p>
     */
    inline const TargetConfiguration& GetTargetConfiguration() const{ return m_targetConfiguration; }

    /**
     * <p>The configuration of the Convertible Reserved Instances that make up the
     * exchange.</p>
     */
    inline void SetTargetConfiguration(const TargetConfiguration& value) { m_targetConfigurationHasBeenSet = true; m_targetConfiguration = value; }

    /**
     * <p>The configuration of the Convertible Reserved Instances that make up the
     * exchange.</p>
     */
    inline void SetTargetConfiguration(TargetConfiguration&& value) { m_targetConfigurationHasBeenSet = true; m_targetConfiguration = std::move(value); }

    /**
     * <p>The configuration of the Convertible Reserved Instances that make up the
     * exchange.</p>
     */
    inline TargetReservationValue& WithTargetConfiguration(const TargetConfiguration& value) { SetTargetConfiguration(value); return *this;}

    /**
     * <p>The configuration of the Convertible Reserved Instances that make up the
     * exchange.</p>
     */
    inline TargetReservationValue& WithTargetConfiguration(TargetConfiguration&& value) { SetTargetConfiguration(std::move(value)); return *this;}

  private:

    ReservationValue m_reservationValue;
    bool m_reservationValueHasBeenSet;

    TargetConfiguration m_targetConfiguration;
    bool m_targetConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
