/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class CreateSipMediaApplicationCallRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API CreateSipMediaApplicationCallRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSipMediaApplicationCall"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetFromPhoneNumber() const{ return m_fromPhoneNumber; }

    
    inline bool FromPhoneNumberHasBeenSet() const { return m_fromPhoneNumberHasBeenSet; }

    
    inline void SetFromPhoneNumber(const Aws::String& value) { m_fromPhoneNumberHasBeenSet = true; m_fromPhoneNumber = value; }

    
    inline void SetFromPhoneNumber(Aws::String&& value) { m_fromPhoneNumberHasBeenSet = true; m_fromPhoneNumber = std::move(value); }

    
    inline void SetFromPhoneNumber(const char* value) { m_fromPhoneNumberHasBeenSet = true; m_fromPhoneNumber.assign(value); }

    
    inline CreateSipMediaApplicationCallRequest& WithFromPhoneNumber(const Aws::String& value) { SetFromPhoneNumber(value); return *this;}

    
    inline CreateSipMediaApplicationCallRequest& WithFromPhoneNumber(Aws::String&& value) { SetFromPhoneNumber(std::move(value)); return *this;}

    
    inline CreateSipMediaApplicationCallRequest& WithFromPhoneNumber(const char* value) { SetFromPhoneNumber(value); return *this;}


    
    inline const Aws::String& GetToPhoneNumber() const{ return m_toPhoneNumber; }

    
    inline bool ToPhoneNumberHasBeenSet() const { return m_toPhoneNumberHasBeenSet; }

    
    inline void SetToPhoneNumber(const Aws::String& value) { m_toPhoneNumberHasBeenSet = true; m_toPhoneNumber = value; }

    
    inline void SetToPhoneNumber(Aws::String&& value) { m_toPhoneNumberHasBeenSet = true; m_toPhoneNumber = std::move(value); }

    
    inline void SetToPhoneNumber(const char* value) { m_toPhoneNumberHasBeenSet = true; m_toPhoneNumber.assign(value); }

    
    inline CreateSipMediaApplicationCallRequest& WithToPhoneNumber(const Aws::String& value) { SetToPhoneNumber(value); return *this;}

    
    inline CreateSipMediaApplicationCallRequest& WithToPhoneNumber(Aws::String&& value) { SetToPhoneNumber(std::move(value)); return *this;}

    
    inline CreateSipMediaApplicationCallRequest& WithToPhoneNumber(const char* value) { SetToPhoneNumber(value); return *this;}


    
    inline const Aws::String& GetSipMediaApplicationId() const{ return m_sipMediaApplicationId; }

    
    inline bool SipMediaApplicationIdHasBeenSet() const { return m_sipMediaApplicationIdHasBeenSet; }

    
    inline void SetSipMediaApplicationId(const Aws::String& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = value; }

    
    inline void SetSipMediaApplicationId(Aws::String&& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = std::move(value); }

    
    inline void SetSipMediaApplicationId(const char* value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId.assign(value); }

    
    inline CreateSipMediaApplicationCallRequest& WithSipMediaApplicationId(const Aws::String& value) { SetSipMediaApplicationId(value); return *this;}

    
    inline CreateSipMediaApplicationCallRequest& WithSipMediaApplicationId(Aws::String&& value) { SetSipMediaApplicationId(std::move(value)); return *this;}

    
    inline CreateSipMediaApplicationCallRequest& WithSipMediaApplicationId(const char* value) { SetSipMediaApplicationId(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetSipHeaders() const{ return m_sipHeaders; }

    
    inline bool SipHeadersHasBeenSet() const { return m_sipHeadersHasBeenSet; }

    
    inline void SetSipHeaders(const Aws::Map<Aws::String, Aws::String>& value) { m_sipHeadersHasBeenSet = true; m_sipHeaders = value; }

    
    inline void SetSipHeaders(Aws::Map<Aws::String, Aws::String>&& value) { m_sipHeadersHasBeenSet = true; m_sipHeaders = std::move(value); }

    
    inline CreateSipMediaApplicationCallRequest& WithSipHeaders(const Aws::Map<Aws::String, Aws::String>& value) { SetSipHeaders(value); return *this;}

    
    inline CreateSipMediaApplicationCallRequest& WithSipHeaders(Aws::Map<Aws::String, Aws::String>&& value) { SetSipHeaders(std::move(value)); return *this;}

    
    inline CreateSipMediaApplicationCallRequest& AddSipHeaders(const Aws::String& key, const Aws::String& value) { m_sipHeadersHasBeenSet = true; m_sipHeaders.emplace(key, value); return *this; }

    
    inline CreateSipMediaApplicationCallRequest& AddSipHeaders(Aws::String&& key, const Aws::String& value) { m_sipHeadersHasBeenSet = true; m_sipHeaders.emplace(std::move(key), value); return *this; }

    
    inline CreateSipMediaApplicationCallRequest& AddSipHeaders(const Aws::String& key, Aws::String&& value) { m_sipHeadersHasBeenSet = true; m_sipHeaders.emplace(key, std::move(value)); return *this; }

    
    inline CreateSipMediaApplicationCallRequest& AddSipHeaders(Aws::String&& key, Aws::String&& value) { m_sipHeadersHasBeenSet = true; m_sipHeaders.emplace(std::move(key), std::move(value)); return *this; }

    
    inline CreateSipMediaApplicationCallRequest& AddSipHeaders(const char* key, Aws::String&& value) { m_sipHeadersHasBeenSet = true; m_sipHeaders.emplace(key, std::move(value)); return *this; }

    
    inline CreateSipMediaApplicationCallRequest& AddSipHeaders(Aws::String&& key, const char* value) { m_sipHeadersHasBeenSet = true; m_sipHeaders.emplace(std::move(key), value); return *this; }

    
    inline CreateSipMediaApplicationCallRequest& AddSipHeaders(const char* key, const char* value) { m_sipHeadersHasBeenSet = true; m_sipHeaders.emplace(key, value); return *this; }


    
    inline const Aws::Map<Aws::String, Aws::String>& GetArgumentsMap() const{ return m_argumentsMap; }

    
    inline bool ArgumentsMapHasBeenSet() const { return m_argumentsMapHasBeenSet; }

    
    inline void SetArgumentsMap(const Aws::Map<Aws::String, Aws::String>& value) { m_argumentsMapHasBeenSet = true; m_argumentsMap = value; }

    
    inline void SetArgumentsMap(Aws::Map<Aws::String, Aws::String>&& value) { m_argumentsMapHasBeenSet = true; m_argumentsMap = std::move(value); }

    
    inline CreateSipMediaApplicationCallRequest& WithArgumentsMap(const Aws::Map<Aws::String, Aws::String>& value) { SetArgumentsMap(value); return *this;}

    
    inline CreateSipMediaApplicationCallRequest& WithArgumentsMap(Aws::Map<Aws::String, Aws::String>&& value) { SetArgumentsMap(std::move(value)); return *this;}

    
    inline CreateSipMediaApplicationCallRequest& AddArgumentsMap(const Aws::String& key, const Aws::String& value) { m_argumentsMapHasBeenSet = true; m_argumentsMap.emplace(key, value); return *this; }

    
    inline CreateSipMediaApplicationCallRequest& AddArgumentsMap(Aws::String&& key, const Aws::String& value) { m_argumentsMapHasBeenSet = true; m_argumentsMap.emplace(std::move(key), value); return *this; }

    
    inline CreateSipMediaApplicationCallRequest& AddArgumentsMap(const Aws::String& key, Aws::String&& value) { m_argumentsMapHasBeenSet = true; m_argumentsMap.emplace(key, std::move(value)); return *this; }

    
    inline CreateSipMediaApplicationCallRequest& AddArgumentsMap(Aws::String&& key, Aws::String&& value) { m_argumentsMapHasBeenSet = true; m_argumentsMap.emplace(std::move(key), std::move(value)); return *this; }

    
    inline CreateSipMediaApplicationCallRequest& AddArgumentsMap(const char* key, Aws::String&& value) { m_argumentsMapHasBeenSet = true; m_argumentsMap.emplace(key, std::move(value)); return *this; }

    
    inline CreateSipMediaApplicationCallRequest& AddArgumentsMap(Aws::String&& key, const char* value) { m_argumentsMapHasBeenSet = true; m_argumentsMap.emplace(std::move(key), value); return *this; }

    
    inline CreateSipMediaApplicationCallRequest& AddArgumentsMap(const char* key, const char* value) { m_argumentsMapHasBeenSet = true; m_argumentsMap.emplace(key, value); return *this; }

  private:

    Aws::String m_fromPhoneNumber;
    bool m_fromPhoneNumberHasBeenSet = false;

    Aws::String m_toPhoneNumber;
    bool m_toPhoneNumberHasBeenSet = false;

    Aws::String m_sipMediaApplicationId;
    bool m_sipMediaApplicationIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sipHeaders;
    bool m_sipHeadersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_argumentsMap;
    bool m_argumentsMapHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
