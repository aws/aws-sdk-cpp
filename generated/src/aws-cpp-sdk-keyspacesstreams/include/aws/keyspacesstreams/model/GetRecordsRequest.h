/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
#include <aws/keyspacesstreams/KeyspacesStreamsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KeyspacesStreams
{
namespace Model
{

  /**
   */
  class GetRecordsRequest : public KeyspacesStreamsRequest
  {
  public:
    AWS_KEYSPACESSTREAMS_API GetRecordsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRecords"; }

    AWS_KEYSPACESSTREAMS_API Aws::String SerializePayload() const override;

    AWS_KEYSPACESSTREAMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The unique identifier of the shard iterator. A shard iterator specifies the
     * position in the shard from which you want to start reading data records
     * sequentially. You obtain this value by calling the <code>GetShardIterator</code>
     * operation. Each shard iterator is valid for 15 minutes after creation. </p>
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
     * <p> The maximum number of records to return in a single <code>GetRecords</code>
     * request. Default value is 1000. You can specify a limit between 1 and 1000, but
     * the actual number returned might be less than the specified maximum if the size
     * of the data for the returned records exceeds the internal size limit. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetRecordsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_shardIterator;
    bool m_shardIteratorHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
