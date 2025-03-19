/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/RouteMatrixBoundary.h>
#include <aws/geo-routes/model/RouteMatrixEntry.h>
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
  class CalculateRouteMatrixResult
  {
  public:
    AWS_GEOROUTES_API CalculateRouteMatrixResult() = default;
    AWS_GEOROUTES_API CalculateRouteMatrixResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GEOROUTES_API CalculateRouteMatrixResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The count of error results in the route matrix. If this number is 0, all
     * routes were calculated successfully.</p>
     */
    inline int GetErrorCount() const { return m_errorCount; }
    inline void SetErrorCount(int value) { m_errorCountHasBeenSet = true; m_errorCount = value; }
    inline CalculateRouteMatrixResult& WithErrorCount(int value) { SetErrorCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pricing bucket for which the query is charged at.</p>
     */
    inline const Aws::String& GetPricingBucket() const { return m_pricingBucket; }
    template<typename PricingBucketT = Aws::String>
    void SetPricingBucket(PricingBucketT&& value) { m_pricingBucketHasBeenSet = true; m_pricingBucket = std::forward<PricingBucketT>(value); }
    template<typename PricingBucketT = Aws::String>
    CalculateRouteMatrixResult& WithPricingBucket(PricingBucketT&& value) { SetPricingBucket(std::forward<PricingBucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The calculated route matrix containing the results for all pairs of Origins
     * to Destination positions. Each row corresponds to one entry in Origins. Each
     * entry in the row corresponds to the route from that entry in Origins to an entry
     * in Destination positions.</p>
     */
    inline const Aws::Vector<Aws::Vector<RouteMatrixEntry>>& GetRouteMatrix() const { return m_routeMatrix; }
    template<typename RouteMatrixT = Aws::Vector<Aws::Vector<RouteMatrixEntry>>>
    void SetRouteMatrix(RouteMatrixT&& value) { m_routeMatrixHasBeenSet = true; m_routeMatrix = std::forward<RouteMatrixT>(value); }
    template<typename RouteMatrixT = Aws::Vector<Aws::Vector<RouteMatrixEntry>>>
    CalculateRouteMatrixResult& WithRouteMatrix(RouteMatrixT&& value) { SetRouteMatrix(std::forward<RouteMatrixT>(value)); return *this;}
    template<typename RouteMatrixT = Aws::Vector<RouteMatrixEntry>>
    CalculateRouteMatrixResult& AddRouteMatrix(RouteMatrixT&& value) { m_routeMatrixHasBeenSet = true; m_routeMatrix.emplace_back(std::forward<RouteMatrixT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Boundary within which the matrix is to be calculated. All data, origins and
     * destinations outside the boundary are considered invalid.</p>  <p>When
     * request routing boundary was set as AutoCircle, the response routing boundary
     * will return Circle derived from the AutoCircle settings.</p> 
     */
    inline const RouteMatrixBoundary& GetRoutingBoundary() const { return m_routingBoundary; }
    template<typename RoutingBoundaryT = RouteMatrixBoundary>
    void SetRoutingBoundary(RoutingBoundaryT&& value) { m_routingBoundaryHasBeenSet = true; m_routingBoundary = std::forward<RoutingBoundaryT>(value); }
    template<typename RoutingBoundaryT = RouteMatrixBoundary>
    CalculateRouteMatrixResult& WithRoutingBoundary(RoutingBoundaryT&& value) { SetRoutingBoundary(std::forward<RoutingBoundaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CalculateRouteMatrixResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_errorCount{0};
    bool m_errorCountHasBeenSet = false;

    Aws::String m_pricingBucket;
    bool m_pricingBucketHasBeenSet = false;

    Aws::Vector<Aws::Vector<RouteMatrixEntry>> m_routeMatrix;
    bool m_routeMatrixHasBeenSet = false;

    RouteMatrixBoundary m_routingBoundary;
    bool m_routingBoundaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
