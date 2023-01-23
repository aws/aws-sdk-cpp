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

  class VoiceConnectorGroup
  {
  public:
    AWS_CHIMESDKVOICE_API VoiceConnectorGroup();
    AWS_CHIMESDKVOICE_API VoiceConnectorGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API VoiceConnectorGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetVoiceConnectorGroupId() const{ return m_voiceConnectorGroupId; }

    
    inline bool VoiceConnectorGroupIdHasBeenSet() const { return m_voiceConnectorGroupIdHasBeenSet; }

    
    inline void SetVoiceConnectorGroupId(const Aws::String& value) { m_voiceConnectorGroupIdHasBeenSet = true; m_voiceConnectorGroupId = value; }

    
    inline void SetVoiceConnectorGroupId(Aws::String&& value) { m_voiceConnectorGroupIdHasBeenSet = true; m_voiceConnectorGroupId = std::move(value); }

    
    inline void SetVoiceConnectorGroupId(const char* value) { m_voiceConnectorGroupIdHasBeenSet = true; m_voiceConnectorGroupId.assign(value); }

    
    inline VoiceConnectorGroup& WithVoiceConnectorGroupId(const Aws::String& value) { SetVoiceConnectorGroupId(value); return *this;}

    
    inline VoiceConnectorGroup& WithVoiceConnectorGroupId(Aws::String&& value) { SetVoiceConnectorGroupId(std::move(value)); return *this;}

    
    inline VoiceConnectorGroup& WithVoiceConnectorGroupId(const char* value) { SetVoiceConnectorGroupId(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline VoiceConnectorGroup& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline VoiceConnectorGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline VoiceConnectorGroup& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::Vector<VoiceConnectorItem>& GetVoiceConnectorItems() const{ return m_voiceConnectorItems; }

    
    inline bool VoiceConnectorItemsHasBeenSet() const { return m_voiceConnectorItemsHasBeenSet; }

    
    inline void SetVoiceConnectorItems(const Aws::Vector<VoiceConnectorItem>& value) { m_voiceConnectorItemsHasBeenSet = true; m_voiceConnectorItems = value; }

    
    inline void SetVoiceConnectorItems(Aws::Vector<VoiceConnectorItem>&& value) { m_voiceConnectorItemsHasBeenSet = true; m_voiceConnectorItems = std::move(value); }

    
    inline VoiceConnectorGroup& WithVoiceConnectorItems(const Aws::Vector<VoiceConnectorItem>& value) { SetVoiceConnectorItems(value); return *this;}

    
    inline VoiceConnectorGroup& WithVoiceConnectorItems(Aws::Vector<VoiceConnectorItem>&& value) { SetVoiceConnectorItems(std::move(value)); return *this;}

    
    inline VoiceConnectorGroup& AddVoiceConnectorItems(const VoiceConnectorItem& value) { m_voiceConnectorItemsHasBeenSet = true; m_voiceConnectorItems.push_back(value); return *this; }

    
    inline VoiceConnectorGroup& AddVoiceConnectorItems(VoiceConnectorItem&& value) { m_voiceConnectorItemsHasBeenSet = true; m_voiceConnectorItems.push_back(std::move(value)); return *this; }


    
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    
    inline VoiceConnectorGroup& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    
    inline VoiceConnectorGroup& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    
    inline VoiceConnectorGroup& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    
    inline VoiceConnectorGroup& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}


    
    inline const Aws::String& GetVoiceConnectorGroupArn() const{ return m_voiceConnectorGroupArn; }

    
    inline bool VoiceConnectorGroupArnHasBeenSet() const { return m_voiceConnectorGroupArnHasBeenSet; }

    
    inline void SetVoiceConnectorGroupArn(const Aws::String& value) { m_voiceConnectorGroupArnHasBeenSet = true; m_voiceConnectorGroupArn = value; }

    
    inline void SetVoiceConnectorGroupArn(Aws::String&& value) { m_voiceConnectorGroupArnHasBeenSet = true; m_voiceConnectorGroupArn = std::move(value); }

    
    inline void SetVoiceConnectorGroupArn(const char* value) { m_voiceConnectorGroupArnHasBeenSet = true; m_voiceConnectorGroupArn.assign(value); }

    
    inline VoiceConnectorGroup& WithVoiceConnectorGroupArn(const Aws::String& value) { SetVoiceConnectorGroupArn(value); return *this;}

    
    inline VoiceConnectorGroup& WithVoiceConnectorGroupArn(Aws::String&& value) { SetVoiceConnectorGroupArn(std::move(value)); return *this;}

    
    inline VoiceConnectorGroup& WithVoiceConnectorGroupArn(const char* value) { SetVoiceConnectorGroupArn(value); return *this;}

  private:

    Aws::String m_voiceConnectorGroupId;
    bool m_voiceConnectorGroupIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<VoiceConnectorItem> m_voiceConnectorItems;
    bool m_voiceConnectorItemsHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet = false;

    Aws::String m_voiceConnectorGroupArn;
    bool m_voiceConnectorGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
