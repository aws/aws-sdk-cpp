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
  class DeletePhoneNumberRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API DeletePhoneNumberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePhoneNumber"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetPhoneNumberId() const{ return m_phoneNumberId; }

    
    inline bool PhoneNumberIdHasBeenSet() const { return m_phoneNumberIdHasBeenSet; }

    
    inline void SetPhoneNumberId(const Aws::String& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = value; }

    
    inline void SetPhoneNumberId(Aws::String&& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = std::move(value); }

    
    inline void SetPhoneNumberId(const char* value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId.assign(value); }

    
    inline DeletePhoneNumberRequest& WithPhoneNumberId(const Aws::String& value) { SetPhoneNumberId(value); return *this;}

    
    inline DeletePhoneNumberRequest& WithPhoneNumberId(Aws::String&& value) { SetPhoneNumberId(std::move(value)); return *this;}

    
    inline DeletePhoneNumberRequest& WithPhoneNumberId(const char* value) { SetPhoneNumberId(value); return *this;}

  private:

    Aws::String m_phoneNumberId;
    bool m_phoneNumberIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
