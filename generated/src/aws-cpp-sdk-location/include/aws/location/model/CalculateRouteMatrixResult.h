/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/model/CalculateRouteMatrixSummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_LOCATIONSERVICE_API CalculateRouteMatrixResult() = default;
    AWS_LOCATIONSERVICE_API CalculateRouteMatrixResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API CalculateRouteMatrixResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The calculated route matrix containing the results for all pairs of
     * <code>DeparturePositions</code> to <code>DestinationPositions</code>. Each row
     * corresponds to one entry in <code>DeparturePositions</code>. Each entry in the
     * row corresponds to the route from that entry in <code>DeparturePositions</code>
     * to an entry in <code>DestinationPositions</code>. </p>
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
     * <p>For routes calculated using an Esri route calculator resource, departure
     * positions are snapped to the closest road. For Esri route calculator resources,
     * this returns the list of departure/origin positions used for calculation of the
     * <code>RouteMatrix</code>.</p>
     */
    inline const Aws::Vector<Aws::Vector<double>>& GetSnappedDeparturePositions() const { return m_snappedDeparturePositions; }
    template<typename SnappedDeparturePositionsT = Aws::Vector<Aws::Vector<double>>>
    void SetSnappedDeparturePositions(SnappedDeparturePositionsT&& value) { m_snappedDeparturePositionsHasBeenSet = true; m_snappedDeparturePositions = std::forward<SnappedDeparturePositionsT>(value); }
    template<typename SnappedDeparturePositionsT = Aws::Vector<Aws::Vector<double>>>
    CalculateRouteMatrixResult& WithSnappedDeparturePositions(SnappedDeparturePositionsT&& value) { SetSnappedDeparturePositions(std::forward<SnappedDeparturePositionsT>(value)); return *this;}
    template<typename SnappedDeparturePositionsT = Aws::Vector<double>>
    CalculateRouteMatrixResult& AddSnappedDeparturePositions(SnappedDeparturePositionsT&& value) { m_snappedDeparturePositionsHasBeenSet = true; m_snappedDeparturePositions.emplace_back(std::forward<SnappedDeparturePositionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of destination positions for the route matrix used for calculation
     * of the <code>RouteMatrix</code>.</p>
     */
    inline const Aws::Vector<Aws::Vector<double>>& GetSnappedDestinationPositions() const { return m_snappedDestinationPositions; }
    template<typename SnappedDestinationPositionsT = Aws::Vector<Aws::Vector<double>>>
    void SetSnappedDestinationPositions(SnappedDestinationPositionsT&& value) { m_snappedDestinationPositionsHasBeenSet = true; m_snappedDestinationPositions = std::forward<SnappedDestinationPositionsT>(value); }
    template<typename SnappedDestinationPositionsT = Aws::Vector<Aws::Vector<double>>>
    CalculateRouteMatrixResult& WithSnappedDestinationPositions(SnappedDestinationPositionsT&& value) { SetSnappedDestinationPositions(std::forward<SnappedDestinationPositionsT>(value)); return *this;}
    template<typename SnappedDestinationPositionsT = Aws::Vector<double>>
    CalculateRouteMatrixResult& AddSnappedDestinationPositions(SnappedDestinationPositionsT&& value) { m_snappedDestinationPositionsHasBeenSet = true; m_snappedDestinationPositions.emplace_back(std::forward<SnappedDestinationPositionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the route matrix, <code>DataSource</code>,
     * <code>DistanceUnit</code>, <code>RouteCount</code> and
     * <code>ErrorCount</code>.</p>
     */
    inline const CalculateRouteMatrixSummary& GetSummary() const { return m_summary; }
    template<typename SummaryT = CalculateRouteMatrixSummary>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = CalculateRouteMatrixSummary>
    CalculateRouteMatrixResult& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CalculateRouteMatrixResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Vector<RouteMatrixEntry>> m_routeMatrix;
    bool m_routeMatrixHasBeenSet = false;

    Aws::Vector<Aws::Vector<double>> m_snappedDeparturePositions;
    bool m_snappedDeparturePositionsHasBeenSet = false;

    Aws::Vector<Aws::Vector<double>> m_snappedDestinationPositions;
    bool m_snappedDestinationPositionsHasBeenSet = false;

    CalculateRouteMatrixSummary m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
