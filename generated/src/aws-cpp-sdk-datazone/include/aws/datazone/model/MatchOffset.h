/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>

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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The offset of a matched term.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/MatchOffset">AWS
   * API Reference</a></p>
   */
  class MatchOffset
  {
  public:
    AWS_DATAZONE_API MatchOffset() = default;
    AWS_DATAZONE_API MatchOffset(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API MatchOffset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The 0-indexed number indicating the end position (exclusive) of a matched
     * term.</p>
     */
    inline int GetEndOffset() const { return m_endOffset; }
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }
    inline MatchOffset& WithEndOffset(int value) { SetEndOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 0-indexed number indicating the start position (inclusive) of a matched
     * term.</p>
     */
    inline int GetStartOffset() const { return m_startOffset; }
    inline bool StartOffsetHasBeenSet() const { return m_startOffsetHasBeenSet; }
    inline void SetStartOffset(int value) { m_startOffsetHasBeenSet = true; m_startOffset = value; }
    inline MatchOffset& WithStartOffset(int value) { SetStartOffset(value); return *this;}
    ///@}
  private:

    int m_endOffset{0};
    bool m_endOffsetHasBeenSet = false;

    int m_startOffset{0};
    bool m_startOffsetHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
