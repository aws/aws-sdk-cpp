/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ConfigurationDeploymentStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/ConfigurationOptionSetting.h>
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
   * <p>Describes the settings for a configuration set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ConfigurationSettingsDescription">AWS
   * API Reference</a></p>
   */
  class ConfigurationSettingsDescription
  {
  public:
    AWS_ELASTICBEANSTALK_API ConfigurationSettingsDescription();
    AWS_ELASTICBEANSTALK_API ConfigurationSettingsDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API ConfigurationSettingsDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the solution stack this configuration set uses.</p>
     */
    inline const Aws::String& GetSolutionStackName() const{ return m_solutionStackName; }
    inline bool SolutionStackNameHasBeenSet() const { return m_solutionStackNameHasBeenSet; }
    inline void SetSolutionStackName(const Aws::String& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = value; }
    inline void SetSolutionStackName(Aws::String&& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = std::move(value); }
    inline void SetSolutionStackName(const char* value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName.assign(value); }
    inline ConfigurationSettingsDescription& WithSolutionStackName(const Aws::String& value) { SetSolutionStackName(value); return *this;}
    inline ConfigurationSettingsDescription& WithSolutionStackName(Aws::String&& value) { SetSolutionStackName(std::move(value)); return *this;}
    inline ConfigurationSettingsDescription& WithSolutionStackName(const char* value) { SetSolutionStackName(value); return *this;}
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
    inline ConfigurationSettingsDescription& WithPlatformArn(const Aws::String& value) { SetPlatformArn(value); return *this;}
    inline ConfigurationSettingsDescription& WithPlatformArn(Aws::String&& value) { SetPlatformArn(std::move(value)); return *this;}
    inline ConfigurationSettingsDescription& WithPlatformArn(const char* value) { SetPlatformArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application associated with this configuration set.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }
    inline ConfigurationSettingsDescription& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline ConfigurationSettingsDescription& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline ConfigurationSettingsDescription& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If not <code>null</code>, the name of the configuration template for this
     * configuration set. </p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline ConfigurationSettingsDescription& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline ConfigurationSettingsDescription& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline ConfigurationSettingsDescription& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes this configuration set.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ConfigurationSettingsDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ConfigurationSettingsDescription& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ConfigurationSettingsDescription& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If not <code>null</code>, the name of the environment for this configuration
     * set. </p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }
    inline ConfigurationSettingsDescription& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}
    inline ConfigurationSettingsDescription& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}
    inline ConfigurationSettingsDescription& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}
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
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }
    inline void SetDeploymentStatus(const ConfigurationDeploymentStatus& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }
    inline void SetDeploymentStatus(ConfigurationDeploymentStatus&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::move(value); }
    inline ConfigurationSettingsDescription& WithDeploymentStatus(const ConfigurationDeploymentStatus& value) { SetDeploymentStatus(value); return *this;}
    inline ConfigurationSettingsDescription& WithDeploymentStatus(ConfigurationDeploymentStatus&& value) { SetDeploymentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date (in UTC time) when this configuration set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const{ return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    inline void SetDateCreated(const Aws::Utils::DateTime& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }
    inline void SetDateCreated(Aws::Utils::DateTime&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }
    inline ConfigurationSettingsDescription& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}
    inline ConfigurationSettingsDescription& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date (in UTC time) when this configuration set was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetDateUpdated() const{ return m_dateUpdated; }
    inline bool DateUpdatedHasBeenSet() const { return m_dateUpdatedHasBeenSet; }
    inline void SetDateUpdated(const Aws::Utils::DateTime& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = value; }
    inline void SetDateUpdated(Aws::Utils::DateTime&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = std::move(value); }
    inline ConfigurationSettingsDescription& WithDateUpdated(const Aws::Utils::DateTime& value) { SetDateUpdated(value); return *this;}
    inline ConfigurationSettingsDescription& WithDateUpdated(Aws::Utils::DateTime&& value) { SetDateUpdated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the configuration options and their values in this configuration
     * set.</p>
     */
    inline const Aws::Vector<ConfigurationOptionSetting>& GetOptionSettings() const{ return m_optionSettings; }
    inline bool OptionSettingsHasBeenSet() const { return m_optionSettingsHasBeenSet; }
    inline void SetOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = value; }
    inline void SetOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = std::move(value); }
    inline ConfigurationSettingsDescription& WithOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { SetOptionSettings(value); return *this;}
    inline ConfigurationSettingsDescription& WithOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { SetOptionSettings(std::move(value)); return *this;}
    inline ConfigurationSettingsDescription& AddOptionSettings(const ConfigurationOptionSetting& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(value); return *this; }
    inline ConfigurationSettingsDescription& AddOptionSettings(ConfigurationOptionSetting&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ConfigurationSettingsDescription& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ConfigurationSettingsDescription& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_solutionStackName;
    bool m_solutionStackNameHasBeenSet = false;

    Aws::String m_platformArn;
    bool m_platformArnHasBeenSet = false;

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    ConfigurationDeploymentStatus m_deploymentStatus;
    bool m_deploymentStatusHasBeenSet = false;

    Aws::Utils::DateTime m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    Aws::Utils::DateTime m_dateUpdated;
    bool m_dateUpdatedHasBeenSet = false;

    Aws::Vector<ConfigurationOptionSetting> m_optionSettings;
    bool m_optionSettingsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
