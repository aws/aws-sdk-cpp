/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/UtteranceAudioInputSpecification.h>
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
   * <p>Contains information about input of an utterance.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UtteranceInputSpecification">AWS
   * API Reference</a></p>
   */
  class UtteranceInputSpecification
  {
  public:
    AWS_LEXMODELSV2_API UtteranceInputSpecification() = default;
    AWS_LEXMODELSV2_API UtteranceInputSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UtteranceInputSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A text input transcription of the utterance. It is only applicable for
     * test-sets containing text data.</p>
     */
    inline const Aws::String& GetTextInput() const { return m_textInput; }
    inline bool TextInputHasBeenSet() const { return m_textInputHasBeenSet; }
    template<typename TextInputT = Aws::String>
    void SetTextInput(TextInputT&& value) { m_textInputHasBeenSet = true; m_textInput = std::forward<TextInputT>(value); }
    template<typename TextInputT = Aws::String>
    UtteranceInputSpecification& WithTextInput(TextInputT&& value) { SetTextInput(std::forward<TextInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the audio input for an utterance.</p>
     */
    inline const UtteranceAudioInputSpecification& GetAudioInput() const { return m_audioInput; }
    inline bool AudioInputHasBeenSet() const { return m_audioInputHasBeenSet; }
    template<typename AudioInputT = UtteranceAudioInputSpecification>
    void SetAudioInput(AudioInputT&& value) { m_audioInputHasBeenSet = true; m_audioInput = std::forward<AudioInputT>(value); }
    template<typename AudioInputT = UtteranceAudioInputSpecification>
    UtteranceInputSpecification& WithAudioInput(AudioInputT&& value) { SetAudioInput(std::forward<AudioInputT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_textInput;
    bool m_textInputHasBeenSet = false;

    UtteranceAudioInputSpecification m_audioInput;
    bool m_audioInputHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
