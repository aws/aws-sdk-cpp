/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/ResourceMapping.h>
#include <aws/cloudformation/model/StackDefinition.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class CreateStackRefactorRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API CreateStackRefactorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStackRefactor"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>A description to help you identify the stack refactor.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateStackRefactorRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines if a new stack is created with the refactor.</p>
     */
    inline bool GetEnableStackCreation() const { return m_enableStackCreation; }
    inline bool EnableStackCreationHasBeenSet() const { return m_enableStackCreationHasBeenSet; }
    inline void SetEnableStackCreation(bool value) { m_enableStackCreationHasBeenSet = true; m_enableStackCreation = value; }
    inline CreateStackRefactorRequest& WithEnableStackCreation(bool value) { SetEnableStackCreation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mappings for the stack resource <code>Source</code> and stack resource
     * <code>Destination</code>.</p>
     */
    inline const Aws::Vector<ResourceMapping>& GetResourceMappings() const { return m_resourceMappings; }
    inline bool ResourceMappingsHasBeenSet() const { return m_resourceMappingsHasBeenSet; }
    template<typename ResourceMappingsT = Aws::Vector<ResourceMapping>>
    void SetResourceMappings(ResourceMappingsT&& value) { m_resourceMappingsHasBeenSet = true; m_resourceMappings = std::forward<ResourceMappingsT>(value); }
    template<typename ResourceMappingsT = Aws::Vector<ResourceMapping>>
    CreateStackRefactorRequest& WithResourceMappings(ResourceMappingsT&& value) { SetResourceMappings(std::forward<ResourceMappingsT>(value)); return *this;}
    template<typename ResourceMappingsT = ResourceMapping>
    CreateStackRefactorRequest& AddResourceMappings(ResourceMappingsT&& value) { m_resourceMappingsHasBeenSet = true; m_resourceMappings.emplace_back(std::forward<ResourceMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The stacks being refactored.</p>
     */
    inline const Aws::Vector<StackDefinition>& GetStackDefinitions() const { return m_stackDefinitions; }
    inline bool StackDefinitionsHasBeenSet() const { return m_stackDefinitionsHasBeenSet; }
    template<typename StackDefinitionsT = Aws::Vector<StackDefinition>>
    void SetStackDefinitions(StackDefinitionsT&& value) { m_stackDefinitionsHasBeenSet = true; m_stackDefinitions = std::forward<StackDefinitionsT>(value); }
    template<typename StackDefinitionsT = Aws::Vector<StackDefinition>>
    CreateStackRefactorRequest& WithStackDefinitions(StackDefinitionsT&& value) { SetStackDefinitions(std::forward<StackDefinitionsT>(value)); return *this;}
    template<typename StackDefinitionsT = StackDefinition>
    CreateStackRefactorRequest& AddStackDefinitions(StackDefinitionsT&& value) { m_stackDefinitionsHasBeenSet = true; m_stackDefinitions.emplace_back(std::forward<StackDefinitionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_enableStackCreation{false};
    bool m_enableStackCreationHasBeenSet = false;

    Aws::Vector<ResourceMapping> m_resourceMappings;
    bool m_resourceMappingsHasBeenSet = false;

    Aws::Vector<StackDefinition> m_stackDefinitions;
    bool m_stackDefinitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
