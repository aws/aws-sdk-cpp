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
    AWS_CLOUDFORMATION_API CreateGeneratedTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGeneratedTemplate"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>An optional list of resources to be included in the generated template.</p>
     * <p> If no resources are specified,the template will be created without any
     * resources. Resources can be added to the template using the
     * <code>UpdateGeneratedTemplate</code> API action.</p>
     */
    inline const Aws::Vector<ResourceDefinition>& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = Aws::Vector<ResourceDefinition>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<ResourceDefinition>>
    CreateGeneratedTemplateRequest& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = ResourceDefinition>
    CreateGeneratedTemplateRequest& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name assigned to the generated template.</p>
     */
    inline const Aws::String& GetGeneratedTemplateName() const { return m_generatedTemplateName; }
    inline bool GeneratedTemplateNameHasBeenSet() const { return m_generatedTemplateNameHasBeenSet; }
    template<typename GeneratedTemplateNameT = Aws::String>
    void SetGeneratedTemplateName(GeneratedTemplateNameT&& value) { m_generatedTemplateNameHasBeenSet = true; m_generatedTemplateName = std::forward<GeneratedTemplateNameT>(value); }
    template<typename GeneratedTemplateNameT = Aws::String>
    CreateGeneratedTemplateRequest& WithGeneratedTemplateName(GeneratedTemplateNameT&& value) { SetGeneratedTemplateName(std::forward<GeneratedTemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional name or ARN of a stack to use as the base stack for the generated
     * template.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    CreateGeneratedTemplateRequest& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details of the generated template, including the
     * <code>DeletionPolicy</code> and <code>UpdateReplacePolicy</code>.</p>
     */
    inline const TemplateConfiguration& GetTemplateConfiguration() const { return m_templateConfiguration; }
    inline bool TemplateConfigurationHasBeenSet() const { return m_templateConfigurationHasBeenSet; }
    template<typename TemplateConfigurationT = TemplateConfiguration>
    void SetTemplateConfiguration(TemplateConfigurationT&& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = std::forward<TemplateConfigurationT>(value); }
    template<typename TemplateConfigurationT = TemplateConfiguration>
    CreateGeneratedTemplateRequest& WithTemplateConfiguration(TemplateConfigurationT&& value) { SetTemplateConfiguration(std::forward<TemplateConfigurationT>(value)); return *this;}
    ///@}
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
