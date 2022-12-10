/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The amount of instance usage, in normalized units. You can use normalized
   * units to see your EC2 usage for multiple sizes of instances in a uniform way.
   * For example, suppose that you run an xlarge instance and a 2xlarge instance. If
   * you run both instances for the same amount of time, the 2xlarge instance uses
   * twice as much of your reservation as the xlarge instance, even though both
   * instances show only one instance-hour. When you use normalized units instead of
   * instance-hours, the xlarge instance used 8 normalized units, and the 2xlarge
   * instance used 16 normalized units.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-modifying.html">Modifying
   * Reserved Instances</a> in the <i>Amazon Elastic Compute Cloud User Guide for
   * Linux Instances</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CoverageNormalizedUnits">AWS
   * API Reference</a></p>
   */
  class CoverageNormalizedUnits
  {
  public:
    AWS_COSTEXPLORER_API CoverageNormalizedUnits();
    AWS_COSTEXPLORER_API CoverageNormalizedUnits(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CoverageNormalizedUnits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of normalized units that are covered by On-Demand Instances
     * instead of a reservation.</p>
     */
    inline const Aws::String& GetOnDemandNormalizedUnits() const{ return m_onDemandNormalizedUnits; }

    /**
     * <p>The number of normalized units that are covered by On-Demand Instances
     * instead of a reservation.</p>
     */
    inline bool OnDemandNormalizedUnitsHasBeenSet() const { return m_onDemandNormalizedUnitsHasBeenSet; }

    /**
     * <p>The number of normalized units that are covered by On-Demand Instances
     * instead of a reservation.</p>
     */
    inline void SetOnDemandNormalizedUnits(const Aws::String& value) { m_onDemandNormalizedUnitsHasBeenSet = true; m_onDemandNormalizedUnits = value; }

    /**
     * <p>The number of normalized units that are covered by On-Demand Instances
     * instead of a reservation.</p>
     */
    inline void SetOnDemandNormalizedUnits(Aws::String&& value) { m_onDemandNormalizedUnitsHasBeenSet = true; m_onDemandNormalizedUnits = std::move(value); }

    /**
     * <p>The number of normalized units that are covered by On-Demand Instances
     * instead of a reservation.</p>
     */
    inline void SetOnDemandNormalizedUnits(const char* value) { m_onDemandNormalizedUnitsHasBeenSet = true; m_onDemandNormalizedUnits.assign(value); }

    /**
     * <p>The number of normalized units that are covered by On-Demand Instances
     * instead of a reservation.</p>
     */
    inline CoverageNormalizedUnits& WithOnDemandNormalizedUnits(const Aws::String& value) { SetOnDemandNormalizedUnits(value); return *this;}

    /**
     * <p>The number of normalized units that are covered by On-Demand Instances
     * instead of a reservation.</p>
     */
    inline CoverageNormalizedUnits& WithOnDemandNormalizedUnits(Aws::String&& value) { SetOnDemandNormalizedUnits(std::move(value)); return *this;}

    /**
     * <p>The number of normalized units that are covered by On-Demand Instances
     * instead of a reservation.</p>
     */
    inline CoverageNormalizedUnits& WithOnDemandNormalizedUnits(const char* value) { SetOnDemandNormalizedUnits(value); return *this;}


    /**
     * <p>The number of normalized units that a reservation covers.</p>
     */
    inline const Aws::String& GetReservedNormalizedUnits() const{ return m_reservedNormalizedUnits; }

    /**
     * <p>The number of normalized units that a reservation covers.</p>
     */
    inline bool ReservedNormalizedUnitsHasBeenSet() const { return m_reservedNormalizedUnitsHasBeenSet; }

    /**
     * <p>The number of normalized units that a reservation covers.</p>
     */
    inline void SetReservedNormalizedUnits(const Aws::String& value) { m_reservedNormalizedUnitsHasBeenSet = true; m_reservedNormalizedUnits = value; }

    /**
     * <p>The number of normalized units that a reservation covers.</p>
     */
    inline void SetReservedNormalizedUnits(Aws::String&& value) { m_reservedNormalizedUnitsHasBeenSet = true; m_reservedNormalizedUnits = std::move(value); }

    /**
     * <p>The number of normalized units that a reservation covers.</p>
     */
    inline void SetReservedNormalizedUnits(const char* value) { m_reservedNormalizedUnitsHasBeenSet = true; m_reservedNormalizedUnits.assign(value); }

    /**
     * <p>The number of normalized units that a reservation covers.</p>
     */
    inline CoverageNormalizedUnits& WithReservedNormalizedUnits(const Aws::String& value) { SetReservedNormalizedUnits(value); return *this;}

    /**
     * <p>The number of normalized units that a reservation covers.</p>
     */
    inline CoverageNormalizedUnits& WithReservedNormalizedUnits(Aws::String&& value) { SetReservedNormalizedUnits(std::move(value)); return *this;}

    /**
     * <p>The number of normalized units that a reservation covers.</p>
     */
    inline CoverageNormalizedUnits& WithReservedNormalizedUnits(const char* value) { SetReservedNormalizedUnits(value); return *this;}


    /**
     * <p>The total number of normalized units that you used.</p>
     */
    inline const Aws::String& GetTotalRunningNormalizedUnits() const{ return m_totalRunningNormalizedUnits; }

    /**
     * <p>The total number of normalized units that you used.</p>
     */
    inline bool TotalRunningNormalizedUnitsHasBeenSet() const { return m_totalRunningNormalizedUnitsHasBeenSet; }

    /**
     * <p>The total number of normalized units that you used.</p>
     */
    inline void SetTotalRunningNormalizedUnits(const Aws::String& value) { m_totalRunningNormalizedUnitsHasBeenSet = true; m_totalRunningNormalizedUnits = value; }

    /**
     * <p>The total number of normalized units that you used.</p>
     */
    inline void SetTotalRunningNormalizedUnits(Aws::String&& value) { m_totalRunningNormalizedUnitsHasBeenSet = true; m_totalRunningNormalizedUnits = std::move(value); }

    /**
     * <p>The total number of normalized units that you used.</p>
     */
    inline void SetTotalRunningNormalizedUnits(const char* value) { m_totalRunningNormalizedUnitsHasBeenSet = true; m_totalRunningNormalizedUnits.assign(value); }

    /**
     * <p>The total number of normalized units that you used.</p>
     */
    inline CoverageNormalizedUnits& WithTotalRunningNormalizedUnits(const Aws::String& value) { SetTotalRunningNormalizedUnits(value); return *this;}

    /**
     * <p>The total number of normalized units that you used.</p>
     */
    inline CoverageNormalizedUnits& WithTotalRunningNormalizedUnits(Aws::String&& value) { SetTotalRunningNormalizedUnits(std::move(value)); return *this;}

    /**
     * <p>The total number of normalized units that you used.</p>
     */
    inline CoverageNormalizedUnits& WithTotalRunningNormalizedUnits(const char* value) { SetTotalRunningNormalizedUnits(value); return *this;}


    /**
     * <p>The percentage of your used instance normalized units that a reservation
     * covers.</p>
     */
    inline const Aws::String& GetCoverageNormalizedUnitsPercentage() const{ return m_coverageNormalizedUnitsPercentage; }

    /**
     * <p>The percentage of your used instance normalized units that a reservation
     * covers.</p>
     */
    inline bool CoverageNormalizedUnitsPercentageHasBeenSet() const { return m_coverageNormalizedUnitsPercentageHasBeenSet; }

    /**
     * <p>The percentage of your used instance normalized units that a reservation
     * covers.</p>
     */
    inline void SetCoverageNormalizedUnitsPercentage(const Aws::String& value) { m_coverageNormalizedUnitsPercentageHasBeenSet = true; m_coverageNormalizedUnitsPercentage = value; }

    /**
     * <p>The percentage of your used instance normalized units that a reservation
     * covers.</p>
     */
    inline void SetCoverageNormalizedUnitsPercentage(Aws::String&& value) { m_coverageNormalizedUnitsPercentageHasBeenSet = true; m_coverageNormalizedUnitsPercentage = std::move(value); }

    /**
     * <p>The percentage of your used instance normalized units that a reservation
     * covers.</p>
     */
    inline void SetCoverageNormalizedUnitsPercentage(const char* value) { m_coverageNormalizedUnitsPercentageHasBeenSet = true; m_coverageNormalizedUnitsPercentage.assign(value); }

    /**
     * <p>The percentage of your used instance normalized units that a reservation
     * covers.</p>
     */
    inline CoverageNormalizedUnits& WithCoverageNormalizedUnitsPercentage(const Aws::String& value) { SetCoverageNormalizedUnitsPercentage(value); return *this;}

    /**
     * <p>The percentage of your used instance normalized units that a reservation
     * covers.</p>
     */
    inline CoverageNormalizedUnits& WithCoverageNormalizedUnitsPercentage(Aws::String&& value) { SetCoverageNormalizedUnitsPercentage(std::move(value)); return *this;}

    /**
     * <p>The percentage of your used instance normalized units that a reservation
     * covers.</p>
     */
    inline CoverageNormalizedUnits& WithCoverageNormalizedUnitsPercentage(const char* value) { SetCoverageNormalizedUnitsPercentage(value); return *this;}

  private:

    Aws::String m_onDemandNormalizedUnits;
    bool m_onDemandNormalizedUnitsHasBeenSet = false;

    Aws::String m_reservedNormalizedUnits;
    bool m_reservedNormalizedUnitsHasBeenSet = false;

    Aws::String m_totalRunningNormalizedUnits;
    bool m_totalRunningNormalizedUnitsHasBeenSet = false;

    Aws::String m_coverageNormalizedUnitsPercentage;
    bool m_coverageNormalizedUnitsPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
