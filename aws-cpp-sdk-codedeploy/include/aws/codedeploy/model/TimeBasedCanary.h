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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>

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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>A configuration that shifts traffic from one version of a Lambda function to
   * another in two increments. The original and target Lambda function versions are
   * specified in the deployment's AppSpec file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/TimeBasedCanary">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API TimeBasedCanary
  {
  public:
    TimeBasedCanary();
    TimeBasedCanary(Aws::Utils::Json::JsonView jsonValue);
    TimeBasedCanary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The percentage of traffic to shift in the first increment of a
     * <code>TimeBasedCanary</code> deployment.</p>
     */
    inline int GetCanaryPercentage() const{ return m_canaryPercentage; }

    /**
     * <p>The percentage of traffic to shift in the first increment of a
     * <code>TimeBasedCanary</code> deployment.</p>
     */
    inline bool CanaryPercentageHasBeenSet() const { return m_canaryPercentageHasBeenSet; }

    /**
     * <p>The percentage of traffic to shift in the first increment of a
     * <code>TimeBasedCanary</code> deployment.</p>
     */
    inline void SetCanaryPercentage(int value) { m_canaryPercentageHasBeenSet = true; m_canaryPercentage = value; }

    /**
     * <p>The percentage of traffic to shift in the first increment of a
     * <code>TimeBasedCanary</code> deployment.</p>
     */
    inline TimeBasedCanary& WithCanaryPercentage(int value) { SetCanaryPercentage(value); return *this;}


    /**
     * <p>The number of minutes between the first and second traffic shifts of a
     * <code>TimeBasedCanary</code> deployment.</p>
     */
    inline int GetCanaryInterval() const{ return m_canaryInterval; }

    /**
     * <p>The number of minutes between the first and second traffic shifts of a
     * <code>TimeBasedCanary</code> deployment.</p>
     */
    inline bool CanaryIntervalHasBeenSet() const { return m_canaryIntervalHasBeenSet; }

    /**
     * <p>The number of minutes between the first and second traffic shifts of a
     * <code>TimeBasedCanary</code> deployment.</p>
     */
    inline void SetCanaryInterval(int value) { m_canaryIntervalHasBeenSet = true; m_canaryInterval = value; }

    /**
     * <p>The number of minutes between the first and second traffic shifts of a
     * <code>TimeBasedCanary</code> deployment.</p>
     */
    inline TimeBasedCanary& WithCanaryInterval(int value) { SetCanaryInterval(value); return *this;}

  private:

    int m_canaryPercentage;
    bool m_canaryPercentageHasBeenSet;

    int m_canaryInterval;
    bool m_canaryIntervalHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
