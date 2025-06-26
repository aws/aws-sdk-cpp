/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
#include <aws/keyspacesstreams/KeyspacesStreamsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/keyspacesstreams/model/ShardIteratorType.h>
#include <utility>

namespace Aws
{
namespace KeyspacesStreams
{
namespace Model
{

  /**
   */
  class GetShardIteratorRequest : public KeyspacesStreamsRequest
  {
  public:
    AWS_KEYSPACESSTREAMS_API GetShardIteratorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetShardIterator"; }

    AWS_KEYSPACESSTREAMS_API Aws::String SerializePayload() const override;

    AWS_KEYSPACESSTREAMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the stream for which to get the shard
     * iterator. The ARN uniquely identifies the stream within Amazon Keyspaces. </p>
     */
    inline const Aws::String& GetStreamArn() const { return m_streamArn; }
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }
    template<typename StreamArnT = Aws::String>
    void SetStreamArn(StreamArnT&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::forward<StreamArnT>(value); }
    template<typename StreamArnT = Aws::String>
    GetShardIteratorRequest& WithStreamArn(StreamArnT&& value) { SetStreamArn(std::forward<StreamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the shard within the stream. The shard ID uniquely
     * identifies a subset of the stream's data records that you want to access. </p>
     */
    inline const Aws::String& GetShardId() const { return m_shardId; }
    inline bool ShardIdHasBeenSet() const { return m_shardIdHasBeenSet; }
    template<typename ShardIdT = Aws::String>
    void SetShardId(ShardIdT&& value) { m_shardIdHasBeenSet = true; m_shardId = std::forward<ShardIdT>(value); }
    template<typename ShardIdT = Aws::String>
    GetShardIteratorRequest& WithShardId(ShardIdT&& value) { SetShardId(std::forward<ShardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Determines how the shard iterator is positioned. Must be one of the
     * following:</p> <ul> <li> <p> <code>TRIM_HORIZON</code> - Start reading at the
     * last untrimmed record in the shard, which is the oldest data record in the
     * shard.</p> </li> <li> <p> <code>AT_SEQUENCE_NUMBER</code> - Start reading
     * exactly from the specified sequence number.</p> </li> <li> <p>
     * <code>AFTER_SEQUENCE_NUMBER</code> - Start reading right after the specified
     * sequence number.</p> </li> <li> <p> <code>LATEST</code> - Start reading just
     * after the most recent record in the shard, so that you always read the most
     * recent data.</p> </li> </ul>
     */
    inline ShardIteratorType GetShardIteratorType() const { return m_shardIteratorType; }
    inline bool ShardIteratorTypeHasBeenSet() const { return m_shardIteratorTypeHasBeenSet; }
    inline void SetShardIteratorType(ShardIteratorType value) { m_shardIteratorTypeHasBeenSet = true; m_shardIteratorType = value; }
    inline GetShardIteratorRequest& WithShardIteratorType(ShardIteratorType value) { SetShardIteratorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The sequence number of the data record in the shard from which to start
     * reading. Required if <code>ShardIteratorType</code> is
     * <code>AT_SEQUENCE_NUMBER</code> or <code>AFTER_SEQUENCE_NUMBER</code>. This
     * parameter is ignored for other iterator types. </p>
     */
    inline const Aws::String& GetSequenceNumber() const { return m_sequenceNumber; }
    inline bool SequenceNumberHasBeenSet() const { return m_sequenceNumberHasBeenSet; }
    template<typename SequenceNumberT = Aws::String>
    void SetSequenceNumber(SequenceNumberT&& value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber = std::forward<SequenceNumberT>(value); }
    template<typename SequenceNumberT = Aws::String>
    GetShardIteratorRequest& WithSequenceNumber(SequenceNumberT&& value) { SetSequenceNumber(std::forward<SequenceNumberT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet = false;

    Aws::String m_shardId;
    bool m_shardIdHasBeenSet = false;

    ShardIteratorType m_shardIteratorType{ShardIteratorType::NOT_SET};
    bool m_shardIteratorTypeHasBeenSet = false;

    Aws::String m_sequenceNumber;
    bool m_sequenceNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
