/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/EnhancedInfrastructureMetrics.h>
#include <aws/compute-optimizer/model/LookBackPeriodPreference.h>
#include <aws/compute-optimizer/model/RDSSavingsEstimationMode.h>
#include <aws/compute-optimizer/model/CpuVendorArchitecture.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p> Describes the effective recommendation preferences for Amazon Aurora and RDS
   * databases. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/RDSEffectiveRecommendationPreferences">AWS
   * API Reference</a></p>
   */
  class RDSEffectiveRecommendationPreferences
  {
  public:
    AWS_COMPUTEOPTIMIZER_API RDSEffectiveRecommendationPreferences() = default;
    AWS_COMPUTEOPTIMIZER_API RDSEffectiveRecommendationPreferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API RDSEffectiveRecommendationPreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Describes the CPU vendor and architecture for DB instance recommendations.
     * </p>
     */
    inline const Aws::Vector<CpuVendorArchitecture>& GetCpuVendorArchitectures() const { return m_cpuVendorArchitectures; }
    inline bool CpuVendorArchitecturesHasBeenSet() const { return m_cpuVendorArchitecturesHasBeenSet; }
    template<typename CpuVendorArchitecturesT = Aws::Vector<CpuVendorArchitecture>>
    void SetCpuVendorArchitectures(CpuVendorArchitecturesT&& value) { m_cpuVendorArchitecturesHasBeenSet = true; m_cpuVendorArchitectures = std::forward<CpuVendorArchitecturesT>(value); }
    template<typename CpuVendorArchitecturesT = Aws::Vector<CpuVendorArchitecture>>
    RDSEffectiveRecommendationPreferences& WithCpuVendorArchitectures(CpuVendorArchitecturesT&& value) { SetCpuVendorArchitectures(std::forward<CpuVendorArchitecturesT>(value)); return *this;}
    inline RDSEffectiveRecommendationPreferences& AddCpuVendorArchitectures(CpuVendorArchitecture value) { m_cpuVendorArchitecturesHasBeenSet = true; m_cpuVendorArchitectures.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the activation status of the enhanced infrastructure metrics
     * preference. </p> <p>A status of <code>Active</code> confirms that the preference
     * is applied in the latest recommendation refresh, and a status of
     * <code>Inactive</code> confirms that it's not yet applied to recommendations.
     * </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Enhanced
     * infrastructure metrics</a> in the <i>Compute Optimizer User Guide</i>. </p>
     */
    inline EnhancedInfrastructureMetrics GetEnhancedInfrastructureMetrics() const { return m_enhancedInfrastructureMetrics; }
    inline bool EnhancedInfrastructureMetricsHasBeenSet() const { return m_enhancedInfrastructureMetricsHasBeenSet; }
    inline void SetEnhancedInfrastructureMetrics(EnhancedInfrastructureMetrics value) { m_enhancedInfrastructureMetricsHasBeenSet = true; m_enhancedInfrastructureMetrics = value; }
    inline RDSEffectiveRecommendationPreferences& WithEnhancedInfrastructureMetrics(EnhancedInfrastructureMetrics value) { SetEnhancedInfrastructureMetrics(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of days the utilization metrics of the DB instance are analyzed.
     * </p>
     */
    inline LookBackPeriodPreference GetLookBackPeriod() const { return m_lookBackPeriod; }
    inline bool LookBackPeriodHasBeenSet() const { return m_lookBackPeriodHasBeenSet; }
    inline void SetLookBackPeriod(LookBackPeriodPreference value) { m_lookBackPeriodHasBeenSet = true; m_lookBackPeriod = value; }
    inline RDSEffectiveRecommendationPreferences& WithLookBackPeriod(LookBackPeriodPreference value) { SetLookBackPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the savings estimation mode preference applied for calculating
     * savings opportunity for DB instances. </p>
     */
    inline const RDSSavingsEstimationMode& GetSavingsEstimationMode() const { return m_savingsEstimationMode; }
    inline bool SavingsEstimationModeHasBeenSet() const { return m_savingsEstimationModeHasBeenSet; }
    template<typename SavingsEstimationModeT = RDSSavingsEstimationMode>
    void SetSavingsEstimationMode(SavingsEstimationModeT&& value) { m_savingsEstimationModeHasBeenSet = true; m_savingsEstimationMode = std::forward<SavingsEstimationModeT>(value); }
    template<typename SavingsEstimationModeT = RDSSavingsEstimationMode>
    RDSEffectiveRecommendationPreferences& WithSavingsEstimationMode(SavingsEstimationModeT&& value) { SetSavingsEstimationMode(std::forward<SavingsEstimationModeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CpuVendorArchitecture> m_cpuVendorArchitectures;
    bool m_cpuVendorArchitecturesHasBeenSet = false;

    EnhancedInfrastructureMetrics m_enhancedInfrastructureMetrics{EnhancedInfrastructureMetrics::NOT_SET};
    bool m_enhancedInfrastructureMetricsHasBeenSet = false;

    LookBackPeriodPreference m_lookBackPeriod{LookBackPeriodPreference::NOT_SET};
    bool m_lookBackPeriodHasBeenSet = false;

    RDSSavingsEstimationMode m_savingsEstimationMode;
    bool m_savingsEstimationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
