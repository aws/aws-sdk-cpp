/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/IoTTwinMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iottwinmaker/model/TabularConditions.h>
#include <utility>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

  /**
   */
  class GetPropertyValueRequest : public IoTTwinMakerRequest
  {
  public:
    AWS_IOTTWINMAKER_API GetPropertyValueRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPropertyValue"; }

    AWS_IOTTWINMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the component whose property values the operation returns.</p>
     */
    inline const Aws::String& GetComponentName() const { return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    template<typename ComponentNameT = Aws::String>
    void SetComponentName(ComponentNameT&& value) { m_componentNameHasBeenSet = true; m_componentName = std::forward<ComponentNameT>(value); }
    template<typename ComponentNameT = Aws::String>
    GetPropertyValueRequest& WithComponentName(ComponentNameT&& value) { SetComponentName(std::forward<ComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This string specifies the path to the composite component, starting from the
     * top-level component.</p>
     */
    inline const Aws::String& GetComponentPath() const { return m_componentPath; }
    inline bool ComponentPathHasBeenSet() const { return m_componentPathHasBeenSet; }
    template<typename ComponentPathT = Aws::String>
    void SetComponentPath(ComponentPathT&& value) { m_componentPathHasBeenSet = true; m_componentPath = std::forward<ComponentPathT>(value); }
    template<typename ComponentPathT = Aws::String>
    GetPropertyValueRequest& WithComponentPath(ComponentPathT&& value) { SetComponentPath(std::forward<ComponentPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the component type whose property values the operation returns.</p>
     */
    inline const Aws::String& GetComponentTypeId() const { return m_componentTypeId; }
    inline bool ComponentTypeIdHasBeenSet() const { return m_componentTypeIdHasBeenSet; }
    template<typename ComponentTypeIdT = Aws::String>
    void SetComponentTypeId(ComponentTypeIdT&& value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId = std::forward<ComponentTypeIdT>(value); }
    template<typename ComponentTypeIdT = Aws::String>
    GetPropertyValueRequest& WithComponentTypeId(ComponentTypeIdT&& value) { SetComponentTypeId(std::forward<ComponentTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the entity whose property values the operation returns.</p>
     */
    inline const Aws::String& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = Aws::String>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = Aws::String>
    GetPropertyValueRequest& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties whose values the operation returns.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelectedProperties() const { return m_selectedProperties; }
    inline bool SelectedPropertiesHasBeenSet() const { return m_selectedPropertiesHasBeenSet; }
    template<typename SelectedPropertiesT = Aws::Vector<Aws::String>>
    void SetSelectedProperties(SelectedPropertiesT&& value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties = std::forward<SelectedPropertiesT>(value); }
    template<typename SelectedPropertiesT = Aws::Vector<Aws::String>>
    GetPropertyValueRequest& WithSelectedProperties(SelectedPropertiesT&& value) { SetSelectedProperties(std::forward<SelectedPropertiesT>(value)); return *this;}
    template<typename SelectedPropertiesT = Aws::String>
    GetPropertyValueRequest& AddSelectedProperties(SelectedPropertiesT&& value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties.emplace_back(std::forward<SelectedPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the workspace whose values the operation returns.</p>
     */
    inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    template<typename WorkspaceIdT = Aws::String>
    void SetWorkspaceId(WorkspaceIdT&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::forward<WorkspaceIdT>(value); }
    template<typename WorkspaceIdT = Aws::String>
    GetPropertyValueRequest& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return at one time. The default is 25.</p>
     * <p>Valid Range: Minimum value of 1. Maximum value of 250.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetPropertyValueRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetPropertyValueRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property group name.</p>
     */
    inline const Aws::String& GetPropertyGroupName() const { return m_propertyGroupName; }
    inline bool PropertyGroupNameHasBeenSet() const { return m_propertyGroupNameHasBeenSet; }
    template<typename PropertyGroupNameT = Aws::String>
    void SetPropertyGroupName(PropertyGroupNameT&& value) { m_propertyGroupNameHasBeenSet = true; m_propertyGroupName = std::forward<PropertyGroupNameT>(value); }
    template<typename PropertyGroupNameT = Aws::String>
    GetPropertyValueRequest& WithPropertyGroupName(PropertyGroupNameT&& value) { SetPropertyGroupName(std::forward<PropertyGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tabular conditions.</p>
     */
    inline const TabularConditions& GetTabularConditions() const { return m_tabularConditions; }
    inline bool TabularConditionsHasBeenSet() const { return m_tabularConditionsHasBeenSet; }
    template<typename TabularConditionsT = TabularConditions>
    void SetTabularConditions(TabularConditionsT&& value) { m_tabularConditionsHasBeenSet = true; m_tabularConditions = std::forward<TabularConditionsT>(value); }
    template<typename TabularConditionsT = TabularConditions>
    GetPropertyValueRequest& WithTabularConditions(TabularConditionsT&& value) { SetTabularConditions(std::forward<TabularConditionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_componentPath;
    bool m_componentPathHasBeenSet = false;

    Aws::String m_componentTypeId;
    bool m_componentTypeIdHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectedProperties;
    bool m_selectedPropertiesHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_propertyGroupName;
    bool m_propertyGroupNameHasBeenSet = false;

    TabularConditions m_tabularConditions;
    bool m_tabularConditionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
