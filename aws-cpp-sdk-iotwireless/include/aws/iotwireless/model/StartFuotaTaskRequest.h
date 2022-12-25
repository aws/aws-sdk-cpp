/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/LoRaWANStartFuotaTask.h>
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class StartFuotaTaskRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API StartFuotaTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartFuotaTask"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline StartFuotaTaskRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline StartFuotaTaskRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline StartFuotaTaskRequest& WithId(const char* value) { SetId(value); return *this;}


    
    inline const LoRaWANStartFuotaTask& GetLoRaWAN() const{ return m_loRaWAN; }

    
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }

    
    inline void SetLoRaWAN(const LoRaWANStartFuotaTask& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = value; }

    
    inline void SetLoRaWAN(LoRaWANStartFuotaTask&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::move(value); }

    
    inline StartFuotaTaskRequest& WithLoRaWAN(const LoRaWANStartFuotaTask& value) { SetLoRaWAN(value); return *this;}

    
    inline StartFuotaTaskRequest& WithLoRaWAN(LoRaWANStartFuotaTask&& value) { SetLoRaWAN(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    LoRaWANStartFuotaTask m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
