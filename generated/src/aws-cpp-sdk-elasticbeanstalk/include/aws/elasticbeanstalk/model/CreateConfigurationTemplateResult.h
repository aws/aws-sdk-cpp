/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ConfigurationDeploymentStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/ConfigurationOptionSetting.h>
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
   * <p>Describes the settings for a configuration set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ConfigurationSettingsDescription">AWS
   * API Reference</a></p>
   */
  class CreateConfigurationTemplateResult
  {
  public:
    AWS_ELASTICBEANSTALK_API CreateConfigurationTemplateResult();
    AWS_ELASTICBEANSTALK_API CreateConfigurationTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API CreateConfigurationTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The name of the solution stack this configuration set uses.</p>
     */
    inline const Aws::String& GetSolutionStackName() const{ return m_solutionStackName; }
    inline void SetSolutionStackName(const Aws::String& value) { m_solutionStackName = value; }
    inline void SetSolutionStackName(Aws::String&& value) { m_solutionStackName = std::move(value); }
    inline void SetSolutionStackName(const char* value) { m_solutionStackName.assign(value); }
    inline CreateConfigurationTemplateResult& WithSolutionStackName(const Aws::String& value) { SetSolutionStackName(value); return *this;}
    inline CreateConfigurationTemplateResult& WithSolutionStackName(Aws::String&& value) { SetSolutionStackName(std::move(value)); return *this;}
    inline CreateConfigurationTemplateResult& WithSolutionStackName(const char* value) { SetSolutionStackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the platform version.</p>
     */
    inline const Aws::String& GetPlatformArn() const{ return m_platformArn; }
    inline void SetPlatformArn(const Aws::String& value) { m_platformArn = value; }
    inline void SetPlatformArn(Aws::String&& value) { m_platformArn = std::move(value); }
    inline void SetPlatformArn(const char* value) { m_platformArn.assign(value); }
    inline CreateConfigurationTemplateResult& WithPlatformArn(const Aws::String& value) { SetPlatformArn(value); return *this;}
    inline CreateConfigurationTemplateResult& WithPlatformArn(Aws::String&& value) { SetPlatformArn(std::move(value)); return *this;}
    inline CreateConfigurationTemplateResult& WithPlatformArn(const char* value) { SetPlatformArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application associated with this configuration set.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationName.assign(value); }
    inline CreateConfigurationTemplateResult& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline CreateConfigurationTemplateResult& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline CreateConfigurationTemplateResult& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If not <code>null</code>, the name of the configuration template for this
     * configuration set. </p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline void SetTemplateName(const Aws::String& value) { m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateName.assign(value); }
    inline CreateConfigurationTemplateResult& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline CreateConfigurationTemplateResult& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline CreateConfigurationTemplateResult& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes this configuration set.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateConfigurationTemplateResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateConfigurationTemplateResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateConfigurationTemplateResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If not <code>null</code>, the name of the environment for this configuration
     * set. </p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentName = value; }
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentName = std::move(value); }
    inline void SetEnvironmentName(const char* value) { m_environmentName.assign(value); }
    inline CreateConfigurationTemplateResult& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}
    inline CreateConfigurationTemplateResult& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}
    inline CreateConfigurationTemplateResult& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If this configuration set is associated with an environment, the
     * <code>DeploymentStatus</code> parameter indicates the deployment status of this
     * configuration set: </p> <ul> <li> <p> <code>null</code>: This configuration is
     * not associated with a running environment.</p> </li> <li> <p>
     * <code>pending</code>: This is a draft configuration that is not deployed to the
     * associated environment but is in the process of deploying.</p> </li> <li> <p>
     * <code>deployed</code>: This is the configuration that is currently deployed to
     * the associated running environment.</p> </li> <li> <p> <code>failed</code>: This
     * is a draft configuration that failed to successfully deploy.</p> </li> </ul>
     */
    inline const ConfigurationDeploymentStatus& GetDeploymentStatus() const{ return m_deploymentStatus; }
    inline void SetDeploymentStatus(const ConfigurationDeploymentStatus& value) { m_deploymentStatus = value; }
    inline void SetDeploymentStatus(ConfigurationDeploymentStatus&& value) { m_deploymentStatus = std::move(value); }
    inline CreateConfigurationTemplateResult& WithDeploymentStatus(const ConfigurationDeploymentStatus& value) { SetDeploymentStatus(value); return *this;}
    inline CreateConfigurationTemplateResult& WithDeploymentStatus(ConfigurationDeploymentStatus&& value) { SetDeploymentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date (in UTC time) when this configuration set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const{ return m_dateCreated; }
    inline void SetDateCreated(const Aws::Utils::DateTime& value) { m_dateCreated = value; }
    inline void SetDateCreated(Aws::Utils::DateTime&& value) { m_dateCreated = std::move(value); }
    inline CreateConfigurationTemplateResult& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}
    inline CreateConfigurationTemplateResult& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date (in UTC time) when this configuration set was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetDateUpdated() const{ return m_dateUpdated; }
    inline void SetDateUpdated(const Aws::Utils::DateTime& value) { m_dateUpdated = value; }
    inline void SetDateUpdated(Aws::Utils::DateTime&& value) { m_dateUpdated = std::move(value); }
    inline CreateConfigurationTemplateResult& WithDateUpdated(const Aws::Utils::DateTime& value) { SetDateUpdated(value); return *this;}
    inline CreateConfigurationTemplateResult& WithDateUpdated(Aws::Utils::DateTime&& value) { SetDateUpdated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the configuration options and their values in this configuration
     * set.</p>
     */
    inline const Aws::Vector<ConfigurationOptionSetting>& GetOptionSettings() const{ return m_optionSettings; }
    inline void SetOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { m_optionSettings = value; }
    inline void SetOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { m_optionSettings = std::move(value); }
    inline CreateConfigurationTemplateResult& WithOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { SetOptionSettings(value); return *this;}
    inline CreateConfigurationTemplateResult& WithOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { SetOptionSettings(std::move(value)); return *this;}
    inline CreateConfigurationTemplateResult& AddOptionSettings(const ConfigurationOptionSetting& value) { m_optionSettings.push_back(value); return *this; }
    inline CreateConfigurationTemplateResult& AddOptionSettings(ConfigurationOptionSetting&& value) { m_optionSettings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline CreateConfigurationTemplateResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline CreateConfigurationTemplateResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_solutionStackName;

    Aws::String m_platformArn;

    Aws::String m_applicationName;

    Aws::String m_templateName;

    Aws::String m_description;

    Aws::String m_environmentName;

    ConfigurationDeploymentStatus m_deploymentStatus;

    Aws::Utils::DateTime m_dateCreated;

    Aws::Utils::DateTime m_dateUpdated;

    Aws::Vector<ConfigurationOptionSetting> m_optionSettings;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
