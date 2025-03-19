/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Specifies the DTMF input specifications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DTMFSpecification">AWS
   * API Reference</a></p>
   */
  class DTMFSpecification
  {
  public:
    AWS_LEXMODELSV2_API DTMFSpecification() = default;
    AWS_LEXMODELSV2_API DTMFSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API DTMFSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of DTMF digits allowed in an utterance.</p>
     */
    inline int GetMaxLength() const { return m_maxLength; }
    inline bool MaxLengthHasBeenSet() const { return m_maxLengthHasBeenSet; }
    inline void SetMaxLength(int value) { m_maxLengthHasBeenSet = true; m_maxLength = value; }
    inline DTMFSpecification& WithMaxLength(int value) { SetMaxLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long the bot should wait after the last DTMF character input before
     * assuming that the input has concluded.</p>
     */
    inline int GetEndTimeoutMs() const { return m_endTimeoutMs; }
    inline bool EndTimeoutMsHasBeenSet() const { return m_endTimeoutMsHasBeenSet; }
    inline void SetEndTimeoutMs(int value) { m_endTimeoutMsHasBeenSet = true; m_endTimeoutMs = value; }
    inline DTMFSpecification& WithEndTimeoutMs(int value) { SetEndTimeoutMs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DTMF character that clears the accumulated DTMF digits and immediately
     * ends the input.</p>
     */
    inline const Aws::String& GetDeletionCharacter() const { return m_deletionCharacter; }
    inline bool DeletionCharacterHasBeenSet() const { return m_deletionCharacterHasBeenSet; }
    template<typename DeletionCharacterT = Aws::String>
    void SetDeletionCharacter(DeletionCharacterT&& value) { m_deletionCharacterHasBeenSet = true; m_deletionCharacter = std::forward<DeletionCharacterT>(value); }
    template<typename DeletionCharacterT = Aws::String>
    DTMFSpecification& WithDeletionCharacter(DeletionCharacterT&& value) { SetDeletionCharacter(std::forward<DeletionCharacterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DTMF character that immediately ends input. If the user does not press
     * this character, the input ends after the end timeout.</p>
     */
    inline const Aws::String& GetEndCharacter() const { return m_endCharacter; }
    inline bool EndCharacterHasBeenSet() const { return m_endCharacterHasBeenSet; }
    template<typename EndCharacterT = Aws::String>
    void SetEndCharacter(EndCharacterT&& value) { m_endCharacterHasBeenSet = true; m_endCharacter = std::forward<EndCharacterT>(value); }
    template<typename EndCharacterT = Aws::String>
    DTMFSpecification& WithEndCharacter(EndCharacterT&& value) { SetEndCharacter(std::forward<EndCharacterT>(value)); return *this;}
    ///@}
  private:

    int m_maxLength{0};
    bool m_maxLengthHasBeenSet = false;

    int m_endTimeoutMs{0};
    bool m_endTimeoutMsHasBeenSet = false;

    Aws::String m_deletionCharacter;
    bool m_deletionCharacterHasBeenSet = false;

    Aws::String m_endCharacter;
    bool m_endCharacterHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
