/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/ChannelMode.h>
#include <aws/chime-sdk-messaging/model/ChannelPrivacy.h>
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
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   * <p>Summary of details of a channel associated with channel flow.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ChannelAssociatedWithFlowSummary">AWS
   * API Reference</a></p>
   */
  class ChannelAssociatedWithFlowSummary
  {
  public:
    AWS_CHIMESDKMESSAGING_API ChannelAssociatedWithFlowSummary();
    AWS_CHIMESDKMESSAGING_API ChannelAssociatedWithFlowSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ChannelAssociatedWithFlowSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the channel flow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ChannelAssociatedWithFlowSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ChannelAssociatedWithFlowSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ChannelAssociatedWithFlowSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }
    inline ChannelAssociatedWithFlowSummary& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}
    inline ChannelAssociatedWithFlowSummary& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}
    inline ChannelAssociatedWithFlowSummary& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of the channel.</p>
     */
    inline const ChannelMode& GetMode() const{ return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(const ChannelMode& value) { m_modeHasBeenSet = true; m_mode = value; }
    inline void SetMode(ChannelMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }
    inline ChannelAssociatedWithFlowSummary& WithMode(const ChannelMode& value) { SetMode(value); return *this;}
    inline ChannelAssociatedWithFlowSummary& WithMode(ChannelMode&& value) { SetMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel's privacy setting.</p>
     */
    inline const ChannelPrivacy& GetPrivacy() const{ return m_privacy; }
    inline bool PrivacyHasBeenSet() const { return m_privacyHasBeenSet; }
    inline void SetPrivacy(const ChannelPrivacy& value) { m_privacyHasBeenSet = true; m_privacy = value; }
    inline void SetPrivacy(ChannelPrivacy&& value) { m_privacyHasBeenSet = true; m_privacy = std::move(value); }
    inline ChannelAssociatedWithFlowSummary& WithPrivacy(const ChannelPrivacy& value) { SetPrivacy(value); return *this;}
    inline ChannelAssociatedWithFlowSummary& WithPrivacy(ChannelPrivacy&& value) { SetPrivacy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel's metadata.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }
    inline ChannelAssociatedWithFlowSummary& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}
    inline ChannelAssociatedWithFlowSummary& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}
    inline ChannelAssociatedWithFlowSummary& WithMetadata(const char* value) { SetMetadata(value); return *this;}
    ///@}
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
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
