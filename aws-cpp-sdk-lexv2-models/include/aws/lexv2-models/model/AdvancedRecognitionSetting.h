/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AudioRecognitionStrategy.h>
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
   * <p>Provides settings that enable advanced recognition settings for slot
   * values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AdvancedRecognitionSetting">AWS
   * API Reference</a></p>
   */
  class AdvancedRecognitionSetting
  {
  public:
    AWS_LEXMODELSV2_API AdvancedRecognitionSetting();
    AWS_LEXMODELSV2_API AdvancedRecognitionSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AdvancedRecognitionSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables using the slot values as a custom vocabulary for recognizing user
     * utterances.</p>
     */
    inline const AudioRecognitionStrategy& GetAudioRecognitionStrategy() const{ return m_audioRecognitionStrategy; }

    /**
     * <p>Enables using the slot values as a custom vocabulary for recognizing user
     * utterances.</p>
     */
    inline bool AudioRecognitionStrategyHasBeenSet() const { return m_audioRecognitionStrategyHasBeenSet; }

    /**
     * <p>Enables using the slot values as a custom vocabulary for recognizing user
     * utterances.</p>
     */
    inline void SetAudioRecognitionStrategy(const AudioRecognitionStrategy& value) { m_audioRecognitionStrategyHasBeenSet = true; m_audioRecognitionStrategy = value; }

    /**
     * <p>Enables using the slot values as a custom vocabulary for recognizing user
     * utterances.</p>
     */
    inline void SetAudioRecognitionStrategy(AudioRecognitionStrategy&& value) { m_audioRecognitionStrategyHasBeenSet = true; m_audioRecognitionStrategy = std::move(value); }

    /**
     * <p>Enables using the slot values as a custom vocabulary for recognizing user
     * utterances.</p>
     */
    inline AdvancedRecognitionSetting& WithAudioRecognitionStrategy(const AudioRecognitionStrategy& value) { SetAudioRecognitionStrategy(value); return *this;}

    /**
     * <p>Enables using the slot values as a custom vocabulary for recognizing user
     * utterances.</p>
     */
    inline AdvancedRecognitionSetting& WithAudioRecognitionStrategy(AudioRecognitionStrategy&& value) { SetAudioRecognitionStrategy(std::move(value)); return *this;}

  private:

    AudioRecognitionStrategy m_audioRecognitionStrategy;
    bool m_audioRecognitionStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
