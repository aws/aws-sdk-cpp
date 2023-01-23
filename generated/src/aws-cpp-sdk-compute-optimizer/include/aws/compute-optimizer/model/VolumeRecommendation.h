/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/VolumeConfiguration.h>
#include <aws/compute-optimizer/model/EBSFinding.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/compute-optimizer/model/CurrentPerformanceRisk.h>
#include <aws/compute-optimizer/model/EBSUtilizationMetric.h>
#include <aws/compute-optimizer/model/VolumeRecommendationOption.h>
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
   * <p>Describes an Amazon Elastic Block Store (Amazon EBS) volume
   * recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/VolumeRecommendation">AWS
   * API Reference</a></p>
   */
  class VolumeRecommendation
  {
  public:
    AWS_COMPUTEOPTIMIZER_API VolumeRecommendation();
    AWS_COMPUTEOPTIMIZER_API VolumeRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API VolumeRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the current volume.</p>
     */
    inline const Aws::String& GetVolumeArn() const{ return m_volumeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the current volume.</p>
     */
    inline bool VolumeArnHasBeenSet() const { return m_volumeArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the current volume.</p>
     */
    inline void SetVolumeArn(const Aws::String& value) { m_volumeArnHasBeenSet = true; m_volumeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the current volume.</p>
     */
    inline void SetVolumeArn(Aws::String&& value) { m_volumeArnHasBeenSet = true; m_volumeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the current volume.</p>
     */
    inline void SetVolumeArn(const char* value) { m_volumeArnHasBeenSet = true; m_volumeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the current volume.</p>
     */
    inline VolumeRecommendation& WithVolumeArn(const Aws::String& value) { SetVolumeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the current volume.</p>
     */
    inline VolumeRecommendation& WithVolumeArn(Aws::String&& value) { SetVolumeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the current volume.</p>
     */
    inline VolumeRecommendation& WithVolumeArn(const char* value) { SetVolumeArn(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the volume.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID of the volume.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the volume.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the volume.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the volume.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the volume.</p>
     */
    inline VolumeRecommendation& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the volume.</p>
     */
    inline VolumeRecommendation& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the volume.</p>
     */
    inline VolumeRecommendation& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>An array of objects that describe the current configuration of the
     * volume.</p>
     */
    inline const VolumeConfiguration& GetCurrentConfiguration() const{ return m_currentConfiguration; }

    /**
     * <p>An array of objects that describe the current configuration of the
     * volume.</p>
     */
    inline bool CurrentConfigurationHasBeenSet() const { return m_currentConfigurationHasBeenSet; }

    /**
     * <p>An array of objects that describe the current configuration of the
     * volume.</p>
     */
    inline void SetCurrentConfiguration(const VolumeConfiguration& value) { m_currentConfigurationHasBeenSet = true; m_currentConfiguration = value; }

    /**
     * <p>An array of objects that describe the current configuration of the
     * volume.</p>
     */
    inline void SetCurrentConfiguration(VolumeConfiguration&& value) { m_currentConfigurationHasBeenSet = true; m_currentConfiguration = std::move(value); }

    /**
     * <p>An array of objects that describe the current configuration of the
     * volume.</p>
     */
    inline VolumeRecommendation& WithCurrentConfiguration(const VolumeConfiguration& value) { SetCurrentConfiguration(value); return *this;}

    /**
     * <p>An array of objects that describe the current configuration of the
     * volume.</p>
     */
    inline VolumeRecommendation& WithCurrentConfiguration(VolumeConfiguration&& value) { SetCurrentConfiguration(std::move(value)); return *this;}


    /**
     * <p>The finding classification of the volume.</p> <p>Findings for volumes
     * include:</p> <ul> <li> <p> <b> <code>NotOptimized</code> </b>—A volume is
     * considered not optimized when Compute Optimizer identifies a recommendation that
     * can provide better performance for your workload.</p> </li> <li> <p> <b>
     * <code>Optimized</code> </b>—An volume is considered optimized when Compute
     * Optimizer determines that the volume is correctly provisioned to run your
     * workload based on the chosen volume type. For optimized resources, Compute
     * Optimizer might recommend a new generation volume type.</p> </li> </ul>
     */
    inline const EBSFinding& GetFinding() const{ return m_finding; }

    /**
     * <p>The finding classification of the volume.</p> <p>Findings for volumes
     * include:</p> <ul> <li> <p> <b> <code>NotOptimized</code> </b>—A volume is
     * considered not optimized when Compute Optimizer identifies a recommendation that
     * can provide better performance for your workload.</p> </li> <li> <p> <b>
     * <code>Optimized</code> </b>—An volume is considered optimized when Compute
     * Optimizer determines that the volume is correctly provisioned to run your
     * workload based on the chosen volume type. For optimized resources, Compute
     * Optimizer might recommend a new generation volume type.</p> </li> </ul>
     */
    inline bool FindingHasBeenSet() const { return m_findingHasBeenSet; }

    /**
     * <p>The finding classification of the volume.</p> <p>Findings for volumes
     * include:</p> <ul> <li> <p> <b> <code>NotOptimized</code> </b>—A volume is
     * considered not optimized when Compute Optimizer identifies a recommendation that
     * can provide better performance for your workload.</p> </li> <li> <p> <b>
     * <code>Optimized</code> </b>—An volume is considered optimized when Compute
     * Optimizer determines that the volume is correctly provisioned to run your
     * workload based on the chosen volume type. For optimized resources, Compute
     * Optimizer might recommend a new generation volume type.</p> </li> </ul>
     */
    inline void SetFinding(const EBSFinding& value) { m_findingHasBeenSet = true; m_finding = value; }

    /**
     * <p>The finding classification of the volume.</p> <p>Findings for volumes
     * include:</p> <ul> <li> <p> <b> <code>NotOptimized</code> </b>—A volume is
     * considered not optimized when Compute Optimizer identifies a recommendation that
     * can provide better performance for your workload.</p> </li> <li> <p> <b>
     * <code>Optimized</code> </b>—An volume is considered optimized when Compute
     * Optimizer determines that the volume is correctly provisioned to run your
     * workload based on the chosen volume type. For optimized resources, Compute
     * Optimizer might recommend a new generation volume type.</p> </li> </ul>
     */
    inline void SetFinding(EBSFinding&& value) { m_findingHasBeenSet = true; m_finding = std::move(value); }

    /**
     * <p>The finding classification of the volume.</p> <p>Findings for volumes
     * include:</p> <ul> <li> <p> <b> <code>NotOptimized</code> </b>—A volume is
     * considered not optimized when Compute Optimizer identifies a recommendation that
     * can provide better performance for your workload.</p> </li> <li> <p> <b>
     * <code>Optimized</code> </b>—An volume is considered optimized when Compute
     * Optimizer determines that the volume is correctly provisioned to run your
     * workload based on the chosen volume type. For optimized resources, Compute
     * Optimizer might recommend a new generation volume type.</p> </li> </ul>
     */
    inline VolumeRecommendation& WithFinding(const EBSFinding& value) { SetFinding(value); return *this;}

    /**
     * <p>The finding classification of the volume.</p> <p>Findings for volumes
     * include:</p> <ul> <li> <p> <b> <code>NotOptimized</code> </b>—A volume is
     * considered not optimized when Compute Optimizer identifies a recommendation that
     * can provide better performance for your workload.</p> </li> <li> <p> <b>
     * <code>Optimized</code> </b>—An volume is considered optimized when Compute
     * Optimizer determines that the volume is correctly provisioned to run your
     * workload based on the chosen volume type. For optimized resources, Compute
     * Optimizer might recommend a new generation volume type.</p> </li> </ul>
     */
    inline VolumeRecommendation& WithFinding(EBSFinding&& value) { SetFinding(std::move(value)); return *this;}


    /**
     * <p>An array of objects that describe the utilization metrics of the volume.</p>
     */
    inline const Aws::Vector<EBSUtilizationMetric>& GetUtilizationMetrics() const{ return m_utilizationMetrics; }

    /**
     * <p>An array of objects that describe the utilization metrics of the volume.</p>
     */
    inline bool UtilizationMetricsHasBeenSet() const { return m_utilizationMetricsHasBeenSet; }

    /**
     * <p>An array of objects that describe the utilization metrics of the volume.</p>
     */
    inline void SetUtilizationMetrics(const Aws::Vector<EBSUtilizationMetric>& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics = value; }

    /**
     * <p>An array of objects that describe the utilization metrics of the volume.</p>
     */
    inline void SetUtilizationMetrics(Aws::Vector<EBSUtilizationMetric>&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics = std::move(value); }

    /**
     * <p>An array of objects that describe the utilization metrics of the volume.</p>
     */
    inline VolumeRecommendation& WithUtilizationMetrics(const Aws::Vector<EBSUtilizationMetric>& value) { SetUtilizationMetrics(value); return *this;}

    /**
     * <p>An array of objects that describe the utilization metrics of the volume.</p>
     */
    inline VolumeRecommendation& WithUtilizationMetrics(Aws::Vector<EBSUtilizationMetric>&& value) { SetUtilizationMetrics(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the utilization metrics of the volume.</p>
     */
    inline VolumeRecommendation& AddUtilizationMetrics(const EBSUtilizationMetric& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the utilization metrics of the volume.</p>
     */
    inline VolumeRecommendation& AddUtilizationMetrics(EBSUtilizationMetric&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of days for which utilization metrics were analyzed for the
     * volume.</p>
     */
    inline double GetLookBackPeriodInDays() const{ return m_lookBackPeriodInDays; }

    /**
     * <p>The number of days for which utilization metrics were analyzed for the
     * volume.</p>
     */
    inline bool LookBackPeriodInDaysHasBeenSet() const { return m_lookBackPeriodInDaysHasBeenSet; }

    /**
     * <p>The number of days for which utilization metrics were analyzed for the
     * volume.</p>
     */
    inline void SetLookBackPeriodInDays(double value) { m_lookBackPeriodInDaysHasBeenSet = true; m_lookBackPeriodInDays = value; }

    /**
     * <p>The number of days for which utilization metrics were analyzed for the
     * volume.</p>
     */
    inline VolumeRecommendation& WithLookBackPeriodInDays(double value) { SetLookBackPeriodInDays(value); return *this;}


    /**
     * <p>An array of objects that describe the recommendation options for the
     * volume.</p>
     */
    inline const Aws::Vector<VolumeRecommendationOption>& GetVolumeRecommendationOptions() const{ return m_volumeRecommendationOptions; }

    /**
     * <p>An array of objects that describe the recommendation options for the
     * volume.</p>
     */
    inline bool VolumeRecommendationOptionsHasBeenSet() const { return m_volumeRecommendationOptionsHasBeenSet; }

    /**
     * <p>An array of objects that describe the recommendation options for the
     * volume.</p>
     */
    inline void SetVolumeRecommendationOptions(const Aws::Vector<VolumeRecommendationOption>& value) { m_volumeRecommendationOptionsHasBeenSet = true; m_volumeRecommendationOptions = value; }

    /**
     * <p>An array of objects that describe the recommendation options for the
     * volume.</p>
     */
    inline void SetVolumeRecommendationOptions(Aws::Vector<VolumeRecommendationOption>&& value) { m_volumeRecommendationOptionsHasBeenSet = true; m_volumeRecommendationOptions = std::move(value); }

    /**
     * <p>An array of objects that describe the recommendation options for the
     * volume.</p>
     */
    inline VolumeRecommendation& WithVolumeRecommendationOptions(const Aws::Vector<VolumeRecommendationOption>& value) { SetVolumeRecommendationOptions(value); return *this;}

    /**
     * <p>An array of objects that describe the recommendation options for the
     * volume.</p>
     */
    inline VolumeRecommendation& WithVolumeRecommendationOptions(Aws::Vector<VolumeRecommendationOption>&& value) { SetVolumeRecommendationOptions(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the recommendation options for the
     * volume.</p>
     */
    inline VolumeRecommendation& AddVolumeRecommendationOptions(const VolumeRecommendationOption& value) { m_volumeRecommendationOptionsHasBeenSet = true; m_volumeRecommendationOptions.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the recommendation options for the
     * volume.</p>
     */
    inline VolumeRecommendation& AddVolumeRecommendationOptions(VolumeRecommendationOption&& value) { m_volumeRecommendationOptionsHasBeenSet = true; m_volumeRecommendationOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The timestamp of when the volume recommendation was last generated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTimestamp() const{ return m_lastRefreshTimestamp; }

    /**
     * <p>The timestamp of when the volume recommendation was last generated.</p>
     */
    inline bool LastRefreshTimestampHasBeenSet() const { return m_lastRefreshTimestampHasBeenSet; }

    /**
     * <p>The timestamp of when the volume recommendation was last generated.</p>
     */
    inline void SetLastRefreshTimestamp(const Aws::Utils::DateTime& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = value; }

    /**
     * <p>The timestamp of when the volume recommendation was last generated.</p>
     */
    inline void SetLastRefreshTimestamp(Aws::Utils::DateTime&& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = std::move(value); }

    /**
     * <p>The timestamp of when the volume recommendation was last generated.</p>
     */
    inline VolumeRecommendation& WithLastRefreshTimestamp(const Aws::Utils::DateTime& value) { SetLastRefreshTimestamp(value); return *this;}

    /**
     * <p>The timestamp of when the volume recommendation was last generated.</p>
     */
    inline VolumeRecommendation& WithLastRefreshTimestamp(Aws::Utils::DateTime&& value) { SetLastRefreshTimestamp(std::move(value)); return *this;}


    /**
     * <p>The risk of the current EBS volume not meeting the performance needs of its
     * workloads. The higher the risk, the more likely the current EBS volume doesn't
     * have sufficient capacity.</p>
     */
    inline const CurrentPerformanceRisk& GetCurrentPerformanceRisk() const{ return m_currentPerformanceRisk; }

    /**
     * <p>The risk of the current EBS volume not meeting the performance needs of its
     * workloads. The higher the risk, the more likely the current EBS volume doesn't
     * have sufficient capacity.</p>
     */
    inline bool CurrentPerformanceRiskHasBeenSet() const { return m_currentPerformanceRiskHasBeenSet; }

    /**
     * <p>The risk of the current EBS volume not meeting the performance needs of its
     * workloads. The higher the risk, the more likely the current EBS volume doesn't
     * have sufficient capacity.</p>
     */
    inline void SetCurrentPerformanceRisk(const CurrentPerformanceRisk& value) { m_currentPerformanceRiskHasBeenSet = true; m_currentPerformanceRisk = value; }

    /**
     * <p>The risk of the current EBS volume not meeting the performance needs of its
     * workloads. The higher the risk, the more likely the current EBS volume doesn't
     * have sufficient capacity.</p>
     */
    inline void SetCurrentPerformanceRisk(CurrentPerformanceRisk&& value) { m_currentPerformanceRiskHasBeenSet = true; m_currentPerformanceRisk = std::move(value); }

    /**
     * <p>The risk of the current EBS volume not meeting the performance needs of its
     * workloads. The higher the risk, the more likely the current EBS volume doesn't
     * have sufficient capacity.</p>
     */
    inline VolumeRecommendation& WithCurrentPerformanceRisk(const CurrentPerformanceRisk& value) { SetCurrentPerformanceRisk(value); return *this;}

    /**
     * <p>The risk of the current EBS volume not meeting the performance needs of its
     * workloads. The higher the risk, the more likely the current EBS volume doesn't
     * have sufficient capacity.</p>
     */
    inline VolumeRecommendation& WithCurrentPerformanceRisk(CurrentPerformanceRisk&& value) { SetCurrentPerformanceRisk(std::move(value)); return *this;}

  private:

    Aws::String m_volumeArn;
    bool m_volumeArnHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    VolumeConfiguration m_currentConfiguration;
    bool m_currentConfigurationHasBeenSet = false;

    EBSFinding m_finding;
    bool m_findingHasBeenSet = false;

    Aws::Vector<EBSUtilizationMetric> m_utilizationMetrics;
    bool m_utilizationMetricsHasBeenSet = false;

    double m_lookBackPeriodInDays;
    bool m_lookBackPeriodInDaysHasBeenSet = false;

    Aws::Vector<VolumeRecommendationOption> m_volumeRecommendationOptions;
    bool m_volumeRecommendationOptionsHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshTimestamp;
    bool m_lastRefreshTimestampHasBeenSet = false;

    CurrentPerformanceRisk m_currentPerformanceRisk;
    bool m_currentPerformanceRiskHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
