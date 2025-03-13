/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>

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
   * <p>Specifies the allowed input types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AllowedInputTypes">AWS
   * API Reference</a></p>
   */
  class AllowedInputTypes
  {
  public:
    AWS_LEXMODELSV2_API AllowedInputTypes() = default;
    AWS_LEXMODELSV2_API AllowedInputTypes(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AllowedInputTypes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether audio input is allowed.</p>
     */
    inline bool GetAllowAudioInput() const { return m_allowAudioInput; }
    inline bool AllowAudioInputHasBeenSet() const { return m_allowAudioInputHasBeenSet; }
    inline void SetAllowAudioInput(bool value) { m_allowAudioInputHasBeenSet = true; m_allowAudioInput = value; }
    inline AllowedInputTypes& WithAllowAudioInput(bool value) { SetAllowAudioInput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether DTMF input is allowed.</p>
     */
    inline bool GetAllowDTMFInput() const { return m_allowDTMFInput; }
    inline bool AllowDTMFInputHasBeenSet() const { return m_allowDTMFInputHasBeenSet; }
    inline void SetAllowDTMFInput(bool value) { m_allowDTMFInputHasBeenSet = true; m_allowDTMFInput = value; }
    inline AllowedInputTypes& WithAllowDTMFInput(bool value) { SetAllowDTMFInput(value); return *this;}
    ///@}
  private:

    bool m_allowAudioInput{false};
    bool m_allowAudioInputHasBeenSet = false;

    bool m_allowDTMFInput{false};
    bool m_allowDTMFInputHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
