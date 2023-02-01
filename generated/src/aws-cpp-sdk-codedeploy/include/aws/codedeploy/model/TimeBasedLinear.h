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
   * ECS task set to another in equal increments, with an equal number of minutes
   * between each increment. The original and target Lambda function versions or ECS
   * task sets are specified in the deployment's AppSpec file.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/TimeBasedLinear">AWS
   * API Reference</a></p>
   */
  class TimeBasedLinear
  {
  public:
    AWS_CODEDEPLOY_API TimeBasedLinear();
    AWS_CODEDEPLOY_API TimeBasedLinear(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API TimeBasedLinear& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The percentage of traffic that is shifted at the start of each increment of a
     * <code>TimeBasedLinear</code> deployment.</p>
     */
    inline int GetLinearPercentage() const{ return m_linearPercentage; }

    /**
     * <p>The percentage of traffic that is shifted at the start of each increment of a
     * <code>TimeBasedLinear</code> deployment.</p>
     */
    inline bool LinearPercentageHasBeenSet() const { return m_linearPercentageHasBeenSet; }

    /**
     * <p>The percentage of traffic that is shifted at the start of each increment of a
     * <code>TimeBasedLinear</code> deployment.</p>
     */
    inline void SetLinearPercentage(int value) { m_linearPercentageHasBeenSet = true; m_linearPercentage = value; }

    /**
     * <p>The percentage of traffic that is shifted at the start of each increment of a
     * <code>TimeBasedLinear</code> deployment.</p>
     */
    inline TimeBasedLinear& WithLinearPercentage(int value) { SetLinearPercentage(value); return *this;}


    /**
     * <p>The number of minutes between each incremental traffic shift of a
     * <code>TimeBasedLinear</code> deployment.</p>
     */
    inline int GetLinearInterval() const{ return m_linearInterval; }

    /**
     * <p>The number of minutes between each incremental traffic shift of a
     * <code>TimeBasedLinear</code> deployment.</p>
     */
    inline bool LinearIntervalHasBeenSet() const { return m_linearIntervalHasBeenSet; }

    /**
     * <p>The number of minutes between each incremental traffic shift of a
     * <code>TimeBasedLinear</code> deployment.</p>
     */
    inline void SetLinearInterval(int value) { m_linearIntervalHasBeenSet = true; m_linearInterval = value; }

    /**
     * <p>The number of minutes between each incremental traffic shift of a
     * <code>TimeBasedLinear</code> deployment.</p>
     */
    inline TimeBasedLinear& WithLinearInterval(int value) { SetLinearInterval(value); return *this;}

  private:

    int m_linearPercentage;
    bool m_linearPercentageHasBeenSet = false;

    int m_linearInterval;
    bool m_linearIntervalHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
