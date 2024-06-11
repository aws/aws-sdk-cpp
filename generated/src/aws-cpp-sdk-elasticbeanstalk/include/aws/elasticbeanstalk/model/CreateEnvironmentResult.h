/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
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
  class CreateEnvironmentResult
  {
  public:
    AWS_ELASTICBEANSTALK_API CreateEnvironmentResult();
    AWS_ELASTICBEANSTALK_API CreateEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API CreateEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The name of this environment.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentName = value; }
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentName = std::move(value); }
    inline void SetEnvironmentName(const char* value) { m_environmentName.assign(value); }
    inline CreateEnvironmentResult& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}
    inline CreateEnvironmentResult& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}
    inline CreateEnvironmentResult& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of this environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }
    inline CreateEnvironmentResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline CreateEnvironmentResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline CreateEnvironmentResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application associated with this environment.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationName.assign(value); }
    inline CreateEnvironmentResult& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline CreateEnvironmentResult& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline CreateEnvironmentResult& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application version deployed in this environment.</p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabel = value; }
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabel = std::move(value); }
    inline void SetVersionLabel(const char* value) { m_versionLabel.assign(value); }
    inline CreateEnvironmentResult& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}
    inline CreateEnvironmentResult& WithVersionLabel(Aws::String&& value) { SetVersionLabel(std::move(value)); return *this;}
    inline CreateEnvironmentResult& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the <code>SolutionStack</code> deployed with this environment.
     * </p>
     */
    inline const Aws::String& GetSolutionStackName() const{ return m_solutionStackName; }
    inline void SetSolutionStackName(const Aws::String& value) { m_solutionStackName = value; }
    inline void SetSolutionStackName(Aws::String&& value) { m_solutionStackName = std::move(value); }
    inline void SetSolutionStackName(const char* value) { m_solutionStackName.assign(value); }
    inline CreateEnvironmentResult& WithSolutionStackName(const Aws::String& value) { SetSolutionStackName(value); return *this;}
    inline CreateEnvironmentResult& WithSolutionStackName(Aws::String&& value) { SetSolutionStackName(std::move(value)); return *this;}
    inline CreateEnvironmentResult& WithSolutionStackName(const char* value) { SetSolutionStackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the platform version.</p>
     */
    inline const Aws::String& GetPlatformArn() const{ return m_platformArn; }
    inline void SetPlatformArn(const Aws::String& value) { m_platformArn = value; }
    inline void SetPlatformArn(Aws::String&& value) { m_platformArn = std::move(value); }
    inline void SetPlatformArn(const char* value) { m_platformArn.assign(value); }
    inline CreateEnvironmentResult& WithPlatformArn(const Aws::String& value) { SetPlatformArn(value); return *this;}
    inline CreateEnvironmentResult& WithPlatformArn(Aws::String&& value) { SetPlatformArn(std::move(value)); return *this;}
    inline CreateEnvironmentResult& WithPlatformArn(const char* value) { SetPlatformArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration template used to originally launch this
     * environment.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline void SetTemplateName(const Aws::String& value) { m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateName.assign(value); }
    inline CreateEnvironmentResult& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline CreateEnvironmentResult& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline CreateEnvironmentResult& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes this environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateEnvironmentResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateEnvironmentResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateEnvironmentResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For load-balanced, autoscaling environments, the URL to the LoadBalancer. For
     * single-instance environments, the IP address of the instance.</p>
     */
    inline const Aws::String& GetEndpointURL() const{ return m_endpointURL; }
    inline void SetEndpointURL(const Aws::String& value) { m_endpointURL = value; }
    inline void SetEndpointURL(Aws::String&& value) { m_endpointURL = std::move(value); }
    inline void SetEndpointURL(const char* value) { m_endpointURL.assign(value); }
    inline CreateEnvironmentResult& WithEndpointURL(const Aws::String& value) { SetEndpointURL(value); return *this;}
    inline CreateEnvironmentResult& WithEndpointURL(Aws::String&& value) { SetEndpointURL(std::move(value)); return *this;}
    inline CreateEnvironmentResult& WithEndpointURL(const char* value) { SetEndpointURL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the CNAME for this environment.</p>
     */
    inline const Aws::String& GetCNAME() const{ return m_cNAME; }
    inline void SetCNAME(const Aws::String& value) { m_cNAME = value; }
    inline void SetCNAME(Aws::String&& value) { m_cNAME = std::move(value); }
    inline void SetCNAME(const char* value) { m_cNAME.assign(value); }
    inline CreateEnvironmentResult& WithCNAME(const Aws::String& value) { SetCNAME(value); return *this;}
    inline CreateEnvironmentResult& WithCNAME(Aws::String&& value) { SetCNAME(std::move(value)); return *this;}
    inline CreateEnvironmentResult& WithCNAME(const char* value) { SetCNAME(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date for this environment.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const{ return m_dateCreated; }
    inline void SetDateCreated(const Aws::Utils::DateTime& value) { m_dateCreated = value; }
    inline void SetDateCreated(Aws::Utils::DateTime&& value) { m_dateCreated = std::move(value); }
    inline CreateEnvironmentResult& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}
    inline CreateEnvironmentResult& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified date for this environment.</p>
     */
    inline const Aws::Utils::DateTime& GetDateUpdated() const{ return m_dateUpdated; }
    inline void SetDateUpdated(const Aws::Utils::DateTime& value) { m_dateUpdated = value; }
    inline void SetDateUpdated(Aws::Utils::DateTime&& value) { m_dateUpdated = std::move(value); }
    inline CreateEnvironmentResult& WithDateUpdated(const Aws::Utils::DateTime& value) { SetDateUpdated(value); return *this;}
    inline CreateEnvironmentResult& WithDateUpdated(Aws::Utils::DateTime&& value) { SetDateUpdated(std::move(value)); return *this;}
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
    inline void SetStatus(const EnvironmentStatus& value) { m_status = value; }
    inline void SetStatus(EnvironmentStatus&& value) { m_status = std::move(value); }
    inline CreateEnvironmentResult& WithStatus(const EnvironmentStatus& value) { SetStatus(value); return *this;}
    inline CreateEnvironmentResult& WithStatus(EnvironmentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if there is an in-progress environment configuration update or
     * application version deployment that you can cancel.</p> <p> <code>true:</code>
     * There is an update in progress. </p> <p> <code>false:</code> There are no
     * updates currently in progress. </p>
     */
    inline bool GetAbortableOperationInProgress() const{ return m_abortableOperationInProgress; }
    inline void SetAbortableOperationInProgress(bool value) { m_abortableOperationInProgress = value; }
    inline CreateEnvironmentResult& WithAbortableOperationInProgress(bool value) { SetAbortableOperationInProgress(value); return *this;}
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
    inline void SetHealth(const EnvironmentHealth& value) { m_health = value; }
    inline void SetHealth(EnvironmentHealth&& value) { m_health = std::move(value); }
    inline CreateEnvironmentResult& WithHealth(const EnvironmentHealth& value) { SetHealth(value); return *this;}
    inline CreateEnvironmentResult& WithHealth(EnvironmentHealth&& value) { SetHealth(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the health status of the application running in your environment. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
     * Colors and Statuses</a>.</p>
     */
    inline const EnvironmentHealthStatus& GetHealthStatus() const{ return m_healthStatus; }
    inline void SetHealthStatus(const EnvironmentHealthStatus& value) { m_healthStatus = value; }
    inline void SetHealthStatus(EnvironmentHealthStatus&& value) { m_healthStatus = std::move(value); }
    inline CreateEnvironmentResult& WithHealthStatus(const EnvironmentHealthStatus& value) { SetHealthStatus(value); return *this;}
    inline CreateEnvironmentResult& WithHealthStatus(EnvironmentHealthStatus&& value) { SetHealthStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the AWS resources used by this environment.</p>
     */
    inline const EnvironmentResourcesDescription& GetResources() const{ return m_resources; }
    inline void SetResources(const EnvironmentResourcesDescription& value) { m_resources = value; }
    inline void SetResources(EnvironmentResourcesDescription&& value) { m_resources = std::move(value); }
    inline CreateEnvironmentResult& WithResources(const EnvironmentResourcesDescription& value) { SetResources(value); return *this;}
    inline CreateEnvironmentResult& WithResources(EnvironmentResourcesDescription&& value) { SetResources(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the current tier of this environment.</p>
     */
    inline const EnvironmentTier& GetTier() const{ return m_tier; }
    inline void SetTier(const EnvironmentTier& value) { m_tier = value; }
    inline void SetTier(EnvironmentTier&& value) { m_tier = std::move(value); }
    inline CreateEnvironmentResult& WithTier(const EnvironmentTier& value) { SetTier(value); return *this;}
    inline CreateEnvironmentResult& WithTier(EnvironmentTier&& value) { SetTier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of links to other environments in the same group.</p>
     */
    inline const Aws::Vector<EnvironmentLink>& GetEnvironmentLinks() const{ return m_environmentLinks; }
    inline void SetEnvironmentLinks(const Aws::Vector<EnvironmentLink>& value) { m_environmentLinks = value; }
    inline void SetEnvironmentLinks(Aws::Vector<EnvironmentLink>&& value) { m_environmentLinks = std::move(value); }
    inline CreateEnvironmentResult& WithEnvironmentLinks(const Aws::Vector<EnvironmentLink>& value) { SetEnvironmentLinks(value); return *this;}
    inline CreateEnvironmentResult& WithEnvironmentLinks(Aws::Vector<EnvironmentLink>&& value) { SetEnvironmentLinks(std::move(value)); return *this;}
    inline CreateEnvironmentResult& AddEnvironmentLinks(const EnvironmentLink& value) { m_environmentLinks.push_back(value); return *this; }
    inline CreateEnvironmentResult& AddEnvironmentLinks(EnvironmentLink&& value) { m_environmentLinks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The environment's Amazon Resource Name (ARN), which can be used in other API
     * requests that require an ARN.</p>
     */
    inline const Aws::String& GetEnvironmentArn() const{ return m_environmentArn; }
    inline void SetEnvironmentArn(const Aws::String& value) { m_environmentArn = value; }
    inline void SetEnvironmentArn(Aws::String&& value) { m_environmentArn = std::move(value); }
    inline void SetEnvironmentArn(const char* value) { m_environmentArn.assign(value); }
    inline CreateEnvironmentResult& WithEnvironmentArn(const Aws::String& value) { SetEnvironmentArn(value); return *this;}
    inline CreateEnvironmentResult& WithEnvironmentArn(Aws::String&& value) { SetEnvironmentArn(std::move(value)); return *this;}
    inline CreateEnvironmentResult& WithEnvironmentArn(const char* value) { SetEnvironmentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the environment's operations role. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/iam-operationsrole.html">Operations
     * roles</a> in the <i>AWS Elastic Beanstalk Developer Guide</i>.</p>
     */
    inline const Aws::String& GetOperationsRole() const{ return m_operationsRole; }
    inline void SetOperationsRole(const Aws::String& value) { m_operationsRole = value; }
    inline void SetOperationsRole(Aws::String&& value) { m_operationsRole = std::move(value); }
    inline void SetOperationsRole(const char* value) { m_operationsRole.assign(value); }
    inline CreateEnvironmentResult& WithOperationsRole(const Aws::String& value) { SetOperationsRole(value); return *this;}
    inline CreateEnvironmentResult& WithOperationsRole(Aws::String&& value) { SetOperationsRole(std::move(value)); return *this;}
    inline CreateEnvironmentResult& WithOperationsRole(const char* value) { SetOperationsRole(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline CreateEnvironmentResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline CreateEnvironmentResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_environmentName;

    Aws::String m_environmentId;

    Aws::String m_applicationName;

    Aws::String m_versionLabel;

    Aws::String m_solutionStackName;

    Aws::String m_platformArn;

    Aws::String m_templateName;

    Aws::String m_description;

    Aws::String m_endpointURL;

    Aws::String m_cNAME;

    Aws::Utils::DateTime m_dateCreated;

    Aws::Utils::DateTime m_dateUpdated;

    EnvironmentStatus m_status;

    bool m_abortableOperationInProgress;

    EnvironmentHealth m_health;

    EnvironmentHealthStatus m_healthStatus;

    EnvironmentResourcesDescription m_resources;

    EnvironmentTier m_tier;

    Aws::Vector<EnvironmentLink> m_environmentLinks;

    Aws::String m_environmentArn;

    Aws::String m_operationsRole;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
