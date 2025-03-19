/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AllowedInputTypes.h>
#include <aws/lexv2-models/model/AudioAndDTMFInputSpecification.h>
#include <aws/lexv2-models/model/TextInputSpecification.h>
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
   * <p>Specifies the settings on a prompt attempt.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/PromptAttemptSpecification">AWS
   * API Reference</a></p>
   */
  class PromptAttemptSpecification
  {
  public:
    AWS_LEXMODELSV2_API PromptAttemptSpecification() = default;
    AWS_LEXMODELSV2_API PromptAttemptSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API PromptAttemptSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the user can interrupt a speech prompt attempt from the
     * bot.</p>
     */
    inline bool GetAllowInterrupt() const { return m_allowInterrupt; }
    inline bool AllowInterruptHasBeenSet() const { return m_allowInterruptHasBeenSet; }
    inline void SetAllowInterrupt(bool value) { m_allowInterruptHasBeenSet = true; m_allowInterrupt = value; }
    inline PromptAttemptSpecification& WithAllowInterrupt(bool value) { SetAllowInterrupt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the allowed input types of the prompt attempt.</p>
     */
    inline const AllowedInputTypes& GetAllowedInputTypes() const { return m_allowedInputTypes; }
    inline bool AllowedInputTypesHasBeenSet() const { return m_allowedInputTypesHasBeenSet; }
    template<typename AllowedInputTypesT = AllowedInputTypes>
    void SetAllowedInputTypes(AllowedInputTypesT&& value) { m_allowedInputTypesHasBeenSet = true; m_allowedInputTypes = std::forward<AllowedInputTypesT>(value); }
    template<typename AllowedInputTypesT = AllowedInputTypes>
    PromptAttemptSpecification& WithAllowedInputTypes(AllowedInputTypesT&& value) { SetAllowedInputTypes(std::forward<AllowedInputTypesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the settings on audio and DTMF input.</p>
     */
    inline const AudioAndDTMFInputSpecification& GetAudioAndDTMFInputSpecification() const { return m_audioAndDTMFInputSpecification; }
    inline bool AudioAndDTMFInputSpecificationHasBeenSet() const { return m_audioAndDTMFInputSpecificationHasBeenSet; }
    template<typename AudioAndDTMFInputSpecificationT = AudioAndDTMFInputSpecification>
    void SetAudioAndDTMFInputSpecification(AudioAndDTMFInputSpecificationT&& value) { m_audioAndDTMFInputSpecificationHasBeenSet = true; m_audioAndDTMFInputSpecification = std::forward<AudioAndDTMFInputSpecificationT>(value); }
    template<typename AudioAndDTMFInputSpecificationT = AudioAndDTMFInputSpecification>
    PromptAttemptSpecification& WithAudioAndDTMFInputSpecification(AudioAndDTMFInputSpecificationT&& value) { SetAudioAndDTMFInputSpecification(std::forward<AudioAndDTMFInputSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the settings on text input.</p>
     */
    inline const TextInputSpecification& GetTextInputSpecification() const { return m_textInputSpecification; }
    inline bool TextInputSpecificationHasBeenSet() const { return m_textInputSpecificationHasBeenSet; }
    template<typename TextInputSpecificationT = TextInputSpecification>
    void SetTextInputSpecification(TextInputSpecificationT&& value) { m_textInputSpecificationHasBeenSet = true; m_textInputSpecification = std::forward<TextInputSpecificationT>(value); }
    template<typename TextInputSpecificationT = TextInputSpecification>
    PromptAttemptSpecification& WithTextInputSpecification(TextInputSpecificationT&& value) { SetTextInputSpecification(std::forward<TextInputSpecificationT>(value)); return *this;}
    ///@}
  private:

    bool m_allowInterrupt{false};
    bool m_allowInterruptHasBeenSet = false;

    AllowedInputTypes m_allowedInputTypes;
    bool m_allowedInputTypesHasBeenSet = false;

    AudioAndDTMFInputSpecification m_audioAndDTMFInputSpecification;
    bool m_audioAndDTMFInputSpecificationHasBeenSet = false;

    TextInputSpecification m_textInputSpecification;
    bool m_textInputSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
