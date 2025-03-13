/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/IoTTwinMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iottwinmaker/model/InterpolationParameters.h>
#include <aws/iottwinmaker/model/OrderByTime.h>
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
  class GetPropertyValueHistoryRequest : public IoTTwinMakerRequest
  {
  public:
    AWS_IOTTWINMAKER_API GetPropertyValueHistoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPropertyValueHistory"; }

    AWS_IOTTWINMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the workspace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    template<typename WorkspaceIdT = Aws::String>
    void SetWorkspaceId(WorkspaceIdT&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::forward<WorkspaceIdT>(value); }
    template<typename WorkspaceIdT = Aws::String>
    GetPropertyValueHistoryRequest& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the entity.</p>
     */
    inline const Aws::String& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = Aws::String>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = Aws::String>
    GetPropertyValueHistoryRequest& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const { return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    template<typename ComponentNameT = Aws::String>
    void SetComponentName(ComponentNameT&& value) { m_componentNameHasBeenSet = true; m_componentName = std::forward<ComponentNameT>(value); }
    template<typename ComponentNameT = Aws::String>
    GetPropertyValueHistoryRequest& WithComponentName(ComponentNameT&& value) { SetComponentName(std::forward<ComponentNameT>(value)); return *this;}
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
    GetPropertyValueHistoryRequest& WithComponentPath(ComponentPathT&& value) { SetComponentPath(std::forward<ComponentPathT>(value)); return *this;}
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
    GetPropertyValueHistoryRequest& WithComponentTypeId(ComponentTypeIdT&& value) { SetComponentTypeId(std::forward<ComponentTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of properties whose value histories the request retrieves.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelectedProperties() const { return m_selectedProperties; }
    inline bool SelectedPropertiesHasBeenSet() const { return m_selectedPropertiesHasBeenSet; }
    template<typename SelectedPropertiesT = Aws::Vector<Aws::String>>
    void SetSelectedProperties(SelectedPropertiesT&& value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties = std::forward<SelectedPropertiesT>(value); }
    template<typename SelectedPropertiesT = Aws::Vector<Aws::String>>
    GetPropertyValueHistoryRequest& WithSelectedProperties(SelectedPropertiesT&& value) { SetSelectedProperties(std::forward<SelectedPropertiesT>(value)); return *this;}
    template<typename SelectedPropertiesT = Aws::String>
    GetPropertyValueHistoryRequest& AddSelectedProperties(SelectedPropertiesT&& value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties.emplace_back(std::forward<SelectedPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of objects that filter the property value history request.</p>
     */
    inline const Aws::Vector<PropertyFilter>& GetPropertyFilters() const { return m_propertyFilters; }
    inline bool PropertyFiltersHasBeenSet() const { return m_propertyFiltersHasBeenSet; }
    template<typename PropertyFiltersT = Aws::Vector<PropertyFilter>>
    void SetPropertyFilters(PropertyFiltersT&& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters = std::forward<PropertyFiltersT>(value); }
    template<typename PropertyFiltersT = Aws::Vector<PropertyFilter>>
    GetPropertyValueHistoryRequest& WithPropertyFilters(PropertyFiltersT&& value) { SetPropertyFilters(std::forward<PropertyFiltersT>(value)); return *this;}
    template<typename PropertyFiltersT = PropertyFilter>
    GetPropertyValueHistoryRequest& AddPropertyFilters(PropertyFiltersT&& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters.emplace_back(std::forward<PropertyFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that specifies the interpolation type and the interval over which
     * to interpolate data.</p>
     */
    inline const InterpolationParameters& GetInterpolation() const { return m_interpolation; }
    inline bool InterpolationHasBeenSet() const { return m_interpolationHasBeenSet; }
    template<typename InterpolationT = InterpolationParameters>
    void SetInterpolation(InterpolationT&& value) { m_interpolationHasBeenSet = true; m_interpolation = std::forward<InterpolationT>(value); }
    template<typename InterpolationT = InterpolationParameters>
    GetPropertyValueHistoryRequest& WithInterpolation(InterpolationT&& value) { SetInterpolation(std::forward<InterpolationT>(value)); return *this;}
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
    GetPropertyValueHistoryRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return at one time. The default is 25.</p>
     * <p>Valid Range: Minimum value of 1. Maximum value of 250.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetPropertyValueHistoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time direction to use in the result order.</p>
     */
    inline OrderByTime GetOrderByTime() const { return m_orderByTime; }
    inline bool OrderByTimeHasBeenSet() const { return m_orderByTimeHasBeenSet; }
    inline void SetOrderByTime(OrderByTime value) { m_orderByTimeHasBeenSet = true; m_orderByTime = value; }
    inline GetPropertyValueHistoryRequest& WithOrderByTime(OrderByTime value) { SetOrderByTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO8601 DateTime of the earliest property value to return.</p> <p>For
     * more information about the ISO8601 DateTime format, see the data type <a
     * href="https://docs.aws.amazon.com/iot-twinmaker/latest/apireference/API_PropertyValue.html">PropertyValue</a>.</p>
     */
    inline const Aws::String& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::String>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::String>
    GetPropertyValueHistoryRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO8601 DateTime of the latest property value to return.</p> <p>For more
     * information about the ISO8601 DateTime format, see the data type <a
     * href="https://docs.aws.amazon.com/iot-twinmaker/latest/apireference/API_PropertyValue.html">PropertyValue</a>.</p>
     */
    inline const Aws::String& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::String>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::String>
    GetPropertyValueHistoryRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_componentPath;
    bool m_componentPathHasBeenSet = false;

    Aws::String m_componentTypeId;
    bool m_componentTypeIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectedProperties;
    bool m_selectedPropertiesHasBeenSet = false;

    Aws::Vector<PropertyFilter> m_propertyFilters;
    bool m_propertyFiltersHasBeenSet = false;

    InterpolationParameters m_interpolation;
    bool m_interpolationHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    OrderByTime m_orderByTime{OrderByTime::NOT_SET};
    bool m_orderByTimeHasBeenSet = false;

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
