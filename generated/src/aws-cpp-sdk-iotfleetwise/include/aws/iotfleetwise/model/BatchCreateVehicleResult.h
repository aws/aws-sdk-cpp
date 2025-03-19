/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/CreateVehicleResponseItem.h>
#include <aws/iotfleetwise/model/CreateVehicleError.h>
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
  class BatchCreateVehicleResult
  {
  public:
    AWS_IOTFLEETWISE_API BatchCreateVehicleResult() = default;
    AWS_IOTFLEETWISE_API BatchCreateVehicleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API BatchCreateVehicleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of information about a batch of created vehicles. For more
     * information, see the API data type.</p>
     */
    inline const Aws::Vector<CreateVehicleResponseItem>& GetVehicles() const { return m_vehicles; }
    template<typename VehiclesT = Aws::Vector<CreateVehicleResponseItem>>
    void SetVehicles(VehiclesT&& value) { m_vehiclesHasBeenSet = true; m_vehicles = std::forward<VehiclesT>(value); }
    template<typename VehiclesT = Aws::Vector<CreateVehicleResponseItem>>
    BatchCreateVehicleResult& WithVehicles(VehiclesT&& value) { SetVehicles(std::forward<VehiclesT>(value)); return *this;}
    template<typename VehiclesT = CreateVehicleResponseItem>
    BatchCreateVehicleResult& AddVehicles(VehiclesT&& value) { m_vehiclesHasBeenSet = true; m_vehicles.emplace_back(std::forward<VehiclesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of information about creation errors, or an empty list if there aren't
     * any errors. </p>
     */
    inline const Aws::Vector<CreateVehicleError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<CreateVehicleError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<CreateVehicleError>>
    BatchCreateVehicleResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = CreateVehicleError>
    BatchCreateVehicleResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchCreateVehicleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CreateVehicleResponseItem> m_vehicles;
    bool m_vehiclesHasBeenSet = false;

    Aws::Vector<CreateVehicleError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
