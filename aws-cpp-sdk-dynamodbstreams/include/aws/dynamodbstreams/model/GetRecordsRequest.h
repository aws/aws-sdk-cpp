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
   * <p>Represents the input of a <i>GetRecords</i> operation.</p>
   */
  class AWS_DYNAMODBSTREAMS_API GetRecordsRequest : public DynamoDBStreamsRequest
  {
  public:
    GetRecordsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRecords"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A shard iterator that was retrieved from a previous GetShardIterator
     * operation. This iterator can be used to access the stream records in this
     * shard.</p>
     */
    inline const Aws::String& GetShardIterator() const{ return m_shardIterator; }

    /**
     * <p>A shard iterator that was retrieved from a previous GetShardIterator
     * operation. This iterator can be used to access the stream records in this
     * shard.</p>
     */
    inline bool ShardIteratorHasBeenSet() const { return m_shardIteratorHasBeenSet; }

    /**
     * <p>A shard iterator that was retrieved from a previous GetShardIterator
     * operation. This iterator can be used to access the stream records in this
     * shard.</p>
     */
    inline void SetShardIterator(const Aws::String& value) { m_shardIteratorHasBeenSet = true; m_shardIterator = value; }

    /**
     * <p>A shard iterator that was retrieved from a previous GetShardIterator
     * operation. This iterator can be used to access the stream records in this
     * shard.</p>
     */
    inline void SetShardIterator(Aws::String&& value) { m_shardIteratorHasBeenSet = true; m_shardIterator = std::move(value); }

    /**
     * <p>A shard iterator that was retrieved from a previous GetShardIterator
     * operation. This iterator can be used to access the stream records in this
     * shard.</p>
     */
    inline void SetShardIterator(const char* value) { m_shardIteratorHasBeenSet = true; m_shardIterator.assign(value); }

    /**
     * <p>A shard iterator that was retrieved from a previous GetShardIterator
     * operation. This iterator can be used to access the stream records in this
     * shard.</p>
     */
    inline GetRecordsRequest& WithShardIterator(const Aws::String& value) { SetShardIterator(value); return *this;}

    /**
     * <p>A shard iterator that was retrieved from a previous GetShardIterator
     * operation. This iterator can be used to access the stream records in this
     * shard.</p>
     */
    inline GetRecordsRequest& WithShardIterator(Aws::String&& value) { SetShardIterator(std::move(value)); return *this;}

    /**
     * <p>A shard iterator that was retrieved from a previous GetShardIterator
     * operation. This iterator can be used to access the stream records in this
     * shard.</p>
     */
    inline GetRecordsRequest& WithShardIterator(const char* value) { SetShardIterator(value); return *this;}


    /**
     * <p>The maximum number of records to return from the shard. The upper limit is
     * 1000.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of records to return from the shard. The upper limit is
     * 1000.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of records to return from the shard. The upper limit is
     * 1000.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of records to return from the shard. The upper limit is
     * 1000.</p>
     */
    inline GetRecordsRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_shardIterator;
    bool m_shardIteratorHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
