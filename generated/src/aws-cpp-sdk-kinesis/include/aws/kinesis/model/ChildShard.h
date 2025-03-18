/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/model/HashKeyRange.h>
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
   * <p>Output parameter of the GetRecords API. The existing child shard of the
   * current shard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/ChildShard">AWS
   * API Reference</a></p>
   */
  class ChildShard
  {
  public:
    AWS_KINESIS_API ChildShard() = default;
    AWS_KINESIS_API ChildShard(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESIS_API ChildShard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The shard ID of the existing child shard of the current shard.</p>
     */
    inline const Aws::String& GetShardId() const { return m_shardId; }
    inline bool ShardIdHasBeenSet() const { return m_shardIdHasBeenSet; }
    template<typename ShardIdT = Aws::String>
    void SetShardId(ShardIdT&& value) { m_shardIdHasBeenSet = true; m_shardId = std::forward<ShardIdT>(value); }
    template<typename ShardIdT = Aws::String>
    ChildShard& WithShardId(ShardIdT&& value) { SetShardId(std::forward<ShardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current shard that is the parent of the existing child shard.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParentShards() const { return m_parentShards; }
    inline bool ParentShardsHasBeenSet() const { return m_parentShardsHasBeenSet; }
    template<typename ParentShardsT = Aws::Vector<Aws::String>>
    void SetParentShards(ParentShardsT&& value) { m_parentShardsHasBeenSet = true; m_parentShards = std::forward<ParentShardsT>(value); }
    template<typename ParentShardsT = Aws::Vector<Aws::String>>
    ChildShard& WithParentShards(ParentShardsT&& value) { SetParentShards(std::forward<ParentShardsT>(value)); return *this;}
    template<typename ParentShardsT = Aws::String>
    ChildShard& AddParentShards(ParentShardsT&& value) { m_parentShardsHasBeenSet = true; m_parentShards.emplace_back(std::forward<ParentShardsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const HashKeyRange& GetHashKeyRange() const { return m_hashKeyRange; }
    inline bool HashKeyRangeHasBeenSet() const { return m_hashKeyRangeHasBeenSet; }
    template<typename HashKeyRangeT = HashKeyRange>
    void SetHashKeyRange(HashKeyRangeT&& value) { m_hashKeyRangeHasBeenSet = true; m_hashKeyRange = std::forward<HashKeyRangeT>(value); }
    template<typename HashKeyRangeT = HashKeyRange>
    ChildShard& WithHashKeyRange(HashKeyRangeT&& value) { SetHashKeyRange(std::forward<HashKeyRangeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_shardId;
    bool m_shardIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_parentShards;
    bool m_parentShardsHasBeenSet = false;

    HashKeyRange m_hashKeyRange;
    bool m_hashKeyRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
