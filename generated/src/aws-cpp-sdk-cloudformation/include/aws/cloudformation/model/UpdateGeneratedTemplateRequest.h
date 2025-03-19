/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class UpdateGeneratedTemplateRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API UpdateGeneratedTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGeneratedTemplate"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of a generated template.</p>
     */
    inline const Aws::String& GetGeneratedTemplateName() const { return m_generatedTemplateName; }
    inline bool GeneratedTemplateNameHasBeenSet() const { return m_generatedTemplateNameHasBeenSet; }
    template<typename GeneratedTemplateNameT = Aws::String>
    void SetGeneratedTemplateName(GeneratedTemplateNameT&& value) { m_generatedTemplateNameHasBeenSet = true; m_generatedTemplateName = std::forward<GeneratedTemplateNameT>(value); }
    template<typename GeneratedTemplateNameT = Aws::String>
    UpdateGeneratedTemplateRequest& WithGeneratedTemplateName(GeneratedTemplateNameT&& value) { SetGeneratedTemplateName(std::forward<GeneratedTemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional new name to assign to the generated template.</p>
     */
    inline const Aws::String& GetNewGeneratedTemplateName() const { return m_newGeneratedTemplateName; }
    inline bool NewGeneratedTemplateNameHasBeenSet() const { return m_newGeneratedTemplateNameHasBeenSet; }
    template<typename NewGeneratedTemplateNameT = Aws::String>
    void SetNewGeneratedTemplateName(NewGeneratedTemplateNameT&& value) { m_newGeneratedTemplateNameHasBeenSet = true; m_newGeneratedTemplateName = std::forward<NewGeneratedTemplateNameT>(value); }
    template<typename NewGeneratedTemplateNameT = Aws::String>
    UpdateGeneratedTemplateRequest& WithNewGeneratedTemplateName(NewGeneratedTemplateNameT&& value) { SetNewGeneratedTemplateName(std::forward<NewGeneratedTemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional list of resources to be added to the generated template.</p>
     */
    inline const Aws::Vector<ResourceDefinition>& GetAddResources() const { return m_addResources; }
    inline bool AddResourcesHasBeenSet() const { return m_addResourcesHasBeenSet; }
    template<typename AddResourcesT = Aws::Vector<ResourceDefinition>>
    void SetAddResources(AddResourcesT&& value) { m_addResourcesHasBeenSet = true; m_addResources = std::forward<AddResourcesT>(value); }
    template<typename AddResourcesT = Aws::Vector<ResourceDefinition>>
    UpdateGeneratedTemplateRequest& WithAddResources(AddResourcesT&& value) { SetAddResources(std::forward<AddResourcesT>(value)); return *this;}
    template<typename AddResourcesT = ResourceDefinition>
    UpdateGeneratedTemplateRequest& AddAddResources(AddResourcesT&& value) { m_addResourcesHasBeenSet = true; m_addResources.emplace_back(std::forward<AddResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of logical ids for resources to remove from the generated
     * template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveResources() const { return m_removeResources; }
    inline bool RemoveResourcesHasBeenSet() const { return m_removeResourcesHasBeenSet; }
    template<typename RemoveResourcesT = Aws::Vector<Aws::String>>
    void SetRemoveResources(RemoveResourcesT&& value) { m_removeResourcesHasBeenSet = true; m_removeResources = std::forward<RemoveResourcesT>(value); }
    template<typename RemoveResourcesT = Aws::Vector<Aws::String>>
    UpdateGeneratedTemplateRequest& WithRemoveResources(RemoveResourcesT&& value) { SetRemoveResources(std::forward<RemoveResourcesT>(value)); return *this;}
    template<typename RemoveResourcesT = Aws::String>
    UpdateGeneratedTemplateRequest& AddRemoveResources(RemoveResourcesT&& value) { m_removeResourcesHasBeenSet = true; m_removeResources.emplace_back(std::forward<RemoveResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, update the resource properties in the generated
     * template with their current live state. This feature is useful when the resource
     * properties in your generated a template does not reflect the live state of the
     * resource properties. This happens when a user update the resource properties
     * after generating a template.</p>
     */
    inline bool GetRefreshAllResources() const { return m_refreshAllResources; }
    inline bool RefreshAllResourcesHasBeenSet() const { return m_refreshAllResourcesHasBeenSet; }
    inline void SetRefreshAllResources(bool value) { m_refreshAllResourcesHasBeenSet = true; m_refreshAllResources = value; }
    inline UpdateGeneratedTemplateRequest& WithRefreshAllResources(bool value) { SetRefreshAllResources(value); return *this;}
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
    UpdateGeneratedTemplateRequest& WithTemplateConfiguration(TemplateConfigurationT&& value) { SetTemplateConfiguration(std::forward<TemplateConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_generatedTemplateName;
    bool m_generatedTemplateNameHasBeenSet = false;

    Aws::String m_newGeneratedTemplateName;
    bool m_newGeneratedTemplateNameHasBeenSet = false;

    Aws::Vector<ResourceDefinition> m_addResources;
    bool m_addResourcesHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeResources;
    bool m_removeResourcesHasBeenSet = false;

    bool m_refreshAllResources{false};
    bool m_refreshAllResourcesHasBeenSet = false;

    TemplateConfiguration m_templateConfiguration;
    bool m_templateConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
