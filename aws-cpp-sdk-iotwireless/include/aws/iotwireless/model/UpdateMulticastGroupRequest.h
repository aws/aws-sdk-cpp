/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/LoRaWANMulticast.h>
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class UpdateMulticastGroupRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API UpdateMulticastGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMulticastGroup"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline UpdateMulticastGroupRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline UpdateMulticastGroupRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline UpdateMulticastGroupRequest& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline UpdateMulticastGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline UpdateMulticastGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline UpdateMulticastGroupRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline UpdateMulticastGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline UpdateMulticastGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline UpdateMulticastGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const LoRaWANMulticast& GetLoRaWAN() const{ return m_loRaWAN; }

    
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }

    
    inline void SetLoRaWAN(const LoRaWANMulticast& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = value; }

    
    inline void SetLoRaWAN(LoRaWANMulticast&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::move(value); }

    
    inline UpdateMulticastGroupRequest& WithLoRaWAN(const LoRaWANMulticast& value) { SetLoRaWAN(value); return *this;}

    
    inline UpdateMulticastGroupRequest& WithLoRaWAN(LoRaWANMulticast&& value) { SetLoRaWAN(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    LoRaWANMulticast m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
