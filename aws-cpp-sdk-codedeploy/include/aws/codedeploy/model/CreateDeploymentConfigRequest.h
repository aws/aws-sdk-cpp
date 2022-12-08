/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/MinimumHealthyHosts.h>
#include <aws/codedeploy/model/TrafficRoutingConfig.h>
#include <aws/codedeploy/model/ComputePlatform.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>CreateDeploymentConfig</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateDeploymentConfigInput">AWS
   * API Reference</a></p>
   */
  class CreateDeploymentConfigRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API CreateDeploymentConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeploymentConfig"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the deployment configuration to create.</p>
     */
    inline const Aws::String& GetDeploymentConfigName() const{ return m_deploymentConfigName; }

    /**
     * <p>The name of the deployment configuration to create.</p>
     */
    inline bool DeploymentConfigNameHasBeenSet() const { return m_deploymentConfigNameHasBeenSet; }

    /**
     * <p>The name of the deployment configuration to create.</p>
     */
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    /**
     * <p>The name of the deployment configuration to create.</p>
     */
    inline void SetDeploymentConfigName(Aws::String&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = std::move(value); }

    /**
     * <p>The name of the deployment configuration to create.</p>
     */
    inline void SetDeploymentConfigName(const char* value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName.assign(value); }

    /**
     * <p>The name of the deployment configuration to create.</p>
     */
    inline CreateDeploymentConfigRequest& WithDeploymentConfigName(const Aws::String& value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>The name of the deployment configuration to create.</p>
     */
    inline CreateDeploymentConfigRequest& WithDeploymentConfigName(Aws::String&& value) { SetDeploymentConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of the deployment configuration to create.</p>
     */
    inline CreateDeploymentConfigRequest& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}


    /**
     * <p>The minimum number of healthy instances that should be available at any time
     * during the deployment. There are two parameters expected in the input: type and
     * value.</p> <p>The type parameter takes either of the following values:</p> <ul>
     * <li> <p>HOST_COUNT: The value parameter represents the minimum number of healthy
     * instances as an absolute value.</p> </li> <li> <p>FLEET_PERCENT: The value
     * parameter represents the minimum number of healthy instances as a percentage of
     * the total number of instances in the deployment. If you specify FLEET_PERCENT,
     * at the start of the deployment, CodeDeploy converts the percentage to the
     * equivalent number of instances and rounds up fractional instances.</p> </li>
     * </ul> <p>The value parameter takes an integer.</p> <p>For example, to set a
     * minimum of 95% healthy instance, specify a type of FLEET_PERCENT and a value of
     * 95.</p>
     */
    inline const MinimumHealthyHosts& GetMinimumHealthyHosts() const{ return m_minimumHealthyHosts; }

    /**
     * <p>The minimum number of healthy instances that should be available at any time
     * during the deployment. There are two parameters expected in the input: type and
     * value.</p> <p>The type parameter takes either of the following values:</p> <ul>
     * <li> <p>HOST_COUNT: The value parameter represents the minimum number of healthy
     * instances as an absolute value.</p> </li> <li> <p>FLEET_PERCENT: The value
     * parameter represents the minimum number of healthy instances as a percentage of
     * the total number of instances in the deployment. If you specify FLEET_PERCENT,
     * at the start of the deployment, CodeDeploy converts the percentage to the
     * equivalent number of instances and rounds up fractional instances.</p> </li>
     * </ul> <p>The value parameter takes an integer.</p> <p>For example, to set a
     * minimum of 95% healthy instance, specify a type of FLEET_PERCENT and a value of
     * 95.</p>
     */
    inline bool MinimumHealthyHostsHasBeenSet() const { return m_minimumHealthyHostsHasBeenSet; }

    /**
     * <p>The minimum number of healthy instances that should be available at any time
     * during the deployment. There are two parameters expected in the input: type and
     * value.</p> <p>The type parameter takes either of the following values:</p> <ul>
     * <li> <p>HOST_COUNT: The value parameter represents the minimum number of healthy
     * instances as an absolute value.</p> </li> <li> <p>FLEET_PERCENT: The value
     * parameter represents the minimum number of healthy instances as a percentage of
     * the total number of instances in the deployment. If you specify FLEET_PERCENT,
     * at the start of the deployment, CodeDeploy converts the percentage to the
     * equivalent number of instances and rounds up fractional instances.</p> </li>
     * </ul> <p>The value parameter takes an integer.</p> <p>For example, to set a
     * minimum of 95% healthy instance, specify a type of FLEET_PERCENT and a value of
     * 95.</p>
     */
    inline void SetMinimumHealthyHosts(const MinimumHealthyHosts& value) { m_minimumHealthyHostsHasBeenSet = true; m_minimumHealthyHosts = value; }

    /**
     * <p>The minimum number of healthy instances that should be available at any time
     * during the deployment. There are two parameters expected in the input: type and
     * value.</p> <p>The type parameter takes either of the following values:</p> <ul>
     * <li> <p>HOST_COUNT: The value parameter represents the minimum number of healthy
     * instances as an absolute value.</p> </li> <li> <p>FLEET_PERCENT: The value
     * parameter represents the minimum number of healthy instances as a percentage of
     * the total number of instances in the deployment. If you specify FLEET_PERCENT,
     * at the start of the deployment, CodeDeploy converts the percentage to the
     * equivalent number of instances and rounds up fractional instances.</p> </li>
     * </ul> <p>The value parameter takes an integer.</p> <p>For example, to set a
     * minimum of 95% healthy instance, specify a type of FLEET_PERCENT and a value of
     * 95.</p>
     */
    inline void SetMinimumHealthyHosts(MinimumHealthyHosts&& value) { m_minimumHealthyHostsHasBeenSet = true; m_minimumHealthyHosts = std::move(value); }

    /**
     * <p>The minimum number of healthy instances that should be available at any time
     * during the deployment. There are two parameters expected in the input: type and
     * value.</p> <p>The type parameter takes either of the following values:</p> <ul>
     * <li> <p>HOST_COUNT: The value parameter represents the minimum number of healthy
     * instances as an absolute value.</p> </li> <li> <p>FLEET_PERCENT: The value
     * parameter represents the minimum number of healthy instances as a percentage of
     * the total number of instances in the deployment. If you specify FLEET_PERCENT,
     * at the start of the deployment, CodeDeploy converts the percentage to the
     * equivalent number of instances and rounds up fractional instances.</p> </li>
     * </ul> <p>The value parameter takes an integer.</p> <p>For example, to set a
     * minimum of 95% healthy instance, specify a type of FLEET_PERCENT and a value of
     * 95.</p>
     */
    inline CreateDeploymentConfigRequest& WithMinimumHealthyHosts(const MinimumHealthyHosts& value) { SetMinimumHealthyHosts(value); return *this;}

    /**
     * <p>The minimum number of healthy instances that should be available at any time
     * during the deployment. There are two parameters expected in the input: type and
     * value.</p> <p>The type parameter takes either of the following values:</p> <ul>
     * <li> <p>HOST_COUNT: The value parameter represents the minimum number of healthy
     * instances as an absolute value.</p> </li> <li> <p>FLEET_PERCENT: The value
     * parameter represents the minimum number of healthy instances as a percentage of
     * the total number of instances in the deployment. If you specify FLEET_PERCENT,
     * at the start of the deployment, CodeDeploy converts the percentage to the
     * equivalent number of instances and rounds up fractional instances.</p> </li>
     * </ul> <p>The value parameter takes an integer.</p> <p>For example, to set a
     * minimum of 95% healthy instance, specify a type of FLEET_PERCENT and a value of
     * 95.</p>
     */
    inline CreateDeploymentConfigRequest& WithMinimumHealthyHosts(MinimumHealthyHosts&& value) { SetMinimumHealthyHosts(std::move(value)); return *this;}


    /**
     * <p>The configuration that specifies how the deployment traffic is routed.</p>
     */
    inline const TrafficRoutingConfig& GetTrafficRoutingConfig() const{ return m_trafficRoutingConfig; }

    /**
     * <p>The configuration that specifies how the deployment traffic is routed.</p>
     */
    inline bool TrafficRoutingConfigHasBeenSet() const { return m_trafficRoutingConfigHasBeenSet; }

    /**
     * <p>The configuration that specifies how the deployment traffic is routed.</p>
     */
    inline void SetTrafficRoutingConfig(const TrafficRoutingConfig& value) { m_trafficRoutingConfigHasBeenSet = true; m_trafficRoutingConfig = value; }

    /**
     * <p>The configuration that specifies how the deployment traffic is routed.</p>
     */
    inline void SetTrafficRoutingConfig(TrafficRoutingConfig&& value) { m_trafficRoutingConfigHasBeenSet = true; m_trafficRoutingConfig = std::move(value); }

    /**
     * <p>The configuration that specifies how the deployment traffic is routed.</p>
     */
    inline CreateDeploymentConfigRequest& WithTrafficRoutingConfig(const TrafficRoutingConfig& value) { SetTrafficRoutingConfig(value); return *this;}

    /**
     * <p>The configuration that specifies how the deployment traffic is routed.</p>
     */
    inline CreateDeploymentConfigRequest& WithTrafficRoutingConfig(TrafficRoutingConfig&& value) { SetTrafficRoutingConfig(std::move(value)); return *this;}


    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline const ComputePlatform& GetComputePlatform() const{ return m_computePlatform; }

    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline bool ComputePlatformHasBeenSet() const { return m_computePlatformHasBeenSet; }

    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline void SetComputePlatform(const ComputePlatform& value) { m_computePlatformHasBeenSet = true; m_computePlatform = value; }

    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline void SetComputePlatform(ComputePlatform&& value) { m_computePlatformHasBeenSet = true; m_computePlatform = std::move(value); }

    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline CreateDeploymentConfigRequest& WithComputePlatform(const ComputePlatform& value) { SetComputePlatform(value); return *this;}

    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline CreateDeploymentConfigRequest& WithComputePlatform(ComputePlatform&& value) { SetComputePlatform(std::move(value)); return *this;}

  private:

    Aws::String m_deploymentConfigName;
    bool m_deploymentConfigNameHasBeenSet = false;

    MinimumHealthyHosts m_minimumHealthyHosts;
    bool m_minimumHealthyHostsHasBeenSet = false;

    TrafficRoutingConfig m_trafficRoutingConfig;
    bool m_trafficRoutingConfigHasBeenSet = false;

    ComputePlatform m_computePlatform;
    bool m_computePlatformHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
