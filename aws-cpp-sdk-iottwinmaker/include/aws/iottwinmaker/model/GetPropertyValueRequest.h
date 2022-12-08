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


    /**
     * <p>The name of the component whose property values the operation returns.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }

    /**
     * <p>The name of the component whose property values the operation returns.</p>
     */
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }

    /**
     * <p>The name of the component whose property values the operation returns.</p>
     */
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }

    /**
     * <p>The name of the component whose property values the operation returns.</p>
     */
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }

    /**
     * <p>The name of the component whose property values the operation returns.</p>
     */
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }

    /**
     * <p>The name of the component whose property values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}

    /**
     * <p>The name of the component whose property values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the component whose property values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithComponentName(const char* value) { SetComponentName(value); return *this;}


    /**
     * <p>The ID of the component type whose property values the operation returns.</p>
     */
    inline const Aws::String& GetComponentTypeId() const{ return m_componentTypeId; }

    /**
     * <p>The ID of the component type whose property values the operation returns.</p>
     */
    inline bool ComponentTypeIdHasBeenSet() const { return m_componentTypeIdHasBeenSet; }

    /**
     * <p>The ID of the component type whose property values the operation returns.</p>
     */
    inline void SetComponentTypeId(const Aws::String& value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId = value; }

    /**
     * <p>The ID of the component type whose property values the operation returns.</p>
     */
    inline void SetComponentTypeId(Aws::String&& value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId = std::move(value); }

    /**
     * <p>The ID of the component type whose property values the operation returns.</p>
     */
    inline void SetComponentTypeId(const char* value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId.assign(value); }

    /**
     * <p>The ID of the component type whose property values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithComponentTypeId(const Aws::String& value) { SetComponentTypeId(value); return *this;}

    /**
     * <p>The ID of the component type whose property values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithComponentTypeId(Aws::String&& value) { SetComponentTypeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the component type whose property values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithComponentTypeId(const char* value) { SetComponentTypeId(value); return *this;}


    /**
     * <p>The ID of the entity whose property values the operation returns.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The ID of the entity whose property values the operation returns.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The ID of the entity whose property values the operation returns.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The ID of the entity whose property values the operation returns.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The ID of the entity whose property values the operation returns.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The ID of the entity whose property values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The ID of the entity whose property values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The ID of the entity whose property values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>The properties whose values the operation returns.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelectedProperties() const{ return m_selectedProperties; }

    /**
     * <p>The properties whose values the operation returns.</p>
     */
    inline bool SelectedPropertiesHasBeenSet() const { return m_selectedPropertiesHasBeenSet; }

    /**
     * <p>The properties whose values the operation returns.</p>
     */
    inline void SetSelectedProperties(const Aws::Vector<Aws::String>& value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties = value; }

    /**
     * <p>The properties whose values the operation returns.</p>
     */
    inline void SetSelectedProperties(Aws::Vector<Aws::String>&& value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties = std::move(value); }

    /**
     * <p>The properties whose values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithSelectedProperties(const Aws::Vector<Aws::String>& value) { SetSelectedProperties(value); return *this;}

    /**
     * <p>The properties whose values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithSelectedProperties(Aws::Vector<Aws::String>&& value) { SetSelectedProperties(std::move(value)); return *this;}

    /**
     * <p>The properties whose values the operation returns.</p>
     */
    inline GetPropertyValueRequest& AddSelectedProperties(const Aws::String& value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties.push_back(value); return *this; }

    /**
     * <p>The properties whose values the operation returns.</p>
     */
    inline GetPropertyValueRequest& AddSelectedProperties(Aws::String&& value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties.push_back(std::move(value)); return *this; }

    /**
     * <p>The properties whose values the operation returns.</p>
     */
    inline GetPropertyValueRequest& AddSelectedProperties(const char* value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties.push_back(value); return *this; }


    /**
     * <p>The ID of the workspace whose values the operation returns.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace whose values the operation returns.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The ID of the workspace whose values the operation returns.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the workspace whose values the operation returns.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace whose values the operation returns.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace whose values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace whose values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace whose values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}


    /**
     * <p>The maximum number of results to return at one time. The default is 25.</p>
     * <p>Valid Range: Minimum value of 1. Maximum value of 250.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return at one time. The default is 25.</p>
     * <p>Valid Range: Minimum value of 1. Maximum value of 250.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return at one time. The default is 25.</p>
     * <p>Valid Range: Minimum value of 1. Maximum value of 250.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return at one time. The default is 25.</p>
     * <p>Valid Range: Minimum value of 1. Maximum value of 250.</p>
     */
    inline GetPropertyValueRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline GetPropertyValueRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline GetPropertyValueRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline GetPropertyValueRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The property group name.</p>
     */
    inline const Aws::String& GetPropertyGroupName() const{ return m_propertyGroupName; }

    /**
     * <p>The property group name.</p>
     */
    inline bool PropertyGroupNameHasBeenSet() const { return m_propertyGroupNameHasBeenSet; }

    /**
     * <p>The property group name.</p>
     */
    inline void SetPropertyGroupName(const Aws::String& value) { m_propertyGroupNameHasBeenSet = true; m_propertyGroupName = value; }

    /**
     * <p>The property group name.</p>
     */
    inline void SetPropertyGroupName(Aws::String&& value) { m_propertyGroupNameHasBeenSet = true; m_propertyGroupName = std::move(value); }

    /**
     * <p>The property group name.</p>
     */
    inline void SetPropertyGroupName(const char* value) { m_propertyGroupNameHasBeenSet = true; m_propertyGroupName.assign(value); }

    /**
     * <p>The property group name.</p>
     */
    inline GetPropertyValueRequest& WithPropertyGroupName(const Aws::String& value) { SetPropertyGroupName(value); return *this;}

    /**
     * <p>The property group name.</p>
     */
    inline GetPropertyValueRequest& WithPropertyGroupName(Aws::String&& value) { SetPropertyGroupName(std::move(value)); return *this;}

    /**
     * <p>The property group name.</p>
     */
    inline GetPropertyValueRequest& WithPropertyGroupName(const char* value) { SetPropertyGroupName(value); return *this;}


    /**
     * <p>The tabular conditions.</p>
     */
    inline const TabularConditions& GetTabularConditions() const{ return m_tabularConditions; }

    /**
     * <p>The tabular conditions.</p>
     */
    inline bool TabularConditionsHasBeenSet() const { return m_tabularConditionsHasBeenSet; }

    /**
     * <p>The tabular conditions.</p>
     */
    inline void SetTabularConditions(const TabularConditions& value) { m_tabularConditionsHasBeenSet = true; m_tabularConditions = value; }

    /**
     * <p>The tabular conditions.</p>
     */
    inline void SetTabularConditions(TabularConditions&& value) { m_tabularConditionsHasBeenSet = true; m_tabularConditions = std::move(value); }

    /**
     * <p>The tabular conditions.</p>
     */
    inline GetPropertyValueRequest& WithTabularConditions(const TabularConditions& value) { SetTabularConditions(value); return *this;}

    /**
     * <p>The tabular conditions.</p>
     */
    inline GetPropertyValueRequest& WithTabularConditions(TabularConditions&& value) { SetTabularConditions(std::move(value)); return *this;}

  private:

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

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
