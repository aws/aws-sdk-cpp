/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/model/HashKeyRange.h>
#include <aws/kinesis/model/SequenceNumberRange.h>
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
namespace Kinesis
{
namespace Model
{

  /**
   * <p>A uniquely identified group of data records in a Kinesis data
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/Shard">AWS API
   * Reference</a></p>
   */
  class Shard
  {
  public:
    AWS_KINESIS_API Shard() = default;
    AWS_KINESIS_API Shard(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESIS_API Shard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the shard within the stream.</p>
     */
    inline const Aws::String& GetShardId() const { return m_shardId; }
    inline bool ShardIdHasBeenSet() const { return m_shardIdHasBeenSet; }
    template<typename ShardIdT = Aws::String>
    void SetShardId(ShardIdT&& value) { m_shardIdHasBeenSet = true; m_shardId = std::forward<ShardIdT>(value); }
    template<typename ShardIdT = Aws::String>
    Shard& WithShardId(ShardIdT&& value) { SetShardId(std::forward<ShardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shard ID of the shard's parent.</p>
     */
    inline const Aws::String& GetParentShardId() const { return m_parentShardId; }
    inline bool ParentShardIdHasBeenSet() const { return m_parentShardIdHasBeenSet; }
    template<typename ParentShardIdT = Aws::String>
    void SetParentShardId(ParentShardIdT&& value) { m_parentShardIdHasBeenSet = true; m_parentShardId = std::forward<ParentShardIdT>(value); }
    template<typename ParentShardIdT = Aws::String>
    Shard& WithParentShardId(ParentShardIdT&& value) { SetParentShardId(std::forward<ParentShardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shard ID of the shard adjacent to the shard's parent.</p>
     */
    inline const Aws::String& GetAdjacentParentShardId() const { return m_adjacentParentShardId; }
    inline bool AdjacentParentShardIdHasBeenSet() const { return m_adjacentParentShardIdHasBeenSet; }
    template<typename AdjacentParentShardIdT = Aws::String>
    void SetAdjacentParentShardId(AdjacentParentShardIdT&& value) { m_adjacentParentShardIdHasBeenSet = true; m_adjacentParentShardId = std::forward<AdjacentParentShardIdT>(value); }
    template<typename AdjacentParentShardIdT = Aws::String>
    Shard& WithAdjacentParentShardId(AdjacentParentShardIdT&& value) { SetAdjacentParentShardId(std::forward<AdjacentParentShardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of possible hash key values for the shard, which is a set of
     * ordered contiguous positive integers.</p>
     */
    inline const HashKeyRange& GetHashKeyRange() const { return m_hashKeyRange; }
    inline bool HashKeyRangeHasBeenSet() const { return m_hashKeyRangeHasBeenSet; }
    template<typename HashKeyRangeT = HashKeyRange>
    void SetHashKeyRange(HashKeyRangeT&& value) { m_hashKeyRangeHasBeenSet = true; m_hashKeyRange = std::forward<HashKeyRangeT>(value); }
    template<typename HashKeyRangeT = HashKeyRange>
    Shard& WithHashKeyRange(HashKeyRangeT&& value) { SetHashKeyRange(std::forward<HashKeyRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of possible sequence numbers for the shard.</p>
     */
    inline const SequenceNumberRange& GetSequenceNumberRange() const { return m_sequenceNumberRange; }
    inline bool SequenceNumberRangeHasBeenSet() const { return m_sequenceNumberRangeHasBeenSet; }
    template<typename SequenceNumberRangeT = SequenceNumberRange>
    void SetSequenceNumberRange(SequenceNumberRangeT&& value) { m_sequenceNumberRangeHasBeenSet = true; m_sequenceNumberRange = std::forward<SequenceNumberRangeT>(value); }
    template<typename SequenceNumberRangeT = SequenceNumberRange>
    Shard& WithSequenceNumberRange(SequenceNumberRangeT&& value) { SetSequenceNumberRange(std::forward<SequenceNumberRangeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_shardId;
    bool m_shardIdHasBeenSet = false;

    Aws::String m_parentShardId;
    bool m_parentShardIdHasBeenSet = false;

    Aws::String m_adjacentParentShardId;
    bool m_adjacentParentShardIdHasBeenSet = false;

    HashKeyRange m_hashKeyRange;
    bool m_hashKeyRangeHasBeenSet = false;

    SequenceNumberRange m_sequenceNumberRange;
    bool m_sequenceNumberRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
