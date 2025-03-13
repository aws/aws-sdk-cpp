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
    AWS_CHIMESDKVOICE_API CreateVoiceConnectorGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVoiceConnectorGroup"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the Voice Connector group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateVoiceConnectorGroupRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the Voice Connectors that inbound calls are routed to.</p>
     */
    inline const Aws::Vector<VoiceConnectorItem>& GetVoiceConnectorItems() const { return m_voiceConnectorItems; }
    inline bool VoiceConnectorItemsHasBeenSet() const { return m_voiceConnectorItemsHasBeenSet; }
    template<typename VoiceConnectorItemsT = Aws::Vector<VoiceConnectorItem>>
    void SetVoiceConnectorItems(VoiceConnectorItemsT&& value) { m_voiceConnectorItemsHasBeenSet = true; m_voiceConnectorItems = std::forward<VoiceConnectorItemsT>(value); }
    template<typename VoiceConnectorItemsT = Aws::Vector<VoiceConnectorItem>>
    CreateVoiceConnectorGroupRequest& WithVoiceConnectorItems(VoiceConnectorItemsT&& value) { SetVoiceConnectorItems(std::forward<VoiceConnectorItemsT>(value)); return *this;}
    template<typename VoiceConnectorItemsT = VoiceConnectorItem>
    CreateVoiceConnectorGroupRequest& AddVoiceConnectorItems(VoiceConnectorItemsT&& value) { m_voiceConnectorItemsHasBeenSet = true; m_voiceConnectorItems.emplace_back(std::forward<VoiceConnectorItemsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<VoiceConnectorItem> m_voiceConnectorItems;
    bool m_voiceConnectorItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
