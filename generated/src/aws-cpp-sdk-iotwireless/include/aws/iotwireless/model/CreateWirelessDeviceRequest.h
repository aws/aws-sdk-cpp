/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/iotwireless/model/WirelessDeviceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/LoRaWANDevice.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/PositioningConfigStatus.h>
#include <aws/iotwireless/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class CreateWirelessDeviceRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API CreateWirelessDeviceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWirelessDevice"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The wireless device type.</p>
     */
    inline const WirelessDeviceType& GetType() const{ return m_type; }

    /**
     * <p>The wireless device type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The wireless device type.</p>
     */
    inline void SetType(const WirelessDeviceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The wireless device type.</p>
     */
    inline void SetType(WirelessDeviceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The wireless device type.</p>
     */
    inline CreateWirelessDeviceRequest& WithType(const WirelessDeviceType& value) { SetType(value); return *this;}

    /**
     * <p>The wireless device type.</p>
     */
    inline CreateWirelessDeviceRequest& WithType(WirelessDeviceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of the new resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the new resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the new resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the new resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the new resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the new resource.</p>
     */
    inline CreateWirelessDeviceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the new resource.</p>
     */
    inline CreateWirelessDeviceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the new resource.</p>
     */
    inline CreateWirelessDeviceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the new resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the new resource.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the new resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the new resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the new resource.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the new resource.</p>
     */
    inline CreateWirelessDeviceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the new resource.</p>
     */
    inline CreateWirelessDeviceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the new resource.</p>
     */
    inline CreateWirelessDeviceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the destination to assign to the new wireless device.</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }

    /**
     * <p>The name of the destination to assign to the new wireless device.</p>
     */
    inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }

    /**
     * <p>The name of the destination to assign to the new wireless device.</p>
     */
    inline void SetDestinationName(const Aws::String& value) { m_destinationNameHasBeenSet = true; m_destinationName = value; }

    /**
     * <p>The name of the destination to assign to the new wireless device.</p>
     */
    inline void SetDestinationName(Aws::String&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::move(value); }

    /**
     * <p>The name of the destination to assign to the new wireless device.</p>
     */
    inline void SetDestinationName(const char* value) { m_destinationNameHasBeenSet = true; m_destinationName.assign(value); }

    /**
     * <p>The name of the destination to assign to the new wireless device.</p>
     */
    inline CreateWirelessDeviceRequest& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}

    /**
     * <p>The name of the destination to assign to the new wireless device.</p>
     */
    inline CreateWirelessDeviceRequest& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}

    /**
     * <p>The name of the destination to assign to the new wireless device.</p>
     */
    inline CreateWirelessDeviceRequest& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}


    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline CreateWirelessDeviceRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline CreateWirelessDeviceRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline CreateWirelessDeviceRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The device configuration information to use to create the wireless
     * device.</p>
     */
    inline const LoRaWANDevice& GetLoRaWAN() const{ return m_loRaWAN; }

    /**
     * <p>The device configuration information to use to create the wireless
     * device.</p>
     */
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }

    /**
     * <p>The device configuration information to use to create the wireless
     * device.</p>
     */
    inline void SetLoRaWAN(const LoRaWANDevice& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = value; }

    /**
     * <p>The device configuration information to use to create the wireless
     * device.</p>
     */
    inline void SetLoRaWAN(LoRaWANDevice&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::move(value); }

    /**
     * <p>The device configuration information to use to create the wireless
     * device.</p>
     */
    inline CreateWirelessDeviceRequest& WithLoRaWAN(const LoRaWANDevice& value) { SetLoRaWAN(value); return *this;}

    /**
     * <p>The device configuration information to use to create the wireless
     * device.</p>
     */
    inline CreateWirelessDeviceRequest& WithLoRaWAN(LoRaWANDevice&& value) { SetLoRaWAN(std::move(value)); return *this;}


    /**
     * <p>The tags to attach to the new wireless device. Tags are metadata that you can
     * use to manage a resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to attach to the new wireless device. Tags are metadata that you can
     * use to manage a resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to attach to the new wireless device. Tags are metadata that you can
     * use to manage a resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to attach to the new wireless device. Tags are metadata that you can
     * use to manage a resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to attach to the new wireless device. Tags are metadata that you can
     * use to manage a resource.</p>
     */
    inline CreateWirelessDeviceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to attach to the new wireless device. Tags are metadata that you can
     * use to manage a resource.</p>
     */
    inline CreateWirelessDeviceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to attach to the new wireless device. Tags are metadata that you can
     * use to manage a resource.</p>
     */
    inline CreateWirelessDeviceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to attach to the new wireless device. Tags are metadata that you can
     * use to manage a resource.</p>
     */
    inline CreateWirelessDeviceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


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
    inline CreateWirelessDeviceRequest& WithPositioning(const PositioningConfigStatus& value) { SetPositioning(value); return *this;}

    /**
     * <p>FPort values for the GNSS, stream, and ClockSync functions of the positioning
     * information.</p>
     */
    inline CreateWirelessDeviceRequest& WithPositioning(PositioningConfigStatus&& value) { SetPositioning(std::move(value)); return *this;}

  private:

    WirelessDeviceType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_destinationName;
    bool m_destinationNameHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    LoRaWANDevice m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    PositioningConfigStatus m_positioning;
    bool m_positioningHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
