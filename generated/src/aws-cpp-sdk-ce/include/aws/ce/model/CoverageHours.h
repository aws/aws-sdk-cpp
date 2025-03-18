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
   * <p>How long a running instance either used a reservation or was
   * On-Demand.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CoverageHours">AWS
   * API Reference</a></p>
   */
  class CoverageHours
  {
  public:
    AWS_COSTEXPLORER_API CoverageHours() = default;
    AWS_COSTEXPLORER_API CoverageHours(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CoverageHours& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of instance running hours that On-Demand Instances covered.</p>
     */
    inline const Aws::String& GetOnDemandHours() const { return m_onDemandHours; }
    inline bool OnDemandHoursHasBeenSet() const { return m_onDemandHoursHasBeenSet; }
    template<typename OnDemandHoursT = Aws::String>
    void SetOnDemandHours(OnDemandHoursT&& value) { m_onDemandHoursHasBeenSet = true; m_onDemandHours = std::forward<OnDemandHoursT>(value); }
    template<typename OnDemandHoursT = Aws::String>
    CoverageHours& WithOnDemandHours(OnDemandHoursT&& value) { SetOnDemandHours(std::forward<OnDemandHoursT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instance running hours that reservations covered.</p>
     */
    inline const Aws::String& GetReservedHours() const { return m_reservedHours; }
    inline bool ReservedHoursHasBeenSet() const { return m_reservedHoursHasBeenSet; }
    template<typename ReservedHoursT = Aws::String>
    void SetReservedHours(ReservedHoursT&& value) { m_reservedHoursHasBeenSet = true; m_reservedHours = std::forward<ReservedHoursT>(value); }
    template<typename ReservedHoursT = Aws::String>
    CoverageHours& WithReservedHours(ReservedHoursT&& value) { SetReservedHours(std::forward<ReservedHoursT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total instance usage, in hours.</p>
     */
    inline const Aws::String& GetTotalRunningHours() const { return m_totalRunningHours; }
    inline bool TotalRunningHoursHasBeenSet() const { return m_totalRunningHoursHasBeenSet; }
    template<typename TotalRunningHoursT = Aws::String>
    void SetTotalRunningHours(TotalRunningHoursT&& value) { m_totalRunningHoursHasBeenSet = true; m_totalRunningHours = std::forward<TotalRunningHoursT>(value); }
    template<typename TotalRunningHoursT = Aws::String>
    CoverageHours& WithTotalRunningHours(TotalRunningHoursT&& value) { SetTotalRunningHours(std::forward<TotalRunningHoursT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of instance hours that a reservation covered.</p>
     */
    inline const Aws::String& GetCoverageHoursPercentage() const { return m_coverageHoursPercentage; }
    inline bool CoverageHoursPercentageHasBeenSet() const { return m_coverageHoursPercentageHasBeenSet; }
    template<typename CoverageHoursPercentageT = Aws::String>
    void SetCoverageHoursPercentage(CoverageHoursPercentageT&& value) { m_coverageHoursPercentageHasBeenSet = true; m_coverageHoursPercentage = std::forward<CoverageHoursPercentageT>(value); }
    template<typename CoverageHoursPercentageT = Aws::String>
    CoverageHours& WithCoverageHoursPercentage(CoverageHoursPercentageT&& value) { SetCoverageHoursPercentage(std::forward<CoverageHoursPercentageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_onDemandHours;
    bool m_onDemandHoursHasBeenSet = false;

    Aws::String m_reservedHours;
    bool m_reservedHoursHasBeenSet = false;

    Aws::String m_totalRunningHours;
    bool m_totalRunningHoursHasBeenSet = false;

    Aws::String m_coverageHoursPercentage;
    bool m_coverageHoursPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
