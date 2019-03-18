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
#include <aws/dynamodb/model/AutoScalingTargetTrackingScalingPolicyConfigurationDescription.h>
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
   * <p>Represents the properties of the scaling policy.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/AutoScalingPolicyDescription">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API AutoScalingPolicyDescription
  {
  public:
    AutoScalingPolicyDescription();
    AutoScalingPolicyDescription(Aws::Utils::Json::JsonView jsonValue);
    AutoScalingPolicyDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the scaling policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline AutoScalingPolicyDescription& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline AutoScalingPolicyDescription& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline AutoScalingPolicyDescription& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>Represents a target tracking scaling policy configuration.</p>
     */
    inline const AutoScalingTargetTrackingScalingPolicyConfigurationDescription& GetTargetTrackingScalingPolicyConfiguration() const{ return m_targetTrackingScalingPolicyConfiguration; }

    /**
     * <p>Represents a target tracking scaling policy configuration.</p>
     */
    inline bool TargetTrackingScalingPolicyConfigurationHasBeenSet() const { return m_targetTrackingScalingPolicyConfigurationHasBeenSet; }

    /**
     * <p>Represents a target tracking scaling policy configuration.</p>
     */
    inline void SetTargetTrackingScalingPolicyConfiguration(const AutoScalingTargetTrackingScalingPolicyConfigurationDescription& value) { m_targetTrackingScalingPolicyConfigurationHasBeenSet = true; m_targetTrackingScalingPolicyConfiguration = value; }

    /**
     * <p>Represents a target tracking scaling policy configuration.</p>
     */
    inline void SetTargetTrackingScalingPolicyConfiguration(AutoScalingTargetTrackingScalingPolicyConfigurationDescription&& value) { m_targetTrackingScalingPolicyConfigurationHasBeenSet = true; m_targetTrackingScalingPolicyConfiguration = std::move(value); }

    /**
     * <p>Represents a target tracking scaling policy configuration.</p>
     */
    inline AutoScalingPolicyDescription& WithTargetTrackingScalingPolicyConfiguration(const AutoScalingTargetTrackingScalingPolicyConfigurationDescription& value) { SetTargetTrackingScalingPolicyConfiguration(value); return *this;}

    /**
     * <p>Represents a target tracking scaling policy configuration.</p>
     */
    inline AutoScalingPolicyDescription& WithTargetTrackingScalingPolicyConfiguration(AutoScalingTargetTrackingScalingPolicyConfigurationDescription&& value) { SetTargetTrackingScalingPolicyConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;

    AutoScalingTargetTrackingScalingPolicyConfigurationDescription m_targetTrackingScalingPolicyConfiguration;
    bool m_targetTrackingScalingPolicyConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
