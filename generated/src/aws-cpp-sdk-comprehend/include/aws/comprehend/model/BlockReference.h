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
    AWS_COMPREHEND_API BlockReference() = default;
    AWS_COMPREHEND_API BlockReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API BlockReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier for the block.</p>
     */
    inline const Aws::String& GetBlockId() const { return m_blockId; }
    inline bool BlockIdHasBeenSet() const { return m_blockIdHasBeenSet; }
    template<typename BlockIdT = Aws::String>
    void SetBlockId(BlockIdT&& value) { m_blockIdHasBeenSet = true; m_blockId = std::forward<BlockIdT>(value); }
    template<typename BlockIdT = Aws::String>
    BlockReference& WithBlockId(BlockIdT&& value) { SetBlockId(std::forward<BlockIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Offset of the start of the block within its parent block.</p>
     */
    inline int GetBeginOffset() const { return m_beginOffset; }
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }
    inline BlockReference& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Offset of the end of the block within its parent block.</p>
     */
    inline int GetEndOffset() const { return m_endOffset; }
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }
    inline BlockReference& WithEndOffset(int value) { SetEndOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of child blocks within this block.</p>
     */
    inline const Aws::Vector<ChildBlock>& GetChildBlocks() const { return m_childBlocks; }
    inline bool ChildBlocksHasBeenSet() const { return m_childBlocksHasBeenSet; }
    template<typename ChildBlocksT = Aws::Vector<ChildBlock>>
    void SetChildBlocks(ChildBlocksT&& value) { m_childBlocksHasBeenSet = true; m_childBlocks = std::forward<ChildBlocksT>(value); }
    template<typename ChildBlocksT = Aws::Vector<ChildBlock>>
    BlockReference& WithChildBlocks(ChildBlocksT&& value) { SetChildBlocks(std::forward<ChildBlocksT>(value)); return *this;}
    template<typename ChildBlocksT = ChildBlock>
    BlockReference& AddChildBlocks(ChildBlocksT&& value) { m_childBlocksHasBeenSet = true; m_childBlocks.emplace_back(std::forward<ChildBlocksT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_blockId;
    bool m_blockIdHasBeenSet = false;

    int m_beginOffset{0};
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset{0};
    bool m_endOffsetHasBeenSet = false;

    Aws::Vector<ChildBlock> m_childBlocks;
    bool m_childBlocksHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
