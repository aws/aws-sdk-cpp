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
    AWS_IOTTWINMAKER_API GetPropertyValueRequest();

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
    inline const Aws::String& GetComponentName() const{ return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }
    inline GetPropertyValueRequest& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}
    inline GetPropertyValueRequest& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}
    inline GetPropertyValueRequest& WithComponentName(const char* value) { SetComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This string specifies the path to the composite component, starting from the
     * top-level component.</p>
     */
    inline const Aws::String& GetComponentPath() const{ return m_componentPath; }
    inline bool ComponentPathHasBeenSet() const { return m_componentPathHasBeenSet; }
    inline void SetComponentPath(const Aws::String& value) { m_componentPathHasBeenSet = true; m_componentPath = value; }
    inline void SetComponentPath(Aws::String&& value) { m_componentPathHasBeenSet = true; m_componentPath = std::move(value); }
    inline void SetComponentPath(const char* value) { m_componentPathHasBeenSet = true; m_componentPath.assign(value); }
    inline GetPropertyValueRequest& WithComponentPath(const Aws::String& value) { SetComponentPath(value); return *this;}
    inline GetPropertyValueRequest& WithComponentPath(Aws::String&& value) { SetComponentPath(std::move(value)); return *this;}
    inline GetPropertyValueRequest& WithComponentPath(const char* value) { SetComponentPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the component type whose property values the operation returns.</p>
     */
    inline const Aws::String& GetComponentTypeId() const{ return m_componentTypeId; }
    inline bool ComponentTypeIdHasBeenSet() const { return m_componentTypeIdHasBeenSet; }
    inline void SetComponentTypeId(const Aws::String& value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId = value; }
    inline void SetComponentTypeId(Aws::String&& value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId = std::move(value); }
    inline void SetComponentTypeId(const char* value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId.assign(value); }
    inline GetPropertyValueRequest& WithComponentTypeId(const Aws::String& value) { SetComponentTypeId(value); return *this;}
    inline GetPropertyValueRequest& WithComponentTypeId(Aws::String&& value) { SetComponentTypeId(std::move(value)); return *this;}
    inline GetPropertyValueRequest& WithComponentTypeId(const char* value) { SetComponentTypeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the entity whose property values the operation returns.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }
    inline GetPropertyValueRequest& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}
    inline GetPropertyValueRequest& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}
    inline GetPropertyValueRequest& WithEntityId(const char* value) { SetEntityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties whose values the operation returns.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelectedProperties() const{ return m_selectedProperties; }
    inline bool SelectedPropertiesHasBeenSet() const { return m_selectedPropertiesHasBeenSet; }
    inline void SetSelectedProperties(const Aws::Vector<Aws::String>& value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties = value; }
    inline void SetSelectedProperties(Aws::Vector<Aws::String>&& value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties = std::move(value); }
    inline GetPropertyValueRequest& WithSelectedProperties(const Aws::Vector<Aws::String>& value) { SetSelectedProperties(value); return *this;}
    inline GetPropertyValueRequest& WithSelectedProperties(Aws::Vector<Aws::String>&& value) { SetSelectedProperties(std::move(value)); return *this;}
    inline GetPropertyValueRequest& AddSelectedProperties(const Aws::String& value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties.push_back(value); return *this; }
    inline GetPropertyValueRequest& AddSelectedProperties(Aws::String&& value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties.push_back(std::move(value)); return *this; }
    inline GetPropertyValueRequest& AddSelectedProperties(const char* value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the workspace whose values the operation returns.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }
    inline GetPropertyValueRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline GetPropertyValueRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline GetPropertyValueRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return at one time. The default is 25.</p>
     * <p>Valid Range: Minimum value of 1. Maximum value of 250.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetPropertyValueRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetPropertyValueRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetPropertyValueRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetPropertyValueRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property group name.</p>
     */
    inline const Aws::String& GetPropertyGroupName() const{ return m_propertyGroupName; }
    inline bool PropertyGroupNameHasBeenSet() const { return m_propertyGroupNameHasBeenSet; }
    inline void SetPropertyGroupName(const Aws::String& value) { m_propertyGroupNameHasBeenSet = true; m_propertyGroupName = value; }
    inline void SetPropertyGroupName(Aws::String&& value) { m_propertyGroupNameHasBeenSet = true; m_propertyGroupName = std::move(value); }
    inline void SetPropertyGroupName(const char* value) { m_propertyGroupNameHasBeenSet = true; m_propertyGroupName.assign(value); }
    inline GetPropertyValueRequest& WithPropertyGroupName(const Aws::String& value) { SetPropertyGroupName(value); return *this;}
    inline GetPropertyValueRequest& WithPropertyGroupName(Aws::String&& value) { SetPropertyGroupName(std::move(value)); return *this;}
    inline GetPropertyValueRequest& WithPropertyGroupName(const char* value) { SetPropertyGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tabular conditions.</p>
     */
    inline const TabularConditions& GetTabularConditions() const{ return m_tabularConditions; }
    inline bool TabularConditionsHasBeenSet() const { return m_tabularConditionsHasBeenSet; }
    inline void SetTabularConditions(const TabularConditions& value) { m_tabularConditionsHasBeenSet = true; m_tabularConditions = value; }
    inline void SetTabularConditions(TabularConditions&& value) { m_tabularConditionsHasBeenSet = true; m_tabularConditions = std::move(value); }
    inline GetPropertyValueRequest& WithTabularConditions(const TabularConditions& value) { SetTabularConditions(value); return *this;}
    inline GetPropertyValueRequest& WithTabularConditions(TabularConditions&& value) { SetTabularConditions(std::move(value)); return *this;}
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

    int m_maxResults;
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
