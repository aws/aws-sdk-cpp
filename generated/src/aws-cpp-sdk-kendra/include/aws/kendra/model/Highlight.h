/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/HighlightType.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides information that you can use to highlight a search result so that
   * your users can quickly identify terms in the response.</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/Highlight">AWS
   * API Reference</a></p>
   */
  class Highlight
  {
  public:
    AWS_KENDRA_API Highlight() = default;
    AWS_KENDRA_API Highlight(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Highlight& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The zero-based location in the response string where the highlight
     * starts.</p>
     */
    inline int GetBeginOffset() const { return m_beginOffset; }
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }
    inline Highlight& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The zero-based location in the response string where the highlight ends.</p>
     */
    inline int GetEndOffset() const { return m_endOffset; }
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }
    inline Highlight& WithEndOffset(int value) { SetEndOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the response is the best response. True if this is the best
     * response; otherwise, false.</p>
     */
    inline bool GetTopAnswer() const { return m_topAnswer; }
    inline bool TopAnswerHasBeenSet() const { return m_topAnswerHasBeenSet; }
    inline void SetTopAnswer(bool value) { m_topAnswerHasBeenSet = true; m_topAnswer = value; }
    inline Highlight& WithTopAnswer(bool value) { SetTopAnswer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The highlight type. </p>
     */
    inline HighlightType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(HighlightType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Highlight& WithType(HighlightType value) { SetType(value); return *this;}
    ///@}
  private:

    int m_beginOffset{0};
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset{0};
    bool m_endOffsetHasBeenSet = false;

    bool m_topAnswer{false};
    bool m_topAnswerHasBeenSet = false;

    HighlightType m_type{HighlightType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
