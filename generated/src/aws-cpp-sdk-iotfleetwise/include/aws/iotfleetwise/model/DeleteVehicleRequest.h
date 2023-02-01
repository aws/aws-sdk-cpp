/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

  /**
   */
  class DeleteVehicleRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API DeleteVehicleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVehicle"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the vehicle to delete. </p>
     */
    inline const Aws::String& GetVehicleName() const{ return m_vehicleName; }

    /**
     * <p>The ID of the vehicle to delete. </p>
     */
    inline bool VehicleNameHasBeenSet() const { return m_vehicleNameHasBeenSet; }

    /**
     * <p>The ID of the vehicle to delete. </p>
     */
    inline void SetVehicleName(const Aws::String& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = value; }

    /**
     * <p>The ID of the vehicle to delete. </p>
     */
    inline void SetVehicleName(Aws::String&& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = std::move(value); }

    /**
     * <p>The ID of the vehicle to delete. </p>
     */
    inline void SetVehicleName(const char* value) { m_vehicleNameHasBeenSet = true; m_vehicleName.assign(value); }

    /**
     * <p>The ID of the vehicle to delete. </p>
     */
    inline DeleteVehicleRequest& WithVehicleName(const Aws::String& value) { SetVehicleName(value); return *this;}

    /**
     * <p>The ID of the vehicle to delete. </p>
     */
    inline DeleteVehicleRequest& WithVehicleName(Aws::String&& value) { SetVehicleName(std::move(value)); return *this;}

    /**
     * <p>The ID of the vehicle to delete. </p>
     */
    inline DeleteVehicleRequest& WithVehicleName(const char* value) { SetVehicleName(value); return *this;}

  private:

    Aws::String m_vehicleName;
    bool m_vehicleNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
