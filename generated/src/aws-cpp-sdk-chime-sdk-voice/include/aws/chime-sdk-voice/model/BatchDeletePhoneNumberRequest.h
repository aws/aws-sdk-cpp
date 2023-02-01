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
    AWS_CHIMESDKVOICE_API BatchDeletePhoneNumberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeletePhoneNumber"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    
    inline const Aws::Vector<Aws::String>& GetPhoneNumberIds() const{ return m_phoneNumberIds; }

    
    inline bool PhoneNumberIdsHasBeenSet() const { return m_phoneNumberIdsHasBeenSet; }

    
    inline void SetPhoneNumberIds(const Aws::Vector<Aws::String>& value) { m_phoneNumberIdsHasBeenSet = true; m_phoneNumberIds = value; }

    
    inline void SetPhoneNumberIds(Aws::Vector<Aws::String>&& value) { m_phoneNumberIdsHasBeenSet = true; m_phoneNumberIds = std::move(value); }

    
    inline BatchDeletePhoneNumberRequest& WithPhoneNumberIds(const Aws::Vector<Aws::String>& value) { SetPhoneNumberIds(value); return *this;}

    
    inline BatchDeletePhoneNumberRequest& WithPhoneNumberIds(Aws::Vector<Aws::String>&& value) { SetPhoneNumberIds(std::move(value)); return *this;}

    
    inline BatchDeletePhoneNumberRequest& AddPhoneNumberIds(const Aws::String& value) { m_phoneNumberIdsHasBeenSet = true; m_phoneNumberIds.push_back(value); return *this; }

    
    inline BatchDeletePhoneNumberRequest& AddPhoneNumberIds(Aws::String&& value) { m_phoneNumberIdsHasBeenSet = true; m_phoneNumberIds.push_back(std::move(value)); return *this; }

    
    inline BatchDeletePhoneNumberRequest& AddPhoneNumberIds(const char* value) { m_phoneNumberIdsHasBeenSet = true; m_phoneNumberIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_phoneNumberIds;
    bool m_phoneNumberIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
