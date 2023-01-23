/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/VoiceConnectorItem.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class CreateVoiceConnectorGroupRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API CreateVoiceConnectorGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVoiceConnectorGroup"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the Amazon Chime Voice Connector group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Amazon Chime Voice Connector group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Amazon Chime Voice Connector group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Amazon Chime Voice Connector group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Amazon Chime Voice Connector group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Amazon Chime Voice Connector group.</p>
     */
    inline CreateVoiceConnectorGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Amazon Chime Voice Connector group.</p>
     */
    inline CreateVoiceConnectorGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Chime Voice Connector group.</p>
     */
    inline CreateVoiceConnectorGroupRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Chime Voice Connectors to route inbound calls to.</p>
     */
    inline const Aws::Vector<VoiceConnectorItem>& GetVoiceConnectorItems() const{ return m_voiceConnectorItems; }

    /**
     * <p>The Amazon Chime Voice Connectors to route inbound calls to.</p>
     */
    inline bool VoiceConnectorItemsHasBeenSet() const { return m_voiceConnectorItemsHasBeenSet; }

    /**
     * <p>The Amazon Chime Voice Connectors to route inbound calls to.</p>
     */
    inline void SetVoiceConnectorItems(const Aws::Vector<VoiceConnectorItem>& value) { m_voiceConnectorItemsHasBeenSet = true; m_voiceConnectorItems = value; }

    /**
     * <p>The Amazon Chime Voice Connectors to route inbound calls to.</p>
     */
    inline void SetVoiceConnectorItems(Aws::Vector<VoiceConnectorItem>&& value) { m_voiceConnectorItemsHasBeenSet = true; m_voiceConnectorItems = std::move(value); }

    /**
     * <p>The Amazon Chime Voice Connectors to route inbound calls to.</p>
     */
    inline CreateVoiceConnectorGroupRequest& WithVoiceConnectorItems(const Aws::Vector<VoiceConnectorItem>& value) { SetVoiceConnectorItems(value); return *this;}

    /**
     * <p>The Amazon Chime Voice Connectors to route inbound calls to.</p>
     */
    inline CreateVoiceConnectorGroupRequest& WithVoiceConnectorItems(Aws::Vector<VoiceConnectorItem>&& value) { SetVoiceConnectorItems(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime Voice Connectors to route inbound calls to.</p>
     */
    inline CreateVoiceConnectorGroupRequest& AddVoiceConnectorItems(const VoiceConnectorItem& value) { m_voiceConnectorItemsHasBeenSet = true; m_voiceConnectorItems.push_back(value); return *this; }

    /**
     * <p>The Amazon Chime Voice Connectors to route inbound calls to.</p>
     */
    inline CreateVoiceConnectorGroupRequest& AddVoiceConnectorItems(VoiceConnectorItem&& value) { m_voiceConnectorItemsHasBeenSet = true; m_voiceConnectorItems.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<VoiceConnectorItem> m_voiceConnectorItems;
    bool m_voiceConnectorItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
