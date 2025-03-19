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
    AWS_GEOROUTES_API SnapToRoadsRequest() = default;

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
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    SnapToRoadsRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Chooses what the returned SnappedGeometry format should be.</p> <p>Default
     * Value: <code>FlexiblePolyline</code> </p>
     */
    inline GeometryFormat GetSnappedGeometryFormat() const { return m_snappedGeometryFormat; }
    inline bool SnappedGeometryFormatHasBeenSet() const { return m_snappedGeometryFormatHasBeenSet; }
    inline void SetSnappedGeometryFormat(GeometryFormat value) { m_snappedGeometryFormatHasBeenSet = true; m_snappedGeometryFormat = value; }
    inline SnapToRoadsRequest& WithSnappedGeometryFormat(GeometryFormat value) { SetSnappedGeometryFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The radius around the provided tracepoint that is considered for
     * snapping.</p> <p> <b>Unit</b>: <code>meters</code> </p> <p>Default value:
     * <code>300</code> </p>
     */
    inline long long GetSnapRadius() const { return m_snapRadius; }
    inline bool SnapRadiusHasBeenSet() const { return m_snapRadiusHasBeenSet; }
    inline void SetSnapRadius(long long value) { m_snapRadiusHasBeenSet = true; m_snapRadius = value; }
    inline SnapToRoadsRequest& WithSnapRadius(long long value) { SetSnapRadius(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of trace points to be snapped onto the road network.</p>
     */
    inline const Aws::Vector<RoadSnapTracePoint>& GetTracePoints() const { return m_tracePoints; }
    inline bool TracePointsHasBeenSet() const { return m_tracePointsHasBeenSet; }
    template<typename TracePointsT = Aws::Vector<RoadSnapTracePoint>>
    void SetTracePoints(TracePointsT&& value) { m_tracePointsHasBeenSet = true; m_tracePoints = std::forward<TracePointsT>(value); }
    template<typename TracePointsT = Aws::Vector<RoadSnapTracePoint>>
    SnapToRoadsRequest& WithTracePoints(TracePointsT&& value) { SetTracePoints(std::forward<TracePointsT>(value)); return *this;}
    template<typename TracePointsT = RoadSnapTracePoint>
    SnapToRoadsRequest& AddTracePoints(TracePointsT&& value) { m_tracePointsHasBeenSet = true; m_tracePoints.emplace_back(std::forward<TracePointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the mode of transport when calculating a route. Used in estimating
     * the speed of travel and road compatibility.</p> <p>Default Value:
     * <code>Car</code> </p>
     */
    inline RoadSnapTravelMode GetTravelMode() const { return m_travelMode; }
    inline bool TravelModeHasBeenSet() const { return m_travelModeHasBeenSet; }
    inline void SetTravelMode(RoadSnapTravelMode value) { m_travelModeHasBeenSet = true; m_travelMode = value; }
    inline SnapToRoadsRequest& WithTravelMode(RoadSnapTravelMode value) { SetTravelMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Travel mode related options for the provided travel mode.</p>
     */
    inline const RoadSnapTravelModeOptions& GetTravelModeOptions() const { return m_travelModeOptions; }
    inline bool TravelModeOptionsHasBeenSet() const { return m_travelModeOptionsHasBeenSet; }
    template<typename TravelModeOptionsT = RoadSnapTravelModeOptions>
    void SetTravelModeOptions(TravelModeOptionsT&& value) { m_travelModeOptionsHasBeenSet = true; m_travelModeOptions = std::forward<TravelModeOptionsT>(value); }
    template<typename TravelModeOptionsT = RoadSnapTravelModeOptions>
    SnapToRoadsRequest& WithTravelModeOptions(TravelModeOptionsT&& value) { SetTravelModeOptions(std::forward<TravelModeOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    GeometryFormat m_snappedGeometryFormat{GeometryFormat::NOT_SET};
    bool m_snappedGeometryFormatHasBeenSet = false;

    long long m_snapRadius{0};
    bool m_snapRadiusHasBeenSet = false;

    Aws::Vector<RoadSnapTracePoint> m_tracePoints;
    bool m_tracePointsHasBeenSet = false;

    RoadSnapTravelMode m_travelMode{RoadSnapTravelMode::NOT_SET};
    bool m_travelModeHasBeenSet = false;

    RoadSnapTravelModeOptions m_travelModeOptions;
    bool m_travelModeOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
