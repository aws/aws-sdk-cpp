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
#include <aws/elasticbeanstalk/model/EnvironmentTier.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/Tag.h>
#include <aws/elasticbeanstalk/model/ConfigurationOptionSetting.h>
#include <aws/elasticbeanstalk/model/OptionSpecification.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateEnvironmentMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API CreateEnvironmentRequest : public ElasticBeanstalkRequest
  {
  public:
    CreateEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEnvironment"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the application that contains the version to be deployed.</p> <p>
     * If no application is found with this name, <code>CreateEnvironment</code>
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application that contains the version to be deployed.</p> <p>
     * If no application is found with this name, <code>CreateEnvironment</code>
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the application that contains the version to be deployed.</p> <p>
     * If no application is found with this name, <code>CreateEnvironment</code>
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application that contains the version to be deployed.</p> <p>
     * If no application is found with this name, <code>CreateEnvironment</code>
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the application that contains the version to be deployed.</p> <p>
     * If no application is found with this name, <code>CreateEnvironment</code>
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application that contains the version to be deployed.</p> <p>
     * If no application is found with this name, <code>CreateEnvironment</code>
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline CreateEnvironmentRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application that contains the version to be deployed.</p> <p>
     * If no application is found with this name, <code>CreateEnvironment</code>
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline CreateEnvironmentRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application that contains the version to be deployed.</p> <p>
     * If no application is found with this name, <code>CreateEnvironment</code>
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline CreateEnvironmentRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>A unique name for the deployment environment. Used in the application
     * URL.</p> <p>Constraint: Must be from 4 to 40 characters in length. The name can
     * contain only letters, numbers, and hyphens. It cannot start or end with a
     * hyphen. This name must be unique within a region in your account. If the
     * specified name already exists in the region, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Default: If the CNAME
     * parameter is not specified, the environment name becomes part of the CNAME, and
     * therefore part of the visible URL for your application.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>A unique name for the deployment environment. Used in the application
     * URL.</p> <p>Constraint: Must be from 4 to 40 characters in length. The name can
     * contain only letters, numbers, and hyphens. It cannot start or end with a
     * hyphen. This name must be unique within a region in your account. If the
     * specified name already exists in the region, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Default: If the CNAME
     * parameter is not specified, the environment name becomes part of the CNAME, and
     * therefore part of the visible URL for your application.</p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>A unique name for the deployment environment. Used in the application
     * URL.</p> <p>Constraint: Must be from 4 to 40 characters in length. The name can
     * contain only letters, numbers, and hyphens. It cannot start or end with a
     * hyphen. This name must be unique within a region in your account. If the
     * specified name already exists in the region, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Default: If the CNAME
     * parameter is not specified, the environment name becomes part of the CNAME, and
     * therefore part of the visible URL for your application.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>A unique name for the deployment environment. Used in the application
     * URL.</p> <p>Constraint: Must be from 4 to 40 characters in length. The name can
     * contain only letters, numbers, and hyphens. It cannot start or end with a
     * hyphen. This name must be unique within a region in your account. If the
     * specified name already exists in the region, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Default: If the CNAME
     * parameter is not specified, the environment name becomes part of the CNAME, and
     * therefore part of the visible URL for your application.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>A unique name for the deployment environment. Used in the application
     * URL.</p> <p>Constraint: Must be from 4 to 40 characters in length. The name can
     * contain only letters, numbers, and hyphens. It cannot start or end with a
     * hyphen. This name must be unique within a region in your account. If the
     * specified name already exists in the region, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Default: If the CNAME
     * parameter is not specified, the environment name becomes part of the CNAME, and
     * therefore part of the visible URL for your application.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>A unique name for the deployment environment. Used in the application
     * URL.</p> <p>Constraint: Must be from 4 to 40 characters in length. The name can
     * contain only letters, numbers, and hyphens. It cannot start or end with a
     * hyphen. This name must be unique within a region in your account. If the
     * specified name already exists in the region, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Default: If the CNAME
     * parameter is not specified, the environment name becomes part of the CNAME, and
     * therefore part of the visible URL for your application.</p>
     */
    inline CreateEnvironmentRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>A unique name for the deployment environment. Used in the application
     * URL.</p> <p>Constraint: Must be from 4 to 40 characters in length. The name can
     * contain only letters, numbers, and hyphens. It cannot start or end with a
     * hyphen. This name must be unique within a region in your account. If the
     * specified name already exists in the region, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Default: If the CNAME
     * parameter is not specified, the environment name becomes part of the CNAME, and
     * therefore part of the visible URL for your application.</p>
     */
    inline CreateEnvironmentRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>A unique name for the deployment environment. Used in the application
     * URL.</p> <p>Constraint: Must be from 4 to 40 characters in length. The name can
     * contain only letters, numbers, and hyphens. It cannot start or end with a
     * hyphen. This name must be unique within a region in your account. If the
     * specified name already exists in the region, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Default: If the CNAME
     * parameter is not specified, the environment name becomes part of the CNAME, and
     * therefore part of the visible URL for your application.</p>
     */
    inline CreateEnvironmentRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p>The name of the group to which the target environment belongs. Specify a
     * group name only if the environment's name is specified in an environment
     * manifest and not with the environment name parameter. See <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the group to which the target environment belongs. Specify a
     * group name only if the environment's name is specified in an environment
     * manifest and not with the environment name parameter. See <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the group to which the target environment belongs. Specify a
     * group name only if the environment's name is specified in an environment
     * manifest and not with the environment name parameter. See <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the group to which the target environment belongs. Specify a
     * group name only if the environment's name is specified in an environment
     * manifest and not with the environment name parameter. See <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the group to which the target environment belongs. Specify a
     * group name only if the environment's name is specified in an environment
     * manifest and not with the environment name parameter. See <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the group to which the target environment belongs. Specify a
     * group name only if the environment's name is specified in an environment
     * manifest and not with the environment name parameter. See <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline CreateEnvironmentRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the group to which the target environment belongs. Specify a
     * group name only if the environment's name is specified in an environment
     * manifest and not with the environment name parameter. See <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline CreateEnvironmentRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the group to which the target environment belongs. Specify a
     * group name only if the environment's name is specified in an environment
     * manifest and not with the environment name parameter. See <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline CreateEnvironmentRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>Describes this environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Describes this environment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Describes this environment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Describes this environment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Describes this environment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Describes this environment.</p>
     */
    inline CreateEnvironmentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Describes this environment.</p>
     */
    inline CreateEnvironmentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Describes this environment.</p>
     */
    inline CreateEnvironmentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>If specified, the environment attempts to use this value as the prefix for
     * the CNAME. If not specified, the CNAME is generated automatically by appending a
     * random alphanumeric string to the environment name.</p>
     */
    inline const Aws::String& GetCNAMEPrefix() const{ return m_cNAMEPrefix; }

    /**
     * <p>If specified, the environment attempts to use this value as the prefix for
     * the CNAME. If not specified, the CNAME is generated automatically by appending a
     * random alphanumeric string to the environment name.</p>
     */
    inline bool CNAMEPrefixHasBeenSet() const { return m_cNAMEPrefixHasBeenSet; }

    /**
     * <p>If specified, the environment attempts to use this value as the prefix for
     * the CNAME. If not specified, the CNAME is generated automatically by appending a
     * random alphanumeric string to the environment name.</p>
     */
    inline void SetCNAMEPrefix(const Aws::String& value) { m_cNAMEPrefixHasBeenSet = true; m_cNAMEPrefix = value; }

    /**
     * <p>If specified, the environment attempts to use this value as the prefix for
     * the CNAME. If not specified, the CNAME is generated automatically by appending a
     * random alphanumeric string to the environment name.</p>
     */
    inline void SetCNAMEPrefix(Aws::String&& value) { m_cNAMEPrefixHasBeenSet = true; m_cNAMEPrefix = std::move(value); }

    /**
     * <p>If specified, the environment attempts to use this value as the prefix for
     * the CNAME. If not specified, the CNAME is generated automatically by appending a
     * random alphanumeric string to the environment name.</p>
     */
    inline void SetCNAMEPrefix(const char* value) { m_cNAMEPrefixHasBeenSet = true; m_cNAMEPrefix.assign(value); }

    /**
     * <p>If specified, the environment attempts to use this value as the prefix for
     * the CNAME. If not specified, the CNAME is generated automatically by appending a
     * random alphanumeric string to the environment name.</p>
     */
    inline CreateEnvironmentRequest& WithCNAMEPrefix(const Aws::String& value) { SetCNAMEPrefix(value); return *this;}

    /**
     * <p>If specified, the environment attempts to use this value as the prefix for
     * the CNAME. If not specified, the CNAME is generated automatically by appending a
     * random alphanumeric string to the environment name.</p>
     */
    inline CreateEnvironmentRequest& WithCNAMEPrefix(Aws::String&& value) { SetCNAMEPrefix(std::move(value)); return *this;}

    /**
     * <p>If specified, the environment attempts to use this value as the prefix for
     * the CNAME. If not specified, the CNAME is generated automatically by appending a
     * random alphanumeric string to the environment name.</p>
     */
    inline CreateEnvironmentRequest& WithCNAMEPrefix(const char* value) { SetCNAMEPrefix(value); return *this;}


    /**
     * <p>This specifies the tier to use for creating this environment.</p>
     */
    inline const EnvironmentTier& GetTier() const{ return m_tier; }

    /**
     * <p>This specifies the tier to use for creating this environment.</p>
     */
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }

    /**
     * <p>This specifies the tier to use for creating this environment.</p>
     */
    inline void SetTier(const EnvironmentTier& value) { m_tierHasBeenSet = true; m_tier = value; }

    /**
     * <p>This specifies the tier to use for creating this environment.</p>
     */
    inline void SetTier(EnvironmentTier&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }

    /**
     * <p>This specifies the tier to use for creating this environment.</p>
     */
    inline CreateEnvironmentRequest& WithTier(const EnvironmentTier& value) { SetTier(value); return *this;}

    /**
     * <p>This specifies the tier to use for creating this environment.</p>
     */
    inline CreateEnvironmentRequest& WithTier(EnvironmentTier&& value) { SetTier(std::move(value)); return *this;}


    /**
     * <p>Specifies the tags applied to resources in the environment.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies the tags applied to resources in the environment.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies the tags applied to resources in the environment.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies the tags applied to resources in the environment.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies the tags applied to resources in the environment.</p>
     */
    inline CreateEnvironmentRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies the tags applied to resources in the environment.</p>
     */
    inline CreateEnvironmentRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies the tags applied to resources in the environment.</p>
     */
    inline CreateEnvironmentRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies the tags applied to resources in the environment.</p>
     */
    inline CreateEnvironmentRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the application version to deploy.</p> <p> If the specified
     * application has no associated application versions, AWS Elastic Beanstalk
     * <code>UpdateEnvironment</code> returns an <code>InvalidParameterValue</code>
     * error. </p> <p>Default: If not specified, AWS Elastic Beanstalk attempts to
     * launch the sample application in the container.</p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }

    /**
     * <p>The name of the application version to deploy.</p> <p> If the specified
     * application has no associated application versions, AWS Elastic Beanstalk
     * <code>UpdateEnvironment</code> returns an <code>InvalidParameterValue</code>
     * error. </p> <p>Default: If not specified, AWS Elastic Beanstalk attempts to
     * launch the sample application in the container.</p>
     */
    inline bool VersionLabelHasBeenSet() const { return m_versionLabelHasBeenSet; }

    /**
     * <p>The name of the application version to deploy.</p> <p> If the specified
     * application has no associated application versions, AWS Elastic Beanstalk
     * <code>UpdateEnvironment</code> returns an <code>InvalidParameterValue</code>
     * error. </p> <p>Default: If not specified, AWS Elastic Beanstalk attempts to
     * launch the sample application in the container.</p>
     */
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }

    /**
     * <p>The name of the application version to deploy.</p> <p> If the specified
     * application has no associated application versions, AWS Elastic Beanstalk
     * <code>UpdateEnvironment</code> returns an <code>InvalidParameterValue</code>
     * error. </p> <p>Default: If not specified, AWS Elastic Beanstalk attempts to
     * launch the sample application in the container.</p>
     */
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::move(value); }

    /**
     * <p>The name of the application version to deploy.</p> <p> If the specified
     * application has no associated application versions, AWS Elastic Beanstalk
     * <code>UpdateEnvironment</code> returns an <code>InvalidParameterValue</code>
     * error. </p> <p>Default: If not specified, AWS Elastic Beanstalk attempts to
     * launch the sample application in the container.</p>
     */
    inline void SetVersionLabel(const char* value) { m_versionLabelHasBeenSet = true; m_versionLabel.assign(value); }

    /**
     * <p>The name of the application version to deploy.</p> <p> If the specified
     * application has no associated application versions, AWS Elastic Beanstalk
     * <code>UpdateEnvironment</code> returns an <code>InvalidParameterValue</code>
     * error. </p> <p>Default: If not specified, AWS Elastic Beanstalk attempts to
     * launch the sample application in the container.</p>
     */
    inline CreateEnvironmentRequest& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}

    /**
     * <p>The name of the application version to deploy.</p> <p> If the specified
     * application has no associated application versions, AWS Elastic Beanstalk
     * <code>UpdateEnvironment</code> returns an <code>InvalidParameterValue</code>
     * error. </p> <p>Default: If not specified, AWS Elastic Beanstalk attempts to
     * launch the sample application in the container.</p>
     */
    inline CreateEnvironmentRequest& WithVersionLabel(Aws::String&& value) { SetVersionLabel(std::move(value)); return *this;}

    /**
     * <p>The name of the application version to deploy.</p> <p> If the specified
     * application has no associated application versions, AWS Elastic Beanstalk
     * <code>UpdateEnvironment</code> returns an <code>InvalidParameterValue</code>
     * error. </p> <p>Default: If not specified, AWS Elastic Beanstalk attempts to
     * launch the sample application in the container.</p>
     */
    inline CreateEnvironmentRequest& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}


    /**
     * <p> The name of the configuration template to use in deployment. If no
     * configuration template is found with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p> The name of the configuration template to use in deployment. If no
     * configuration template is found with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p> The name of the configuration template to use in deployment. If no
     * configuration template is found with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p> The name of the configuration template to use in deployment. If no
     * configuration template is found with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p> The name of the configuration template to use in deployment. If no
     * configuration template is found with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p> The name of the configuration template to use in deployment. If no
     * configuration template is found with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline CreateEnvironmentRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p> The name of the configuration template to use in deployment. If no
     * configuration template is found with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline CreateEnvironmentRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p> The name of the configuration template to use in deployment. If no
     * configuration template is found with this name, AWS Elastic Beanstalk returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline CreateEnvironmentRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>This is an alternative to specifying a template name. If specified, AWS
     * Elastic Beanstalk sets the configuration values to the default values associated
     * with the specified solution stack.</p> <p>For a list of current solution stacks,
     * see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/concepts.platforms.html">Elastic
     * Beanstalk Supported Platforms</a>.</p>
     */
    inline const Aws::String& GetSolutionStackName() const{ return m_solutionStackName; }

    /**
     * <p>This is an alternative to specifying a template name. If specified, AWS
     * Elastic Beanstalk sets the configuration values to the default values associated
     * with the specified solution stack.</p> <p>For a list of current solution stacks,
     * see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/concepts.platforms.html">Elastic
     * Beanstalk Supported Platforms</a>.</p>
     */
    inline bool SolutionStackNameHasBeenSet() const { return m_solutionStackNameHasBeenSet; }

    /**
     * <p>This is an alternative to specifying a template name. If specified, AWS
     * Elastic Beanstalk sets the configuration values to the default values associated
     * with the specified solution stack.</p> <p>For a list of current solution stacks,
     * see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/concepts.platforms.html">Elastic
     * Beanstalk Supported Platforms</a>.</p>
     */
    inline void SetSolutionStackName(const Aws::String& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = value; }

    /**
     * <p>This is an alternative to specifying a template name. If specified, AWS
     * Elastic Beanstalk sets the configuration values to the default values associated
     * with the specified solution stack.</p> <p>For a list of current solution stacks,
     * see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/concepts.platforms.html">Elastic
     * Beanstalk Supported Platforms</a>.</p>
     */
    inline void SetSolutionStackName(Aws::String&& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = std::move(value); }

    /**
     * <p>This is an alternative to specifying a template name. If specified, AWS
     * Elastic Beanstalk sets the configuration values to the default values associated
     * with the specified solution stack.</p> <p>For a list of current solution stacks,
     * see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/concepts.platforms.html">Elastic
     * Beanstalk Supported Platforms</a>.</p>
     */
    inline void SetSolutionStackName(const char* value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName.assign(value); }

    /**
     * <p>This is an alternative to specifying a template name. If specified, AWS
     * Elastic Beanstalk sets the configuration values to the default values associated
     * with the specified solution stack.</p> <p>For a list of current solution stacks,
     * see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/concepts.platforms.html">Elastic
     * Beanstalk Supported Platforms</a>.</p>
     */
    inline CreateEnvironmentRequest& WithSolutionStackName(const Aws::String& value) { SetSolutionStackName(value); return *this;}

    /**
     * <p>This is an alternative to specifying a template name. If specified, AWS
     * Elastic Beanstalk sets the configuration values to the default values associated
     * with the specified solution stack.</p> <p>For a list of current solution stacks,
     * see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/concepts.platforms.html">Elastic
     * Beanstalk Supported Platforms</a>.</p>
     */
    inline CreateEnvironmentRequest& WithSolutionStackName(Aws::String&& value) { SetSolutionStackName(std::move(value)); return *this;}

    /**
     * <p>This is an alternative to specifying a template name. If specified, AWS
     * Elastic Beanstalk sets the configuration values to the default values associated
     * with the specified solution stack.</p> <p>For a list of current solution stacks,
     * see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/concepts.platforms.html">Elastic
     * Beanstalk Supported Platforms</a>.</p>
     */
    inline CreateEnvironmentRequest& WithSolutionStackName(const char* value) { SetSolutionStackName(value); return *this;}


    /**
     * <p>The ARN of the platform.</p>
     */
    inline const Aws::String& GetPlatformArn() const{ return m_platformArn; }

    /**
     * <p>The ARN of the platform.</p>
     */
    inline bool PlatformArnHasBeenSet() const { return m_platformArnHasBeenSet; }

    /**
     * <p>The ARN of the platform.</p>
     */
    inline void SetPlatformArn(const Aws::String& value) { m_platformArnHasBeenSet = true; m_platformArn = value; }

    /**
     * <p>The ARN of the platform.</p>
     */
    inline void SetPlatformArn(Aws::String&& value) { m_platformArnHasBeenSet = true; m_platformArn = std::move(value); }

    /**
     * <p>The ARN of the platform.</p>
     */
    inline void SetPlatformArn(const char* value) { m_platformArnHasBeenSet = true; m_platformArn.assign(value); }

    /**
     * <p>The ARN of the platform.</p>
     */
    inline CreateEnvironmentRequest& WithPlatformArn(const Aws::String& value) { SetPlatformArn(value); return *this;}

    /**
     * <p>The ARN of the platform.</p>
     */
    inline CreateEnvironmentRequest& WithPlatformArn(Aws::String&& value) { SetPlatformArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the platform.</p>
     */
    inline CreateEnvironmentRequest& WithPlatformArn(const char* value) { SetPlatformArn(value); return *this;}


    /**
     * <p>If specified, AWS Elastic Beanstalk sets the specified configuration options
     * to the requested value in the configuration set for the new environment. These
     * override the values obtained from the solution stack or the configuration
     * template.</p>
     */
    inline const Aws::Vector<ConfigurationOptionSetting>& GetOptionSettings() const{ return m_optionSettings; }

    /**
     * <p>If specified, AWS Elastic Beanstalk sets the specified configuration options
     * to the requested value in the configuration set for the new environment. These
     * override the values obtained from the solution stack or the configuration
     * template.</p>
     */
    inline bool OptionSettingsHasBeenSet() const { return m_optionSettingsHasBeenSet; }

    /**
     * <p>If specified, AWS Elastic Beanstalk sets the specified configuration options
     * to the requested value in the configuration set for the new environment. These
     * override the values obtained from the solution stack or the configuration
     * template.</p>
     */
    inline void SetOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = value; }

    /**
     * <p>If specified, AWS Elastic Beanstalk sets the specified configuration options
     * to the requested value in the configuration set for the new environment. These
     * override the values obtained from the solution stack or the configuration
     * template.</p>
     */
    inline void SetOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = std::move(value); }

    /**
     * <p>If specified, AWS Elastic Beanstalk sets the specified configuration options
     * to the requested value in the configuration set for the new environment. These
     * override the values obtained from the solution stack or the configuration
     * template.</p>
     */
    inline CreateEnvironmentRequest& WithOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { SetOptionSettings(value); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk sets the specified configuration options
     * to the requested value in the configuration set for the new environment. These
     * override the values obtained from the solution stack or the configuration
     * template.</p>
     */
    inline CreateEnvironmentRequest& WithOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { SetOptionSettings(std::move(value)); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk sets the specified configuration options
     * to the requested value in the configuration set for the new environment. These
     * override the values obtained from the solution stack or the configuration
     * template.</p>
     */
    inline CreateEnvironmentRequest& AddOptionSettings(const ConfigurationOptionSetting& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(value); return *this; }

    /**
     * <p>If specified, AWS Elastic Beanstalk sets the specified configuration options
     * to the requested value in the configuration set for the new environment. These
     * override the values obtained from the solution stack or the configuration
     * template.</p>
     */
    inline CreateEnvironmentRequest& AddOptionSettings(ConfigurationOptionSetting&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of custom user-defined configuration options to remove from the
     * configuration set for this new environment.</p>
     */
    inline const Aws::Vector<OptionSpecification>& GetOptionsToRemove() const{ return m_optionsToRemove; }

    /**
     * <p>A list of custom user-defined configuration options to remove from the
     * configuration set for this new environment.</p>
     */
    inline bool OptionsToRemoveHasBeenSet() const { return m_optionsToRemoveHasBeenSet; }

    /**
     * <p>A list of custom user-defined configuration options to remove from the
     * configuration set for this new environment.</p>
     */
    inline void SetOptionsToRemove(const Aws::Vector<OptionSpecification>& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove = value; }

    /**
     * <p>A list of custom user-defined configuration options to remove from the
     * configuration set for this new environment.</p>
     */
    inline void SetOptionsToRemove(Aws::Vector<OptionSpecification>&& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove = std::move(value); }

    /**
     * <p>A list of custom user-defined configuration options to remove from the
     * configuration set for this new environment.</p>
     */
    inline CreateEnvironmentRequest& WithOptionsToRemove(const Aws::Vector<OptionSpecification>& value) { SetOptionsToRemove(value); return *this;}

    /**
     * <p>A list of custom user-defined configuration options to remove from the
     * configuration set for this new environment.</p>
     */
    inline CreateEnvironmentRequest& WithOptionsToRemove(Aws::Vector<OptionSpecification>&& value) { SetOptionsToRemove(std::move(value)); return *this;}

    /**
     * <p>A list of custom user-defined configuration options to remove from the
     * configuration set for this new environment.</p>
     */
    inline CreateEnvironmentRequest& AddOptionsToRemove(const OptionSpecification& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove.push_back(value); return *this; }

    /**
     * <p>A list of custom user-defined configuration options to remove from the
     * configuration set for this new environment.</p>
     */
    inline CreateEnvironmentRequest& AddOptionsToRemove(OptionSpecification&& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_cNAMEPrefix;
    bool m_cNAMEPrefixHasBeenSet;

    EnvironmentTier m_tier;
    bool m_tierHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet;

    Aws::String m_solutionStackName;
    bool m_solutionStackNameHasBeenSet;

    Aws::String m_platformArn;
    bool m_platformArnHasBeenSet;

    Aws::Vector<ConfigurationOptionSetting> m_optionSettings;
    bool m_optionSettingsHasBeenSet;

    Aws::Vector<OptionSpecification> m_optionsToRemove;
    bool m_optionsToRemoveHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
