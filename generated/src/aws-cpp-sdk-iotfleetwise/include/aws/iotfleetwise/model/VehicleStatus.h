/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/VehicleState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Information about the state of a vehicle and how it relates to the status of
   * a campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/VehicleStatus">AWS
   * API Reference</a></p>
   */
  class VehicleStatus
  {
  public:
    AWS_IOTFLEETWISE_API VehicleStatus();
    AWS_IOTFLEETWISE_API VehicleStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API VehicleStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a campaign.</p>
     */
    inline const Aws::String& GetCampaignName() const{ return m_campaignName; }

    /**
     * <p>The name of a campaign.</p>
     */
    inline bool CampaignNameHasBeenSet() const { return m_campaignNameHasBeenSet; }

    /**
     * <p>The name of a campaign.</p>
     */
    inline void SetCampaignName(const Aws::String& value) { m_campaignNameHasBeenSet = true; m_campaignName = value; }

    /**
     * <p>The name of a campaign.</p>
     */
    inline void SetCampaignName(Aws::String&& value) { m_campaignNameHasBeenSet = true; m_campaignName = std::move(value); }

    /**
     * <p>The name of a campaign.</p>
     */
    inline void SetCampaignName(const char* value) { m_campaignNameHasBeenSet = true; m_campaignName.assign(value); }

    /**
     * <p>The name of a campaign.</p>
     */
    inline VehicleStatus& WithCampaignName(const Aws::String& value) { SetCampaignName(value); return *this;}

    /**
     * <p>The name of a campaign.</p>
     */
    inline VehicleStatus& WithCampaignName(Aws::String&& value) { SetCampaignName(std::move(value)); return *this;}

    /**
     * <p>The name of a campaign.</p>
     */
    inline VehicleStatus& WithCampaignName(const char* value) { SetCampaignName(value); return *this;}


    /**
     * <p>The unique ID of the vehicle.</p>
     */
    inline const Aws::String& GetVehicleName() const{ return m_vehicleName; }

    /**
     * <p>The unique ID of the vehicle.</p>
     */
    inline bool VehicleNameHasBeenSet() const { return m_vehicleNameHasBeenSet; }

    /**
     * <p>The unique ID of the vehicle.</p>
     */
    inline void SetVehicleName(const Aws::String& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = value; }

    /**
     * <p>The unique ID of the vehicle.</p>
     */
    inline void SetVehicleName(Aws::String&& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = std::move(value); }

    /**
     * <p>The unique ID of the vehicle.</p>
     */
    inline void SetVehicleName(const char* value) { m_vehicleNameHasBeenSet = true; m_vehicleName.assign(value); }

    /**
     * <p>The unique ID of the vehicle.</p>
     */
    inline VehicleStatus& WithVehicleName(const Aws::String& value) { SetVehicleName(value); return *this;}

    /**
     * <p>The unique ID of the vehicle.</p>
     */
    inline VehicleStatus& WithVehicleName(Aws::String&& value) { SetVehicleName(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the vehicle.</p>
     */
    inline VehicleStatus& WithVehicleName(const char* value) { SetVehicleName(value); return *this;}


    /**
     * <p>The state of a vehicle, which can be one of the following:</p> <ul> <li> <p>
     * <code>CREATED</code> - Amazon Web Services IoT FleetWise sucessfully created the
     * vehicle. </p> </li> <li> <p> <code>READY</code> - The vehicle is ready to
     * receive a campaign deployment. </p> </li> <li> <p> <code>HEALTHY</code> - A
     * campaign deployment was delivered to the vehicle. </p> </li> <li> <p>
     * <code>SUSPENDED</code> - A campaign associated with the vehicle was suspended
     * and data collection was paused. </p> </li> <li> <p> <code>DELETING</code> -
     * Amazon Web Services IoT FleetWise is removing a campaign from the vehicle. </p>
     * </li> </ul>
     */
    inline const VehicleState& GetStatus() const{ return m_status; }

    /**
     * <p>The state of a vehicle, which can be one of the following:</p> <ul> <li> <p>
     * <code>CREATED</code> - Amazon Web Services IoT FleetWise sucessfully created the
     * vehicle. </p> </li> <li> <p> <code>READY</code> - The vehicle is ready to
     * receive a campaign deployment. </p> </li> <li> <p> <code>HEALTHY</code> - A
     * campaign deployment was delivered to the vehicle. </p> </li> <li> <p>
     * <code>SUSPENDED</code> - A campaign associated with the vehicle was suspended
     * and data collection was paused. </p> </li> <li> <p> <code>DELETING</code> -
     * Amazon Web Services IoT FleetWise is removing a campaign from the vehicle. </p>
     * </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The state of a vehicle, which can be one of the following:</p> <ul> <li> <p>
     * <code>CREATED</code> - Amazon Web Services IoT FleetWise sucessfully created the
     * vehicle. </p> </li> <li> <p> <code>READY</code> - The vehicle is ready to
     * receive a campaign deployment. </p> </li> <li> <p> <code>HEALTHY</code> - A
     * campaign deployment was delivered to the vehicle. </p> </li> <li> <p>
     * <code>SUSPENDED</code> - A campaign associated with the vehicle was suspended
     * and data collection was paused. </p> </li> <li> <p> <code>DELETING</code> -
     * Amazon Web Services IoT FleetWise is removing a campaign from the vehicle. </p>
     * </li> </ul>
     */
    inline void SetStatus(const VehicleState& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The state of a vehicle, which can be one of the following:</p> <ul> <li> <p>
     * <code>CREATED</code> - Amazon Web Services IoT FleetWise sucessfully created the
     * vehicle. </p> </li> <li> <p> <code>READY</code> - The vehicle is ready to
     * receive a campaign deployment. </p> </li> <li> <p> <code>HEALTHY</code> - A
     * campaign deployment was delivered to the vehicle. </p> </li> <li> <p>
     * <code>SUSPENDED</code> - A campaign associated with the vehicle was suspended
     * and data collection was paused. </p> </li> <li> <p> <code>DELETING</code> -
     * Amazon Web Services IoT FleetWise is removing a campaign from the vehicle. </p>
     * </li> </ul>
     */
    inline void SetStatus(VehicleState&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The state of a vehicle, which can be one of the following:</p> <ul> <li> <p>
     * <code>CREATED</code> - Amazon Web Services IoT FleetWise sucessfully created the
     * vehicle. </p> </li> <li> <p> <code>READY</code> - The vehicle is ready to
     * receive a campaign deployment. </p> </li> <li> <p> <code>HEALTHY</code> - A
     * campaign deployment was delivered to the vehicle. </p> </li> <li> <p>
     * <code>SUSPENDED</code> - A campaign associated with the vehicle was suspended
     * and data collection was paused. </p> </li> <li> <p> <code>DELETING</code> -
     * Amazon Web Services IoT FleetWise is removing a campaign from the vehicle. </p>
     * </li> </ul>
     */
    inline VehicleStatus& WithStatus(const VehicleState& value) { SetStatus(value); return *this;}

    /**
     * <p>The state of a vehicle, which can be one of the following:</p> <ul> <li> <p>
     * <code>CREATED</code> - Amazon Web Services IoT FleetWise sucessfully created the
     * vehicle. </p> </li> <li> <p> <code>READY</code> - The vehicle is ready to
     * receive a campaign deployment. </p> </li> <li> <p> <code>HEALTHY</code> - A
     * campaign deployment was delivered to the vehicle. </p> </li> <li> <p>
     * <code>SUSPENDED</code> - A campaign associated with the vehicle was suspended
     * and data collection was paused. </p> </li> <li> <p> <code>DELETING</code> -
     * Amazon Web Services IoT FleetWise is removing a campaign from the vehicle. </p>
     * </li> </ul>
     */
    inline VehicleStatus& WithStatus(VehicleState&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_campaignName;
    bool m_campaignNameHasBeenSet = false;

    Aws::String m_vehicleName;
    bool m_vehicleNameHasBeenSet = false;

    VehicleState m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
