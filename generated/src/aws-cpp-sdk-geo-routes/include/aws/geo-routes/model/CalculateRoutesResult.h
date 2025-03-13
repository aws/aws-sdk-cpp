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
    AWS_GEOROUTES_API CalculateRoutesResult() = default;
    AWS_GEOROUTES_API CalculateRoutesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GEOROUTES_API CalculateRoutesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the format of the geometry returned for each leg of the route.</p>
     */
    inline GeometryFormat GetLegGeometryFormat() const { return m_legGeometryFormat; }
    inline void SetLegGeometryFormat(GeometryFormat value) { m_legGeometryFormatHasBeenSet = true; m_legGeometryFormat = value; }
    inline CalculateRoutesResult& WithLegGeometryFormat(GeometryFormat value) { SetLegGeometryFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Notices are additional information returned that indicate issues that
     * occurred during route calculation.</p>
     */
    inline const Aws::Vector<RouteResponseNotice>& GetNotices() const { return m_notices; }
    template<typename NoticesT = Aws::Vector<RouteResponseNotice>>
    void SetNotices(NoticesT&& value) { m_noticesHasBeenSet = true; m_notices = std::forward<NoticesT>(value); }
    template<typename NoticesT = Aws::Vector<RouteResponseNotice>>
    CalculateRoutesResult& WithNotices(NoticesT&& value) { SetNotices(std::forward<NoticesT>(value)); return *this;}
    template<typename NoticesT = RouteResponseNotice>
    CalculateRoutesResult& AddNotices(NoticesT&& value) { m_noticesHasBeenSet = true; m_notices.emplace_back(std::forward<NoticesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pricing bucket for which the query is charged at.</p>
     */
    inline const Aws::String& GetPricingBucket() const { return m_pricingBucket; }
    template<typename PricingBucketT = Aws::String>
    void SetPricingBucket(PricingBucketT&& value) { m_pricingBucketHasBeenSet = true; m_pricingBucket = std::forward<PricingBucketT>(value); }
    template<typename PricingBucketT = Aws::String>
    CalculateRoutesResult& WithPricingBucket(PricingBucketT&& value) { SetPricingBucket(std::forward<PricingBucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path from the origin to the destination.</p>
     */
    inline const Aws::Vector<Route>& GetRoutes() const { return m_routes; }
    template<typename RoutesT = Aws::Vector<Route>>
    void SetRoutes(RoutesT&& value) { m_routesHasBeenSet = true; m_routes = std::forward<RoutesT>(value); }
    template<typename RoutesT = Aws::Vector<Route>>
    CalculateRoutesResult& WithRoutes(RoutesT&& value) { SetRoutes(std::forward<RoutesT>(value)); return *this;}
    template<typename RoutesT = Route>
    CalculateRoutesResult& AddRoutes(RoutesT&& value) { m_routesHasBeenSet = true; m_routes.emplace_back(std::forward<RoutesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CalculateRoutesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    GeometryFormat m_legGeometryFormat{GeometryFormat::NOT_SET};
    bool m_legGeometryFormatHasBeenSet = false;

    Aws::Vector<RouteResponseNotice> m_notices;
    bool m_noticesHasBeenSet = false;

    Aws::String m_pricingBucket;
    bool m_pricingBucketHasBeenSet = false;

    Aws::Vector<Route> m_routes;
    bool m_routesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
