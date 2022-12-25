/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/LoRaWANUpdateDevice.h>
#include <aws/iotwireless/model/PositioningConfigStatus.h>
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class UpdateWirelessDeviceRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API UpdateWirelessDeviceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWirelessDevice"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the resource to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline UpdateWirelessDeviceRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline UpdateWirelessDeviceRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline UpdateWirelessDeviceRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the new destination for the device.</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }

    /**
     * <p>The name of the new destination for the device.</p>
     */
    inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }

    /**
     * <p>The name of the new destination for the device.</p>
     */
    inline void SetDestinationName(const Aws::String& value) { m_destinationNameHasBeenSet = true; m_destinationName = value; }

    /**
     * <p>The name of the new destination for the device.</p>
     */
    inline void SetDestinationName(Aws::String&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::move(value); }

    /**
     * <p>The name of the new destination for the device.</p>
     */
    inline void SetDestinationName(const char* value) { m_destinationNameHasBeenSet = true; m_destinationName.assign(value); }

    /**
     * <p>The name of the new destination for the device.</p>
     */
    inline UpdateWirelessDeviceRequest& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}

    /**
     * <p>The name of the new destination for the device.</p>
     */
    inline UpdateWirelessDeviceRequest& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}

    /**
     * <p>The name of the new destination for the device.</p>
     */
    inline UpdateWirelessDeviceRequest& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}


    /**
     * <p>The new name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The new name of the resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The new name of the resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The new name of the resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The new name of the resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The new name of the resource.</p>
     */
    inline UpdateWirelessDeviceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The new name of the resource.</p>
     */
    inline UpdateWirelessDeviceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The new name of the resource.</p>
     */
    inline UpdateWirelessDeviceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A new description of the resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A new description of the resource.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A new description of the resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A new description of the resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A new description of the resource.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A new description of the resource.</p>
     */
    inline UpdateWirelessDeviceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A new description of the resource.</p>
     */
    inline UpdateWirelessDeviceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A new description of the resource.</p>
     */
    inline UpdateWirelessDeviceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The updated wireless device's configuration.</p>
     */
    inline const LoRaWANUpdateDevice& GetLoRaWAN() const{ return m_loRaWAN; }

    /**
     * <p>The updated wireless device's configuration.</p>
     */
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }

    /**
     * <p>The updated wireless device's configuration.</p>
     */
    inline void SetLoRaWAN(const LoRaWANUpdateDevice& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = value; }

    /**
     * <p>The updated wireless device's configuration.</p>
     */
    inline void SetLoRaWAN(LoRaWANUpdateDevice&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::move(value); }

    /**
     * <p>The updated wireless device's configuration.</p>
     */
    inline UpdateWirelessDeviceRequest& WithLoRaWAN(const LoRaWANUpdateDevice& value) { SetLoRaWAN(value); return *this;}

    /**
     * <p>The updated wireless device's configuration.</p>
     */
    inline UpdateWirelessDeviceRequest& WithLoRaWAN(LoRaWANUpdateDevice&& value) { SetLoRaWAN(std::move(value)); return *this;}


    /**
     * <p>FPort values for the GNSS, stream, and ClockSync functions of the positioning
     * information.</p>
     */
    inline const PositioningConfigStatus& GetPositioning() const{ return m_positioning; }

    /**
     * <p>FPort values for the GNSS, stream, and ClockSync functions of the positioning
     * information.</p>
     */
    inline bool PositioningHasBeenSet() const { return m_positioningHasBeenSet; }

    /**
     * <p>FPort values for the GNSS, stream, and ClockSync functions of the positioning
     * information.</p>
     */
    inline void SetPositioning(const PositioningConfigStatus& value) { m_positioningHasBeenSet = true; m_positioning = value; }

    /**
     * <p>FPort values for the GNSS, stream, and ClockSync functions of the positioning
     * information.</p>
     */
    inline void SetPositioning(PositioningConfigStatus&& value) { m_positioningHasBeenSet = true; m_positioning = std::move(value); }

    /**
     * <p>FPort values for the GNSS, stream, and ClockSync functions of the positioning
     * information.</p>
     */
    inline UpdateWirelessDeviceRequest& WithPositioning(const PositioningConfigStatus& value) { SetPositioning(value); return *this;}

    /**
     * <p>FPort values for the GNSS, stream, and ClockSync functions of the positioning
     * information.</p>
     */
    inline UpdateWirelessDeviceRequest& WithPositioning(PositioningConfigStatus&& value) { SetPositioning(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_destinationName;
    bool m_destinationNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    LoRaWANUpdateDevice m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;

    PositioningConfigStatus m_positioning;
    bool m_positioningHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
