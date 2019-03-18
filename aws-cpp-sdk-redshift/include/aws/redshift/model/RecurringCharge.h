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
#include <aws/redshift/Redshift_EXPORTS.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes a recurring charge.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/RecurringCharge">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API RecurringCharge
  {
  public:
    RecurringCharge();
    RecurringCharge(const Aws::Utils::Xml::XmlNode& xmlNode);
    RecurringCharge& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The amount charged per the period of time specified by the recurring charge
     * frequency.</p>
     */
    inline double GetRecurringChargeAmount() const{ return m_recurringChargeAmount; }

    /**
     * <p>The amount charged per the period of time specified by the recurring charge
     * frequency.</p>
     */
    inline bool RecurringChargeAmountHasBeenSet() const { return m_recurringChargeAmountHasBeenSet; }

    /**
     * <p>The amount charged per the period of time specified by the recurring charge
     * frequency.</p>
     */
    inline void SetRecurringChargeAmount(double value) { m_recurringChargeAmountHasBeenSet = true; m_recurringChargeAmount = value; }

    /**
     * <p>The amount charged per the period of time specified by the recurring charge
     * frequency.</p>
     */
    inline RecurringCharge& WithRecurringChargeAmount(double value) { SetRecurringChargeAmount(value); return *this;}


    /**
     * <p>The frequency at which the recurring charge amount is applied.</p>
     */
    inline const Aws::String& GetRecurringChargeFrequency() const{ return m_recurringChargeFrequency; }

    /**
     * <p>The frequency at which the recurring charge amount is applied.</p>
     */
    inline bool RecurringChargeFrequencyHasBeenSet() const { return m_recurringChargeFrequencyHasBeenSet; }

    /**
     * <p>The frequency at which the recurring charge amount is applied.</p>
     */
    inline void SetRecurringChargeFrequency(const Aws::String& value) { m_recurringChargeFrequencyHasBeenSet = true; m_recurringChargeFrequency = value; }

    /**
     * <p>The frequency at which the recurring charge amount is applied.</p>
     */
    inline void SetRecurringChargeFrequency(Aws::String&& value) { m_recurringChargeFrequencyHasBeenSet = true; m_recurringChargeFrequency = std::move(value); }

    /**
     * <p>The frequency at which the recurring charge amount is applied.</p>
     */
    inline void SetRecurringChargeFrequency(const char* value) { m_recurringChargeFrequencyHasBeenSet = true; m_recurringChargeFrequency.assign(value); }

    /**
     * <p>The frequency at which the recurring charge amount is applied.</p>
     */
    inline RecurringCharge& WithRecurringChargeFrequency(const Aws::String& value) { SetRecurringChargeFrequency(value); return *this;}

    /**
     * <p>The frequency at which the recurring charge amount is applied.</p>
     */
    inline RecurringCharge& WithRecurringChargeFrequency(Aws::String&& value) { SetRecurringChargeFrequency(std::move(value)); return *this;}

    /**
     * <p>The frequency at which the recurring charge amount is applied.</p>
     */
    inline RecurringCharge& WithRecurringChargeFrequency(const char* value) { SetRecurringChargeFrequency(value); return *this;}

  private:

    double m_recurringChargeAmount;
    bool m_recurringChargeAmountHasBeenSet;

    Aws::String m_recurringChargeFrequency;
    bool m_recurringChargeFrequencyHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
