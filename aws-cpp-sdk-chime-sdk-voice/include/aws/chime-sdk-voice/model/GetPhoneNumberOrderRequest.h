/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class GetPhoneNumberOrderRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API GetPhoneNumberOrderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPhoneNumberOrder"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetPhoneNumberOrderId() const{ return m_phoneNumberOrderId; }

    
    inline bool PhoneNumberOrderIdHasBeenSet() const { return m_phoneNumberOrderIdHasBeenSet; }

    
    inline void SetPhoneNumberOrderId(const Aws::String& value) { m_phoneNumberOrderIdHasBeenSet = true; m_phoneNumberOrderId = value; }

    
    inline void SetPhoneNumberOrderId(Aws::String&& value) { m_phoneNumberOrderIdHasBeenSet = true; m_phoneNumberOrderId = std::move(value); }

    
    inline void SetPhoneNumberOrderId(const char* value) { m_phoneNumberOrderIdHasBeenSet = true; m_phoneNumberOrderId.assign(value); }

    
    inline GetPhoneNumberOrderRequest& WithPhoneNumberOrderId(const Aws::String& value) { SetPhoneNumberOrderId(value); return *this;}

    
    inline GetPhoneNumberOrderRequest& WithPhoneNumberOrderId(Aws::String&& value) { SetPhoneNumberOrderId(std::move(value)); return *this;}

    
    inline GetPhoneNumberOrderRequest& WithPhoneNumberOrderId(const char* value) { SetPhoneNumberOrderId(value); return *this;}

  private:

    Aws::String m_phoneNumberOrderId;
    bool m_phoneNumberOrderIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
