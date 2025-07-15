/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/dynamodbstreams/DynamoDBStreamsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodbstreams/model/ShardFilter.h>
#include <utility>

namespace Aws
{
namespace DynamoDBStreams
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>DescribeStream</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/DescribeStreamInput">AWS
   * API Reference</a></p>
   */
  class DescribeStreamRequest : public DynamoDBStreamsRequest
  {
  public:
    AWS_DYNAMODBSTREAMS_API DescribeStreamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStream"; }

    AWS_DYNAMODBSTREAMS_API Aws::String SerializePayload() const override;

    AWS_DYNAMODBSTREAMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline const Aws::String& GetStreamArn() const { return m_streamArn; }
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }
    template<typename StreamArnT = Aws::String>
    void SetStreamArn(StreamArnT&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::forward<StreamArnT>(value); }
    template<typename StreamArnT = Aws::String>
    DescribeStreamRequest& WithStreamArn(StreamArnT&& value) { SetStreamArn(std::forward<StreamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of shard objects to return. The upper limit is 100.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeStreamRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shard ID of the first item that this operation will evaluate. Use the
     * value that was returned for <code>LastEvaluatedShardId</code> in the previous
     * operation. </p>
     */
    inline const Aws::String& GetExclusiveStartShardId() const { return m_exclusiveStartShardId; }
    inline bool ExclusiveStartShardIdHasBeenSet() const { return m_exclusiveStartShardIdHasBeenSet; }
    template<typename ExclusiveStartShardIdT = Aws::String>
    void SetExclusiveStartShardId(ExclusiveStartShardIdT&& value) { m_exclusiveStartShardIdHasBeenSet = true; m_exclusiveStartShardId = std::forward<ExclusiveStartShardIdT>(value); }
    template<typename ExclusiveStartShardIdT = Aws::String>
    DescribeStreamRequest& WithExclusiveStartShardId(ExclusiveStartShardIdT&& value) { SetExclusiveStartShardId(std::forward<ExclusiveStartShardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This optional field contains the filter definition for the
     * <code>DescribeStream</code> API.</p>
     */
    inline const ShardFilter& GetShardFilter() const { return m_shardFilter; }
    inline bool ShardFilterHasBeenSet() const { return m_shardFilterHasBeenSet; }
    template<typename ShardFilterT = ShardFilter>
    void SetShardFilter(ShardFilterT&& value) { m_shardFilterHasBeenSet = true; m_shardFilter = std::forward<ShardFilterT>(value); }
    template<typename ShardFilterT = ShardFilter>
    DescribeStreamRequest& WithShardFilter(ShardFilterT&& value) { SetShardFilter(std::forward<ShardFilterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_exclusiveStartShardId;
    bool m_exclusiveStartShardIdHasBeenSet = false;

    ShardFilter m_shardFilter;
    bool m_shardFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
