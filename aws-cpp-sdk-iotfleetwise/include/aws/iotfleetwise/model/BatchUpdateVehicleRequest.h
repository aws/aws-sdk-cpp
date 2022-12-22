/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotfleetwise/model/UpdateVehicleRequestItem.h>
#include <utility>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

  /**
   */
  class BatchUpdateVehicleRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API BatchUpdateVehicleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateVehicle"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> A list of information about the vehicles to update. For more information,
     * see the API data type.</p>
     */
    inline const Aws::Vector<UpdateVehicleRequestItem>& GetVehicles() const{ return m_vehicles; }

    /**
     * <p> A list of information about the vehicles to update. For more information,
     * see the API data type.</p>
     */
    inline bool VehiclesHasBeenSet() const { return m_vehiclesHasBeenSet; }

    /**
     * <p> A list of information about the vehicles to update. For more information,
     * see the API data type.</p>
     */
    inline void SetVehicles(const Aws::Vector<UpdateVehicleRequestItem>& value) { m_vehiclesHasBeenSet = true; m_vehicles = value; }

    /**
     * <p> A list of information about the vehicles to update. For more information,
     * see the API data type.</p>
     */
    inline void SetVehicles(Aws::Vector<UpdateVehicleRequestItem>&& value) { m_vehiclesHasBeenSet = true; m_vehicles = std::move(value); }

    /**
     * <p> A list of information about the vehicles to update. For more information,
     * see the API data type.</p>
     */
    inline BatchUpdateVehicleRequest& WithVehicles(const Aws::Vector<UpdateVehicleRequestItem>& value) { SetVehicles(value); return *this;}

    /**
     * <p> A list of information about the vehicles to update. For more information,
     * see the API data type.</p>
     */
    inline BatchUpdateVehicleRequest& WithVehicles(Aws::Vector<UpdateVehicleRequestItem>&& value) { SetVehicles(std::move(value)); return *this;}

    /**
     * <p> A list of information about the vehicles to update. For more information,
     * see the API data type.</p>
     */
    inline BatchUpdateVehicleRequest& AddVehicles(const UpdateVehicleRequestItem& value) { m_vehiclesHasBeenSet = true; m_vehicles.push_back(value); return *this; }

    /**
     * <p> A list of information about the vehicles to update. For more information,
     * see the API data type.</p>
     */
    inline BatchUpdateVehicleRequest& AddVehicles(UpdateVehicleRequestItem&& value) { m_vehiclesHasBeenSet = true; m_vehicles.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UpdateVehicleRequestItem> m_vehicles;
    bool m_vehiclesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
