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
   * <p>Information about a campaign associated with a vehicle.</p><p><h3>See
   * Also:</h3>   <a
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


    ///@{
    /**
     * <p>The name of a campaign.</p>
     */
    inline const Aws::String& GetCampaignName() const{ return m_campaignName; }
    inline bool CampaignNameHasBeenSet() const { return m_campaignNameHasBeenSet; }
    inline void SetCampaignName(const Aws::String& value) { m_campaignNameHasBeenSet = true; m_campaignName = value; }
    inline void SetCampaignName(Aws::String&& value) { m_campaignNameHasBeenSet = true; m_campaignName = std::move(value); }
    inline void SetCampaignName(const char* value) { m_campaignNameHasBeenSet = true; m_campaignName.assign(value); }
    inline VehicleStatus& WithCampaignName(const Aws::String& value) { SetCampaignName(value); return *this;}
    inline VehicleStatus& WithCampaignName(Aws::String&& value) { SetCampaignName(std::move(value)); return *this;}
    inline VehicleStatus& WithCampaignName(const char* value) { SetCampaignName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the vehicle.</p>
     */
    inline const Aws::String& GetVehicleName() const{ return m_vehicleName; }
    inline bool VehicleNameHasBeenSet() const { return m_vehicleNameHasBeenSet; }
    inline void SetVehicleName(const Aws::String& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = value; }
    inline void SetVehicleName(Aws::String&& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = std::move(value); }
    inline void SetVehicleName(const char* value) { m_vehicleNameHasBeenSet = true; m_vehicleName.assign(value); }
    inline VehicleStatus& WithVehicleName(const Aws::String& value) { SetVehicleName(value); return *this;}
    inline VehicleStatus& WithVehicleName(Aws::String&& value) { SetVehicleName(std::move(value)); return *this;}
    inline VehicleStatus& WithVehicleName(const char* value) { SetVehicleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a campaign, which can be one of the following:</p> <ul> <li>
     * <p> <code>CREATED</code> - The campaign has been created successfully but has
     * not been approved. </p> </li> <li> <p> <code>READY</code> - The campaign has
     * been approved but has not been deployed to the vehicle.</p> </li> <li> <p>
     * <code>HEALTHY</code> - The campaign has been deployed to the vehicle. </p> </li>
     * <li> <p> <code>SUSPENDED</code> - The campaign has been suspended and data
     * collection is paused. </p> </li> <li> <p> <code>DELETING</code> - The campaign
     * is being removed from the vehicle.</p> </li> </ul>
     */
    inline const VehicleState& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const VehicleState& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(VehicleState&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline VehicleStatus& WithStatus(const VehicleState& value) { SetStatus(value); return *this;}
    inline VehicleStatus& WithStatus(VehicleState&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
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
