/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/EnhancedInfrastructureMetrics.h>
#include <aws/compute-optimizer/model/InferredWorkloadTypesPreference.h>
#include <aws/compute-optimizer/model/ExternalMetricsPreference.h>
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
   * <p>Describes the effective recommendation preferences for a
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/EffectiveRecommendationPreferences">AWS
   * API Reference</a></p>
   */
  class EffectiveRecommendationPreferences
  {
  public:
    AWS_COMPUTEOPTIMIZER_API EffectiveRecommendationPreferences();
    AWS_COMPUTEOPTIMIZER_API EffectiveRecommendationPreferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API EffectiveRecommendationPreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the CPU vendor and architecture for an instance or Auto Scaling
     * group recommendations.</p> <p>For example, when you specify
     * <code>AWS_ARM64</code> with:</p> <ul> <li> <p>A
     * <a>GetEC2InstanceRecommendations</a> or
     * <a>GetAutoScalingGroupRecommendations</a> request, Compute Optimizer returns
     * recommendations that consist of Graviton2 instance types only.</p> </li> <li>
     * <p>A <a>GetEC2RecommendationProjectedMetrics</a> request, Compute Optimizer
     * returns projected utilization metrics for Graviton2 instance type
     * recommendations only.</p> </li> <li> <p>A
     * <a>ExportEC2InstanceRecommendations</a> or
     * <a>ExportAutoScalingGroupRecommendations</a> request, Compute Optimizer exports
     * recommendations that consist of Graviton2 instance types only.</p> </li> </ul>
     */
    inline const Aws::Vector<CpuVendorArchitecture>& GetCpuVendorArchitectures() const{ return m_cpuVendorArchitectures; }

    /**
     * <p>Describes the CPU vendor and architecture for an instance or Auto Scaling
     * group recommendations.</p> <p>For example, when you specify
     * <code>AWS_ARM64</code> with:</p> <ul> <li> <p>A
     * <a>GetEC2InstanceRecommendations</a> or
     * <a>GetAutoScalingGroupRecommendations</a> request, Compute Optimizer returns
     * recommendations that consist of Graviton2 instance types only.</p> </li> <li>
     * <p>A <a>GetEC2RecommendationProjectedMetrics</a> request, Compute Optimizer
     * returns projected utilization metrics for Graviton2 instance type
     * recommendations only.</p> </li> <li> <p>A
     * <a>ExportEC2InstanceRecommendations</a> or
     * <a>ExportAutoScalingGroupRecommendations</a> request, Compute Optimizer exports
     * recommendations that consist of Graviton2 instance types only.</p> </li> </ul>
     */
    inline bool CpuVendorArchitecturesHasBeenSet() const { return m_cpuVendorArchitecturesHasBeenSet; }

    /**
     * <p>Describes the CPU vendor and architecture for an instance or Auto Scaling
     * group recommendations.</p> <p>For example, when you specify
     * <code>AWS_ARM64</code> with:</p> <ul> <li> <p>A
     * <a>GetEC2InstanceRecommendations</a> or
     * <a>GetAutoScalingGroupRecommendations</a> request, Compute Optimizer returns
     * recommendations that consist of Graviton2 instance types only.</p> </li> <li>
     * <p>A <a>GetEC2RecommendationProjectedMetrics</a> request, Compute Optimizer
     * returns projected utilization metrics for Graviton2 instance type
     * recommendations only.</p> </li> <li> <p>A
     * <a>ExportEC2InstanceRecommendations</a> or
     * <a>ExportAutoScalingGroupRecommendations</a> request, Compute Optimizer exports
     * recommendations that consist of Graviton2 instance types only.</p> </li> </ul>
     */
    inline void SetCpuVendorArchitectures(const Aws::Vector<CpuVendorArchitecture>& value) { m_cpuVendorArchitecturesHasBeenSet = true; m_cpuVendorArchitectures = value; }

    /**
     * <p>Describes the CPU vendor and architecture for an instance or Auto Scaling
     * group recommendations.</p> <p>For example, when you specify
     * <code>AWS_ARM64</code> with:</p> <ul> <li> <p>A
     * <a>GetEC2InstanceRecommendations</a> or
     * <a>GetAutoScalingGroupRecommendations</a> request, Compute Optimizer returns
     * recommendations that consist of Graviton2 instance types only.</p> </li> <li>
     * <p>A <a>GetEC2RecommendationProjectedMetrics</a> request, Compute Optimizer
     * returns projected utilization metrics for Graviton2 instance type
     * recommendations only.</p> </li> <li> <p>A
     * <a>ExportEC2InstanceRecommendations</a> or
     * <a>ExportAutoScalingGroupRecommendations</a> request, Compute Optimizer exports
     * recommendations that consist of Graviton2 instance types only.</p> </li> </ul>
     */
    inline void SetCpuVendorArchitectures(Aws::Vector<CpuVendorArchitecture>&& value) { m_cpuVendorArchitecturesHasBeenSet = true; m_cpuVendorArchitectures = std::move(value); }

    /**
     * <p>Describes the CPU vendor and architecture for an instance or Auto Scaling
     * group recommendations.</p> <p>For example, when you specify
     * <code>AWS_ARM64</code> with:</p> <ul> <li> <p>A
     * <a>GetEC2InstanceRecommendations</a> or
     * <a>GetAutoScalingGroupRecommendations</a> request, Compute Optimizer returns
     * recommendations that consist of Graviton2 instance types only.</p> </li> <li>
     * <p>A <a>GetEC2RecommendationProjectedMetrics</a> request, Compute Optimizer
     * returns projected utilization metrics for Graviton2 instance type
     * recommendations only.</p> </li> <li> <p>A
     * <a>ExportEC2InstanceRecommendations</a> or
     * <a>ExportAutoScalingGroupRecommendations</a> request, Compute Optimizer exports
     * recommendations that consist of Graviton2 instance types only.</p> </li> </ul>
     */
    inline EffectiveRecommendationPreferences& WithCpuVendorArchitectures(const Aws::Vector<CpuVendorArchitecture>& value) { SetCpuVendorArchitectures(value); return *this;}

    /**
     * <p>Describes the CPU vendor and architecture for an instance or Auto Scaling
     * group recommendations.</p> <p>For example, when you specify
     * <code>AWS_ARM64</code> with:</p> <ul> <li> <p>A
     * <a>GetEC2InstanceRecommendations</a> or
     * <a>GetAutoScalingGroupRecommendations</a> request, Compute Optimizer returns
     * recommendations that consist of Graviton2 instance types only.</p> </li> <li>
     * <p>A <a>GetEC2RecommendationProjectedMetrics</a> request, Compute Optimizer
     * returns projected utilization metrics for Graviton2 instance type
     * recommendations only.</p> </li> <li> <p>A
     * <a>ExportEC2InstanceRecommendations</a> or
     * <a>ExportAutoScalingGroupRecommendations</a> request, Compute Optimizer exports
     * recommendations that consist of Graviton2 instance types only.</p> </li> </ul>
     */
    inline EffectiveRecommendationPreferences& WithCpuVendorArchitectures(Aws::Vector<CpuVendorArchitecture>&& value) { SetCpuVendorArchitectures(std::move(value)); return *this;}

    /**
     * <p>Describes the CPU vendor and architecture for an instance or Auto Scaling
     * group recommendations.</p> <p>For example, when you specify
     * <code>AWS_ARM64</code> with:</p> <ul> <li> <p>A
     * <a>GetEC2InstanceRecommendations</a> or
     * <a>GetAutoScalingGroupRecommendations</a> request, Compute Optimizer returns
     * recommendations that consist of Graviton2 instance types only.</p> </li> <li>
     * <p>A <a>GetEC2RecommendationProjectedMetrics</a> request, Compute Optimizer
     * returns projected utilization metrics for Graviton2 instance type
     * recommendations only.</p> </li> <li> <p>A
     * <a>ExportEC2InstanceRecommendations</a> or
     * <a>ExportAutoScalingGroupRecommendations</a> request, Compute Optimizer exports
     * recommendations that consist of Graviton2 instance types only.</p> </li> </ul>
     */
    inline EffectiveRecommendationPreferences& AddCpuVendorArchitectures(const CpuVendorArchitecture& value) { m_cpuVendorArchitecturesHasBeenSet = true; m_cpuVendorArchitectures.push_back(value); return *this; }

    /**
     * <p>Describes the CPU vendor and architecture for an instance or Auto Scaling
     * group recommendations.</p> <p>For example, when you specify
     * <code>AWS_ARM64</code> with:</p> <ul> <li> <p>A
     * <a>GetEC2InstanceRecommendations</a> or
     * <a>GetAutoScalingGroupRecommendations</a> request, Compute Optimizer returns
     * recommendations that consist of Graviton2 instance types only.</p> </li> <li>
     * <p>A <a>GetEC2RecommendationProjectedMetrics</a> request, Compute Optimizer
     * returns projected utilization metrics for Graviton2 instance type
     * recommendations only.</p> </li> <li> <p>A
     * <a>ExportEC2InstanceRecommendations</a> or
     * <a>ExportAutoScalingGroupRecommendations</a> request, Compute Optimizer exports
     * recommendations that consist of Graviton2 instance types only.</p> </li> </ul>
     */
    inline EffectiveRecommendationPreferences& AddCpuVendorArchitectures(CpuVendorArchitecture&& value) { m_cpuVendorArchitecturesHasBeenSet = true; m_cpuVendorArchitectures.push_back(std::move(value)); return *this; }


    /**
     * <p>Describes the activation status of the enhanced infrastructure metrics
     * preference.</p> <p>A status of <code>Active</code> confirms that the preference
     * is applied in the latest recommendation refresh, and a status of
     * <code>Inactive</code> confirms that it's not yet applied to recommendations.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Enhanced
     * infrastructure metrics</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline const EnhancedInfrastructureMetrics& GetEnhancedInfrastructureMetrics() const{ return m_enhancedInfrastructureMetrics; }

    /**
     * <p>Describes the activation status of the enhanced infrastructure metrics
     * preference.</p> <p>A status of <code>Active</code> confirms that the preference
     * is applied in the latest recommendation refresh, and a status of
     * <code>Inactive</code> confirms that it's not yet applied to recommendations.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Enhanced
     * infrastructure metrics</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline bool EnhancedInfrastructureMetricsHasBeenSet() const { return m_enhancedInfrastructureMetricsHasBeenSet; }

    /**
     * <p>Describes the activation status of the enhanced infrastructure metrics
     * preference.</p> <p>A status of <code>Active</code> confirms that the preference
     * is applied in the latest recommendation refresh, and a status of
     * <code>Inactive</code> confirms that it's not yet applied to recommendations.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Enhanced
     * infrastructure metrics</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline void SetEnhancedInfrastructureMetrics(const EnhancedInfrastructureMetrics& value) { m_enhancedInfrastructureMetricsHasBeenSet = true; m_enhancedInfrastructureMetrics = value; }

    /**
     * <p>Describes the activation status of the enhanced infrastructure metrics
     * preference.</p> <p>A status of <code>Active</code> confirms that the preference
     * is applied in the latest recommendation refresh, and a status of
     * <code>Inactive</code> confirms that it's not yet applied to recommendations.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Enhanced
     * infrastructure metrics</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline void SetEnhancedInfrastructureMetrics(EnhancedInfrastructureMetrics&& value) { m_enhancedInfrastructureMetricsHasBeenSet = true; m_enhancedInfrastructureMetrics = std::move(value); }

    /**
     * <p>Describes the activation status of the enhanced infrastructure metrics
     * preference.</p> <p>A status of <code>Active</code> confirms that the preference
     * is applied in the latest recommendation refresh, and a status of
     * <code>Inactive</code> confirms that it's not yet applied to recommendations.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Enhanced
     * infrastructure metrics</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline EffectiveRecommendationPreferences& WithEnhancedInfrastructureMetrics(const EnhancedInfrastructureMetrics& value) { SetEnhancedInfrastructureMetrics(value); return *this;}

    /**
     * <p>Describes the activation status of the enhanced infrastructure metrics
     * preference.</p> <p>A status of <code>Active</code> confirms that the preference
     * is applied in the latest recommendation refresh, and a status of
     * <code>Inactive</code> confirms that it's not yet applied to recommendations.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Enhanced
     * infrastructure metrics</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline EffectiveRecommendationPreferences& WithEnhancedInfrastructureMetrics(EnhancedInfrastructureMetrics&& value) { SetEnhancedInfrastructureMetrics(std::move(value)); return *this;}


    /**
     * <p>Describes the activation status of the inferred workload types
     * preference.</p> <p>A status of <code>Active</code> confirms that the preference
     * is applied in the latest recommendation refresh. A status of
     * <code>Inactive</code> confirms that it's not yet applied to recommendations.</p>
     */
    inline const InferredWorkloadTypesPreference& GetInferredWorkloadTypes() const{ return m_inferredWorkloadTypes; }

    /**
     * <p>Describes the activation status of the inferred workload types
     * preference.</p> <p>A status of <code>Active</code> confirms that the preference
     * is applied in the latest recommendation refresh. A status of
     * <code>Inactive</code> confirms that it's not yet applied to recommendations.</p>
     */
    inline bool InferredWorkloadTypesHasBeenSet() const { return m_inferredWorkloadTypesHasBeenSet; }

    /**
     * <p>Describes the activation status of the inferred workload types
     * preference.</p> <p>A status of <code>Active</code> confirms that the preference
     * is applied in the latest recommendation refresh. A status of
     * <code>Inactive</code> confirms that it's not yet applied to recommendations.</p>
     */
    inline void SetInferredWorkloadTypes(const InferredWorkloadTypesPreference& value) { m_inferredWorkloadTypesHasBeenSet = true; m_inferredWorkloadTypes = value; }

    /**
     * <p>Describes the activation status of the inferred workload types
     * preference.</p> <p>A status of <code>Active</code> confirms that the preference
     * is applied in the latest recommendation refresh. A status of
     * <code>Inactive</code> confirms that it's not yet applied to recommendations.</p>
     */
    inline void SetInferredWorkloadTypes(InferredWorkloadTypesPreference&& value) { m_inferredWorkloadTypesHasBeenSet = true; m_inferredWorkloadTypes = std::move(value); }

    /**
     * <p>Describes the activation status of the inferred workload types
     * preference.</p> <p>A status of <code>Active</code> confirms that the preference
     * is applied in the latest recommendation refresh. A status of
     * <code>Inactive</code> confirms that it's not yet applied to recommendations.</p>
     */
    inline EffectiveRecommendationPreferences& WithInferredWorkloadTypes(const InferredWorkloadTypesPreference& value) { SetInferredWorkloadTypes(value); return *this;}

    /**
     * <p>Describes the activation status of the inferred workload types
     * preference.</p> <p>A status of <code>Active</code> confirms that the preference
     * is applied in the latest recommendation refresh. A status of
     * <code>Inactive</code> confirms that it's not yet applied to recommendations.</p>
     */
    inline EffectiveRecommendationPreferences& WithInferredWorkloadTypes(InferredWorkloadTypesPreference&& value) { SetInferredWorkloadTypes(std::move(value)); return *this;}


    /**
     * <p> An object that describes the external metrics recommendation preference.
     * </p> <p> If the preference is applied in the latest recommendation refresh, an
     * object with a valid <code>source</code> value appears in the response. If the
     * preference isn't applied to the recommendations already, then this object
     * doesn't appear in the response. </p>
     */
    inline const ExternalMetricsPreference& GetExternalMetricsPreference() const{ return m_externalMetricsPreference; }

    /**
     * <p> An object that describes the external metrics recommendation preference.
     * </p> <p> If the preference is applied in the latest recommendation refresh, an
     * object with a valid <code>source</code> value appears in the response. If the
     * preference isn't applied to the recommendations already, then this object
     * doesn't appear in the response. </p>
     */
    inline bool ExternalMetricsPreferenceHasBeenSet() const { return m_externalMetricsPreferenceHasBeenSet; }

    /**
     * <p> An object that describes the external metrics recommendation preference.
     * </p> <p> If the preference is applied in the latest recommendation refresh, an
     * object with a valid <code>source</code> value appears in the response. If the
     * preference isn't applied to the recommendations already, then this object
     * doesn't appear in the response. </p>
     */
    inline void SetExternalMetricsPreference(const ExternalMetricsPreference& value) { m_externalMetricsPreferenceHasBeenSet = true; m_externalMetricsPreference = value; }

    /**
     * <p> An object that describes the external metrics recommendation preference.
     * </p> <p> If the preference is applied in the latest recommendation refresh, an
     * object with a valid <code>source</code> value appears in the response. If the
     * preference isn't applied to the recommendations already, then this object
     * doesn't appear in the response. </p>
     */
    inline void SetExternalMetricsPreference(ExternalMetricsPreference&& value) { m_externalMetricsPreferenceHasBeenSet = true; m_externalMetricsPreference = std::move(value); }

    /**
     * <p> An object that describes the external metrics recommendation preference.
     * </p> <p> If the preference is applied in the latest recommendation refresh, an
     * object with a valid <code>source</code> value appears in the response. If the
     * preference isn't applied to the recommendations already, then this object
     * doesn't appear in the response. </p>
     */
    inline EffectiveRecommendationPreferences& WithExternalMetricsPreference(const ExternalMetricsPreference& value) { SetExternalMetricsPreference(value); return *this;}

    /**
     * <p> An object that describes the external metrics recommendation preference.
     * </p> <p> If the preference is applied in the latest recommendation refresh, an
     * object with a valid <code>source</code> value appears in the response. If the
     * preference isn't applied to the recommendations already, then this object
     * doesn't appear in the response. </p>
     */
    inline EffectiveRecommendationPreferences& WithExternalMetricsPreference(ExternalMetricsPreference&& value) { SetExternalMetricsPreference(std::move(value)); return *this;}

  private:

    Aws::Vector<CpuVendorArchitecture> m_cpuVendorArchitectures;
    bool m_cpuVendorArchitecturesHasBeenSet = false;

    EnhancedInfrastructureMetrics m_enhancedInfrastructureMetrics;
    bool m_enhancedInfrastructureMetricsHasBeenSet = false;

    InferredWorkloadTypesPreference m_inferredWorkloadTypes;
    bool m_inferredWorkloadTypesHasBeenSet = false;

    ExternalMetricsPreference m_externalMetricsPreference;
    bool m_externalMetricsPreferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
