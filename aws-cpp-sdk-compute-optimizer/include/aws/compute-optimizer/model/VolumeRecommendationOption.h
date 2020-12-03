/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/VolumeConfiguration.h>
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
   * <p>Describes a recommendation option for an Amazon Elastic Block Store (Amazon
   * EBS) instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/VolumeRecommendationOption">AWS
   * API Reference</a></p>
   */
  class AWS_COMPUTEOPTIMIZER_API VolumeRecommendationOption
  {
  public:
    VolumeRecommendationOption();
    VolumeRecommendationOption(Aws::Utils::Json::JsonView jsonValue);
    VolumeRecommendationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of objects that describe a volume configuration.</p>
     */
    inline const VolumeConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>An array of objects that describe a volume configuration.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>An array of objects that describe a volume configuration.</p>
     */
    inline void SetConfiguration(const VolumeConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>An array of objects that describe a volume configuration.</p>
     */
    inline void SetConfiguration(VolumeConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>An array of objects that describe a volume configuration.</p>
     */
    inline VolumeRecommendationOption& WithConfiguration(const VolumeConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>An array of objects that describe a volume configuration.</p>
     */
    inline VolumeRecommendationOption& WithConfiguration(VolumeConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The performance risk of the volume recommendation option.</p> <p>Performance
     * risk is the likelihood of the recommended volume type not meeting the
     * performance requirement of your workload.</p> <p>The lowest performance risk is
     * categorized as <code>0</code>, and the highest as <code>5</code>.</p>
     */
    inline double GetPerformanceRisk() const{ return m_performanceRisk; }

    /**
     * <p>The performance risk of the volume recommendation option.</p> <p>Performance
     * risk is the likelihood of the recommended volume type not meeting the
     * performance requirement of your workload.</p> <p>The lowest performance risk is
     * categorized as <code>0</code>, and the highest as <code>5</code>.</p>
     */
    inline bool PerformanceRiskHasBeenSet() const { return m_performanceRiskHasBeenSet; }

    /**
     * <p>The performance risk of the volume recommendation option.</p> <p>Performance
     * risk is the likelihood of the recommended volume type not meeting the
     * performance requirement of your workload.</p> <p>The lowest performance risk is
     * categorized as <code>0</code>, and the highest as <code>5</code>.</p>
     */
    inline void SetPerformanceRisk(double value) { m_performanceRiskHasBeenSet = true; m_performanceRisk = value; }

    /**
     * <p>The performance risk of the volume recommendation option.</p> <p>Performance
     * risk is the likelihood of the recommended volume type not meeting the
     * performance requirement of your workload.</p> <p>The lowest performance risk is
     * categorized as <code>0</code>, and the highest as <code>5</code>.</p>
     */
    inline VolumeRecommendationOption& WithPerformanceRisk(double value) { SetPerformanceRisk(value); return *this;}


    /**
     * <p>The rank of the volume recommendation option.</p> <p>The top recommendation
     * option is ranked as <code>1</code>.</p>
     */
    inline int GetRank() const{ return m_rank; }

    /**
     * <p>The rank of the volume recommendation option.</p> <p>The top recommendation
     * option is ranked as <code>1</code>.</p>
     */
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }

    /**
     * <p>The rank of the volume recommendation option.</p> <p>The top recommendation
     * option is ranked as <code>1</code>.</p>
     */
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }

    /**
     * <p>The rank of the volume recommendation option.</p> <p>The top recommendation
     * option is ranked as <code>1</code>.</p>
     */
    inline VolumeRecommendationOption& WithRank(int value) { SetRank(value); return *this;}

  private:

    VolumeConfiguration m_configuration;
    bool m_configurationHasBeenSet;

    double m_performanceRisk;
    bool m_performanceRiskHasBeenSet;

    int m_rank;
    bool m_rankHasBeenSet;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
