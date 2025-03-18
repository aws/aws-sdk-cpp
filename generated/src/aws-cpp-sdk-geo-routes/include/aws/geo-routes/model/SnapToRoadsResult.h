/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/RoadSnapSnappedGeometry.h>
#include <aws/geo-routes/model/GeometryFormat.h>
#include <aws/geo-routes/model/RoadSnapNotice.h>
#include <aws/geo-routes/model/RoadSnapSnappedTracePoint.h>
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
namespace GeoRoutes
{
namespace Model
{
  class SnapToRoadsResult
  {
  public:
    AWS_GEOROUTES_API SnapToRoadsResult() = default;
    AWS_GEOROUTES_API SnapToRoadsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GEOROUTES_API SnapToRoadsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Notices are additional information returned that indicate issues that
     * occurred during route calculation.</p>
     */
    inline const Aws::Vector<RoadSnapNotice>& GetNotices() const { return m_notices; }
    template<typename NoticesT = Aws::Vector<RoadSnapNotice>>
    void SetNotices(NoticesT&& value) { m_noticesHasBeenSet = true; m_notices = std::forward<NoticesT>(value); }
    template<typename NoticesT = Aws::Vector<RoadSnapNotice>>
    SnapToRoadsResult& WithNotices(NoticesT&& value) { SetNotices(std::forward<NoticesT>(value)); return *this;}
    template<typename NoticesT = RoadSnapNotice>
    SnapToRoadsResult& AddNotices(NoticesT&& value) { m_noticesHasBeenSet = true; m_notices.emplace_back(std::forward<NoticesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pricing bucket for which the query is charged at.</p>
     */
    inline const Aws::String& GetPricingBucket() const { return m_pricingBucket; }
    template<typename PricingBucketT = Aws::String>
    void SetPricingBucket(PricingBucketT&& value) { m_pricingBucketHasBeenSet = true; m_pricingBucket = std::forward<PricingBucketT>(value); }
    template<typename PricingBucketT = Aws::String>
    SnapToRoadsResult& WithPricingBucket(PricingBucketT&& value) { SetPricingBucket(std::forward<PricingBucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interpolated geometry for the snapped route onto the road network.</p>
     */
    inline const RoadSnapSnappedGeometry& GetSnappedGeometry() const { return m_snappedGeometry; }
    template<typename SnappedGeometryT = RoadSnapSnappedGeometry>
    void SetSnappedGeometry(SnappedGeometryT&& value) { m_snappedGeometryHasBeenSet = true; m_snappedGeometry = std::forward<SnappedGeometryT>(value); }
    template<typename SnappedGeometryT = RoadSnapSnappedGeometry>
    SnapToRoadsResult& WithSnappedGeometry(SnappedGeometryT&& value) { SetSnappedGeometry(std::forward<SnappedGeometryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the format of the geometry returned for each leg of the route.</p>
     */
    inline GeometryFormat GetSnappedGeometryFormat() const { return m_snappedGeometryFormat; }
    inline void SetSnappedGeometryFormat(GeometryFormat value) { m_snappedGeometryFormatHasBeenSet = true; m_snappedGeometryFormat = value; }
    inline SnapToRoadsResult& WithSnappedGeometryFormat(GeometryFormat value) { SetSnappedGeometryFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trace points snapped onto the road network. </p>
     */
    inline const Aws::Vector<RoadSnapSnappedTracePoint>& GetSnappedTracePoints() const { return m_snappedTracePoints; }
    template<typename SnappedTracePointsT = Aws::Vector<RoadSnapSnappedTracePoint>>
    void SetSnappedTracePoints(SnappedTracePointsT&& value) { m_snappedTracePointsHasBeenSet = true; m_snappedTracePoints = std::forward<SnappedTracePointsT>(value); }
    template<typename SnappedTracePointsT = Aws::Vector<RoadSnapSnappedTracePoint>>
    SnapToRoadsResult& WithSnappedTracePoints(SnappedTracePointsT&& value) { SetSnappedTracePoints(std::forward<SnappedTracePointsT>(value)); return *this;}
    template<typename SnappedTracePointsT = RoadSnapSnappedTracePoint>
    SnapToRoadsResult& AddSnappedTracePoints(SnappedTracePointsT&& value) { m_snappedTracePointsHasBeenSet = true; m_snappedTracePoints.emplace_back(std::forward<SnappedTracePointsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SnapToRoadsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RoadSnapNotice> m_notices;
    bool m_noticesHasBeenSet = false;

    Aws::String m_pricingBucket;
    bool m_pricingBucketHasBeenSet = false;

    RoadSnapSnappedGeometry m_snappedGeometry;
    bool m_snappedGeometryHasBeenSet = false;

    GeometryFormat m_snappedGeometryFormat{GeometryFormat::NOT_SET};
    bool m_snappedGeometryFormatHasBeenSet = false;

    Aws::Vector<RoadSnapSnappedTracePoint> m_snappedTracePoints;
    bool m_snappedTracePointsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
