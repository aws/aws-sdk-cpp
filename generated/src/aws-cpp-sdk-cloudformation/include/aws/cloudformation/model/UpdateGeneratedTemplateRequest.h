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
    AWS_CLOUDFORMATION_API UpdateGeneratedTemplateRequest();

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
    inline const Aws::String& GetGeneratedTemplateName() const{ return m_generatedTemplateName; }
    inline bool GeneratedTemplateNameHasBeenSet() const { return m_generatedTemplateNameHasBeenSet; }
    inline void SetGeneratedTemplateName(const Aws::String& value) { m_generatedTemplateNameHasBeenSet = true; m_generatedTemplateName = value; }
    inline void SetGeneratedTemplateName(Aws::String&& value) { m_generatedTemplateNameHasBeenSet = true; m_generatedTemplateName = std::move(value); }
    inline void SetGeneratedTemplateName(const char* value) { m_generatedTemplateNameHasBeenSet = true; m_generatedTemplateName.assign(value); }
    inline UpdateGeneratedTemplateRequest& WithGeneratedTemplateName(const Aws::String& value) { SetGeneratedTemplateName(value); return *this;}
    inline UpdateGeneratedTemplateRequest& WithGeneratedTemplateName(Aws::String&& value) { SetGeneratedTemplateName(std::move(value)); return *this;}
    inline UpdateGeneratedTemplateRequest& WithGeneratedTemplateName(const char* value) { SetGeneratedTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional new name to assign to the generated template.</p>
     */
    inline const Aws::String& GetNewGeneratedTemplateName() const{ return m_newGeneratedTemplateName; }
    inline bool NewGeneratedTemplateNameHasBeenSet() const { return m_newGeneratedTemplateNameHasBeenSet; }
    inline void SetNewGeneratedTemplateName(const Aws::String& value) { m_newGeneratedTemplateNameHasBeenSet = true; m_newGeneratedTemplateName = value; }
    inline void SetNewGeneratedTemplateName(Aws::String&& value) { m_newGeneratedTemplateNameHasBeenSet = true; m_newGeneratedTemplateName = std::move(value); }
    inline void SetNewGeneratedTemplateName(const char* value) { m_newGeneratedTemplateNameHasBeenSet = true; m_newGeneratedTemplateName.assign(value); }
    inline UpdateGeneratedTemplateRequest& WithNewGeneratedTemplateName(const Aws::String& value) { SetNewGeneratedTemplateName(value); return *this;}
    inline UpdateGeneratedTemplateRequest& WithNewGeneratedTemplateName(Aws::String&& value) { SetNewGeneratedTemplateName(std::move(value)); return *this;}
    inline UpdateGeneratedTemplateRequest& WithNewGeneratedTemplateName(const char* value) { SetNewGeneratedTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional list of resources to be added to the generated template.</p>
     */
    inline const Aws::Vector<ResourceDefinition>& GetAddResources() const{ return m_addResources; }
    inline bool AddResourcesHasBeenSet() const { return m_addResourcesHasBeenSet; }
    inline void SetAddResources(const Aws::Vector<ResourceDefinition>& value) { m_addResourcesHasBeenSet = true; m_addResources = value; }
    inline void SetAddResources(Aws::Vector<ResourceDefinition>&& value) { m_addResourcesHasBeenSet = true; m_addResources = std::move(value); }
    inline UpdateGeneratedTemplateRequest& WithAddResources(const Aws::Vector<ResourceDefinition>& value) { SetAddResources(value); return *this;}
    inline UpdateGeneratedTemplateRequest& WithAddResources(Aws::Vector<ResourceDefinition>&& value) { SetAddResources(std::move(value)); return *this;}
    inline UpdateGeneratedTemplateRequest& AddAddResources(const ResourceDefinition& value) { m_addResourcesHasBeenSet = true; m_addResources.push_back(value); return *this; }
    inline UpdateGeneratedTemplateRequest& AddAddResources(ResourceDefinition&& value) { m_addResourcesHasBeenSet = true; m_addResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of logical ids for resources to remove from the generated
     * template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveResources() const{ return m_removeResources; }
    inline bool RemoveResourcesHasBeenSet() const { return m_removeResourcesHasBeenSet; }
    inline void SetRemoveResources(const Aws::Vector<Aws::String>& value) { m_removeResourcesHasBeenSet = true; m_removeResources = value; }
    inline void SetRemoveResources(Aws::Vector<Aws::String>&& value) { m_removeResourcesHasBeenSet = true; m_removeResources = std::move(value); }
    inline UpdateGeneratedTemplateRequest& WithRemoveResources(const Aws::Vector<Aws::String>& value) { SetRemoveResources(value); return *this;}
    inline UpdateGeneratedTemplateRequest& WithRemoveResources(Aws::Vector<Aws::String>&& value) { SetRemoveResources(std::move(value)); return *this;}
    inline UpdateGeneratedTemplateRequest& AddRemoveResources(const Aws::String& value) { m_removeResourcesHasBeenSet = true; m_removeResources.push_back(value); return *this; }
    inline UpdateGeneratedTemplateRequest& AddRemoveResources(Aws::String&& value) { m_removeResourcesHasBeenSet = true; m_removeResources.push_back(std::move(value)); return *this; }
    inline UpdateGeneratedTemplateRequest& AddRemoveResources(const char* value) { m_removeResourcesHasBeenSet = true; m_removeResources.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, update the resource properties in the generated
     * template with their current live state. This feature is useful when the resource
     * properties in your generated a template does not reflect the live state of the
     * resource properties. This happens when a user update the resource properties
     * after generating a template.</p>
     */
    inline bool GetRefreshAllResources() const{ return m_refreshAllResources; }
    inline bool RefreshAllResourcesHasBeenSet() const { return m_refreshAllResourcesHasBeenSet; }
    inline void SetRefreshAllResources(bool value) { m_refreshAllResourcesHasBeenSet = true; m_refreshAllResources = value; }
    inline UpdateGeneratedTemplateRequest& WithRefreshAllResources(bool value) { SetRefreshAllResources(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details of the generated template, including the
     * <code>DeletionPolicy</code> and <code>UpdateReplacePolicy</code>.</p>
     */
    inline const TemplateConfiguration& GetTemplateConfiguration() const{ return m_templateConfiguration; }
    inline bool TemplateConfigurationHasBeenSet() const { return m_templateConfigurationHasBeenSet; }
    inline void SetTemplateConfiguration(const TemplateConfiguration& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = value; }
    inline void SetTemplateConfiguration(TemplateConfiguration&& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = std::move(value); }
    inline UpdateGeneratedTemplateRequest& WithTemplateConfiguration(const TemplateConfiguration& value) { SetTemplateConfiguration(value); return *this;}
    inline UpdateGeneratedTemplateRequest& WithTemplateConfiguration(TemplateConfiguration&& value) { SetTemplateConfiguration(std::move(value)); return *this;}
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

    bool m_refreshAllResources;
    bool m_refreshAllResourcesHasBeenSet = false;

    TemplateConfiguration m_templateConfiguration;
    bool m_templateConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
