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
    AWS_CODEDEPLOY_API CreateDeploymentConfigRequest();

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
    inline const Aws::String& GetDeploymentConfigName() const{ return m_deploymentConfigName; }
    inline bool DeploymentConfigNameHasBeenSet() const { return m_deploymentConfigNameHasBeenSet; }
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }
    inline void SetDeploymentConfigName(Aws::String&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = std::move(value); }
    inline void SetDeploymentConfigName(const char* value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName.assign(value); }
    inline CreateDeploymentConfigRequest& WithDeploymentConfigName(const Aws::String& value) { SetDeploymentConfigName(value); return *this;}
    inline CreateDeploymentConfigRequest& WithDeploymentConfigName(Aws::String&& value) { SetDeploymentConfigName(std::move(value)); return *this;}
    inline CreateDeploymentConfigRequest& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}
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
    inline const MinimumHealthyHosts& GetMinimumHealthyHosts() const{ return m_minimumHealthyHosts; }
    inline bool MinimumHealthyHostsHasBeenSet() const { return m_minimumHealthyHostsHasBeenSet; }
    inline void SetMinimumHealthyHosts(const MinimumHealthyHosts& value) { m_minimumHealthyHostsHasBeenSet = true; m_minimumHealthyHosts = value; }
    inline void SetMinimumHealthyHosts(MinimumHealthyHosts&& value) { m_minimumHealthyHostsHasBeenSet = true; m_minimumHealthyHosts = std::move(value); }
    inline CreateDeploymentConfigRequest& WithMinimumHealthyHosts(const MinimumHealthyHosts& value) { SetMinimumHealthyHosts(value); return *this;}
    inline CreateDeploymentConfigRequest& WithMinimumHealthyHosts(MinimumHealthyHosts&& value) { SetMinimumHealthyHosts(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that specifies how the deployment traffic is routed.</p>
     */
    inline const TrafficRoutingConfig& GetTrafficRoutingConfig() const{ return m_trafficRoutingConfig; }
    inline bool TrafficRoutingConfigHasBeenSet() const { return m_trafficRoutingConfigHasBeenSet; }
    inline void SetTrafficRoutingConfig(const TrafficRoutingConfig& value) { m_trafficRoutingConfigHasBeenSet = true; m_trafficRoutingConfig = value; }
    inline void SetTrafficRoutingConfig(TrafficRoutingConfig&& value) { m_trafficRoutingConfigHasBeenSet = true; m_trafficRoutingConfig = std::move(value); }
    inline CreateDeploymentConfigRequest& WithTrafficRoutingConfig(const TrafficRoutingConfig& value) { SetTrafficRoutingConfig(value); return *this;}
    inline CreateDeploymentConfigRequest& WithTrafficRoutingConfig(TrafficRoutingConfig&& value) { SetTrafficRoutingConfig(std::move(value)); return *this;}
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
    inline CreateDeploymentConfigRequest& WithComputePlatform(const ComputePlatform& value) { SetComputePlatform(value); return *this;}
    inline CreateDeploymentConfigRequest& WithComputePlatform(ComputePlatform&& value) { SetComputePlatform(std::move(value)); return *this;}
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
    inline const ZonalConfig& GetZonalConfig() const{ return m_zonalConfig; }
    inline bool ZonalConfigHasBeenSet() const { return m_zonalConfigHasBeenSet; }
    inline void SetZonalConfig(const ZonalConfig& value) { m_zonalConfigHasBeenSet = true; m_zonalConfig = value; }
    inline void SetZonalConfig(ZonalConfig&& value) { m_zonalConfigHasBeenSet = true; m_zonalConfig = std::move(value); }
    inline CreateDeploymentConfigRequest& WithZonalConfig(const ZonalConfig& value) { SetZonalConfig(value); return *this;}
    inline CreateDeploymentConfigRequest& WithZonalConfig(ZonalConfig&& value) { SetZonalConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_deploymentConfigName;
    bool m_deploymentConfigNameHasBeenSet = false;

    MinimumHealthyHosts m_minimumHealthyHosts;
    bool m_minimumHealthyHostsHasBeenSet = false;

    TrafficRoutingConfig m_trafficRoutingConfig;
    bool m_trafficRoutingConfigHasBeenSet = false;

    ComputePlatform m_computePlatform;
    bool m_computePlatformHasBeenSet = false;

    ZonalConfig m_zonalConfig;
    bool m_zonalConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
