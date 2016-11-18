/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecs/ECS_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{

  /**
   * <p>Optional deployment parameters that control how many tasks run during the
   * deployment and the ordering of stopping and starting tasks.</p>
   */
  class AWS_ECS_API DeploymentConfiguration
  {
  public:
    DeploymentConfiguration();
    DeploymentConfiguration(const Aws::Utils::Json::JsonValue& jsonValue);
    DeploymentConfiguration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The upper limit (as a percentage of the service's <code>desiredCount</code>)
     * of the number of tasks that are allowed in the <code>RUNNING</code> or
     * <code>PENDING</code> state in a service during a deployment. The maximum number
     * of tasks during a deployment is the <code>desiredCount</code> multiplied by the
     * <code>maximumPercent</code>/100, rounded down to the nearest integer value.</p>
     */
    inline int GetMaximumPercent() const{ return m_maximumPercent; }

    /**
     * <p>The upper limit (as a percentage of the service's <code>desiredCount</code>)
     * of the number of tasks that are allowed in the <code>RUNNING</code> or
     * <code>PENDING</code> state in a service during a deployment. The maximum number
     * of tasks during a deployment is the <code>desiredCount</code> multiplied by the
     * <code>maximumPercent</code>/100, rounded down to the nearest integer value.</p>
     */
    inline void SetMaximumPercent(int value) { m_maximumPercentHasBeenSet = true; m_maximumPercent = value; }

    /**
     * <p>The upper limit (as a percentage of the service's <code>desiredCount</code>)
     * of the number of tasks that are allowed in the <code>RUNNING</code> or
     * <code>PENDING</code> state in a service during a deployment. The maximum number
     * of tasks during a deployment is the <code>desiredCount</code> multiplied by the
     * <code>maximumPercent</code>/100, rounded down to the nearest integer value.</p>
     */
    inline DeploymentConfiguration& WithMaximumPercent(int value) { SetMaximumPercent(value); return *this;}

    /**
     * <p>The lower limit (as a percentage of the service's <code>desiredCount</code>)
     * of the number of running tasks that must remain in the <code>RUNNING</code>
     * state in a service during a deployment. The minimum healthy tasks during a
     * deployment is the <code>desiredCount</code> multiplied by the
     * <code>minimumHealthyPercent</code>/100, rounded up to the nearest integer
     * value.</p>
     */
    inline int GetMinimumHealthyPercent() const{ return m_minimumHealthyPercent; }

    /**
     * <p>The lower limit (as a percentage of the service's <code>desiredCount</code>)
     * of the number of running tasks that must remain in the <code>RUNNING</code>
     * state in a service during a deployment. The minimum healthy tasks during a
     * deployment is the <code>desiredCount</code> multiplied by the
     * <code>minimumHealthyPercent</code>/100, rounded up to the nearest integer
     * value.</p>
     */
    inline void SetMinimumHealthyPercent(int value) { m_minimumHealthyPercentHasBeenSet = true; m_minimumHealthyPercent = value; }

    /**
     * <p>The lower limit (as a percentage of the service's <code>desiredCount</code>)
     * of the number of running tasks that must remain in the <code>RUNNING</code>
     * state in a service during a deployment. The minimum healthy tasks during a
     * deployment is the <code>desiredCount</code> multiplied by the
     * <code>minimumHealthyPercent</code>/100, rounded up to the nearest integer
     * value.</p>
     */
    inline DeploymentConfiguration& WithMinimumHealthyPercent(int value) { SetMinimumHealthyPercent(value); return *this;}

  private:
    int m_maximumPercent;
    bool m_maximumPercentHasBeenSet;
    int m_minimumHealthyPercent;
    bool m_minimumHealthyPercentHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
