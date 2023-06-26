/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/ChannelRetentionSettings.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{

  /**
   * <p>The details of the data-retention settings for an
   * <code>AppInstance</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/AppInstanceRetentionSettings">AWS
   * API Reference</a></p>
   */
  class AppInstanceRetentionSettings
  {
  public:
    AWS_CHIMESDKIDENTITY_API AppInstanceRetentionSettings();
    AWS_CHIMESDKIDENTITY_API AppInstanceRetentionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API AppInstanceRetentionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The length of time in days to retain the messages in a channel.</p>
     */
    inline const ChannelRetentionSettings& GetChannelRetentionSettings() const{ return m_channelRetentionSettings; }

    /**
     * <p>The length of time in days to retain the messages in a channel.</p>
     */
    inline bool ChannelRetentionSettingsHasBeenSet() const { return m_channelRetentionSettingsHasBeenSet; }

    /**
     * <p>The length of time in days to retain the messages in a channel.</p>
     */
    inline void SetChannelRetentionSettings(const ChannelRetentionSettings& value) { m_channelRetentionSettingsHasBeenSet = true; m_channelRetentionSettings = value; }

    /**
     * <p>The length of time in days to retain the messages in a channel.</p>
     */
    inline void SetChannelRetentionSettings(ChannelRetentionSettings&& value) { m_channelRetentionSettingsHasBeenSet = true; m_channelRetentionSettings = std::move(value); }

    /**
     * <p>The length of time in days to retain the messages in a channel.</p>
     */
    inline AppInstanceRetentionSettings& WithChannelRetentionSettings(const ChannelRetentionSettings& value) { SetChannelRetentionSettings(value); return *this;}

    /**
     * <p>The length of time in days to retain the messages in a channel.</p>
     */
    inline AppInstanceRetentionSettings& WithChannelRetentionSettings(ChannelRetentionSettings&& value) { SetChannelRetentionSettings(std::move(value)); return *this;}

  private:

    ChannelRetentionSettings m_channelRetentionSettings;
    bool m_channelRetentionSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
