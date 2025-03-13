/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/model/TargetTrackingScalingPolicyConfiguration.h>
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
namespace Keyspaces
{
namespace Model
{

  /**
   * <p>Amazon Keyspaces supports the <code>target tracking</code> auto scaling
   * policy. With this policy, Amazon Keyspaces auto scaling ensures that the table's
   * ratio of consumed to provisioned capacity stays at or near the target value that
   * you specify. You define the target value as a percentage between 20 and
   * 90.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/AutoScalingPolicy">AWS
   * API Reference</a></p>
   */
  class AutoScalingPolicy
  {
  public:
    AWS_KEYSPACES_API AutoScalingPolicy() = default;
    AWS_KEYSPACES_API AutoScalingPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API AutoScalingPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Auto scaling scales up capacity automatically when traffic exceeds this
     * target utilization rate, and then back down when it falls below the target. A
     * <code>double</code> between 20 and 90.</p>
     */
    inline const TargetTrackingScalingPolicyConfiguration& GetTargetTrackingScalingPolicyConfiguration() const { return m_targetTrackingScalingPolicyConfiguration; }
    inline bool TargetTrackingScalingPolicyConfigurationHasBeenSet() const { return m_targetTrackingScalingPolicyConfigurationHasBeenSet; }
    template<typename TargetTrackingScalingPolicyConfigurationT = TargetTrackingScalingPolicyConfiguration>
    void SetTargetTrackingScalingPolicyConfiguration(TargetTrackingScalingPolicyConfigurationT&& value) { m_targetTrackingScalingPolicyConfigurationHasBeenSet = true; m_targetTrackingScalingPolicyConfiguration = std::forward<TargetTrackingScalingPolicyConfigurationT>(value); }
    template<typename TargetTrackingScalingPolicyConfigurationT = TargetTrackingScalingPolicyConfiguration>
    AutoScalingPolicy& WithTargetTrackingScalingPolicyConfiguration(TargetTrackingScalingPolicyConfigurationT&& value) { SetTargetTrackingScalingPolicyConfiguration(std::forward<TargetTrackingScalingPolicyConfigurationT>(value)); return *this;}
    ///@}
  private:

    TargetTrackingScalingPolicyConfiguration m_targetTrackingScalingPolicyConfiguration;
    bool m_targetTrackingScalingPolicyConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
