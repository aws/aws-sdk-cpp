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
    AWS_GEOROUTES_API CalculateRouteMatrixResult();
    AWS_GEOROUTES_API CalculateRouteMatrixResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GEOROUTES_API CalculateRouteMatrixResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The count of error results in the route matrix. If this number is 0, all
     * routes were calculated successfully.</p>
     */
    inline int GetErrorCount() const{ return m_errorCount; }
    inline void SetErrorCount(int value) { m_errorCount = value; }
    inline CalculateRouteMatrixResult& WithErrorCount(int value) { SetErrorCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pricing bucket for which the query is charged at.</p>
     */
    inline const Aws::String& GetPricingBucket() const{ return m_pricingBucket; }
    inline void SetPricingBucket(const Aws::String& value) { m_pricingBucket = value; }
    inline void SetPricingBucket(Aws::String&& value) { m_pricingBucket = std::move(value); }
    inline void SetPricingBucket(const char* value) { m_pricingBucket.assign(value); }
    inline CalculateRouteMatrixResult& WithPricingBucket(const Aws::String& value) { SetPricingBucket(value); return *this;}
    inline CalculateRouteMatrixResult& WithPricingBucket(Aws::String&& value) { SetPricingBucket(std::move(value)); return *this;}
    inline CalculateRouteMatrixResult& WithPricingBucket(const char* value) { SetPricingBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The calculated route matrix containing the results for all pairs of Origins
     * to Destination positions. Each row corresponds to one entry in Origins. Each
     * entry in the row corresponds to the route from that entry in Origins to an entry
     * in Destination positions.</p>
     */
    inline const Aws::Vector<Aws::Vector<RouteMatrixEntry>>& GetRouteMatrix() const{ return m_routeMatrix; }
    inline void SetRouteMatrix(const Aws::Vector<Aws::Vector<RouteMatrixEntry>>& value) { m_routeMatrix = value; }
    inline void SetRouteMatrix(Aws::Vector<Aws::Vector<RouteMatrixEntry>>&& value) { m_routeMatrix = std::move(value); }
    inline CalculateRouteMatrixResult& WithRouteMatrix(const Aws::Vector<Aws::Vector<RouteMatrixEntry>>& value) { SetRouteMatrix(value); return *this;}
    inline CalculateRouteMatrixResult& WithRouteMatrix(Aws::Vector<Aws::Vector<RouteMatrixEntry>>&& value) { SetRouteMatrix(std::move(value)); return *this;}
    inline CalculateRouteMatrixResult& AddRouteMatrix(const Aws::Vector<RouteMatrixEntry>& value) { m_routeMatrix.push_back(value); return *this; }
    inline CalculateRouteMatrixResult& AddRouteMatrix(Aws::Vector<RouteMatrixEntry>&& value) { m_routeMatrix.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Boundary within which the matrix is to be calculated. All data, origins and
     * destinations outside the boundary are considered invalid.</p>  <p>When
     * request routing boundary was set as AutoCircle, the response routing boundary
     * will return Circle derived from the AutoCircle settings.</p> 
     */
    inline const RouteMatrixBoundary& GetRoutingBoundary() const{ return m_routingBoundary; }
    inline void SetRoutingBoundary(const RouteMatrixBoundary& value) { m_routingBoundary = value; }
    inline void SetRoutingBoundary(RouteMatrixBoundary&& value) { m_routingBoundary = std::move(value); }
    inline CalculateRouteMatrixResult& WithRoutingBoundary(const RouteMatrixBoundary& value) { SetRoutingBoundary(value); return *this;}
    inline CalculateRouteMatrixResult& WithRoutingBoundary(RouteMatrixBoundary&& value) { SetRoutingBoundary(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CalculateRouteMatrixResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CalculateRouteMatrixResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CalculateRouteMatrixResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_errorCount;

    Aws::String m_pricingBucket;

    Aws::Vector<Aws::Vector<RouteMatrixEntry>> m_routeMatrix;

    RouteMatrixBoundary m_routingBoundary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
