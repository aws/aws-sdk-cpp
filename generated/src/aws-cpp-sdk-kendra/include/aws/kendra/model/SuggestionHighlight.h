/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>

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
   * <p>The text highlights for a single query suggestion.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SuggestionHighlight">AWS
   * API Reference</a></p>
   */
  class SuggestionHighlight
  {
  public:
    AWS_KENDRA_API SuggestionHighlight();
    AWS_KENDRA_API SuggestionHighlight(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SuggestionHighlight& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The zero-based location in the response string where the highlight
     * starts.</p>
     */
    inline int GetBeginOffset() const{ return m_beginOffset; }

    /**
     * <p>The zero-based location in the response string where the highlight
     * starts.</p>
     */
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }

    /**
     * <p>The zero-based location in the response string where the highlight
     * starts.</p>
     */
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }

    /**
     * <p>The zero-based location in the response string where the highlight
     * starts.</p>
     */
    inline SuggestionHighlight& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}


    /**
     * <p>The zero-based location in the response string where the highlight ends.</p>
     */
    inline int GetEndOffset() const{ return m_endOffset; }

    /**
     * <p>The zero-based location in the response string where the highlight ends.</p>
     */
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }

    /**
     * <p>The zero-based location in the response string where the highlight ends.</p>
     */
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }

    /**
     * <p>The zero-based location in the response string where the highlight ends.</p>
     */
    inline SuggestionHighlight& WithEndOffset(int value) { SetEndOffset(value); return *this;}

  private:

    int m_beginOffset;
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset;
    bool m_endOffsetHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
