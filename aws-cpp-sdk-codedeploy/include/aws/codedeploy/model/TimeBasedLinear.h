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
   * another in equal increments, with an equal number of minutes between each
   * increment. The original and target Lambda function versions are specified in the
   * deployment's AppSpec file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/TimeBasedLinear">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API TimeBasedLinear
  {
  public:
    TimeBasedLinear();
    TimeBasedLinear(Aws::Utils::Json::JsonView jsonValue);
    TimeBasedLinear& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_linearPercentageHasBeenSet;

    int m_linearInterval;
    bool m_linearIntervalHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
