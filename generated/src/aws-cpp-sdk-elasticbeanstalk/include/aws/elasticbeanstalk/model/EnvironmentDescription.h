/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Describes the properties of an environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/EnvironmentDescription">AWS
   * API Reference</a></p>
   */
  class EnvironmentDescription
  {
  public:
    AWS_ELASTICBEANSTALK_API EnvironmentDescription();
    AWS_ELASTICBEANSTALK_API EnvironmentDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API EnvironmentDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of this environment.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }
    inline EnvironmentDescription& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}
    inline EnvironmentDescription& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}
    inline EnvironmentDescription& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of this environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline EnvironmentDescription& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline EnvironmentDescription& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline EnvironmentDescription& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application associated with this environment.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }
    inline EnvironmentDescription& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline EnvironmentDescription& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline EnvironmentDescription& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application version deployed in this environment.</p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }
    inline bool VersionLabelHasBeenSet() const { return m_versionLabelHasBeenSet; }
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::move(value); }
    inline void SetVersionLabel(const char* value) { m_versionLabelHasBeenSet = true; m_versionLabel.assign(value); }
    inline EnvironmentDescription& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}
    inline EnvironmentDescription& WithVersionLabel(Aws::String&& value) { SetVersionLabel(std::move(value)); return *this;}
    inline EnvironmentDescription& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the <code>SolutionStack</code> deployed with this environment.
     * </p>
     */
    inline const Aws::String& GetSolutionStackName() const{ return m_solutionStackName; }
    inline bool SolutionStackNameHasBeenSet() const { return m_solutionStackNameHasBeenSet; }
    inline void SetSolutionStackName(const Aws::String& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = value; }
    inline void SetSolutionStackName(Aws::String&& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = std::move(value); }
    inline void SetSolutionStackName(const char* value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName.assign(value); }
    inline EnvironmentDescription& WithSolutionStackName(const Aws::String& value) { SetSolutionStackName(value); return *this;}
    inline EnvironmentDescription& WithSolutionStackName(Aws::String&& value) { SetSolutionStackName(std::move(value)); return *this;}
    inline EnvironmentDescription& WithSolutionStackName(const char* value) { SetSolutionStackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the platform version.</p>
     */
    inline const Aws::String& GetPlatformArn() const{ return m_platformArn; }
    inline bool PlatformArnHasBeenSet() const { return m_platformArnHasBeenSet; }
    inline void SetPlatformArn(const Aws::String& value) { m_platformArnHasBeenSet = true; m_platformArn = value; }
    inline void SetPlatformArn(Aws::String&& value) { m_platformArnHasBeenSet = true; m_platformArn = std::move(value); }
    inline void SetPlatformArn(const char* value) { m_platformArnHasBeenSet = true; m_platformArn.assign(value); }
    inline EnvironmentDescription& WithPlatformArn(const Aws::String& value) { SetPlatformArn(value); return *this;}
    inline EnvironmentDescription& WithPlatformArn(Aws::String&& value) { SetPlatformArn(std::move(value)); return *this;}
    inline EnvironmentDescription& WithPlatformArn(const char* value) { SetPlatformArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration template used to originally launch this
     * environment.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline EnvironmentDescription& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline EnvironmentDescription& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline EnvironmentDescription& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes this environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline EnvironmentDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline EnvironmentDescription& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline EnvironmentDescription& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For load-balanced, autoscaling environments, the URL to the LoadBalancer. For
     * single-instance environments, the IP address of the instance.</p>
     */
    inline const Aws::String& GetEndpointURL() const{ return m_endpointURL; }
    inline bool EndpointURLHasBeenSet() const { return m_endpointURLHasBeenSet; }
    inline void SetEndpointURL(const Aws::String& value) { m_endpointURLHasBeenSet = true; m_endpointURL = value; }
    inline void SetEndpointURL(Aws::String&& value) { m_endpointURLHasBeenSet = true; m_endpointURL = std::move(value); }
    inline void SetEndpointURL(const char* value) { m_endpointURLHasBeenSet = true; m_endpointURL.assign(value); }
    inline EnvironmentDescription& WithEndpointURL(const Aws::String& value) { SetEndpointURL(value); return *this;}
    inline EnvironmentDescription& WithEndpointURL(Aws::String&& value) { SetEndpointURL(std::move(value)); return *this;}
    inline EnvironmentDescription& WithEndpointURL(const char* value) { SetEndpointURL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the CNAME for this environment.</p>
     */
    inline const Aws::String& GetCNAME() const{ return m_cNAME; }
    inline bool CNAMEHasBeenSet() const { return m_cNAMEHasBeenSet; }
    inline void SetCNAME(const Aws::String& value) { m_cNAMEHasBeenSet = true; m_cNAME = value; }
    inline void SetCNAME(Aws::String&& value) { m_cNAMEHasBeenSet = true; m_cNAME = std::move(value); }
    inline void SetCNAME(const char* value) { m_cNAMEHasBeenSet = true; m_cNAME.assign(value); }
    inline EnvironmentDescription& WithCNAME(const Aws::String& value) { SetCNAME(value); return *this;}
    inline EnvironmentDescription& WithCNAME(Aws::String&& value) { SetCNAME(std::move(value)); return *this;}
    inline EnvironmentDescription& WithCNAME(const char* value) { SetCNAME(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date for this environment.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const{ return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    inline void SetDateCreated(const Aws::Utils::DateTime& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }
    inline void SetDateCreated(Aws::Utils::DateTime&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }
    inline EnvironmentDescription& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}
    inline EnvironmentDescription& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified date for this environment.</p>
     */
    inline const Aws::Utils::DateTime& GetDateUpdated() const{ return m_dateUpdated; }
    inline bool DateUpdatedHasBeenSet() const { return m_dateUpdatedHasBeenSet; }
    inline void SetDateUpdated(const Aws::Utils::DateTime& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = value; }
    inline void SetDateUpdated(Aws::Utils::DateTime&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = std::move(value); }
    inline EnvironmentDescription& WithDateUpdated(const Aws::Utils::DateTime& value) { SetDateUpdated(value); return *this;}
    inline EnvironmentDescription& WithDateUpdated(Aws::Utils::DateTime&& value) { SetDateUpdated(std::move(value)); return *this;}
    ///@}

    ///@{
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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const EnvironmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(EnvironmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline EnvironmentDescription& WithStatus(const EnvironmentStatus& value) { SetStatus(value); return *this;}
    inline EnvironmentDescription& WithStatus(EnvironmentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if there is an in-progress environment configuration update or
     * application version deployment that you can cancel.</p> <p> <code>true:</code>
     * There is an update in progress. </p> <p> <code>false:</code> There are no
     * updates currently in progress. </p>
     */
    inline bool GetAbortableOperationInProgress() const{ return m_abortableOperationInProgress; }
    inline bool AbortableOperationInProgressHasBeenSet() const { return m_abortableOperationInProgressHasBeenSet; }
    inline void SetAbortableOperationInProgress(bool value) { m_abortableOperationInProgressHasBeenSet = true; m_abortableOperationInProgress = value; }
    inline EnvironmentDescription& WithAbortableOperationInProgress(bool value) { SetAbortableOperationInProgress(value); return *this;}
    ///@}

    ///@{
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
     * or <code>RestartEnvironment</code> request.</p> </li> </ul> <p> Default:
     * <code>Grey</code> </p>
     */
    inline const EnvironmentHealth& GetHealth() const{ return m_health; }
    inline bool HealthHasBeenSet() const { return m_healthHasBeenSet; }
    inline void SetHealth(const EnvironmentHealth& value) { m_healthHasBeenSet = true; m_health = value; }
    inline void SetHealth(EnvironmentHealth&& value) { m_healthHasBeenSet = true; m_health = std::move(value); }
    inline EnvironmentDescription& WithHealth(const EnvironmentHealth& value) { SetHealth(value); return *this;}
    inline EnvironmentDescription& WithHealth(EnvironmentHealth&& value) { SetHealth(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the health status of the application running in your environment. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline const EnvironmentHealthStatus& GetHealthStatus() const{ return m_healthStatus; }
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }
    inline void SetHealthStatus(const EnvironmentHealthStatus& value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }
    inline void SetHealthStatus(EnvironmentHealthStatus&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::move(value); }
    inline EnvironmentDescription& WithHealthStatus(const EnvironmentHealthStatus& value) { SetHealthStatus(value); return *this;}
    inline EnvironmentDescription& WithHealthStatus(EnvironmentHealthStatus&& value) { SetHealthStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the AWS resources used by this environment.</p>
     */
    inline const EnvironmentResourcesDescription& GetResources() const{ return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    inline void SetResources(const EnvironmentResourcesDescription& value) { m_resourcesHasBeenSet = true; m_resources = value; }
    inline void SetResources(EnvironmentResourcesDescription&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }
    inline EnvironmentDescription& WithResources(const EnvironmentResourcesDescription& value) { SetResources(value); return *this;}
    inline EnvironmentDescription& WithResources(EnvironmentResourcesDescription&& value) { SetResources(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the current tier of this environment.</p>
     */
    inline const EnvironmentTier& GetTier() const{ return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(const EnvironmentTier& value) { m_tierHasBeenSet = true; m_tier = value; }
    inline void SetTier(EnvironmentTier&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }
    inline EnvironmentDescription& WithTier(const EnvironmentTier& value) { SetTier(value); return *this;}
    inline EnvironmentDescription& WithTier(EnvironmentTier&& value) { SetTier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of links to other environments in the same group.</p>
     */
    inline const Aws::Vector<EnvironmentLink>& GetEnvironmentLinks() const{ return m_environmentLinks; }
    inline bool EnvironmentLinksHasBeenSet() const { return m_environmentLinksHasBeenSet; }
    inline void SetEnvironmentLinks(const Aws::Vector<EnvironmentLink>& value) { m_environmentLinksHasBeenSet = true; m_environmentLinks = value; }
    inline void SetEnvironmentLinks(Aws::Vector<EnvironmentLink>&& value) { m_environmentLinksHasBeenSet = true; m_environmentLinks = std::move(value); }
    inline EnvironmentDescription& WithEnvironmentLinks(const Aws::Vector<EnvironmentLink>& value) { SetEnvironmentLinks(value); return *this;}
    inline EnvironmentDescription& WithEnvironmentLinks(Aws::Vector<EnvironmentLink>&& value) { SetEnvironmentLinks(std::move(value)); return *this;}
    inline EnvironmentDescription& AddEnvironmentLinks(const EnvironmentLink& value) { m_environmentLinksHasBeenSet = true; m_environmentLinks.push_back(value); return *this; }
    inline EnvironmentDescription& AddEnvironmentLinks(EnvironmentLink&& value) { m_environmentLinksHasBeenSet = true; m_environmentLinks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The environment's Amazon Resource Name (ARN), which can be used in other API
     * requests that require an ARN.</p>
     */
    inline const Aws::String& GetEnvironmentArn() const{ return m_environmentArn; }
    inline bool EnvironmentArnHasBeenSet() const { return m_environmentArnHasBeenSet; }
    inline void SetEnvironmentArn(const Aws::String& value) { m_environmentArnHasBeenSet = true; m_environmentArn = value; }
    inline void SetEnvironmentArn(Aws::String&& value) { m_environmentArnHasBeenSet = true; m_environmentArn = std::move(value); }
    inline void SetEnvironmentArn(const char* value) { m_environmentArnHasBeenSet = true; m_environmentArn.assign(value); }
    inline EnvironmentDescription& WithEnvironmentArn(const Aws::String& value) { SetEnvironmentArn(value); return *this;}
    inline EnvironmentDescription& WithEnvironmentArn(Aws::String&& value) { SetEnvironmentArn(std::move(value)); return *this;}
    inline EnvironmentDescription& WithEnvironmentArn(const char* value) { SetEnvironmentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the environment's operations role. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/iam-operationsrole.html">Operations
     * roles</a> in the <i>AWS Elastic Beanstalk Developer Guide</i>.</p>
     */
    inline const Aws::String& GetOperationsRole() const{ return m_operationsRole; }
    inline bool OperationsRoleHasBeenSet() const { return m_operationsRoleHasBeenSet; }
    inline void SetOperationsRole(const Aws::String& value) { m_operationsRoleHasBeenSet = true; m_operationsRole = value; }
    inline void SetOperationsRole(Aws::String&& value) { m_operationsRoleHasBeenSet = true; m_operationsRole = std::move(value); }
    inline void SetOperationsRole(const char* value) { m_operationsRoleHasBeenSet = true; m_operationsRole.assign(value); }
    inline EnvironmentDescription& WithOperationsRole(const Aws::String& value) { SetOperationsRole(value); return *this;}
    inline EnvironmentDescription& WithOperationsRole(Aws::String&& value) { SetOperationsRole(std::move(value)); return *this;}
    inline EnvironmentDescription& WithOperationsRole(const char* value) { SetOperationsRole(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline EnvironmentDescription& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline EnvironmentDescription& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet = false;

    Aws::String m_solutionStackName;
    bool m_solutionStackNameHasBeenSet = false;

    Aws::String m_platformArn;
    bool m_platformArnHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_endpointURL;
    bool m_endpointURLHasBeenSet = false;

    Aws::String m_cNAME;
    bool m_cNAMEHasBeenSet = false;

    Aws::Utils::DateTime m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    Aws::Utils::DateTime m_dateUpdated;
    bool m_dateUpdatedHasBeenSet = false;

    EnvironmentStatus m_status;
    bool m_statusHasBeenSet = false;

    bool m_abortableOperationInProgress;
    bool m_abortableOperationInProgressHasBeenSet = false;

    EnvironmentHealth m_health;
    bool m_healthHasBeenSet = false;

    EnvironmentHealthStatus m_healthStatus;
    bool m_healthStatusHasBeenSet = false;

    EnvironmentResourcesDescription m_resources;
    bool m_resourcesHasBeenSet = false;

    EnvironmentTier m_tier;
    bool m_tierHasBeenSet = false;

    Aws::Vector<EnvironmentLink> m_environmentLinks;
    bool m_environmentLinksHasBeenSet = false;

    Aws::String m_environmentArn;
    bool m_environmentArnHasBeenSet = false;

    Aws::String m_operationsRole;
    bool m_operationsRoleHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
