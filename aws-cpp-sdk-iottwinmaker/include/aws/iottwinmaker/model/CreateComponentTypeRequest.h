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
    AWS_IOTTWINMAKER_API CreateComponentTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateComponentType"; }

    AWS_IOTTWINMAKER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline CreateComponentTypeRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline CreateComponentTypeRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline CreateComponentTypeRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}


    /**
     * <p>A Boolean value that specifies whether an entity can have more than one
     * component of this type.</p>
     */
    inline bool GetIsSingleton() const{ return m_isSingleton; }

    /**
     * <p>A Boolean value that specifies whether an entity can have more than one
     * component of this type.</p>
     */
    inline bool IsSingletonHasBeenSet() const { return m_isSingletonHasBeenSet; }

    /**
     * <p>A Boolean value that specifies whether an entity can have more than one
     * component of this type.</p>
     */
    inline void SetIsSingleton(bool value) { m_isSingletonHasBeenSet = true; m_isSingleton = value; }

    /**
     * <p>A Boolean value that specifies whether an entity can have more than one
     * component of this type.</p>
     */
    inline CreateComponentTypeRequest& WithIsSingleton(bool value) { SetIsSingleton(value); return *this;}


    /**
     * <p>The ID of the component type.</p>
     */
    inline const Aws::String& GetComponentTypeId() const{ return m_componentTypeId; }

    /**
     * <p>The ID of the component type.</p>
     */
    inline bool ComponentTypeIdHasBeenSet() const { return m_componentTypeIdHasBeenSet; }

    /**
     * <p>The ID of the component type.</p>
     */
    inline void SetComponentTypeId(const Aws::String& value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId = value; }

    /**
     * <p>The ID of the component type.</p>
     */
    inline void SetComponentTypeId(Aws::String&& value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId = std::move(value); }

    /**
     * <p>The ID of the component type.</p>
     */
    inline void SetComponentTypeId(const char* value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId.assign(value); }

    /**
     * <p>The ID of the component type.</p>
     */
    inline CreateComponentTypeRequest& WithComponentTypeId(const Aws::String& value) { SetComponentTypeId(value); return *this;}

    /**
     * <p>The ID of the component type.</p>
     */
    inline CreateComponentTypeRequest& WithComponentTypeId(Aws::String&& value) { SetComponentTypeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the component type.</p>
     */
    inline CreateComponentTypeRequest& WithComponentTypeId(const char* value) { SetComponentTypeId(value); return *this;}


    /**
     * <p>The description of the component type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the component type.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the component type.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the component type.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the component type.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the component type.</p>
     */
    inline CreateComponentTypeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the component type.</p>
     */
    inline CreateComponentTypeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the component type.</p>
     */
    inline CreateComponentTypeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, PropertyDefinitionRequest>& GetPropertyDefinitions() const{ return m_propertyDefinitions; }

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline bool PropertyDefinitionsHasBeenSet() const { return m_propertyDefinitionsHasBeenSet; }

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline void SetPropertyDefinitions(const Aws::Map<Aws::String, PropertyDefinitionRequest>& value) { m_propertyDefinitionsHasBeenSet = true; m_propertyDefinitions = value; }

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline void SetPropertyDefinitions(Aws::Map<Aws::String, PropertyDefinitionRequest>&& value) { m_propertyDefinitionsHasBeenSet = true; m_propertyDefinitions = std::move(value); }

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline CreateComponentTypeRequest& WithPropertyDefinitions(const Aws::Map<Aws::String, PropertyDefinitionRequest>& value) { SetPropertyDefinitions(value); return *this;}

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline CreateComponentTypeRequest& WithPropertyDefinitions(Aws::Map<Aws::String, PropertyDefinitionRequest>&& value) { SetPropertyDefinitions(std::move(value)); return *this;}

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline CreateComponentTypeRequest& AddPropertyDefinitions(const Aws::String& key, const PropertyDefinitionRequest& value) { m_propertyDefinitionsHasBeenSet = true; m_propertyDefinitions.emplace(key, value); return *this; }

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline CreateComponentTypeRequest& AddPropertyDefinitions(Aws::String&& key, const PropertyDefinitionRequest& value) { m_propertyDefinitionsHasBeenSet = true; m_propertyDefinitions.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline CreateComponentTypeRequest& AddPropertyDefinitions(const Aws::String& key, PropertyDefinitionRequest&& value) { m_propertyDefinitionsHasBeenSet = true; m_propertyDefinitions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline CreateComponentTypeRequest& AddPropertyDefinitions(Aws::String&& key, PropertyDefinitionRequest&& value) { m_propertyDefinitionsHasBeenSet = true; m_propertyDefinitions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline CreateComponentTypeRequest& AddPropertyDefinitions(const char* key, PropertyDefinitionRequest&& value) { m_propertyDefinitionsHasBeenSet = true; m_propertyDefinitions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline CreateComponentTypeRequest& AddPropertyDefinitions(const char* key, const PropertyDefinitionRequest& value) { m_propertyDefinitionsHasBeenSet = true; m_propertyDefinitions.emplace(key, value); return *this; }


    /**
     * <p>Specifies the parent component type to extend.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExtendsFrom() const{ return m_extendsFrom; }

    /**
     * <p>Specifies the parent component type to extend.</p>
     */
    inline bool ExtendsFromHasBeenSet() const { return m_extendsFromHasBeenSet; }

    /**
     * <p>Specifies the parent component type to extend.</p>
     */
    inline void SetExtendsFrom(const Aws::Vector<Aws::String>& value) { m_extendsFromHasBeenSet = true; m_extendsFrom = value; }

    /**
     * <p>Specifies the parent component type to extend.</p>
     */
    inline void SetExtendsFrom(Aws::Vector<Aws::String>&& value) { m_extendsFromHasBeenSet = true; m_extendsFrom = std::move(value); }

    /**
     * <p>Specifies the parent component type to extend.</p>
     */
    inline CreateComponentTypeRequest& WithExtendsFrom(const Aws::Vector<Aws::String>& value) { SetExtendsFrom(value); return *this;}

    /**
     * <p>Specifies the parent component type to extend.</p>
     */
    inline CreateComponentTypeRequest& WithExtendsFrom(Aws::Vector<Aws::String>&& value) { SetExtendsFrom(std::move(value)); return *this;}

    /**
     * <p>Specifies the parent component type to extend.</p>
     */
    inline CreateComponentTypeRequest& AddExtendsFrom(const Aws::String& value) { m_extendsFromHasBeenSet = true; m_extendsFrom.push_back(value); return *this; }

    /**
     * <p>Specifies the parent component type to extend.</p>
     */
    inline CreateComponentTypeRequest& AddExtendsFrom(Aws::String&& value) { m_extendsFromHasBeenSet = true; m_extendsFrom.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the parent component type to extend.</p>
     */
    inline CreateComponentTypeRequest& AddExtendsFrom(const char* value) { m_extendsFromHasBeenSet = true; m_extendsFrom.push_back(value); return *this; }


    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, FunctionRequest>& GetFunctions() const{ return m_functions; }

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline bool FunctionsHasBeenSet() const { return m_functionsHasBeenSet; }

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline void SetFunctions(const Aws::Map<Aws::String, FunctionRequest>& value) { m_functionsHasBeenSet = true; m_functions = value; }

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline void SetFunctions(Aws::Map<Aws::String, FunctionRequest>&& value) { m_functionsHasBeenSet = true; m_functions = std::move(value); }

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline CreateComponentTypeRequest& WithFunctions(const Aws::Map<Aws::String, FunctionRequest>& value) { SetFunctions(value); return *this;}

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline CreateComponentTypeRequest& WithFunctions(Aws::Map<Aws::String, FunctionRequest>&& value) { SetFunctions(std::move(value)); return *this;}

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline CreateComponentTypeRequest& AddFunctions(const Aws::String& key, const FunctionRequest& value) { m_functionsHasBeenSet = true; m_functions.emplace(key, value); return *this; }

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline CreateComponentTypeRequest& AddFunctions(Aws::String&& key, const FunctionRequest& value) { m_functionsHasBeenSet = true; m_functions.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline CreateComponentTypeRequest& AddFunctions(const Aws::String& key, FunctionRequest&& value) { m_functionsHasBeenSet = true; m_functions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline CreateComponentTypeRequest& AddFunctions(Aws::String&& key, FunctionRequest&& value) { m_functionsHasBeenSet = true; m_functions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline CreateComponentTypeRequest& AddFunctions(const char* key, FunctionRequest&& value) { m_functionsHasBeenSet = true; m_functions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline CreateComponentTypeRequest& AddFunctions(const char* key, const FunctionRequest& value) { m_functionsHasBeenSet = true; m_functions.emplace(key, value); return *this; }


    /**
     * <p>Metadata that you can use to manage the component type.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata that you can use to manage the component type.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata that you can use to manage the component type.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata that you can use to manage the component type.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata that you can use to manage the component type.</p>
     */
    inline CreateComponentTypeRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata that you can use to manage the component type.</p>
     */
    inline CreateComponentTypeRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata that you can use to manage the component type.</p>
     */
    inline CreateComponentTypeRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata that you can use to manage the component type.</p>
     */
    inline CreateComponentTypeRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata that you can use to manage the component type.</p>
     */
    inline CreateComponentTypeRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata that you can use to manage the component type.</p>
     */
    inline CreateComponentTypeRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata that you can use to manage the component type.</p>
     */
    inline CreateComponentTypeRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata that you can use to manage the component type.</p>
     */
    inline CreateComponentTypeRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata that you can use to manage the component type.</p>
     */
    inline CreateComponentTypeRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p/>
     */
    inline const Aws::Map<Aws::String, PropertyGroupRequest>& GetPropertyGroups() const{ return m_propertyGroups; }

    /**
     * <p/>
     */
    inline bool PropertyGroupsHasBeenSet() const { return m_propertyGroupsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetPropertyGroups(const Aws::Map<Aws::String, PropertyGroupRequest>& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups = value; }

    /**
     * <p/>
     */
    inline void SetPropertyGroups(Aws::Map<Aws::String, PropertyGroupRequest>&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups = std::move(value); }

    /**
     * <p/>
     */
    inline CreateComponentTypeRequest& WithPropertyGroups(const Aws::Map<Aws::String, PropertyGroupRequest>& value) { SetPropertyGroups(value); return *this;}

    /**
     * <p/>
     */
    inline CreateComponentTypeRequest& WithPropertyGroups(Aws::Map<Aws::String, PropertyGroupRequest>&& value) { SetPropertyGroups(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline CreateComponentTypeRequest& AddPropertyGroups(const Aws::String& key, const PropertyGroupRequest& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(key, value); return *this; }

    /**
     * <p/>
     */
    inline CreateComponentTypeRequest& AddPropertyGroups(Aws::String&& key, const PropertyGroupRequest& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(std::move(key), value); return *this; }

    /**
     * <p/>
     */
    inline CreateComponentTypeRequest& AddPropertyGroups(const Aws::String& key, PropertyGroupRequest&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(key, std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline CreateComponentTypeRequest& AddPropertyGroups(Aws::String&& key, PropertyGroupRequest&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline CreateComponentTypeRequest& AddPropertyGroups(const char* key, PropertyGroupRequest&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(key, std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline CreateComponentTypeRequest& AddPropertyGroups(const char* key, const PropertyGroupRequest& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(key, value); return *this; }


    /**
     * <p>A friendly name for the component type.</p>
     */
    inline const Aws::String& GetComponentTypeName() const{ return m_componentTypeName; }

    /**
     * <p>A friendly name for the component type.</p>
     */
    inline bool ComponentTypeNameHasBeenSet() const { return m_componentTypeNameHasBeenSet; }

    /**
     * <p>A friendly name for the component type.</p>
     */
    inline void SetComponentTypeName(const Aws::String& value) { m_componentTypeNameHasBeenSet = true; m_componentTypeName = value; }

    /**
     * <p>A friendly name for the component type.</p>
     */
    inline void SetComponentTypeName(Aws::String&& value) { m_componentTypeNameHasBeenSet = true; m_componentTypeName = std::move(value); }

    /**
     * <p>A friendly name for the component type.</p>
     */
    inline void SetComponentTypeName(const char* value) { m_componentTypeNameHasBeenSet = true; m_componentTypeName.assign(value); }

    /**
     * <p>A friendly name for the component type.</p>
     */
    inline CreateComponentTypeRequest& WithComponentTypeName(const Aws::String& value) { SetComponentTypeName(value); return *this;}

    /**
     * <p>A friendly name for the component type.</p>
     */
    inline CreateComponentTypeRequest& WithComponentTypeName(Aws::String&& value) { SetComponentTypeName(std::move(value)); return *this;}

    /**
     * <p>A friendly name for the component type.</p>
     */
    inline CreateComponentTypeRequest& WithComponentTypeName(const char* value) { SetComponentTypeName(value); return *this;}

  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    bool m_isSingleton;
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
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
