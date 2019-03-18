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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>How long a running instance either used a reservation or was
   * On-Demand.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CoverageHours">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API CoverageHours
  {
  public:
    CoverageHours();
    CoverageHours(Aws::Utils::Json::JsonView jsonValue);
    CoverageHours& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of instance running hours that On-Demand Instances covered.</p>
     */
    inline const Aws::String& GetOnDemandHours() const{ return m_onDemandHours; }

    /**
     * <p>The number of instance running hours that On-Demand Instances covered.</p>
     */
    inline bool OnDemandHoursHasBeenSet() const { return m_onDemandHoursHasBeenSet; }

    /**
     * <p>The number of instance running hours that On-Demand Instances covered.</p>
     */
    inline void SetOnDemandHours(const Aws::String& value) { m_onDemandHoursHasBeenSet = true; m_onDemandHours = value; }

    /**
     * <p>The number of instance running hours that On-Demand Instances covered.</p>
     */
    inline void SetOnDemandHours(Aws::String&& value) { m_onDemandHoursHasBeenSet = true; m_onDemandHours = std::move(value); }

    /**
     * <p>The number of instance running hours that On-Demand Instances covered.</p>
     */
    inline void SetOnDemandHours(const char* value) { m_onDemandHoursHasBeenSet = true; m_onDemandHours.assign(value); }

    /**
     * <p>The number of instance running hours that On-Demand Instances covered.</p>
     */
    inline CoverageHours& WithOnDemandHours(const Aws::String& value) { SetOnDemandHours(value); return *this;}

    /**
     * <p>The number of instance running hours that On-Demand Instances covered.</p>
     */
    inline CoverageHours& WithOnDemandHours(Aws::String&& value) { SetOnDemandHours(std::move(value)); return *this;}

    /**
     * <p>The number of instance running hours that On-Demand Instances covered.</p>
     */
    inline CoverageHours& WithOnDemandHours(const char* value) { SetOnDemandHours(value); return *this;}


    /**
     * <p>The number of instance running hours that reservations covered.</p>
     */
    inline const Aws::String& GetReservedHours() const{ return m_reservedHours; }

    /**
     * <p>The number of instance running hours that reservations covered.</p>
     */
    inline bool ReservedHoursHasBeenSet() const { return m_reservedHoursHasBeenSet; }

    /**
     * <p>The number of instance running hours that reservations covered.</p>
     */
    inline void SetReservedHours(const Aws::String& value) { m_reservedHoursHasBeenSet = true; m_reservedHours = value; }

    /**
     * <p>The number of instance running hours that reservations covered.</p>
     */
    inline void SetReservedHours(Aws::String&& value) { m_reservedHoursHasBeenSet = true; m_reservedHours = std::move(value); }

    /**
     * <p>The number of instance running hours that reservations covered.</p>
     */
    inline void SetReservedHours(const char* value) { m_reservedHoursHasBeenSet = true; m_reservedHours.assign(value); }

    /**
     * <p>The number of instance running hours that reservations covered.</p>
     */
    inline CoverageHours& WithReservedHours(const Aws::String& value) { SetReservedHours(value); return *this;}

    /**
     * <p>The number of instance running hours that reservations covered.</p>
     */
    inline CoverageHours& WithReservedHours(Aws::String&& value) { SetReservedHours(std::move(value)); return *this;}

    /**
     * <p>The number of instance running hours that reservations covered.</p>
     */
    inline CoverageHours& WithReservedHours(const char* value) { SetReservedHours(value); return *this;}


    /**
     * <p>The total instance usage, in hours.</p>
     */
    inline const Aws::String& GetTotalRunningHours() const{ return m_totalRunningHours; }

    /**
     * <p>The total instance usage, in hours.</p>
     */
    inline bool TotalRunningHoursHasBeenSet() const { return m_totalRunningHoursHasBeenSet; }

    /**
     * <p>The total instance usage, in hours.</p>
     */
    inline void SetTotalRunningHours(const Aws::String& value) { m_totalRunningHoursHasBeenSet = true; m_totalRunningHours = value; }

    /**
     * <p>The total instance usage, in hours.</p>
     */
    inline void SetTotalRunningHours(Aws::String&& value) { m_totalRunningHoursHasBeenSet = true; m_totalRunningHours = std::move(value); }

    /**
     * <p>The total instance usage, in hours.</p>
     */
    inline void SetTotalRunningHours(const char* value) { m_totalRunningHoursHasBeenSet = true; m_totalRunningHours.assign(value); }

    /**
     * <p>The total instance usage, in hours.</p>
     */
    inline CoverageHours& WithTotalRunningHours(const Aws::String& value) { SetTotalRunningHours(value); return *this;}

    /**
     * <p>The total instance usage, in hours.</p>
     */
    inline CoverageHours& WithTotalRunningHours(Aws::String&& value) { SetTotalRunningHours(std::move(value)); return *this;}

    /**
     * <p>The total instance usage, in hours.</p>
     */
    inline CoverageHours& WithTotalRunningHours(const char* value) { SetTotalRunningHours(value); return *this;}


    /**
     * <p>The percentage of instance hours that a reservation covered.</p>
     */
    inline const Aws::String& GetCoverageHoursPercentage() const{ return m_coverageHoursPercentage; }

    /**
     * <p>The percentage of instance hours that a reservation covered.</p>
     */
    inline bool CoverageHoursPercentageHasBeenSet() const { return m_coverageHoursPercentageHasBeenSet; }

    /**
     * <p>The percentage of instance hours that a reservation covered.</p>
     */
    inline void SetCoverageHoursPercentage(const Aws::String& value) { m_coverageHoursPercentageHasBeenSet = true; m_coverageHoursPercentage = value; }

    /**
     * <p>The percentage of instance hours that a reservation covered.</p>
     */
    inline void SetCoverageHoursPercentage(Aws::String&& value) { m_coverageHoursPercentageHasBeenSet = true; m_coverageHoursPercentage = std::move(value); }

    /**
     * <p>The percentage of instance hours that a reservation covered.</p>
     */
    inline void SetCoverageHoursPercentage(const char* value) { m_coverageHoursPercentageHasBeenSet = true; m_coverageHoursPercentage.assign(value); }

    /**
     * <p>The percentage of instance hours that a reservation covered.</p>
     */
    inline CoverageHours& WithCoverageHoursPercentage(const Aws::String& value) { SetCoverageHoursPercentage(value); return *this;}

    /**
     * <p>The percentage of instance hours that a reservation covered.</p>
     */
    inline CoverageHours& WithCoverageHoursPercentage(Aws::String&& value) { SetCoverageHoursPercentage(std::move(value)); return *this;}

    /**
     * <p>The percentage of instance hours that a reservation covered.</p>
     */
    inline CoverageHours& WithCoverageHoursPercentage(const char* value) { SetCoverageHoursPercentage(value); return *this;}

  private:

    Aws::String m_onDemandHours;
    bool m_onDemandHoursHasBeenSet;

    Aws::String m_reservedHours;
    bool m_reservedHoursHasBeenSet;

    Aws::String m_totalRunningHours;
    bool m_totalRunningHoursHasBeenSet;

    Aws::String m_coverageHoursPercentage;
    bool m_coverageHoursPercentageHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
