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
  class AWS_EC2_API RecurringCharge
  {
  public:
    RecurringCharge();
    RecurringCharge(const Aws::Utils::Xml::XmlNode& xmlNode);
    RecurringCharge& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The amount of the recurring charge.</p>
     */
    inline double GetAmount() const{ return m_amount; }

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
    bool m_amountHasBeenSet;

    RecurringChargeFrequency m_frequency;
    bool m_frequencyHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
