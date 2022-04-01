﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/IoTTwinMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iottwinmaker/model/FunctionRequest.h>
#include <aws/iottwinmaker/model/PropertyDefinitionRequest.h>
#include <utility>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

  /**
   */
  class AWS_IOTTWINMAKER_API UpdateComponentTypeRequest : public IoTTwinMakerRequest
  {
  public:
    UpdateComponentTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateComponentType"; }

    Aws::String SerializePayload() const override;


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
    inline UpdateComponentTypeRequest& WithComponentTypeId(const Aws::String& value) { SetComponentTypeId(value); return *this;}

    /**
     * <p>The ID of the component type.</p>
     */
    inline UpdateComponentTypeRequest& WithComponentTypeId(Aws::String&& value) { SetComponentTypeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the component type.</p>
     */
    inline UpdateComponentTypeRequest& WithComponentTypeId(const char* value) { SetComponentTypeId(value); return *this;}


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
    inline UpdateComponentTypeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the component type.</p>
     */
    inline UpdateComponentTypeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the component type.</p>
     */
    inline UpdateComponentTypeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies the component type that this component type extends.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExtendsFrom() const{ return m_extendsFrom; }

    /**
     * <p>Specifies the component type that this component type extends.</p>
     */
    inline bool ExtendsFromHasBeenSet() const { return m_extendsFromHasBeenSet; }

    /**
     * <p>Specifies the component type that this component type extends.</p>
     */
    inline void SetExtendsFrom(const Aws::Vector<Aws::String>& value) { m_extendsFromHasBeenSet = true; m_extendsFrom = value; }

    /**
     * <p>Specifies the component type that this component type extends.</p>
     */
    inline void SetExtendsFrom(Aws::Vector<Aws::String>&& value) { m_extendsFromHasBeenSet = true; m_extendsFrom = std::move(value); }

    /**
     * <p>Specifies the component type that this component type extends.</p>
     */
    inline UpdateComponentTypeRequest& WithExtendsFrom(const Aws::Vector<Aws::String>& value) { SetExtendsFrom(value); return *this;}

    /**
     * <p>Specifies the component type that this component type extends.</p>
     */
    inline UpdateComponentTypeRequest& WithExtendsFrom(Aws::Vector<Aws::String>&& value) { SetExtendsFrom(std::move(value)); return *this;}

    /**
     * <p>Specifies the component type that this component type extends.</p>
     */
    inline UpdateComponentTypeRequest& AddExtendsFrom(const Aws::String& value) { m_extendsFromHasBeenSet = true; m_extendsFrom.push_back(value); return *this; }

    /**
     * <p>Specifies the component type that this component type extends.</p>
     */
    inline UpdateComponentTypeRequest& AddExtendsFrom(Aws::String&& value) { m_extendsFromHasBeenSet = true; m_extendsFrom.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the component type that this component type extends.</p>
     */
    inline UpdateComponentTypeRequest& AddExtendsFrom(const char* value) { m_extendsFromHasBeenSet = true; m_extendsFrom.push_back(value); return *this; }


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
    inline UpdateComponentTypeRequest& WithFunctions(const Aws::Map<Aws::String, FunctionRequest>& value) { SetFunctions(value); return *this;}

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline UpdateComponentTypeRequest& WithFunctions(Aws::Map<Aws::String, FunctionRequest>&& value) { SetFunctions(std::move(value)); return *this;}

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline UpdateComponentTypeRequest& AddFunctions(const Aws::String& key, const FunctionRequest& value) { m_functionsHasBeenSet = true; m_functions.emplace(key, value); return *this; }

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline UpdateComponentTypeRequest& AddFunctions(Aws::String&& key, const FunctionRequest& value) { m_functionsHasBeenSet = true; m_functions.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline UpdateComponentTypeRequest& AddFunctions(const Aws::String& key, FunctionRequest&& value) { m_functionsHasBeenSet = true; m_functions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline UpdateComponentTypeRequest& AddFunctions(Aws::String&& key, FunctionRequest&& value) { m_functionsHasBeenSet = true; m_functions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline UpdateComponentTypeRequest& AddFunctions(const char* key, FunctionRequest&& value) { m_functionsHasBeenSet = true; m_functions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline UpdateComponentTypeRequest& AddFunctions(const char* key, const FunctionRequest& value) { m_functionsHasBeenSet = true; m_functions.emplace(key, value); return *this; }


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
    inline UpdateComponentTypeRequest& WithIsSingleton(bool value) { SetIsSingleton(value); return *this;}


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
    inline UpdateComponentTypeRequest& WithPropertyDefinitions(const Aws::Map<Aws::String, PropertyDefinitionRequest>& value) { SetPropertyDefinitions(value); return *this;}

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline UpdateComponentTypeRequest& WithPropertyDefinitions(Aws::Map<Aws::String, PropertyDefinitionRequest>&& value) { SetPropertyDefinitions(std::move(value)); return *this;}

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline UpdateComponentTypeRequest& AddPropertyDefinitions(const Aws::String& key, const PropertyDefinitionRequest& value) { m_propertyDefinitionsHasBeenSet = true; m_propertyDefinitions.emplace(key, value); return *this; }

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline UpdateComponentTypeRequest& AddPropertyDefinitions(Aws::String&& key, const PropertyDefinitionRequest& value) { m_propertyDefinitionsHasBeenSet = true; m_propertyDefinitions.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline UpdateComponentTypeRequest& AddPropertyDefinitions(const Aws::String& key, PropertyDefinitionRequest&& value) { m_propertyDefinitionsHasBeenSet = true; m_propertyDefinitions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline UpdateComponentTypeRequest& AddPropertyDefinitions(Aws::String&& key, PropertyDefinitionRequest&& value) { m_propertyDefinitionsHasBeenSet = true; m_propertyDefinitions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline UpdateComponentTypeRequest& AddPropertyDefinitions(const char* key, PropertyDefinitionRequest&& value) { m_propertyDefinitionsHasBeenSet = true; m_propertyDefinitions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline UpdateComponentTypeRequest& AddPropertyDefinitions(const char* key, const PropertyDefinitionRequest& value) { m_propertyDefinitionsHasBeenSet = true; m_propertyDefinitions.emplace(key, value); return *this; }


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
    inline UpdateComponentTypeRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline UpdateComponentTypeRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline UpdateComponentTypeRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

  private:

    Aws::String m_componentTypeId;
    bool m_componentTypeIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Aws::String> m_extendsFrom;
    bool m_extendsFromHasBeenSet;

    Aws::Map<Aws::String, FunctionRequest> m_functions;
    bool m_functionsHasBeenSet;

    bool m_isSingleton;
    bool m_isSingletonHasBeenSet;

    Aws::Map<Aws::String, PropertyDefinitionRequest> m_propertyDefinitions;
    bool m_propertyDefinitionsHasBeenSet;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
