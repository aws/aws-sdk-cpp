/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/GeometryFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/RouteResponseNotice.h>
#include <aws/geo-routes/model/Route.h>
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
  class CalculateRoutesResult
  {
  public:
    AWS_GEOROUTES_API CalculateRoutesResult();
    AWS_GEOROUTES_API CalculateRoutesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GEOROUTES_API CalculateRoutesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the format of the geometry returned for each leg of the route.</p>
     */
    inline const GeometryFormat& GetLegGeometryFormat() const{ return m_legGeometryFormat; }
    inline void SetLegGeometryFormat(const GeometryFormat& value) { m_legGeometryFormat = value; }
    inline void SetLegGeometryFormat(GeometryFormat&& value) { m_legGeometryFormat = std::move(value); }
    inline CalculateRoutesResult& WithLegGeometryFormat(const GeometryFormat& value) { SetLegGeometryFormat(value); return *this;}
    inline CalculateRoutesResult& WithLegGeometryFormat(GeometryFormat&& value) { SetLegGeometryFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Notices are additional information returned that indicate issues that
     * occurred during route calculation.</p>
     */
    inline const Aws::Vector<RouteResponseNotice>& GetNotices() const{ return m_notices; }
    inline void SetNotices(const Aws::Vector<RouteResponseNotice>& value) { m_notices = value; }
    inline void SetNotices(Aws::Vector<RouteResponseNotice>&& value) { m_notices = std::move(value); }
    inline CalculateRoutesResult& WithNotices(const Aws::Vector<RouteResponseNotice>& value) { SetNotices(value); return *this;}
    inline CalculateRoutesResult& WithNotices(Aws::Vector<RouteResponseNotice>&& value) { SetNotices(std::move(value)); return *this;}
    inline CalculateRoutesResult& AddNotices(const RouteResponseNotice& value) { m_notices.push_back(value); return *this; }
    inline CalculateRoutesResult& AddNotices(RouteResponseNotice&& value) { m_notices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pricing bucket for which the query is charged at.</p>
     */
    inline const Aws::String& GetPricingBucket() const{ return m_pricingBucket; }
    inline void SetPricingBucket(const Aws::String& value) { m_pricingBucket = value; }
    inline void SetPricingBucket(Aws::String&& value) { m_pricingBucket = std::move(value); }
    inline void SetPricingBucket(const char* value) { m_pricingBucket.assign(value); }
    inline CalculateRoutesResult& WithPricingBucket(const Aws::String& value) { SetPricingBucket(value); return *this;}
    inline CalculateRoutesResult& WithPricingBucket(Aws::String&& value) { SetPricingBucket(std::move(value)); return *this;}
    inline CalculateRoutesResult& WithPricingBucket(const char* value) { SetPricingBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path from the origin to the destination.</p>
     */
    inline const Aws::Vector<Route>& GetRoutes() const{ return m_routes; }
    inline void SetRoutes(const Aws::Vector<Route>& value) { m_routes = value; }
    inline void SetRoutes(Aws::Vector<Route>&& value) { m_routes = std::move(value); }
    inline CalculateRoutesResult& WithRoutes(const Aws::Vector<Route>& value) { SetRoutes(value); return *this;}
    inline CalculateRoutesResult& WithRoutes(Aws::Vector<Route>&& value) { SetRoutes(std::move(value)); return *this;}
    inline CalculateRoutesResult& AddRoutes(const Route& value) { m_routes.push_back(value); return *this; }
    inline CalculateRoutesResult& AddRoutes(Route&& value) { m_routes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CalculateRoutesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CalculateRoutesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CalculateRoutesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    GeometryFormat m_legGeometryFormat;

    Aws::Vector<RouteResponseNotice> m_notices;

    Aws::String m_pricingBucket;

    Aws::Vector<Route> m_routes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
