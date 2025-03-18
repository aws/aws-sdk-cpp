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
    AWS_CHIMESDKVOICE_API GetPhoneNumberOrderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPhoneNumberOrder"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the phone number order .</p>
     */
    inline const Aws::String& GetPhoneNumberOrderId() const { return m_phoneNumberOrderId; }
    inline bool PhoneNumberOrderIdHasBeenSet() const { return m_phoneNumberOrderIdHasBeenSet; }
    template<typename PhoneNumberOrderIdT = Aws::String>
    void SetPhoneNumberOrderId(PhoneNumberOrderIdT&& value) { m_phoneNumberOrderIdHasBeenSet = true; m_phoneNumberOrderId = std::forward<PhoneNumberOrderIdT>(value); }
    template<typename PhoneNumberOrderIdT = Aws::String>
    GetPhoneNumberOrderRequest& WithPhoneNumberOrderId(PhoneNumberOrderIdT&& value) { SetPhoneNumberOrderId(std::forward<PhoneNumberOrderIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_phoneNumberOrderId;
    bool m_phoneNumberOrderIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
