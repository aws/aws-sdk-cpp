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
#include <aws/codedeploy/model/ZonalConfig.h>
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
    AWS_CODEDEPLOY_API CreateDeploymentConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeploymentConfig"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the deployment configuration to create.</p>
     */
    inline const Aws::String& GetDeploymentConfigName() const { return m_deploymentConfigName; }
    inline bool DeploymentConfigNameHasBeenSet() const { return m_deploymentConfigNameHasBeenSet; }
    template<typename DeploymentConfigNameT = Aws::String>
    void SetDeploymentConfigName(DeploymentConfigNameT&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = std::forward<DeploymentConfigNameT>(value); }
    template<typename DeploymentConfigNameT = Aws::String>
    CreateDeploymentConfigRequest& WithDeploymentConfigName(DeploymentConfigNameT&& value) { SetDeploymentConfigName(std::forward<DeploymentConfigNameT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const MinimumHealthyHosts& GetMinimumHealthyHosts() const { return m_minimumHealthyHosts; }
    inline bool MinimumHealthyHostsHasBeenSet() const { return m_minimumHealthyHostsHasBeenSet; }
    template<typename MinimumHealthyHostsT = MinimumHealthyHosts>
    void SetMinimumHealthyHosts(MinimumHealthyHostsT&& value) { m_minimumHealthyHostsHasBeenSet = true; m_minimumHealthyHosts = std::forward<MinimumHealthyHostsT>(value); }
    template<typename MinimumHealthyHostsT = MinimumHealthyHosts>
    CreateDeploymentConfigRequest& WithMinimumHealthyHosts(MinimumHealthyHostsT&& value) { SetMinimumHealthyHosts(std::forward<MinimumHealthyHostsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that specifies how the deployment traffic is routed.</p>
     */
    inline const TrafficRoutingConfig& GetTrafficRoutingConfig() const { return m_trafficRoutingConfig; }
    inline bool TrafficRoutingConfigHasBeenSet() const { return m_trafficRoutingConfigHasBeenSet; }
    template<typename TrafficRoutingConfigT = TrafficRoutingConfig>
    void SetTrafficRoutingConfig(TrafficRoutingConfigT&& value) { m_trafficRoutingConfigHasBeenSet = true; m_trafficRoutingConfig = std::forward<TrafficRoutingConfigT>(value); }
    template<typename TrafficRoutingConfigT = TrafficRoutingConfig>
    CreateDeploymentConfigRequest& WithTrafficRoutingConfig(TrafficRoutingConfigT&& value) { SetTrafficRoutingConfig(std::forward<TrafficRoutingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline ComputePlatform GetComputePlatform() const { return m_computePlatform; }
    inline bool ComputePlatformHasBeenSet() const { return m_computePlatformHasBeenSet; }
    inline void SetComputePlatform(ComputePlatform value) { m_computePlatformHasBeenSet = true; m_computePlatform = value; }
    inline CreateDeploymentConfigRequest& WithComputePlatform(ComputePlatform value) { SetComputePlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configure the <code>ZonalConfig</code> object if you want CodeDeploy to
     * deploy your application to one <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-availability-zones">Availability
     * Zone</a> at a time, within an Amazon Web Services Region.</p> <p>For more
     * information about the zonal configuration feature, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations-create.html#zonal-config">zonal
     * configuration</a> in the <i>CodeDeploy User Guide</i>.</p>
     */
    inline const ZonalConfig& GetZonalConfig() const { return m_zonalConfig; }
    inline bool ZonalConfigHasBeenSet() const { return m_zonalConfigHasBeenSet; }
    template<typename ZonalConfigT = ZonalConfig>
    void SetZonalConfig(ZonalConfigT&& value) { m_zonalConfigHasBeenSet = true; m_zonalConfig = std::forward<ZonalConfigT>(value); }
    template<typename ZonalConfigT = ZonalConfig>
    CreateDeploymentConfigRequest& WithZonalConfig(ZonalConfigT&& value) { SetZonalConfig(std::forward<ZonalConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deploymentConfigName;
    bool m_deploymentConfigNameHasBeenSet = false;

    MinimumHealthyHosts m_minimumHealthyHosts;
    bool m_minimumHealthyHostsHasBeenSet = false;

    TrafficRoutingConfig m_trafficRoutingConfig;
    bool m_trafficRoutingConfigHasBeenSet = false;

    ComputePlatform m_computePlatform{ComputePlatform::NOT_SET};
    bool m_computePlatformHasBeenSet = false;

    ZonalConfig m_zonalConfig;
    bool m_zonalConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
