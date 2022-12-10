/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/TextLogSetting.h>
#include <aws/lexv2-models/model/AudioLogSetting.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Configures conversation logging that saves audio, text, and metadata for the
   * conversations with your users.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ConversationLogSettings">AWS
   * API Reference</a></p>
   */
  class ConversationLogSettings
  {
  public:
    AWS_LEXMODELSV2_API ConversationLogSettings();
    AWS_LEXMODELSV2_API ConversationLogSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ConversationLogSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon CloudWatch Logs settings for logging text and metadata.</p>
     */
    inline const Aws::Vector<TextLogSetting>& GetTextLogSettings() const{ return m_textLogSettings; }

    /**
     * <p>The Amazon CloudWatch Logs settings for logging text and metadata.</p>
     */
    inline bool TextLogSettingsHasBeenSet() const { return m_textLogSettingsHasBeenSet; }

    /**
     * <p>The Amazon CloudWatch Logs settings for logging text and metadata.</p>
     */
    inline void SetTextLogSettings(const Aws::Vector<TextLogSetting>& value) { m_textLogSettingsHasBeenSet = true; m_textLogSettings = value; }

    /**
     * <p>The Amazon CloudWatch Logs settings for logging text and metadata.</p>
     */
    inline void SetTextLogSettings(Aws::Vector<TextLogSetting>&& value) { m_textLogSettingsHasBeenSet = true; m_textLogSettings = std::move(value); }

    /**
     * <p>The Amazon CloudWatch Logs settings for logging text and metadata.</p>
     */
    inline ConversationLogSettings& WithTextLogSettings(const Aws::Vector<TextLogSetting>& value) { SetTextLogSettings(value); return *this;}

    /**
     * <p>The Amazon CloudWatch Logs settings for logging text and metadata.</p>
     */
    inline ConversationLogSettings& WithTextLogSettings(Aws::Vector<TextLogSetting>&& value) { SetTextLogSettings(std::move(value)); return *this;}

    /**
     * <p>The Amazon CloudWatch Logs settings for logging text and metadata.</p>
     */
    inline ConversationLogSettings& AddTextLogSettings(const TextLogSetting& value) { m_textLogSettingsHasBeenSet = true; m_textLogSettings.push_back(value); return *this; }

    /**
     * <p>The Amazon CloudWatch Logs settings for logging text and metadata.</p>
     */
    inline ConversationLogSettings& AddTextLogSettings(TextLogSetting&& value) { m_textLogSettingsHasBeenSet = true; m_textLogSettings.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon S3 settings for logging audio to an S3 bucket.</p>
     */
    inline const Aws::Vector<AudioLogSetting>& GetAudioLogSettings() const{ return m_audioLogSettings; }

    /**
     * <p>The Amazon S3 settings for logging audio to an S3 bucket.</p>
     */
    inline bool AudioLogSettingsHasBeenSet() const { return m_audioLogSettingsHasBeenSet; }

    /**
     * <p>The Amazon S3 settings for logging audio to an S3 bucket.</p>
     */
    inline void SetAudioLogSettings(const Aws::Vector<AudioLogSetting>& value) { m_audioLogSettingsHasBeenSet = true; m_audioLogSettings = value; }

    /**
     * <p>The Amazon S3 settings for logging audio to an S3 bucket.</p>
     */
    inline void SetAudioLogSettings(Aws::Vector<AudioLogSetting>&& value) { m_audioLogSettingsHasBeenSet = true; m_audioLogSettings = std::move(value); }

    /**
     * <p>The Amazon S3 settings for logging audio to an S3 bucket.</p>
     */
    inline ConversationLogSettings& WithAudioLogSettings(const Aws::Vector<AudioLogSetting>& value) { SetAudioLogSettings(value); return *this;}

    /**
     * <p>The Amazon S3 settings for logging audio to an S3 bucket.</p>
     */
    inline ConversationLogSettings& WithAudioLogSettings(Aws::Vector<AudioLogSetting>&& value) { SetAudioLogSettings(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 settings for logging audio to an S3 bucket.</p>
     */
    inline ConversationLogSettings& AddAudioLogSettings(const AudioLogSetting& value) { m_audioLogSettingsHasBeenSet = true; m_audioLogSettings.push_back(value); return *this; }

    /**
     * <p>The Amazon S3 settings for logging audio to an S3 bucket.</p>
     */
    inline ConversationLogSettings& AddAudioLogSettings(AudioLogSetting&& value) { m_audioLogSettingsHasBeenSet = true; m_audioLogSettings.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TextLogSetting> m_textLogSettings;
    bool m_textLogSettingsHasBeenSet = false;

    Aws::Vector<AudioLogSetting> m_audioLogSettings;
    bool m_audioLogSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
