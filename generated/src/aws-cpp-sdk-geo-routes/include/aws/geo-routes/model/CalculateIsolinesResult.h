/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/GeometryFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/Isoline.h>
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
  class CalculateIsolinesResult
  {
  public:
    AWS_GEOROUTES_API CalculateIsolinesResult();
    AWS_GEOROUTES_API CalculateIsolinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GEOROUTES_API CalculateIsolinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Time of arrival at the destination. This parameter is returned only if the
     * Destination parameters was provided in the request. </p> <p>Time
     * format:<code>YYYY-MM-DDThh:mm:ss.sssZ | YYYY-MM-DDThh:mm:ss.sss+hh:mm</code>
     * </p> <p>Examples:</p> <p> <code>2020-04-22T17:57:24Z</code> </p> <p>
     * <code>2020-04-22T17:57:24+02:00</code> </p>
     */
    inline const Aws::String& GetArrivalTime() const{ return m_arrivalTime; }
    inline void SetArrivalTime(const Aws::String& value) { m_arrivalTime = value; }
    inline void SetArrivalTime(Aws::String&& value) { m_arrivalTime = std::move(value); }
    inline void SetArrivalTime(const char* value) { m_arrivalTime.assign(value); }
    inline CalculateIsolinesResult& WithArrivalTime(const Aws::String& value) { SetArrivalTime(value); return *this;}
    inline CalculateIsolinesResult& WithArrivalTime(Aws::String&& value) { SetArrivalTime(std::move(value)); return *this;}
    inline CalculateIsolinesResult& WithArrivalTime(const char* value) { SetArrivalTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time of departure from thr origin.</p> <p>Time
     * format:<code>YYYY-MM-DDThh:mm:ss.sssZ | YYYY-MM-DDThh:mm:ss.sss+hh:mm</code>
     * </p> <p>Examples:</p> <p> <code>2020-04-22T17:57:24Z</code> </p> <p>
     * <code>2020-04-22T17:57:24+02:00</code> </p>
     */
    inline const Aws::String& GetDepartureTime() const{ return m_departureTime; }
    inline void SetDepartureTime(const Aws::String& value) { m_departureTime = value; }
    inline void SetDepartureTime(Aws::String&& value) { m_departureTime = std::move(value); }
    inline void SetDepartureTime(const char* value) { m_departureTime.assign(value); }
    inline CalculateIsolinesResult& WithDepartureTime(const Aws::String& value) { SetDepartureTime(value); return *this;}
    inline CalculateIsolinesResult& WithDepartureTime(Aws::String&& value) { SetDepartureTime(std::move(value)); return *this;}
    inline CalculateIsolinesResult& WithDepartureTime(const char* value) { SetDepartureTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the returned IsolineGeometry. </p> <p>Default
     * Value:<code>FlexiblePolyline</code> </p>
     */
    inline const GeometryFormat& GetIsolineGeometryFormat() const{ return m_isolineGeometryFormat; }
    inline void SetIsolineGeometryFormat(const GeometryFormat& value) { m_isolineGeometryFormat = value; }
    inline void SetIsolineGeometryFormat(GeometryFormat&& value) { m_isolineGeometryFormat = std::move(value); }
    inline CalculateIsolinesResult& WithIsolineGeometryFormat(const GeometryFormat& value) { SetIsolineGeometryFormat(value); return *this;}
    inline CalculateIsolinesResult& WithIsolineGeometryFormat(GeometryFormat&& value) { SetIsolineGeometryFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Calculated isolines and associated properties.</p>
     */
    inline const Aws::Vector<Isoline>& GetIsolines() const{ return m_isolines; }
    inline void SetIsolines(const Aws::Vector<Isoline>& value) { m_isolines = value; }
    inline void SetIsolines(Aws::Vector<Isoline>&& value) { m_isolines = std::move(value); }
    inline CalculateIsolinesResult& WithIsolines(const Aws::Vector<Isoline>& value) { SetIsolines(value); return *this;}
    inline CalculateIsolinesResult& WithIsolines(Aws::Vector<Isoline>&& value) { SetIsolines(std::move(value)); return *this;}
    inline CalculateIsolinesResult& AddIsolines(const Isoline& value) { m_isolines.push_back(value); return *this; }
    inline CalculateIsolinesResult& AddIsolines(Isoline&& value) { m_isolines.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pricing bucket for which the query is charged at.</p>
     */
    inline const Aws::String& GetPricingBucket() const{ return m_pricingBucket; }
    inline void SetPricingBucket(const Aws::String& value) { m_pricingBucket = value; }
    inline void SetPricingBucket(Aws::String&& value) { m_pricingBucket = std::move(value); }
    inline void SetPricingBucket(const char* value) { m_pricingBucket.assign(value); }
    inline CalculateIsolinesResult& WithPricingBucket(const Aws::String& value) { SetPricingBucket(value); return *this;}
    inline CalculateIsolinesResult& WithPricingBucket(Aws::String&& value) { SetPricingBucket(std::move(value)); return *this;}
    inline CalculateIsolinesResult& WithPricingBucket(const char* value) { SetPricingBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Snapped destination that was used for the Isoline calculation.</p>
     */
    inline const Aws::Vector<double>& GetSnappedDestination() const{ return m_snappedDestination; }
    inline void SetSnappedDestination(const Aws::Vector<double>& value) { m_snappedDestination = value; }
    inline void SetSnappedDestination(Aws::Vector<double>&& value) { m_snappedDestination = std::move(value); }
    inline CalculateIsolinesResult& WithSnappedDestination(const Aws::Vector<double>& value) { SetSnappedDestination(value); return *this;}
    inline CalculateIsolinesResult& WithSnappedDestination(Aws::Vector<double>&& value) { SetSnappedDestination(std::move(value)); return *this;}
    inline CalculateIsolinesResult& AddSnappedDestination(double value) { m_snappedDestination.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Snapped origin that was used for the Isoline calculation.</p>
     */
    inline const Aws::Vector<double>& GetSnappedOrigin() const{ return m_snappedOrigin; }
    inline void SetSnappedOrigin(const Aws::Vector<double>& value) { m_snappedOrigin = value; }
    inline void SetSnappedOrigin(Aws::Vector<double>&& value) { m_snappedOrigin = std::move(value); }
    inline CalculateIsolinesResult& WithSnappedOrigin(const Aws::Vector<double>& value) { SetSnappedOrigin(value); return *this;}
    inline CalculateIsolinesResult& WithSnappedOrigin(Aws::Vector<double>&& value) { SetSnappedOrigin(std::move(value)); return *this;}
    inline CalculateIsolinesResult& AddSnappedOrigin(double value) { m_snappedOrigin.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CalculateIsolinesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CalculateIsolinesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CalculateIsolinesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arrivalTime;

    Aws::String m_departureTime;

    GeometryFormat m_isolineGeometryFormat;

    Aws::Vector<Isoline> m_isolines;

    Aws::String m_pricingBucket;

    Aws::Vector<double> m_snappedDestination;

    Aws::Vector<double> m_snappedOrigin;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
