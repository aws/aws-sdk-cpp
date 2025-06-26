/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/keyspacesstreams/model/StreamStatus.h>
#include <aws/keyspacesstreams/model/StreamViewType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/keyspacesstreams/model/Shard.h>
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
namespace KeyspacesStreams
{
namespace Model
{
  class GetStreamResult
  {
  public:
    AWS_KEYSPACESSTREAMS_API GetStreamResult() = default;
    AWS_KEYSPACESSTREAMS_API GetStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KEYSPACESSTREAMS_API GetStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) that uniquely identifies the stream within
     * Amazon Keyspaces. This ARN can be used in other API operations to reference this
     * specific stream. </p>
     */
    inline const Aws::String& GetStreamArn() const { return m_streamArn; }
    template<typename StreamArnT = Aws::String>
    void SetStreamArn(StreamArnT&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::forward<StreamArnT>(value); }
    template<typename StreamArnT = Aws::String>
    GetStreamResult& WithStreamArn(StreamArnT&& value) { SetStreamArn(std::forward<StreamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A timestamp that serves as a unique identifier for this stream, used for
     * debugging and monitoring purposes. The stream label represents the point in time
     * when the stream was created. </p>
     */
    inline const Aws::String& GetStreamLabel() const { return m_streamLabel; }
    template<typename StreamLabelT = Aws::String>
    void SetStreamLabel(StreamLabelT&& value) { m_streamLabelHasBeenSet = true; m_streamLabel = std::forward<StreamLabelT>(value); }
    template<typename StreamLabelT = Aws::String>
    GetStreamResult& WithStreamLabel(StreamLabelT&& value) { SetStreamLabel(std::forward<StreamLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the stream. Values can be <code>ENABLING</code>,
     * <code>ENABLED</code>, <code>DISABLING</code>, or <code>DISABLED</code>.
     * Operations on the stream depend on its current status. </p>
     */
    inline StreamStatus GetStreamStatus() const { return m_streamStatus; }
    inline void SetStreamStatus(StreamStatus value) { m_streamStatusHasBeenSet = true; m_streamStatus = value; }
    inline GetStreamResult& WithStreamStatus(StreamStatus value) { SetStreamStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The format of the data records in this stream. Currently, this can be one of
     * the following options:</p> <ul> <li> <p> <code>NEW_AND_OLD_IMAGES</code> - both
     * versions of the row, before and after the change. This is the default.</p> </li>
     * <li> <p> <code>NEW_IMAGE</code> - the version of the row after the change.</p>
     * </li> <li> <p> <code>OLD_IMAGE</code> - the version of the row before the
     * change.</p> </li> <li> <p> <code>KEYS_ONLY</code> - the partition and clustering
     * keys of the row that was changed.</p> </li> </ul>
     */
    inline StreamViewType GetStreamViewType() const { return m_streamViewType; }
    inline void SetStreamViewType(StreamViewType value) { m_streamViewTypeHasBeenSet = true; m_streamViewType = value; }
    inline GetStreamResult& WithStreamViewType(StreamViewType value) { SetStreamViewType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time when the request to create this stream was issued. The
     * value is represented in ISO 8601 format. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationRequestDateTime() const { return m_creationRequestDateTime; }
    template<typename CreationRequestDateTimeT = Aws::Utils::DateTime>
    void SetCreationRequestDateTime(CreationRequestDateTimeT&& value) { m_creationRequestDateTimeHasBeenSet = true; m_creationRequestDateTime = std::forward<CreationRequestDateTimeT>(value); }
    template<typename CreationRequestDateTimeT = Aws::Utils::DateTime>
    GetStreamResult& WithCreationRequestDateTime(CreationRequestDateTimeT&& value) { SetCreationRequestDateTime(std::forward<CreationRequestDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the keyspace containing the table associated with this stream.
     * The keyspace name is part of the table's hierarchical identifier in Amazon
     * Keyspaces. </p>
     */
    inline const Aws::String& GetKeyspaceName() const { return m_keyspaceName; }
    template<typename KeyspaceNameT = Aws::String>
    void SetKeyspaceName(KeyspaceNameT&& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = std::forward<KeyspaceNameT>(value); }
    template<typename KeyspaceNameT = Aws::String>
    GetStreamResult& WithKeyspaceName(KeyspaceNameT&& value) { SetKeyspaceName(std::forward<KeyspaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the table associated with this stream. The stream captures
     * changes to rows in this Amazon Keyspaces table. </p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    GetStreamResult& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of shard objects associated with this stream. Each shard contains a
     * subset of the stream's data records and has its own unique identifier. The
     * collection of shards represents the complete stream data. </p>
     */
    inline const Aws::Vector<Shard>& GetShards() const { return m_shards; }
    template<typename ShardsT = Aws::Vector<Shard>>
    void SetShards(ShardsT&& value) { m_shardsHasBeenSet = true; m_shards = std::forward<ShardsT>(value); }
    template<typename ShardsT = Aws::Vector<Shard>>
    GetStreamResult& WithShards(ShardsT&& value) { SetShards(std::forward<ShardsT>(value)); return *this;}
    template<typename ShardsT = Shard>
    GetStreamResult& AddShards(ShardsT&& value) { m_shardsHasBeenSet = true; m_shards.emplace_back(std::forward<ShardsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A pagination token that can be used in a subsequent <code>GetStream</code>
     * request. This token is returned if the response contains more shards than can be
     * returned in a single response. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetStreamResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetStreamResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet = false;

    Aws::String m_streamLabel;
    bool m_streamLabelHasBeenSet = false;

    StreamStatus m_streamStatus{StreamStatus::NOT_SET};
    bool m_streamStatusHasBeenSet = false;

    StreamViewType m_streamViewType{StreamViewType::NOT_SET};
    bool m_streamViewTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationRequestDateTime{};
    bool m_creationRequestDateTimeHasBeenSet = false;

    Aws::String m_keyspaceName;
    bool m_keyspaceNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<Shard> m_shards;
    bool m_shardsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
