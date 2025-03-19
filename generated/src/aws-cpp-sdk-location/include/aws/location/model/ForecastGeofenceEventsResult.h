/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/DistanceUnit.h>
#include <aws/location/model/SpeedUnit.h>
#include <aws/location/model/ForecastedEvent.h>
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
namespace LocationService
{
namespace Model
{
  class ForecastGeofenceEventsResult
  {
  public:
    AWS_LOCATIONSERVICE_API ForecastGeofenceEventsResult() = default;
    AWS_LOCATIONSERVICE_API ForecastGeofenceEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API ForecastGeofenceEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of forecasted events.</p>
     */
    inline const Aws::Vector<ForecastedEvent>& GetForecastedEvents() const { return m_forecastedEvents; }
    template<typename ForecastedEventsT = Aws::Vector<ForecastedEvent>>
    void SetForecastedEvents(ForecastedEventsT&& value) { m_forecastedEventsHasBeenSet = true; m_forecastedEvents = std::forward<ForecastedEventsT>(value); }
    template<typename ForecastedEventsT = Aws::Vector<ForecastedEvent>>
    ForecastGeofenceEventsResult& WithForecastedEvents(ForecastedEventsT&& value) { SetForecastedEvents(std::forward<ForecastedEventsT>(value)); return *this;}
    template<typename ForecastedEventsT = ForecastedEvent>
    ForecastGeofenceEventsResult& AddForecastedEvents(ForecastedEventsT&& value) { m_forecastedEventsHasBeenSet = true; m_forecastedEvents.emplace_back(std::forward<ForecastedEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ForecastGeofenceEventsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distance unit for the forecasted events.</p>
     */
    inline DistanceUnit GetDistanceUnit() const { return m_distanceUnit; }
    inline void SetDistanceUnit(DistanceUnit value) { m_distanceUnitHasBeenSet = true; m_distanceUnit = value; }
    inline ForecastGeofenceEventsResult& WithDistanceUnit(DistanceUnit value) { SetDistanceUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The speed unit for the forecasted events.</p>
     */
    inline SpeedUnit GetSpeedUnit() const { return m_speedUnit; }
    inline void SetSpeedUnit(SpeedUnit value) { m_speedUnitHasBeenSet = true; m_speedUnit = value; }
    inline ForecastGeofenceEventsResult& WithSpeedUnit(SpeedUnit value) { SetSpeedUnit(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ForecastGeofenceEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ForecastedEvent> m_forecastedEvents;
    bool m_forecastedEventsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    DistanceUnit m_distanceUnit{DistanceUnit::NOT_SET};
    bool m_distanceUnitHasBeenSet = false;

    SpeedUnit m_speedUnit{SpeedUnit::NOT_SET};
    bool m_speedUnitHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
