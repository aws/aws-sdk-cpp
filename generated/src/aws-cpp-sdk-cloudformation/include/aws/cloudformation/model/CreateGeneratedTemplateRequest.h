/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/TemplateConfiguration.h>
#include <aws/cloudformation/model/ResourceDefinition.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class CreateGeneratedTemplateRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API CreateGeneratedTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGeneratedTemplate"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>An optional list of resources to be included in the generated template.</p>
     * <p> If no resources are specified,the template will be created without any
     * resources. Resources can be added to the template using the
     * <code>UpdateGeneratedTemplate</code> API action.</p>
     */
    inline const Aws::Vector<ResourceDefinition>& GetResources() const{ return m_resources; }

    /**
     * <p>An optional list of resources to be included in the generated template.</p>
     * <p> If no resources are specified,the template will be created without any
     * resources. Resources can be added to the template using the
     * <code>UpdateGeneratedTemplate</code> API action.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>An optional list of resources to be included in the generated template.</p>
     * <p> If no resources are specified,the template will be created without any
     * resources. Resources can be added to the template using the
     * <code>UpdateGeneratedTemplate</code> API action.</p>
     */
    inline void SetResources(const Aws::Vector<ResourceDefinition>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>An optional list of resources to be included in the generated template.</p>
     * <p> If no resources are specified,the template will be created without any
     * resources. Resources can be added to the template using the
     * <code>UpdateGeneratedTemplate</code> API action.</p>
     */
    inline void SetResources(Aws::Vector<ResourceDefinition>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>An optional list of resources to be included in the generated template.</p>
     * <p> If no resources are specified,the template will be created without any
     * resources. Resources can be added to the template using the
     * <code>UpdateGeneratedTemplate</code> API action.</p>
     */
    inline CreateGeneratedTemplateRequest& WithResources(const Aws::Vector<ResourceDefinition>& value) { SetResources(value); return *this;}

    /**
     * <p>An optional list of resources to be included in the generated template.</p>
     * <p> If no resources are specified,the template will be created without any
     * resources. Resources can be added to the template using the
     * <code>UpdateGeneratedTemplate</code> API action.</p>
     */
    inline CreateGeneratedTemplateRequest& WithResources(Aws::Vector<ResourceDefinition>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>An optional list of resources to be included in the generated template.</p>
     * <p> If no resources are specified,the template will be created without any
     * resources. Resources can be added to the template using the
     * <code>UpdateGeneratedTemplate</code> API action.</p>
     */
    inline CreateGeneratedTemplateRequest& AddResources(const ResourceDefinition& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>An optional list of resources to be included in the generated template.</p>
     * <p> If no resources are specified,the template will be created without any
     * resources. Resources can be added to the template using the
     * <code>UpdateGeneratedTemplate</code> API action.</p>
     */
    inline CreateGeneratedTemplateRequest& AddResources(ResourceDefinition&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }


    /**
     * <p>The name assigned to the generated template.</p>
     */
    inline const Aws::String& GetGeneratedTemplateName() const{ return m_generatedTemplateName; }

    /**
     * <p>The name assigned to the generated template.</p>
     */
    inline bool GeneratedTemplateNameHasBeenSet() const { return m_generatedTemplateNameHasBeenSet; }

    /**
     * <p>The name assigned to the generated template.</p>
     */
    inline void SetGeneratedTemplateName(const Aws::String& value) { m_generatedTemplateNameHasBeenSet = true; m_generatedTemplateName = value; }

    /**
     * <p>The name assigned to the generated template.</p>
     */
    inline void SetGeneratedTemplateName(Aws::String&& value) { m_generatedTemplateNameHasBeenSet = true; m_generatedTemplateName = std::move(value); }

    /**
     * <p>The name assigned to the generated template.</p>
     */
    inline void SetGeneratedTemplateName(const char* value) { m_generatedTemplateNameHasBeenSet = true; m_generatedTemplateName.assign(value); }

    /**
     * <p>The name assigned to the generated template.</p>
     */
    inline CreateGeneratedTemplateRequest& WithGeneratedTemplateName(const Aws::String& value) { SetGeneratedTemplateName(value); return *this;}

    /**
     * <p>The name assigned to the generated template.</p>
     */
    inline CreateGeneratedTemplateRequest& WithGeneratedTemplateName(Aws::String&& value) { SetGeneratedTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name assigned to the generated template.</p>
     */
    inline CreateGeneratedTemplateRequest& WithGeneratedTemplateName(const char* value) { SetGeneratedTemplateName(value); return *this;}


    /**
     * <p>An optional name or ARN of a stack to use as the base stack for the generated
     * template.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>An optional name or ARN of a stack to use as the base stack for the generated
     * template.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>An optional name or ARN of a stack to use as the base stack for the generated
     * template.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>An optional name or ARN of a stack to use as the base stack for the generated
     * template.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>An optional name or ARN of a stack to use as the base stack for the generated
     * template.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>An optional name or ARN of a stack to use as the base stack for the generated
     * template.</p>
     */
    inline CreateGeneratedTemplateRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>An optional name or ARN of a stack to use as the base stack for the generated
     * template.</p>
     */
    inline CreateGeneratedTemplateRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>An optional name or ARN of a stack to use as the base stack for the generated
     * template.</p>
     */
    inline CreateGeneratedTemplateRequest& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>The configuration details of the generated template, including the
     * <code>DeletionPolicy</code> and <code>UpdateReplacePolicy</code>.</p>
     */
    inline const TemplateConfiguration& GetTemplateConfiguration() const{ return m_templateConfiguration; }

    /**
     * <p>The configuration details of the generated template, including the
     * <code>DeletionPolicy</code> and <code>UpdateReplacePolicy</code>.</p>
     */
    inline bool TemplateConfigurationHasBeenSet() const { return m_templateConfigurationHasBeenSet; }

    /**
     * <p>The configuration details of the generated template, including the
     * <code>DeletionPolicy</code> and <code>UpdateReplacePolicy</code>.</p>
     */
    inline void SetTemplateConfiguration(const TemplateConfiguration& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = value; }

    /**
     * <p>The configuration details of the generated template, including the
     * <code>DeletionPolicy</code> and <code>UpdateReplacePolicy</code>.</p>
     */
    inline void SetTemplateConfiguration(TemplateConfiguration&& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = std::move(value); }

    /**
     * <p>The configuration details of the generated template, including the
     * <code>DeletionPolicy</code> and <code>UpdateReplacePolicy</code>.</p>
     */
    inline CreateGeneratedTemplateRequest& WithTemplateConfiguration(const TemplateConfiguration& value) { SetTemplateConfiguration(value); return *this;}

    /**
     * <p>The configuration details of the generated template, including the
     * <code>DeletionPolicy</code> and <code>UpdateReplacePolicy</code>.</p>
     */
    inline CreateGeneratedTemplateRequest& WithTemplateConfiguration(TemplateConfiguration&& value) { SetTemplateConfiguration(std::move(value)); return *this;}

  private:

    Aws::Vector<ResourceDefinition> m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::String m_generatedTemplateName;
    bool m_generatedTemplateNameHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    TemplateConfiguration m_templateConfiguration;
    bool m_templateConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
