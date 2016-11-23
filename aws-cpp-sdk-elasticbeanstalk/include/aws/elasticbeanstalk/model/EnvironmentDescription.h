/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/DateTime.h>
#include <aws/elasticbeanstalk/model/EnvironmentStatus.h>
#include <aws/elasticbeanstalk/model/EnvironmentHealth.h>
#include <aws/elasticbeanstalk/model/EnvironmentHealthStatus.h>
#include <aws/elasticbeanstalk/model/EnvironmentResourcesDescription.h>
#include <aws/elasticbeanstalk/model/EnvironmentTier.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/EnvironmentLink.h>

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
   * <p>Describes the properties of an environment.</p>
   */
  class AWS_ELASTICBEANSTALK_API EnvironmentDescription
  {
  public:
    EnvironmentDescription();
    EnvironmentDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    EnvironmentDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The name of this environment.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of this environment.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of this environment.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of this environment.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The name of this environment.</p>
     */
    inline EnvironmentDescription& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of this environment.</p>
     */
    inline EnvironmentDescription& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of this environment.</p>
     */
    inline EnvironmentDescription& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The ID of this environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The ID of this environment.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The ID of this environment.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The ID of this environment.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The ID of this environment.</p>
     */
    inline EnvironmentDescription& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The ID of this environment.</p>
     */
    inline EnvironmentDescription& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The ID of this environment.</p>
     */
    inline EnvironmentDescription& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The name of the application associated with this environment.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application associated with this environment.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application associated with this environment.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application associated with this environment.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application associated with this environment.</p>
     */
    inline EnvironmentDescription& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application associated with this environment.</p>
     */
    inline EnvironmentDescription& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application associated with this environment.</p>
     */
    inline EnvironmentDescription& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>The application version deployed in this environment.</p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }

    /**
     * <p>The application version deployed in this environment.</p>
     */
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }

    /**
     * <p>The application version deployed in this environment.</p>
     */
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }

    /**
     * <p>The application version deployed in this environment.</p>
     */
    inline void SetVersionLabel(const char* value) { m_versionLabelHasBeenSet = true; m_versionLabel.assign(value); }

    /**
     * <p>The application version deployed in this environment.</p>
     */
    inline EnvironmentDescription& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}

    /**
     * <p>The application version deployed in this environment.</p>
     */
    inline EnvironmentDescription& WithVersionLabel(Aws::String&& value) { SetVersionLabel(value); return *this;}

    /**
     * <p>The application version deployed in this environment.</p>
     */
    inline EnvironmentDescription& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}

    /**
     * <p> The name of the <code>SolutionStack</code> deployed with this environment.
     * </p>
     */
    inline const Aws::String& GetSolutionStackName() const{ return m_solutionStackName; }

    /**
     * <p> The name of the <code>SolutionStack</code> deployed with this environment.
     * </p>
     */
    inline void SetSolutionStackName(const Aws::String& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = value; }

    /**
     * <p> The name of the <code>SolutionStack</code> deployed with this environment.
     * </p>
     */
    inline void SetSolutionStackName(Aws::String&& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = value; }

    /**
     * <p> The name of the <code>SolutionStack</code> deployed with this environment.
     * </p>
     */
    inline void SetSolutionStackName(const char* value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName.assign(value); }

    /**
     * <p> The name of the <code>SolutionStack</code> deployed with this environment.
     * </p>
     */
    inline EnvironmentDescription& WithSolutionStackName(const Aws::String& value) { SetSolutionStackName(value); return *this;}

    /**
     * <p> The name of the <code>SolutionStack</code> deployed with this environment.
     * </p>
     */
    inline EnvironmentDescription& WithSolutionStackName(Aws::String&& value) { SetSolutionStackName(value); return *this;}

    /**
     * <p> The name of the <code>SolutionStack</code> deployed with this environment.
     * </p>
     */
    inline EnvironmentDescription& WithSolutionStackName(const char* value) { SetSolutionStackName(value); return *this;}

    /**
     * <p>The name of the configuration template used to originally launch this
     * environment.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the configuration template used to originally launch this
     * environment.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the configuration template used to originally launch this
     * environment.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the configuration template used to originally launch this
     * environment.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the configuration template used to originally launch this
     * environment.</p>
     */
    inline EnvironmentDescription& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the configuration template used to originally launch this
     * environment.</p>
     */
    inline EnvironmentDescription& WithTemplateName(Aws::String&& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the configuration template used to originally launch this
     * environment.</p>
     */
    inline EnvironmentDescription& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}

    /**
     * <p>Describes this environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Describes this environment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Describes this environment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Describes this environment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Describes this environment.</p>
     */
    inline EnvironmentDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Describes this environment.</p>
     */
    inline EnvironmentDescription& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>Describes this environment.</p>
     */
    inline EnvironmentDescription& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>For load-balanced, autoscaling environments, the URL to the LoadBalancer. For
     * single-instance environments, the IP address of the instance.</p>
     */
    inline const Aws::String& GetEndpointURL() const{ return m_endpointURL; }

    /**
     * <p>For load-balanced, autoscaling environments, the URL to the LoadBalancer. For
     * single-instance environments, the IP address of the instance.</p>
     */
    inline void SetEndpointURL(const Aws::String& value) { m_endpointURLHasBeenSet = true; m_endpointURL = value; }

    /**
     * <p>For load-balanced, autoscaling environments, the URL to the LoadBalancer. For
     * single-instance environments, the IP address of the instance.</p>
     */
    inline void SetEndpointURL(Aws::String&& value) { m_endpointURLHasBeenSet = true; m_endpointURL = value; }

    /**
     * <p>For load-balanced, autoscaling environments, the URL to the LoadBalancer. For
     * single-instance environments, the IP address of the instance.</p>
     */
    inline void SetEndpointURL(const char* value) { m_endpointURLHasBeenSet = true; m_endpointURL.assign(value); }

    /**
     * <p>For load-balanced, autoscaling environments, the URL to the LoadBalancer. For
     * single-instance environments, the IP address of the instance.</p>
     */
    inline EnvironmentDescription& WithEndpointURL(const Aws::String& value) { SetEndpointURL(value); return *this;}

    /**
     * <p>For load-balanced, autoscaling environments, the URL to the LoadBalancer. For
     * single-instance environments, the IP address of the instance.</p>
     */
    inline EnvironmentDescription& WithEndpointURL(Aws::String&& value) { SetEndpointURL(value); return *this;}

    /**
     * <p>For load-balanced, autoscaling environments, the URL to the LoadBalancer. For
     * single-instance environments, the IP address of the instance.</p>
     */
    inline EnvironmentDescription& WithEndpointURL(const char* value) { SetEndpointURL(value); return *this;}

    /**
     * <p>The URL to the CNAME for this environment.</p>
     */
    inline const Aws::String& GetCNAME() const{ return m_cNAME; }

    /**
     * <p>The URL to the CNAME for this environment.</p>
     */
    inline void SetCNAME(const Aws::String& value) { m_cNAMEHasBeenSet = true; m_cNAME = value; }

    /**
     * <p>The URL to the CNAME for this environment.</p>
     */
    inline void SetCNAME(Aws::String&& value) { m_cNAMEHasBeenSet = true; m_cNAME = value; }

    /**
     * <p>The URL to the CNAME for this environment.</p>
     */
    inline void SetCNAME(const char* value) { m_cNAMEHasBeenSet = true; m_cNAME.assign(value); }

    /**
     * <p>The URL to the CNAME for this environment.</p>
     */
    inline EnvironmentDescription& WithCNAME(const Aws::String& value) { SetCNAME(value); return *this;}

    /**
     * <p>The URL to the CNAME for this environment.</p>
     */
    inline EnvironmentDescription& WithCNAME(Aws::String&& value) { SetCNAME(value); return *this;}

    /**
     * <p>The URL to the CNAME for this environment.</p>
     */
    inline EnvironmentDescription& WithCNAME(const char* value) { SetCNAME(value); return *this;}

    /**
     * <p>The creation date for this environment.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The creation date for this environment.</p>
     */
    inline void SetDateCreated(const Aws::Utils::DateTime& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The creation date for this environment.</p>
     */
    inline void SetDateCreated(Aws::Utils::DateTime&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The creation date for this environment.</p>
     */
    inline EnvironmentDescription& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The creation date for this environment.</p>
     */
    inline EnvironmentDescription& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The last modified date for this environment.</p>
     */
    inline const Aws::Utils::DateTime& GetDateUpdated() const{ return m_dateUpdated; }

    /**
     * <p>The last modified date for this environment.</p>
     */
    inline void SetDateUpdated(const Aws::Utils::DateTime& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = value; }

    /**
     * <p>The last modified date for this environment.</p>
     */
    inline void SetDateUpdated(Aws::Utils::DateTime&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = value; }

    /**
     * <p>The last modified date for this environment.</p>
     */
    inline EnvironmentDescription& WithDateUpdated(const Aws::Utils::DateTime& value) { SetDateUpdated(value); return *this;}

    /**
     * <p>The last modified date for this environment.</p>
     */
    inline EnvironmentDescription& WithDateUpdated(Aws::Utils::DateTime&& value) { SetDateUpdated(value); return *this;}

    /**
     * <p>The current operational status of the environment:</p> <ul> <li> <p>
     * <code>Launching</code>: Environment is in the process of initial deployment.</p>
     * </li> <li> <p> <code>Updating</code>: Environment is in the process of updating
     * its configuration settings or application version.</p> </li> <li> <p>
     * <code>Ready</code>: Environment is available to have an action performed on it,
     * such as update or terminate.</p> </li> <li> <p> <code>Terminating</code>:
     * Environment is in the shut-down process.</p> </li> <li> <p>
     * <code>Terminated</code>: Environment is not running.</p> </li> </ul>
     */
    inline const EnvironmentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current operational status of the environment:</p> <ul> <li> <p>
     * <code>Launching</code>: Environment is in the process of initial deployment.</p>
     * </li> <li> <p> <code>Updating</code>: Environment is in the process of updating
     * its configuration settings or application version.</p> </li> <li> <p>
     * <code>Ready</code>: Environment is available to have an action performed on it,
     * such as update or terminate.</p> </li> <li> <p> <code>Terminating</code>:
     * Environment is in the shut-down process.</p> </li> <li> <p>
     * <code>Terminated</code>: Environment is not running.</p> </li> </ul>
     */
    inline void SetStatus(const EnvironmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current operational status of the environment:</p> <ul> <li> <p>
     * <code>Launching</code>: Environment is in the process of initial deployment.</p>
     * </li> <li> <p> <code>Updating</code>: Environment is in the process of updating
     * its configuration settings or application version.</p> </li> <li> <p>
     * <code>Ready</code>: Environment is available to have an action performed on it,
     * such as update or terminate.</p> </li> <li> <p> <code>Terminating</code>:
     * Environment is in the shut-down process.</p> </li> <li> <p>
     * <code>Terminated</code>: Environment is not running.</p> </li> </ul>
     */
    inline void SetStatus(EnvironmentStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current operational status of the environment:</p> <ul> <li> <p>
     * <code>Launching</code>: Environment is in the process of initial deployment.</p>
     * </li> <li> <p> <code>Updating</code>: Environment is in the process of updating
     * its configuration settings or application version.</p> </li> <li> <p>
     * <code>Ready</code>: Environment is available to have an action performed on it,
     * such as update or terminate.</p> </li> <li> <p> <code>Terminating</code>:
     * Environment is in the shut-down process.</p> </li> <li> <p>
     * <code>Terminated</code>: Environment is not running.</p> </li> </ul>
     */
    inline EnvironmentDescription& WithStatus(const EnvironmentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current operational status of the environment:</p> <ul> <li> <p>
     * <code>Launching</code>: Environment is in the process of initial deployment.</p>
     * </li> <li> <p> <code>Updating</code>: Environment is in the process of updating
     * its configuration settings or application version.</p> </li> <li> <p>
     * <code>Ready</code>: Environment is available to have an action performed on it,
     * such as update or terminate.</p> </li> <li> <p> <code>Terminating</code>:
     * Environment is in the shut-down process.</p> </li> <li> <p>
     * <code>Terminated</code>: Environment is not running.</p> </li> </ul>
     */
    inline EnvironmentDescription& WithStatus(EnvironmentStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates if there is an in-progress environment configuration update or
     * application version deployment that you can cancel.</p> <p> <code>true:</code>
     * There is an update in progress. </p> <p> <code>false:</code> There are no
     * updates currently in progress. </p>
     */
    inline bool GetAbortableOperationInProgress() const{ return m_abortableOperationInProgress; }

    /**
     * <p>Indicates if there is an in-progress environment configuration update or
     * application version deployment that you can cancel.</p> <p> <code>true:</code>
     * There is an update in progress. </p> <p> <code>false:</code> There are no
     * updates currently in progress. </p>
     */
    inline void SetAbortableOperationInProgress(bool value) { m_abortableOperationInProgressHasBeenSet = true; m_abortableOperationInProgress = value; }

    /**
     * <p>Indicates if there is an in-progress environment configuration update or
     * application version deployment that you can cancel.</p> <p> <code>true:</code>
     * There is an update in progress. </p> <p> <code>false:</code> There are no
     * updates currently in progress. </p>
     */
    inline EnvironmentDescription& WithAbortableOperationInProgress(bool value) { SetAbortableOperationInProgress(value); return *this;}

    /**
     * <p>Describes the health status of the environment. AWS Elastic Beanstalk
     * indicates the failure levels for a running environment:</p> <ul> <li> <p>
     * <code>Red</code>: Indicates the environment is not responsive. Occurs when three
     * or more consecutive failures occur for an environment.</p> </li> <li> <p>
     * <code>Yellow</code>: Indicates that something is wrong. Occurs when two
     * consecutive failures occur for an environment.</p> </li> <li> <p>
     * <code>Green</code>: Indicates the environment is healthy and fully
     * functional.</p> </li> <li> <p> <code>Grey</code>: Default health for a new
     * environment. The environment is not fully launched and health checks have not
     * started or health checks are suspended during an <code>UpdateEnvironment</code>
     * or <code>RestartEnvironement</code> request.</p> </li> </ul> <p> Default:
     * <code>Grey</code> </p>
     */
    inline const EnvironmentHealth& GetHealth() const{ return m_health; }

    /**
     * <p>Describes the health status of the environment. AWS Elastic Beanstalk
     * indicates the failure levels for a running environment:</p> <ul> <li> <p>
     * <code>Red</code>: Indicates the environment is not responsive. Occurs when three
     * or more consecutive failures occur for an environment.</p> </li> <li> <p>
     * <code>Yellow</code>: Indicates that something is wrong. Occurs when two
     * consecutive failures occur for an environment.</p> </li> <li> <p>
     * <code>Green</code>: Indicates the environment is healthy and fully
     * functional.</p> </li> <li> <p> <code>Grey</code>: Default health for a new
     * environment. The environment is not fully launched and health checks have not
     * started or health checks are suspended during an <code>UpdateEnvironment</code>
     * or <code>RestartEnvironement</code> request.</p> </li> </ul> <p> Default:
     * <code>Grey</code> </p>
     */
    inline void SetHealth(const EnvironmentHealth& value) { m_healthHasBeenSet = true; m_health = value; }

    /**
     * <p>Describes the health status of the environment. AWS Elastic Beanstalk
     * indicates the failure levels for a running environment:</p> <ul> <li> <p>
     * <code>Red</code>: Indicates the environment is not responsive. Occurs when three
     * or more consecutive failures occur for an environment.</p> </li> <li> <p>
     * <code>Yellow</code>: Indicates that something is wrong. Occurs when two
     * consecutive failures occur for an environment.</p> </li> <li> <p>
     * <code>Green</code>: Indicates the environment is healthy and fully
     * functional.</p> </li> <li> <p> <code>Grey</code>: Default health for a new
     * environment. The environment is not fully launched and health checks have not
     * started or health checks are suspended during an <code>UpdateEnvironment</code>
     * or <code>RestartEnvironement</code> request.</p> </li> </ul> <p> Default:
     * <code>Grey</code> </p>
     */
    inline void SetHealth(EnvironmentHealth&& value) { m_healthHasBeenSet = true; m_health = value; }

    /**
     * <p>Describes the health status of the environment. AWS Elastic Beanstalk
     * indicates the failure levels for a running environment:</p> <ul> <li> <p>
     * <code>Red</code>: Indicates the environment is not responsive. Occurs when three
     * or more consecutive failures occur for an environment.</p> </li> <li> <p>
     * <code>Yellow</code>: Indicates that something is wrong. Occurs when two
     * consecutive failures occur for an environment.</p> </li> <li> <p>
     * <code>Green</code>: Indicates the environment is healthy and fully
     * functional.</p> </li> <li> <p> <code>Grey</code>: Default health for a new
     * environment. The environment is not fully launched and health checks have not
     * started or health checks are suspended during an <code>UpdateEnvironment</code>
     * or <code>RestartEnvironement</code> request.</p> </li> </ul> <p> Default:
     * <code>Grey</code> </p>
     */
    inline EnvironmentDescription& WithHealth(const EnvironmentHealth& value) { SetHealth(value); return *this;}

    /**
     * <p>Describes the health status of the environment. AWS Elastic Beanstalk
     * indicates the failure levels for a running environment:</p> <ul> <li> <p>
     * <code>Red</code>: Indicates the environment is not responsive. Occurs when three
     * or more consecutive failures occur for an environment.</p> </li> <li> <p>
     * <code>Yellow</code>: Indicates that something is wrong. Occurs when two
     * consecutive failures occur for an environment.</p> </li> <li> <p>
     * <code>Green</code>: Indicates the environment is healthy and fully
     * functional.</p> </li> <li> <p> <code>Grey</code>: Default health for a new
     * environment. The environment is not fully launched and health checks have not
     * started or health checks are suspended during an <code>UpdateEnvironment</code>
     * or <code>RestartEnvironement</code> request.</p> </li> </ul> <p> Default:
     * <code>Grey</code> </p>
     */
    inline EnvironmentDescription& WithHealth(EnvironmentHealth&& value) { SetHealth(value); return *this;}

    /**
     * <p>Returns the health status of the application running in your environment. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline const EnvironmentHealthStatus& GetHealthStatus() const{ return m_healthStatus; }

    /**
     * <p>Returns the health status of the application running in your environment. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline void SetHealthStatus(const EnvironmentHealthStatus& value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }

    /**
     * <p>Returns the health status of the application running in your environment. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline void SetHealthStatus(EnvironmentHealthStatus&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }

    /**
     * <p>Returns the health status of the application running in your environment. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline EnvironmentDescription& WithHealthStatus(const EnvironmentHealthStatus& value) { SetHealthStatus(value); return *this;}

    /**
     * <p>Returns the health status of the application running in your environment. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline EnvironmentDescription& WithHealthStatus(EnvironmentHealthStatus&& value) { SetHealthStatus(value); return *this;}

    /**
     * <p>The description of the AWS resources used by this environment.</p>
     */
    inline const EnvironmentResourcesDescription& GetResources() const{ return m_resources; }

    /**
     * <p>The description of the AWS resources used by this environment.</p>
     */
    inline void SetResources(const EnvironmentResourcesDescription& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>The description of the AWS resources used by this environment.</p>
     */
    inline void SetResources(EnvironmentResourcesDescription&& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>The description of the AWS resources used by this environment.</p>
     */
    inline EnvironmentDescription& WithResources(const EnvironmentResourcesDescription& value) { SetResources(value); return *this;}

    /**
     * <p>The description of the AWS resources used by this environment.</p>
     */
    inline EnvironmentDescription& WithResources(EnvironmentResourcesDescription&& value) { SetResources(value); return *this;}

    /**
     * <p>Describes the current tier of this environment.</p>
     */
    inline const EnvironmentTier& GetTier() const{ return m_tier; }

    /**
     * <p>Describes the current tier of this environment.</p>
     */
    inline void SetTier(const EnvironmentTier& value) { m_tierHasBeenSet = true; m_tier = value; }

    /**
     * <p>Describes the current tier of this environment.</p>
     */
    inline void SetTier(EnvironmentTier&& value) { m_tierHasBeenSet = true; m_tier = value; }

    /**
     * <p>Describes the current tier of this environment.</p>
     */
    inline EnvironmentDescription& WithTier(const EnvironmentTier& value) { SetTier(value); return *this;}

    /**
     * <p>Describes the current tier of this environment.</p>
     */
    inline EnvironmentDescription& WithTier(EnvironmentTier&& value) { SetTier(value); return *this;}

    /**
     * <p>A list of links to other environments in the same group.</p>
     */
    inline const Aws::Vector<EnvironmentLink>& GetEnvironmentLinks() const{ return m_environmentLinks; }

    /**
     * <p>A list of links to other environments in the same group.</p>
     */
    inline void SetEnvironmentLinks(const Aws::Vector<EnvironmentLink>& value) { m_environmentLinksHasBeenSet = true; m_environmentLinks = value; }

    /**
     * <p>A list of links to other environments in the same group.</p>
     */
    inline void SetEnvironmentLinks(Aws::Vector<EnvironmentLink>&& value) { m_environmentLinksHasBeenSet = true; m_environmentLinks = value; }

    /**
     * <p>A list of links to other environments in the same group.</p>
     */
    inline EnvironmentDescription& WithEnvironmentLinks(const Aws::Vector<EnvironmentLink>& value) { SetEnvironmentLinks(value); return *this;}

    /**
     * <p>A list of links to other environments in the same group.</p>
     */
    inline EnvironmentDescription& WithEnvironmentLinks(Aws::Vector<EnvironmentLink>&& value) { SetEnvironmentLinks(value); return *this;}

    /**
     * <p>A list of links to other environments in the same group.</p>
     */
    inline EnvironmentDescription& AddEnvironmentLinks(const EnvironmentLink& value) { m_environmentLinksHasBeenSet = true; m_environmentLinks.push_back(value); return *this; }

    /**
     * <p>A list of links to other environments in the same group.</p>
     */
    inline EnvironmentDescription& AddEnvironmentLinks(EnvironmentLink&& value) { m_environmentLinksHasBeenSet = true; m_environmentLinks.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = value; }

    
    inline EnvironmentDescription& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline EnvironmentDescription& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet;
    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet;
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet;
    Aws::String m_solutionStackName;
    bool m_solutionStackNameHasBeenSet;
    Aws::String m_templateName;
    bool m_templateNameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_endpointURL;
    bool m_endpointURLHasBeenSet;
    Aws::String m_cNAME;
    bool m_cNAMEHasBeenSet;
    Aws::Utils::DateTime m_dateCreated;
    bool m_dateCreatedHasBeenSet;
    Aws::Utils::DateTime m_dateUpdated;
    bool m_dateUpdatedHasBeenSet;
    EnvironmentStatus m_status;
    bool m_statusHasBeenSet;
    bool m_abortableOperationInProgress;
    bool m_abortableOperationInProgressHasBeenSet;
    EnvironmentHealth m_health;
    bool m_healthHasBeenSet;
    EnvironmentHealthStatus m_healthStatus;
    bool m_healthStatusHasBeenSet;
    EnvironmentResourcesDescription m_resources;
    bool m_resourcesHasBeenSet;
    EnvironmentTier m_tier;
    bool m_tierHasBeenSet;
    Aws::Vector<EnvironmentLink> m_environmentLinks;
    bool m_environmentLinksHasBeenSet;
    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
