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
    AWS_DYNAMODBSTREAMS_API Shard() = default;
    AWS_DYNAMODBSTREAMS_API Shard(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Shard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated identifier for this shard.</p>
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
     * <p>The range of possible sequence numbers for the shard.</p>
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
     * <p>The shard ID of the current shard's parent.</p>
     */
    inline const Aws::String& GetParentShardId() const { return m_parentShardId; }
    inline bool ParentShardIdHasBeenSet() const { return m_parentShardIdHasBeenSet; }
    template<typename ParentShardIdT = Aws::String>
    void SetParentShardId(ParentShardIdT&& value) { m_parentShardIdHasBeenSet = true; m_parentShardId = std::forward<ParentShardIdT>(value); }
    template<typename ParentShardIdT = Aws::String>
    Shard& WithParentShardId(ParentShardIdT&& value) { SetParentShardId(std::forward<ParentShardIdT>(value)); return *this;}
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
