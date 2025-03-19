/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iottwinmaker/model/Status.h>
#include <aws/iottwinmaker/model/PropertyDefinitionResponse.h>
#include <aws/iottwinmaker/model/FunctionResponse.h>
#include <aws/iottwinmaker/model/PropertyGroupResponse.h>
#include <aws/iottwinmaker/model/CompositeComponentTypeResponse.h>
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
  class GetComponentTypeResult
  {
  public:
    AWS_IOTTWINMAKER_API GetComponentTypeResult() = default;
    AWS_IOTTWINMAKER_API GetComponentTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API GetComponentTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
    template<typename WorkspaceIdT = Aws::String>
    void SetWorkspaceId(WorkspaceIdT&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::forward<WorkspaceIdT>(value); }
    template<typename WorkspaceIdT = Aws::String>
    GetComponentTypeResult& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that specifies whether an entity can have more than one
     * component of this type.</p>
     */
    inline bool GetIsSingleton() const { return m_isSingleton; }
    inline void SetIsSingleton(bool value) { m_isSingletonHasBeenSet = true; m_isSingleton = value; }
    inline GetComponentTypeResult& WithIsSingleton(bool value) { SetIsSingleton(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the component type.</p>
     */
    inline const Aws::String& GetComponentTypeId() const { return m_componentTypeId; }
    template<typename ComponentTypeIdT = Aws::String>
    void SetComponentTypeId(ComponentTypeIdT&& value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId = std::forward<ComponentTypeIdT>(value); }
    template<typename ComponentTypeIdT = Aws::String>
    GetComponentTypeResult& WithComponentTypeId(ComponentTypeIdT&& value) { SetComponentTypeId(std::forward<ComponentTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the component type.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetComponentTypeResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, PropertyDefinitionResponse>& GetPropertyDefinitions() const { return m_propertyDefinitions; }
    template<typename PropertyDefinitionsT = Aws::Map<Aws::String, PropertyDefinitionResponse>>
    void SetPropertyDefinitions(PropertyDefinitionsT&& value) { m_propertyDefinitionsHasBeenSet = true; m_propertyDefinitions = std::forward<PropertyDefinitionsT>(value); }
    template<typename PropertyDefinitionsT = Aws::Map<Aws::String, PropertyDefinitionResponse>>
    GetComponentTypeResult& WithPropertyDefinitions(PropertyDefinitionsT&& value) { SetPropertyDefinitions(std::forward<PropertyDefinitionsT>(value)); return *this;}
    template<typename PropertyDefinitionsKeyT = Aws::String, typename PropertyDefinitionsValueT = PropertyDefinitionResponse>
    GetComponentTypeResult& AddPropertyDefinitions(PropertyDefinitionsKeyT&& key, PropertyDefinitionsValueT&& value) {
      m_propertyDefinitionsHasBeenSet = true; m_propertyDefinitions.emplace(std::forward<PropertyDefinitionsKeyT>(key), std::forward<PropertyDefinitionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name of the parent component type that this component type extends.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExtendsFrom() const { return m_extendsFrom; }
    template<typename ExtendsFromT = Aws::Vector<Aws::String>>
    void SetExtendsFrom(ExtendsFromT&& value) { m_extendsFromHasBeenSet = true; m_extendsFrom = std::forward<ExtendsFromT>(value); }
    template<typename ExtendsFromT = Aws::Vector<Aws::String>>
    GetComponentTypeResult& WithExtendsFrom(ExtendsFromT&& value) { SetExtendsFrom(std::forward<ExtendsFromT>(value)); return *this;}
    template<typename ExtendsFromT = Aws::String>
    GetComponentTypeResult& AddExtendsFrom(ExtendsFromT&& value) { m_extendsFromHasBeenSet = true; m_extendsFrom.emplace_back(std::forward<ExtendsFromT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that maps strings to the functions in the component type. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, FunctionResponse>& GetFunctions() const { return m_functions; }
    template<typename FunctionsT = Aws::Map<Aws::String, FunctionResponse>>
    void SetFunctions(FunctionsT&& value) { m_functionsHasBeenSet = true; m_functions = std::forward<FunctionsT>(value); }
    template<typename FunctionsT = Aws::Map<Aws::String, FunctionResponse>>
    GetComponentTypeResult& WithFunctions(FunctionsT&& value) { SetFunctions(std::forward<FunctionsT>(value)); return *this;}
    template<typename FunctionsKeyT = Aws::String, typename FunctionsValueT = FunctionResponse>
    GetComponentTypeResult& AddFunctions(FunctionsKeyT&& key, FunctionsValueT&& value) {
      m_functionsHasBeenSet = true; m_functions.emplace(std::forward<FunctionsKeyT>(key), std::forward<FunctionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The date and time when the component type was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    GetComponentTypeResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the component was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const { return m_updateDateTime; }
    template<typename UpdateDateTimeT = Aws::Utils::DateTime>
    void SetUpdateDateTime(UpdateDateTimeT&& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = std::forward<UpdateDateTimeT>(value); }
    template<typename UpdateDateTimeT = Aws::Utils::DateTime>
    GetComponentTypeResult& WithUpdateDateTime(UpdateDateTimeT&& value) { SetUpdateDateTime(std::forward<UpdateDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the component type.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetComponentTypeResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that specifies whether the component type is abstract.</p>
     */
    inline bool GetIsAbstract() const { return m_isAbstract; }
    inline void SetIsAbstract(bool value) { m_isAbstractHasBeenSet = true; m_isAbstract = value; }
    inline GetComponentTypeResult& WithIsAbstract(bool value) { SetIsAbstract(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that specifies whether the component type has a schema
     * initializer and that the schema initializer has run.</p>
     */
    inline bool GetIsSchemaInitialized() const { return m_isSchemaInitialized; }
    inline void SetIsSchemaInitialized(bool value) { m_isSchemaInitializedHasBeenSet = true; m_isSchemaInitialized = value; }
    inline GetComponentTypeResult& WithIsSchemaInitialized(bool value) { SetIsSchemaInitialized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the component type.</p>
     */
    inline const Status& GetStatus() const { return m_status; }
    template<typename StatusT = Status>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Status>
    GetComponentTypeResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return at one time. The default is 25.</p>
     * <p>Valid Range: Minimum value of 1. Maximum value of 250.</p>
     */
    inline const Aws::Map<Aws::String, PropertyGroupResponse>& GetPropertyGroups() const { return m_propertyGroups; }
    template<typename PropertyGroupsT = Aws::Map<Aws::String, PropertyGroupResponse>>
    void SetPropertyGroups(PropertyGroupsT&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups = std::forward<PropertyGroupsT>(value); }
    template<typename PropertyGroupsT = Aws::Map<Aws::String, PropertyGroupResponse>>
    GetComponentTypeResult& WithPropertyGroups(PropertyGroupsT&& value) { SetPropertyGroups(std::forward<PropertyGroupsT>(value)); return *this;}
    template<typename PropertyGroupsKeyT = Aws::String, typename PropertyGroupsValueT = PropertyGroupResponse>
    GetComponentTypeResult& AddPropertyGroups(PropertyGroupsKeyT&& key, PropertyGroupsValueT&& value) {
      m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(std::forward<PropertyGroupsKeyT>(key), std::forward<PropertyGroupsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The syncSource of the SyncJob, if this entity was created by a SyncJob.</p>
     */
    inline const Aws::String& GetSyncSource() const { return m_syncSource; }
    template<typename SyncSourceT = Aws::String>
    void SetSyncSource(SyncSourceT&& value) { m_syncSourceHasBeenSet = true; m_syncSource = std::forward<SyncSourceT>(value); }
    template<typename SyncSourceT = Aws::String>
    GetComponentTypeResult& WithSyncSource(SyncSourceT&& value) { SetSyncSource(std::forward<SyncSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The component type name.</p>
     */
    inline const Aws::String& GetComponentTypeName() const { return m_componentTypeName; }
    template<typename ComponentTypeNameT = Aws::String>
    void SetComponentTypeName(ComponentTypeNameT&& value) { m_componentTypeNameHasBeenSet = true; m_componentTypeName = std::forward<ComponentTypeNameT>(value); }
    template<typename ComponentTypeNameT = Aws::String>
    GetComponentTypeResult& WithComponentTypeName(ComponentTypeNameT&& value) { SetComponentTypeName(std::forward<ComponentTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is an object that maps strings to <code>compositeComponentTypes</code>
     * of the <code>componentType</code>. <code>CompositeComponentType</code> is
     * referenced by <code>componentTypeId</code>.</p>
     */
    inline const Aws::Map<Aws::String, CompositeComponentTypeResponse>& GetCompositeComponentTypes() const { return m_compositeComponentTypes; }
    template<typename CompositeComponentTypesT = Aws::Map<Aws::String, CompositeComponentTypeResponse>>
    void SetCompositeComponentTypes(CompositeComponentTypesT&& value) { m_compositeComponentTypesHasBeenSet = true; m_compositeComponentTypes = std::forward<CompositeComponentTypesT>(value); }
    template<typename CompositeComponentTypesT = Aws::Map<Aws::String, CompositeComponentTypeResponse>>
    GetComponentTypeResult& WithCompositeComponentTypes(CompositeComponentTypesT&& value) { SetCompositeComponentTypes(std::forward<CompositeComponentTypesT>(value)); return *this;}
    template<typename CompositeComponentTypesKeyT = Aws::String, typename CompositeComponentTypesValueT = CompositeComponentTypeResponse>
    GetComponentTypeResult& AddCompositeComponentTypes(CompositeComponentTypesKeyT&& key, CompositeComponentTypesValueT&& value) {
      m_compositeComponentTypesHasBeenSet = true; m_compositeComponentTypes.emplace(std::forward<CompositeComponentTypesKeyT>(key), std::forward<CompositeComponentTypesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetComponentTypeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::Map<Aws::String, PropertyDefinitionResponse> m_propertyDefinitions;
    bool m_propertyDefinitionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_extendsFrom;
    bool m_extendsFromHasBeenSet = false;

    Aws::Map<Aws::String, FunctionResponse> m_functions;
    bool m_functionsHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateDateTime{};
    bool m_updateDateTimeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    bool m_isAbstract{false};
    bool m_isAbstractHasBeenSet = false;

    bool m_isSchemaInitialized{false};
    bool m_isSchemaInitializedHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, PropertyGroupResponse> m_propertyGroups;
    bool m_propertyGroupsHasBeenSet = false;

    Aws::String m_syncSource;
    bool m_syncSourceHasBeenSet = false;

    Aws::String m_componentTypeName;
    bool m_componentTypeNameHasBeenSet = false;

    Aws::Map<Aws::String, CompositeComponentTypeResponse> m_compositeComponentTypes;
    bool m_compositeComponentTypesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
