/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class AssociateWirelessDeviceWithMulticastGroupRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API AssociateWirelessDeviceWithMulticastGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateWirelessDeviceWithMulticastGroup"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline AssociateWirelessDeviceWithMulticastGroupRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline AssociateWirelessDeviceWithMulticastGroupRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline AssociateWirelessDeviceWithMulticastGroupRequest& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::String& GetWirelessDeviceId() const{ return m_wirelessDeviceId; }

    
    inline bool WirelessDeviceIdHasBeenSet() const { return m_wirelessDeviceIdHasBeenSet; }

    
    inline void SetWirelessDeviceId(const Aws::String& value) { m_wirelessDeviceIdHasBeenSet = true; m_wirelessDeviceId = value; }

    
    inline void SetWirelessDeviceId(Aws::String&& value) { m_wirelessDeviceIdHasBeenSet = true; m_wirelessDeviceId = std::move(value); }

    
    inline void SetWirelessDeviceId(const char* value) { m_wirelessDeviceIdHasBeenSet = true; m_wirelessDeviceId.assign(value); }

    
    inline AssociateWirelessDeviceWithMulticastGroupRequest& WithWirelessDeviceId(const Aws::String& value) { SetWirelessDeviceId(value); return *this;}

    
    inline AssociateWirelessDeviceWithMulticastGroupRequest& WithWirelessDeviceId(Aws::String&& value) { SetWirelessDeviceId(std::move(value)); return *this;}

    
    inline AssociateWirelessDeviceWithMulticastGroupRequest& WithWirelessDeviceId(const char* value) { SetWirelessDeviceId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_wirelessDeviceId;
    bool m_wirelessDeviceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
