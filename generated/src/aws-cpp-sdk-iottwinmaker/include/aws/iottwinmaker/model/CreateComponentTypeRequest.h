/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/IoTTwinMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iottwinmaker/model/PropertyDefinitionRequest.h>
#include <aws/iottwinmaker/model/FunctionRequest.h>
#include <aws/iottwinmaker/model/PropertyGroupRequest.h>
#include <aws/iottwinmaker/model/CompositeComponentTypeRequest.h>
#include <utility>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

  /**
   */
  class CreateComponentTypeRequest : public IoTTwinMakerRequest
  {
  public:
    AWS_IOTTWINMAKER_API CreateComponentTypeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateComponentType"; }

    AWS_IOTTWINMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    template<typename WorkspaceIdT = Aws::String>
    void SetWorkspaceId(WorkspaceIdT&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::forward<WorkspaceIdT>(value); }
    template<typename WorkspaceIdT = Aws::String>
    CreateComponentTypeRequest& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that specifies whether an entity can have more than one
     * component of this type.</p>
     */
    inline bool GetIsSingleton() const { return m_isSingleton; }
    inline bool IsSingletonHasBeenSet() const { return m_isSingletonHasBeenSet; }
    inline void SetIsSingleton(bool value) { m_isSingletonHasBeenSet = true; m_isSingleton = value; }
    inline CreateComponentTypeRequest& WithIsSingleton(bool value) { SetIsSingleton(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the component type.</p>
     */
    inline const Aws::String& GetComponentTypeId() const { return m_componentTypeId; }
    inline bool ComponentTypeIdHasBeenSet() const { return m_componentTypeIdHasBeenSet; }
    template<typename ComponentTypeIdT = Aws::String>
    void SetComponentTypeId(ComponentTypeIdT&& value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId = std::forward<ComponentTypeIdT>(value); }
    template<typename ComponentTypeIdT = Aws::String>
    CreateComponentTypeRequest& WithComponentTypeId(ComponentTypeIdT&& value) { SetComponentTypeId(std::forward<ComponentTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the component type.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateComponentTypeRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, PropertyDefinitionRequest>& GetPropertyDefinitions() const { return m_propertyDefinitions; }
    inline bool PropertyDefinitionsHasBeenSet() const { return m_propertyDefinitionsHasBeenSet; }
    template<typename PropertyDefinitionsT = Aws::Map<Aws::String, PropertyDefinitionRequest>>
    void SetPropertyDefinitions(PropertyDefinitionsT&& value) { m_propertyDefinitionsHasBeenSet = true; m_propertyDefinitions = std::forward<PropertyDefinitionsT>(value); }
    template<typename PropertyDefinitionsT = Aws::Map<Aws::String, PropertyDefinitionRequest>>
    CreateComponentTypeRequest& WithPropertyDefinitions(PropertyDefinitionsT&& value) { SetPropertyDefinitions(std::forward<PropertyDefinitionsT>(value)); return *this;}
    template<typename PropertyDefinitionsKeyT = Aws::String, typename PropertyDefinitionsValueT = PropertyDefinitionRequest>
    CreateComponentTypeRequest& AddPropertyDefinitions(PropertyDefinitionsKeyT&& key, PropertyDefinitionsValueT&& value) {
      m_propertyDefinitionsHasBeenSet = true; m_propertyDefinitions.emplace(std::forward<PropertyDefinitionsKeyT>(key), std::forward<PropertyDefinitionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies the parent component type to extend.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExtendsFrom() const { return m_extendsFrom; }
    inline bool ExtendsFromHasBeenSet() const { return m_extendsFromHasBeenSet; }
    template<typename ExtendsFromT = Aws::Vector<Aws::String>>
    void SetExtendsFrom(ExtendsFromT&& value) { m_extendsFromHasBeenSet = true; m_extendsFrom = std::forward<ExtendsFromT>(value); }
    template<typename ExtendsFromT = Aws::Vector<Aws::String>>
    CreateComponentTypeRequest& WithExtendsFrom(ExtendsFromT&& value) { SetExtendsFrom(std::forward<ExtendsFromT>(value)); return *this;}
    template<typename ExtendsFromT = Aws::String>
    CreateComponentTypeRequest& AddExtendsFrom(ExtendsFromT&& value) { m_extendsFromHasBeenSet = true; m_extendsFrom.emplace_back(std::forward<ExtendsFromT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, FunctionRequest>& GetFunctions() const { return m_functions; }
    inline bool FunctionsHasBeenSet() const { return m_functionsHasBeenSet; }
    template<typename FunctionsT = Aws::Map<Aws::String, FunctionRequest>>
    void SetFunctions(FunctionsT&& value) { m_functionsHasBeenSet = true; m_functions = std::forward<FunctionsT>(value); }
    template<typename FunctionsT = Aws::Map<Aws::String, FunctionRequest>>
    CreateComponentTypeRequest& WithFunctions(FunctionsT&& value) { SetFunctions(std::forward<FunctionsT>(value)); return *this;}
    template<typename FunctionsKeyT = Aws::String, typename FunctionsValueT = FunctionRequest>
    CreateComponentTypeRequest& AddFunctions(FunctionsKeyT&& key, FunctionsValueT&& value) {
      m_functionsHasBeenSet = true; m_functions.emplace(std::forward<FunctionsKeyT>(key), std::forward<FunctionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Metadata that you can use to manage the component type.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateComponentTypeRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateComponentTypeRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Map<Aws::String, PropertyGroupRequest>& GetPropertyGroups() const { return m_propertyGroups; }
    inline bool PropertyGroupsHasBeenSet() const { return m_propertyGroupsHasBeenSet; }
    template<typename PropertyGroupsT = Aws::Map<Aws::String, PropertyGroupRequest>>
    void SetPropertyGroups(PropertyGroupsT&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups = std::forward<PropertyGroupsT>(value); }
    template<typename PropertyGroupsT = Aws::Map<Aws::String, PropertyGroupRequest>>
    CreateComponentTypeRequest& WithPropertyGroups(PropertyGroupsT&& value) { SetPropertyGroups(std::forward<PropertyGroupsT>(value)); return *this;}
    template<typename PropertyGroupsKeyT = Aws::String, typename PropertyGroupsValueT = PropertyGroupRequest>
    CreateComponentTypeRequest& AddPropertyGroups(PropertyGroupsKeyT&& key, PropertyGroupsValueT&& value) {
      m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(std::forward<PropertyGroupsKeyT>(key), std::forward<PropertyGroupsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A friendly name for the component type.</p>
     */
    inline const Aws::String& GetComponentTypeName() const { return m_componentTypeName; }
    inline bool ComponentTypeNameHasBeenSet() const { return m_componentTypeNameHasBeenSet; }
    template<typename ComponentTypeNameT = Aws::String>
    void SetComponentTypeName(ComponentTypeNameT&& value) { m_componentTypeNameHasBeenSet = true; m_componentTypeName = std::forward<ComponentTypeNameT>(value); }
    template<typename ComponentTypeNameT = Aws::String>
    CreateComponentTypeRequest& WithComponentTypeName(ComponentTypeNameT&& value) { SetComponentTypeName(std::forward<ComponentTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is an object that maps strings to <code>compositeComponentTypes</code>
     * of the <code>componentType</code>. <code>CompositeComponentType</code> is
     * referenced by <code>componentTypeId</code>.</p>
     */
    inline const Aws::Map<Aws::String, CompositeComponentTypeRequest>& GetCompositeComponentTypes() const { return m_compositeComponentTypes; }
    inline bool CompositeComponentTypesHasBeenSet() const { return m_compositeComponentTypesHasBeenSet; }
    template<typename CompositeComponentTypesT = Aws::Map<Aws::String, CompositeComponentTypeRequest>>
    void SetCompositeComponentTypes(CompositeComponentTypesT&& value) { m_compositeComponentTypesHasBeenSet = true; m_compositeComponentTypes = std::forward<CompositeComponentTypesT>(value); }
    template<typename CompositeComponentTypesT = Aws::Map<Aws::String, CompositeComponentTypeRequest>>
    CreateComponentTypeRequest& WithCompositeComponentTypes(CompositeComponentTypesT&& value) { SetCompositeComponentTypes(std::forward<CompositeComponentTypesT>(value)); return *this;}
    template<typename CompositeComponentTypesKeyT = Aws::String, typename CompositeComponentTypesValueT = CompositeComponentTypeRequest>
    CreateComponentTypeRequest& AddCompositeComponentTypes(CompositeComponentTypesKeyT&& key, CompositeComponentTypesValueT&& value) {
      m_compositeComponentTypesHasBeenSet = true; m_compositeComponentTypes.emplace(std::forward<CompositeComponentTypesKeyT>(key), std::forward<CompositeComponentTypesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    bool m_isSingleton{false};
    bool m_isSingletonHasBeenSet = false;

    Aws::String m_componentTypeId;
    bool m_componentTypeIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, PropertyDefinitionRequest> m_propertyDefinitions;
    bool m_propertyDefinitionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_extendsFrom;
    bool m_extendsFromHasBeenSet = false;

    Aws::Map<Aws::String, FunctionRequest> m_functions;
    bool m_functionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Map<Aws::String, PropertyGroupRequest> m_propertyGroups;
    bool m_propertyGroupsHasBeenSet = false;

    Aws::String m_componentTypeName;
    bool m_componentTypeNameHasBeenSet = false;

    Aws::Map<Aws::String, CompositeComponentTypeRequest> m_compositeComponentTypes;
    bool m_compositeComponentTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
