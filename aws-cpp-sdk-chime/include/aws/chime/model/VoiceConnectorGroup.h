/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime/model/VoiceConnectorItem.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The Amazon Chime Voice Connector group configuration, including associated
   * Amazon Chime Voice Connectors. You can include Amazon Chime Voice Connectors
   * from different AWS Regions in your group. This creates a fault tolerant
   * mechanism for fallback in case of availability events.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/VoiceConnectorGroup">AWS
   * API Reference</a></p>
   */
  class VoiceConnectorGroup
  {
  public:
    AWS_CHIME_API VoiceConnectorGroup();
    AWS_CHIME_API VoiceConnectorGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API VoiceConnectorGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Chime Voice Connector group ID.</p>
     */
    inline const Aws::String& GetVoiceConnectorGroupId() const{ return m_voiceConnectorGroupId; }

    /**
     * <p>The Amazon Chime Voice Connector group ID.</p>
     */
    inline bool VoiceConnectorGroupIdHasBeenSet() const { return m_voiceConnectorGroupIdHasBeenSet; }

    /**
     * <p>The Amazon Chime Voice Connector group ID.</p>
     */
    inline void SetVoiceConnectorGroupId(const Aws::String& value) { m_voiceConnectorGroupIdHasBeenSet = true; m_voiceConnectorGroupId = value; }

    /**
     * <p>The Amazon Chime Voice Connector group ID.</p>
     */
    inline void SetVoiceConnectorGroupId(Aws::String&& value) { m_voiceConnectorGroupIdHasBeenSet = true; m_voiceConnectorGroupId = std::move(value); }

    /**
     * <p>The Amazon Chime Voice Connector group ID.</p>
     */
    inline void SetVoiceConnectorGroupId(const char* value) { m_voiceConnectorGroupIdHasBeenSet = true; m_voiceConnectorGroupId.assign(value); }

    /**
     * <p>The Amazon Chime Voice Connector group ID.</p>
     */
    inline VoiceConnectorGroup& WithVoiceConnectorGroupId(const Aws::String& value) { SetVoiceConnectorGroupId(value); return *this;}

    /**
     * <p>The Amazon Chime Voice Connector group ID.</p>
     */
    inline VoiceConnectorGroup& WithVoiceConnectorGroupId(Aws::String&& value) { SetVoiceConnectorGroupId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime Voice Connector group ID.</p>
     */
    inline VoiceConnectorGroup& WithVoiceConnectorGroupId(const char* value) { SetVoiceConnectorGroupId(value); return *this;}


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
    inline VoiceConnectorGroup& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Amazon Chime Voice Connector group.</p>
     */
    inline VoiceConnectorGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Chime Voice Connector group.</p>
     */
    inline VoiceConnectorGroup& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Chime Voice Connectors to which to route inbound calls.</p>
     */
    inline const Aws::Vector<VoiceConnectorItem>& GetVoiceConnectorItems() const{ return m_voiceConnectorItems; }

    /**
     * <p>The Amazon Chime Voice Connectors to which to route inbound calls.</p>
     */
    inline bool VoiceConnectorItemsHasBeenSet() const { return m_voiceConnectorItemsHasBeenSet; }

    /**
     * <p>The Amazon Chime Voice Connectors to which to route inbound calls.</p>
     */
    inline void SetVoiceConnectorItems(const Aws::Vector<VoiceConnectorItem>& value) { m_voiceConnectorItemsHasBeenSet = true; m_voiceConnectorItems = value; }

    /**
     * <p>The Amazon Chime Voice Connectors to which to route inbound calls.</p>
     */
    inline void SetVoiceConnectorItems(Aws::Vector<VoiceConnectorItem>&& value) { m_voiceConnectorItemsHasBeenSet = true; m_voiceConnectorItems = std::move(value); }

    /**
     * <p>The Amazon Chime Voice Connectors to which to route inbound calls.</p>
     */
    inline VoiceConnectorGroup& WithVoiceConnectorItems(const Aws::Vector<VoiceConnectorItem>& value) { SetVoiceConnectorItems(value); return *this;}

    /**
     * <p>The Amazon Chime Voice Connectors to which to route inbound calls.</p>
     */
    inline VoiceConnectorGroup& WithVoiceConnectorItems(Aws::Vector<VoiceConnectorItem>&& value) { SetVoiceConnectorItems(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime Voice Connectors to which to route inbound calls.</p>
     */
    inline VoiceConnectorGroup& AddVoiceConnectorItems(const VoiceConnectorItem& value) { m_voiceConnectorItemsHasBeenSet = true; m_voiceConnectorItems.push_back(value); return *this; }

    /**
     * <p>The Amazon Chime Voice Connectors to which to route inbound calls.</p>
     */
    inline VoiceConnectorGroup& AddVoiceConnectorItems(VoiceConnectorItem&& value) { m_voiceConnectorItemsHasBeenSet = true; m_voiceConnectorItems.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Chime Voice Connector group creation time stamp, in ISO 8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The Amazon Chime Voice Connector group creation time stamp, in ISO 8601
     * format.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The Amazon Chime Voice Connector group creation time stamp, in ISO 8601
     * format.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The Amazon Chime Voice Connector group creation time stamp, in ISO 8601
     * format.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The Amazon Chime Voice Connector group creation time stamp, in ISO 8601
     * format.</p>
     */
    inline VoiceConnectorGroup& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The Amazon Chime Voice Connector group creation time stamp, in ISO 8601
     * format.</p>
     */
    inline VoiceConnectorGroup& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The updated Amazon Chime Voice Connector group time stamp, in ISO 8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    /**
     * <p>The updated Amazon Chime Voice Connector group time stamp, in ISO 8601
     * format.</p>
     */
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    /**
     * <p>The updated Amazon Chime Voice Connector group time stamp, in ISO 8601
     * format.</p>
     */
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    /**
     * <p>The updated Amazon Chime Voice Connector group time stamp, in ISO 8601
     * format.</p>
     */
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    /**
     * <p>The updated Amazon Chime Voice Connector group time stamp, in ISO 8601
     * format.</p>
     */
    inline VoiceConnectorGroup& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    /**
     * <p>The updated Amazon Chime Voice Connector group time stamp, in ISO 8601
     * format.</p>
     */
    inline VoiceConnectorGroup& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The ARN of the specified Amazon Chime Voice Connector group.</p>
     */
    inline const Aws::String& GetVoiceConnectorGroupArn() const{ return m_voiceConnectorGroupArn; }

    /**
     * <p>The ARN of the specified Amazon Chime Voice Connector group.</p>
     */
    inline bool VoiceConnectorGroupArnHasBeenSet() const { return m_voiceConnectorGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the specified Amazon Chime Voice Connector group.</p>
     */
    inline void SetVoiceConnectorGroupArn(const Aws::String& value) { m_voiceConnectorGroupArnHasBeenSet = true; m_voiceConnectorGroupArn = value; }

    /**
     * <p>The ARN of the specified Amazon Chime Voice Connector group.</p>
     */
    inline void SetVoiceConnectorGroupArn(Aws::String&& value) { m_voiceConnectorGroupArnHasBeenSet = true; m_voiceConnectorGroupArn = std::move(value); }

    /**
     * <p>The ARN of the specified Amazon Chime Voice Connector group.</p>
     */
    inline void SetVoiceConnectorGroupArn(const char* value) { m_voiceConnectorGroupArnHasBeenSet = true; m_voiceConnectorGroupArn.assign(value); }

    /**
     * <p>The ARN of the specified Amazon Chime Voice Connector group.</p>
     */
    inline VoiceConnectorGroup& WithVoiceConnectorGroupArn(const Aws::String& value) { SetVoiceConnectorGroupArn(value); return *this;}

    /**
     * <p>The ARN of the specified Amazon Chime Voice Connector group.</p>
     */
    inline VoiceConnectorGroup& WithVoiceConnectorGroupArn(Aws::String&& value) { SetVoiceConnectorGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the specified Amazon Chime Voice Connector group.</p>
     */
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
} // namespace Chime
} // namespace Aws
