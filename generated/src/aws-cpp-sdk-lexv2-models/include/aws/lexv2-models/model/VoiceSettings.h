/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/VoiceEngine.h>
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
   * <p>Defines settings for using an Amazon Polly voice to communicate with a
   * user.</p> <p>Valid values include:</p> <ul> <li> <p> <code>standard</code> </p>
   * </li> <li> <p> <code>neural</code> </p> </li> <li> <p> <code>long-form</code>
   * </p> </li> <li> <p> <code>generative</code> </p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/VoiceSettings">AWS
   * API Reference</a></p>
   */
  class VoiceSettings
  {
  public:
    AWS_LEXMODELSV2_API VoiceSettings() = default;
    AWS_LEXMODELSV2_API VoiceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API VoiceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the Amazon Polly voice to use.</p>
     */
    inline const Aws::String& GetVoiceId() const { return m_voiceId; }
    inline bool VoiceIdHasBeenSet() const { return m_voiceIdHasBeenSet; }
    template<typename VoiceIdT = Aws::String>
    void SetVoiceId(VoiceIdT&& value) { m_voiceIdHasBeenSet = true; m_voiceId = std::forward<VoiceIdT>(value); }
    template<typename VoiceIdT = Aws::String>
    VoiceSettings& WithVoiceId(VoiceIdT&& value) { SetVoiceId(std::forward<VoiceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the type of Amazon Polly voice that Amazon Lex should use for voice
     * interaction with the user. For more information, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_SynthesizeSpeech.html#polly-SynthesizeSpeech-request-Engine">
     * <code>engine</code> parameter of the <code>SynthesizeSpeech</code> operation</a>
     * in the <i>Amazon Polly developer guide</i>.</p> <p>If you do not specify a
     * value, the default is <code>standard</code>.</p>
     */
    inline VoiceEngine GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(VoiceEngine value) { m_engineHasBeenSet = true; m_engine = value; }
    inline VoiceSettings& WithEngine(VoiceEngine value) { SetEngine(value); return *this;}
    ///@}
  private:

    Aws::String m_voiceId;
    bool m_voiceIdHasBeenSet = false;

    VoiceEngine m_engine{VoiceEngine::NOT_SET};
    bool m_engineHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
