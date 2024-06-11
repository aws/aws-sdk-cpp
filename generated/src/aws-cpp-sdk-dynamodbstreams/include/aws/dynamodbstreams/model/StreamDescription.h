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
    AWS_DYNAMODBSTREAMS_API StreamDescription();
    AWS_DYNAMODBSTREAMS_API StreamDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API StreamDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline const Aws::String& GetStreamArn() const{ return m_streamArn; }
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }
    inline void SetStreamArn(const Aws::String& value) { m_streamArnHasBeenSet = true; m_streamArn = value; }
    inline void SetStreamArn(Aws::String&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::move(value); }
    inline void SetStreamArn(const char* value) { m_streamArnHasBeenSet = true; m_streamArn.assign(value); }
    inline StreamDescription& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}
    inline StreamDescription& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}
    inline StreamDescription& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}
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
    inline const Aws::String& GetStreamLabel() const{ return m_streamLabel; }
    inline bool StreamLabelHasBeenSet() const { return m_streamLabelHasBeenSet; }
    inline void SetStreamLabel(const Aws::String& value) { m_streamLabelHasBeenSet = true; m_streamLabel = value; }
    inline void SetStreamLabel(Aws::String&& value) { m_streamLabelHasBeenSet = true; m_streamLabel = std::move(value); }
    inline void SetStreamLabel(const char* value) { m_streamLabelHasBeenSet = true; m_streamLabel.assign(value); }
    inline StreamDescription& WithStreamLabel(const Aws::String& value) { SetStreamLabel(value); return *this;}
    inline StreamDescription& WithStreamLabel(Aws::String&& value) { SetStreamLabel(std::move(value)); return *this;}
    inline StreamDescription& WithStreamLabel(const char* value) { SetStreamLabel(value); return *this;}
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
    inline const StreamStatus& GetStreamStatus() const{ return m_streamStatus; }
    inline bool StreamStatusHasBeenSet() const { return m_streamStatusHasBeenSet; }
    inline void SetStreamStatus(const StreamStatus& value) { m_streamStatusHasBeenSet = true; m_streamStatus = value; }
    inline void SetStreamStatus(StreamStatus&& value) { m_streamStatusHasBeenSet = true; m_streamStatus = std::move(value); }
    inline StreamDescription& WithStreamStatus(const StreamStatus& value) { SetStreamStatus(value); return *this;}
    inline StreamDescription& WithStreamStatus(StreamStatus&& value) { SetStreamStatus(std::move(value)); return *this;}
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
    inline const StreamViewType& GetStreamViewType() const{ return m_streamViewType; }
    inline bool StreamViewTypeHasBeenSet() const { return m_streamViewTypeHasBeenSet; }
    inline void SetStreamViewType(const StreamViewType& value) { m_streamViewTypeHasBeenSet = true; m_streamViewType = value; }
    inline void SetStreamViewType(StreamViewType&& value) { m_streamViewTypeHasBeenSet = true; m_streamViewType = std::move(value); }
    inline StreamDescription& WithStreamViewType(const StreamViewType& value) { SetStreamViewType(value); return *this;}
    inline StreamDescription& WithStreamViewType(StreamViewType&& value) { SetStreamViewType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the request to create this stream was issued.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationRequestDateTime() const{ return m_creationRequestDateTime; }
    inline bool CreationRequestDateTimeHasBeenSet() const { return m_creationRequestDateTimeHasBeenSet; }
    inline void SetCreationRequestDateTime(const Aws::Utils::DateTime& value) { m_creationRequestDateTimeHasBeenSet = true; m_creationRequestDateTime = value; }
    inline void SetCreationRequestDateTime(Aws::Utils::DateTime&& value) { m_creationRequestDateTimeHasBeenSet = true; m_creationRequestDateTime = std::move(value); }
    inline StreamDescription& WithCreationRequestDateTime(const Aws::Utils::DateTime& value) { SetCreationRequestDateTime(value); return *this;}
    inline StreamDescription& WithCreationRequestDateTime(Aws::Utils::DateTime&& value) { SetCreationRequestDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DynamoDB table with which the stream is associated.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline StreamDescription& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline StreamDescription& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline StreamDescription& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key attribute(s) of the stream's DynamoDB table.</p>
     */
    inline const Aws::Vector<KeySchemaElement>& GetKeySchema() const{ return m_keySchema; }
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }
    inline void SetKeySchema(const Aws::Vector<KeySchemaElement>& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }
    inline void SetKeySchema(Aws::Vector<KeySchemaElement>&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::move(value); }
    inline StreamDescription& WithKeySchema(const Aws::Vector<KeySchemaElement>& value) { SetKeySchema(value); return *this;}
    inline StreamDescription& WithKeySchema(Aws::Vector<KeySchemaElement>&& value) { SetKeySchema(std::move(value)); return *this;}
    inline StreamDescription& AddKeySchema(const KeySchemaElement& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }
    inline StreamDescription& AddKeySchema(KeySchemaElement&& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The shards that comprise the stream.</p>
     */
    inline const Aws::Vector<Shard>& GetShards() const{ return m_shards; }
    inline bool ShardsHasBeenSet() const { return m_shardsHasBeenSet; }
    inline void SetShards(const Aws::Vector<Shard>& value) { m_shardsHasBeenSet = true; m_shards = value; }
    inline void SetShards(Aws::Vector<Shard>&& value) { m_shardsHasBeenSet = true; m_shards = std::move(value); }
    inline StreamDescription& WithShards(const Aws::Vector<Shard>& value) { SetShards(value); return *this;}
    inline StreamDescription& WithShards(Aws::Vector<Shard>&& value) { SetShards(std::move(value)); return *this;}
    inline StreamDescription& AddShards(const Shard& value) { m_shardsHasBeenSet = true; m_shards.push_back(value); return *this; }
    inline StreamDescription& AddShards(Shard&& value) { m_shardsHasBeenSet = true; m_shards.push_back(std::move(value)); return *this; }
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
    inline const Aws::String& GetLastEvaluatedShardId() const{ return m_lastEvaluatedShardId; }
    inline bool LastEvaluatedShardIdHasBeenSet() const { return m_lastEvaluatedShardIdHasBeenSet; }
    inline void SetLastEvaluatedShardId(const Aws::String& value) { m_lastEvaluatedShardIdHasBeenSet = true; m_lastEvaluatedShardId = value; }
    inline void SetLastEvaluatedShardId(Aws::String&& value) { m_lastEvaluatedShardIdHasBeenSet = true; m_lastEvaluatedShardId = std::move(value); }
    inline void SetLastEvaluatedShardId(const char* value) { m_lastEvaluatedShardIdHasBeenSet = true; m_lastEvaluatedShardId.assign(value); }
    inline StreamDescription& WithLastEvaluatedShardId(const Aws::String& value) { SetLastEvaluatedShardId(value); return *this;}
    inline StreamDescription& WithLastEvaluatedShardId(Aws::String&& value) { SetLastEvaluatedShardId(std::move(value)); return *this;}
    inline StreamDescription& WithLastEvaluatedShardId(const char* value) { SetLastEvaluatedShardId(value); return *this;}
    ///@}
  private:

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet = false;

    Aws::String m_streamLabel;
    bool m_streamLabelHasBeenSet = false;

    StreamStatus m_streamStatus;
    bool m_streamStatusHasBeenSet = false;

    StreamViewType m_streamViewType;
    bool m_streamViewTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationRequestDateTime;
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
