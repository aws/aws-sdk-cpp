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
    AWS_LOCATIONSERVICE_API ForecastGeofenceEventsResult();
    AWS_LOCATIONSERVICE_API ForecastGeofenceEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API ForecastGeofenceEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of forecasted events.</p>
     */
    inline const Aws::Vector<ForecastedEvent>& GetForecastedEvents() const{ return m_forecastedEvents; }

    /**
     * <p>The list of forecasted events.</p>
     */
    inline void SetForecastedEvents(const Aws::Vector<ForecastedEvent>& value) { m_forecastedEvents = value; }

    /**
     * <p>The list of forecasted events.</p>
     */
    inline void SetForecastedEvents(Aws::Vector<ForecastedEvent>&& value) { m_forecastedEvents = std::move(value); }

    /**
     * <p>The list of forecasted events.</p>
     */
    inline ForecastGeofenceEventsResult& WithForecastedEvents(const Aws::Vector<ForecastedEvent>& value) { SetForecastedEvents(value); return *this;}

    /**
     * <p>The list of forecasted events.</p>
     */
    inline ForecastGeofenceEventsResult& WithForecastedEvents(Aws::Vector<ForecastedEvent>&& value) { SetForecastedEvents(std::move(value)); return *this;}

    /**
     * <p>The list of forecasted events.</p>
     */
    inline ForecastGeofenceEventsResult& AddForecastedEvents(const ForecastedEvent& value) { m_forecastedEvents.push_back(value); return *this; }

    /**
     * <p>The list of forecasted events.</p>
     */
    inline ForecastGeofenceEventsResult& AddForecastedEvents(ForecastedEvent&& value) { m_forecastedEvents.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page. </p>
     */
    inline ForecastGeofenceEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page. </p>
     */
    inline ForecastGeofenceEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page. </p>
     */
    inline ForecastGeofenceEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The distance unit for the forecasted events.</p>
     */
    inline const DistanceUnit& GetDistanceUnit() const{ return m_distanceUnit; }

    /**
     * <p>The distance unit for the forecasted events.</p>
     */
    inline void SetDistanceUnit(const DistanceUnit& value) { m_distanceUnit = value; }

    /**
     * <p>The distance unit for the forecasted events.</p>
     */
    inline void SetDistanceUnit(DistanceUnit&& value) { m_distanceUnit = std::move(value); }

    /**
     * <p>The distance unit for the forecasted events.</p>
     */
    inline ForecastGeofenceEventsResult& WithDistanceUnit(const DistanceUnit& value) { SetDistanceUnit(value); return *this;}

    /**
     * <p>The distance unit for the forecasted events.</p>
     */
    inline ForecastGeofenceEventsResult& WithDistanceUnit(DistanceUnit&& value) { SetDistanceUnit(std::move(value)); return *this;}


    /**
     * <p>The speed unit for the forecasted events.</p>
     */
    inline const SpeedUnit& GetSpeedUnit() const{ return m_speedUnit; }

    /**
     * <p>The speed unit for the forecasted events.</p>
     */
    inline void SetSpeedUnit(const SpeedUnit& value) { m_speedUnit = value; }

    /**
     * <p>The speed unit for the forecasted events.</p>
     */
    inline void SetSpeedUnit(SpeedUnit&& value) { m_speedUnit = std::move(value); }

    /**
     * <p>The speed unit for the forecasted events.</p>
     */
    inline ForecastGeofenceEventsResult& WithSpeedUnit(const SpeedUnit& value) { SetSpeedUnit(value); return *this;}

    /**
     * <p>The speed unit for the forecasted events.</p>
     */
    inline ForecastGeofenceEventsResult& WithSpeedUnit(SpeedUnit&& value) { SetSpeedUnit(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ForecastGeofenceEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ForecastGeofenceEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ForecastGeofenceEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ForecastedEvent> m_forecastedEvents;

    Aws::String m_nextToken;

    DistanceUnit m_distanceUnit;

    SpeedUnit m_speedUnit;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
