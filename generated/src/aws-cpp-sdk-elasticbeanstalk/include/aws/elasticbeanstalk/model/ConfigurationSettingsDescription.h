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
    AWS_ELASTICBEANSTALK_API ConfigurationSettingsDescription() = default;
    AWS_ELASTICBEANSTALK_API ConfigurationSettingsDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API ConfigurationSettingsDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the solution stack this configuration set uses.</p>
     */
    inline const Aws::String& GetSolutionStackName() const { return m_solutionStackName; }
    inline bool SolutionStackNameHasBeenSet() const { return m_solutionStackNameHasBeenSet; }
    template<typename SolutionStackNameT = Aws::String>
    void SetSolutionStackName(SolutionStackNameT&& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = std::forward<SolutionStackNameT>(value); }
    template<typename SolutionStackNameT = Aws::String>
    ConfigurationSettingsDescription& WithSolutionStackName(SolutionStackNameT&& value) { SetSolutionStackName(std::forward<SolutionStackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the platform version.</p>
     */
    inline const Aws::String& GetPlatformArn() const { return m_platformArn; }
    inline bool PlatformArnHasBeenSet() const { return m_platformArnHasBeenSet; }
    template<typename PlatformArnT = Aws::String>
    void SetPlatformArn(PlatformArnT&& value) { m_platformArnHasBeenSet = true; m_platformArn = std::forward<PlatformArnT>(value); }
    template<typename PlatformArnT = Aws::String>
    ConfigurationSettingsDescription& WithPlatformArn(PlatformArnT&& value) { SetPlatformArn(std::forward<PlatformArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application associated with this configuration set.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    ConfigurationSettingsDescription& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If not <code>null</code>, the name of the configuration template for this
     * configuration set. </p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    ConfigurationSettingsDescription& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes this configuration set.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ConfigurationSettingsDescription& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If not <code>null</code>, the name of the environment for this configuration
     * set. </p>
     */
    inline const Aws::String& GetEnvironmentName() const { return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    template<typename EnvironmentNameT = Aws::String>
    void SetEnvironmentName(EnvironmentNameT&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::forward<EnvironmentNameT>(value); }
    template<typename EnvironmentNameT = Aws::String>
    ConfigurationSettingsDescription& WithEnvironmentName(EnvironmentNameT&& value) { SetEnvironmentName(std::forward<EnvironmentNameT>(value)); return *this;}
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
    inline ConfigurationDeploymentStatus GetDeploymentStatus() const { return m_deploymentStatus; }
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }
    inline void SetDeploymentStatus(ConfigurationDeploymentStatus value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }
    inline ConfigurationSettingsDescription& WithDeploymentStatus(ConfigurationDeploymentStatus value) { SetDeploymentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date (in UTC time) when this configuration set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const { return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    template<typename DateCreatedT = Aws::Utils::DateTime>
    void SetDateCreated(DateCreatedT&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::forward<DateCreatedT>(value); }
    template<typename DateCreatedT = Aws::Utils::DateTime>
    ConfigurationSettingsDescription& WithDateCreated(DateCreatedT&& value) { SetDateCreated(std::forward<DateCreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date (in UTC time) when this configuration set was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetDateUpdated() const { return m_dateUpdated; }
    inline bool DateUpdatedHasBeenSet() const { return m_dateUpdatedHasBeenSet; }
    template<typename DateUpdatedT = Aws::Utils::DateTime>
    void SetDateUpdated(DateUpdatedT&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = std::forward<DateUpdatedT>(value); }
    template<typename DateUpdatedT = Aws::Utils::DateTime>
    ConfigurationSettingsDescription& WithDateUpdated(DateUpdatedT&& value) { SetDateUpdated(std::forward<DateUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the configuration options and their values in this configuration
     * set.</p>
     */
    inline const Aws::Vector<ConfigurationOptionSetting>& GetOptionSettings() const { return m_optionSettings; }
    inline bool OptionSettingsHasBeenSet() const { return m_optionSettingsHasBeenSet; }
    template<typename OptionSettingsT = Aws::Vector<ConfigurationOptionSetting>>
    void SetOptionSettings(OptionSettingsT&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = std::forward<OptionSettingsT>(value); }
    template<typename OptionSettingsT = Aws::Vector<ConfigurationOptionSetting>>
    ConfigurationSettingsDescription& WithOptionSettings(OptionSettingsT&& value) { SetOptionSettings(std::forward<OptionSettingsT>(value)); return *this;}
    template<typename OptionSettingsT = ConfigurationOptionSetting>
    ConfigurationSettingsDescription& AddOptionSettings(OptionSettingsT&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.emplace_back(std::forward<OptionSettingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ConfigurationSettingsDescription& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
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

    ConfigurationDeploymentStatus m_deploymentStatus{ConfigurationDeploymentStatus::NOT_SET};
    bool m_deploymentStatusHasBeenSet = false;

    Aws::Utils::DateTime m_dateCreated{};
    bool m_dateCreatedHasBeenSet = false;

    Aws::Utils::DateTime m_dateUpdated{};
    bool m_dateUpdatedHasBeenSet = false;

    Aws::Vector<ConfigurationOptionSetting> m_optionSettings;
    bool m_optionSettingsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = true;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
