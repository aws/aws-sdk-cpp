/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Coverage
  {
  public:
    AWS_COSTEXPLORER_API Coverage() = default;
    AWS_COSTEXPLORER_API Coverage(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Coverage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The amount of instance usage that the reservation covered, in hours.</p>
     */
    inline const CoverageHours& GetCoverageHours() const { return m_coverageHours; }
    inline bool CoverageHoursHasBeenSet() const { return m_coverageHoursHasBeenSet; }
    template<typename CoverageHoursT = CoverageHours>
    void SetCoverageHours(CoverageHoursT&& value) { m_coverageHoursHasBeenSet = true; m_coverageHours = std::forward<CoverageHoursT>(value); }
    template<typename CoverageHoursT = CoverageHours>
    Coverage& WithCoverageHours(CoverageHoursT&& value) { SetCoverageHours(std::forward<CoverageHoursT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of instance usage that the reservation covered, in normalized
     * units.</p>
     */
    inline const CoverageNormalizedUnits& GetCoverageNormalizedUnits() const { return m_coverageNormalizedUnits; }
    inline bool CoverageNormalizedUnitsHasBeenSet() const { return m_coverageNormalizedUnitsHasBeenSet; }
    template<typename CoverageNormalizedUnitsT = CoverageNormalizedUnits>
    void SetCoverageNormalizedUnits(CoverageNormalizedUnitsT&& value) { m_coverageNormalizedUnitsHasBeenSet = true; m_coverageNormalizedUnits = std::forward<CoverageNormalizedUnitsT>(value); }
    template<typename CoverageNormalizedUnitsT = CoverageNormalizedUnits>
    Coverage& WithCoverageNormalizedUnits(CoverageNormalizedUnitsT&& value) { SetCoverageNormalizedUnits(std::forward<CoverageNormalizedUnitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of cost that the reservation covered.</p>
     */
    inline const CoverageCost& GetCoverageCost() const { return m_coverageCost; }
    inline bool CoverageCostHasBeenSet() const { return m_coverageCostHasBeenSet; }
    template<typename CoverageCostT = CoverageCost>
    void SetCoverageCost(CoverageCostT&& value) { m_coverageCostHasBeenSet = true; m_coverageCost = std::forward<CoverageCostT>(value); }
    template<typename CoverageCostT = CoverageCost>
    Coverage& WithCoverageCost(CoverageCostT&& value) { SetCoverageCost(std::forward<CoverageCostT>(value)); return *this;}
    ///@}
  private:

    CoverageHours m_coverageHours;
    bool m_coverageHoursHasBeenSet = false;

    CoverageNormalizedUnits m_coverageNormalizedUnits;
    bool m_coverageNormalizedUnitsHasBeenSet = false;

    CoverageCost m_coverageCost;
    bool m_coverageCostHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
