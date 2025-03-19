/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/AutoScalingPolicyUpdate.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the auto scaling settings to be modified for a global table or
   * global secondary index.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/AutoScalingSettingsUpdate">AWS
   * API Reference</a></p>
   */
  class AutoScalingSettingsUpdate
  {
  public:
    AWS_DYNAMODB_API AutoScalingSettingsUpdate() = default;
    AWS_DYNAMODB_API AutoScalingSettingsUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API AutoScalingSettingsUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum capacity units that a global table or global secondary index
     * should be scaled down to.</p>
     */
    inline long long GetMinimumUnits() const { return m_minimumUnits; }
    inline bool MinimumUnitsHasBeenSet() const { return m_minimumUnitsHasBeenSet; }
    inline void SetMinimumUnits(long long value) { m_minimumUnitsHasBeenSet = true; m_minimumUnits = value; }
    inline AutoScalingSettingsUpdate& WithMinimumUnits(long long value) { SetMinimumUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum capacity units that a global table or global secondary index
     * should be scaled up to.</p>
     */
    inline long long GetMaximumUnits() const { return m_maximumUnits; }
    inline bool MaximumUnitsHasBeenSet() const { return m_maximumUnitsHasBeenSet; }
    inline void SetMaximumUnits(long long value) { m_maximumUnitsHasBeenSet = true; m_maximumUnits = value; }
    inline AutoScalingSettingsUpdate& WithMaximumUnits(long long value) { SetMaximumUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disabled auto scaling for this global table or global secondary index.</p>
     */
    inline bool GetAutoScalingDisabled() const { return m_autoScalingDisabled; }
    inline bool AutoScalingDisabledHasBeenSet() const { return m_autoScalingDisabledHasBeenSet; }
    inline void SetAutoScalingDisabled(bool value) { m_autoScalingDisabledHasBeenSet = true; m_autoScalingDisabled = value; }
    inline AutoScalingSettingsUpdate& WithAutoScalingDisabled(bool value) { SetAutoScalingDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Role ARN used for configuring auto scaling policy.</p>
     */
    inline const Aws::String& GetAutoScalingRoleArn() const { return m_autoScalingRoleArn; }
    inline bool AutoScalingRoleArnHasBeenSet() const { return m_autoScalingRoleArnHasBeenSet; }
    template<typename AutoScalingRoleArnT = Aws::String>
    void SetAutoScalingRoleArn(AutoScalingRoleArnT&& value) { m_autoScalingRoleArnHasBeenSet = true; m_autoScalingRoleArn = std::forward<AutoScalingRoleArnT>(value); }
    template<typename AutoScalingRoleArnT = Aws::String>
    AutoScalingSettingsUpdate& WithAutoScalingRoleArn(AutoScalingRoleArnT&& value) { SetAutoScalingRoleArn(std::forward<AutoScalingRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scaling policy to apply for scaling target global table or global
     * secondary index capacity units.</p>
     */
    inline const AutoScalingPolicyUpdate& GetScalingPolicyUpdate() const { return m_scalingPolicyUpdate; }
    inline bool ScalingPolicyUpdateHasBeenSet() const { return m_scalingPolicyUpdateHasBeenSet; }
    template<typename ScalingPolicyUpdateT = AutoScalingPolicyUpdate>
    void SetScalingPolicyUpdate(ScalingPolicyUpdateT&& value) { m_scalingPolicyUpdateHasBeenSet = true; m_scalingPolicyUpdate = std::forward<ScalingPolicyUpdateT>(value); }
    template<typename ScalingPolicyUpdateT = AutoScalingPolicyUpdate>
    AutoScalingSettingsUpdate& WithScalingPolicyUpdate(ScalingPolicyUpdateT&& value) { SetScalingPolicyUpdate(std::forward<ScalingPolicyUpdateT>(value)); return *this;}
    ///@}
  private:

    long long m_minimumUnits{0};
    bool m_minimumUnitsHasBeenSet = false;

    long long m_maximumUnits{0};
    bool m_maximumUnitsHasBeenSet = false;

    bool m_autoScalingDisabled{false};
    bool m_autoScalingDisabledHasBeenSet = false;

    Aws::String m_autoScalingRoleArn;
    bool m_autoScalingRoleArnHasBeenSet = false;

    AutoScalingPolicyUpdate m_scalingPolicyUpdate;
    bool m_scalingPolicyUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
