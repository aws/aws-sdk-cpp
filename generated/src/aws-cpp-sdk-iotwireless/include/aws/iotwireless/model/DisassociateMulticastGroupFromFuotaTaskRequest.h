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
  class DisassociateMulticastGroupFromFuotaTaskRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API DisassociateMulticastGroupFromFuotaTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateMulticastGroupFromFuotaTask"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline DisassociateMulticastGroupFromFuotaTaskRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline DisassociateMulticastGroupFromFuotaTaskRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline DisassociateMulticastGroupFromFuotaTaskRequest& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::String& GetMulticastGroupId() const{ return m_multicastGroupId; }

    
    inline bool MulticastGroupIdHasBeenSet() const { return m_multicastGroupIdHasBeenSet; }

    
    inline void SetMulticastGroupId(const Aws::String& value) { m_multicastGroupIdHasBeenSet = true; m_multicastGroupId = value; }

    
    inline void SetMulticastGroupId(Aws::String&& value) { m_multicastGroupIdHasBeenSet = true; m_multicastGroupId = std::move(value); }

    
    inline void SetMulticastGroupId(const char* value) { m_multicastGroupIdHasBeenSet = true; m_multicastGroupId.assign(value); }

    
    inline DisassociateMulticastGroupFromFuotaTaskRequest& WithMulticastGroupId(const Aws::String& value) { SetMulticastGroupId(value); return *this;}

    
    inline DisassociateMulticastGroupFromFuotaTaskRequest& WithMulticastGroupId(Aws::String&& value) { SetMulticastGroupId(std::move(value)); return *this;}

    
    inline DisassociateMulticastGroupFromFuotaTaskRequest& WithMulticastGroupId(const char* value) { SetMulticastGroupId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_multicastGroupId;
    bool m_multicastGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
