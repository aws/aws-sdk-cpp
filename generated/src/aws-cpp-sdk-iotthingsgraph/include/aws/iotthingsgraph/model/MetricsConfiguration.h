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
    AWS_IOTTHINGSGRAPH_API MetricsConfiguration();
    AWS_IOTTHINGSGRAPH_API MetricsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API MetricsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A Boolean that specifies whether cloud metrics are collected.</p>
     */
    inline bool GetCloudMetricEnabled() const{ return m_cloudMetricEnabled; }

    /**
     * <p>A Boolean that specifies whether cloud metrics are collected.</p>
     */
    inline bool CloudMetricEnabledHasBeenSet() const { return m_cloudMetricEnabledHasBeenSet; }

    /**
     * <p>A Boolean that specifies whether cloud metrics are collected.</p>
     */
    inline void SetCloudMetricEnabled(bool value) { m_cloudMetricEnabledHasBeenSet = true; m_cloudMetricEnabled = value; }

    /**
     * <p>A Boolean that specifies whether cloud metrics are collected.</p>
     */
    inline MetricsConfiguration& WithCloudMetricEnabled(bool value) { SetCloudMetricEnabled(value); return *this;}


    /**
     * <p>The ARN of the role that is used to collect cloud metrics.</p>
     */
    inline const Aws::String& GetMetricRuleRoleArn() const{ return m_metricRuleRoleArn; }

    /**
     * <p>The ARN of the role that is used to collect cloud metrics.</p>
     */
    inline bool MetricRuleRoleArnHasBeenSet() const { return m_metricRuleRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the role that is used to collect cloud metrics.</p>
     */
    inline void SetMetricRuleRoleArn(const Aws::String& value) { m_metricRuleRoleArnHasBeenSet = true; m_metricRuleRoleArn = value; }

    /**
     * <p>The ARN of the role that is used to collect cloud metrics.</p>
     */
    inline void SetMetricRuleRoleArn(Aws::String&& value) { m_metricRuleRoleArnHasBeenSet = true; m_metricRuleRoleArn = std::move(value); }

    /**
     * <p>The ARN of the role that is used to collect cloud metrics.</p>
     */
    inline void SetMetricRuleRoleArn(const char* value) { m_metricRuleRoleArnHasBeenSet = true; m_metricRuleRoleArn.assign(value); }

    /**
     * <p>The ARN of the role that is used to collect cloud metrics.</p>
     */
    inline MetricsConfiguration& WithMetricRuleRoleArn(const Aws::String& value) { SetMetricRuleRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role that is used to collect cloud metrics.</p>
     */
    inline MetricsConfiguration& WithMetricRuleRoleArn(Aws::String&& value) { SetMetricRuleRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role that is used to collect cloud metrics.</p>
     */
    inline MetricsConfiguration& WithMetricRuleRoleArn(const char* value) { SetMetricRuleRoleArn(value); return *this;}

  private:

    bool m_cloudMetricEnabled;
    bool m_cloudMetricEnabledHasBeenSet = false;

    Aws::String m_metricRuleRoleArn;
    bool m_metricRuleRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
