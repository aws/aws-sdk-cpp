/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/model/EngineTranscribeSettings.h>
#include <aws/chime-sdk-meetings/model/EngineTranscribeMedicalSettings.h>
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
namespace ChimeSDKMeetings
{
namespace Model
{

  /**
   * <p>The configuration for the current transcription operation. Must contain
   * <code>EngineTranscribeSettings</code> or
   * <code>EngineTranscribeMedicalSettings</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/TranscriptionConfiguration">AWS
   * API Reference</a></p>
   */
  class TranscriptionConfiguration
  {
  public:
    AWS_CHIMESDKMEETINGS_API TranscriptionConfiguration() = default;
    AWS_CHIMESDKMEETINGS_API TranscriptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API TranscriptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The transcription configuration settings passed to Amazon Transcribe.</p>
     */
    inline const EngineTranscribeSettings& GetEngineTranscribeSettings() const { return m_engineTranscribeSettings; }
    inline bool EngineTranscribeSettingsHasBeenSet() const { return m_engineTranscribeSettingsHasBeenSet; }
    template<typename EngineTranscribeSettingsT = EngineTranscribeSettings>
    void SetEngineTranscribeSettings(EngineTranscribeSettingsT&& value) { m_engineTranscribeSettingsHasBeenSet = true; m_engineTranscribeSettings = std::forward<EngineTranscribeSettingsT>(value); }
    template<typename EngineTranscribeSettingsT = EngineTranscribeSettings>
    TranscriptionConfiguration& WithEngineTranscribeSettings(EngineTranscribeSettingsT&& value) { SetEngineTranscribeSettings(std::forward<EngineTranscribeSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transcription configuration settings passed to Amazon Transcribe
     * Medical.</p>
     */
    inline const EngineTranscribeMedicalSettings& GetEngineTranscribeMedicalSettings() const { return m_engineTranscribeMedicalSettings; }
    inline bool EngineTranscribeMedicalSettingsHasBeenSet() const { return m_engineTranscribeMedicalSettingsHasBeenSet; }
    template<typename EngineTranscribeMedicalSettingsT = EngineTranscribeMedicalSettings>
    void SetEngineTranscribeMedicalSettings(EngineTranscribeMedicalSettingsT&& value) { m_engineTranscribeMedicalSettingsHasBeenSet = true; m_engineTranscribeMedicalSettings = std::forward<EngineTranscribeMedicalSettingsT>(value); }
    template<typename EngineTranscribeMedicalSettingsT = EngineTranscribeMedicalSettings>
    TranscriptionConfiguration& WithEngineTranscribeMedicalSettings(EngineTranscribeMedicalSettingsT&& value) { SetEngineTranscribeMedicalSettings(std::forward<EngineTranscribeMedicalSettingsT>(value)); return *this;}
    ///@}
  private:

    EngineTranscribeSettings m_engineTranscribeSettings;
    bool m_engineTranscribeSettingsHasBeenSet = false;

    EngineTranscribeMedicalSettings m_engineTranscribeMedicalSettings;
    bool m_engineTranscribeMedicalSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
