/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/model/CalculateRouteMatrixSummary.h>
#include <aws/location/model/RouteMatrixEntry.h>
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
namespace LocationService
{
namespace Model
{
  /**
   * <p>Returns the result of the route matrix calculation.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CalculateRouteMatrixResponse">AWS
   * API Reference</a></p>
   */
  class CalculateRouteMatrixResult
  {
  public:
    AWS_LOCATIONSERVICE_API CalculateRouteMatrixResult();
    AWS_LOCATIONSERVICE_API CalculateRouteMatrixResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API CalculateRouteMatrixResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The calculated route matrix containing the results for all pairs of
     * <code>DeparturePositions</code> to <code>DestinationPositions</code>. Each row
     * corresponds to one entry in <code>DeparturePositions</code>. Each entry in the
     * row corresponds to the route from that entry in <code>DeparturePositions</code>
     * to an entry in <code>DestinationPositions</code>. </p>
     */
    inline const Aws::Vector<Aws::Vector<RouteMatrixEntry>>& GetRouteMatrix() const{ return m_routeMatrix; }

    /**
     * <p>The calculated route matrix containing the results for all pairs of
     * <code>DeparturePositions</code> to <code>DestinationPositions</code>. Each row
     * corresponds to one entry in <code>DeparturePositions</code>. Each entry in the
     * row corresponds to the route from that entry in <code>DeparturePositions</code>
     * to an entry in <code>DestinationPositions</code>. </p>
     */
    inline void SetRouteMatrix(const Aws::Vector<Aws::Vector<RouteMatrixEntry>>& value) { m_routeMatrix = value; }

    /**
     * <p>The calculated route matrix containing the results for all pairs of
     * <code>DeparturePositions</code> to <code>DestinationPositions</code>. Each row
     * corresponds to one entry in <code>DeparturePositions</code>. Each entry in the
     * row corresponds to the route from that entry in <code>DeparturePositions</code>
     * to an entry in <code>DestinationPositions</code>. </p>
     */
    inline void SetRouteMatrix(Aws::Vector<Aws::Vector<RouteMatrixEntry>>&& value) { m_routeMatrix = std::move(value); }

    /**
     * <p>The calculated route matrix containing the results for all pairs of
     * <code>DeparturePositions</code> to <code>DestinationPositions</code>. Each row
     * corresponds to one entry in <code>DeparturePositions</code>. Each entry in the
     * row corresponds to the route from that entry in <code>DeparturePositions</code>
     * to an entry in <code>DestinationPositions</code>. </p>
     */
    inline CalculateRouteMatrixResult& WithRouteMatrix(const Aws::Vector<Aws::Vector<RouteMatrixEntry>>& value) { SetRouteMatrix(value); return *this;}

    /**
     * <p>The calculated route matrix containing the results for all pairs of
     * <code>DeparturePositions</code> to <code>DestinationPositions</code>. Each row
     * corresponds to one entry in <code>DeparturePositions</code>. Each entry in the
     * row corresponds to the route from that entry in <code>DeparturePositions</code>
     * to an entry in <code>DestinationPositions</code>. </p>
     */
    inline CalculateRouteMatrixResult& WithRouteMatrix(Aws::Vector<Aws::Vector<RouteMatrixEntry>>&& value) { SetRouteMatrix(std::move(value)); return *this;}

    /**
     * <p>The calculated route matrix containing the results for all pairs of
     * <code>DeparturePositions</code> to <code>DestinationPositions</code>. Each row
     * corresponds to one entry in <code>DeparturePositions</code>. Each entry in the
     * row corresponds to the route from that entry in <code>DeparturePositions</code>
     * to an entry in <code>DestinationPositions</code>. </p>
     */
    inline CalculateRouteMatrixResult& AddRouteMatrix(const Aws::Vector<RouteMatrixEntry>& value) { m_routeMatrix.push_back(value); return *this; }

    /**
     * <p>The calculated route matrix containing the results for all pairs of
     * <code>DeparturePositions</code> to <code>DestinationPositions</code>. Each row
     * corresponds to one entry in <code>DeparturePositions</code>. Each entry in the
     * row corresponds to the route from that entry in <code>DeparturePositions</code>
     * to an entry in <code>DestinationPositions</code>. </p>
     */
    inline CalculateRouteMatrixResult& AddRouteMatrix(Aws::Vector<RouteMatrixEntry>&& value) { m_routeMatrix.push_back(std::move(value)); return *this; }


    /**
     * <p>For routes calculated using an Esri route calculator resource, departure
     * positions are snapped to the closest road. For Esri route calculator resources,
     * this returns the list of departure/origin positions used for calculation of the
     * <code>RouteMatrix</code>.</p>
     */
    inline const Aws::Vector<Aws::Vector<double>>& GetSnappedDeparturePositions() const{ return m_snappedDeparturePositions; }

    /**
     * <p>For routes calculated using an Esri route calculator resource, departure
     * positions are snapped to the closest road. For Esri route calculator resources,
     * this returns the list of departure/origin positions used for calculation of the
     * <code>RouteMatrix</code>.</p>
     */
    inline void SetSnappedDeparturePositions(const Aws::Vector<Aws::Vector<double>>& value) { m_snappedDeparturePositions = value; }

    /**
     * <p>For routes calculated using an Esri route calculator resource, departure
     * positions are snapped to the closest road. For Esri route calculator resources,
     * this returns the list of departure/origin positions used for calculation of the
     * <code>RouteMatrix</code>.</p>
     */
    inline void SetSnappedDeparturePositions(Aws::Vector<Aws::Vector<double>>&& value) { m_snappedDeparturePositions = std::move(value); }

