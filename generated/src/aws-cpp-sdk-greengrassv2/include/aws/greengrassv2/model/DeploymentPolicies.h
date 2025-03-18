/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/model/DeploymentFailureHandlingPolicy.h>
#include <aws/greengrassv2/model/DeploymentComponentUpdatePolicy.h>
#include <aws/greengrassv2/model/DeploymentConfigurationValidationPolicy.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains information about policies that define how a deployment updates
   * components and handles failure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/DeploymentPolicies">AWS
   * API Reference</a></p>
   */
  class DeploymentPolicies
  {
  public:
    AWS_GREENGRASSV2_API DeploymentPolicies() = default;
    AWS_GREENGRASSV2_API DeploymentPolicies(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API DeploymentPolicies& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The failure handling policy for the configuration deployment. This policy
     * defines what to do if the deployment fails.</p> <p>Default:
     * <code>ROLLBACK</code> </p>
     */
    inline DeploymentFailureHandlingPolicy GetFailureHandlingPolicy() const { return m_failureHandlingPolicy; }
    inline bool FailureHandlingPolicyHasBeenSet() const { return m_failureHandlingPolicyHasBeenSet; }
    inline void SetFailureHandlingPolicy(DeploymentFailureHandlingPolicy value) { m_failureHandlingPolicyHasBeenSet = true; m_failureHandlingPolicy = value; }
    inline DeploymentPolicies& WithFailureHandlingPolicy(DeploymentFailureHandlingPolicy value) { SetFailureHandlingPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The component update policy for the configuration deployment. This policy
     * defines when it's safe to deploy the configuration to devices.</p>
     */
    inline const DeploymentComponentUpdatePolicy& GetComponentUpdatePolicy() const { return m_componentUpdatePolicy; }
    inline bool ComponentUpdatePolicyHasBeenSet() const { return m_componentUpdatePolicyHasBeenSet; }
    template<typename ComponentUpdatePolicyT = DeploymentComponentUpdatePolicy>
    void SetComponentUpdatePolicy(ComponentUpdatePolicyT&& value) { m_componentUpdatePolicyHasBeenSet = true; m_componentUpdatePolicy = std::forward<ComponentUpdatePolicyT>(value); }
    template<typename ComponentUpdatePolicyT = DeploymentComponentUpdatePolicy>
    DeploymentPolicies& WithComponentUpdatePolicy(ComponentUpdatePolicyT&& value) { SetComponentUpdatePolicy(std::forward<ComponentUpdatePolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration validation policy for the configuration deployment. This
     * policy defines how long each component has to validate its configure
     * updates.</p>
     */
    inline const DeploymentConfigurationValidationPolicy& GetConfigurationValidationPolicy() const { return m_configurationValidationPolicy; }
    inline bool ConfigurationValidationPolicyHasBeenSet() const { return m_configurationValidationPolicyHasBeenSet; }
    template<typename ConfigurationValidationPolicyT = DeploymentConfigurationValidationPolicy>
    void SetConfigurationValidationPolicy(ConfigurationValidationPolicyT&& value) { m_configurationValidationPolicyHasBeenSet = true; m_configurationValidationPolicy = std::forward<ConfigurationValidationPolicyT>(value); }
    template<typename ConfigurationValidationPolicyT = DeploymentConfigurationValidationPolicy>
    DeploymentPolicies& WithConfigurationValidationPolicy(ConfigurationValidationPolicyT&& value) { SetConfigurationValidationPolicy(std::forward<ConfigurationValidationPolicyT>(value)); return *this;}
    ///@}
  private:

    DeploymentFailureHandlingPolicy m_failureHandlingPolicy{DeploymentFailureHandlingPolicy::NOT_SET};
    bool m_failureHandlingPolicyHasBeenSet = false;

    DeploymentComponentUpdatePolicy m_componentUpdatePolicy;
    bool m_componentUpdatePolicyHasBeenSet = false;

    DeploymentConfigurationValidationPolicy m_configurationValidationPolicy;
    bool m_configurationValidationPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
