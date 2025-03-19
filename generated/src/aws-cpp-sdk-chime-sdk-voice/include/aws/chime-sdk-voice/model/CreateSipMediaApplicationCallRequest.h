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
    AWS_CHIMESDKVOICE_API CreateSipMediaApplicationCallRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSipMediaApplicationCall"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The phone number that a user calls from. This is a phone number in your
     * Amazon Chime SDK phone number inventory.</p>
     */
    inline const Aws::String& GetFromPhoneNumber() const { return m_fromPhoneNumber; }
    inline bool FromPhoneNumberHasBeenSet() const { return m_fromPhoneNumberHasBeenSet; }
    template<typename FromPhoneNumberT = Aws::String>
    void SetFromPhoneNumber(FromPhoneNumberT&& value) { m_fromPhoneNumberHasBeenSet = true; m_fromPhoneNumber = std::forward<FromPhoneNumberT>(value); }
    template<typename FromPhoneNumberT = Aws::String>
    CreateSipMediaApplicationCallRequest& WithFromPhoneNumber(FromPhoneNumberT&& value) { SetFromPhoneNumber(std::forward<FromPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number that the service should call.</p>
     */
    inline const Aws::String& GetToPhoneNumber() const { return m_toPhoneNumber; }
    inline bool ToPhoneNumberHasBeenSet() const { return m_toPhoneNumberHasBeenSet; }
    template<typename ToPhoneNumberT = Aws::String>
    void SetToPhoneNumber(ToPhoneNumberT&& value) { m_toPhoneNumberHasBeenSet = true; m_toPhoneNumber = std::forward<ToPhoneNumberT>(value); }
    template<typename ToPhoneNumberT = Aws::String>
    CreateSipMediaApplicationCallRequest& WithToPhoneNumber(ToPhoneNumberT&& value) { SetToPhoneNumber(std::forward<ToPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the SIP media application.</p>
     */
    inline const Aws::String& GetSipMediaApplicationId() const { return m_sipMediaApplicationId; }
    inline bool SipMediaApplicationIdHasBeenSet() const { return m_sipMediaApplicationIdHasBeenSet; }
    template<typename SipMediaApplicationIdT = Aws::String>
    void SetSipMediaApplicationId(SipMediaApplicationIdT&& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = std::forward<SipMediaApplicationIdT>(value); }
    template<typename SipMediaApplicationIdT = Aws::String>
    CreateSipMediaApplicationCallRequest& WithSipMediaApplicationId(SipMediaApplicationIdT&& value) { SetSipMediaApplicationId(std::forward<SipMediaApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SIP headers added to an outbound call leg.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSipHeaders() const { return m_sipHeaders; }
    inline bool SipHeadersHasBeenSet() const { return m_sipHeadersHasBeenSet; }
    template<typename SipHeadersT = Aws::Map<Aws::String, Aws::String>>
    void SetSipHeaders(SipHeadersT&& value) { m_sipHeadersHasBeenSet = true; m_sipHeaders = std::forward<SipHeadersT>(value); }
    template<typename SipHeadersT = Aws::Map<Aws::String, Aws::String>>
    CreateSipMediaApplicationCallRequest& WithSipHeaders(SipHeadersT&& value) { SetSipHeaders(std::forward<SipHeadersT>(value)); return *this;}
    template<typename SipHeadersKeyT = Aws::String, typename SipHeadersValueT = Aws::String>
    CreateSipMediaApplicationCallRequest& AddSipHeaders(SipHeadersKeyT&& key, SipHeadersValueT&& value) {
      m_sipHeadersHasBeenSet = true; m_sipHeaders.emplace(std::forward<SipHeadersKeyT>(key), std::forward<SipHeadersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Context passed to a CreateSipMediaApplication API call. For example, you
     * could pass key-value pairs such as: <code>"FirstName": "John", "LastName":
     * "Doe"</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetArgumentsMap() const { return m_argumentsMap; }
    inline bool ArgumentsMapHasBeenSet() const { return m_argumentsMapHasBeenSet; }
    template<typename ArgumentsMapT = Aws::Map<Aws::String, Aws::String>>
    void SetArgumentsMap(ArgumentsMapT&& value) { m_argumentsMapHasBeenSet = true; m_argumentsMap = std::forward<ArgumentsMapT>(value); }
    template<typename ArgumentsMapT = Aws::Map<Aws::String, Aws::String>>
    CreateSipMediaApplicationCallRequest& WithArgumentsMap(ArgumentsMapT&& value) { SetArgumentsMap(std::forward<ArgumentsMapT>(value)); return *this;}
    template<typename ArgumentsMapKeyT = Aws::String, typename ArgumentsMapValueT = Aws::String>
    CreateSipMediaApplicationCallRequest& AddArgumentsMap(ArgumentsMapKeyT&& key, ArgumentsMapValueT&& value) {
      m_argumentsMapHasBeenSet = true; m_argumentsMap.emplace(std::forward<ArgumentsMapKeyT>(key), std::forward<ArgumentsMapValueT>(value)); return *this;
    }
    ///@}
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
