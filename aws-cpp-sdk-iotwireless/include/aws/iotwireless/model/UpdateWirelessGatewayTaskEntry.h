/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/LoRaWANUpdateGatewayTaskEntry.h>
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
   * <p>UpdateWirelessGatewayTaskEntry object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateWirelessGatewayTaskEntry">AWS
   * API Reference</a></p>
   */
  class AWS_IOTWIRELESS_API UpdateWirelessGatewayTaskEntry
  {
  public:
    UpdateWirelessGatewayTaskEntry();
    UpdateWirelessGatewayTaskEntry(Aws::Utils::Json::JsonView jsonValue);
    UpdateWirelessGatewayTaskEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the new wireless gateway task entry.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the new wireless gateway task entry.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the new wireless gateway task entry.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the new wireless gateway task entry.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the new wireless gateway task entry.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the new wireless gateway task entry.</p>
     */
    inline UpdateWirelessGatewayTaskEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the new wireless gateway task entry.</p>
     */
    inline UpdateWirelessGatewayTaskEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the new wireless gateway task entry.</p>
     */
    inline UpdateWirelessGatewayTaskEntry& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The properties that relate to the LoRaWAN wireless gateway.</p>
     */
    inline const LoRaWANUpdateGatewayTaskEntry& GetLoRaWAN() const{ return m_loRaWAN; }

    /**
     * <p>The properties that relate to the LoRaWAN wireless gateway.</p>
     */
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }

    /**
     * <p>The properties that relate to the LoRaWAN wireless gateway.</p>
     */
    inline void SetLoRaWAN(const LoRaWANUpdateGatewayTaskEntry& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = value; }

    /**
     * <p>The properties that relate to the LoRaWAN wireless gateway.</p>
     */
    inline void SetLoRaWAN(LoRaWANUpdateGatewayTaskEntry&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::move(value); }

    /**
     * <p>The properties that relate to the LoRaWAN wireless gateway.</p>
     */
    inline UpdateWirelessGatewayTaskEntry& WithLoRaWAN(const LoRaWANUpdateGatewayTaskEntry& value) { SetLoRaWAN(value); return *this;}

    /**
     * <p>The properties that relate to the LoRaWAN wireless gateway.</p>
     */
    inline UpdateWirelessGatewayTaskEntry& WithLoRaWAN(LoRaWANUpdateGatewayTaskEntry&& value) { SetLoRaWAN(std::move(value)); return *this;}


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
    inline UpdateWirelessGatewayTaskEntry& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline UpdateWirelessGatewayTaskEntry& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline UpdateWirelessGatewayTaskEntry& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    LoRaWANUpdateGatewayTaskEntry m_loRaWAN;
    bool m_loRaWANHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
