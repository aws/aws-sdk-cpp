/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class BatchDeletePhoneNumberRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API BatchDeletePhoneNumberRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeletePhoneNumber"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>List of phone number IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPhoneNumberIds() const { return m_phoneNumberIds; }
    inline bool PhoneNumberIdsHasBeenSet() const { return m_phoneNumberIdsHasBeenSet; }
    template<typename PhoneNumberIdsT = Aws::Vector<Aws::String>>
    void SetPhoneNumberIds(PhoneNumberIdsT&& value) { m_phoneNumberIdsHasBeenSet = true; m_phoneNumberIds = std::forward<PhoneNumberIdsT>(value); }
    template<typename PhoneNumberIdsT = Aws::Vector<Aws::String>>
    BatchDeletePhoneNumberRequest& WithPhoneNumberIds(PhoneNumberIdsT&& value) { SetPhoneNumberIds(std::forward<PhoneNumberIdsT>(value)); return *this;}
    template<typename PhoneNumberIdsT = Aws::String>
    BatchDeletePhoneNumberRequest& AddPhoneNumberIds(PhoneNumberIdsT&& value) { m_phoneNumberIdsHasBeenSet = true; m_phoneNumberIds.emplace_back(std::forward<PhoneNumberIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_phoneNumberIds;
    bool m_phoneNumberIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
