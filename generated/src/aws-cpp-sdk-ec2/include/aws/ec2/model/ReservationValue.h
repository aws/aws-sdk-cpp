/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ReservationValue
  {
  public:
    AWS_EC2_API ReservationValue() = default;
    AWS_EC2_API ReservationValue(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ReservationValue& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The hourly rate of the reservation.</p>
     */
    inline const Aws::String& GetHourlyPrice() const { return m_hourlyPrice; }
    inline bool HourlyPriceHasBeenSet() const { return m_hourlyPriceHasBeenSet; }
    template<typename HourlyPriceT = Aws::String>
    void SetHourlyPrice(HourlyPriceT&& value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice = std::forward<HourlyPriceT>(value); }
    template<typename HourlyPriceT = Aws::String>
    ReservationValue& WithHourlyPrice(HourlyPriceT&& value) { SetHourlyPrice(std::forward<HourlyPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The balance of the total value (the sum of remainingUpfrontValue +
     * hourlyPrice * number of hours remaining).</p>
     */
    inline const Aws::String& GetRemainingTotalValue() const { return m_remainingTotalValue; }
    inline bool RemainingTotalValueHasBeenSet() const { return m_remainingTotalValueHasBeenSet; }
    template<typename RemainingTotalValueT = Aws::String>
    void SetRemainingTotalValue(RemainingTotalValueT&& value) { m_remainingTotalValueHasBeenSet = true; m_remainingTotalValue = std::forward<RemainingTotalValueT>(value); }
    template<typename RemainingTotalValueT = Aws::String>
    ReservationValue& WithRemainingTotalValue(RemainingTotalValueT&& value) { SetRemainingTotalValue(std::forward<RemainingTotalValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remaining upfront cost of the reservation.</p>
     */
    inline const Aws::String& GetRemainingUpfrontValue() const { return m_remainingUpfrontValue; }
    inline bool RemainingUpfrontValueHasBeenSet() const { return m_remainingUpfrontValueHasBeenSet; }
    template<typename RemainingUpfrontValueT = Aws::String>
    void SetRemainingUpfrontValue(RemainingUpfrontValueT&& value) { m_remainingUpfrontValueHasBeenSet = true; m_remainingUpfrontValue = std::forward<RemainingUpfrontValueT>(value); }
    template<typename RemainingUpfrontValueT = Aws::String>
    ReservationValue& WithRemainingUpfrontValue(RemainingUpfrontValueT&& value) { SetRemainingUpfrontValue(std::forward<RemainingUpfrontValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hourlyPrice;
    bool m_hourlyPriceHasBeenSet = false;

    Aws::String m_remainingTotalValue;
    bool m_remainingTotalValueHasBeenSet = false;

    Aws::String m_remainingUpfrontValue;
    bool m_remainingUpfrontValueHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
