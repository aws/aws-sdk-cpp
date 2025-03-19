/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>

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
namespace Connect
{
namespace Model
{

  /**
   * <p>Begin and end offsets for a part of text.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RealTimeContactAnalysisCharacterInterval">AWS
   * API Reference</a></p>
   */
  class RealTimeContactAnalysisCharacterInterval
  {
  public:
    AWS_CONNECT_API RealTimeContactAnalysisCharacterInterval() = default;
    AWS_CONNECT_API RealTimeContactAnalysisCharacterInterval(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RealTimeContactAnalysisCharacterInterval& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The beginning of the character interval.</p>
     */
    inline int GetBeginOffsetChar() const { return m_beginOffsetChar; }
    inline bool BeginOffsetCharHasBeenSet() const { return m_beginOffsetCharHasBeenSet; }
    inline void SetBeginOffsetChar(int value) { m_beginOffsetCharHasBeenSet = true; m_beginOffsetChar = value; }
    inline RealTimeContactAnalysisCharacterInterval& WithBeginOffsetChar(int value) { SetBeginOffsetChar(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the character interval.</p>
     */
    inline int GetEndOffsetChar() const { return m_endOffsetChar; }
    inline bool EndOffsetCharHasBeenSet() const { return m_endOffsetCharHasBeenSet; }
    inline void SetEndOffsetChar(int value) { m_endOffsetCharHasBeenSet = true; m_endOffsetChar = value; }
    inline RealTimeContactAnalysisCharacterInterval& WithEndOffsetChar(int value) { SetEndOffsetChar(value); return *this;}
    ///@}
  private:

    int m_beginOffsetChar{0};
    bool m_beginOffsetCharHasBeenSet = false;

    int m_endOffsetChar{0};
    bool m_endOffsetCharHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
