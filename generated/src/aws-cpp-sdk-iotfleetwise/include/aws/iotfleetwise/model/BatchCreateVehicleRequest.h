/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotfleetwise/model/CreateVehicleRequestItem.h>
#include <utility>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

  /**
   */
  class BatchCreateVehicleRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API BatchCreateVehicleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchCreateVehicle"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> A list of information about each vehicle to create. For more information,
     * see the API data type.</p>
     */
    inline const Aws::Vector<CreateVehicleRequestItem>& GetVehicles() const{ return m_vehicles; }

    /**
     * <p> A list of information about each vehicle to create. For more information,
     * see the API data type.</p>
     */
    inline bool VehiclesHasBeenSet() const { return m_vehiclesHasBeenSet; }

    /**
     * <p> A list of information about each vehicle to create. For more information,
     * see the API data type.</p>
     */
    inline void SetVehicles(const Aws::Vector<CreateVehicleRequestItem>& value) { m_vehiclesHasBeenSet = true; m_vehicles = value; }

    /**
     * <p> A list of information about each vehicle to create. For more information,
     * see the API data type.</p>
     */
    inline void SetVehicles(Aws::Vector<CreateVehicleRequestItem>&& value) { m_vehiclesHasBeenSet = true; m_vehicles = std::move(value); }

    /**
     * <p> A list of information about each vehicle to create. For more information,
     * see the API data type.</p>
     */
    inline BatchCreateVehicleRequest& WithVehicles(const Aws::Vector<CreateVehicleRequestItem>& value) { SetVehicles(value); return *this;}

    /**
     * <p> A list of information about each vehicle to create. For more information,
     * see the API data type.</p>
     */
    inline BatchCreateVehicleRequest& WithVehicles(Aws::Vector<CreateVehicleRequestItem>&& value) { SetVehicles(std::move(value)); return *this;}

    /**
     * <p> A list of information about each vehicle to create. For more information,
     * see the API data type.</p>
     */
    inline BatchCreateVehicleRequest& AddVehicles(const CreateVehicleRequestItem& value) { m_vehiclesHasBeenSet = true; m_vehicles.push_back(value); return *this; }

    /**
     * <p> A list of information about each vehicle to create. For more information,
     * see the API data type.</p>
     */
    inline BatchCreateVehicleRequest& AddVehicles(CreateVehicleRequestItem&& value) { m_vehiclesHasBeenSet = true; m_vehicles.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CreateVehicleRequestItem> m_vehicles;
    bool m_vehiclesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
