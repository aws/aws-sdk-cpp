﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/IoTTwinMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iottwinmaker/model/InterpolationParameters.h>
#include <aws/iottwinmaker/model/OrderByTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iottwinmaker/model/PropertyFilter.h>
#include <utility>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

  /**
   */
  class AWS_IOTTWINMAKER_API GetPropertyValueHistoryRequest : public IoTTwinMakerRequest
  {
  public:
    GetPropertyValueHistoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPropertyValueHistory"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }

    /**
     * <p>The name of the component.</p>
     */
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline GetPropertyValueHistoryRequest& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline GetPropertyValueHistoryRequest& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline GetPropertyValueHistoryRequest& WithComponentName(const char* value) { SetComponentName(value); return *this;}


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
    inline GetPropertyValueHistoryRequest& WithComponentTypeId(const Aws::String& value) { SetComponentTypeId(value); return *this;}

    /**
     * <p>The ID of the component type.</p>
     */
    inline GetPropertyValueHistoryRequest& WithComponentTypeId(Aws::String&& value) { SetComponentTypeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the component type.</p>
     */
    inline GetPropertyValueHistoryRequest& WithComponentTypeId(const char* value) { SetComponentTypeId(value); return *this;}


    /**
     * <p>The date and time of the latest property value to return.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateTime() const{ return m_endDateTime; }

    /**
     * <p>The date and time of the latest property value to return.</p>
     */
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }

    /**
     * <p>The date and time of the latest property value to return.</p>
     */
    inline void SetEndDateTime(const Aws::Utils::DateTime& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }

    /**
     * <p>The date and time of the latest property value to return.</p>
     */
    inline void SetEndDateTime(Aws::Utils::DateTime&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::move(value); }

    /**
     * <p>The date and time of the latest property value to return.</p>
     */
    inline GetPropertyValueHistoryRequest& WithEndDateTime(const Aws::Utils::DateTime& value) { SetEndDateTime(value); return *this;}

    /**
     * <p>The date and time of the latest property value to return.</p>
     */
    inline GetPropertyValueHistoryRequest& WithEndDateTime(Aws::Utils::DateTime&& value) { SetEndDateTime(std::move(value)); return *this;}


    /**
     * <p>The ID of the entity.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The ID of the entity.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The ID of the entity.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The ID of the entity.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The ID of the entity.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The ID of the entity.</p>
     */
    inline GetPropertyValueHistoryRequest& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The ID of the entity.</p>
     */
    inline GetPropertyValueHistoryRequest& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The ID of the entity.</p>
     */
    inline GetPropertyValueHistoryRequest& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>An object that specifies the interpolation type and the interval over which
     * to interpolate data.</p>
     */
    inline const InterpolationParameters& GetInterpolation() const{ return m_interpolation; }

    /**
     * <p>An object that specifies the interpolation type and the interval over which
     * to interpolate data.</p>
     */
    inline bool InterpolationHasBeenSet() const { return m_interpolationHasBeenSet; }

    /**
     * <p>An object that specifies the interpolation type and the interval over which
     * to interpolate data.</p>
     */
    inline void SetInterpolation(const InterpolationParameters& value) { m_interpolationHasBeenSet = true; m_interpolation = value; }

    /**
     * <p>An object that specifies the interpolation type and the interval over which
     * to interpolate data.</p>
     */
    inline void SetInterpolation(InterpolationParameters&& value) { m_interpolationHasBeenSet = true; m_interpolation = std::move(value); }

    /**
     * <p>An object that specifies the interpolation type and the interval over which
     * to interpolate data.</p>
     */
    inline GetPropertyValueHistoryRequest& WithInterpolation(const InterpolationParameters& value) { SetInterpolation(value); return *this;}

    /**
     * <p>An object that specifies the interpolation type and the interval over which
     * to interpolate data.</p>
     */
    inline GetPropertyValueHistoryRequest& WithInterpolation(InterpolationParameters&& value) { SetInterpolation(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline GetPropertyValueHistoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline GetPropertyValueHistoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline GetPropertyValueHistoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline GetPropertyValueHistoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The time direction to use in the result order.</p>
     */
    inline const OrderByTime& GetOrderByTime() const{ return m_orderByTime; }

    /**
     * <p>The time direction to use in the result order.</p>
     */
    inline bool OrderByTimeHasBeenSet() const { return m_orderByTimeHasBeenSet; }

    /**
     * <p>The time direction to use in the result order.</p>
     */
    inline void SetOrderByTime(const OrderByTime& value) { m_orderByTimeHasBeenSet = true; m_orderByTime = value; }

    /**
     * <p>The time direction to use in the result order.</p>
     */
    inline void SetOrderByTime(OrderByTime&& value) { m_orderByTimeHasBeenSet = true; m_orderByTime = std::move(value); }

    /**
     * <p>The time direction to use in the result order.</p>
     */
    inline GetPropertyValueHistoryRequest& WithOrderByTime(const OrderByTime& value) { SetOrderByTime(value); return *this;}

    /**
     * <p>The time direction to use in the result order.</p>
     */
    inline GetPropertyValueHistoryRequest& WithOrderByTime(OrderByTime&& value) { SetOrderByTime(std::move(value)); return *this;}


    /**
     * <p>A list of objects that filter the property value history request.</p>
     */
    inline const Aws::Vector<PropertyFilter>& GetPropertyFilters() const{ return m_propertyFilters; }

    /**
     * <p>A list of objects that filter the property value history request.</p>
     */
    inline bool PropertyFiltersHasBeenSet() const { return m_propertyFiltersHasBeenSet; }

    /**
     * <p>A list of objects that filter the property value history request.</p>
     */
    inline void SetPropertyFilters(const Aws::Vector<PropertyFilter>& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters = value; }

    /**
     * <p>A list of objects that filter the property value history request.</p>
     */
    inline void SetPropertyFilters(Aws::Vector<PropertyFilter>&& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters = std::move(value); }

    /**
     * <p>A list of objects that filter the property value history request.</p>
     */
    inline GetPropertyValueHistoryRequest& WithPropertyFilters(const Aws::Vector<PropertyFilter>& value) { SetPropertyFilters(value); return *this;}

    /**
     * <p>A list of objects that filter the property value history request.</p>
     */
    inline GetPropertyValueHistoryRequest& WithPropertyFilters(Aws::Vector<PropertyFilter>&& value) { SetPropertyFilters(std::move(value)); return *this;}

    /**
     * <p>A list of objects that filter the property value history request.</p>
     */
    inline GetPropertyValueHistoryRequest& AddPropertyFilters(const PropertyFilter& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters.push_back(value); return *this; }

    /**
     * <p>A list of objects that filter the property value history request.</p>
     */
    inline GetPropertyValueHistoryRequest& AddPropertyFilters(PropertyFilter&& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of properties whose value histories the request retrieves.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelectedProperties() const{ return m_selectedProperties; }

    /**
     * <p>A list of properties whose value histories the request retrieves.</p>
     */
    inline bool SelectedPropertiesHasBeenSet() const { return m_selectedPropertiesHasBeenSet; }

    /**
     * <p>A list of properties whose value histories the request retrieves.</p>
     */
    inline void SetSelectedProperties(const Aws::Vector<Aws::String>& value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties = value; }

    /**
     * <p>A list of properties whose value histories the request retrieves.</p>
     */
    inline void SetSelectedProperties(Aws::Vector<Aws::String>&& value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties = std::move(value); }

    /**
     * <p>A list of properties whose value histories the request retrieves.</p>
     */
    inline GetPropertyValueHistoryRequest& WithSelectedProperties(const Aws::Vector<Aws::String>& value) { SetSelectedProperties(value); return *this;}

    /**
     * <p>A list of properties whose value histories the request retrieves.</p>
     */
    inline GetPropertyValueHistoryRequest& WithSelectedProperties(Aws::Vector<Aws::String>&& value) { SetSelectedProperties(std::move(value)); return *this;}

    /**
     * <p>A list of properties whose value histories the request retrieves.</p>
     */
    inline GetPropertyValueHistoryRequest& AddSelectedProperties(const Aws::String& value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties.push_back(value); return *this; }

    /**
     * <p>A list of properties whose value histories the request retrieves.</p>
     */
    inline GetPropertyValueHistoryRequest& AddSelectedProperties(Aws::String&& value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of properties whose value histories the request retrieves.</p>
     */
    inline GetPropertyValueHistoryRequest& AddSelectedProperties(const char* value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties.push_back(value); return *this; }


    /**
     * <p>The date and time of the earliest property value to return.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDateTime() const{ return m_startDateTime; }

    /**
     * <p>The date and time of the earliest property value to return.</p>
     */
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }

    /**
     * <p>The date and time of the earliest property value to return.</p>
     */
    inline void SetStartDateTime(const Aws::Utils::DateTime& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = value; }

    /**
     * <p>The date and time of the earliest property value to return.</p>
     */
    inline void SetStartDateTime(Aws::Utils::DateTime&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::move(value); }

    /**
     * <p>The date and time of the earliest property value to return.</p>
     */
    inline GetPropertyValueHistoryRequest& WithStartDateTime(const Aws::Utils::DateTime& value) { SetStartDateTime(value); return *this;}

    /**
     * <p>The date and time of the earliest property value to return.</p>
     */
    inline GetPropertyValueHistoryRequest& WithStartDateTime(Aws::Utils::DateTime&& value) { SetStartDateTime(std::move(value)); return *this;}


    /**
     * <p>The ID of the workspace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The ID of the workspace.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the workspace.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace.</p>
     */
    inline GetPropertyValueHistoryRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace.</p>
     */
    inline GetPropertyValueHistoryRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace.</p>
     */
    inline GetPropertyValueHistoryRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

  private:

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet;

    Aws::String m_componentTypeId;
    bool m_componentTypeIdHasBeenSet;

    Aws::Utils::DateTime m_endDateTime;
    bool m_endDateTimeHasBeenSet;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet;

    InterpolationParameters m_interpolation;
    bool m_interpolationHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    OrderByTime m_orderByTime;
    bool m_orderByTimeHasBeenSet;

    Aws::Vector<PropertyFilter> m_propertyFilters;
    bool m_propertyFiltersHasBeenSet;

    Aws::Vector<Aws::String> m_selectedProperties;
    bool m_selectedPropertiesHasBeenSet;

    Aws::Utils::DateTime m_startDateTime;
    bool m_startDateTimeHasBeenSet;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
