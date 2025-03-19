/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/elasticbeanstalk/model/ApplicationMetrics.h>
#include <aws/elasticbeanstalk/model/SystemStatus.h>
#include <aws/elasticbeanstalk/model/Deployment.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Detailed health information about an Amazon EC2 instance in your Elastic
   * Beanstalk environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/SingleInstanceHealth">AWS
   * API Reference</a></p>
   */
  class SingleInstanceHealth
  {
  public:
    AWS_ELASTICBEANSTALK_API SingleInstanceHealth() = default;
    AWS_ELASTICBEANSTALK_API SingleInstanceHealth(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API SingleInstanceHealth& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    SingleInstanceHealth& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the health status of the specified instance. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline const Aws::String& GetHealthStatus() const { return m_healthStatus; }
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }
    template<typename HealthStatusT = Aws::String>
    void SetHealthStatus(HealthStatusT&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::forward<HealthStatusT>(value); }
    template<typename HealthStatusT = Aws::String>
    SingleInstanceHealth& WithHealthStatus(HealthStatusT&& value) { SetHealthStatus(std::forward<HealthStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the color indicator that gives you information about the health of
     * the EC2 instance. For more information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline const Aws::String& GetColor() const { return m_color; }
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
    template<typename ColorT = Aws::String>
    void SetColor(ColorT&& value) { m_colorHasBeenSet = true; m_color = std::forward<ColorT>(value); }
    template<typename ColorT = Aws::String>
    SingleInstanceHealth& WithColor(ColorT&& value) { SetColor(std::forward<ColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the causes, which provide more information about the current
     * health status.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCauses() const { return m_causes; }
    inline bool CausesHasBeenSet() const { return m_causesHasBeenSet; }
    template<typename CausesT = Aws::Vector<Aws::String>>
    void SetCauses(CausesT&& value) { m_causesHasBeenSet = true; m_causes = std::forward<CausesT>(value); }
    template<typename CausesT = Aws::Vector<Aws::String>>
    SingleInstanceHealth& WithCauses(CausesT&& value) { SetCauses(std::forward<CausesT>(value)); return *this;}
    template<typename CausesT = Aws::String>
    SingleInstanceHealth& AddCauses(CausesT&& value) { m_causesHasBeenSet = true; m_causes.emplace_back(std::forward<CausesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the EC2 instance was launched.</p>
     */
    inline const Aws::Utils::DateTime& GetLaunchedAt() const { return m_launchedAt; }
    inline bool LaunchedAtHasBeenSet() const { return m_launchedAtHasBeenSet; }
    template<typename LaunchedAtT = Aws::Utils::DateTime>
    void SetLaunchedAt(LaunchedAtT&& value) { m_launchedAtHasBeenSet = true; m_launchedAt = std::forward<LaunchedAtT>(value); }
    template<typename LaunchedAtT = Aws::Utils::DateTime>
    SingleInstanceHealth& WithLaunchedAt(LaunchedAtT&& value) { SetLaunchedAt(std::forward<LaunchedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request metrics from your application.</p>
     */
    inline const ApplicationMetrics& GetApplicationMetrics() const { return m_applicationMetrics; }
    inline bool ApplicationMetricsHasBeenSet() const { return m_applicationMetricsHasBeenSet; }
    template<typename ApplicationMetricsT = ApplicationMetrics>
    void SetApplicationMetrics(ApplicationMetricsT&& value) { m_applicationMetricsHasBeenSet = true; m_applicationMetrics = std::forward<ApplicationMetricsT>(value); }
    template<typename ApplicationMetricsT = ApplicationMetrics>
    SingleInstanceHealth& WithApplicationMetrics(ApplicationMetricsT&& value) { SetApplicationMetrics(std::forward<ApplicationMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Operating system metrics from the instance.</p>
     */
    inline const SystemStatus& GetSystem() const { return m_system; }
    inline bool SystemHasBeenSet() const { return m_systemHasBeenSet; }
    template<typename SystemT = SystemStatus>
    void SetSystem(SystemT&& value) { m_systemHasBeenSet = true; m_system = std::forward<SystemT>(value); }
    template<typename SystemT = SystemStatus>
    SingleInstanceHealth& WithSystem(SystemT&& value) { SetSystem(std::forward<SystemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the most recent deployment to an instance.</p>
     */
    inline const Deployment& GetDeployment() const { return m_deployment; }
    inline bool DeploymentHasBeenSet() const { return m_deploymentHasBeenSet; }
    template<typename DeploymentT = Deployment>
    void SetDeployment(DeploymentT&& value) { m_deploymentHasBeenSet = true; m_deployment = std::forward<DeploymentT>(value); }
    template<typename DeploymentT = Deployment>
    SingleInstanceHealth& WithDeployment(DeploymentT&& value) { SetDeployment(std::forward<DeploymentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The availability zone in which the instance runs.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    SingleInstanceHealth& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's type.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    SingleInstanceHealth& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_healthStatus;
    bool m_healthStatusHasBeenSet = false;

    Aws::String m_color;
    bool m_colorHasBeenSet = false;

    Aws::Vector<Aws::String> m_causes;
    bool m_causesHasBeenSet = false;

    Aws::Utils::DateTime m_launchedAt{};
    bool m_launchedAtHasBeenSet = false;

    ApplicationMetrics m_applicationMetrics;
    bool m_applicationMetricsHasBeenSet = false;

    SystemStatus m_system;
    bool m_systemHasBeenSet = false;

    Deployment m_deployment;
    bool m_deploymentHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
