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
    AWS_CLOUDFORMATION_API CreateStackRefactorRequest();

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
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateStackRefactorRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateStackRefactorRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateStackRefactorRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines if a new stack is created with the refactor.</p>
     */
    inline bool GetEnableStackCreation() const{ return m_enableStackCreation; }
    inline bool EnableStackCreationHasBeenSet() const { return m_enableStackCreationHasBeenSet; }
    inline void SetEnableStackCreation(bool value) { m_enableStackCreationHasBeenSet = true; m_enableStackCreation = value; }
    inline CreateStackRefactorRequest& WithEnableStackCreation(bool value) { SetEnableStackCreation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mappings for the stack resource <code>Source</code> and stack resource
     * <code>Destination</code>.</p>
     */
    inline const Aws::Vector<ResourceMapping>& GetResourceMappings() const{ return m_resourceMappings; }
    inline bool ResourceMappingsHasBeenSet() const { return m_resourceMappingsHasBeenSet; }
    inline void SetResourceMappings(const Aws::Vector<ResourceMapping>& value) { m_resourceMappingsHasBeenSet = true; m_resourceMappings = value; }
    inline void SetResourceMappings(Aws::Vector<ResourceMapping>&& value) { m_resourceMappingsHasBeenSet = true; m_resourceMappings = std::move(value); }
    inline CreateStackRefactorRequest& WithResourceMappings(const Aws::Vector<ResourceMapping>& value) { SetResourceMappings(value); return *this;}
    inline CreateStackRefactorRequest& WithResourceMappings(Aws::Vector<ResourceMapping>&& value) { SetResourceMappings(std::move(value)); return *this;}
    inline CreateStackRefactorRequest& AddResourceMappings(const ResourceMapping& value) { m_resourceMappingsHasBeenSet = true; m_resourceMappings.push_back(value); return *this; }
    inline CreateStackRefactorRequest& AddResourceMappings(ResourceMapping&& value) { m_resourceMappingsHasBeenSet = true; m_resourceMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The stacks being refactored.</p>
     */
    inline const Aws::Vector<StackDefinition>& GetStackDefinitions() const{ return m_stackDefinitions; }
    inline bool StackDefinitionsHasBeenSet() const { return m_stackDefinitionsHasBeenSet; }
    inline void SetStackDefinitions(const Aws::Vector<StackDefinition>& value) { m_stackDefinitionsHasBeenSet = true; m_stackDefinitions = value; }
    inline void SetStackDefinitions(Aws::Vector<StackDefinition>&& value) { m_stackDefinitionsHasBeenSet = true; m_stackDefinitions = std::move(value); }
    inline CreateStackRefactorRequest& WithStackDefinitions(const Aws::Vector<StackDefinition>& value) { SetStackDefinitions(value); return *this;}
    inline CreateStackRefactorRequest& WithStackDefinitions(Aws::Vector<StackDefinition>&& value) { SetStackDefinitions(std::move(value)); return *this;}
    inline CreateStackRefactorRequest& AddStackDefinitions(const StackDefinition& value) { m_stackDefinitionsHasBeenSet = true; m_stackDefinitions.push_back(value); return *this; }
    inline CreateStackRefactorRequest& AddStackDefinitions(StackDefinition&& value) { m_stackDefinitionsHasBeenSet = true; m_stackDefinitions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_enableStackCreation;
    bool m_enableStackCreationHasBeenSet = false;

    Aws::Vector<ResourceMapping> m_resourceMappings;
    bool m_resourceMappingsHasBeenSet = false;

    Aws::Vector<StackDefinition> m_stackDefinitions;
    bool m_stackDefinitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
