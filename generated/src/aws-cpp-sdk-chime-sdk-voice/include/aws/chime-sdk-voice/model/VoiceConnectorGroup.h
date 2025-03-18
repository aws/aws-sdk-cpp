/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime-sdk-voice/model/VoiceConnectorItem.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   * <p>The Amazon Chime SDK Voice Connector group configuration, including
   * associated Voice Connectors. You can include Voice Connectors from different AWS
   * Regions in a group. This creates a fault tolerant mechanism for fallback in case
   * of availability events.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/VoiceConnectorGroup">AWS
   * API Reference</a></p>
   */
  class VoiceConnectorGroup
  {
  public:
    AWS_CHIMESDKVOICE_API VoiceConnectorGroup() = default;
    AWS_CHIMESDKVOICE_API VoiceConnectorGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API VoiceConnectorGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a Voice Connector group.</p>
     */
    inline const Aws::String& GetVoiceConnectorGroupId() const { return m_voiceConnectorGroupId; }
    inline bool VoiceConnectorGroupIdHasBeenSet() const { return m_voiceConnectorGroupIdHasBeenSet; }
    template<typename VoiceConnectorGroupIdT = Aws::String>
    void SetVoiceConnectorGroupId(VoiceConnectorGroupIdT&& value) { m_voiceConnectorGroupIdHasBeenSet = true; m_voiceConnectorGroupId = std::forward<VoiceConnectorGroupIdT>(value); }
    template<typename VoiceConnectorGroupIdT = Aws::String>
    VoiceConnectorGroup& WithVoiceConnectorGroupId(VoiceConnectorGroupIdT&& value) { SetVoiceConnectorGroupId(std::forward<VoiceConnectorGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a Voice Connector group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    VoiceConnectorGroup& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Voice Connectors to which you route inbound calls.</p>
     */
    inline const Aws::Vector<VoiceConnectorItem>& GetVoiceConnectorItems() const { return m_voiceConnectorItems; }
    inline bool VoiceConnectorItemsHasBeenSet() const { return m_voiceConnectorItemsHasBeenSet; }
    template<typename VoiceConnectorItemsT = Aws::Vector<VoiceConnectorItem>>
    void SetVoiceConnectorItems(VoiceConnectorItemsT&& value) { m_voiceConnectorItemsHasBeenSet = true; m_voiceConnectorItems = std::forward<VoiceConnectorItemsT>(value); }
    template<typename VoiceConnectorItemsT = Aws::Vector<VoiceConnectorItem>>
    VoiceConnectorGroup& WithVoiceConnectorItems(VoiceConnectorItemsT&& value) { SetVoiceConnectorItems(std::forward<VoiceConnectorItemsT>(value)); return *this;}
    template<typename VoiceConnectorItemsT = VoiceConnectorItem>
    VoiceConnectorGroup& AddVoiceConnectorItems(VoiceConnectorItemsT&& value) { m_voiceConnectorItemsHasBeenSet = true; m_voiceConnectorItems.emplace_back(std::forward<VoiceConnectorItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Voice Connector group's creation time stamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    VoiceConnectorGroup& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Voice Connector group's creation time stamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const { return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    void SetUpdatedTimestamp(UpdatedTimestampT&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::forward<UpdatedTimestampT>(value); }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    VoiceConnectorGroup& WithUpdatedTimestamp(UpdatedTimestampT&& value) { SetUpdatedTimestamp(std::forward<UpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Voice Connector group.</p>
     */
    inline const Aws::String& GetVoiceConnectorGroupArn() const { return m_voiceConnectorGroupArn; }
    inline bool VoiceConnectorGroupArnHasBeenSet() const { return m_voiceConnectorGroupArnHasBeenSet; }
    template<typename VoiceConnectorGroupArnT = Aws::String>
    void SetVoiceConnectorGroupArn(VoiceConnectorGroupArnT&& value) { m_voiceConnectorGroupArnHasBeenSet = true; m_voiceConnectorGroupArn = std::forward<VoiceConnectorGroupArnT>(value); }
    template<typename VoiceConnectorGroupArnT = Aws::String>
    VoiceConnectorGroup& WithVoiceConnectorGroupArn(VoiceConnectorGroupArnT&& value) { SetVoiceConnectorGroupArn(std::forward<VoiceConnectorGroupArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_voiceConnectorGroupId;
    bool m_voiceConnectorGroupIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<VoiceConnectorItem> m_voiceConnectorItems;
    bool m_voiceConnectorItemsHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp{};
    bool m_updatedTimestampHasBeenSet = false;

    Aws::String m_voiceConnectorGroupArn;
    bool m_voiceConnectorGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
