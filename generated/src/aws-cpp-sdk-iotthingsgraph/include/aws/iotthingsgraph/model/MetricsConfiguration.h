/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
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
namespace IoTThingsGraph
{
namespace Model
{

  /**
   * <p>An object that specifies whether cloud metrics are collected in a deployment
   * and, if so, what role is used to collect metrics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/MetricsConfiguration">AWS
   * API Reference</a></p>
   */
  class MetricsConfiguration
  {
  public:
    AWS_IOTTHINGSGRAPH_API MetricsConfiguration() = default;
    AWS_IOTTHINGSGRAPH_API MetricsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API MetricsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A Boolean that specifies whether cloud metrics are collected.</p>
     */
    inline bool GetCloudMetricEnabled() const { return m_cloudMetricEnabled; }
    inline bool CloudMetricEnabledHasBeenSet() const { return m_cloudMetricEnabledHasBeenSet; }
    inline void SetCloudMetricEnabled(bool value) { m_cloudMetricEnabledHasBeenSet = true; m_cloudMetricEnabled = value; }
    inline MetricsConfiguration& WithCloudMetricEnabled(bool value) { SetCloudMetricEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that is used to collect cloud metrics.</p>
     */
    inline const Aws::String& GetMetricRuleRoleArn() const { return m_metricRuleRoleArn; }
    inline bool MetricRuleRoleArnHasBeenSet() const { return m_metricRuleRoleArnHasBeenSet; }
    template<typename MetricRuleRoleArnT = Aws::String>
    void SetMetricRuleRoleArn(MetricRuleRoleArnT&& value) { m_metricRuleRoleArnHasBeenSet = true; m_metricRuleRoleArn = std::forward<MetricRuleRoleArnT>(value); }
    template<typename MetricRuleRoleArnT = Aws::String>
    MetricsConfiguration& WithMetricRuleRoleArn(MetricRuleRoleArnT&& value) { SetMetricRuleRoleArn(std::forward<MetricRuleRoleArnT>(value)); return *this;}
    ///@}
  private:

    bool m_cloudMetricEnabled{false};
    bool m_cloudMetricEnabledHasBeenSet = false;

    Aws::String m_metricRuleRoleArn;
    bool m_metricRuleRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
