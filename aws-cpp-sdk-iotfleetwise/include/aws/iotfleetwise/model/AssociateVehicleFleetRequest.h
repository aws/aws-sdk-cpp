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
  class AssociateVehicleFleetRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API AssociateVehicleFleetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateVehicleFleet"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The unique ID of the vehicle to associate with the fleet. </p>
     */
    inline const Aws::String& GetVehicleName() const{ return m_vehicleName; }

    /**
     * <p> The unique ID of the vehicle to associate with the fleet. </p>
     */
    inline bool VehicleNameHasBeenSet() const { return m_vehicleNameHasBeenSet; }

    /**
     * <p> The unique ID of the vehicle to associate with the fleet. </p>
     */
    inline void SetVehicleName(const Aws::String& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = value; }

    /**
     * <p> The unique ID of the vehicle to associate with the fleet. </p>
     */
    inline void SetVehicleName(Aws::String&& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = std::move(value); }

    /**
     * <p> The unique ID of the vehicle to associate with the fleet. </p>
     */
    inline void SetVehicleName(const char* value) { m_vehicleNameHasBeenSet = true; m_vehicleName.assign(value); }

    /**
     * <p> The unique ID of the vehicle to associate with the fleet. </p>
     */
    inline AssociateVehicleFleetRequest& WithVehicleName(const Aws::String& value) { SetVehicleName(value); return *this;}

    /**
     * <p> The unique ID of the vehicle to associate with the fleet. </p>
     */
    inline AssociateVehicleFleetRequest& WithVehicleName(Aws::String&& value) { SetVehicleName(std::move(value)); return *this;}

    /**
     * <p> The unique ID of the vehicle to associate with the fleet. </p>
     */
    inline AssociateVehicleFleetRequest& WithVehicleName(const char* value) { SetVehicleName(value); return *this;}


    /**
     * <p> The ID of a fleet. </p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p> The ID of a fleet. </p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p> The ID of a fleet. </p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p> The ID of a fleet. </p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p> The ID of a fleet. </p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p> The ID of a fleet. </p>
     */
    inline AssociateVehicleFleetRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p> The ID of a fleet. </p>
     */
    inline AssociateVehicleFleetRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p> The ID of a fleet. </p>
     */
    inline AssociateVehicleFleetRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}

  private:

    Aws::String m_vehicleName;
    bool m_vehicleNameHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
