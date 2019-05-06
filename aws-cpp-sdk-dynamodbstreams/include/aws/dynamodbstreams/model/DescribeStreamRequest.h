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
   * <p>Represents the input of a <i>DescribeStream</i> operation.</p>
   */
  class AWS_DYNAMODBSTREAMS_API DescribeStreamRequest : public DynamoDBStreamsRequest
  {
  public:
    DescribeStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStream"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline const Aws::String& GetStreamArn() const{ return m_streamArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline void SetStreamArn(const Aws::String& value) { m_streamArnHasBeenSet = true; m_streamArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline void SetStreamArn(Aws::String&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline void SetStreamArn(const char* value) { m_streamArnHasBeenSet = true; m_streamArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline DescribeStreamRequest& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline DescribeStreamRequest& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline DescribeStreamRequest& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}


    /**
     * <p>The maximum number of shard objects to return. The upper limit is 100.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of shard objects to return. The upper limit is 100.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of shard objects to return. The upper limit is 100.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of shard objects to return. The upper limit is 100.</p>
     */
    inline DescribeStreamRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The shard ID of the first item that this operation will evaluate. Use the
     * value that was returned for <code>LastEvaluatedShardId</code> in the previous
     * operation. </p>
     */
    inline const Aws::String& GetExclusiveStartShardId() const{ return m_exclusiveStartShardId; }

    /**
     * <p>The shard ID of the first item that this operation will evaluate. Use the
     * value that was returned for <code>LastEvaluatedShardId</code> in the previous
     * operation. </p>
     */
    inline bool ExclusiveStartShardIdHasBeenSet() const { return m_exclusiveStartShardIdHasBeenSet; }

    /**
     * <p>The shard ID of the first item that this operation will evaluate. Use the
     * value that was returned for <code>LastEvaluatedShardId</code> in the previous
     * operation. </p>
     */
    inline void SetExclusiveStartShardId(const Aws::String& value) { m_exclusiveStartShardIdHasBeenSet = true; m_exclusiveStartShardId = value; }

    /**
     * <p>The shard ID of the first item that this operation will evaluate. Use the
     * value that was returned for <code>LastEvaluatedShardId</code> in the previous
     * operation. </p>
     */
    inline void SetExclusiveStartShardId(Aws::String&& value) { m_exclusiveStartShardIdHasBeenSet = true; m_exclusiveStartShardId = std::move(value); }

    /**
     * <p>The shard ID of the first item that this operation will evaluate. Use the
     * value that was returned for <code>LastEvaluatedShardId</code> in the previous
     * operation. </p>
     */
    inline void SetExclusiveStartShardId(const char* value) { m_exclusiveStartShardIdHasBeenSet = true; m_exclusiveStartShardId.assign(value); }

    /**
     * <p>The shard ID of the first item that this operation will evaluate. Use the
     * value that was returned for <code>LastEvaluatedShardId</code> in the previous
     * operation. </p>
     */
    inline DescribeStreamRequest& WithExclusiveStartShardId(const Aws::String& value) { SetExclusiveStartShardId(value); return *this;}

    /**
     * <p>The shard ID of the first item that this operation will evaluate. Use the
     * value that was returned for <code>LastEvaluatedShardId</code> in the previous
     * operation. </p>
     */
    inline DescribeStreamRequest& WithExclusiveStartShardId(Aws::String&& value) { SetExclusiveStartShardId(std::move(value)); return *this;}

    /**
     * <p>The shard ID of the first item that this operation will evaluate. Use the
     * value that was returned for <code>LastEvaluatedShardId</code> in the previous
     * operation. </p>
     */
    inline DescribeStreamRequest& WithExclusiveStartShardId(const char* value) { SetExclusiveStartShardId(value); return *this;}

  private:

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_exclusiveStartShardId;
    bool m_exclusiveStartShardIdHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
