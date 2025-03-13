/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling-plans/model/PolicyType.h>
#include <aws/autoscaling-plans/model/TargetTrackingConfiguration.h>
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
namespace AutoScalingPlans
{
namespace Model
{

  /**
   * <p>Represents a scaling policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/ScalingPolicy">AWS
   * API Reference</a></p>
   */
  class ScalingPolicy
  {
  public:
    AWS_AUTOSCALINGPLANS_API ScalingPolicy() = default;
    AWS_AUTOSCALINGPLANS_API ScalingPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUTOSCALINGPLANS_API ScalingPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUTOSCALINGPLANS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the scaling policy.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    ScalingPolicy& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of scaling policy.</p>
     */
    inline PolicyType GetPolicyType() const { return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    inline void SetPolicyType(PolicyType value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline ScalingPolicy& WithPolicyType(PolicyType value) { SetPolicyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target tracking scaling policy. Includes support for predefined or
     * customized metrics.</p>
     */
    inline const TargetTrackingConfiguration& GetTargetTrackingConfiguration() const { return m_targetTrackingConfiguration; }
    inline bool TargetTrackingConfigurationHasBeenSet() const { return m_targetTrackingConfigurationHasBeenSet; }
    template<typename TargetTrackingConfigurationT = TargetTrackingConfiguration>
    void SetTargetTrackingConfiguration(TargetTrackingConfigurationT&& value) { m_targetTrackingConfigurationHasBeenSet = true; m_targetTrackingConfiguration = std::forward<TargetTrackingConfigurationT>(value); }
    template<typename TargetTrackingConfigurationT = TargetTrackingConfiguration>
    ScalingPolicy& WithTargetTrackingConfiguration(TargetTrackingConfigurationT&& value) { SetTargetTrackingConfiguration(std::forward<TargetTrackingConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    PolicyType m_policyType{PolicyType::NOT_SET};
    bool m_policyTypeHasBeenSet = false;

    TargetTrackingConfiguration m_targetTrackingConfiguration;
    bool m_targetTrackingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
