/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/GeoRoutesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/GeometryFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/RoadSnapTravelMode.h>
#include <aws/geo-routes/model/RoadSnapTravelModeOptions.h>
#include <aws/geo-routes/model/RoadSnapTracePoint.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GeoRoutes
{
namespace Model
{

  /**
   */
  class SnapToRoadsRequest : public GeoRoutesRequest
  {
  public:
    AWS_GEOROUTES_API SnapToRoadsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SnapToRoads"; }

    AWS_GEOROUTES_API Aws::String SerializePayload() const override;

    AWS_GEOROUTES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Optional: The API key to be used for authorization. Either an API key or
     * valid SigV4 signature must be provided when making a request. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline SnapToRoadsRequest& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline SnapToRoadsRequest& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline SnapToRoadsRequest& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Chooses what the returned SnappedGeometry format should be.</p> <p>Default
     * Value: <code>FlexiblePolyline</code> </p>
     */
    inline const GeometryFormat& GetSnappedGeometryFormat() const{ return m_snappedGeometryFormat; }
    inline bool SnappedGeometryFormatHasBeenSet() const { return m_snappedGeometryFormatHasBeenSet; }
    inline void SetSnappedGeometryFormat(const GeometryFormat& value) { m_snappedGeometryFormatHasBeenSet = true; m_snappedGeometryFormat = value; }
    inline void SetSnappedGeometryFormat(GeometryFormat&& value) { m_snappedGeometryFormatHasBeenSet = true; m_snappedGeometryFormat = std::move(value); }
    inline SnapToRoadsRequest& WithSnappedGeometryFormat(const GeometryFormat& value) { SetSnappedGeometryFormat(value); return *this;}
    inline SnapToRoadsRequest& WithSnappedGeometryFormat(GeometryFormat&& value) { SetSnappedGeometryFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The radius around the provided tracepoint that is considered for
     * snapping.</p> <p> <b>Unit</b>: <code>meters</code> </p> <p>Default value:
     * <code>300</code> </p>
     */
    inline long long GetSnapRadius() const{ return m_snapRadius; }
    inline bool SnapRadiusHasBeenSet() const { return m_snapRadiusHasBeenSet; }
    inline void SetSnapRadius(long long value) { m_snapRadiusHasBeenSet = true; m_snapRadius = value; }
    inline SnapToRoadsRequest& WithSnapRadius(long long value) { SetSnapRadius(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of trace points to be snapped onto the road network.</p>
     */
    inline const Aws::Vector<RoadSnapTracePoint>& GetTracePoints() const{ return m_tracePoints; }
    inline bool TracePointsHasBeenSet() const { return m_tracePointsHasBeenSet; }
    inline void SetTracePoints(const Aws::Vector<RoadSnapTracePoint>& value) { m_tracePointsHasBeenSet = true; m_tracePoints = value; }
    inline void SetTracePoints(Aws::Vector<RoadSnapTracePoint>&& value) { m_tracePointsHasBeenSet = true; m_tracePoints = std::move(value); }
    inline SnapToRoadsRequest& WithTracePoints(const Aws::Vector<RoadSnapTracePoint>& value) { SetTracePoints(value); return *this;}
    inline SnapToRoadsRequest& WithTracePoints(Aws::Vector<RoadSnapTracePoint>&& value) { SetTracePoints(std::move(value)); return *this;}
    inline SnapToRoadsRequest& AddTracePoints(const RoadSnapTracePoint& value) { m_tracePointsHasBeenSet = true; m_tracePoints.push_back(value); return *this; }
    inline SnapToRoadsRequest& AddTracePoints(RoadSnapTracePoint&& value) { m_tracePointsHasBeenSet = true; m_tracePoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the mode of transport when calculating a route. Used in estimating
     * the speed of travel and road compatibility.</p> <p>Default Value:
     * <code>Car</code> </p>
     */
    inline const RoadSnapTravelMode& GetTravelMode() const{ return m_travelMode; }
    inline bool TravelModeHasBeenSet() const { return m_travelModeHasBeenSet; }
    inline void SetTravelMode(const RoadSnapTravelMode& value) { m_travelModeHasBeenSet = true; m_travelMode = value; }
    inline void SetTravelMode(RoadSnapTravelMode&& value) { m_travelModeHasBeenSet = true; m_travelMode = std::move(value); }
    inline SnapToRoadsRequest& WithTravelMode(const RoadSnapTravelMode& value) { SetTravelMode(value); return *this;}
    inline SnapToRoadsRequest& WithTravelMode(RoadSnapTravelMode&& value) { SetTravelMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Travel mode related options for the provided travel mode.</p>
     */
    inline const RoadSnapTravelModeOptions& GetTravelModeOptions() const{ return m_travelModeOptions; }
    inline bool TravelModeOptionsHasBeenSet() const { return m_travelModeOptionsHasBeenSet; }
    inline void SetTravelModeOptions(const RoadSnapTravelModeOptions& value) { m_travelModeOptionsHasBeenSet = true; m_travelModeOptions = value; }
    inline void SetTravelModeOptions(RoadSnapTravelModeOptions&& value) { m_travelModeOptionsHasBeenSet = true; m_travelModeOptions = std::move(value); }
    inline SnapToRoadsRequest& WithTravelModeOptions(const RoadSnapTravelModeOptions& value) { SetTravelModeOptions(value); return *this;}
    inline SnapToRoadsRequest& WithTravelModeOptions(RoadSnapTravelModeOptions&& value) { SetTravelModeOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    GeometryFormat m_snappedGeometryFormat;
    bool m_snappedGeometryFormatHasBeenSet = false;

    long long m_snapRadius;
    bool m_snapRadiusHasBeenSet = false;

    Aws::Vector<RoadSnapTracePoint> m_tracePoints;
    bool m_tracePointsHasBeenSet = false;

    RoadSnapTravelMode m_travelMode;
    bool m_travelModeHasBeenSet = false;

    RoadSnapTravelModeOptions m_travelModeOptions;
    bool m_travelModeOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
