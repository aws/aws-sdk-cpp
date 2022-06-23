/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iottwinmaker/model/Status.h>
#include <aws/iottwinmaker/model/FunctionResponse.h>
#include <aws/iottwinmaker/model/PropertyDefinitionResponse.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTTwinMaker
{
namespace Model
{
  class AWS_IOTTWINMAKER_API GetComponentTypeResult
  {
  public:
    GetComponentTypeResult();
    GetComponentTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetComponentTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the component type.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the component type.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the component type.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the component type.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the component type.</p>
     */
    inline GetComponentTypeResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the component type.</p>
     */
    inline GetComponentTypeResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the component type.</p>
     */
    inline GetComponentTypeResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID of the component type.</p>
     */
    inline const Aws::String& GetComponentTypeId() const{ return m_componentTypeId; }

    /**
     * <p>The ID of the component type.</p>
     */
    inline void SetComponentTypeId(const Aws::String& value) { m_componentTypeId = value; }

    /**
     * <p>The ID of the component type.</p>
     */
    inline void SetComponentTypeId(Aws::String&& value) { m_componentTypeId = std::move(value); }

    /**
     * <p>The ID of the component type.</p>
     */
    inline void SetComponentTypeId(const char* value) { m_componentTypeId.assign(value); }

    /**
     * <p>The ID of the component type.</p>
     */
    inline GetComponentTypeResult& WithComponentTypeId(const Aws::String& value) { SetComponentTypeId(value); return *this;}

    /**
     * <p>The ID of the component type.</p>
     */
    inline GetComponentTypeResult& WithComponentTypeId(Aws::String&& value) { SetComponentTypeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the component type.</p>
     */
    inline GetComponentTypeResult& WithComponentTypeId(const char* value) { SetComponentTypeId(value); return *this;}


    /**
     * <p>The date and time when the component type was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time when the component type was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>The date and time when the component type was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time when the component type was created.</p>
     */
    inline GetComponentTypeResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time when the component type was created.</p>
     */
    inline GetComponentTypeResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The description of the component type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the component type.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the component type.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the component type.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the component type.</p>
     */
    inline GetComponentTypeResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the component type.</p>
     */
    inline GetComponentTypeResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the component type.</p>
     */
    inline GetComponentTypeResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the parent component type that this component type extends.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExtendsFrom() const{ return m_extendsFrom; }

    /**
     * <p>The name of the parent component type that this component type extends.</p>
     */
    inline void SetExtendsFrom(const Aws::Vector<Aws::String>& value) { m_extendsFrom = value; }

    /**
     * <p>The name of the parent component type that this component type extends.</p>
     */
    inline void SetExtendsFrom(Aws::Vector<Aws::String>&& value) { m_extendsFrom = std::move(value); }

    /**
     * <p>The name of the parent component type that this component type extends.</p>
     */
    inline GetComponentTypeResult& WithExtendsFrom(const Aws::Vector<Aws::String>& value) { SetExtendsFrom(value); return *this;}

    /**
     * <p>The name of the parent component type that this component type extends.</p>
     */
    inline GetComponentTypeResult& WithExtendsFrom(Aws::Vector<Aws::String>&& value) { SetExtendsFrom(std::move(value)); return *this;}

    /**
     * <p>The name of the parent component type that this component type extends.</p>
     */
    inline GetComponentTypeResult& AddExtendsFrom(const Aws::String& value) { m_extendsFrom.push_back(value); return *this; }

    /**
     * <p>The name of the parent component type that this component type extends.</p>
     */
    inline GetComponentTypeResult& AddExtendsFrom(Aws::String&& value) { m_extendsFrom.push_back(std::move(value)); return *this; }

    /**
     * <p>The name of the parent component type that this component type extends.</p>
     */
    inline GetComponentTypeResult& AddExtendsFrom(const char* value) { m_extendsFrom.push_back(value); return *this; }


    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, FunctionResponse>& GetFunctions() const{ return m_functions; }

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline void SetFunctions(const Aws::Map<Aws::String, FunctionResponse>& value) { m_functions = value; }

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline void SetFunctions(Aws::Map<Aws::String, FunctionResponse>&& value) { m_functions = std::move(value); }

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline GetComponentTypeResult& WithFunctions(const Aws::Map<Aws::String, FunctionResponse>& value) { SetFunctions(value); return *this;}

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline GetComponentTypeResult& WithFunctions(Aws::Map<Aws::String, FunctionResponse>&& value) { SetFunctions(std::move(value)); return *this;}

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline GetComponentTypeResult& AddFunctions(const Aws::String& key, const FunctionResponse& value) { m_functions.emplace(key, value); return *this; }

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline GetComponentTypeResult& AddFunctions(Aws::String&& key, const FunctionResponse& value) { m_functions.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline GetComponentTypeResult& AddFunctions(const Aws::String& key, FunctionResponse&& value) { m_functions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline GetComponentTypeResult& AddFunctions(Aws::String&& key, FunctionResponse&& value) { m_functions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline GetComponentTypeResult& AddFunctions(const char* key, FunctionResponse&& value) { m_functions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline GetComponentTypeResult& AddFunctions(const char* key, const FunctionResponse& value) { m_functions.emplace(key, value); return *this; }


    /**
     * <p>A Boolean value that specifies whether the component type is abstract.</p>
     */
    inline bool GetIsAbstract() const{ return m_isAbstract; }

    /**
     * <p>A Boolean value that specifies whether the component type is abstract.</p>
     */
    inline void SetIsAbstract(bool value) { m_isAbstract = value; }

    /**
     * <p>A Boolean value that specifies whether the component type is abstract.</p>
     */
    inline GetComponentTypeResult& WithIsAbstract(bool value) { SetIsAbstract(value); return *this;}


    /**
     * <p>A Boolean value that specifies whether the component type has a schema
     * initializer and that the schema initializer has run.</p>
     */
    inline bool GetIsSchemaInitialized() const{ return m_isSchemaInitialized; }

    /**
     * <p>A Boolean value that specifies whether the component type has a schema
     * initializer and that the schema initializer has run.</p>
     */
    inline void SetIsSchemaInitialized(bool value) { m_isSchemaInitialized = value; }

    /**
     * <p>A Boolean value that specifies whether the component type has a schema
     * initializer and that the schema initializer has run.</p>
     */
    inline GetComponentTypeResult& WithIsSchemaInitialized(bool value) { SetIsSchemaInitialized(value); return *this;}


    /**
     * <p>A Boolean value that specifies whether an entity can have more than one
     * component of this type.</p>
     */
    inline bool GetIsSingleton() const{ return m_isSingleton; }

    /**
     * <p>A Boolean value that specifies whether an entity can have more than one
     * component of this type.</p>
     */
    inline void SetIsSingleton(bool value) { m_isSingleton = value; }

    /**
     * <p>A Boolean value that specifies whether an entity can have more than one
     * component of this type.</p>
     */
    inline GetComponentTypeResult& WithIsSingleton(bool value) { SetIsSingleton(value); return *this;}


    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, PropertyDefinitionResponse>& GetPropertyDefinitions() const{ return m_propertyDefinitions; }

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline void SetPropertyDefinitions(const Aws::Map<Aws::String, PropertyDefinitionResponse>& value) { m_propertyDefinitions = value; }

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline void SetPropertyDefinitions(Aws::Map<Aws::String, PropertyDefinitionResponse>&& value) { m_propertyDefinitions = std::move(value); }

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline GetComponentTypeResult& WithPropertyDefinitions(const Aws::Map<Aws::String, PropertyDefinitionResponse>& value) { SetPropertyDefinitions(value); return *this;}

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline GetComponentTypeResult& WithPropertyDefinitions(Aws::Map<Aws::String, PropertyDefinitionResponse>&& value) { SetPropertyDefinitions(std::move(value)); return *this;}

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline GetComponentTypeResult& AddPropertyDefinitions(const Aws::String& key, const PropertyDefinitionResponse& value) { m_propertyDefinitions.emplace(key, value); return *this; }

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline GetComponentTypeResult& AddPropertyDefinitions(Aws::String&& key, const PropertyDefinitionResponse& value) { m_propertyDefinitions.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline GetComponentTypeResult& AddPropertyDefinitions(const Aws::String& key, PropertyDefinitionResponse&& value) { m_propertyDefinitions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline GetComponentTypeResult& AddPropertyDefinitions(Aws::String&& key, PropertyDefinitionResponse&& value) { m_propertyDefinitions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline GetComponentTypeResult& AddPropertyDefinitions(const char* key, PropertyDefinitionResponse&& value) { m_propertyDefinitions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline GetComponentTypeResult& AddPropertyDefinitions(const char* key, const PropertyDefinitionResponse& value) { m_propertyDefinitions.emplace(key, value); return *this; }


    /**
     * <p>The current status of the component type.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the component type.</p>
     */
    inline void SetStatus(const Status& value) { m_status = value; }

    /**
     * <p>The current status of the component type.</p>
     */
    inline void SetStatus(Status&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the component type.</p>
     */
    inline GetComponentTypeResult& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the component type.</p>
     */
    inline GetComponentTypeResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time when the component was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const{ return m_updateDateTime; }

    /**
     * <p>The date and time when the component was last updated.</p>
     */
    inline void SetUpdateDateTime(const Aws::Utils::DateTime& value) { m_updateDateTime = value; }

    /**
     * <p>The date and time when the component was last updated.</p>
     */
    inline void SetUpdateDateTime(Aws::Utils::DateTime&& value) { m_updateDateTime = std::move(value); }

    /**
     * <p>The date and time when the component was last updated.</p>
     */
    inline GetComponentTypeResult& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}

    /**
     * <p>The date and time when the component was last updated.</p>
     */
    inline GetComponentTypeResult& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}


    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceId = value; }

    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline GetComponentTypeResult& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline GetComponentTypeResult& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline GetComponentTypeResult& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_componentTypeId;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::String m_description;

    Aws::Vector<Aws::String> m_extendsFrom;

    Aws::Map<Aws::String, FunctionResponse> m_functions;

    bool m_isAbstract;

    bool m_isSchemaInitialized;

    bool m_isSingleton;

    Aws::Map<Aws::String, PropertyDefinitionResponse> m_propertyDefinitions;

    Status m_status;

    Aws::Utils::DateTime m_updateDateTime;

    Aws::String m_workspaceId;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
