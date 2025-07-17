/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
#include <aws/keyspacesstreams/KeyspacesStreamsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/keyspacesstreams/model/ShardFilter.h>
#include <utility>

namespace Aws
{
namespace KeyspacesStreams
{
namespace Model
{

  /**
   */
  class GetStreamRequest : public KeyspacesStreamsRequest
  {
  public:
    AWS_KEYSPACESSTREAMS_API GetStreamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetStream"; }

    AWS_KEYSPACESSTREAMS_API Aws::String SerializePayload() const override;

    AWS_KEYSPACESSTREAMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the stream for which detailed information
     * is requested. This uniquely identifies the specific stream you want to get
     * information about. </p>
     */
    inline const Aws::String& GetStreamArn() const { return m_streamArn; }
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }
    template<typename StreamArnT = Aws::String>
    void SetStreamArn(StreamArnT&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::forward<StreamArnT>(value); }
    template<typename StreamArnT = Aws::String>
    GetStreamRequest& WithStreamArn(StreamArnT&& value) { SetStreamArn(std::forward<StreamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of shard objects to return in a single
     * <code>GetStream</code> request. Default value is 100. The minimum value is 1 and
     * the maximum value is 100. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetStreamRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Optional filter criteria to apply when retrieving shards. You can filter
     * shards based on their state or other attributes to narrow down the results
     * returned by the <code>GetStream</code> operation. </p>
     */
    inline const ShardFilter& GetShardFilter() const { return m_shardFilter; }
    inline bool ShardFilterHasBeenSet() const { return m_shardFilterHasBeenSet; }
    template<typename ShardFilterT = ShardFilter>
    void SetShardFilter(ShardFilterT&& value) { m_shardFilterHasBeenSet = true; m_shardFilter = std::forward<ShardFilterT>(value); }
    template<typename ShardFilterT = ShardFilter>
    GetStreamRequest& WithShardFilter(ShardFilterT&& value) { SetShardFilter(std::forward<ShardFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An optional pagination token provided by a previous <code>GetStream</code>
     * operation. If this parameter is specified, the response includes only records
     * beyond the token, up to the value specified by <code>maxResults</code>. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetStreamRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    ShardFilter m_shardFilter;
    bool m_shardFilterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
