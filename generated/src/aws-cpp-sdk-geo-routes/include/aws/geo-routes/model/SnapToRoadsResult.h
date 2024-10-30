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
    AWS_GEOROUTES_API SnapToRoadsResult();
    AWS_GEOROUTES_API SnapToRoadsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GEOROUTES_API SnapToRoadsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Notices are additional information returned that indicate issues that
     * occurred during route calculation.</p>
     */
    inline const Aws::Vector<RoadSnapNotice>& GetNotices() const{ return m_notices; }
    inline void SetNotices(const Aws::Vector<RoadSnapNotice>& value) { m_notices = value; }
    inline void SetNotices(Aws::Vector<RoadSnapNotice>&& value) { m_notices = std::move(value); }
    inline SnapToRoadsResult& WithNotices(const Aws::Vector<RoadSnapNotice>& value) { SetNotices(value); return *this;}
    inline SnapToRoadsResult& WithNotices(Aws::Vector<RoadSnapNotice>&& value) { SetNotices(std::move(value)); return *this;}
    inline SnapToRoadsResult& AddNotices(const RoadSnapNotice& value) { m_notices.push_back(value); return *this; }
    inline SnapToRoadsResult& AddNotices(RoadSnapNotice&& value) { m_notices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pricing bucket for which the query is charged at.</p>
     */
    inline const Aws::String& GetPricingBucket() const{ return m_pricingBucket; }
    inline void SetPricingBucket(const Aws::String& value) { m_pricingBucket = value; }
    inline void SetPricingBucket(Aws::String&& value) { m_pricingBucket = std::move(value); }
    inline void SetPricingBucket(const char* value) { m_pricingBucket.assign(value); }
    inline SnapToRoadsResult& WithPricingBucket(const Aws::String& value) { SetPricingBucket(value); return *this;}
    inline SnapToRoadsResult& WithPricingBucket(Aws::String&& value) { SetPricingBucket(std::move(value)); return *this;}
    inline SnapToRoadsResult& WithPricingBucket(const char* value) { SetPricingBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interpolated geometry for the snapped route onto the road network.</p>
     */
    inline const RoadSnapSnappedGeometry& GetSnappedGeometry() const{ return m_snappedGeometry; }
    inline void SetSnappedGeometry(const RoadSnapSnappedGeometry& value) { m_snappedGeometry = value; }
    inline void SetSnappedGeometry(RoadSnapSnappedGeometry&& value) { m_snappedGeometry = std::move(value); }
    inline SnapToRoadsResult& WithSnappedGeometry(const RoadSnapSnappedGeometry& value) { SetSnappedGeometry(value); return *this;}
    inline SnapToRoadsResult& WithSnappedGeometry(RoadSnapSnappedGeometry&& value) { SetSnappedGeometry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the format of the geometry returned for each leg of the route.</p>
     */
    inline const GeometryFormat& GetSnappedGeometryFormat() const{ return m_snappedGeometryFormat; }
    inline void SetSnappedGeometryFormat(const GeometryFormat& value) { m_snappedGeometryFormat = value; }
    inline void SetSnappedGeometryFormat(GeometryFormat&& value) { m_snappedGeometryFormat = std::move(value); }
    inline SnapToRoadsResult& WithSnappedGeometryFormat(const GeometryFormat& value) { SetSnappedGeometryFormat(value); return *this;}
    inline SnapToRoadsResult& WithSnappedGeometryFormat(GeometryFormat&& value) { SetSnappedGeometryFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trace points snapped onto the road network. </p>
     */
    inline const Aws::Vector<RoadSnapSnappedTracePoint>& GetSnappedTracePoints() const{ return m_snappedTracePoints; }
    inline void SetSnappedTracePoints(const Aws::Vector<RoadSnapSnappedTracePoint>& value) { m_snappedTracePoints = value; }
    inline void SetSnappedTracePoints(Aws::Vector<RoadSnapSnappedTracePoint>&& value) { m_snappedTracePoints = std::move(value); }
    inline SnapToRoadsResult& WithSnappedTracePoints(const Aws::Vector<RoadSnapSnappedTracePoint>& value) { SetSnappedTracePoints(value); return *this;}
    inline SnapToRoadsResult& WithSnappedTracePoints(Aws::Vector<RoadSnapSnappedTracePoint>&& value) { SetSnappedTracePoints(std::move(value)); return *this;}
    inline SnapToRoadsResult& AddSnappedTracePoints(const RoadSnapSnappedTracePoint& value) { m_snappedTracePoints.push_back(value); return *this; }
    inline SnapToRoadsResult& AddSnappedTracePoints(RoadSnapSnappedTracePoint&& value) { m_snappedTracePoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SnapToRoadsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SnapToRoadsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SnapToRoadsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RoadSnapNotice> m_notices;

    Aws::String m_pricingBucket;

    RoadSnapSnappedGeometry m_snappedGeometry;

    GeometryFormat m_snappedGeometryFormat;

    Aws::Vector<RoadSnapSnappedTracePoint> m_snappedTracePoints;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
