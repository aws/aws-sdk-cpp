/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/SourceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ConfigurationOptionSetting.h>
#include <aws/elasticbeanstalk/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Request to create a configuration template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateConfigurationTemplateMessage">AWS
   * API Reference</a></p>
   */
  class CreateConfigurationTemplateRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API CreateConfigurationTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfigurationTemplate"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the Elastic Beanstalk application to associate with this
     * configuration template.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }
    inline CreateConfigurationTemplateRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline CreateConfigurationTemplateRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline CreateConfigurationTemplateRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration template.</p> <p>Constraint: This name must be
     * unique per application.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline CreateConfigurationTemplateRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline CreateConfigurationTemplateRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline CreateConfigurationTemplateRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an Elastic Beanstalk solution stack (platform version) that this
     * configuration uses. For example, <code>64bit Amazon Linux 2013.09 running Tomcat
     * 7 Java 7</code>. A solution stack specifies the operating system, runtime, and
     * application server for a configuration template. It also determines the set of
     * configuration options as well as the possible and default values. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/concepts.platforms.html">Supported
     * Platforms</a> in the <i>AWS Elastic Beanstalk Developer Guide</i>.</p> <p>You
     * must specify <code>SolutionStackName</code> if you don't specify
     * <code>PlatformArn</code>, <code>EnvironmentId</code>, or
     * <code>SourceConfiguration</code>.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/api/API_ListAvailableSolutionStacks.html">
     * <code>ListAvailableSolutionStacks</code> </a> API to obtain a list of available
     * solution stacks.</p>
     */
    inline const Aws::String& GetSolutionStackName() const{ return m_solutionStackName; }
    inline bool SolutionStackNameHasBeenSet() const { return m_solutionStackNameHasBeenSet; }
    inline void SetSolutionStackName(const Aws::String& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = value; }
    inline void SetSolutionStackName(Aws::String&& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = std::move(value); }
    inline void SetSolutionStackName(const char* value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName.assign(value); }
    inline CreateConfigurationTemplateRequest& WithSolutionStackName(const Aws::String& value) { SetSolutionStackName(value); return *this;}
    inline CreateConfigurationTemplateRequest& WithSolutionStackName(Aws::String&& value) { SetSolutionStackName(std::move(value)); return *this;}
    inline CreateConfigurationTemplateRequest& WithSolutionStackName(const char* value) { SetSolutionStackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom platform. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/custom-platforms.html">
     * Custom Platforms</a> in the <i>AWS Elastic Beanstalk Developer Guide</i>.</p>
     *  <p>If you specify <code>PlatformArn</code>, then don't specify
     * <code>SolutionStackName</code>.</p> 
     */
    inline const Aws::String& GetPlatformArn() const{ return m_platformArn; }
    inline bool PlatformArnHasBeenSet() const { return m_platformArnHasBeenSet; }
    inline void SetPlatformArn(const Aws::String& value) { m_platformArnHasBeenSet = true; m_platformArn = value; }
    inline void SetPlatformArn(Aws::String&& value) { m_platformArnHasBeenSet = true; m_platformArn = std::move(value); }
    inline void SetPlatformArn(const char* value) { m_platformArnHasBeenSet = true; m_platformArn.assign(value); }
    inline CreateConfigurationTemplateRequest& WithPlatformArn(const Aws::String& value) { SetPlatformArn(value); return *this;}
    inline CreateConfigurationTemplateRequest& WithPlatformArn(Aws::String&& value) { SetPlatformArn(std::move(value)); return *this;}
    inline CreateConfigurationTemplateRequest& WithPlatformArn(const char* value) { SetPlatformArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Elastic Beanstalk configuration template to base this one on. If
     * specified, Elastic Beanstalk uses the configuration values from the specified
     * configuration template to create a new configuration.</p> <p>Values specified in
     * <code>OptionSettings</code> override any values obtained from the
     * <code>SourceConfiguration</code>.</p> <p>You must specify
     * <code>SourceConfiguration</code> if you don't specify <code>PlatformArn</code>,
     * <code>EnvironmentId</code>, or <code>SolutionStackName</code>.</p>
     * <p>Constraint: If both solution stack name and source configuration are
     * specified, the solution stack of the source configuration template must match
     * the specified solution stack name.</p>
     */
    inline const SourceConfiguration& GetSourceConfiguration() const{ return m_sourceConfiguration; }
    inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
    inline void SetSourceConfiguration(const SourceConfiguration& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = value; }
    inline void SetSourceConfiguration(SourceConfiguration&& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = std::move(value); }
    inline CreateConfigurationTemplateRequest& WithSourceConfiguration(const SourceConfiguration& value) { SetSourceConfiguration(value); return *this;}
    inline CreateConfigurationTemplateRequest& WithSourceConfiguration(SourceConfiguration&& value) { SetSourceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of an environment whose settings you want to use to create the
     * configuration template. You must specify <code>EnvironmentId</code> if you don't
     * specify <code>PlatformArn</code>, <code>SolutionStackName</code>, or
     * <code>SourceConfiguration</code>.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline CreateConfigurationTemplateRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline CreateConfigurationTemplateRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline CreateConfigurationTemplateRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description for this configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateConfigurationTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateConfigurationTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateConfigurationTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Option values for the Elastic Beanstalk configuration, such as the instance
     * type. If specified, these values override the values obtained from the solution
     * stack or the source configuration template. For a complete list of Elastic
     * Beanstalk configuration options, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/command-options.html">Option
     * Values</a> in the <i>AWS Elastic Beanstalk Developer Guide</i>.</p>
     */
    inline const Aws::Vector<ConfigurationOptionSetting>& GetOptionSettings() const{ return m_optionSettings; }
    inline bool OptionSettingsHasBeenSet() const { return m_optionSettingsHasBeenSet; }
    inline void SetOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = value; }
    inline void SetOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = std::move(value); }
    inline CreateConfigurationTemplateRequest& WithOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { SetOptionSettings(value); return *this;}
    inline CreateConfigurationTemplateRequest& WithOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { SetOptionSettings(std::move(value)); return *this;}
    inline CreateConfigurationTemplateRequest& AddOptionSettings(const ConfigurationOptionSetting& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(value); return *this; }
    inline CreateConfigurationTemplateRequest& AddOptionSettings(ConfigurationOptionSetting&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the tags applied to the configuration template.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateConfigurationTemplateRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateConfigurationTemplateRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateConfigurationTemplateRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateConfigurationTemplateRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_solutionStackName;
    bool m_solutionStackNameHasBeenSet = false;

    Aws::String m_platformArn;
    bool m_platformArnHasBeenSet = false;

    SourceConfiguration m_sourceConfiguration;
    bool m_sourceConfigurationHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<ConfigurationOptionSetting> m_optionSettings;
    bool m_optionSettingsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
