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
    AWS_IOTFLEETWISE_API VehicleStatus() = default;
    AWS_IOTFLEETWISE_API VehicleStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API VehicleStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a campaign.</p>
     */
    inline const Aws::String& GetCampaignName() const { return m_campaignName; }
    inline bool CampaignNameHasBeenSet() const { return m_campaignNameHasBeenSet; }
    template<typename CampaignNameT = Aws::String>
    void SetCampaignName(CampaignNameT&& value) { m_campaignNameHasBeenSet = true; m_campaignName = std::forward<CampaignNameT>(value); }
    template<typename CampaignNameT = Aws::String>
    VehicleStatus& WithCampaignName(CampaignNameT&& value) { SetCampaignName(std::forward<CampaignNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the vehicle.</p>
     */
    inline const Aws::String& GetVehicleName() const { return m_vehicleName; }
    inline bool VehicleNameHasBeenSet() const { return m_vehicleNameHasBeenSet; }
    template<typename VehicleNameT = Aws::String>
    void SetVehicleName(VehicleNameT&& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = std::forward<VehicleNameT>(value); }
    template<typename VehicleNameT = Aws::String>
    VehicleStatus& WithVehicleName(VehicleNameT&& value) { SetVehicleName(std::forward<VehicleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a campaign, which can be one of the following:</p> <ul> <li>
     * <p> <code>CREATED</code> - The campaign exists but is not yet approved.</p>
     * </li> <li> <p> <code>READY</code> - The campaign is approved but has not been
     * deployed to the vehicle. Data has not arrived at the vehicle yet.</p> </li> <li>
     * <p> <code>HEALTHY</code> - The campaign is deployed to the vehicle.</p> </li>
     * <li> <p> <code>SUSPENDED</code> - The campaign is suspended and data collection
     * is paused.</p> </li> <li> <p> <code>DELETING</code> - The campaign is being
     * removed from the vehicle.</p> </li> <li> <p> <code>READY_FOR_CHECKIN</code> -
     * The campaign is approved and waiting for vehicle check-in before deployment.</p>
     * </li> </ul>
     */
    inline VehicleState GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(VehicleState value) { m_statusHasBeenSet = true; m_status = value; }
    inline VehicleStatus& WithStatus(VehicleState value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_campaignName;
    bool m_campaignNameHasBeenSet = false;

    Aws::String m_vehicleName;
    bool m_vehicleNameHasBeenSet = false;

    VehicleState m_status{VehicleState::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
