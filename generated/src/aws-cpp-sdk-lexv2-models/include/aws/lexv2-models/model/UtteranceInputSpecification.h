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
    AWS_LEXMODELSV2_API UtteranceInputSpecification();
    AWS_LEXMODELSV2_API UtteranceInputSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UtteranceInputSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A text input transcription of the utterance. It is only applicable for
     * test-sets containing text data.</p>
     */
    inline const Aws::String& GetTextInput() const{ return m_textInput; }
    inline bool TextInputHasBeenSet() const { return m_textInputHasBeenSet; }
    inline void SetTextInput(const Aws::String& value) { m_textInputHasBeenSet = true; m_textInput = value; }
    inline void SetTextInput(Aws::String&& value) { m_textInputHasBeenSet = true; m_textInput = std::move(value); }
    inline void SetTextInput(const char* value) { m_textInputHasBeenSet = true; m_textInput.assign(value); }
    inline UtteranceInputSpecification& WithTextInput(const Aws::String& value) { SetTextInput(value); return *this;}
    inline UtteranceInputSpecification& WithTextInput(Aws::String&& value) { SetTextInput(std::move(value)); return *this;}
    inline UtteranceInputSpecification& WithTextInput(const char* value) { SetTextInput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the audio input for an utterance.</p>
     */
    inline const UtteranceAudioInputSpecification& GetAudioInput() const{ return m_audioInput; }
    inline bool AudioInputHasBeenSet() const { return m_audioInputHasBeenSet; }
    inline void SetAudioInput(const UtteranceAudioInputSpecification& value) { m_audioInputHasBeenSet = true; m_audioInput = value; }
    inline void SetAudioInput(UtteranceAudioInputSpecification&& value) { m_audioInputHasBeenSet = true; m_audioInput = std::move(value); }
    inline UtteranceInputSpecification& WithAudioInput(const UtteranceAudioInputSpecification& value) { SetAudioInput(value); return *this;}
    inline UtteranceInputSpecification& WithAudioInput(UtteranceAudioInputSpecification&& value) { SetAudioInput(std::move(value)); return *this;}
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
