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
    AWS_DYNAMODBSTREAMS_API GetShardIteratorResult() = default;
    AWS_DYNAMODBSTREAMS_API GetShardIteratorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODBSTREAMS_API GetShardIteratorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The position in the shard from which to start reading stream records
     * sequentially. A shard iterator specifies this position using the sequence number
     * of a stream record in a shard.</p>
     */
    inline const Aws::String& GetShardIterator() const { return m_shardIterator; }
    template<typename ShardIteratorT = Aws::String>
    void SetShardIterator(ShardIteratorT&& value) { m_shardIteratorHasBeenSet = true; m_shardIterator = std::forward<ShardIteratorT>(value); }
    template<typename ShardIteratorT = Aws::String>
    GetShardIteratorResult& WithShardIterator(ShardIteratorT&& value) { SetShardIterator(std::forward<ShardIteratorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetShardIteratorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_shardIterator;
    bool m_shardIteratorHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
