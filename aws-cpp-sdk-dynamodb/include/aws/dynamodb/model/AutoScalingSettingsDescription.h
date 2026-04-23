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
   * <p>Represents the autoscaling settings for a global table or global secondary
   * index.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/AutoScalingSettingsDescription">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API AutoScalingSettingsDescription
  {
  public:
    AutoScalingSettingsDescription();
    AutoScalingSettingsDescription(Aws::Utils::Json::JsonView jsonValue);
    AutoScalingSettingsDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum capacity units that a global table or global secondary index
     * should be scaled down to.</p>
     */
    inline long long GetMinimumUnits() const{ return m_minimumUnits; }

    /**
     * <p>The minimum capacity units that a global table or global secondary index
     * should be scaled down to.</p>
     */
    inline bool MinimumUnitsHasBeenSet() const { return m_minimumUnitsHasBeenSet; }

    /**
     * <p>The minimum capacity units that a global table or global secondary index
     * should be scaled down to.</p>
     */
    inline void SetMinimumUnits(long long value) { m_minimumUnitsHasBeenSet = true; m_minimumUnits = value; }

    /**
     * <p>The minimum capacity units that a global table or global secondary index
     * should be scaled down to.</p>
     */
    inline AutoScalingSettingsDescription& WithMinimumUnits(long long value) { SetMinimumUnits(value); return *this;}


    /**
     * <p>The maximum capacity units that a global table or global secondary index
     * should be scaled up to.</p>
     */
    inline long long GetMaximumUnits() const{ return m_maximumUnits; }

    /**
     * <p>The maximum capacity units that a global table or global secondary index
     * should be scaled up to.</p>
     */
    inline bool MaximumUnitsHasBeenSet() const { return m_maximumUnitsHasBeenSet; }

    /**
     * <p>The maximum capacity units that a global table or global secondary index
     * should be scaled up to.</p>
     */
    inline void SetMaximumUnits(long long value) { m_maximumUnitsHasBeenSet = true; m_maximumUnits = value; }

    /**
     * <p>The maximum capacity units that a global table or global secondary index
     * should be scaled up to.</p>
     */
    inline AutoScalingSettingsDescription& WithMaximumUnits(long long value) { SetMaximumUnits(value); return *this;}


    /**
     * <p>Disabled autoscaling for this global table or global secondary index.</p>
     */
    inline bool GetAutoScalingDisabled() const{ return m_autoScalingDisabled; }

    /**
     * <p>Disabled autoscaling for this global table or global secondary index.</p>
     */
    inline bool AutoScalingDisabledHasBeenSet() const { return m_autoScalingDisabledHasBeenSet; }

    /**
     * <p>Disabled autoscaling for this global table or global secondary index.</p>
     */
    inline void SetAutoScalingDisabled(bool value) { m_autoScalingDisabledHasBeenSet = true; m_autoScalingDisabled = value; }

    /**
     * <p>Disabled autoscaling for this global table or global secondary index.</p>
     */
    inline AutoScalingSettingsDescription& WithAutoScalingDisabled(bool value) { SetAutoScalingDisabled(value); return *this;}


    /**
     * <p>Role ARN used for configuring autoScaling policy.</p>
     */
    inline const Aws::String& GetAutoScalingRoleArn() const{ return m_autoScalingRoleArn; }

    /**
     * <p>Role ARN used for configuring autoScaling policy.</p>
     */
    inline bool AutoScalingRoleArnHasBeenSet() const { return m_autoScalingRoleArnHasBeenSet; }

    /**
     * <p>Role ARN used for configuring autoScaling policy.</p>
     */
    inline void SetAutoScalingRoleArn(const Aws::String& value) { m_autoScalingRoleArnHasBeenSet = true; m_autoScalingRoleArn = value; }

    /**
     * <p>Role ARN used for configuring autoScaling policy.</p>
     */
    inline void SetAutoScalingRoleArn(Aws::String&& value) { m_autoScalingRoleArnHasBeenSet = true; m_autoScalingRoleArn = std::move(value); }

    /**
     * <p>Role ARN used for configuring autoScaling policy.</p>
     */
    inline void SetAutoScalingRoleArn(const char* value) { m_autoScalingRoleArnHasBeenSet = true; m_autoScalingRoleArn.assign(value); }

    /**
     * <p>Role ARN used for configuring autoScaling policy.</p>
     */
    inline AutoScalingSettingsDescription& WithAutoScalingRoleArn(const Aws::String& value) { SetAutoScalingRoleArn(value); return *this;}

    /**
     * <p>Role ARN used for configuring autoScaling policy.</p>
     */
    inline AutoScalingSettingsDescription& WithAutoScalingRoleArn(Aws::String&& value) { SetAutoScalingRoleArn(std::move(value)); return *this;}

    /**
     * <p>Role ARN used for configuring autoScaling policy.</p>
     */
    inline AutoScalingSettingsDescription& WithAutoScalingRoleArn(const char* value) { SetAutoScalingRoleArn(value); return *this;}


    /**
     * <p>Information about the scaling policies.</p>
     */
    inline const Aws::Vector<AutoScalingPolicyDescription>& GetScalingPolicies() const{ return m_scalingPolicies; }

    /**
     * <p>Information about the scaling policies.</p>
     */
    inline bool ScalingPoliciesHasBeenSet() const { return m_scalingPoliciesHasBeenSet; }

    /**
     * <p>Information about the scaling policies.</p>
     */
    inline void SetScalingPolicies(const Aws::Vector<AutoScalingPolicyDescription>& value) { m_scalingPoliciesHasBeenSet = true; m_scalingPolicies = value; }

    /**
     * <p>Information about the scaling policies.</p>
     */
    inline void SetScalingPolicies(Aws::Vector<AutoScalingPolicyDescription>&& value) { m_scalingPoliciesHasBeenSet = true; m_scalingPolicies = std::move(value); }

    /**
     * <p>Information about the scaling policies.</p>
     */
    inline AutoScalingSettingsDescription& WithScalingPolicies(const Aws::Vector<AutoScalingPolicyDescription>& value) { SetScalingPolicies(value); return *this;}

    /**
     * <p>Information about the scaling policies.</p>
     */
    inline AutoScalingSettingsDescription& WithScalingPolicies(Aws::Vector<AutoScalingPolicyDescription>&& value) { SetScalingPolicies(std::move(value)); return *this;}

    /**
     * <p>Information about the scaling policies.</p>
     */
    inline AutoScalingSettingsDescription& AddScalingPolicies(const AutoScalingPolicyDescription& value) { m_scalingPoliciesHasBeenSet = true; m_scalingPolicies.push_back(value); return *this; }

    /**
     * <p>Information about the scaling policies.</p>
     */
    inline AutoScalingSettingsDescription& AddScalingPolicies(AutoScalingPolicyDescription&& value) { m_scalingPoliciesHasBeenSet = true; m_scalingPolicies.push_back(std::move(value)); return *this; }

  private:

    long long m_minimumUnits;
    bool m_minimumUnitsHasBeenSet;

    long long m_maximumUnits;
    bool m_maximumUnitsHasBeenSet;

    bool m_autoScalingDisabled;
    bool m_autoScalingDisabledHasBeenSet;

    Aws::String m_autoScalingRoleArn;
    bool m_autoScalingRoleArnHasBeenSet;

    Aws::Vector<AutoScalingPolicyDescription> m_scalingPolicies;
    bool m_scalingPoliciesHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
