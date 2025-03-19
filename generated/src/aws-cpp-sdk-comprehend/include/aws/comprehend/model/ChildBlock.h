/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Nested block contained within a block.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ChildBlock">AWS
   * API Reference</a></p>
   */
  class ChildBlock
  {
  public:
    AWS_COMPREHEND_API ChildBlock() = default;
    AWS_COMPREHEND_API ChildBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API ChildBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier for the child block.</p>
     */
    inline const Aws::String& GetChildBlockId() const { return m_childBlockId; }
    inline bool ChildBlockIdHasBeenSet() const { return m_childBlockIdHasBeenSet; }
    template<typename ChildBlockIdT = Aws::String>
    void SetChildBlockId(ChildBlockIdT&& value) { m_childBlockIdHasBeenSet = true; m_childBlockId = std::forward<ChildBlockIdT>(value); }
    template<typename ChildBlockIdT = Aws::String>
    ChildBlock& WithChildBlockId(ChildBlockIdT&& value) { SetChildBlockId(std::forward<ChildBlockIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Offset of the start of the child block within its parent block.</p>
     */
    inline int GetBeginOffset() const { return m_beginOffset; }
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }
    inline ChildBlock& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Offset of the end of the child block within its parent block.</p>
     */
    inline int GetEndOffset() const { return m_endOffset; }
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }
    inline ChildBlock& WithEndOffset(int value) { SetEndOffset(value); return *this;}
    ///@}
  private:

    Aws::String m_childBlockId;
    bool m_childBlockIdHasBeenSet = false;

    int m_beginOffset{0};
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset{0};
    bool m_endOffsetHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
