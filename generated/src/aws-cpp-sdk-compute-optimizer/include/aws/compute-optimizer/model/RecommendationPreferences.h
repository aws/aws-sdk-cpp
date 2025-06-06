﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes the recommendation preferences to return in the response of a
   * <a>GetAutoScalingGroupRecommendations</a>, <a>GetEC2InstanceRecommendations</a>,
   * <a>GetEC2RecommendationProjectedMetrics</a>,
   * <a>GetRDSDatabaseRecommendations</a>, and
   * <a>GetRDSDatabaseRecommendationProjectedMetrics</a> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/RecommendationPreferences">AWS
   * API Reference</a></p>
   */
  class RecommendationPreferences
  {
  public:
    AWS_COMPUTEOPTIMIZER_API RecommendationPreferences() = default;
    AWS_COMPUTEOPTIMIZER_API RecommendationPreferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API RecommendationPreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the CPU vendor and architecture for Amazon EC2 instance and Auto
     * Scaling group recommendations.</p> <p>For example, when you specify
     * <code>AWS_ARM64</code> with:</p> <ul> <li> <p>A
     * <a>GetEC2InstanceRecommendations</a> or
     * <a>GetAutoScalingGroupRecommendations</a> request, Compute Optimizer returns
     * recommendations that consist of Graviton instance types only.</p> </li> <li>
     * <p>A <a>GetEC2RecommendationProjectedMetrics</a> request, Compute Optimizer
     * returns projected utilization metrics for Graviton instance type recommendations
     * only.</p> </li> <li> <p>A <a>ExportEC2InstanceRecommendations</a> or
     * <a>ExportAutoScalingGroupRecommendations</a> request, Compute Optimizer exports
     * recommendations that consist of Graviton instance types only.</p> </li> </ul>
     */
    inline const Aws::Vector<CpuVendorArchitecture>& GetCpuVendorArchitectures() const { return m_cpuVendorArchitectures; }
    inline bool CpuVendorArchitecturesHasBeenSet() const { return m_cpuVendorArchitecturesHasBeenSet; }
    template<typename CpuVendorArchitecturesT = Aws::Vector<CpuVendorArchitecture>>
    void SetCpuVendorArchitectures(CpuVendorArchitecturesT&& value) { m_cpuVendorArchitecturesHasBeenSet = true; m_cpuVendorArchitectures = std::forward<CpuVendorArchitecturesT>(value); }
    template<typename CpuVendorArchitecturesT = Aws::Vector<CpuVendorArchitecture>>
    RecommendationPreferences& WithCpuVendorArchitectures(CpuVendorArchitecturesT&& value) { SetCpuVendorArchitectures(std::forward<CpuVendorArchitecturesT>(value)); return *this;}
    inline RecommendationPreferences& AddCpuVendorArchitectures(CpuVendorArchitecture value) { m_cpuVendorArchitecturesHasBeenSet = true; m_cpuVendorArchitectures.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<CpuVendorArchitecture> m_cpuVendorArchitectures;
    bool m_cpuVendorArchitecturesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
