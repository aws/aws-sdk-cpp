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
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The aggregated numbers for your RI usage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ReservationAggregates">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API ReservationAggregates
  {
  public:
    ReservationAggregates();
    ReservationAggregates(const Aws::Utils::Json::JsonValue& jsonValue);
    ReservationAggregates& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The percentage of RI time that you used.</p>
     */
    inline const Aws::String& GetUtilizationPercentage() const{ return m_utilizationPercentage; }

    /**
     * <p>The percentage of RI time that you used.</p>
     */
    inline void SetUtilizationPercentage(const Aws::String& value) { m_utilizationPercentageHasBeenSet = true; m_utilizationPercentage = value; }

    /**
     * <p>The percentage of RI time that you used.</p>
     */
    inline void SetUtilizationPercentage(Aws::String&& value) { m_utilizationPercentageHasBeenSet = true; m_utilizationPercentage = std::move(value); }

    /**
     * <p>The percentage of RI time that you used.</p>
     */
    inline void SetUtilizationPercentage(const char* value) { m_utilizationPercentageHasBeenSet = true; m_utilizationPercentage.assign(value); }

    /**
     * <p>The percentage of RI time that you used.</p>
     */
    inline ReservationAggregates& WithUtilizationPercentage(const Aws::String& value) { SetUtilizationPercentage(value); return *this;}

    /**
     * <p>The percentage of RI time that you used.</p>
     */
    inline ReservationAggregates& WithUtilizationPercentage(Aws::String&& value) { SetUtilizationPercentage(std::move(value)); return *this;}

    /**
     * <p>The percentage of RI time that you used.</p>
     */
    inline ReservationAggregates& WithUtilizationPercentage(const char* value) { SetUtilizationPercentage(value); return *this;}


    /**
     * <p>How many RI hours that you purchased.</p>
     */
    inline const Aws::String& GetPurchasedHours() const{ return m_purchasedHours; }

    /**
     * <p>How many RI hours that you purchased.</p>
     */
    inline void SetPurchasedHours(const Aws::String& value) { m_purchasedHoursHasBeenSet = true; m_purchasedHours = value; }

    /**
     * <p>How many RI hours that you purchased.</p>
     */
    inline void SetPurchasedHours(Aws::String&& value) { m_purchasedHoursHasBeenSet = true; m_purchasedHours = std::move(value); }

    /**
     * <p>How many RI hours that you purchased.</p>
     */
    inline void SetPurchasedHours(const char* value) { m_purchasedHoursHasBeenSet = true; m_purchasedHours.assign(value); }

    /**
     * <p>How many RI hours that you purchased.</p>
     */
    inline ReservationAggregates& WithPurchasedHours(const Aws::String& value) { SetPurchasedHours(value); return *this;}

    /**
     * <p>How many RI hours that you purchased.</p>
     */
    inline ReservationAggregates& WithPurchasedHours(Aws::String&& value) { SetPurchasedHours(std::move(value)); return *this;}

    /**
     * <p>How many RI hours that you purchased.</p>
     */
    inline ReservationAggregates& WithPurchasedHours(const char* value) { SetPurchasedHours(value); return *this;}


    /**
     * <p>The total number of RI hours that you used.</p>
     */
    inline const Aws::String& GetTotalActualHours() const{ return m_totalActualHours; }

    /**
     * <p>The total number of RI hours that you used.</p>
     */
    inline void SetTotalActualHours(const Aws::String& value) { m_totalActualHoursHasBeenSet = true; m_totalActualHours = value; }

    /**
     * <p>The total number of RI hours that you used.</p>
     */
    inline void SetTotalActualHours(Aws::String&& value) { m_totalActualHoursHasBeenSet = true; m_totalActualHours = std::move(value); }

    /**
     * <p>The total number of RI hours that you used.</p>
     */
    inline void SetTotalActualHours(const char* value) { m_totalActualHoursHasBeenSet = true; m_totalActualHours.assign(value); }

    /**
     * <p>The total number of RI hours that you used.</p>
     */
    inline ReservationAggregates& WithTotalActualHours(const Aws::String& value) { SetTotalActualHours(value); return *this;}

    /**
     * <p>The total number of RI hours that you used.</p>
     */
    inline ReservationAggregates& WithTotalActualHours(Aws::String&& value) { SetTotalActualHours(std::move(value)); return *this;}

    /**
     * <p>The total number of RI hours that you used.</p>
     */
    inline ReservationAggregates& WithTotalActualHours(const char* value) { SetTotalActualHours(value); return *this;}


    /**
     * <p>The number of RI hours that you didn't use.</p>
     */
    inline const Aws::String& GetUnusedHours() const{ return m_unusedHours; }

    /**
     * <p>The number of RI hours that you didn't use.</p>
     */
    inline void SetUnusedHours(const Aws::String& value) { m_unusedHoursHasBeenSet = true; m_unusedHours = value; }

    /**
     * <p>The number of RI hours that you didn't use.</p>
     */
    inline void SetUnusedHours(Aws::String&& value) { m_unusedHoursHasBeenSet = true; m_unusedHours = std::move(value); }

    /**
     * <p>The number of RI hours that you didn't use.</p>
     */
    inline void SetUnusedHours(const char* value) { m_unusedHoursHasBeenSet = true; m_unusedHours.assign(value); }

    /**
     * <p>The number of RI hours that you didn't use.</p>
     */
    inline ReservationAggregates& WithUnusedHours(const Aws::String& value) { SetUnusedHours(value); return *this;}

    /**
     * <p>The number of RI hours that you didn't use.</p>
     */
    inline ReservationAggregates& WithUnusedHours(Aws::String&& value) { SetUnusedHours(std::move(value)); return *this;}

    /**
     * <p>The number of RI hours that you didn't use.</p>
     */
    inline ReservationAggregates& WithUnusedHours(const char* value) { SetUnusedHours(value); return *this;}

  private:

    Aws::String m_utilizationPercentage;
    bool m_utilizationPercentageHasBeenSet;

    Aws::String m_purchasedHours;
    bool m_purchasedHoursHasBeenSet;

    Aws::String m_totalActualHours;
    bool m_totalActualHoursHasBeenSet;

    Aws::String m_unusedHours;
    bool m_unusedHoursHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
