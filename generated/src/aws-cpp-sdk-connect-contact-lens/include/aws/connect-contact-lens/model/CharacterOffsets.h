﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>

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
namespace ConnectContactLens
{
namespace Model
{

  /**
   * <p>For characters that were detected as issues, where they occur in the
   * transcript.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-contact-lens-2020-08-21/CharacterOffsets">AWS
   * API Reference</a></p>
   */
  class CharacterOffsets
  {
  public:
    AWS_CONNECTCONTACTLENS_API CharacterOffsets() = default;
    AWS_CONNECTCONTACTLENS_API CharacterOffsets(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCONTACTLENS_API CharacterOffsets& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCONTACTLENS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The beginning of the issue.</p>
     */
    inline int GetBeginOffsetChar() const { return m_beginOffsetChar; }
    inline bool BeginOffsetCharHasBeenSet() const { return m_beginOffsetCharHasBeenSet; }
    inline void SetBeginOffsetChar(int value) { m_beginOffsetCharHasBeenSet = true; m_beginOffsetChar = value; }
    inline CharacterOffsets& WithBeginOffsetChar(int value) { SetBeginOffsetChar(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the issue.</p>
     */
    inline int GetEndOffsetChar() const { return m_endOffsetChar; }
    inline bool EndOffsetCharHasBeenSet() const { return m_endOffsetCharHasBeenSet; }
    inline void SetEndOffsetChar(int value) { m_endOffsetCharHasBeenSet = true; m_endOffsetChar = value; }
    inline CharacterOffsets& WithEndOffsetChar(int value) { SetEndOffsetChar(value); return *this;}
    ///@}
  private:

    int m_beginOffsetChar{0};
    bool m_beginOffsetCharHasBeenSet = false;

    int m_endOffsetChar{0};
    bool m_endOffsetCharHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectContactLens
} // namespace Aws
