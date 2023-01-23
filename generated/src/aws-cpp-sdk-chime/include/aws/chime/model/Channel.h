/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/ChannelMode.h>
#include <aws/chime/model/ChannelPrivacy.h>
#include <aws/chime/model/Identity.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The details of a channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/Channel">AWS API
   * Reference</a></p>
   */
  class Channel
  {
  public:
    AWS_CHIME_API Channel();
    AWS_CHIME_API Channel(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Channel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the channel.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline Channel& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline Channel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline Channel& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline Channel& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline Channel& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline Channel& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The mode of the channel.</p>
     */
    inline const ChannelMode& GetMode() const{ return m_mode; }

    /**
     * <p>The mode of the channel.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The mode of the channel.</p>
     */
    inline void SetMode(const ChannelMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The mode of the channel.</p>
     */
    inline void SetMode(ChannelMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The mode of the channel.</p>
     */
    inline Channel& WithMode(const ChannelMode& value) { SetMode(value); return *this;}

    /**
     * <p>The mode of the channel.</p>
     */
    inline Channel& WithMode(ChannelMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>The channel's privacy setting.</p>
     */
    inline const ChannelPrivacy& GetPrivacy() const{ return m_privacy; }

    /**
     * <p>The channel's privacy setting.</p>
     */
    inline bool PrivacyHasBeenSet() const { return m_privacyHasBeenSet; }

    /**
     * <p>The channel's privacy setting.</p>
     */
    inline void SetPrivacy(const ChannelPrivacy& value) { m_privacyHasBeenSet = true; m_privacy = value; }

    /**
     * <p>The channel's privacy setting.</p>
     */
    inline void SetPrivacy(ChannelPrivacy&& value) { m_privacyHasBeenSet = true; m_privacy = std::move(value); }

    /**
     * <p>The channel's privacy setting.</p>
     */
    inline Channel& WithPrivacy(const ChannelPrivacy& value) { SetPrivacy(value); return *this;}

    /**
     * <p>The channel's privacy setting.</p>
     */
    inline Channel& WithPrivacy(ChannelPrivacy&& value) { SetPrivacy(std::move(value)); return *this;}


    /**
     * <p>The channel's metadata.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The channel's metadata.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The channel's metadata.</p>
     */
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The channel's metadata.</p>
     */
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The channel's metadata.</p>
     */
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }

    /**
     * <p>The channel's metadata.</p>
     */
    inline Channel& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * <p>The channel's metadata.</p>
     */
    inline Channel& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The channel's metadata.</p>
     */
    inline Channel& WithMetadata(const char* value) { SetMetadata(value); return *this;}


    /**
     * <p>The <code>AppInstanceUser</code> who created the channel.</p>
     */
    inline const Identity& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The <code>AppInstanceUser</code> who created the channel.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The <code>AppInstanceUser</code> who created the channel.</p>
     */
    inline void SetCreatedBy(const Identity& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The <code>AppInstanceUser</code> who created the channel.</p>
     */
    inline void SetCreatedBy(Identity&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The <code>AppInstanceUser</code> who created the channel.</p>
     */
    inline Channel& WithCreatedBy(const Identity& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The <code>AppInstanceUser</code> who created the channel.</p>
     */
    inline Channel& WithCreatedBy(Identity&& value) { SetCreatedBy(std::move(value)); return *this;}


    /**
     * <p>The time at which the <code>AppInstanceUser</code> created the channel.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time at which the <code>AppInstanceUser</code> created the channel.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time at which the <code>AppInstanceUser</code> created the channel.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time at which the <code>AppInstanceUser</code> created the channel.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time at which the <code>AppInstanceUser</code> created the channel.</p>
     */
    inline Channel& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time at which the <code>AppInstanceUser</code> created the channel.</p>
     */
    inline Channel& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time at which a member sent the last message in the channel.</p>
     */
    inline const Aws::Utils::DateTime& GetLastMessageTimestamp() const{ return m_lastMessageTimestamp; }

    /**
     * <p>The time at which a member sent the last message in the channel.</p>
     */
    inline bool LastMessageTimestampHasBeenSet() const { return m_lastMessageTimestampHasBeenSet; }

    /**
     * <p>The time at which a member sent the last message in the channel.</p>
     */
    inline void SetLastMessageTimestamp(const Aws::Utils::DateTime& value) { m_lastMessageTimestampHasBeenSet = true; m_lastMessageTimestamp = value; }

    /**
     * <p>The time at which a member sent the last message in the channel.</p>
     */
    inline void SetLastMessageTimestamp(Aws::Utils::DateTime&& value) { m_lastMessageTimestampHasBeenSet = true; m_lastMessageTimestamp = std::move(value); }

    /**
     * <p>The time at which a member sent the last message in the channel.</p>
     */
    inline Channel& WithLastMessageTimestamp(const Aws::Utils::DateTime& value) { SetLastMessageTimestamp(value); return *this;}

    /**
     * <p>The time at which a member sent the last message in the channel.</p>
     */
    inline Channel& WithLastMessageTimestamp(Aws::Utils::DateTime&& value) { SetLastMessageTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time at which a channel was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }

    /**
     * <p>The time at which a channel was last updated.</p>
     */
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }

    /**
     * <p>The time at which a channel was last updated.</p>
     */
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }

    /**
     * <p>The time at which a channel was last updated.</p>
     */
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }

    /**
     * <p>The time at which a channel was last updated.</p>
     */
    inline Channel& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}

    /**
     * <p>The time at which a channel was last updated.</p>
     */
    inline Channel& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    ChannelMode m_mode;
    bool m_modeHasBeenSet = false;

    ChannelPrivacy m_privacy;
    bool m_privacyHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;

    Identity m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastMessageTimestamp;
    bool m_lastMessageTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
