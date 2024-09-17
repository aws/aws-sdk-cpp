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
   * <p> Describes the effective recommendation preferences for Amazon RDS.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/RDSEffectiveRecommendationPreferences">AWS
   * API Reference</a></p>
   */
  class RDSEffectiveRecommendationPreferences
  {
  public:
    AWS_COMPUTEOPTIMIZER_API RDSEffectiveRecommendationPreferences();
    AWS_COMPUTEOPTIMIZER_API RDSEffectiveRecommendationPreferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API RDSEffectiveRecommendationPreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Describes the CPU vendor and architecture for Amazon RDS recommendations.
     * </p>
     */
    inline const Aws::Vector<CpuVendorArchitecture>& GetCpuVendorArchitectures() const{ return m_cpuVendorArchitectures; }
    inline bool CpuVendorArchitecturesHasBeenSet() const { return m_cpuVendorArchitecturesHasBeenSet; }
    inline void SetCpuVendorArchitectures(const Aws::Vector<CpuVendorArchitecture>& value) { m_cpuVendorArchitecturesHasBeenSet = true; m_cpuVendorArchitectures = value; }
    inline void SetCpuVendorArchitectures(Aws::Vector<CpuVendorArchitecture>&& value) { m_cpuVendorArchitecturesHasBeenSet = true; m_cpuVendorArchitectures = std::move(value); }
    inline RDSEffectiveRecommendationPreferences& WithCpuVendorArchitectures(const Aws::Vector<CpuVendorArchitecture>& value) { SetCpuVendorArchitectures(value); return *this;}
    inline RDSEffectiveRecommendationPreferences& WithCpuVendorArchitectures(Aws::Vector<CpuVendorArchitecture>&& value) { SetCpuVendorArchitectures(std::move(value)); return *this;}
    inline RDSEffectiveRecommendationPreferences& AddCpuVendorArchitectures(const CpuVendorArchitecture& value) { m_cpuVendorArchitecturesHasBeenSet = true; m_cpuVendorArchitectures.push_back(value); return *this; }
    inline RDSEffectiveRecommendationPreferences& AddCpuVendorArchitectures(CpuVendorArchitecture&& value) { m_cpuVendorArchitecturesHasBeenSet = true; m_cpuVendorArchitectures.push_back(std::move(value)); return *this; }
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
    inline const EnhancedInfrastructureMetrics& GetEnhancedInfrastructureMetrics() const{ return m_enhancedInfrastructureMetrics; }
    inline bool EnhancedInfrastructureMetricsHasBeenSet() const { return m_enhancedInfrastructureMetricsHasBeenSet; }
    inline void SetEnhancedInfrastructureMetrics(const EnhancedInfrastructureMetrics& value) { m_enhancedInfrastructureMetricsHasBeenSet = true; m_enhancedInfrastructureMetrics = value; }
    inline void SetEnhancedInfrastructureMetrics(EnhancedInfrastructureMetrics&& value) { m_enhancedInfrastructureMetricsHasBeenSet = true; m_enhancedInfrastructureMetrics = std::move(value); }
    inline RDSEffectiveRecommendationPreferences& WithEnhancedInfrastructureMetrics(const EnhancedInfrastructureMetrics& value) { SetEnhancedInfrastructureMetrics(value); return *this;}
    inline RDSEffectiveRecommendationPreferences& WithEnhancedInfrastructureMetrics(EnhancedInfrastructureMetrics&& value) { SetEnhancedInfrastructureMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of days the utilization metrics of the Amazon RDS are analyzed.
     * </p>
     */
    inline const LookBackPeriodPreference& GetLookBackPeriod() const{ return m_lookBackPeriod; }
    inline bool LookBackPeriodHasBeenSet() const { return m_lookBackPeriodHasBeenSet; }
    inline void SetLookBackPeriod(const LookBackPeriodPreference& value) { m_lookBackPeriodHasBeenSet = true; m_lookBackPeriod = value; }
    inline void SetLookBackPeriod(LookBackPeriodPreference&& value) { m_lookBackPeriodHasBeenSet = true; m_lookBackPeriod = std::move(value); }
    inline RDSEffectiveRecommendationPreferences& WithLookBackPeriod(const LookBackPeriodPreference& value) { SetLookBackPeriod(value); return *this;}
    inline RDSEffectiveRecommendationPreferences& WithLookBackPeriod(LookBackPeriodPreference&& value) { SetLookBackPeriod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the savings estimation mode preference applied for calculating
     * savings opportunity for Amazon RDS. </p>
     */
    inline const RDSSavingsEstimationMode& GetSavingsEstimationMode() const{ return m_savingsEstimationMode; }
    inline bool SavingsEstimationModeHasBeenSet() const { return m_savingsEstimationModeHasBeenSet; }
    inline void SetSavingsEstimationMode(const RDSSavingsEstimationMode& value) { m_savingsEstimationModeHasBeenSet = true; m_savingsEstimationMode = value; }
    inline void SetSavingsEstimationMode(RDSSavingsEstimationMode&& value) { m_savingsEstimationModeHasBeenSet = true; m_savingsEstimationMode = std::move(value); }
    inline RDSEffectiveRecommendationPreferences& WithSavingsEstimationMode(const RDSSavingsEstimationMode& value) { SetSavingsEstimationMode(value); return *this;}
    inline RDSEffectiveRecommendationPreferences& WithSavingsEstimationMode(RDSSavingsEstimationMode&& value) { SetSavingsEstimationMode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CpuVendorArchitecture> m_cpuVendorArchitectures;
    bool m_cpuVendorArchitecturesHasBeenSet = false;

    EnhancedInfrastructureMetrics m_enhancedInfrastructureMetrics;
    bool m_enhancedInfrastructureMetricsHasBeenSet = false;

    LookBackPeriodPreference m_lookBackPeriod;
    bool m_lookBackPeriodHasBeenSet = false;

    RDSSavingsEstimationMode m_savingsEstimationMode;
    bool m_savingsEstimationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
