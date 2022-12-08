/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/RecurringChargeFrequency.h>
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
   * <p>Describes a recurring charge.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RecurringCharge">AWS
   * API Reference</a></p>
   */
  class RecurringCharge
  {
  public:
    AWS_EC2_API RecurringCharge();
    AWS_EC2_API RecurringCharge(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RecurringCharge& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The amount of the recurring charge.</p>
     */
    inline double GetAmount() const{ return m_amount; }

    /**
     * <p>The amount of the recurring charge.</p>
     */
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }

    /**
     * <p>The amount of the recurring charge.</p>
     */
    inline void SetAmount(double value) { m_amountHasBeenSet = true; m_amount = value; }

    /**
     * <p>The amount of the recurring charge.</p>
     */
    inline RecurringCharge& WithAmount(double value) { SetAmount(value); return *this;}


    /**
     * <p>The frequency of the recurring charge.</p>
     */
    inline const RecurringChargeFrequency& GetFrequency() const{ return m_frequency; }

    /**
     * <p>The frequency of the recurring charge.</p>
     */
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }

    /**
     * <p>The frequency of the recurring charge.</p>
     */
    inline void SetFrequency(const RecurringChargeFrequency& value) { m_frequencyHasBeenSet = true; m_frequency = value; }

    /**
     * <p>The frequency of the recurring charge.</p>
     */
    inline void SetFrequency(RecurringChargeFrequency&& value) { m_frequencyHasBeenSet = true; m_frequency = std::move(value); }

    /**
     * <p>The frequency of the recurring charge.</p>
     */
    inline RecurringCharge& WithFrequency(const RecurringChargeFrequency& value) { SetFrequency(value); return *this;}

    /**
     * <p>The frequency of the recurring charge.</p>
     */
    inline RecurringCharge& WithFrequency(RecurringChargeFrequency&& value) { SetFrequency(std::move(value)); return *this;}

  private:

    double m_amount;
    bool m_amountHasBeenSet = false;

    RecurringChargeFrequency m_frequency;
    bool m_frequencyHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
