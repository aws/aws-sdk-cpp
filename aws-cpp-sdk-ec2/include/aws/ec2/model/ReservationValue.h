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
   * <p>The cost associated with the Reserved Instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReservationValue">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ReservationValue
  {
  public:
    ReservationValue();
    ReservationValue(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReservationValue& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The hourly rate of the reservation.</p>
     */
    inline const Aws::String& GetHourlyPrice() const{ return m_hourlyPrice; }

    /**
     * <p>The hourly rate of the reservation.</p>
     */
    inline void SetHourlyPrice(const Aws::String& value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice = value; }

    /**
     * <p>The hourly rate of the reservation.</p>
     */
    inline void SetHourlyPrice(Aws::String&& value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice = std::move(value); }

    /**
     * <p>The hourly rate of the reservation.</p>
     */
    inline void SetHourlyPrice(const char* value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice.assign(value); }

    /**
     * <p>The hourly rate of the reservation.</p>
     */
    inline ReservationValue& WithHourlyPrice(const Aws::String& value) { SetHourlyPrice(value); return *this;}

    /**
     * <p>The hourly rate of the reservation.</p>
     */
    inline ReservationValue& WithHourlyPrice(Aws::String&& value) { SetHourlyPrice(std::move(value)); return *this;}

    /**
     * <p>The hourly rate of the reservation.</p>
     */
    inline ReservationValue& WithHourlyPrice(const char* value) { SetHourlyPrice(value); return *this;}


    /**
     * <p>The balance of the total value (the sum of remainingUpfrontValue +
     * hourlyPrice * number of hours remaining).</p>
     */
    inline const Aws::String& GetRemainingTotalValue() const{ return m_remainingTotalValue; }

    /**
     * <p>The balance of the total value (the sum of remainingUpfrontValue +
     * hourlyPrice * number of hours remaining).</p>
     */
    inline void SetRemainingTotalValue(const Aws::String& value) { m_remainingTotalValueHasBeenSet = true; m_remainingTotalValue = value; }

    /**
     * <p>The balance of the total value (the sum of remainingUpfrontValue +
     * hourlyPrice * number of hours remaining).</p>
     */
    inline void SetRemainingTotalValue(Aws::String&& value) { m_remainingTotalValueHasBeenSet = true; m_remainingTotalValue = std::move(value); }

    /**
     * <p>The balance of the total value (the sum of remainingUpfrontValue +
     * hourlyPrice * number of hours remaining).</p>
     */
    inline void SetRemainingTotalValue(const char* value) { m_remainingTotalValueHasBeenSet = true; m_remainingTotalValue.assign(value); }

    /**
     * <p>The balance of the total value (the sum of remainingUpfrontValue +
     * hourlyPrice * number of hours remaining).</p>
     */
    inline ReservationValue& WithRemainingTotalValue(const Aws::String& value) { SetRemainingTotalValue(value); return *this;}

    /**
     * <p>The balance of the total value (the sum of remainingUpfrontValue +
     * hourlyPrice * number of hours remaining).</p>
     */
    inline ReservationValue& WithRemainingTotalValue(Aws::String&& value) { SetRemainingTotalValue(std::move(value)); return *this;}

    /**
     * <p>The balance of the total value (the sum of remainingUpfrontValue +
     * hourlyPrice * number of hours remaining).</p>
     */
    inline ReservationValue& WithRemainingTotalValue(const char* value) { SetRemainingTotalValue(value); return *this;}


    /**
     * <p>The remaining upfront cost of the reservation.</p>
     */
    inline const Aws::String& GetRemainingUpfrontValue() const{ return m_remainingUpfrontValue; }

    /**
     * <p>The remaining upfront cost of the reservation.</p>
     */
    inline void SetRemainingUpfrontValue(const Aws::String& value) { m_remainingUpfrontValueHasBeenSet = true; m_remainingUpfrontValue = value; }

    /**
     * <p>The remaining upfront cost of the reservation.</p>
     */
    inline void SetRemainingUpfrontValue(Aws::String&& value) { m_remainingUpfrontValueHasBeenSet = true; m_remainingUpfrontValue = std::move(value); }

    /**
     * <p>The remaining upfront cost of the reservation.</p>
     */
    inline void SetRemainingUpfrontValue(const char* value) { m_remainingUpfrontValueHasBeenSet = true; m_remainingUpfrontValue.assign(value); }

    /**
     * <p>The remaining upfront cost of the reservation.</p>
     */
    inline ReservationValue& WithRemainingUpfrontValue(const Aws::String& value) { SetRemainingUpfrontValue(value); return *this;}

    /**
     * <p>The remaining upfront cost of the reservation.</p>
     */
    inline ReservationValue& WithRemainingUpfrontValue(Aws::String&& value) { SetRemainingUpfrontValue(std::move(value)); return *this;}

    /**
     * <p>The remaining upfront cost of the reservation.</p>
     */
    inline ReservationValue& WithRemainingUpfrontValue(const char* value) { SetRemainingUpfrontValue(value); return *this;}

  private:

    Aws::String m_hourlyPrice;
    bool m_hourlyPriceHasBeenSet;

    Aws::String m_remainingTotalValue;
    bool m_remainingTotalValueHasBeenSet;

    Aws::String m_remainingUpfrontValue;
    bool m_remainingUpfrontValueHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
