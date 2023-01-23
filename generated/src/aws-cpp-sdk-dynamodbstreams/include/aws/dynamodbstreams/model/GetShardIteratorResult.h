/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDBStreams
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>GetShardIterator</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/GetShardIteratorOutput">AWS
   * API Reference</a></p>
   */
  class GetShardIteratorResult
  {
  public:
    AWS_DYNAMODBSTREAMS_API GetShardIteratorResult();
    AWS_DYNAMODBSTREAMS_API GetShardIteratorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODBSTREAMS_API GetShardIteratorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The position in the shard from which to start reading stream records
     * sequentially. A shard iterator specifies this position using the sequence number
     * of a stream record in a shard.</p>
     */
    inline const Aws::String& GetShardIterator() const{ return m_shardIterator; }

    /**
     * <p>The position in the shard from which to start reading stream records
     * sequentially. A shard iterator specifies this position using the sequence number
     * of a stream record in a shard.</p>
     */
    inline void SetShardIterator(const Aws::String& value) { m_shardIterator = value; }

    /**
     * <p>The position in the shard from which to start reading stream records
     * sequentially. A shard iterator specifies this position using the sequence number
     * of a stream record in a shard.</p>
     */
    inline void SetShardIterator(Aws::String&& value) { m_shardIterator = std::move(value); }

    /**
     * <p>The position in the shard from which to start reading stream records
     * sequentially. A shard iterator specifies this position using the sequence number
     * of a stream record in a shard.</p>
     */
    inline void SetShardIterator(const char* value) { m_shardIterator.assign(value); }

    /**
     * <p>The position in the shard from which to start reading stream records
     * sequentially. A shard iterator specifies this position using the sequence number
     * of a stream record in a shard.</p>
     */
    inline GetShardIteratorResult& WithShardIterator(const Aws::String& value) { SetShardIterator(value); return *this;}

    /**
     * <p>The position in the shard from which to start reading stream records
     * sequentially. A shard iterator specifies this position using the sequence number
     * of a stream record in a shard.</p>
     */
    inline GetShardIteratorResult& WithShardIterator(Aws::String&& value) { SetShardIterator(std::move(value)); return *this;}

    /**
     * <p>The position in the shard from which to start reading stream records
     * sequentially. A shard iterator specifies this position using the sequence number
     * of a stream record in a shard.</p>
     */
    inline GetShardIteratorResult& WithShardIterator(const char* value) { SetShardIterator(value); return *this;}

  private:

    Aws::String m_shardIterator;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
