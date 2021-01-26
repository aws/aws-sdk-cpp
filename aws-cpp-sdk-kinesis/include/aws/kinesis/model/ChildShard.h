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

  class AWS_KINESIS_API ChildShard
  {
  public:
    ChildShard();
    ChildShard(Aws::Utils::Json::JsonView jsonValue);
    ChildShard& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetShardId() const{ return m_shardId; }

    
    inline bool ShardIdHasBeenSet() const { return m_shardIdHasBeenSet; }

    
    inline void SetShardId(const Aws::String& value) { m_shardIdHasBeenSet = true; m_shardId = value; }

    
    inline void SetShardId(Aws::String&& value) { m_shardIdHasBeenSet = true; m_shardId = std::move(value); }

    
    inline void SetShardId(const char* value) { m_shardIdHasBeenSet = true; m_shardId.assign(value); }

    
    inline ChildShard& WithShardId(const Aws::String& value) { SetShardId(value); return *this;}

    
    inline ChildShard& WithShardId(Aws::String&& value) { SetShardId(std::move(value)); return *this;}

    
    inline ChildShard& WithShardId(const char* value) { SetShardId(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetParentShards() const{ return m_parentShards; }

    
    inline bool ParentShardsHasBeenSet() const { return m_parentShardsHasBeenSet; }

    
    inline void SetParentShards(const Aws::Vector<Aws::String>& value) { m_parentShardsHasBeenSet = true; m_parentShards = value; }

    
    inline void SetParentShards(Aws::Vector<Aws::String>&& value) { m_parentShardsHasBeenSet = true; m_parentShards = std::move(value); }

    
    inline ChildShard& WithParentShards(const Aws::Vector<Aws::String>& value) { SetParentShards(value); return *this;}

    
    inline ChildShard& WithParentShards(Aws::Vector<Aws::String>&& value) { SetParentShards(std::move(value)); return *this;}

    
    inline ChildShard& AddParentShards(const Aws::String& value) { m_parentShardsHasBeenSet = true; m_parentShards.push_back(value); return *this; }

    
    inline ChildShard& AddParentShards(Aws::String&& value) { m_parentShardsHasBeenSet = true; m_parentShards.push_back(std::move(value)); return *this; }

    
    inline ChildShard& AddParentShards(const char* value) { m_parentShardsHasBeenSet = true; m_parentShards.push_back(value); return *this; }


    
    inline const HashKeyRange& GetHashKeyRange() const{ return m_hashKeyRange; }

    
    inline bool HashKeyRangeHasBeenSet() const { return m_hashKeyRangeHasBeenSet; }

    
    inline void SetHashKeyRange(const HashKeyRange& value) { m_hashKeyRangeHasBeenSet = true; m_hashKeyRange = value; }

    
    inline void SetHashKeyRange(HashKeyRange&& value) { m_hashKeyRangeHasBeenSet = true; m_hashKeyRange = std::move(value); }

    
    inline ChildShard& WithHashKeyRange(const HashKeyRange& value) { SetHashKeyRange(value); return *this;}

    
    inline ChildShard& WithHashKeyRange(HashKeyRange&& value) { SetHashKeyRange(std::move(value)); return *this;}

  private:

    Aws::String m_shardId;
    bool m_shardIdHasBeenSet;

    Aws::Vector<Aws::String> m_parentShards;
    bool m_parentShardsHasBeenSet;

    HashKeyRange m_hashKeyRange;
    bool m_hashKeyRangeHasBeenSet;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
