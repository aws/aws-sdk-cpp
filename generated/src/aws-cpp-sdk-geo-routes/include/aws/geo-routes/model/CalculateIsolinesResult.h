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
    AWS_GEOROUTES_API CalculateIsolinesResult() = default;
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
    inline const Aws::String& GetArrivalTime() const { return m_arrivalTime; }
    template<typename ArrivalTimeT = Aws::String>
    void SetArrivalTime(ArrivalTimeT&& value) { m_arrivalTimeHasBeenSet = true; m_arrivalTime = std::forward<ArrivalTimeT>(value); }
    template<typename ArrivalTimeT = Aws::String>
    CalculateIsolinesResult& WithArrivalTime(ArrivalTimeT&& value) { SetArrivalTime(std::forward<ArrivalTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time of departure from thr origin.</p> <p>Time
     * format:<code>YYYY-MM-DDThh:mm:ss.sssZ | YYYY-MM-DDThh:mm:ss.sss+hh:mm</code>
     * </p> <p>Examples:</p> <p> <code>2020-04-22T17:57:24Z</code> </p> <p>
     * <code>2020-04-22T17:57:24+02:00</code> </p>
     */
    inline const Aws::String& GetDepartureTime() const { return m_departureTime; }
    template<typename DepartureTimeT = Aws::String>
    void SetDepartureTime(DepartureTimeT&& value) { m_departureTimeHasBeenSet = true; m_departureTime = std::forward<DepartureTimeT>(value); }
    template<typename DepartureTimeT = Aws::String>
    CalculateIsolinesResult& WithDepartureTime(DepartureTimeT&& value) { SetDepartureTime(std::forward<DepartureTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the returned IsolineGeometry. </p> <p>Default
     * Value:<code>FlexiblePolyline</code> </p>
     */
    inline GeometryFormat GetIsolineGeometryFormat() const { return m_isolineGeometryFormat; }
    inline void SetIsolineGeometryFormat(GeometryFormat value) { m_isolineGeometryFormatHasBeenSet = true; m_isolineGeometryFormat = value; }
    inline CalculateIsolinesResult& WithIsolineGeometryFormat(GeometryFormat value) { SetIsolineGeometryFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Calculated isolines and associated properties.</p>
     */
    inline const Aws::Vector<Isoline>& GetIsolines() const { return m_isolines; }
    template<typename IsolinesT = Aws::Vector<Isoline>>
    void SetIsolines(IsolinesT&& value) { m_isolinesHasBeenSet = true; m_isolines = std::forward<IsolinesT>(value); }
    template<typename IsolinesT = Aws::Vector<Isoline>>
    CalculateIsolinesResult& WithIsolines(IsolinesT&& value) { SetIsolines(std::forward<IsolinesT>(value)); return *this;}
    template<typename IsolinesT = Isoline>
    CalculateIsolinesResult& AddIsolines(IsolinesT&& value) { m_isolinesHasBeenSet = true; m_isolines.emplace_back(std::forward<IsolinesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pricing bucket for which the query is charged at.</p>
     */
    inline const Aws::String& GetPricingBucket() const { return m_pricingBucket; }
    template<typename PricingBucketT = Aws::String>
    void SetPricingBucket(PricingBucketT&& value) { m_pricingBucketHasBeenSet = true; m_pricingBucket = std::forward<PricingBucketT>(value); }
    template<typename PricingBucketT = Aws::String>
    CalculateIsolinesResult& WithPricingBucket(PricingBucketT&& value) { SetPricingBucket(std::forward<PricingBucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Snapped destination that was used for the Isoline calculation.</p>
     */
    inline const Aws::Vector<double>& GetSnappedDestination() const { return m_snappedDestination; }
    template<typename SnappedDestinationT = Aws::Vector<double>>
    void SetSnappedDestination(SnappedDestinationT&& value) { m_snappedDestinationHasBeenSet = true; m_snappedDestination = std::forward<SnappedDestinationT>(value); }
    template<typename SnappedDestinationT = Aws::Vector<double>>
    CalculateIsolinesResult& WithSnappedDestination(SnappedDestinationT&& value) { SetSnappedDestination(std::forward<SnappedDestinationT>(value)); return *this;}
    inline CalculateIsolinesResult& AddSnappedDestination(double value) { m_snappedDestinationHasBeenSet = true; m_snappedDestination.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Snapped origin that was used for the Isoline calculation.</p>
     */
    inline const Aws::Vector<double>& GetSnappedOrigin() const { return m_snappedOrigin; }
    template<typename SnappedOriginT = Aws::Vector<double>>
    void SetSnappedOrigin(SnappedOriginT&& value) { m_snappedOriginHasBeenSet = true; m_snappedOrigin = std::forward<SnappedOriginT>(value); }
    template<typename SnappedOriginT = Aws::Vector<double>>
    CalculateIsolinesResult& WithSnappedOrigin(SnappedOriginT&& value) { SetSnappedOrigin(std::forward<SnappedOriginT>(value)); return *this;}
    inline CalculateIsolinesResult& AddSnappedOrigin(double value) { m_snappedOriginHasBeenSet = true; m_snappedOrigin.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CalculateIsolinesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arrivalTime;
    bool m_arrivalTimeHasBeenSet = false;

    Aws::String m_departureTime;
    bool m_departureTimeHasBeenSet = false;

    GeometryFormat m_isolineGeometryFormat{GeometryFormat::NOT_SET};
    bool m_isolineGeometryFormatHasBeenSet = false;

    Aws::Vector<Isoline> m_isolines;
    bool m_isolinesHasBeenSet = false;

    Aws::String m_pricingBucket;
    bool m_pricingBucketHasBeenSet = false;

    Aws::Vector<double> m_snappedDestination;
    bool m_snappedDestinationHasBeenSet = false;

    Aws::Vector<double> m_snappedOrigin;
    bool m_snappedOriginHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
