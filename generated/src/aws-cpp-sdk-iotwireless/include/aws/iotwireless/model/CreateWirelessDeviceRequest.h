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
#include <aws/iotwireless/model/SidewalkCreateWirelessDevice.h>
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


    ///@{
    /**
     * <p>The wireless device type.</p>
     */
    inline const WirelessDeviceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const WirelessDeviceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(WirelessDeviceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateWirelessDeviceRequest& WithType(const WirelessDeviceType& value) { SetType(value); return *this;}
    inline CreateWirelessDeviceRequest& WithType(WirelessDeviceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateWirelessDeviceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateWirelessDeviceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateWirelessDeviceRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the new resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateWirelessDeviceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateWirelessDeviceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateWirelessDeviceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the destination to assign to the new wireless device.</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }
    inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }
    inline void SetDestinationName(const Aws::String& value) { m_destinationNameHasBeenSet = true; m_destinationName = value; }
    inline void SetDestinationName(Aws::String&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::move(value); }
    inline void SetDestinationName(const char* value) { m_destinationNameHasBeenSet = true; m_destinationName.assign(value); }
    inline CreateWirelessDeviceRequest& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}
    inline CreateWirelessDeviceRequest& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}
    inline CreateWirelessDeviceRequest& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each resource must have a unique client request token. The client token is
     * used to implement idempotency. It ensures that the request completes no more
     * than one time. If you retry a request with the same token and the same
     * parameters, the request will complete successfully. However, if you try to
     * create a new resource using the same token but different parameters, an HTTP 409
     * conflict occurs. If you omit this value, AWS SDKs will automatically generate a
     * unique client request. For more information about idempotency, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency in Amazon EC2 API requests</a>.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreateWirelessDeviceRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateWirelessDeviceRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateWirelessDeviceRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device configuration information to use to create the wireless
     * device.</p>
     */
    inline const LoRaWANDevice& GetLoRaWAN() const{ return m_loRaWAN; }
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }
    inline void SetLoRaWAN(const LoRaWANDevice& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = value; }
    inline void SetLoRaWAN(LoRaWANDevice&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::move(value); }
    inline CreateWirelessDeviceRequest& WithLoRaWAN(const LoRaWANDevice& value) { SetLoRaWAN(value); return *this;}
    inline CreateWirelessDeviceRequest& WithLoRaWAN(LoRaWANDevice&& value) { SetLoRaWAN(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to attach to the new wireless device. Tags are metadata that you can
     * use to manage a resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateWirelessDeviceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateWirelessDeviceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateWirelessDeviceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateWirelessDeviceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>FPort values for the GNSS, stream, and ClockSync functions of the positioning
     * information.</p>
     */
    inline const PositioningConfigStatus& GetPositioning() const{ return m_positioning; }
    inline bool PositioningHasBeenSet() const { return m_positioningHasBeenSet; }
    inline void SetPositioning(const PositioningConfigStatus& value) { m_positioningHasBeenSet = true; m_positioning = value; }
    inline void SetPositioning(PositioningConfigStatus&& value) { m_positioningHasBeenSet = true; m_positioning = std::move(value); }
    inline CreateWirelessDeviceRequest& WithPositioning(const PositioningConfigStatus& value) { SetPositioning(value); return *this;}
    inline CreateWirelessDeviceRequest& WithPositioning(PositioningConfigStatus&& value) { SetPositioning(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device configuration information to use to create the Sidewalk
     * device.</p>
     */
    inline const SidewalkCreateWirelessDevice& GetSidewalk() const{ return m_sidewalk; }
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }
    inline void SetSidewalk(const SidewalkCreateWirelessDevice& value) { m_sidewalkHasBeenSet = true; m_sidewalk = value; }
    inline void SetSidewalk(SidewalkCreateWirelessDevice&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::move(value); }
    inline CreateWirelessDeviceRequest& WithSidewalk(const SidewalkCreateWirelessDevice& value) { SetSidewalk(value); return *this;}
    inline CreateWirelessDeviceRequest& WithSidewalk(SidewalkCreateWirelessDevice&& value) { SetSidewalk(std::move(value)); return *this;}
    ///@}
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

    SidewalkCreateWirelessDevice m_sidewalk;
    bool m_sidewalkHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
