/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOTTHINGSGRAPH_API MetricsConfiguration
  {
  public:
    MetricsConfiguration();
    MetricsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    MetricsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_cloudMetricEnabledHasBeenSet;

    Aws::String m_metricRuleRoleArn;
    bool m_metricRuleRoleArnHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
