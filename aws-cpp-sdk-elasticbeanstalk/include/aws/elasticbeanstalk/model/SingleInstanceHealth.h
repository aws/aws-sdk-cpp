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
  class AWS_ELASTICBEANSTALK_API SingleInstanceHealth
  {
  public:
    SingleInstanceHealth();
    SingleInstanceHealth(const Aws::Utils::Xml::XmlNode& xmlNode);
    SingleInstanceHealth& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the Amazon EC2 instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon EC2 instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the Amazon EC2 instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the Amazon EC2 instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the Amazon EC2 instance.</p>
     */
    inline SingleInstanceHealth& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the Amazon EC2 instance.</p>
     */
    inline SingleInstanceHealth& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon EC2 instance.</p>
     */
    inline SingleInstanceHealth& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>Returns the health status of the specified instance. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline const Aws::String& GetHealthStatus() const{ return m_healthStatus; }

    /**
     * <p>Returns the health status of the specified instance. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }

    /**
     * <p>Returns the health status of the specified instance. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline void SetHealthStatus(const Aws::String& value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }

    /**
     * <p>Returns the health status of the specified instance. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline void SetHealthStatus(Aws::String&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::move(value); }

    /**
     * <p>Returns the health status of the specified instance. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline void SetHealthStatus(const char* value) { m_healthStatusHasBeenSet = true; m_healthStatus.assign(value); }

    /**
     * <p>Returns the health status of the specified instance. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline SingleInstanceHealth& WithHealthStatus(const Aws::String& value) { SetHealthStatus(value); return *this;}

    /**
     * <p>Returns the health status of the specified instance. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline SingleInstanceHealth& WithHealthStatus(Aws::String&& value) { SetHealthStatus(std::move(value)); return *this;}

    /**
     * <p>Returns the health status of the specified instance. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline SingleInstanceHealth& WithHealthStatus(const char* value) { SetHealthStatus(value); return *this;}


    /**
     * <p>Represents the color indicator that gives you information about the health of
     * the EC2 instance. For more information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline const Aws::String& GetColor() const{ return m_color; }

    /**
     * <p>Represents the color indicator that gives you information about the health of
     * the EC2 instance. For more information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }

    /**
     * <p>Represents the color indicator that gives you information about the health of
     * the EC2 instance. For more information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline void SetColor(const Aws::String& value) { m_colorHasBeenSet = true; m_color = value; }

    /**
     * <p>Represents the color indicator that gives you information about the health of
     * the EC2 instance. For more information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline void SetColor(Aws::String&& value) { m_colorHasBeenSet = true; m_color = std::move(value); }

    /**
     * <p>Represents the color indicator that gives you information about the health of
     * the EC2 instance. For more information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline void SetColor(const char* value) { m_colorHasBeenSet = true; m_color.assign(value); }

    /**
     * <p>Represents the color indicator that gives you information about the health of
     * the EC2 instance. For more information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline SingleInstanceHealth& WithColor(const Aws::String& value) { SetColor(value); return *this;}

    /**
     * <p>Represents the color indicator that gives you information about the health of
     * the EC2 instance. For more information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline SingleInstanceHealth& WithColor(Aws::String&& value) { SetColor(std::move(value)); return *this;}

    /**
     * <p>Represents the color indicator that gives you information about the health of
     * the EC2 instance. For more information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline SingleInstanceHealth& WithColor(const char* value) { SetColor(value); return *this;}


    /**
     * <p>Represents the causes, which provide more information about the current
     * health status.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCauses() const{ return m_causes; }

    /**
     * <p>Represents the causes, which provide more information about the current
     * health status.</p>
     */
    inline bool CausesHasBeenSet() const { return m_causesHasBeenSet; }

    /**
     * <p>Represents the causes, which provide more information about the current
     * health status.</p>
     */
    inline void SetCauses(const Aws::Vector<Aws::String>& value) { m_causesHasBeenSet = true; m_causes = value; }

    /**
     * <p>Represents the causes, which provide more information about the current
     * health status.</p>
     */
    inline void SetCauses(Aws::Vector<Aws::String>&& value) { m_causesHasBeenSet = true; m_causes = std::move(value); }

    /**
     * <p>Represents the causes, which provide more information about the current
     * health status.</p>
     */
    inline SingleInstanceHealth& WithCauses(const Aws::Vector<Aws::String>& value) { SetCauses(value); return *this;}

    /**
     * <p>Represents the causes, which provide more information about the current
     * health status.</p>
     */
    inline SingleInstanceHealth& WithCauses(Aws::Vector<Aws::String>&& value) { SetCauses(std::move(value)); return *this;}

    /**
     * <p>Represents the causes, which provide more information about the current
     * health status.</p>
     */
    inline SingleInstanceHealth& AddCauses(const Aws::String& value) { m_causesHasBeenSet = true; m_causes.push_back(value); return *this; }

    /**
     * <p>Represents the causes, which provide more information about the current
     * health status.</p>
     */
    inline SingleInstanceHealth& AddCauses(Aws::String&& value) { m_causesHasBeenSet = true; m_causes.push_back(std::move(value)); return *this; }

    /**
     * <p>Represents the causes, which provide more information about the current
     * health status.</p>
     */
    inline SingleInstanceHealth& AddCauses(const char* value) { m_causesHasBeenSet = true; m_causes.push_back(value); return *this; }


    /**
     * <p>The time at which the EC2 instance was launched.</p>
     */
    inline const Aws::Utils::DateTime& GetLaunchedAt() const{ return m_launchedAt; }

    /**
     * <p>The time at which the EC2 instance was launched.</p>
     */
    inline bool LaunchedAtHasBeenSet() const { return m_launchedAtHasBeenSet; }

    /**
     * <p>The time at which the EC2 instance was launched.</p>
     */
    inline void SetLaunchedAt(const Aws::Utils::DateTime& value) { m_launchedAtHasBeenSet = true; m_launchedAt = value; }

    /**
     * <p>The time at which the EC2 instance was launched.</p>
     */
    inline void SetLaunchedAt(Aws::Utils::DateTime&& value) { m_launchedAtHasBeenSet = true; m_launchedAt = std::move(value); }

    /**
     * <p>The time at which the EC2 instance was launched.</p>
     */
    inline SingleInstanceHealth& WithLaunchedAt(const Aws::Utils::DateTime& value) { SetLaunchedAt(value); return *this;}

    /**
     * <p>The time at which the EC2 instance was launched.</p>
     */
    inline SingleInstanceHealth& WithLaunchedAt(Aws::Utils::DateTime&& value) { SetLaunchedAt(std::move(value)); return *this;}


    /**
     * <p>Request metrics from your application.</p>
     */
    inline const ApplicationMetrics& GetApplicationMetrics() const{ return m_applicationMetrics; }

    /**
     * <p>Request metrics from your application.</p>
     */
    inline bool ApplicationMetricsHasBeenSet() const { return m_applicationMetricsHasBeenSet; }

    /**
     * <p>Request metrics from your application.</p>
     */
    inline void SetApplicationMetrics(const ApplicationMetrics& value) { m_applicationMetricsHasBeenSet = true; m_applicationMetrics = value; }

    /**
     * <p>Request metrics from your application.</p>
     */
    inline void SetApplicationMetrics(ApplicationMetrics&& value) { m_applicationMetricsHasBeenSet = true; m_applicationMetrics = std::move(value); }

    /**
     * <p>Request metrics from your application.</p>
     */
    inline SingleInstanceHealth& WithApplicationMetrics(const ApplicationMetrics& value) { SetApplicationMetrics(value); return *this;}

    /**
     * <p>Request metrics from your application.</p>
     */
    inline SingleInstanceHealth& WithApplicationMetrics(ApplicationMetrics&& value) { SetApplicationMetrics(std::move(value)); return *this;}


    /**
     * <p>Operating system metrics from the instance.</p>
     */
    inline const SystemStatus& GetSystem() const{ return m_system; }

    /**
     * <p>Operating system metrics from the instance.</p>
     */
    inline bool SystemHasBeenSet() const { return m_systemHasBeenSet; }

    /**
     * <p>Operating system metrics from the instance.</p>
     */
    inline void SetSystem(const SystemStatus& value) { m_systemHasBeenSet = true; m_system = value; }

    /**
     * <p>Operating system metrics from the instance.</p>
     */
    inline void SetSystem(SystemStatus&& value) { m_systemHasBeenSet = true; m_system = std::move(value); }

    /**
     * <p>Operating system metrics from the instance.</p>
     */
    inline SingleInstanceHealth& WithSystem(const SystemStatus& value) { SetSystem(value); return *this;}

    /**
     * <p>Operating system metrics from the instance.</p>
     */
    inline SingleInstanceHealth& WithSystem(SystemStatus&& value) { SetSystem(std::move(value)); return *this;}


    /**
     * <p>Information about the most recent deployment to an instance.</p>
     */
    inline const Deployment& GetDeployment() const{ return m_deployment; }

    /**
     * <p>Information about the most recent deployment to an instance.</p>
     */
    inline bool DeploymentHasBeenSet() const { return m_deploymentHasBeenSet; }

    /**
     * <p>Information about the most recent deployment to an instance.</p>
     */
    inline void SetDeployment(const Deployment& value) { m_deploymentHasBeenSet = true; m_deployment = value; }

    /**
     * <p>Information about the most recent deployment to an instance.</p>
     */
    inline void SetDeployment(Deployment&& value) { m_deploymentHasBeenSet = true; m_deployment = std::move(value); }

    /**
     * <p>Information about the most recent deployment to an instance.</p>
     */
    inline SingleInstanceHealth& WithDeployment(const Deployment& value) { SetDeployment(value); return *this;}

    /**
     * <p>Information about the most recent deployment to an instance.</p>
     */
    inline SingleInstanceHealth& WithDeployment(Deployment&& value) { SetDeployment(std::move(value)); return *this;}


    /**
     * <p>The availability zone in which the instance runs.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The availability zone in which the instance runs.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The availability zone in which the instance runs.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The availability zone in which the instance runs.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The availability zone in which the instance runs.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The availability zone in which the instance runs.</p>
     */
    inline SingleInstanceHealth& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The availability zone in which the instance runs.</p>
     */
    inline SingleInstanceHealth& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The availability zone in which the instance runs.</p>
     */
    inline SingleInstanceHealth& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The instance's type.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance's type.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance's type.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance's type.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance's type.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance's type.</p>
     */
    inline SingleInstanceHealth& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance's type.</p>
     */
    inline SingleInstanceHealth& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance's type.</p>
     */
    inline SingleInstanceHealth& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_healthStatus;
    bool m_healthStatusHasBeenSet;

    Aws::String m_color;
    bool m_colorHasBeenSet;

    Aws::Vector<Aws::String> m_causes;
    bool m_causesHasBeenSet;

    Aws::Utils::DateTime m_launchedAt;
    bool m_launchedAtHasBeenSet;

    ApplicationMetrics m_applicationMetrics;
    bool m_applicationMetricsHasBeenSet;

    SystemStatus m_system;
    bool m_systemHasBeenSet;

    Deployment m_deployment;
    bool m_deploymentHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
