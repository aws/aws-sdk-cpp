/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/VehicleSummary.h>
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
namespace IoTFleetWise
{
namespace Model
{
  class ListVehiclesResult
  {
  public:
    AWS_IOTFLEETWISE_API ListVehiclesResult() = default;
    AWS_IOTFLEETWISE_API ListVehiclesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API ListVehiclesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of vehicles and information about them. </p>
     */
    inline const Aws::Vector<VehicleSummary>& GetVehicleSummaries() const { return m_vehicleSummaries; }
    template<typename VehicleSummariesT = Aws::Vector<VehicleSummary>>
    void SetVehicleSummaries(VehicleSummariesT&& value) { m_vehicleSummariesHasBeenSet = true; m_vehicleSummaries = std::forward<VehicleSummariesT>(value); }
    template<typename VehicleSummariesT = Aws::Vector<VehicleSummary>>
    ListVehiclesResult& WithVehicleSummaries(VehicleSummariesT&& value) { SetVehicleSummaries(std::forward<VehicleSummariesT>(value)); return *this;}
    template<typename VehicleSummariesT = VehicleSummary>
    ListVehiclesResult& AddVehicleSummaries(VehicleSummariesT&& value) { m_vehicleSummariesHasBeenSet = true; m_vehicleSummaries.emplace_back(std::forward<VehicleSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVehiclesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVehiclesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VehicleSummary> m_vehicleSummaries;
    bool m_vehicleSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