    /**
     * <p>For routes calculated using an Esri route calculator resource, departure
     * positions are snapped to the closest road. For Esri route calculator resources,
     * this returns the list of departure/origin positions used for calculation of the
     * <code>RouteMatrix</code>.</p>
     */
    inline CalculateRouteMatrixResult& WithSnappedDeparturePositions(const Aws::Vector<Aws::Vector<double>>& value) { SetSnappedDeparturePositions(value); return *this;}

    /**
     * <p>For routes calculated using an Esri route calculator resource, departure
     * positions are snapped to the closest road. For Esri route calculator resources,
     * this returns the list of departure/origin positions used for calculation of the
     * <code>RouteMatrix</code>.</p>
     */
    inline CalculateRouteMatrixResult& WithSnappedDeparturePositions(Aws::Vector<Aws::Vector<double>>&& value) { SetSnappedDeparturePositions(std::move(value)); return *this;}

    /**
     * <p>For routes calculated using an Esri route calculator resource, departure
     * positions are snapped to the closest road. For Esri route calculator resources,
     * this returns the list of departure/origin positions used for calculation of the
     * <code>RouteMatrix</code>.</p>
     */
    inline CalculateRouteMatrixResult& AddSnappedDeparturePositions(const Aws::Vector<double>& value) { m_snappedDeparturePositions.push_back(value); return *this; }

    /**
     * <p>For routes calculated using an Esri route calculator resource, departure
     * positions are snapped to the closest road. For Esri route calculator resources,
     * this returns the list of departure/origin positions used for calculation of the
     * <code>RouteMatrix</code>.</p>
     */
    inline CalculateRouteMatrixResult& AddSnappedDeparturePositions(Aws::Vector<double>&& value) { m_snappedDeparturePositions.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of destination positions for the route matrix used for calculation
     * of the <code>RouteMatrix</code>.</p>
     */
    inline const Aws::Vector<Aws::Vector<double>>& GetSnappedDestinationPositions() const{ return m_snappedDestinationPositions; }

    /**
     * <p>The list of destination positions for the route matrix used for calculation
     * of the <code>RouteMatrix</code>.</p>
     */
    inline void SetSnappedDestinationPositions(const Aws::Vector<Aws::Vector<double>>& value) { m_snappedDestinationPositions = value; }

    /**
     * <p>The list of destination positions for the route matrix used for calculation
     * of the <code>RouteMatrix</code>.</p>
     */
    inline void SetSnappedDestinationPositions(Aws::Vector<Aws::Vector<double>>&& value) { m_snappedDestinationPositions = std::move(value); }

    /**
     * <p>The list of destination positions for the route matrix used for calculation
     * of the <code>RouteMatrix</code>.</p>
     */
    inline CalculateRouteMatrixResult& WithSnappedDestinationPositions(const Aws::Vector<Aws::Vector<double>>& value) { SetSnappedDestinationPositions(value); return *this;}

    /**
     * <p>The list of destination positions for the route matrix used for calculation
     * of the <code>RouteMatrix</code>.</p>
     */
    inline CalculateRouteMatrixResult& WithSnappedDestinationPositions(Aws::Vector<Aws::Vector<double>>&& value) { SetSnappedDestinationPositions(std::move(value)); return *this;}

    /**
     * <p>The list of destination positions for the route matrix used for calculation
     * of the <code>RouteMatrix</code>.</p>
     */
    inline CalculateRouteMatrixResult& AddSnappedDestinationPositions(const Aws::Vector<double>& value) { m_snappedDestinationPositions.push_back(value); return *this; }

    /**
     * <p>The list of destination positions for the route matrix used for calculation
     * of the <code>RouteMatrix</code>.</p>
     */
    inline CalculateRouteMatrixResult& AddSnappedDestinationPositions(Aws::Vector<double>&& value) { m_snappedDestinationPositions.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains information about the route matrix, <code>DataSource</code>,
     * <code>DistanceUnit</code>, <code>RouteCount</code> and
     * <code>ErrorCount</code>.</p>
     */
    inline const CalculateRouteMatrixSummary& GetSummary() const{ return m_summary; }

    /**
     * <p>Contains information about the route matrix, <code>DataSource</code>,
     * <code>DistanceUnit</code>, <code>RouteCount</code> and
     * <code>ErrorCount</code>.</p>
     */
    inline void SetSummary(const CalculateRouteMatrixSummary& value) { m_summary = value; }

    /**
     * <p>Contains information about the route matrix, <code>DataSource</code>,
     * <code>DistanceUnit</code>, <code>RouteCount</code> and
     * <code>ErrorCount</code>.</p>
     */
    inline void SetSummary(CalculateRouteMatrixSummary&& value) { m_summary = std::move(value); }

    /**
     * <p>Contains information about the route matrix, <code>DataSource</code>,
     * <code>DistanceUnit</code>, <code>RouteCount</code> and
     * <code>ErrorCount</code>.</p>
     */
    inline CalculateRouteMatrixResult& WithSummary(const CalculateRouteMatrixSummary& value) { SetSummary(value); return *this;}

    /**
     * <p>Contains information about the route matrix, <code>DataSource</code>,
     * <code>DistanceUnit</code>, <code>RouteCount</code> and
     * <code>ErrorCount</code>.</p>
     */
    inline CalculateRouteMatrixResult& WithSummary(CalculateRouteMatrixSummary&& value) { SetSummary(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::Vector<RouteMatrixEntry>> m_routeMatrix;

    Aws::Vector<Aws::Vector<double>> m_snappedDeparturePositions;

    Aws::Vector<Aws::Vector<double>> m_snappedDestinationPositions;

    CalculateRouteMatrixSummary m_summary;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
