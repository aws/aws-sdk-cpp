/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/keyspacesstreams/model/SequenceNumberRange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace KeyspacesStreams
{
namespace Model
{

  /**
   * <p>Represents a uniquely identified group of change records within a change data
   * capture stream for Amazon Keyspaces.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspacesstreams-2024-09-09/Shard">AWS
   * API Reference</a></p>
   */
  class Shard
  {
  public:
    AWS_KEYSPACESSTREAMS_API Shard() = default;
    AWS_KEYSPACESSTREAMS_API Shard(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACESSTREAMS_API Shard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACESSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for this shard within the stream.</p>
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
     * <p>The range of sequence numbers contained within this shard.</p>
     */
    inline const SequenceNumberRange& GetSequenceNumberRange() const { return m_sequenceNumberRange; }
    inline bool SequenceNumberRangeHasBeenSet() const { return m_sequenceNumberRangeHasBeenSet; }
    template<typename SequenceNumberRangeT = SequenceNumberRange>
    void SetSequenceNumberRange(SequenceNumberRangeT&& value) { m_sequenceNumberRangeHasBeenSet = true; m_sequenceNumberRange = std::forward<SequenceNumberRangeT>(value); }
    template<typename SequenceNumberRangeT = SequenceNumberRange>
    Shard& WithSequenceNumberRange(SequenceNumberRangeT&& value) { SetSequenceNumberRange(std::forward<SequenceNumberRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of parent shards that this shard evolved from, if this shard
     * was created through resharding.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParentShardIds() const { return m_parentShardIds; }
    inline bool ParentShardIdsHasBeenSet() const { return m_parentShardIdsHasBeenSet; }
    template<typename ParentShardIdsT = Aws::Vector<Aws::String>>
    void SetParentShardIds(ParentShardIdsT&& value) { m_parentShardIdsHasBeenSet = true; m_parentShardIds = std::forward<ParentShardIdsT>(value); }
    template<typename ParentShardIdsT = Aws::Vector<Aws::String>>
    Shard& WithParentShardIds(ParentShardIdsT&& value) { SetParentShardIds(std::forward<ParentShardIdsT>(value)); return *this;}
    template<typename ParentShardIdsT = Aws::String>
    Shard& AddParentShardIds(ParentShardIdsT&& value) { m_parentShardIdsHasBeenSet = true; m_parentShardIds.emplace_back(std::forward<ParentShardIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_shardId;
    bool m_shardIdHasBeenSet = false;

    SequenceNumberRange m_sequenceNumberRange;
    bool m_sequenceNumberRangeHasBeenSet = false;

    Aws::Vector<Aws::String> m_parentShardIds;
    bool m_parentShardIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
