/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/LoRaWANGateway.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>Information about a wireless gateway's operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/WirelessGatewayStatistics">AWS
   * API Reference</a></p>
   */
  class WirelessGatewayStatistics
  {
  public:
    AWS_IOTWIRELESS_API WirelessGatewayStatistics();
    AWS_IOTWIRELESS_API WirelessGatewayStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API WirelessGatewayStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline WirelessGatewayStatistics& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline WirelessGatewayStatistics& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline WirelessGatewayStatistics& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID of the wireless gateway reporting the data.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the wireless gateway reporting the data.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the wireless gateway reporting the data.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the wireless gateway reporting the data.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the wireless gateway reporting the data.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the wireless gateway reporting the data.</p>
     */
    inline WirelessGatewayStatistics& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the wireless gateway reporting the data.</p>
     */
    inline WirelessGatewayStatistics& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the wireless gateway reporting the data.</p>
     */
    inline WirelessGatewayStatistics& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline WirelessGatewayStatistics& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline WirelessGatewayStatistics& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline WirelessGatewayStatistics& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the resource.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the resource.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the resource.</p>
     */
    inline WirelessGatewayStatistics& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the resource.</p>
     */
    inline WirelessGatewayStatistics& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the resource.</p>
     */
    inline WirelessGatewayStatistics& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>LoRaWAN gateway info.</p>
     */
    inline const LoRaWANGateway& GetLoRaWAN() const{ return m_loRaWAN; }

    /**
     * <p>LoRaWAN gateway info.</p>
     */
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }

    /**
     * <p>LoRaWAN gateway info.</p>
     */
    inline void SetLoRaWAN(const LoRaWANGateway& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = value; }

    /**
     * <p>LoRaWAN gateway info.</p>
     */
    inline void SetLoRaWAN(LoRaWANGateway&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::move(value); }

    /**
     * <p>LoRaWAN gateway info.</p>
     */
    inline WirelessGatewayStatistics& WithLoRaWAN(const LoRaWANGateway& value) { SetLoRaWAN(value); return *this;}

    /**
     * <p>LoRaWAN gateway info.</p>
     */
    inline WirelessGatewayStatistics& WithLoRaWAN(LoRaWANGateway&& value) { SetLoRaWAN(std::move(value)); return *this;}


    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline const Aws::String& GetLastUplinkReceivedAt() const{ return m_lastUplinkReceivedAt; }

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline bool LastUplinkReceivedAtHasBeenSet() const { return m_lastUplinkReceivedAtHasBeenSet; }

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline void SetLastUplinkReceivedAt(const Aws::String& value) { m_lastUplinkReceivedAtHasBeenSet = true; m_lastUplinkReceivedAt = value; }

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline void SetLastUplinkReceivedAt(Aws::String&& value) { m_lastUplinkReceivedAtHasBeenSet = true; m_lastUplinkReceivedAt = std::move(value); }

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline void SetLastUplinkReceivedAt(const char* value) { m_lastUplinkReceivedAtHasBeenSet = true; m_lastUplinkReceivedAt.assign(value); }

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline WirelessGatewayStatistics& WithLastUplinkReceivedAt(const Aws::String& value) { SetLastUplinkReceivedAt(value); return *this;}

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline WirelessGatewayStatistics& WithLastUplinkReceivedAt(Aws::String&& value) { SetLastUplinkReceivedAt(std::move(value)); return *this;}

    /**
     * <p>The date and time when the most recent uplink was received.</p>
     */
    inline WirelessGatewayStatistics& WithLastUplinkReceivedAt(const char* value) { SetLastUplinkReceivedAt(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    LoRaWANGateway m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;

    Aws::String m_lastUplinkReceivedAt;
    bool m_lastUplinkReceivedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
