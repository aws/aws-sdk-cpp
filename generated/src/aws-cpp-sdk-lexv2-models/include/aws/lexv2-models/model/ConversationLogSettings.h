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
    AWS_LEXMODELSV2_API ConversationLogSettings() = default;
    AWS_LEXMODELSV2_API ConversationLogSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ConversationLogSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon CloudWatch Logs settings for logging text and metadata.</p>
     */
    inline const Aws::Vector<TextLogSetting>& GetTextLogSettings() const { return m_textLogSettings; }
    inline bool TextLogSettingsHasBeenSet() const { return m_textLogSettingsHasBeenSet; }
    template<typename TextLogSettingsT = Aws::Vector<TextLogSetting>>
    void SetTextLogSettings(TextLogSettingsT&& value) { m_textLogSettingsHasBeenSet = true; m_textLogSettings = std::forward<TextLogSettingsT>(value); }
    template<typename TextLogSettingsT = Aws::Vector<TextLogSetting>>
    ConversationLogSettings& WithTextLogSettings(TextLogSettingsT&& value) { SetTextLogSettings(std::forward<TextLogSettingsT>(value)); return *this;}
    template<typename TextLogSettingsT = TextLogSetting>
    ConversationLogSettings& AddTextLogSettings(TextLogSettingsT&& value) { m_textLogSettingsHasBeenSet = true; m_textLogSettings.emplace_back(std::forward<TextLogSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 settings for logging audio to an S3 bucket.</p>
     */
    inline const Aws::Vector<AudioLogSetting>& GetAudioLogSettings() const { return m_audioLogSettings; }
    inline bool AudioLogSettingsHasBeenSet() const { return m_audioLogSettingsHasBeenSet; }
    template<typename AudioLogSettingsT = Aws::Vector<AudioLogSetting>>
    void SetAudioLogSettings(AudioLogSettingsT&& value) { m_audioLogSettingsHasBeenSet = true; m_audioLogSettings = std::forward<AudioLogSettingsT>(value); }
    template<typename AudioLogSettingsT = Aws::Vector<AudioLogSetting>>
    ConversationLogSettings& WithAudioLogSettings(AudioLogSettingsT&& value) { SetAudioLogSettings(std::forward<AudioLogSettingsT>(value)); return *this;}
    template<typename AudioLogSettingsT = AudioLogSetting>
    ConversationLogSettings& AddAudioLogSettings(AudioLogSettingsT&& value) { m_audioLogSettingsHasBeenSet = true; m_audioLogSettings.emplace_back(std::forward<AudioLogSettingsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<TextLogSetting> m_textLogSettings;
    bool m_textLogSettingsHasBeenSet = false;

    Aws::Vector<AudioLogSetting> m_audioLogSettings;
    bool m_audioLogSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
