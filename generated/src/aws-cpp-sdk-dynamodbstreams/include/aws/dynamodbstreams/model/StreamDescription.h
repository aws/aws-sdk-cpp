/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodbstreams/model/StreamStatus.h>
#include <aws/dynamodbstreams/model/StreamViewType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodbstreams/model/KeySchemaElement.h>
#include <aws/dynamodbstreams/model/Shard.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DynamoDBStreams
{
namespace Model
{

  /**
   * <p>Represents all of the data describing a particular stream.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/StreamDescription">AWS
   * API Reference</a></p>
   */
  class StreamDescription
  {
  public:
    AWS_DYNAMODBSTREAMS_API StreamDescription() = default;
    AWS_DYNAMODBSTREAMS_API StreamDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API StreamDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline const Aws::String& GetStreamArn() const { return m_streamArn; }
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }
    template<typename StreamArnT = Aws::String>
    void SetStreamArn(StreamArnT&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::forward<StreamArnT>(value); }
    template<typename StreamArnT = Aws::String>
    StreamDescription& WithStreamArn(StreamArnT&& value) { SetStreamArn(std::forward<StreamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <code>LatestStreamLabel</code> is not a unique identifier for the stream,
     * because it is possible that a stream from another table might have the same
     * timestamp. However, the combination of the following three elements is
     * guaranteed to be unique:</p> <ul> <li> <p>the Amazon Web Services customer
     * ID.</p> </li> <li> <p>the table name</p> </li> <li> <p>the
     * <code>StreamLabel</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStreamLabel() const { return m_streamLabel; }
    inline bool StreamLabelHasBeenSet() const { return m_streamLabelHasBeenSet; }
    template<typename StreamLabelT = Aws::String>
    void SetStreamLabel(StreamLabelT&& value) { m_streamLabelHasBeenSet = true; m_streamLabel = std::forward<StreamLabelT>(value); }
    template<typename StreamLabelT = Aws::String>
    StreamDescription& WithStreamLabel(StreamLabelT&& value) { SetStreamLabel(std::forward<StreamLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the current status of the stream:</p> <ul> <li> <p>
     * <code>ENABLING</code> - Streams is currently being enabled on the DynamoDB
     * table.</p> </li> <li> <p> <code>ENABLED</code> - the stream is enabled.</p>
     * </li> <li> <p> <code>DISABLING</code> - Streams is currently being disabled on
     * the DynamoDB table.</p> </li> <li> <p> <code>DISABLED</code> - the stream is
     * disabled.</p> </li> </ul>
     */
    inline StreamStatus GetStreamStatus() const { return m_streamStatus; }
    inline bool StreamStatusHasBeenSet() const { return m_streamStatusHasBeenSet; }
    inline void SetStreamStatus(StreamStatus value) { m_streamStatusHasBeenSet = true; m_streamStatus = value; }
    inline StreamDescription& WithStreamStatus(StreamStatus value) { SetStreamStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the format of the records within this stream:</p> <ul> <li> <p>
     * <code>KEYS_ONLY</code> - only the key attributes of items that were modified in
     * the DynamoDB table.</p> </li> <li> <p> <code>NEW_IMAGE</code> - entire items
     * from the table, as they appeared after they were modified.</p> </li> <li> <p>
     * <code>OLD_IMAGE</code> - entire items from the table, as they appeared before
     * they were modified.</p> </li> <li> <p> <code>NEW_AND_OLD_IMAGES</code> - both
     * the new and the old images of the items from the table.</p> </li> </ul>
     */
    inline StreamViewType GetStreamViewType() const { return m_streamViewType; }
    inline bool StreamViewTypeHasBeenSet() const { return m_streamViewTypeHasBeenSet; }
    inline void SetStreamViewType(StreamViewType value) { m_streamViewTypeHasBeenSet = true; m_streamViewType = value; }
    inline StreamDescription& WithStreamViewType(StreamViewType value) { SetStreamViewType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the request to create this stream was issued.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationRequestDateTime() const { return m_creationRequestDateTime; }
    inline bool CreationRequestDateTimeHasBeenSet() const { return m_creationRequestDateTimeHasBeenSet; }
    template<typename CreationRequestDateTimeT = Aws::Utils::DateTime>
    void SetCreationRequestDateTime(CreationRequestDateTimeT&& value) { m_creationRequestDateTimeHasBeenSet = true; m_creationRequestDateTime = std::forward<CreationRequestDateTimeT>(value); }
    template<typename CreationRequestDateTimeT = Aws::Utils::DateTime>
    StreamDescription& WithCreationRequestDateTime(CreationRequestDateTimeT&& value) { SetCreationRequestDateTime(std::forward<CreationRequestDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DynamoDB table with which the stream is associated.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    StreamDescription& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key attribute(s) of the stream's DynamoDB table.</p>
     */
    inline const Aws::Vector<KeySchemaElement>& GetKeySchema() const { return m_keySchema; }
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }
    template<typename KeySchemaT = Aws::Vector<KeySchemaElement>>
    void SetKeySchema(KeySchemaT&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::forward<KeySchemaT>(value); }
    template<typename KeySchemaT = Aws::Vector<KeySchemaElement>>
    StreamDescription& WithKeySchema(KeySchemaT&& value) { SetKeySchema(std::forward<KeySchemaT>(value)); return *this;}
    template<typename KeySchemaT = KeySchemaElement>
    StreamDescription& AddKeySchema(KeySchemaT&& value) { m_keySchemaHasBeenSet = true; m_keySchema.emplace_back(std::forward<KeySchemaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The shards that comprise the stream.</p>
     */
    inline const Aws::Vector<Shard>& GetShards() const { return m_shards; }
    inline bool ShardsHasBeenSet() const { return m_shardsHasBeenSet; }
    template<typename ShardsT = Aws::Vector<Shard>>
    void SetShards(ShardsT&& value) { m_shardsHasBeenSet = true; m_shards = std::forward<ShardsT>(value); }
    template<typename ShardsT = Aws::Vector<Shard>>
    StreamDescription& WithShards(ShardsT&& value) { SetShards(std::forward<ShardsT>(value)); return *this;}
    template<typename ShardsT = Shard>
    StreamDescription& AddShards(ShardsT&& value) { m_shardsHasBeenSet = true; m_shards.emplace_back(std::forward<ShardsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The shard ID of the item where the operation stopped, inclusive of the
     * previous result set. Use this value to start a new operation, excluding this
     * value in the new request.</p> <p>If <code>LastEvaluatedShardId</code> is empty,
     * then the "last page" of results has been processed and there is currently no
     * more data to be retrieved.</p> <p>If <code>LastEvaluatedShardId</code> is not
     * empty, it does not necessarily mean that there is more data in the result set.
     * The only way to know when you have reached the end of the result set is when
     * <code>LastEvaluatedShardId</code> is empty.</p>
     */
    inline const Aws::String& GetLastEvaluatedShardId() const { return m_lastEvaluatedShardId; }
    inline bool LastEvaluatedShardIdHasBeenSet() const { return m_lastEvaluatedShardIdHasBeenSet; }
    template<typename LastEvaluatedShardIdT = Aws::String>
    void SetLastEvaluatedShardId(LastEvaluatedShardIdT&& value) { m_lastEvaluatedShardIdHasBeenSet = true; m_lastEvaluatedShardId = std::forward<LastEvaluatedShardIdT>(value); }
    template<typename LastEvaluatedShardIdT = Aws::String>
    StreamDescription& WithLastEvaluatedShardId(LastEvaluatedShardIdT&& value) { SetLastEvaluatedShardId(std::forward<LastEvaluatedShardIdT>(value)); return *this;}
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

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<KeySchemaElement> m_keySchema;
    bool m_keySchemaHasBeenSet = false;

    Aws::Vector<Shard> m_shards;
    bool m_shardsHasBeenSet = false;

    Aws::String m_lastEvaluatedShardId;
    bool m_lastEvaluatedShardIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
