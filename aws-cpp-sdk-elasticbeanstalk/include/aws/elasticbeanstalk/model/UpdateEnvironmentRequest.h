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
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/EnvironmentTier.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ConfigurationOptionSetting.h>
#include <aws/elasticbeanstalk/model/OptionSpecification.h>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Request to update an environment.</p>
   */
  class AWS_ELASTICBEANSTALK_API UpdateEnvironmentRequest : public ElasticBeanstalkRequest
  {
  public:
    UpdateEnvironmentRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the application with which the environment is associated.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application with which the environment is associated.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application with which the environment is associated.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application with which the environment is associated.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application with which the environment is associated.</p>
     */
    inline UpdateEnvironmentRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application with which the environment is associated.</p>
     */
    inline UpdateEnvironmentRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application with which the environment is associated.</p>
     */
    inline UpdateEnvironmentRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>The ID of the environment to update.</p> <p>If no environment with this ID
     * exists, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error.</p> <p>Condition: You must specify either this or an EnvironmentName, or
     * both. If you do not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The ID of the environment to update.</p> <p>If no environment with this ID
     * exists, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error.</p> <p>Condition: You must specify either this or an EnvironmentName, or
     * both. If you do not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The ID of the environment to update.</p> <p>If no environment with this ID
     * exists, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error.</p> <p>Condition: You must specify either this or an EnvironmentName, or
     * both. If you do not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The ID of the environment to update.</p> <p>If no environment with this ID
     * exists, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error.</p> <p>Condition: You must specify either this or an EnvironmentName, or
     * both. If you do not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The ID of the environment to update.</p> <p>If no environment with this ID
     * exists, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error.</p> <p>Condition: You must specify either this or an EnvironmentName, or
     * both. If you do not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline UpdateEnvironmentRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The ID of the environment to update.</p> <p>If no environment with this ID
     * exists, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error.</p> <p>Condition: You must specify either this or an EnvironmentName, or
     * both. If you do not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline UpdateEnvironmentRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The ID of the environment to update.</p> <p>If no environment with this ID
     * exists, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error.</p> <p>Condition: You must specify either this or an EnvironmentName, or
     * both. If you do not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline UpdateEnvironmentRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The name of the environment to update. If no environment with this name
     * exists, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error. </p> <p>Condition: You must specify either this or an EnvironmentId, or
     * both. If you do not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of the environment to update. If no environment with this name
     * exists, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error. </p> <p>Condition: You must specify either this or an EnvironmentId, or
     * both. If you do not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the environment to update. If no environment with this name
     * exists, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error. </p> <p>Condition: You must specify either this or an EnvironmentId, or
     * both. If you do not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the environment to update. If no environment with this name
     * exists, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error. </p> <p>Condition: You must specify either this or an EnvironmentId, or
     * both. If you do not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The name of the environment to update. If no environment with this name
     * exists, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error. </p> <p>Condition: You must specify either this or an EnvironmentId, or
     * both. If you do not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline UpdateEnvironmentRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the environment to update. If no environment with this name
     * exists, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error. </p> <p>Condition: You must specify either this or an EnvironmentId, or
     * both. If you do not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline UpdateEnvironmentRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the environment to update. If no environment with this name
     * exists, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error. </p> <p>Condition: You must specify either this or an EnvironmentId, or
     * both. If you do not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline UpdateEnvironmentRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the group to which the target environment belongs. Specify a
     * group name only if the environment's name is specified in an environment
     * manifest and not with the environment name or environment ID parameters. See <a
     * href="http://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the group to which the target environment belongs. Specify a
     * group name only if the environment's name is specified in an environment
     * manifest and not with the environment name or environment ID parameters. See <a
     * href="http://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the group to which the target environment belongs. Specify a
     * group name only if the environment's name is specified in an environment
     * manifest and not with the environment name or environment ID parameters. See <a
     * href="http://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the group to which the target environment belongs. Specify a
     * group name only if the environment's name is specified in an environment
     * manifest and not with the environment name or environment ID parameters. See <a
     * href="http://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the group to which the target environment belongs. Specify a
     * group name only if the environment's name is specified in an environment
     * manifest and not with the environment name or environment ID parameters. See <a
     * href="http://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline UpdateEnvironmentRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the group to which the target environment belongs. Specify a
     * group name only if the environment's name is specified in an environment
     * manifest and not with the environment name or environment ID parameters. See <a
     * href="http://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline UpdateEnvironmentRequest& WithGroupName(Aws::String&& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the group to which the target environment belongs. Specify a
     * group name only if the environment's name is specified in an environment
     * manifest and not with the environment name or environment ID parameters. See <a
     * href="http://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline UpdateEnvironmentRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}

    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk updates the description
     * of this environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk updates the description
     * of this environment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk updates the description
     * of this environment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk updates the description
     * of this environment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk updates the description
     * of this environment.</p>
     */
    inline UpdateEnvironmentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk updates the description
     * of this environment.</p>
     */
    inline UpdateEnvironmentRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk updates the description
     * of this environment.</p>
     */
    inline UpdateEnvironmentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>This specifies the tier to use to update the environment.</p> <p>Condition:
     * At this time, if you change the tier version, name, or type, AWS Elastic
     * Beanstalk returns <code>InvalidParameterValue</code> error. </p>
     */
    inline const EnvironmentTier& GetTier() const{ return m_tier; }

    /**
     * <p>This specifies the tier to use to update the environment.</p> <p>Condition:
     * At this time, if you change the tier version, name, or type, AWS Elastic
     * Beanstalk returns <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetTier(const EnvironmentTier& value) { m_tierHasBeenSet = true; m_tier = value; }

    /**
     * <p>This specifies the tier to use to update the environment.</p> <p>Condition:
     * At this time, if you change the tier version, name, or type, AWS Elastic
     * Beanstalk returns <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetTier(EnvironmentTier&& value) { m_tierHasBeenSet = true; m_tier = value; }

    /**
     * <p>This specifies the tier to use to update the environment.</p> <p>Condition:
     * At this time, if you change the tier version, name, or type, AWS Elastic
     * Beanstalk returns <code>InvalidParameterValue</code> error. </p>
     */
    inline UpdateEnvironmentRequest& WithTier(const EnvironmentTier& value) { SetTier(value); return *this;}

    /**
     * <p>This specifies the tier to use to update the environment.</p> <p>Condition:
     * At this time, if you change the tier version, name, or type, AWS Elastic
     * Beanstalk returns <code>InvalidParameterValue</code> error. </p>
     */
    inline UpdateEnvironmentRequest& WithTier(EnvironmentTier&& value) { SetTier(value); return *this;}

    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk deploys the named
     * application version to the environment. If no such application version is found,
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }

    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk deploys the named
     * application version to the environment. If no such application version is found,
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }

    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk deploys the named
     * application version to the environment. If no such application version is found,
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }

    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk deploys the named
     * application version to the environment. If no such application version is found,
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetVersionLabel(const char* value) { m_versionLabelHasBeenSet = true; m_versionLabel.assign(value); }

    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk deploys the named
     * application version to the environment. If no such application version is found,
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline UpdateEnvironmentRequest& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}

    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk deploys the named
     * application version to the environment. If no such application version is found,
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline UpdateEnvironmentRequest& WithVersionLabel(Aws::String&& value) { SetVersionLabel(value); return *this;}

    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk deploys the named
     * application version to the environment. If no such application version is found,
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline UpdateEnvironmentRequest& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}

    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk deploys this
     * configuration template to the environment. If no such configuration template is
     * found, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error. </p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk deploys this
     * configuration template to the environment. If no such configuration template is
     * found, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error. </p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk deploys this
     * configuration template to the environment. If no such configuration template is
     * found, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error. </p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk deploys this
     * configuration template to the environment. If no such configuration template is
     * found, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error. </p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk deploys this
     * configuration template to the environment. If no such configuration template is
     * found, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error. </p>
     */
    inline UpdateEnvironmentRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk deploys this
     * configuration template to the environment. If no such configuration template is
     * found, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error. </p>
     */
    inline UpdateEnvironmentRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(value); return *this;}

    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk deploys this
     * configuration template to the environment. If no such configuration template is
     * found, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error. </p>
     */
    inline UpdateEnvironmentRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}

    /**
     * <p>This specifies the platform version that the environment will run after the
     * environment is updated.</p>
     */
    inline const Aws::String& GetSolutionStackName() const{ return m_solutionStackName; }

    /**
     * <p>This specifies the platform version that the environment will run after the
     * environment is updated.</p>
     */
    inline void SetSolutionStackName(const Aws::String& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = value; }

    /**
     * <p>This specifies the platform version that the environment will run after the
     * environment is updated.</p>
     */
    inline void SetSolutionStackName(Aws::String&& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = value; }

    /**
     * <p>This specifies the platform version that the environment will run after the
     * environment is updated.</p>
     */
    inline void SetSolutionStackName(const char* value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName.assign(value); }

    /**
     * <p>This specifies the platform version that the environment will run after the
     * environment is updated.</p>
     */
    inline UpdateEnvironmentRequest& WithSolutionStackName(const Aws::String& value) { SetSolutionStackName(value); return *this;}

    /**
     * <p>This specifies the platform version that the environment will run after the
     * environment is updated.</p>
     */
    inline UpdateEnvironmentRequest& WithSolutionStackName(Aws::String&& value) { SetSolutionStackName(value); return *this;}

    /**
     * <p>This specifies the platform version that the environment will run after the
     * environment is updated.</p>
     */
    inline UpdateEnvironmentRequest& WithSolutionStackName(const char* value) { SetSolutionStackName(value); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk updates the configuration set associated
     * with the running environment and sets the specified configuration options to the
     * requested value.</p>
     */
    inline const Aws::Vector<ConfigurationOptionSetting>& GetOptionSettings() const{ return m_optionSettings; }

    /**
     * <p>If specified, AWS Elastic Beanstalk updates the configuration set associated
     * with the running environment and sets the specified configuration options to the
     * requested value.</p>
     */
    inline void SetOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = value; }

    /**
     * <p>If specified, AWS Elastic Beanstalk updates the configuration set associated
     * with the running environment and sets the specified configuration options to the
     * requested value.</p>
     */
    inline void SetOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = value; }

    /**
     * <p>If specified, AWS Elastic Beanstalk updates the configuration set associated
     * with the running environment and sets the specified configuration options to the
     * requested value.</p>
     */
    inline UpdateEnvironmentRequest& WithOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { SetOptionSettings(value); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk updates the configuration set associated
     * with the running environment and sets the specified configuration options to the
     * requested value.</p>
     */
    inline UpdateEnvironmentRequest& WithOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { SetOptionSettings(value); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk updates the configuration set associated
     * with the running environment and sets the specified configuration options to the
     * requested value.</p>
     */
    inline UpdateEnvironmentRequest& AddOptionSettings(const ConfigurationOptionSetting& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(value); return *this; }

    /**
     * <p>If specified, AWS Elastic Beanstalk updates the configuration set associated
     * with the running environment and sets the specified configuration options to the
     * requested value.</p>
     */
    inline UpdateEnvironmentRequest& AddOptionSettings(ConfigurationOptionSetting&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(value); return *this; }

    /**
     * <p>A list of custom user-defined configuration options to remove from the
     * configuration set for this environment.</p>
     */
    inline const Aws::Vector<OptionSpecification>& GetOptionsToRemove() const{ return m_optionsToRemove; }

    /**
     * <p>A list of custom user-defined configuration options to remove from the
     * configuration set for this environment.</p>
     */
    inline void SetOptionsToRemove(const Aws::Vector<OptionSpecification>& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove = value; }

    /**
     * <p>A list of custom user-defined configuration options to remove from the
     * configuration set for this environment.</p>
     */
    inline void SetOptionsToRemove(Aws::Vector<OptionSpecification>&& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove = value; }

    /**
     * <p>A list of custom user-defined configuration options to remove from the
     * configuration set for this environment.</p>
     */
    inline UpdateEnvironmentRequest& WithOptionsToRemove(const Aws::Vector<OptionSpecification>& value) { SetOptionsToRemove(value); return *this;}

    /**
     * <p>A list of custom user-defined configuration options to remove from the
     * configuration set for this environment.</p>
     */
    inline UpdateEnvironmentRequest& WithOptionsToRemove(Aws::Vector<OptionSpecification>&& value) { SetOptionsToRemove(value); return *this;}

    /**
     * <p>A list of custom user-defined configuration options to remove from the
     * configuration set for this environment.</p>
     */
    inline UpdateEnvironmentRequest& AddOptionsToRemove(const OptionSpecification& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove.push_back(value); return *this; }

    /**
     * <p>A list of custom user-defined configuration options to remove from the
     * configuration set for this environment.</p>
     */
    inline UpdateEnvironmentRequest& AddOptionsToRemove(OptionSpecification&& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove.push_back(value); return *this; }

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet;
    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet;
    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    EnvironmentTier m_tier;
    bool m_tierHasBeenSet;
    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet;
    Aws::String m_templateName;
    bool m_templateNameHasBeenSet;
    Aws::String m_solutionStackName;
    bool m_solutionStackNameHasBeenSet;
    Aws::Vector<ConfigurationOptionSetting> m_optionSettings;
    bool m_optionSettingsHasBeenSet;
    Aws::Vector<OptionSpecification> m_optionsToRemove;
    bool m_optionsToRemoveHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
