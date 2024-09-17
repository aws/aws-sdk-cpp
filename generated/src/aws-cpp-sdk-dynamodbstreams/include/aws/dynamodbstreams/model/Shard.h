/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodbstreams/model/SequenceNumberRange.h>
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
namespace DynamoDBStreams
{
namespace Model
{

  /**
   * <p>A uniquely identified group of stream records within a stream.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/Shard">AWS
   * API Reference</a></p>
   */
  class Shard
  {
  public:
    AWS_DYNAMODBSTREAMS_API Shard();
    AWS_DYNAMODBSTREAMS_API Shard(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Shard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated identifier for this shard.</p>
     */
    inline const Aws::String& GetShardId() const{ return m_shardId; }
    inline bool ShardIdHasBeenSet() const { return m_shardIdHasBeenSet; }
    inline void SetShardId(const Aws::String& value) { m_shardIdHasBeenSet = true; m_shardId = value; }
    inline void SetShardId(Aws::String&& value) { m_shardIdHasBeenSet = true; m_shardId = std::move(value); }
    inline void SetShardId(const char* value) { m_shardIdHasBeenSet = true; m_shardId.assign(value); }
    inline Shard& WithShardId(const Aws::String& value) { SetShardId(value); return *this;}
    inline Shard& WithShardId(Aws::String&& value) { SetShardId(std::move(value)); return *this;}
    inline Shard& WithShardId(const char* value) { SetShardId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of possible sequence numbers for the shard.</p>
     */
    inline const SequenceNumberRange& GetSequenceNumberRange() const{ return m_sequenceNumberRange; }
    inline bool SequenceNumberRangeHasBeenSet() const { return m_sequenceNumberRangeHasBeenSet; }
    inline void SetSequenceNumberRange(const SequenceNumberRange& value) { m_sequenceNumberRangeHasBeenSet = true; m_sequenceNumberRange = value; }
    inline void SetSequenceNumberRange(SequenceNumberRange&& value) { m_sequenceNumberRangeHasBeenSet = true; m_sequenceNumberRange = std::move(value); }
    inline Shard& WithSequenceNumberRange(const SequenceNumberRange& value) { SetSequenceNumberRange(value); return *this;}
    inline Shard& WithSequenceNumberRange(SequenceNumberRange&& value) { SetSequenceNumberRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shard ID of the current shard's parent.</p>
     */
    inline const Aws::String& GetParentShardId() const{ return m_parentShardId; }
    inline bool ParentShardIdHasBeenSet() const { return m_parentShardIdHasBeenSet; }
    inline void SetParentShardId(const Aws::String& value) { m_parentShardIdHasBeenSet = true; m_parentShardId = value; }
    inline void SetParentShardId(Aws::String&& value) { m_parentShardIdHasBeenSet = true; m_parentShardId = std::move(value); }
    inline void SetParentShardId(const char* value) { m_parentShardIdHasBeenSet = true; m_parentShardId.assign(value); }
    inline Shard& WithParentShardId(const Aws::String& value) { SetParentShardId(value); return *this;}
    inline Shard& WithParentShardId(Aws::String&& value) { SetParentShardId(std::move(value)); return *this;}
    inline Shard& WithParentShardId(const char* value) { SetParentShardId(value); return *this;}
    ///@}
  private:

    Aws::String m_shardId;
    bool m_shardIdHasBeenSet = false;

    SequenceNumberRange m_sequenceNumberRange;
    bool m_sequenceNumberRangeHasBeenSet = false;

    Aws::String m_parentShardId;
    bool m_parentShardIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
