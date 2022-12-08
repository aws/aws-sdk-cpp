/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/EngineTranscribeSettings.h>
#include <aws/chime/model/EngineTranscribeMedicalSettings.h>
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
   * <p>The configuration for the current transcription operation. Must contain
   * <code>EngineTranscribeSettings</code> or
   * <code>EngineTranscribeMedicalSettings</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/TranscriptionConfiguration">AWS
   * API Reference</a></p>
   */
  class TranscriptionConfiguration
  {
  public:
    AWS_CHIME_API TranscriptionConfiguration();
    AWS_CHIME_API TranscriptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API TranscriptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The transcription configuration settings passed to Amazon Transcribe.</p>
     */
    inline const EngineTranscribeSettings& GetEngineTranscribeSettings() const{ return m_engineTranscribeSettings; }

    /**
     * <p>The transcription configuration settings passed to Amazon Transcribe.</p>
     */
    inline bool EngineTranscribeSettingsHasBeenSet() const { return m_engineTranscribeSettingsHasBeenSet; }

    /**
     * <p>The transcription configuration settings passed to Amazon Transcribe.</p>
     */
    inline void SetEngineTranscribeSettings(const EngineTranscribeSettings& value) { m_engineTranscribeSettingsHasBeenSet = true; m_engineTranscribeSettings = value; }

    /**
     * <p>The transcription configuration settings passed to Amazon Transcribe.</p>
     */
    inline void SetEngineTranscribeSettings(EngineTranscribeSettings&& value) { m_engineTranscribeSettingsHasBeenSet = true; m_engineTranscribeSettings = std::move(value); }

    /**
     * <p>The transcription configuration settings passed to Amazon Transcribe.</p>
     */
    inline TranscriptionConfiguration& WithEngineTranscribeSettings(const EngineTranscribeSettings& value) { SetEngineTranscribeSettings(value); return *this;}

    /**
     * <p>The transcription configuration settings passed to Amazon Transcribe.</p>
     */
    inline TranscriptionConfiguration& WithEngineTranscribeSettings(EngineTranscribeSettings&& value) { SetEngineTranscribeSettings(std::move(value)); return *this;}


    /**
     * <p>The transcription configuration settings passed to Amazon Transcribe
     * Medical.</p>
     */
    inline const EngineTranscribeMedicalSettings& GetEngineTranscribeMedicalSettings() const{ return m_engineTranscribeMedicalSettings; }

    /**
     * <p>The transcription configuration settings passed to Amazon Transcribe
     * Medical.</p>
     */
    inline bool EngineTranscribeMedicalSettingsHasBeenSet() const { return m_engineTranscribeMedicalSettingsHasBeenSet; }

    /**
     * <p>The transcription configuration settings passed to Amazon Transcribe
     * Medical.</p>
     */
    inline void SetEngineTranscribeMedicalSettings(const EngineTranscribeMedicalSettings& value) { m_engineTranscribeMedicalSettingsHasBeenSet = true; m_engineTranscribeMedicalSettings = value; }

    /**
     * <p>The transcription configuration settings passed to Amazon Transcribe
     * Medical.</p>
     */
    inline void SetEngineTranscribeMedicalSettings(EngineTranscribeMedicalSettings&& value) { m_engineTranscribeMedicalSettingsHasBeenSet = true; m_engineTranscribeMedicalSettings = std::move(value); }

    /**
     * <p>The transcription configuration settings passed to Amazon Transcribe
     * Medical.</p>
     */
    inline TranscriptionConfiguration& WithEngineTranscribeMedicalSettings(const EngineTranscribeMedicalSettings& value) { SetEngineTranscribeMedicalSettings(value); return *this;}

    /**
     * <p>The transcription configuration settings passed to Amazon Transcribe
     * Medical.</p>
     */
    inline TranscriptionConfiguration& WithEngineTranscribeMedicalSettings(EngineTranscribeMedicalSettings&& value) { SetEngineTranscribeMedicalSettings(std::move(value)); return *this;}

  private:

    EngineTranscribeSettings m_engineTranscribeSettings;
    bool m_engineTranscribeSettingsHasBeenSet = false;

    EngineTranscribeMedicalSettings m_engineTranscribeMedicalSettings;
    bool m_engineTranscribeMedicalSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
