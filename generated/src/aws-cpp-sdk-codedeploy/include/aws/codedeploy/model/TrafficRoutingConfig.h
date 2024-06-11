/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/TrafficRoutingType.h>
#include <aws/codedeploy/model/TimeBasedCanary.h>
#include <aws/codedeploy/model/TimeBasedLinear.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>The configuration that specifies how traffic is shifted from one version of a
   * Lambda function to another version during an Lambda deployment, or from one
   * Amazon ECS task set to another during an Amazon ECS deployment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/TrafficRoutingConfig">AWS
   * API Reference</a></p>
   */
  class TrafficRoutingConfig
  {
  public:
    AWS_CODEDEPLOY_API TrafficRoutingConfig();
    AWS_CODEDEPLOY_API TrafficRoutingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API TrafficRoutingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of traffic shifting (<code>TimeBasedCanary</code> or
     * <code>TimeBasedLinear</code>) used by a deployment configuration.</p>
     */
    inline const TrafficRoutingType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TrafficRoutingType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TrafficRoutingType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline TrafficRoutingConfig& WithType(const TrafficRoutingType& value) { SetType(value); return *this;}
    inline TrafficRoutingConfig& WithType(TrafficRoutingType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A configuration that shifts traffic from one version of a Lambda function or
     * ECS task set to another in two increments. The original and target Lambda
     * function versions or ECS task sets are specified in the deployment's AppSpec
     * file.</p>
     */
    inline const TimeBasedCanary& GetTimeBasedCanary() const{ return m_timeBasedCanary; }
    inline bool TimeBasedCanaryHasBeenSet() const { return m_timeBasedCanaryHasBeenSet; }
    inline void SetTimeBasedCanary(const TimeBasedCanary& value) { m_timeBasedCanaryHasBeenSet = true; m_timeBasedCanary = value; }
    inline void SetTimeBasedCanary(TimeBasedCanary&& value) { m_timeBasedCanaryHasBeenSet = true; m_timeBasedCanary = std::move(value); }
    inline TrafficRoutingConfig& WithTimeBasedCanary(const TimeBasedCanary& value) { SetTimeBasedCanary(value); return *this;}
    inline TrafficRoutingConfig& WithTimeBasedCanary(TimeBasedCanary&& value) { SetTimeBasedCanary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A configuration that shifts traffic from one version of a Lambda function or
     * Amazon ECS task set to another in equal increments, with an equal number of
     * minutes between each increment. The original and target Lambda function versions
     * or Amazon ECS task sets are specified in the deployment's AppSpec file.</p>
     */
    inline const TimeBasedLinear& GetTimeBasedLinear() const{ return m_timeBasedLinear; }
    inline bool TimeBasedLinearHasBeenSet() const { return m_timeBasedLinearHasBeenSet; }
    inline void SetTimeBasedLinear(const TimeBasedLinear& value) { m_timeBasedLinearHasBeenSet = true; m_timeBasedLinear = value; }
    inline void SetTimeBasedLinear(TimeBasedLinear&& value) { m_timeBasedLinearHasBeenSet = true; m_timeBasedLinear = std::move(value); }
    inline TrafficRoutingConfig& WithTimeBasedLinear(const TimeBasedLinear& value) { SetTimeBasedLinear(value); return *this;}
    inline TrafficRoutingConfig& WithTimeBasedLinear(TimeBasedLinear&& value) { SetTimeBasedLinear(std::move(value)); return *this;}
    ///@}
  private:

    TrafficRoutingType m_type;
    bool m_typeHasBeenSet = false;

    TimeBasedCanary m_timeBasedCanary;
    bool m_timeBasedCanaryHasBeenSet = false;

    TimeBasedLinear m_timeBasedLinear;
    bool m_timeBasedLinearHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
