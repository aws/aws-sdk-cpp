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
    AWS_ELASTICBEANSTALK_API SingleInstanceHealth();
    AWS_ELASTICBEANSTALK_API SingleInstanceHealth(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API SingleInstanceHealth& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline SingleInstanceHealth& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline SingleInstanceHealth& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline SingleInstanceHealth& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the health status of the specified instance. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline const Aws::String& GetHealthStatus() const{ return m_healthStatus; }
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }
    inline void SetHealthStatus(const Aws::String& value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }
    inline void SetHealthStatus(Aws::String&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::move(value); }
    inline void SetHealthStatus(const char* value) { m_healthStatusHasBeenSet = true; m_healthStatus.assign(value); }
    inline SingleInstanceHealth& WithHealthStatus(const Aws::String& value) { SetHealthStatus(value); return *this;}
    inline SingleInstanceHealth& WithHealthStatus(Aws::String&& value) { SetHealthStatus(std::move(value)); return *this;}
    inline SingleInstanceHealth& WithHealthStatus(const char* value) { SetHealthStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the color indicator that gives you information about the health of
     * the EC2 instance. For more information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline const Aws::String& GetColor() const{ return m_color; }
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
    inline void SetColor(const Aws::String& value) { m_colorHasBeenSet = true; m_color = value; }
    inline void SetColor(Aws::String&& value) { m_colorHasBeenSet = true; m_color = std::move(value); }
    inline void SetColor(const char* value) { m_colorHasBeenSet = true; m_color.assign(value); }
    inline SingleInstanceHealth& WithColor(const Aws::String& value) { SetColor(value); return *this;}
    inline SingleInstanceHealth& WithColor(Aws::String&& value) { SetColor(std::move(value)); return *this;}
    inline SingleInstanceHealth& WithColor(const char* value) { SetColor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the causes, which provide more information about the current
     * health status.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCauses() const{ return m_causes; }
    inline bool CausesHasBeenSet() const { return m_causesHasBeenSet; }
    inline void SetCauses(const Aws::Vector<Aws::String>& value) { m_causesHasBeenSet = true; m_causes = value; }
    inline void SetCauses(Aws::Vector<Aws::String>&& value) { m_causesHasBeenSet = true; m_causes = std::move(value); }
    inline SingleInstanceHealth& WithCauses(const Aws::Vector<Aws::String>& value) { SetCauses(value); return *this;}
    inline SingleInstanceHealth& WithCauses(Aws::Vector<Aws::String>&& value) { SetCauses(std::move(value)); return *this;}
    inline SingleInstanceHealth& AddCauses(const Aws::String& value) { m_causesHasBeenSet = true; m_causes.push_back(value); return *this; }
    inline SingleInstanceHealth& AddCauses(Aws::String&& value) { m_causesHasBeenSet = true; m_causes.push_back(std::move(value)); return *this; }
    inline SingleInstanceHealth& AddCauses(const char* value) { m_causesHasBeenSet = true; m_causes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the EC2 instance was launched.</p>
     */
    inline const Aws::Utils::DateTime& GetLaunchedAt() const{ return m_launchedAt; }
    inline bool LaunchedAtHasBeenSet() const { return m_launchedAtHasBeenSet; }
    inline void SetLaunchedAt(const Aws::Utils::DateTime& value) { m_launchedAtHasBeenSet = true; m_launchedAt = value; }
    inline void SetLaunchedAt(Aws::Utils::DateTime&& value) { m_launchedAtHasBeenSet = true; m_launchedAt = std::move(value); }
    inline SingleInstanceHealth& WithLaunchedAt(const Aws::Utils::DateTime& value) { SetLaunchedAt(value); return *this;}
    inline SingleInstanceHealth& WithLaunchedAt(Aws::Utils::DateTime&& value) { SetLaunchedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request metrics from your application.</p>
     */
    inline const ApplicationMetrics& GetApplicationMetrics() const{ return m_applicationMetrics; }
    inline bool ApplicationMetricsHasBeenSet() const { return m_applicationMetricsHasBeenSet; }
    inline void SetApplicationMetrics(const ApplicationMetrics& value) { m_applicationMetricsHasBeenSet = true; m_applicationMetrics = value; }
    inline void SetApplicationMetrics(ApplicationMetrics&& value) { m_applicationMetricsHasBeenSet = true; m_applicationMetrics = std::move(value); }
    inline SingleInstanceHealth& WithApplicationMetrics(const ApplicationMetrics& value) { SetApplicationMetrics(value); return *this;}
    inline SingleInstanceHealth& WithApplicationMetrics(ApplicationMetrics&& value) { SetApplicationMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Operating system metrics from the instance.</p>
     */
    inline const SystemStatus& GetSystem() const{ return m_system; }
    inline bool SystemHasBeenSet() const { return m_systemHasBeenSet; }
    inline void SetSystem(const SystemStatus& value) { m_systemHasBeenSet = true; m_system = value; }
    inline void SetSystem(SystemStatus&& value) { m_systemHasBeenSet = true; m_system = std::move(value); }
    inline SingleInstanceHealth& WithSystem(const SystemStatus& value) { SetSystem(value); return *this;}
    inline SingleInstanceHealth& WithSystem(SystemStatus&& value) { SetSystem(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the most recent deployment to an instance.</p>
     */
    inline const Deployment& GetDeployment() const{ return m_deployment; }
    inline bool DeploymentHasBeenSet() const { return m_deploymentHasBeenSet; }
    inline void SetDeployment(const Deployment& value) { m_deploymentHasBeenSet = true; m_deployment = value; }
    inline void SetDeployment(Deployment&& value) { m_deploymentHasBeenSet = true; m_deployment = std::move(value); }
    inline SingleInstanceHealth& WithDeployment(const Deployment& value) { SetDeployment(value); return *this;}
    inline SingleInstanceHealth& WithDeployment(Deployment&& value) { SetDeployment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The availability zone in which the instance runs.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline SingleInstanceHealth& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline SingleInstanceHealth& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline SingleInstanceHealth& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's type.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline SingleInstanceHealth& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline SingleInstanceHealth& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline SingleInstanceHealth& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
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

    Aws::Utils::DateTime m_launchedAt;
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
