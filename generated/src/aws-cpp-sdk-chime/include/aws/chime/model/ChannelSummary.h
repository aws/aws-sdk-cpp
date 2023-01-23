/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/ChannelMode.h>
#include <aws/chime/model/ChannelPrivacy.h>
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
   * <p>Summary of the details of a <code>Channel</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ChannelSummary">AWS
   * API Reference</a></p>
   */
  class ChannelSummary
  {
  public:
    AWS_CHIME_API ChannelSummary();
    AWS_CHIME_API ChannelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API ChannelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ChannelSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline ChannelSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline ChannelSummary& WithName(const char* value) { SetName(value); return *this;}


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
    inline ChannelSummary& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline ChannelSummary& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline ChannelSummary& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


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
    inline ChannelSummary& WithMode(const ChannelMode& value) { SetMode(value); return *this;}

    /**
     * <p>The mode of the channel.</p>
     */
    inline ChannelSummary& WithMode(ChannelMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>The privacy setting of the channel.</p>
     */
    inline const ChannelPrivacy& GetPrivacy() const{ return m_privacy; }

    /**
     * <p>The privacy setting of the channel.</p>
     */
    inline bool PrivacyHasBeenSet() const { return m_privacyHasBeenSet; }

    /**
     * <p>The privacy setting of the channel.</p>
     */
    inline void SetPrivacy(const ChannelPrivacy& value) { m_privacyHasBeenSet = true; m_privacy = value; }

    /**
     * <p>The privacy setting of the channel.</p>
     */
    inline void SetPrivacy(ChannelPrivacy&& value) { m_privacyHasBeenSet = true; m_privacy = std::move(value); }

    /**
     * <p>The privacy setting of the channel.</p>
     */
    inline ChannelSummary& WithPrivacy(const ChannelPrivacy& value) { SetPrivacy(value); return *this;}

    /**
     * <p>The privacy setting of the channel.</p>
     */
    inline ChannelSummary& WithPrivacy(ChannelPrivacy&& value) { SetPrivacy(std::move(value)); return *this;}


    /**
     * <p>The metadata of the channel.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The metadata of the channel.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The metadata of the channel.</p>
     */
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The metadata of the channel.</p>
     */
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The metadata of the channel.</p>
     */
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }

    /**
     * <p>The metadata of the channel.</p>
     */
    inline ChannelSummary& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * <p>The metadata of the channel.</p>
     */
    inline ChannelSummary& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The metadata of the channel.</p>
     */
    inline ChannelSummary& WithMetadata(const char* value) { SetMetadata(value); return *this;}


    /**
     * <p>The time at which the last message in a channel was sent.</p>
     */
    inline const Aws::Utils::DateTime& GetLastMessageTimestamp() const{ return m_lastMessageTimestamp; }

    /**
     * <p>The time at which the last message in a channel was sent.</p>
     */
    inline bool LastMessageTimestampHasBeenSet() const { return m_lastMessageTimestampHasBeenSet; }

    /**
     * <p>The time at which the last message in a channel was sent.</p>
     */
    inline void SetLastMessageTimestamp(const Aws::Utils::DateTime& value) { m_lastMessageTimestampHasBeenSet = true; m_lastMessageTimestamp = value; }

    /**
     * <p>The time at which the last message in a channel was sent.</p>
     */
    inline void SetLastMessageTimestamp(Aws::Utils::DateTime&& value) { m_lastMessageTimestampHasBeenSet = true; m_lastMessageTimestamp = std::move(value); }

    /**
     * <p>The time at which the last message in a channel was sent.</p>
     */
    inline ChannelSummary& WithLastMessageTimestamp(const Aws::Utils::DateTime& value) { SetLastMessageTimestamp(value); return *this;}

    /**
     * <p>The time at which the last message in a channel was sent.</p>
     */
    inline ChannelSummary& WithLastMessageTimestamp(Aws::Utils::DateTime&& value) { SetLastMessageTimestamp(std::move(value)); return *this;}

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

    Aws::Utils::DateTime m_lastMessageTimestamp;
    bool m_lastMessageTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
