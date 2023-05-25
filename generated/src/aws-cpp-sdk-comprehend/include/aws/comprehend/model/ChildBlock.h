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
    AWS_COMPREHEND_API ChildBlock();
    AWS_COMPREHEND_API ChildBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API ChildBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unique identifier for the child block.</p>
     */
    inline const Aws::String& GetChildBlockId() const{ return m_childBlockId; }

    /**
     * <p>Unique identifier for the child block.</p>
     */
    inline bool ChildBlockIdHasBeenSet() const { return m_childBlockIdHasBeenSet; }

    /**
     * <p>Unique identifier for the child block.</p>
     */
    inline void SetChildBlockId(const Aws::String& value) { m_childBlockIdHasBeenSet = true; m_childBlockId = value; }

    /**
     * <p>Unique identifier for the child block.</p>
     */
    inline void SetChildBlockId(Aws::String&& value) { m_childBlockIdHasBeenSet = true; m_childBlockId = std::move(value); }

    /**
     * <p>Unique identifier for the child block.</p>
     */
    inline void SetChildBlockId(const char* value) { m_childBlockIdHasBeenSet = true; m_childBlockId.assign(value); }

    /**
     * <p>Unique identifier for the child block.</p>
     */
    inline ChildBlock& WithChildBlockId(const Aws::String& value) { SetChildBlockId(value); return *this;}

    /**
     * <p>Unique identifier for the child block.</p>
     */
    inline ChildBlock& WithChildBlockId(Aws::String&& value) { SetChildBlockId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the child block.</p>
     */
    inline ChildBlock& WithChildBlockId(const char* value) { SetChildBlockId(value); return *this;}


    /**
     * <p>Offset of the start of the child block within its parent block.</p>
     */
    inline int GetBeginOffset() const{ return m_beginOffset; }

    /**
     * <p>Offset of the start of the child block within its parent block.</p>
     */
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }

    /**
     * <p>Offset of the start of the child block within its parent block.</p>
     */
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }

    /**
     * <p>Offset of the start of the child block within its parent block.</p>
     */
    inline ChildBlock& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}


    /**
     * <p>Offset of the end of the child block within its parent block.</p>
     */
    inline int GetEndOffset() const{ return m_endOffset; }

    /**
     * <p>Offset of the end of the child block within its parent block.</p>
     */
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }

    /**
     * <p>Offset of the end of the child block within its parent block.</p>
     */
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }

    /**
     * <p>Offset of the end of the child block within its parent block.</p>
     */
    inline ChildBlock& WithEndOffset(int value) { SetEndOffset(value); return *this;}

  private:

    Aws::String m_childBlockId;
    bool m_childBlockIdHasBeenSet = false;

    int m_beginOffset;
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset;
    bool m_endOffsetHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
