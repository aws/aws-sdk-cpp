/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>A uniquely identified group of stream records within a stream.</p>
   */
  class AWS_DYNAMODBSTREAMS_API Shard
  {
  public:
    Shard();
    Shard(Aws::Utils::Json::JsonView jsonValue);
    Shard& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The system-generated identifier for this shard.</p>
     */
    inline const Aws::String& GetShardId() const{ return m_shardId; }

    /**
     * <p>The system-generated identifier for this shard.</p>
     */
    inline bool ShardIdHasBeenSet() const { return m_shardIdHasBeenSet; }

    /**
     * <p>The system-generated identifier for this shard.</p>
     */
    inline void SetShardId(const Aws::String& value) { m_shardIdHasBeenSet = true; m_shardId = value; }

    /**
     * <p>The system-generated identifier for this shard.</p>
     */
    inline void SetShardId(Aws::String&& value) { m_shardIdHasBeenSet = true; m_shardId = std::move(value); }

    /**
     * <p>The system-generated identifier for this shard.</p>
     */
    inline void SetShardId(const char* value) { m_shardIdHasBeenSet = true; m_shardId.assign(value); }

    /**
     * <p>The system-generated identifier for this shard.</p>
     */
    inline Shard& WithShardId(const Aws::String& value) { SetShardId(value); return *this;}

    /**
     * <p>The system-generated identifier for this shard.</p>
     */
    inline Shard& WithShardId(Aws::String&& value) { SetShardId(std::move(value)); return *this;}

    /**
     * <p>The system-generated identifier for this shard.</p>
     */
    inline Shard& WithShardId(const char* value) { SetShardId(value); return *this;}


    /**
     * <p>The range of possible sequence numbers for the shard.</p>
     */
    inline const SequenceNumberRange& GetSequenceNumberRange() const{ return m_sequenceNumberRange; }

    /**
     * <p>The range of possible sequence numbers for the shard.</p>
     */
    inline bool SequenceNumberRangeHasBeenSet() const { return m_sequenceNumberRangeHasBeenSet; }

    /**
     * <p>The range of possible sequence numbers for the shard.</p>
     */
    inline void SetSequenceNumberRange(const SequenceNumberRange& value) { m_sequenceNumberRangeHasBeenSet = true; m_sequenceNumberRange = value; }

    /**
     * <p>The range of possible sequence numbers for the shard.</p>
     */
    inline void SetSequenceNumberRange(SequenceNumberRange&& value) { m_sequenceNumberRangeHasBeenSet = true; m_sequenceNumberRange = std::move(value); }

    /**
     * <p>The range of possible sequence numbers for the shard.</p>
     */
    inline Shard& WithSequenceNumberRange(const SequenceNumberRange& value) { SetSequenceNumberRange(value); return *this;}

    /**
     * <p>The range of possible sequence numbers for the shard.</p>
     */
    inline Shard& WithSequenceNumberRange(SequenceNumberRange&& value) { SetSequenceNumberRange(std::move(value)); return *this;}


    /**
     * <p>The shard ID of the current shard's parent.</p>
     */
    inline const Aws::String& GetParentShardId() const{ return m_parentShardId; }

    /**
     * <p>The shard ID of the current shard's parent.</p>
     */
    inline bool ParentShardIdHasBeenSet() const { return m_parentShardIdHasBeenSet; }

    /**
     * <p>The shard ID of the current shard's parent.</p>
     */
    inline void SetParentShardId(const Aws::String& value) { m_parentShardIdHasBeenSet = true; m_parentShardId = value; }

    /**
     * <p>The shard ID of the current shard's parent.</p>
     */
    inline void SetParentShardId(Aws::String&& value) { m_parentShardIdHasBeenSet = true; m_parentShardId = std::move(value); }

    /**
     * <p>The shard ID of the current shard's parent.</p>
     */
    inline void SetParentShardId(const char* value) { m_parentShardIdHasBeenSet = true; m_parentShardId.assign(value); }

    /**
     * <p>The shard ID of the current shard's parent.</p>
     */
    inline Shard& WithParentShardId(const Aws::String& value) { SetParentShardId(value); return *this;}

    /**
     * <p>The shard ID of the current shard's parent.</p>
     */
    inline Shard& WithParentShardId(Aws::String&& value) { SetParentShardId(std::move(value)); return *this;}

    /**
     * <p>The shard ID of the current shard's parent.</p>
     */
    inline Shard& WithParentShardId(const char* value) { SetParentShardId(value); return *this;}

  private:

    Aws::String m_shardId;
    bool m_shardIdHasBeenSet;

    SequenceNumberRange m_sequenceNumberRange;
    bool m_sequenceNumberRangeHasBeenSet;

    Aws::String m_parentShardId;
    bool m_parentShardIdHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
