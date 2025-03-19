/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/UpdateVehicleResponseItem.h>
#include <aws/iotfleetwise/model/UpdateVehicleError.h>
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
  class BatchUpdateVehicleResult
  {
  public:
    AWS_IOTFLEETWISE_API BatchUpdateVehicleResult() = default;
    AWS_IOTFLEETWISE_API BatchUpdateVehicleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API BatchUpdateVehicleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of information about the batch of updated vehicles. </p> 
     * <p>This list contains only unique IDs for the vehicles that were updated.</p>
     * 
     */
    inline const Aws::Vector<UpdateVehicleResponseItem>& GetVehicles() const { return m_vehicles; }
    template<typename VehiclesT = Aws::Vector<UpdateVehicleResponseItem>>
    void SetVehicles(VehiclesT&& value) { m_vehiclesHasBeenSet = true; m_vehicles = std::forward<VehiclesT>(value); }
    template<typename VehiclesT = Aws::Vector<UpdateVehicleResponseItem>>
    BatchUpdateVehicleResult& WithVehicles(VehiclesT&& value) { SetVehicles(std::forward<VehiclesT>(value)); return *this;}
    template<typename VehiclesT = UpdateVehicleResponseItem>
    BatchUpdateVehicleResult& AddVehicles(VehiclesT&& value) { m_vehiclesHasBeenSet = true; m_vehicles.emplace_back(std::forward<VehiclesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of information about errors returned while updating a batch of
     * vehicles, or, if there aren't any errors, an empty list.</p>
     */
    inline const Aws::Vector<UpdateVehicleError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<UpdateVehicleError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<UpdateVehicleError>>
    BatchUpdateVehicleResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = UpdateVehicleError>
    BatchUpdateVehicleResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchUpdateVehicleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UpdateVehicleResponseItem> m_vehicles;
    bool m_vehiclesHasBeenSet = false;

    Aws::Vector<UpdateVehicleError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
