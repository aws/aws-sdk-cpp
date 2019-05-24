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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/MinimumHealthyHosts.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codedeploy/model/ComputePlatform.h>
#include <aws/codedeploy/model/TrafficRoutingConfig.h>
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
   * <p>Information about a deployment configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeploymentConfigInfo">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API DeploymentConfigInfo
  {
  public:
    DeploymentConfigInfo();
    DeploymentConfigInfo(Aws::Utils::Json::JsonView jsonValue);
    DeploymentConfigInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The deployment configuration ID.</p>
     */
    inline const Aws::String& GetDeploymentConfigId() const{ return m_deploymentConfigId; }

    /**
     * <p>The deployment configuration ID.</p>
     */
    inline bool DeploymentConfigIdHasBeenSet() const { return m_deploymentConfigIdHasBeenSet; }

    /**
     * <p>The deployment configuration ID.</p>
     */
    inline void SetDeploymentConfigId(const Aws::String& value) { m_deploymentConfigIdHasBeenSet = true; m_deploymentConfigId = value; }

    /**
     * <p>The deployment configuration ID.</p>
     */
    inline void SetDeploymentConfigId(Aws::String&& value) { m_deploymentConfigIdHasBeenSet = true; m_deploymentConfigId = std::move(value); }

    /**
     * <p>The deployment configuration ID.</p>
     */
    inline void SetDeploymentConfigId(const char* value) { m_deploymentConfigIdHasBeenSet = true; m_deploymentConfigId.assign(value); }

    /**
     * <p>The deployment configuration ID.</p>
     */
    inline DeploymentConfigInfo& WithDeploymentConfigId(const Aws::String& value) { SetDeploymentConfigId(value); return *this;}

    /**
     * <p>The deployment configuration ID.</p>
     */
    inline DeploymentConfigInfo& WithDeploymentConfigId(Aws::String&& value) { SetDeploymentConfigId(std::move(value)); return *this;}

    /**
     * <p>The deployment configuration ID.</p>
     */
    inline DeploymentConfigInfo& WithDeploymentConfigId(const char* value) { SetDeploymentConfigId(value); return *this;}


    /**
     * <p>The deployment configuration name.</p>
     */
    inline const Aws::String& GetDeploymentConfigName() const{ return m_deploymentConfigName; }

    /**
     * <p>The deployment configuration name.</p>
     */
    inline bool DeploymentConfigNameHasBeenSet() const { return m_deploymentConfigNameHasBeenSet; }

    /**
     * <p>The deployment configuration name.</p>
     */
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    /**
     * <p>The deployment configuration name.</p>
     */
    inline void SetDeploymentConfigName(Aws::String&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = std::move(value); }

    /**
     * <p>The deployment configuration name.</p>
     */
    inline void SetDeploymentConfigName(const char* value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName.assign(value); }

    /**
     * <p>The deployment configuration name.</p>
     */
    inline DeploymentConfigInfo& WithDeploymentConfigName(const Aws::String& value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>The deployment configuration name.</p>
     */
    inline DeploymentConfigInfo& WithDeploymentConfigName(Aws::String&& value) { SetDeploymentConfigName(std::move(value)); return *this;}

    /**
     * <p>The deployment configuration name.</p>
     */
    inline DeploymentConfigInfo& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}


    /**
     * <p>Information about the number or percentage of minimum healthy instance.</p>
     */
    inline const MinimumHealthyHosts& GetMinimumHealthyHosts() const{ return m_minimumHealthyHosts; }

    /**
     * <p>Information about the number or percentage of minimum healthy instance.</p>
     */
    inline bool MinimumHealthyHostsHasBeenSet() const { return m_minimumHealthyHostsHasBeenSet; }

    /**
     * <p>Information about the number or percentage of minimum healthy instance.</p>
     */
    inline void SetMinimumHealthyHosts(const MinimumHealthyHosts& value) { m_minimumHealthyHostsHasBeenSet = true; m_minimumHealthyHosts = value; }

    /**
     * <p>Information about the number or percentage of minimum healthy instance.</p>
     */
    inline void SetMinimumHealthyHosts(MinimumHealthyHosts&& value) { m_minimumHealthyHostsHasBeenSet = true; m_minimumHealthyHosts = std::move(value); }

    /**
     * <p>Information about the number or percentage of minimum healthy instance.</p>
     */
    inline DeploymentConfigInfo& WithMinimumHealthyHosts(const MinimumHealthyHosts& value) { SetMinimumHealthyHosts(value); return *this;}

    /**
     * <p>Information about the number or percentage of minimum healthy instance.</p>
     */
    inline DeploymentConfigInfo& WithMinimumHealthyHosts(MinimumHealthyHosts&& value) { SetMinimumHealthyHosts(std::move(value)); return *this;}


    /**
     * <p>The time at which the deployment configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time at which the deployment configuration was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time at which the deployment configuration was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time at which the deployment configuration was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time at which the deployment configuration was created.</p>
     */
    inline DeploymentConfigInfo& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time at which the deployment configuration was created.</p>
     */
    inline DeploymentConfigInfo& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


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
    inline DeploymentConfigInfo& WithComputePlatform(const ComputePlatform& value) { SetComputePlatform(value); return *this;}

    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline DeploymentConfigInfo& WithComputePlatform(ComputePlatform&& value) { SetComputePlatform(std::move(value)); return *this;}


    /**
     * <p>The configuration that specifies how the deployment traffic is routed. Only
     * deployments with a Lambda compute platform can specify this.</p>
     */
    inline const TrafficRoutingConfig& GetTrafficRoutingConfig() const{ return m_trafficRoutingConfig; }

    /**
     * <p>The configuration that specifies how the deployment traffic is routed. Only
     * deployments with a Lambda compute platform can specify this.</p>
     */
    inline bool TrafficRoutingConfigHasBeenSet() const { return m_trafficRoutingConfigHasBeenSet; }

    /**
     * <p>The configuration that specifies how the deployment traffic is routed. Only
     * deployments with a Lambda compute platform can specify this.</p>
     */
    inline void SetTrafficRoutingConfig(const TrafficRoutingConfig& value) { m_trafficRoutingConfigHasBeenSet = true; m_trafficRoutingConfig = value; }

    /**
     * <p>The configuration that specifies how the deployment traffic is routed. Only
     * deployments with a Lambda compute platform can specify this.</p>
     */
    inline void SetTrafficRoutingConfig(TrafficRoutingConfig&& value) { m_trafficRoutingConfigHasBeenSet = true; m_trafficRoutingConfig = std::move(value); }

    /**
     * <p>The configuration that specifies how the deployment traffic is routed. Only
     * deployments with a Lambda compute platform can specify this.</p>
     */
    inline DeploymentConfigInfo& WithTrafficRoutingConfig(const TrafficRoutingConfig& value) { SetTrafficRoutingConfig(value); return *this;}

    /**
     * <p>The configuration that specifies how the deployment traffic is routed. Only
     * deployments with a Lambda compute platform can specify this.</p>
     */
    inline DeploymentConfigInfo& WithTrafficRoutingConfig(TrafficRoutingConfig&& value) { SetTrafficRoutingConfig(std::move(value)); return *this;}

  private:

    Aws::String m_deploymentConfigId;
    bool m_deploymentConfigIdHasBeenSet;

    Aws::String m_deploymentConfigName;
    bool m_deploymentConfigNameHasBeenSet;

    MinimumHealthyHosts m_minimumHealthyHosts;
    bool m_minimumHealthyHostsHasBeenSet;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet;

    ComputePlatform m_computePlatform;
    bool m_computePlatformHasBeenSet;

    TrafficRoutingConfig m_trafficRoutingConfig;
    bool m_trafficRoutingConfigHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
