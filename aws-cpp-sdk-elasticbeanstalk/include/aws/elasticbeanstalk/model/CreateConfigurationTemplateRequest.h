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
  class AWS_ELASTICBEANSTALK_API CreateConfigurationTemplateRequest : public ElasticBeanstalkRequest
  {
  public:
    CreateConfigurationTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfigurationTemplate"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the application to associate with this configuration template. If
     * no application is found with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application to associate with this configuration template. If
     * no application is found with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the application to associate with this configuration template. If
     * no application is found with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application to associate with this configuration template. If
     * no application is found with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the application to associate with this configuration template. If
     * no application is found with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application to associate with this configuration template. If
     * no application is found with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline CreateConfigurationTemplateRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application to associate with this configuration template. If
     * no application is found with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline CreateConfigurationTemplateRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application to associate with this configuration template. If
     * no application is found with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline CreateConfigurationTemplateRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The name of the configuration template.</p> <p>Constraint: This name must be
     * unique per application.</p> <p>Default: If a configuration template already
     * exists with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the configuration template.</p> <p>Constraint: This name must be
     * unique per application.</p> <p>Default: If a configuration template already
     * exists with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the configuration template.</p> <p>Constraint: This name must be
     * unique per application.</p> <p>Default: If a configuration template already
     * exists with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the configuration template.</p> <p>Constraint: This name must be
     * unique per application.</p> <p>Default: If a configuration template already
     * exists with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the configuration template.</p> <p>Constraint: This name must be
     * unique per application.</p> <p>Default: If a configuration template already
     * exists with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the configuration template.</p> <p>Constraint: This name must be
     * unique per application.</p> <p>Default: If a configuration template already
     * exists with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline CreateConfigurationTemplateRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the configuration template.</p> <p>Constraint: This name must be
     * unique per application.</p> <p>Default: If a configuration template already
     * exists with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline CreateConfigurationTemplateRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration template.</p> <p>Constraint: This name must be
     * unique per application.</p> <p>Default: If a configuration template already
     * exists with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline CreateConfigurationTemplateRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The name of the solution stack used by this configuration. The solution stack
     * specifies the operating system, architecture, and application server for a
     * configuration template. It determines the set of configuration options as well
     * as the possible and default values.</p> <p> Use
     * <a>ListAvailableSolutionStacks</a> to obtain a list of available solution
     * stacks. </p> <p> A solution stack name or a source configuration parameter must
     * be specified, otherwise AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p> <p>If a solution stack name is
     * not specified and the source configuration parameter is specified, AWS Elastic
     * Beanstalk uses the same solution stack as the source configuration template.</p>
     */
    inline const Aws::String& GetSolutionStackName() const{ return m_solutionStackName; }

    /**
     * <p>The name of the solution stack used by this configuration. The solution stack
     * specifies the operating system, architecture, and application server for a
     * configuration template. It determines the set of configuration options as well
     * as the possible and default values.</p> <p> Use
     * <a>ListAvailableSolutionStacks</a> to obtain a list of available solution
     * stacks. </p> <p> A solution stack name or a source configuration parameter must
     * be specified, otherwise AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p> <p>If a solution stack name is
     * not specified and the source configuration parameter is specified, AWS Elastic
     * Beanstalk uses the same solution stack as the source configuration template.</p>
     */
    inline bool SolutionStackNameHasBeenSet() const { return m_solutionStackNameHasBeenSet; }

    /**
     * <p>The name of the solution stack used by this configuration. The solution stack
     * specifies the operating system, architecture, and application server for a
     * configuration template. It determines the set of configuration options as well
     * as the possible and default values.</p> <p> Use
     * <a>ListAvailableSolutionStacks</a> to obtain a list of available solution
     * stacks. </p> <p> A solution stack name or a source configuration parameter must
     * be specified, otherwise AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p> <p>If a solution stack name is
     * not specified and the source configuration parameter is specified, AWS Elastic
     * Beanstalk uses the same solution stack as the source configuration template.</p>
     */
    inline void SetSolutionStackName(const Aws::String& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = value; }

    /**
     * <p>The name of the solution stack used by this configuration. The solution stack
     * specifies the operating system, architecture, and application server for a
     * configuration template. It determines the set of configuration options as well
     * as the possible and default values.</p> <p> Use
     * <a>ListAvailableSolutionStacks</a> to obtain a list of available solution
     * stacks. </p> <p> A solution stack name or a source configuration parameter must
     * be specified, otherwise AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p> <p>If a solution stack name is
     * not specified and the source configuration parameter is specified, AWS Elastic
     * Beanstalk uses the same solution stack as the source configuration template.</p>
     */
    inline void SetSolutionStackName(Aws::String&& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = std::move(value); }

    /**
     * <p>The name of the solution stack used by this configuration. The solution stack
     * specifies the operating system, architecture, and application server for a
     * configuration template. It determines the set of configuration options as well
     * as the possible and default values.</p> <p> Use
     * <a>ListAvailableSolutionStacks</a> to obtain a list of available solution
     * stacks. </p> <p> A solution stack name or a source configuration parameter must
     * be specified, otherwise AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p> <p>If a solution stack name is
     * not specified and the source configuration parameter is specified, AWS Elastic
     * Beanstalk uses the same solution stack as the source configuration template.</p>
     */
    inline void SetSolutionStackName(const char* value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName.assign(value); }

    /**
     * <p>The name of the solution stack used by this configuration. The solution stack
     * specifies the operating system, architecture, and application server for a
     * configuration template. It determines the set of configuration options as well
     * as the possible and default values.</p> <p> Use
     * <a>ListAvailableSolutionStacks</a> to obtain a list of available solution
     * stacks. </p> <p> A solution stack name or a source configuration parameter must
     * be specified, otherwise AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p> <p>If a solution stack name is
     * not specified and the source configuration parameter is specified, AWS Elastic
     * Beanstalk uses the same solution stack as the source configuration template.</p>
     */
    inline CreateConfigurationTemplateRequest& WithSolutionStackName(const Aws::String& value) { SetSolutionStackName(value); return *this;}

    /**
     * <p>The name of the solution stack used by this configuration. The solution stack
     * specifies the operating system, architecture, and application server for a
     * configuration template. It determines the set of configuration options as well
     * as the possible and default values.</p> <p> Use
     * <a>ListAvailableSolutionStacks</a> to obtain a list of available solution
     * stacks. </p> <p> A solution stack name or a source configuration parameter must
     * be specified, otherwise AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p> <p>If a solution stack name is
     * not specified and the source configuration parameter is specified, AWS Elastic
     * Beanstalk uses the same solution stack as the source configuration template.</p>
     */
    inline CreateConfigurationTemplateRequest& WithSolutionStackName(Aws::String&& value) { SetSolutionStackName(std::move(value)); return *this;}

    /**
     * <p>The name of the solution stack used by this configuration. The solution stack
     * specifies the operating system, architecture, and application server for a
     * configuration template. It determines the set of configuration options as well
     * as the possible and default values.</p> <p> Use
     * <a>ListAvailableSolutionStacks</a> to obtain a list of available solution
     * stacks. </p> <p> A solution stack name or a source configuration parameter must
     * be specified, otherwise AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p> <p>If a solution stack name is
     * not specified and the source configuration parameter is specified, AWS Elastic
     * Beanstalk uses the same solution stack as the source configuration template.</p>
     */
    inline CreateConfigurationTemplateRequest& WithSolutionStackName(const char* value) { SetSolutionStackName(value); return *this;}


    /**
     * <p>The ARN of the custom platform.</p>
     */
    inline const Aws::String& GetPlatformArn() const{ return m_platformArn; }

    /**
     * <p>The ARN of the custom platform.</p>
     */
    inline bool PlatformArnHasBeenSet() const { return m_platformArnHasBeenSet; }

    /**
     * <p>The ARN of the custom platform.</p>
     */
    inline void SetPlatformArn(const Aws::String& value) { m_platformArnHasBeenSet = true; m_platformArn = value; }

    /**
     * <p>The ARN of the custom platform.</p>
     */
    inline void SetPlatformArn(Aws::String&& value) { m_platformArnHasBeenSet = true; m_platformArn = std::move(value); }

    /**
     * <p>The ARN of the custom platform.</p>
     */
    inline void SetPlatformArn(const char* value) { m_platformArnHasBeenSet = true; m_platformArn.assign(value); }

    /**
     * <p>The ARN of the custom platform.</p>
     */
    inline CreateConfigurationTemplateRequest& WithPlatformArn(const Aws::String& value) { SetPlatformArn(value); return *this;}

    /**
     * <p>The ARN of the custom platform.</p>
     */
    inline CreateConfigurationTemplateRequest& WithPlatformArn(Aws::String&& value) { SetPlatformArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the custom platform.</p>
     */
    inline CreateConfigurationTemplateRequest& WithPlatformArn(const char* value) { SetPlatformArn(value); return *this;}


    /**
     * <p>If specified, AWS Elastic Beanstalk uses the configuration values from the
     * specified configuration template to create a new configuration.</p> <p> Values
     * specified in the <code>OptionSettings</code> parameter of this call overrides
     * any values obtained from the <code>SourceConfiguration</code>. </p> <p> If no
     * configuration template is found, returns an <code>InvalidParameterValue</code>
     * error. </p> <p> Constraint: If both the solution stack name parameter and the
     * source configuration parameters are specified, the solution stack of the source
     * configuration template must match the specified solution stack name or else AWS
     * Elastic Beanstalk returns an <code>InvalidParameterCombination</code> error.
     * </p>
     */
    inline const SourceConfiguration& GetSourceConfiguration() const{ return m_sourceConfiguration; }

    /**
     * <p>If specified, AWS Elastic Beanstalk uses the configuration values from the
     * specified configuration template to create a new configuration.</p> <p> Values
     * specified in the <code>OptionSettings</code> parameter of this call overrides
     * any values obtained from the <code>SourceConfiguration</code>. </p> <p> If no
     * configuration template is found, returns an <code>InvalidParameterValue</code>
     * error. </p> <p> Constraint: If both the solution stack name parameter and the
     * source configuration parameters are specified, the solution stack of the source
     * configuration template must match the specified solution stack name or else AWS
     * Elastic Beanstalk returns an <code>InvalidParameterCombination</code> error.
     * </p>
     */
    inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }

    /**
     * <p>If specified, AWS Elastic Beanstalk uses the configuration values from the
     * specified configuration template to create a new configuration.</p> <p> Values
     * specified in the <code>OptionSettings</code> parameter of this call overrides
     * any values obtained from the <code>SourceConfiguration</code>. </p> <p> If no
     * configuration template is found, returns an <code>InvalidParameterValue</code>
     * error. </p> <p> Constraint: If both the solution stack name parameter and the
     * source configuration parameters are specified, the solution stack of the source
     * configuration template must match the specified solution stack name or else AWS
     * Elastic Beanstalk returns an <code>InvalidParameterCombination</code> error.
     * </p>
     */
    inline void SetSourceConfiguration(const SourceConfiguration& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = value; }

    /**
     * <p>If specified, AWS Elastic Beanstalk uses the configuration values from the
     * specified configuration template to create a new configuration.</p> <p> Values
     * specified in the <code>OptionSettings</code> parameter of this call overrides
     * any values obtained from the <code>SourceConfiguration</code>. </p> <p> If no
     * configuration template is found, returns an <code>InvalidParameterValue</code>
     * error. </p> <p> Constraint: If both the solution stack name parameter and the
     * source configuration parameters are specified, the solution stack of the source
     * configuration template must match the specified solution stack name or else AWS
     * Elastic Beanstalk returns an <code>InvalidParameterCombination</code> error.
     * </p>
     */
    inline void SetSourceConfiguration(SourceConfiguration&& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = std::move(value); }

    /**
     * <p>If specified, AWS Elastic Beanstalk uses the configuration values from the
     * specified configuration template to create a new configuration.</p> <p> Values
     * specified in the <code>OptionSettings</code> parameter of this call overrides
     * any values obtained from the <code>SourceConfiguration</code>. </p> <p> If no
     * configuration template is found, returns an <code>InvalidParameterValue</code>
     * error. </p> <p> Constraint: If both the solution stack name parameter and the
     * source configuration parameters are specified, the solution stack of the source
     * configuration template must match the specified solution stack name or else AWS
     * Elastic Beanstalk returns an <code>InvalidParameterCombination</code> error.
     * </p>
     */
    inline CreateConfigurationTemplateRequest& WithSourceConfiguration(const SourceConfiguration& value) { SetSourceConfiguration(value); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk uses the configuration values from the
     * specified configuration template to create a new configuration.</p> <p> Values
     * specified in the <code>OptionSettings</code> parameter of this call overrides
     * any values obtained from the <code>SourceConfiguration</code>. </p> <p> If no
     * configuration template is found, returns an <code>InvalidParameterValue</code>
     * error. </p> <p> Constraint: If both the solution stack name parameter and the
     * source configuration parameters are specified, the solution stack of the source
     * configuration template must match the specified solution stack name or else AWS
     * Elastic Beanstalk returns an <code>InvalidParameterCombination</code> error.
     * </p>
     */
    inline CreateConfigurationTemplateRequest& WithSourceConfiguration(SourceConfiguration&& value) { SetSourceConfiguration(std::move(value)); return *this;}


    /**
     * <p>The ID of the environment used with this configuration template.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The ID of the environment used with this configuration template.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>The ID of the environment used with this configuration template.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The ID of the environment used with this configuration template.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>The ID of the environment used with this configuration template.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The ID of the environment used with this configuration template.</p>
     */
    inline CreateConfigurationTemplateRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The ID of the environment used with this configuration template.</p>
     */
    inline CreateConfigurationTemplateRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment used with this configuration template.</p>
     */
    inline CreateConfigurationTemplateRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>Describes this configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Describes this configuration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Describes this configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Describes this configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Describes this configuration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Describes this configuration.</p>
     */
    inline CreateConfigurationTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Describes this configuration.</p>
     */
    inline CreateConfigurationTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Describes this configuration.</p>
     */
    inline CreateConfigurationTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>If specified, AWS Elastic Beanstalk sets the specified configuration option
     * to the requested value. The new value overrides the value obtained from the
     * solution stack or the source configuration template.</p>
     */
    inline const Aws::Vector<ConfigurationOptionSetting>& GetOptionSettings() const{ return m_optionSettings; }

    /**
     * <p>If specified, AWS Elastic Beanstalk sets the specified configuration option
     * to the requested value. The new value overrides the value obtained from the
     * solution stack or the source configuration template.</p>
     */
    inline bool OptionSettingsHasBeenSet() const { return m_optionSettingsHasBeenSet; }

    /**
     * <p>If specified, AWS Elastic Beanstalk sets the specified configuration option
     * to the requested value. The new value overrides the value obtained from the
     * solution stack or the source configuration template.</p>
     */
    inline void SetOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = value; }

    /**
     * <p>If specified, AWS Elastic Beanstalk sets the specified configuration option
     * to the requested value. The new value overrides the value obtained from the
     * solution stack or the source configuration template.</p>
     */
    inline void SetOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = std::move(value); }

    /**
     * <p>If specified, AWS Elastic Beanstalk sets the specified configuration option
     * to the requested value. The new value overrides the value obtained from the
     * solution stack or the source configuration template.</p>
     */
    inline CreateConfigurationTemplateRequest& WithOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { SetOptionSettings(value); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk sets the specified configuration option
     * to the requested value. The new value overrides the value obtained from the
     * solution stack or the source configuration template.</p>
     */
    inline CreateConfigurationTemplateRequest& WithOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { SetOptionSettings(std::move(value)); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk sets the specified configuration option
     * to the requested value. The new value overrides the value obtained from the
     * solution stack or the source configuration template.</p>
     */
    inline CreateConfigurationTemplateRequest& AddOptionSettings(const ConfigurationOptionSetting& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(value); return *this; }

    /**
     * <p>If specified, AWS Elastic Beanstalk sets the specified configuration option
     * to the requested value. The new value overrides the value obtained from the
     * solution stack or the source configuration template.</p>
     */
    inline CreateConfigurationTemplateRequest& AddOptionSettings(ConfigurationOptionSetting&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the tags applied to the configuration template.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies the tags applied to the configuration template.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies the tags applied to the configuration template.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies the tags applied to the configuration template.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies the tags applied to the configuration template.</p>
     */
    inline CreateConfigurationTemplateRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies the tags applied to the configuration template.</p>
     */
    inline CreateConfigurationTemplateRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies the tags applied to the configuration template.</p>
     */
    inline CreateConfigurationTemplateRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies the tags applied to the configuration template.</p>
     */
    inline CreateConfigurationTemplateRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet;

    Aws::String m_solutionStackName;
    bool m_solutionStackNameHasBeenSet;

    Aws::String m_platformArn;
    bool m_platformArnHasBeenSet;

    SourceConfiguration m_sourceConfiguration;
    bool m_sourceConfigurationHasBeenSet;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<ConfigurationOptionSetting> m_optionSettings;
    bool m_optionSettingsHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
