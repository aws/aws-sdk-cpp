/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/ChildBlock.h>
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
   * <p>A reference to a block. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BlockReference">AWS
   * API Reference</a></p>
   */
  class BlockReference
  {
  public:
    AWS_COMPREHEND_API BlockReference();
    AWS_COMPREHEND_API BlockReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API BlockReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unique identifier for the block.</p>
     */
    inline const Aws::String& GetBlockId() const{ return m_blockId; }

    /**
     * <p>Unique identifier for the block.</p>
     */
    inline bool BlockIdHasBeenSet() const { return m_blockIdHasBeenSet; }

    /**
     * <p>Unique identifier for the block.</p>
     */
    inline void SetBlockId(const Aws::String& value) { m_blockIdHasBeenSet = true; m_blockId = value; }

    /**
     * <p>Unique identifier for the block.</p>
     */
    inline void SetBlockId(Aws::String&& value) { m_blockIdHasBeenSet = true; m_blockId = std::move(value); }

    /**
     * <p>Unique identifier for the block.</p>
     */
    inline void SetBlockId(const char* value) { m_blockIdHasBeenSet = true; m_blockId.assign(value); }

    /**
     * <p>Unique identifier for the block.</p>
     */
    inline BlockReference& WithBlockId(const Aws::String& value) { SetBlockId(value); return *this;}

    /**
     * <p>Unique identifier for the block.</p>
     */
    inline BlockReference& WithBlockId(Aws::String&& value) { SetBlockId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the block.</p>
     */
    inline BlockReference& WithBlockId(const char* value) { SetBlockId(value); return *this;}


    /**
     * <p>Offset of the start of the block within its parent block.</p>
     */
    inline int GetBeginOffset() const{ return m_beginOffset; }

    /**
     * <p>Offset of the start of the block within its parent block.</p>
     */
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }

    /**
     * <p>Offset of the start of the block within its parent block.</p>
     */
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }

    /**
     * <p>Offset of the start of the block within its parent block.</p>
     */
    inline BlockReference& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}


    /**
     * <p>Offset of the end of the block within its parent block.</p>
     */
    inline int GetEndOffset() const{ return m_endOffset; }

    /**
     * <p>Offset of the end of the block within its parent block.</p>
     */
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }

    /**
     * <p>Offset of the end of the block within its parent block.</p>
     */
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }

    /**
     * <p>Offset of the end of the block within its parent block.</p>
     */
    inline BlockReference& WithEndOffset(int value) { SetEndOffset(value); return *this;}


    /**
     * <p>List of child blocks within this block.</p>
     */
    inline const Aws::Vector<ChildBlock>& GetChildBlocks() const{ return m_childBlocks; }

    /**
     * <p>List of child blocks within this block.</p>
     */
    inline bool ChildBlocksHasBeenSet() const { return m_childBlocksHasBeenSet; }

    /**
     * <p>List of child blocks within this block.</p>
     */
    inline void SetChildBlocks(const Aws::Vector<ChildBlock>& value) { m_childBlocksHasBeenSet = true; m_childBlocks = value; }

    /**
     * <p>List of child blocks within this block.</p>
     */
    inline void SetChildBlocks(Aws::Vector<ChildBlock>&& value) { m_childBlocksHasBeenSet = true; m_childBlocks = std::move(value); }

    /**
     * <p>List of child blocks within this block.</p>
     */
    inline BlockReference& WithChildBlocks(const Aws::Vector<ChildBlock>& value) { SetChildBlocks(value); return *this;}

    /**
     * <p>List of child blocks within this block.</p>
     */
    inline BlockReference& WithChildBlocks(Aws::Vector<ChildBlock>&& value) { SetChildBlocks(std::move(value)); return *this;}

    /**
     * <p>List of child blocks within this block.</p>
     */
    inline BlockReference& AddChildBlocks(const ChildBlock& value) { m_childBlocksHasBeenSet = true; m_childBlocks.push_back(value); return *this; }

    /**
     * <p>List of child blocks within this block.</p>
     */
    inline BlockReference& AddChildBlocks(ChildBlock&& value) { m_childBlocksHasBeenSet = true; m_childBlocks.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_blockId;
    bool m_blockIdHasBeenSet = false;

    int m_beginOffset;
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset;
    bool m_endOffsetHasBeenSet = false;

    Aws::Vector<ChildBlock> m_childBlocks;
    bool m_childBlocksHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
