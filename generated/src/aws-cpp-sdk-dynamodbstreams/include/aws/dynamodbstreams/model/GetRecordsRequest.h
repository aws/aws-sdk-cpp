/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/dynamodbstreams/DynamoDBStreamsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DynamoDBStreams
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>GetRecords</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/GetRecordsInput">AWS
   * API Reference</a></p>
   */
  class GetRecordsRequest : public DynamoDBStreamsRequest
  {
  public:
    AWS_DYNAMODBSTREAMS_API GetRecordsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRecords"; }

    AWS_DYNAMODBSTREAMS_API Aws::String SerializePayload() const override;

    AWS_DYNAMODBSTREAMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A shard iterator that was retrieved from a previous GetShardIterator
     * operation. This iterator can be used to access the stream records in this
     * shard.</p>
     */
    inline const Aws::String& GetShardIterator() const { return m_shardIterator; }
    inline bool ShardIteratorHasBeenSet() const { return m_shardIteratorHasBeenSet; }
    template<typename ShardIteratorT = Aws::String>
    void SetShardIterator(ShardIteratorT&& value) { m_shardIteratorHasBeenSet = true; m_shardIterator = std::forward<ShardIteratorT>(value); }
    template<typename ShardIteratorT = Aws::String>
    GetRecordsRequest& WithShardIterator(ShardIteratorT&& value) { SetShardIterator(std::forward<ShardIteratorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to return from the shard. The upper limit is
     * 1000.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline GetRecordsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_shardIterator;
    bool m_shardIteratorHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
