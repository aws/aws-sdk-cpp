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
    AWS_LEXMODELSV2_API AllowedInputTypes();
    AWS_LEXMODELSV2_API AllowedInputTypes(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AllowedInputTypes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether audio input is allowed.</p>
     */
    inline bool GetAllowAudioInput() const{ return m_allowAudioInput; }

    /**
     * <p>Indicates whether audio input is allowed.</p>
     */
    inline bool AllowAudioInputHasBeenSet() const { return m_allowAudioInputHasBeenSet; }

    /**
     * <p>Indicates whether audio input is allowed.</p>
     */
    inline void SetAllowAudioInput(bool value) { m_allowAudioInputHasBeenSet = true; m_allowAudioInput = value; }

    /**
     * <p>Indicates whether audio input is allowed.</p>
     */
    inline AllowedInputTypes& WithAllowAudioInput(bool value) { SetAllowAudioInput(value); return *this;}


    /**
     * <p>Indicates whether DTMF input is allowed.</p>
     */
    inline bool GetAllowDTMFInput() const{ return m_allowDTMFInput; }

    /**
     * <p>Indicates whether DTMF input is allowed.</p>
     */
    inline bool AllowDTMFInputHasBeenSet() const { return m_allowDTMFInputHasBeenSet; }

    /**
     * <p>Indicates whether DTMF input is allowed.</p>
     */
    inline void SetAllowDTMFInput(bool value) { m_allowDTMFInputHasBeenSet = true; m_allowDTMFInput = value; }

    /**
     * <p>Indicates whether DTMF input is allowed.</p>
     */
    inline AllowedInputTypes& WithAllowDTMFInput(bool value) { SetAllowDTMFInput(value); return *this;}

  private:

    bool m_allowAudioInput;
    bool m_allowAudioInputHasBeenSet = false;

    bool m_allowDTMFInput;
    bool m_allowDTMFInputHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
