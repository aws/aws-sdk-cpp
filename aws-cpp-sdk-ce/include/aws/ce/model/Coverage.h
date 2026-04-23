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
#include <aws/ce/model/CoverageHours.h>
#include <aws/ce/model/CoverageNormalizedUnits.h>
#include <aws/ce/model/CoverageCost.h>
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
   * <p>The amount of instance usage that a reservation covered.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/Coverage">AWS API
   * Reference</a></p>
   */
  class AWS_COSTEXPLORER_API Coverage
  {
  public:
    Coverage();
    Coverage(Aws::Utils::Json::JsonView jsonValue);
    Coverage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of instance usage that the reservation covered, in hours.</p>
     */
    inline const CoverageHours& GetCoverageHours() const{ return m_coverageHours; }

    /**
     * <p>The amount of instance usage that the reservation covered, in hours.</p>
     */
    inline bool CoverageHoursHasBeenSet() const { return m_coverageHoursHasBeenSet; }

    /**
     * <p>The amount of instance usage that the reservation covered, in hours.</p>
     */
    inline void SetCoverageHours(const CoverageHours& value) { m_coverageHoursHasBeenSet = true; m_coverageHours = value; }

    /**
     * <p>The amount of instance usage that the reservation covered, in hours.</p>
     */
    inline void SetCoverageHours(CoverageHours&& value) { m_coverageHoursHasBeenSet = true; m_coverageHours = std::move(value); }

    /**
     * <p>The amount of instance usage that the reservation covered, in hours.</p>
     */
    inline Coverage& WithCoverageHours(const CoverageHours& value) { SetCoverageHours(value); return *this;}

    /**
     * <p>The amount of instance usage that the reservation covered, in hours.</p>
     */
    inline Coverage& WithCoverageHours(CoverageHours&& value) { SetCoverageHours(std::move(value)); return *this;}


    /**
     * <p>The amount of instance usage that the reservation covered, in normalized
     * units.</p>
     */
    inline const CoverageNormalizedUnits& GetCoverageNormalizedUnits() const{ return m_coverageNormalizedUnits; }

    /**
     * <p>The amount of instance usage that the reservation covered, in normalized
     * units.</p>
     */
    inline bool CoverageNormalizedUnitsHasBeenSet() const { return m_coverageNormalizedUnitsHasBeenSet; }

    /**
     * <p>The amount of instance usage that the reservation covered, in normalized
     * units.</p>
     */
    inline void SetCoverageNormalizedUnits(const CoverageNormalizedUnits& value) { m_coverageNormalizedUnitsHasBeenSet = true; m_coverageNormalizedUnits = value; }

    /**
     * <p>The amount of instance usage that the reservation covered, in normalized
     * units.</p>
     */
    inline void SetCoverageNormalizedUnits(CoverageNormalizedUnits&& value) { m_coverageNormalizedUnitsHasBeenSet = true; m_coverageNormalizedUnits = std::move(value); }

    /**
     * <p>The amount of instance usage that the reservation covered, in normalized
     * units.</p>
     */
    inline Coverage& WithCoverageNormalizedUnits(const CoverageNormalizedUnits& value) { SetCoverageNormalizedUnits(value); return *this;}

    /**
     * <p>The amount of instance usage that the reservation covered, in normalized
     * units.</p>
     */
    inline Coverage& WithCoverageNormalizedUnits(CoverageNormalizedUnits&& value) { SetCoverageNormalizedUnits(std::move(value)); return *this;}


    /**
     * <p>The amount of cost that the reservation covered.</p>
     */
    inline const CoverageCost& GetCoverageCost() const{ return m_coverageCost; }

    /**
     * <p>The amount of cost that the reservation covered.</p>
     */
    inline bool CoverageCostHasBeenSet() const { return m_coverageCostHasBeenSet; }

    /**
     * <p>The amount of cost that the reservation covered.</p>
     */
    inline void SetCoverageCost(const CoverageCost& value) { m_coverageCostHasBeenSet = true; m_coverageCost = value; }

    /**
     * <p>The amount of cost that the reservation covered.</p>
     */
    inline void SetCoverageCost(CoverageCost&& value) { m_coverageCostHasBeenSet = true; m_coverageCost = std::move(value); }

    /**
     * <p>The amount of cost that the reservation covered.</p>
     */
    inline Coverage& WithCoverageCost(const CoverageCost& value) { SetCoverageCost(value); return *this;}

    /**
     * <p>The amount of cost that the reservation covered.</p>
     */
    inline Coverage& WithCoverageCost(CoverageCost&& value) { SetCoverageCost(std::move(value)); return *this;}

  private:

    CoverageHours m_coverageHours;
    bool m_coverageHoursHasBeenSet;

    CoverageNormalizedUnits m_coverageNormalizedUnits;
    bool m_coverageNormalizedUnitsHasBeenSet;

    CoverageCost m_coverageCost;
    bool m_coverageCostHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
