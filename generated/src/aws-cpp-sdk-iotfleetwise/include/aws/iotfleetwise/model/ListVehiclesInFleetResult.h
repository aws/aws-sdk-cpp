/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListVehiclesInFleetResult
  {
  public:
    AWS_IOTFLEETWISE_API ListVehiclesInFleetResult() = default;
    AWS_IOTFLEETWISE_API ListVehiclesInFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API ListVehiclesInFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of vehicles associated with the fleet. </p>
     */
    inline const Aws::Vector<Aws::String>& GetVehicles() const { return m_vehicles; }
    template<typename VehiclesT = Aws::Vector<Aws::String>>
    void SetVehicles(VehiclesT&& value) { m_vehiclesHasBeenSet = true; m_vehicles = std::forward<VehiclesT>(value); }
    template<typename VehiclesT = Aws::Vector<Aws::String>>
    ListVehiclesInFleetResult& WithVehicles(VehiclesT&& value) { SetVehicles(std::forward<VehiclesT>(value)); return *this;}
    template<typename VehiclesT = Aws::String>
    ListVehiclesInFleetResult& AddVehicles(VehiclesT&& value) { m_vehiclesHasBeenSet = true; m_vehicles.emplace_back(std::forward<VehiclesT>(value)); return *this; }
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
    ListVehiclesInFleetResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVehiclesInFleetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_vehicles;
    bool m_vehiclesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
