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
    AWS_CODEDEPLOY_API DeploymentConfigInfo() = default;
    AWS_CODEDEPLOY_API DeploymentConfigInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API DeploymentConfigInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The deployment configuration ID.</p>
     */
    inline const Aws::String& GetDeploymentConfigId() const { return m_deploymentConfigId; }
    inline bool DeploymentConfigIdHasBeenSet() const { return m_deploymentConfigIdHasBeenSet; }
    template<typename DeploymentConfigIdT = Aws::String>
    void SetDeploymentConfigId(DeploymentConfigIdT&& value) { m_deploymentConfigIdHasBeenSet = true; m_deploymentConfigId = std::forward<DeploymentConfigIdT>(value); }
    template<typename DeploymentConfigIdT = Aws::String>
    DeploymentConfigInfo& WithDeploymentConfigId(DeploymentConfigIdT&& value) { SetDeploymentConfigId(std::forward<DeploymentConfigIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment configuration name.</p>
     */
    inline const Aws::String& GetDeploymentConfigName() const { return m_deploymentConfigName; }
    inline bool DeploymentConfigNameHasBeenSet() const { return m_deploymentConfigNameHasBeenSet; }
    template<typename DeploymentConfigNameT = Aws::String>
    void SetDeploymentConfigName(DeploymentConfigNameT&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = std::forward<DeploymentConfigNameT>(value); }
    template<typename DeploymentConfigNameT = Aws::String>
    DeploymentConfigInfo& WithDeploymentConfigName(DeploymentConfigNameT&& value) { SetDeploymentConfigName(std::forward<DeploymentConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the number or percentage of minimum healthy instances.</p>
     */
    inline const MinimumHealthyHosts& GetMinimumHealthyHosts() const { return m_minimumHealthyHosts; }
    inline bool MinimumHealthyHostsHasBeenSet() const { return m_minimumHealthyHostsHasBeenSet; }
    template<typename MinimumHealthyHostsT = MinimumHealthyHosts>
    void SetMinimumHealthyHosts(MinimumHealthyHostsT&& value) { m_minimumHealthyHostsHasBeenSet = true; m_minimumHealthyHosts = std::forward<MinimumHealthyHostsT>(value); }
    template<typename MinimumHealthyHostsT = MinimumHealthyHosts>
    DeploymentConfigInfo& WithMinimumHealthyHosts(MinimumHealthyHostsT&& value) { SetMinimumHealthyHosts(std::forward<MinimumHealthyHostsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the deployment configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    DeploymentConfigInfo& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline ComputePlatform GetComputePlatform() const { return m_computePlatform; }
    inline bool ComputePlatformHasBeenSet() const { return m_computePlatformHasBeenSet; }
    inline void SetComputePlatform(ComputePlatform value) { m_computePlatformHasBeenSet = true; m_computePlatform = value; }
    inline DeploymentConfigInfo& WithComputePlatform(ComputePlatform value) { SetComputePlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that specifies how the deployment traffic is routed. Used
     * for deployments with a Lambda or Amazon ECS compute platform only.</p>
     */
    inline const TrafficRoutingConfig& GetTrafficRoutingConfig() const { return m_trafficRoutingConfig; }
    inline bool TrafficRoutingConfigHasBeenSet() const { return m_trafficRoutingConfigHasBeenSet; }
    template<typename TrafficRoutingConfigT = TrafficRoutingConfig>
    void SetTrafficRoutingConfig(TrafficRoutingConfigT&& value) { m_trafficRoutingConfigHasBeenSet = true; m_trafficRoutingConfig = std::forward<TrafficRoutingConfigT>(value); }
    template<typename TrafficRoutingConfigT = TrafficRoutingConfig>
    DeploymentConfigInfo& WithTrafficRoutingConfig(TrafficRoutingConfigT&& value) { SetTrafficRoutingConfig(std::forward<TrafficRoutingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a zonal configuration.</p>
     */
    inline const ZonalConfig& GetZonalConfig() const { return m_zonalConfig; }
    inline bool ZonalConfigHasBeenSet() const { return m_zonalConfigHasBeenSet; }
    template<typename ZonalConfigT = ZonalConfig>
    void SetZonalConfig(ZonalConfigT&& value) { m_zonalConfigHasBeenSet = true; m_zonalConfig = std::forward<ZonalConfigT>(value); }
    template<typename ZonalConfigT = ZonalConfig>
    DeploymentConfigInfo& WithZonalConfig(ZonalConfigT&& value) { SetZonalConfig(std::forward<ZonalConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deploymentConfigId;
    bool m_deploymentConfigIdHasBeenSet = false;

    Aws::String m_deploymentConfigName;
    bool m_deploymentConfigNameHasBeenSet = false;

    MinimumHealthyHosts m_minimumHealthyHosts;
    bool m_minimumHealthyHostsHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    ComputePlatform m_computePlatform{ComputePlatform::NOT_SET};
    bool m_computePlatformHasBeenSet = false;

    TrafficRoutingConfig m_trafficRoutingConfig;
    bool m_trafficRoutingConfigHasBeenSet = false;

    ZonalConfig m_zonalConfig;
    bool m_zonalConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
