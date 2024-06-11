/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/MinimumHealthyHosts.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codedeploy/model/ComputePlatform.h>
#include <aws/codedeploy/model/TrafficRoutingConfig.h>
#include <aws/codedeploy/model/ZonalConfig.h>
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
  class DeploymentConfigInfo
  {
  public:
    AWS_CODEDEPLOY_API DeploymentConfigInfo();
    AWS_CODEDEPLOY_API DeploymentConfigInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API DeploymentConfigInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The deployment configuration ID.</p>
     */
    inline const Aws::String& GetDeploymentConfigId() const{ return m_deploymentConfigId; }
    inline bool DeploymentConfigIdHasBeenSet() const { return m_deploymentConfigIdHasBeenSet; }
    inline void SetDeploymentConfigId(const Aws::String& value) { m_deploymentConfigIdHasBeenSet = true; m_deploymentConfigId = value; }
    inline void SetDeploymentConfigId(Aws::String&& value) { m_deploymentConfigIdHasBeenSet = true; m_deploymentConfigId = std::move(value); }
    inline void SetDeploymentConfigId(const char* value) { m_deploymentConfigIdHasBeenSet = true; m_deploymentConfigId.assign(value); }
    inline DeploymentConfigInfo& WithDeploymentConfigId(const Aws::String& value) { SetDeploymentConfigId(value); return *this;}
    inline DeploymentConfigInfo& WithDeploymentConfigId(Aws::String&& value) { SetDeploymentConfigId(std::move(value)); return *this;}
    inline DeploymentConfigInfo& WithDeploymentConfigId(const char* value) { SetDeploymentConfigId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment configuration name.</p>
     */
    inline const Aws::String& GetDeploymentConfigName() const{ return m_deploymentConfigName; }
    inline bool DeploymentConfigNameHasBeenSet() const { return m_deploymentConfigNameHasBeenSet; }
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }
    inline void SetDeploymentConfigName(Aws::String&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = std::move(value); }
    inline void SetDeploymentConfigName(const char* value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName.assign(value); }
    inline DeploymentConfigInfo& WithDeploymentConfigName(const Aws::String& value) { SetDeploymentConfigName(value); return *this;}
    inline DeploymentConfigInfo& WithDeploymentConfigName(Aws::String&& value) { SetDeploymentConfigName(std::move(value)); return *this;}
    inline DeploymentConfigInfo& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the number or percentage of minimum healthy instances.</p>
     */
    inline const MinimumHealthyHosts& GetMinimumHealthyHosts() const{ return m_minimumHealthyHosts; }
    inline bool MinimumHealthyHostsHasBeenSet() const { return m_minimumHealthyHostsHasBeenSet; }
    inline void SetMinimumHealthyHosts(const MinimumHealthyHosts& value) { m_minimumHealthyHostsHasBeenSet = true; m_minimumHealthyHosts = value; }
    inline void SetMinimumHealthyHosts(MinimumHealthyHosts&& value) { m_minimumHealthyHostsHasBeenSet = true; m_minimumHealthyHosts = std::move(value); }
    inline DeploymentConfigInfo& WithMinimumHealthyHosts(const MinimumHealthyHosts& value) { SetMinimumHealthyHosts(value); return *this;}
    inline DeploymentConfigInfo& WithMinimumHealthyHosts(MinimumHealthyHosts&& value) { SetMinimumHealthyHosts(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the deployment configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline DeploymentConfigInfo& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline DeploymentConfigInfo& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline const ComputePlatform& GetComputePlatform() const{ return m_computePlatform; }
    inline bool ComputePlatformHasBeenSet() const { return m_computePlatformHasBeenSet; }
    inline void SetComputePlatform(const ComputePlatform& value) { m_computePlatformHasBeenSet = true; m_computePlatform = value; }
    inline void SetComputePlatform(ComputePlatform&& value) { m_computePlatformHasBeenSet = true; m_computePlatform = std::move(value); }
    inline DeploymentConfigInfo& WithComputePlatform(const ComputePlatform& value) { SetComputePlatform(value); return *this;}
    inline DeploymentConfigInfo& WithComputePlatform(ComputePlatform&& value) { SetComputePlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that specifies how the deployment traffic is routed. Used
     * for deployments with a Lambda or Amazon ECS compute platform only.</p>
     */
    inline const TrafficRoutingConfig& GetTrafficRoutingConfig() const{ return m_trafficRoutingConfig; }
    inline bool TrafficRoutingConfigHasBeenSet() const { return m_trafficRoutingConfigHasBeenSet; }
    inline void SetTrafficRoutingConfig(const TrafficRoutingConfig& value) { m_trafficRoutingConfigHasBeenSet = true; m_trafficRoutingConfig = value; }
    inline void SetTrafficRoutingConfig(TrafficRoutingConfig&& value) { m_trafficRoutingConfigHasBeenSet = true; m_trafficRoutingConfig = std::move(value); }
    inline DeploymentConfigInfo& WithTrafficRoutingConfig(const TrafficRoutingConfig& value) { SetTrafficRoutingConfig(value); return *this;}
    inline DeploymentConfigInfo& WithTrafficRoutingConfig(TrafficRoutingConfig&& value) { SetTrafficRoutingConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a zonal configuration.</p>
     */
    inline const ZonalConfig& GetZonalConfig() const{ return m_zonalConfig; }
    inline bool ZonalConfigHasBeenSet() const { return m_zonalConfigHasBeenSet; }
    inline void SetZonalConfig(const ZonalConfig& value) { m_zonalConfigHasBeenSet = true; m_zonalConfig = value; }
    inline void SetZonalConfig(ZonalConfig&& value) { m_zonalConfigHasBeenSet = true; m_zonalConfig = std::move(value); }
    inline DeploymentConfigInfo& WithZonalConfig(const ZonalConfig& value) { SetZonalConfig(value); return *this;}
    inline DeploymentConfigInfo& WithZonalConfig(ZonalConfig&& value) { SetZonalConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_deploymentConfigId;
    bool m_deploymentConfigIdHasBeenSet = false;

    Aws::String m_deploymentConfigName;
    bool m_deploymentConfigNameHasBeenSet = false;

    MinimumHealthyHosts m_minimumHealthyHosts;
    bool m_minimumHealthyHostsHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    ComputePlatform m_computePlatform;
    bool m_computePlatformHasBeenSet = false;

    TrafficRoutingConfig m_trafficRoutingConfig;
    bool m_trafficRoutingConfigHasBeenSet = false;

    ZonalConfig m_zonalConfig;
    bool m_zonalConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
