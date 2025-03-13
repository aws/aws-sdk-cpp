/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
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
namespace EBS
{
namespace Model
{

  /**
   * <p>A block of data in an Amazon Elastic Block Store snapshot that is different
   * from another snapshot of the same volume/snapshot lineage.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ebs-2019-11-02/ChangedBlock">AWS
   * API Reference</a></p>
   */
  class ChangedBlock
  {
  public:
    AWS_EBS_API ChangedBlock() = default;
    AWS_EBS_API ChangedBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_EBS_API ChangedBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EBS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The block index.</p>
     */
    inline int GetBlockIndex() const { return m_blockIndex; }
    inline bool BlockIndexHasBeenSet() const { return m_blockIndexHasBeenSet; }
    inline void SetBlockIndex(int value) { m_blockIndexHasBeenSet = true; m_blockIndex = value; }
    inline ChangedBlock& WithBlockIndex(int value) { SetBlockIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block token for the block index of the <code>FirstSnapshotId</code>
     * specified in the <code>ListChangedBlocks</code> operation. This value is absent
     * if the first snapshot does not have the changed block that is on the second
     * snapshot.</p>
     */
    inline const Aws::String& GetFirstBlockToken() const { return m_firstBlockToken; }
    inline bool FirstBlockTokenHasBeenSet() const { return m_firstBlockTokenHasBeenSet; }
    template<typename FirstBlockTokenT = Aws::String>
    void SetFirstBlockToken(FirstBlockTokenT&& value) { m_firstBlockTokenHasBeenSet = true; m_firstBlockToken = std::forward<FirstBlockTokenT>(value); }
    template<typename FirstBlockTokenT = Aws::String>
    ChangedBlock& WithFirstBlockToken(FirstBlockTokenT&& value) { SetFirstBlockToken(std::forward<FirstBlockTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block token for the block index of the <code>SecondSnapshotId</code>
     * specified in the <code>ListChangedBlocks</code> operation.</p>
     */
    inline const Aws::String& GetSecondBlockToken() const { return m_secondBlockToken; }
    inline bool SecondBlockTokenHasBeenSet() const { return m_secondBlockTokenHasBeenSet; }
    template<typename SecondBlockTokenT = Aws::String>
    void SetSecondBlockToken(SecondBlockTokenT&& value) { m_secondBlockTokenHasBeenSet = true; m_secondBlockToken = std::forward<SecondBlockTokenT>(value); }
    template<typename SecondBlockTokenT = Aws::String>
    ChangedBlock& WithSecondBlockToken(SecondBlockTokenT&& value) { SetSecondBlockToken(std::forward<SecondBlockTokenT>(value)); return *this;}
    ///@}
  private:

    int m_blockIndex{0};
    bool m_blockIndexHasBeenSet = false;

    Aws::String m_firstBlockToken;
    bool m_firstBlockTokenHasBeenSet = false;

    Aws::String m_secondBlockToken;
    bool m_secondBlockTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EBS
} // namespace Aws
