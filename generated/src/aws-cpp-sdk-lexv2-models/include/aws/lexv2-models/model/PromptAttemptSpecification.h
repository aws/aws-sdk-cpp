﻿/**
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
    AWS_LEXMODELSV2_API PromptAttemptSpecification();
    AWS_LEXMODELSV2_API PromptAttemptSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API PromptAttemptSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the user can interrupt a speech prompt attempt from the
     * bot.</p>
     */
    inline bool GetAllowInterrupt() const{ return m_allowInterrupt; }
    inline bool AllowInterruptHasBeenSet() const { return m_allowInterruptHasBeenSet; }
    inline void SetAllowInterrupt(bool value) { m_allowInterruptHasBeenSet = true; m_allowInterrupt = value; }
    inline PromptAttemptSpecification& WithAllowInterrupt(bool value) { SetAllowInterrupt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the allowed input types of the prompt attempt.</p>
     */
    inline const AllowedInputTypes& GetAllowedInputTypes() const{ return m_allowedInputTypes; }
    inline bool AllowedInputTypesHasBeenSet() const { return m_allowedInputTypesHasBeenSet; }
    inline void SetAllowedInputTypes(const AllowedInputTypes& value) { m_allowedInputTypesHasBeenSet = true; m_allowedInputTypes = value; }
    inline void SetAllowedInputTypes(AllowedInputTypes&& value) { m_allowedInputTypesHasBeenSet = true; m_allowedInputTypes = std::move(value); }
    inline PromptAttemptSpecification& WithAllowedInputTypes(const AllowedInputTypes& value) { SetAllowedInputTypes(value); return *this;}
    inline PromptAttemptSpecification& WithAllowedInputTypes(AllowedInputTypes&& value) { SetAllowedInputTypes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the settings on audio and DTMF input.</p>
     */
    inline const AudioAndDTMFInputSpecification& GetAudioAndDTMFInputSpecification() const{ return m_audioAndDTMFInputSpecification; }
    inline bool AudioAndDTMFInputSpecificationHasBeenSet() const { return m_audioAndDTMFInputSpecificationHasBeenSet; }
    inline void SetAudioAndDTMFInputSpecification(const AudioAndDTMFInputSpecification& value) { m_audioAndDTMFInputSpecificationHasBeenSet = true; m_audioAndDTMFInputSpecification = value; }
    inline void SetAudioAndDTMFInputSpecification(AudioAndDTMFInputSpecification&& value) { m_audioAndDTMFInputSpecificationHasBeenSet = true; m_audioAndDTMFInputSpecification = std::move(value); }
    inline PromptAttemptSpecification& WithAudioAndDTMFInputSpecification(const AudioAndDTMFInputSpecification& value) { SetAudioAndDTMFInputSpecification(value); return *this;}
    inline PromptAttemptSpecification& WithAudioAndDTMFInputSpecification(AudioAndDTMFInputSpecification&& value) { SetAudioAndDTMFInputSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the settings on text input.</p>
     */
    inline const TextInputSpecification& GetTextInputSpecification() const{ return m_textInputSpecification; }
    inline bool TextInputSpecificationHasBeenSet() const { return m_textInputSpecificationHasBeenSet; }
    inline void SetTextInputSpecification(const TextInputSpecification& value) { m_textInputSpecificationHasBeenSet = true; m_textInputSpecification = value; }
    inline void SetTextInputSpecification(TextInputSpecification&& value) { m_textInputSpecificationHasBeenSet = true; m_textInputSpecification = std::move(value); }
    inline PromptAttemptSpecification& WithTextInputSpecification(const TextInputSpecification& value) { SetTextInputSpecification(value); return *this;}
    inline PromptAttemptSpecification& WithTextInputSpecification(TextInputSpecification&& value) { SetTextInputSpecification(std::move(value)); return *this;}
    ///@}
  private:

    bool m_allowInterrupt;
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
