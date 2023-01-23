/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-voice/model/VoiceConnectorItem.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class CreateVoiceConnectorGroupRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API CreateVoiceConnectorGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVoiceConnectorGroup"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline CreateVoiceConnectorGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline CreateVoiceConnectorGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline CreateVoiceConnectorGroupRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::Vector<VoiceConnectorItem>& GetVoiceConnectorItems() const{ return m_voiceConnectorItems; }

    
    inline bool VoiceConnectorItemsHasBeenSet() const { return m_voiceConnectorItemsHasBeenSet; }

    
    inline void SetVoiceConnectorItems(const Aws::Vector<VoiceConnectorItem>& value) { m_voiceConnectorItemsHasBeenSet = true; m_voiceConnectorItems = value; }

    
    inline void SetVoiceConnectorItems(Aws::Vector<VoiceConnectorItem>&& value) { m_voiceConnectorItemsHasBeenSet = true; m_voiceConnectorItems = std::move(value); }

    
    inline CreateVoiceConnectorGroupRequest& WithVoiceConnectorItems(const Aws::Vector<VoiceConnectorItem>& value) { SetVoiceConnectorItems(value); return *this;}

    
    inline CreateVoiceConnectorGroupRequest& WithVoiceConnectorItems(Aws::Vector<VoiceConnectorItem>&& value) { SetVoiceConnectorItems(std::move(value)); return *this;}

    
    inline CreateVoiceConnectorGroupRequest& AddVoiceConnectorItems(const VoiceConnectorItem& value) { m_voiceConnectorItemsHasBeenSet = true; m_voiceConnectorItems.push_back(value); return *this; }

    
    inline CreateVoiceConnectorGroupRequest& AddVoiceConnectorItems(VoiceConnectorItem&& value) { m_voiceConnectorItemsHasBeenSet = true; m_voiceConnectorItems.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<VoiceConnectorItem> m_voiceConnectorItems;
    bool m_voiceConnectorItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
