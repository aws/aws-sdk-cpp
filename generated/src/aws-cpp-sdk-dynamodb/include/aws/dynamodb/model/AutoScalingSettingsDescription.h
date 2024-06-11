﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/AutoScalingPolicyDescription.h>
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
   * <p>Represents the auto scaling settings for a global table or global secondary
   * index.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/AutoScalingSettingsDescription">AWS
   * API Reference</a></p>
   */
  class AutoScalingSettingsDescription
  {
  public:
    AWS_DYNAMODB_API AutoScalingSettingsDescription();
    AWS_DYNAMODB_API AutoScalingSettingsDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API AutoScalingSettingsDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum capacity units that a global table or global secondary index
     * should be scaled down to.</p>
     */
    inline long long GetMinimumUnits() const{ return m_minimumUnits; }
    inline bool MinimumUnitsHasBeenSet() const { return m_minimumUnitsHasBeenSet; }
    inline void SetMinimumUnits(long long value) { m_minimumUnitsHasBeenSet = true; m_minimumUnits = value; }
    inline AutoScalingSettingsDescription& WithMinimumUnits(long long value) { SetMinimumUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum capacity units that a global table or global secondary index
     * should be scaled up to.</p>
     */
    inline long long GetMaximumUnits() const{ return m_maximumUnits; }
    inline bool MaximumUnitsHasBeenSet() const { return m_maximumUnitsHasBeenSet; }
    inline void SetMaximumUnits(long long value) { m_maximumUnitsHasBeenSet = true; m_maximumUnits = value; }
    inline AutoScalingSettingsDescription& WithMaximumUnits(long long value) { SetMaximumUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disabled auto scaling for this global table or global secondary index.</p>
     */
    inline bool GetAutoScalingDisabled() const{ return m_autoScalingDisabled; }
    inline bool AutoScalingDisabledHasBeenSet() const { return m_autoScalingDisabledHasBeenSet; }
    inline void SetAutoScalingDisabled(bool value) { m_autoScalingDisabledHasBeenSet = true; m_autoScalingDisabled = value; }
    inline AutoScalingSettingsDescription& WithAutoScalingDisabled(bool value) { SetAutoScalingDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Role ARN used for configuring the auto scaling policy.</p>
     */
    inline const Aws::String& GetAutoScalingRoleArn() const{ return m_autoScalingRoleArn; }
    inline bool AutoScalingRoleArnHasBeenSet() const { return m_autoScalingRoleArnHasBeenSet; }
    inline void SetAutoScalingRoleArn(const Aws::String& value) { m_autoScalingRoleArnHasBeenSet = true; m_autoScalingRoleArn = value; }
    inline void SetAutoScalingRoleArn(Aws::String&& value) { m_autoScalingRoleArnHasBeenSet = true; m_autoScalingRoleArn = std::move(value); }
    inline void SetAutoScalingRoleArn(const char* value) { m_autoScalingRoleArnHasBeenSet = true; m_autoScalingRoleArn.assign(value); }
    inline AutoScalingSettingsDescription& WithAutoScalingRoleArn(const Aws::String& value) { SetAutoScalingRoleArn(value); return *this;}
    inline AutoScalingSettingsDescription& WithAutoScalingRoleArn(Aws::String&& value) { SetAutoScalingRoleArn(std::move(value)); return *this;}
    inline AutoScalingSettingsDescription& WithAutoScalingRoleArn(const char* value) { SetAutoScalingRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the scaling policies.</p>
     */
    inline const Aws::Vector<AutoScalingPolicyDescription>& GetScalingPolicies() const{ return m_scalingPolicies; }
    inline bool ScalingPoliciesHasBeenSet() const { return m_scalingPoliciesHasBeenSet; }
    inline void SetScalingPolicies(const Aws::Vector<AutoScalingPolicyDescription>& value) { m_scalingPoliciesHasBeenSet = true; m_scalingPolicies = value; }
    inline void SetScalingPolicies(Aws::Vector<AutoScalingPolicyDescription>&& value) { m_scalingPoliciesHasBeenSet = true; m_scalingPolicies = std::move(value); }
    inline AutoScalingSettingsDescription& WithScalingPolicies(const Aws::Vector<AutoScalingPolicyDescription>& value) { SetScalingPolicies(value); return *this;}
    inline AutoScalingSettingsDescription& WithScalingPolicies(Aws::Vector<AutoScalingPolicyDescription>&& value) { SetScalingPolicies(std::move(value)); return *this;}
    inline AutoScalingSettingsDescription& AddScalingPolicies(const AutoScalingPolicyDescription& value) { m_scalingPoliciesHasBeenSet = true; m_scalingPolicies.push_back(value); return *this; }
    inline AutoScalingSettingsDescription& AddScalingPolicies(AutoScalingPolicyDescription&& value) { m_scalingPoliciesHasBeenSet = true; m_scalingPolicies.push_back(std::move(value)); return *this; }
    ///@}
  private:

    long long m_minimumUnits;
    bool m_minimumUnitsHasBeenSet = false;

    long long m_maximumUnits;
    bool m_maximumUnitsHasBeenSet = false;

    bool m_autoScalingDisabled;
    bool m_autoScalingDisabledHasBeenSet = false;

    Aws::String m_autoScalingRoleArn;
    bool m_autoScalingRoleArnHasBeenSet = false;

    Aws::Vector<AutoScalingPolicyDescription> m_scalingPolicies;
    bool m_scalingPoliciesHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
