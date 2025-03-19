/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>A configuration that shifts traffic from one version of a Lambda function or
   * Amazon ECS task set to another in two increments. The original and target Lambda
   * function versions or ECS task sets are specified in the deployment's AppSpec
   * file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/TimeBasedCanary">AWS
   * API Reference</a></p>
   */
  class TimeBasedCanary
  {
  public:
    AWS_CODEDEPLOY_API TimeBasedCanary() = default;
    AWS_CODEDEPLOY_API TimeBasedCanary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API TimeBasedCanary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The percentage of traffic to shift in the first increment of a
     * <code>TimeBasedCanary</code> deployment.</p>
     */
    inline int GetCanaryPercentage() const { return m_canaryPercentage; }
    inline bool CanaryPercentageHasBeenSet() const { return m_canaryPercentageHasBeenSet; }
    inline void SetCanaryPercentage(int value) { m_canaryPercentageHasBeenSet = true; m_canaryPercentage = value; }
    inline TimeBasedCanary& WithCanaryPercentage(int value) { SetCanaryPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes between the first and second traffic shifts of a
     * <code>TimeBasedCanary</code> deployment.</p>
     */
    inline int GetCanaryInterval() const { return m_canaryInterval; }
    inline bool CanaryIntervalHasBeenSet() const { return m_canaryIntervalHasBeenSet; }
    inline void SetCanaryInterval(int value) { m_canaryIntervalHasBeenSet = true; m_canaryInterval = value; }
    inline TimeBasedCanary& WithCanaryInterval(int value) { SetCanaryInterval(value); return *this;}
    ///@}
  private:

    int m_canaryPercentage{0};
    bool m_canaryPercentageHasBeenSet = false;

    int m_canaryInterval{0};
    bool m_canaryIntervalHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
