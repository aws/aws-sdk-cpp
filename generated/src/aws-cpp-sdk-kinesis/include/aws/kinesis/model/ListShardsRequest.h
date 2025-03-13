/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kinesis/model/ShardFilter.h>
#include <utility>

namespace Aws
{
namespace Kinesis
{
namespace Model
{

  /**
   */
  class ListShardsRequest : public KinesisRequest
  {
  public:
    AWS_KINESIS_API ListShardsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListShards"; }

    AWS_KINESIS_API Aws::String SerializePayload() const override;

    AWS_KINESIS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_KINESIS_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The name of the data stream whose shards you want to list. </p> <p>You cannot
     * specify this parameter if you specify the <code>NextToken</code> parameter.</p>
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    ListShardsRequest& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the number of shards in the data stream is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of shards in the
     * data stream, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListShards</code> to list the next set of shards.</p>
     * <p>Don't specify <code>StreamName</code> or <code>StreamCreationTimestamp</code>
     * if you specify <code>NextToken</code> because the latter unambiguously
     * identifies the stream.</p> <p>You can optionally specify a value for the
     * <code>MaxResults</code> parameter when you specify <code>NextToken</code>. If
     * you specify a <code>MaxResults</code> value that is less than the number of
     * shards that the operation returns if you don't specify <code>MaxResults</code>,
     * the response will contain a new <code>NextToken</code> value. You can use the
     * new <code>NextToken</code> value in a subsequent call to the
     * <code>ListShards</code> operation.</p>  <p>Tokens expire after 300
     * seconds. When you obtain a value for <code>NextToken</code> in the response to a
     * call to <code>ListShards</code>, you have 300 seconds to use that value. If you
     * specify an expired token in a call to <code>ListShards</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListShardsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify this parameter to indicate that you want to list the shards starting
     * with the shard whose ID immediately follows
     * <code>ExclusiveStartShardId</code>.</p> <p>If you don't specify this parameter,
     * the default behavior is for <code>ListShards</code> to list the shards starting
     * with the first one in the stream.</p> <p>You cannot specify this parameter if
     * you specify <code>NextToken</code>.</p>
     */
    inline const Aws::String& GetExclusiveStartShardId() const { return m_exclusiveStartShardId; }
    inline bool ExclusiveStartShardIdHasBeenSet() const { return m_exclusiveStartShardIdHasBeenSet; }
    template<typename ExclusiveStartShardIdT = Aws::String>
    void SetExclusiveStartShardId(ExclusiveStartShardIdT&& value) { m_exclusiveStartShardIdHasBeenSet = true; m_exclusiveStartShardId = std::forward<ExclusiveStartShardIdT>(value); }
    template<typename ExclusiveStartShardIdT = Aws::String>
    ListShardsRequest& WithExclusiveStartShardId(ExclusiveStartShardIdT&& value) { SetExclusiveStartShardId(std::forward<ExclusiveStartShardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of shards to return in a single call to
     * <code>ListShards</code>. The maximum number of shards to return in a single
     * call. The default value is 1000. If you specify a value greater than 1000, at
     * most 1000 results are returned. </p> <p>When the number of shards to be listed
     * is greater than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListShards</code> to list the next set of shards.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListShardsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify this input parameter to distinguish data streams that have the same
     * name. For example, if you create a data stream and then delete it, and you later
     * create another data stream with the same name, you can use this input parameter
     * to specify which of the two streams you want to list the shards for.</p> <p>You
     * cannot specify this parameter if you specify the <code>NextToken</code>
     * parameter.</p>
     */
    inline const Aws::Utils::DateTime& GetStreamCreationTimestamp() const { return m_streamCreationTimestamp; }
    inline bool StreamCreationTimestampHasBeenSet() const { return m_streamCreationTimestampHasBeenSet; }
    template<typename StreamCreationTimestampT = Aws::Utils::DateTime>
    void SetStreamCreationTimestamp(StreamCreationTimestampT&& value) { m_streamCreationTimestampHasBeenSet = true; m_streamCreationTimestamp = std::forward<StreamCreationTimestampT>(value); }
    template<typename StreamCreationTimestampT = Aws::Utils::DateTime>
    ListShardsRequest& WithStreamCreationTimestamp(StreamCreationTimestampT&& value) { SetStreamCreationTimestamp(std::forward<StreamCreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables you to filter out the response of the <code>ListShards</code> API.
     * You can only specify one filter at a time. </p> <p>If you use the
     * <code>ShardFilter</code> parameter when invoking the ListShards API, the
     * <code>Type</code> is the required property and must be specified. If you specify
     * the <code>AT_TRIM_HORIZON</code>, <code>FROM_TRIM_HORIZON</code>, or
     * <code>AT_LATEST</code> types, you do not need to specify either the
     * <code>ShardId</code> or the <code>Timestamp</code> optional properties. </p>
     * <p>If you specify the <code>AFTER_SHARD_ID</code> type, you must also provide
     * the value for the optional <code>ShardId</code> property. The
     * <code>ShardId</code> property is identical in fuctionality to the
     * <code>ExclusiveStartShardId</code> parameter of the <code>ListShards</code> API.
     * When <code>ShardId</code> property is specified, the response includes the
     * shards starting with the shard whose ID immediately follows the
     * <code>ShardId</code> that you provided. </p> <p>If you specify the
     * <code>AT_TIMESTAMP</code> or <code>FROM_TIMESTAMP_ID</code> type, you must also
     * provide the value for the optional <code>Timestamp</code> property. If you
     * specify the AT_TIMESTAMP type, then all shards that were open at the provided
     * timestamp are returned. If you specify the FROM_TIMESTAMP type, then all shards
     * starting from the provided timestamp to TIP are returned. </p>
     */
    inline const ShardFilter& GetShardFilter() const { return m_shardFilter; }
    inline bool ShardFilterHasBeenSet() const { return m_shardFilterHasBeenSet; }
    template<typename ShardFilterT = ShardFilter>
    void SetShardFilter(ShardFilterT&& value) { m_shardFilterHasBeenSet = true; m_shardFilter = std::forward<ShardFilterT>(value); }
    template<typename ShardFilterT = ShardFilter>
    ListShardsRequest& WithShardFilter(ShardFilterT&& value) { SetShardFilter(std::forward<ShardFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the stream.</p>
     */
    inline const Aws::String& GetStreamARN() const { return m_streamARN; }
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
    template<typename StreamARNT = Aws::String>
    void SetStreamARN(StreamARNT&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::forward<StreamARNT>(value); }
    template<typename StreamARNT = Aws::String>
    ListShardsRequest& WithStreamARN(StreamARNT&& value) { SetStreamARN(std::forward<StreamARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_exclusiveStartShardId;
    bool m_exclusiveStartShardIdHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Utils::DateTime m_streamCreationTimestamp{};
    bool m_streamCreationTimestampHasBeenSet = false;

    ShardFilter m_shardFilter;
    bool m_shardFilterHasBeenSet = false;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
