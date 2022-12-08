/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AutoScalingPolicyDescription
  {
  public:
    AWS_DYNAMODB_API AutoScalingPolicyDescription();
    AWS_DYNAMODB_API AutoScalingPolicyDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API AutoScalingPolicyDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_policyNameHasBeenSet = false;

    AutoScalingTargetTrackingScalingPolicyConfigurationDescription m_targetTrackingScalingPolicyConfiguration;
    bool m_targetTrackingScalingPolicyConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
