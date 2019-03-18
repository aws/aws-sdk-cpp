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
   * <p>Represents all of the data describing a particular stream.</p>
   */
  class AWS_DYNAMODBSTREAMS_API StreamDescription
  {
  public:
    StreamDescription();
    StreamDescription(Aws::Utils::Json::JsonView jsonValue);
    StreamDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline StreamDescription& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline StreamDescription& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline StreamDescription& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}


    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <i>LatestStreamLabel</i> is not a unique identifier for the stream, because it
     * is possible that a stream from another table might have the same timestamp.
     * However, the combination of the following three elements is guaranteed to be
     * unique:</p> <ul> <li><p>the AWS customer ID.</p></li> <li><p>the table
     * name</p></li> <li><p>the <i>StreamLabel</i></p></li> </ul>
     */
    inline const Aws::String& GetStreamLabel() const{ return m_streamLabel; }

    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <i>LatestStreamLabel</i> is not a unique identifier for the stream, because it
     * is possible that a stream from another table might have the same timestamp.
     * However, the combination of the following three elements is guaranteed to be
     * unique:</p> <ul> <li><p>the AWS customer ID.</p></li> <li><p>the table
     * name</p></li> <li><p>the <i>StreamLabel</i></p></li> </ul>
     */
    inline bool StreamLabelHasBeenSet() const { return m_streamLabelHasBeenSet; }

    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <i>LatestStreamLabel</i> is not a unique identifier for the stream, because it
     * is possible that a stream from another table might have the same timestamp.
     * However, the combination of the following three elements is guaranteed to be
     * unique:</p> <ul> <li><p>the AWS customer ID.</p></li> <li><p>the table
     * name</p></li> <li><p>the <i>StreamLabel</i></p></li> </ul>
     */
    inline void SetStreamLabel(const Aws::String& value) { m_streamLabelHasBeenSet = true; m_streamLabel = value; }

    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <i>LatestStreamLabel</i> is not a unique identifier for the stream, because it
     * is possible that a stream from another table might have the same timestamp.
     * However, the combination of the following three elements is guaranteed to be
     * unique:</p> <ul> <li><p>the AWS customer ID.</p></li> <li><p>the table
     * name</p></li> <li><p>the <i>StreamLabel</i></p></li> </ul>
     */
    inline void SetStreamLabel(Aws::String&& value) { m_streamLabelHasBeenSet = true; m_streamLabel = std::move(value); }

    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <i>LatestStreamLabel</i> is not a unique identifier for the stream, because it
     * is possible that a stream from another table might have the same timestamp.
     * However, the combination of the following three elements is guaranteed to be
     * unique:</p> <ul> <li><p>the AWS customer ID.</p></li> <li><p>the table
     * name</p></li> <li><p>the <i>StreamLabel</i></p></li> </ul>
     */
    inline void SetStreamLabel(const char* value) { m_streamLabelHasBeenSet = true; m_streamLabel.assign(value); }

    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <i>LatestStreamLabel</i> is not a unique identifier for the stream, because it
     * is possible that a stream from another table might have the same timestamp.
     * However, the combination of the following three elements is guaranteed to be
     * unique:</p> <ul> <li><p>the AWS customer ID.</p></li> <li><p>the table
     * name</p></li> <li><p>the <i>StreamLabel</i></p></li> </ul>
     */
    inline StreamDescription& WithStreamLabel(const Aws::String& value) { SetStreamLabel(value); return *this;}

    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <i>LatestStreamLabel</i> is not a unique identifier for the stream, because it
     * is possible that a stream from another table might have the same timestamp.
     * However, the combination of the following three elements is guaranteed to be
     * unique:</p> <ul> <li><p>the AWS customer ID.</p></li> <li><p>the table
     * name</p></li> <li><p>the <i>StreamLabel</i></p></li> </ul>
     */
    inline StreamDescription& WithStreamLabel(Aws::String&& value) { SetStreamLabel(std::move(value)); return *this;}

    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <i>LatestStreamLabel</i> is not a unique identifier for the stream, because it
     * is possible that a stream from another table might have the same timestamp.
     * However, the combination of the following three elements is guaranteed to be
     * unique:</p> <ul> <li><p>the AWS customer ID.</p></li> <li><p>the table
     * name</p></li> <li><p>the <i>StreamLabel</i></p></li> </ul>
     */
    inline StreamDescription& WithStreamLabel(const char* value) { SetStreamLabel(value); return *this;}


    /**
     * <p>Indicates the current status of the stream:</p> <ul>
     * <li><p><code>ENABLING</code> - Streams is currently being enabled on the
     * DynamoDB table.</p></li> <li><p><code>ENABLING</code> - the stream is
     * enabled.</p></li> <li><p><code>DISABLING</code> - Streams is currently being
     * disabled on the DynamoDB table.</p></li> <li><p><code>DISABLED</code> - the
     * stream is disabled.</p></li> </ul>
     */
    inline const StreamStatus& GetStreamStatus() const{ return m_streamStatus; }

    /**
     * <p>Indicates the current status of the stream:</p> <ul>
     * <li><p><code>ENABLING</code> - Streams is currently being enabled on the
     * DynamoDB table.</p></li> <li><p><code>ENABLING</code> - the stream is
     * enabled.</p></li> <li><p><code>DISABLING</code> - Streams is currently being
     * disabled on the DynamoDB table.</p></li> <li><p><code>DISABLED</code> - the
     * stream is disabled.</p></li> </ul>
     */
    inline bool StreamStatusHasBeenSet() const { return m_streamStatusHasBeenSet; }

    /**
     * <p>Indicates the current status of the stream:</p> <ul>
     * <li><p><code>ENABLING</code> - Streams is currently being enabled on the
     * DynamoDB table.</p></li> <li><p><code>ENABLING</code> - the stream is
     * enabled.</p></li> <li><p><code>DISABLING</code> - Streams is currently being
     * disabled on the DynamoDB table.</p></li> <li><p><code>DISABLED</code> - the
     * stream is disabled.</p></li> </ul>
     */
    inline void SetStreamStatus(const StreamStatus& value) { m_streamStatusHasBeenSet = true; m_streamStatus = value; }

    /**
     * <p>Indicates the current status of the stream:</p> <ul>
     * <li><p><code>ENABLING</code> - Streams is currently being enabled on the
     * DynamoDB table.</p></li> <li><p><code>ENABLING</code> - the stream is
     * enabled.</p></li> <li><p><code>DISABLING</code> - Streams is currently being
     * disabled on the DynamoDB table.</p></li> <li><p><code>DISABLED</code> - the
     * stream is disabled.</p></li> </ul>
     */
    inline void SetStreamStatus(StreamStatus&& value) { m_streamStatusHasBeenSet = true; m_streamStatus = std::move(value); }

    /**
     * <p>Indicates the current status of the stream:</p> <ul>
     * <li><p><code>ENABLING</code> - Streams is currently being enabled on the
     * DynamoDB table.</p></li> <li><p><code>ENABLING</code> - the stream is
     * enabled.</p></li> <li><p><code>DISABLING</code> - Streams is currently being
     * disabled on the DynamoDB table.</p></li> <li><p><code>DISABLED</code> - the
     * stream is disabled.</p></li> </ul>
     */
    inline StreamDescription& WithStreamStatus(const StreamStatus& value) { SetStreamStatus(value); return *this;}

    /**
     * <p>Indicates the current status of the stream:</p> <ul>
     * <li><p><code>ENABLING</code> - Streams is currently being enabled on the
     * DynamoDB table.</p></li> <li><p><code>ENABLING</code> - the stream is
     * enabled.</p></li> <li><p><code>DISABLING</code> - Streams is currently being
     * disabled on the DynamoDB table.</p></li> <li><p><code>DISABLED</code> - the
     * stream is disabled.</p></li> </ul>
     */
    inline StreamDescription& WithStreamStatus(StreamStatus&& value) { SetStreamStatus(std::move(value)); return *this;}


    /**
     * <p>Indicates the format of the records within this stream:</p> <ul>
     * <li><p><code>KEYS_ONLY</code> - only the key attributes of items that were
     * modified in the DynamoDB table.</p></li> <li><p><code>NEW_IMAGE</code> - entire
     * item from the table, as it appeared after they were modified.</p></li>
     * <li><p><code>OLD_IMAGE</code> - entire item from the table, as it appeared
     * before they were modified.</p></li> <li><p><code>NEW_AND_OLD_IMAGES</code> -
     * both the new and the old images of the items from the table.</p></li> </ul>
     */
    inline const StreamViewType& GetStreamViewType() const{ return m_streamViewType; }

    /**
     * <p>Indicates the format of the records within this stream:</p> <ul>
     * <li><p><code>KEYS_ONLY</code> - only the key attributes of items that were
     * modified in the DynamoDB table.</p></li> <li><p><code>NEW_IMAGE</code> - entire
     * item from the table, as it appeared after they were modified.</p></li>
     * <li><p><code>OLD_IMAGE</code> - entire item from the table, as it appeared
     * before they were modified.</p></li> <li><p><code>NEW_AND_OLD_IMAGES</code> -
     * both the new and the old images of the items from the table.</p></li> </ul>
     */
    inline bool StreamViewTypeHasBeenSet() const { return m_streamViewTypeHasBeenSet; }

    /**
     * <p>Indicates the format of the records within this stream:</p> <ul>
     * <li><p><code>KEYS_ONLY</code> - only the key attributes of items that were
     * modified in the DynamoDB table.</p></li> <li><p><code>NEW_IMAGE</code> - entire
     * item from the table, as it appeared after they were modified.</p></li>
     * <li><p><code>OLD_IMAGE</code> - entire item from the table, as it appeared
     * before they were modified.</p></li> <li><p><code>NEW_AND_OLD_IMAGES</code> -
     * both the new and the old images of the items from the table.</p></li> </ul>
     */
    inline void SetStreamViewType(const StreamViewType& value) { m_streamViewTypeHasBeenSet = true; m_streamViewType = value; }

    /**
     * <p>Indicates the format of the records within this stream:</p> <ul>
     * <li><p><code>KEYS_ONLY</code> - only the key attributes of items that were
     * modified in the DynamoDB table.</p></li> <li><p><code>NEW_IMAGE</code> - entire
     * item from the table, as it appeared after they were modified.</p></li>
     * <li><p><code>OLD_IMAGE</code> - entire item from the table, as it appeared
     * before they were modified.</p></li> <li><p><code>NEW_AND_OLD_IMAGES</code> -
     * both the new and the old images of the items from the table.</p></li> </ul>
     */
    inline void SetStreamViewType(StreamViewType&& value) { m_streamViewTypeHasBeenSet = true; m_streamViewType = std::move(value); }

    /**
     * <p>Indicates the format of the records within this stream:</p> <ul>
     * <li><p><code>KEYS_ONLY</code> - only the key attributes of items that were
     * modified in the DynamoDB table.</p></li> <li><p><code>NEW_IMAGE</code> - entire
     * item from the table, as it appeared after they were modified.</p></li>
     * <li><p><code>OLD_IMAGE</code> - entire item from the table, as it appeared
     * before they were modified.</p></li> <li><p><code>NEW_AND_OLD_IMAGES</code> -
     * both the new and the old images of the items from the table.</p></li> </ul>
     */
    inline StreamDescription& WithStreamViewType(const StreamViewType& value) { SetStreamViewType(value); return *this;}

    /**
     * <p>Indicates the format of the records within this stream:</p> <ul>
     * <li><p><code>KEYS_ONLY</code> - only the key attributes of items that were
     * modified in the DynamoDB table.</p></li> <li><p><code>NEW_IMAGE</code> - entire
     * item from the table, as it appeared after they were modified.</p></li>
     * <li><p><code>OLD_IMAGE</code> - entire item from the table, as it appeared
     * before they were modified.</p></li> <li><p><code>NEW_AND_OLD_IMAGES</code> -
     * both the new and the old images of the items from the table.</p></li> </ul>
     */
    inline StreamDescription& WithStreamViewType(StreamViewType&& value) { SetStreamViewType(std::move(value)); return *this;}


    /**
     * <p>The date and time when the request to create this stream was issued.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationRequestDateTime() const{ return m_creationRequestDateTime; }

    /**
     * <p>The date and time when the request to create this stream was issued.</p>
     */
    inline bool CreationRequestDateTimeHasBeenSet() const { return m_creationRequestDateTimeHasBeenSet; }

    /**
     * <p>The date and time when the request to create this stream was issued.</p>
     */
    inline void SetCreationRequestDateTime(const Aws::Utils::DateTime& value) { m_creationRequestDateTimeHasBeenSet = true; m_creationRequestDateTime = value; }

    /**
     * <p>The date and time when the request to create this stream was issued.</p>
     */
    inline void SetCreationRequestDateTime(Aws::Utils::DateTime&& value) { m_creationRequestDateTimeHasBeenSet = true; m_creationRequestDateTime = std::move(value); }

    /**
     * <p>The date and time when the request to create this stream was issued.</p>
     */
    inline StreamDescription& WithCreationRequestDateTime(const Aws::Utils::DateTime& value) { SetCreationRequestDateTime(value); return *this;}

    /**
     * <p>The date and time when the request to create this stream was issued.</p>
     */
    inline StreamDescription& WithCreationRequestDateTime(Aws::Utils::DateTime&& value) { SetCreationRequestDateTime(std::move(value)); return *this;}


    /**
     * <p>The DynamoDB table with which the stream is associated.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The DynamoDB table with which the stream is associated.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The DynamoDB table with which the stream is associated.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The DynamoDB table with which the stream is associated.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The DynamoDB table with which the stream is associated.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The DynamoDB table with which the stream is associated.</p>
     */
    inline StreamDescription& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The DynamoDB table with which the stream is associated.</p>
     */
    inline StreamDescription& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The DynamoDB table with which the stream is associated.</p>
     */
    inline StreamDescription& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The key attribute(s) of the stream's DynamoDB table.</p>
     */
    inline const Aws::Vector<KeySchemaElement>& GetKeySchema() const{ return m_keySchema; }

    /**
     * <p>The key attribute(s) of the stream's DynamoDB table.</p>
     */
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }

    /**
     * <p>The key attribute(s) of the stream's DynamoDB table.</p>
     */
    inline void SetKeySchema(const Aws::Vector<KeySchemaElement>& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }

    /**
     * <p>The key attribute(s) of the stream's DynamoDB table.</p>
     */
    inline void SetKeySchema(Aws::Vector<KeySchemaElement>&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::move(value); }

    /**
     * <p>The key attribute(s) of the stream's DynamoDB table.</p>
     */
    inline StreamDescription& WithKeySchema(const Aws::Vector<KeySchemaElement>& value) { SetKeySchema(value); return *this;}

    /**
     * <p>The key attribute(s) of the stream's DynamoDB table.</p>
     */
    inline StreamDescription& WithKeySchema(Aws::Vector<KeySchemaElement>&& value) { SetKeySchema(std::move(value)); return *this;}

    /**
     * <p>The key attribute(s) of the stream's DynamoDB table.</p>
     */
    inline StreamDescription& AddKeySchema(const KeySchemaElement& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }

    /**
     * <p>The key attribute(s) of the stream's DynamoDB table.</p>
     */
    inline StreamDescription& AddKeySchema(KeySchemaElement&& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(std::move(value)); return *this; }


    /**
     * <p>The shards that comprise the stream.</p>
     */
    inline const Aws::Vector<Shard>& GetShards() const{ return m_shards; }

    /**
     * <p>The shards that comprise the stream.</p>
     */
    inline bool ShardsHasBeenSet() const { return m_shardsHasBeenSet; }

    /**
     * <p>The shards that comprise the stream.</p>
     */
    inline void SetShards(const Aws::Vector<Shard>& value) { m_shardsHasBeenSet = true; m_shards = value; }

    /**
     * <p>The shards that comprise the stream.</p>
     */
    inline void SetShards(Aws::Vector<Shard>&& value) { m_shardsHasBeenSet = true; m_shards = std::move(value); }

    /**
     * <p>The shards that comprise the stream.</p>
     */
    inline StreamDescription& WithShards(const Aws::Vector<Shard>& value) { SetShards(value); return *this;}

    /**
     * <p>The shards that comprise the stream.</p>
     */
    inline StreamDescription& WithShards(Aws::Vector<Shard>&& value) { SetShards(std::move(value)); return *this;}

    /**
     * <p>The shards that comprise the stream.</p>
     */
    inline StreamDescription& AddShards(const Shard& value) { m_shardsHasBeenSet = true; m_shards.push_back(value); return *this; }

    /**
     * <p>The shards that comprise the stream.</p>
     */
    inline StreamDescription& AddShards(Shard&& value) { m_shardsHasBeenSet = true; m_shards.push_back(std::move(value)); return *this; }


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
    inline bool LastEvaluatedShardIdHasBeenSet() const { return m_lastEvaluatedShardIdHasBeenSet; }

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
    inline void SetLastEvaluatedShardId(const Aws::String& value) { m_lastEvaluatedShardIdHasBeenSet = true; m_lastEvaluatedShardId = value; }

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
    inline void SetLastEvaluatedShardId(Aws::String&& value) { m_lastEvaluatedShardIdHasBeenSet = true; m_lastEvaluatedShardId = std::move(value); }

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
    inline void SetLastEvaluatedShardId(const char* value) { m_lastEvaluatedShardIdHasBeenSet = true; m_lastEvaluatedShardId.assign(value); }

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
    inline StreamDescription& WithLastEvaluatedShardId(const Aws::String& value) { SetLastEvaluatedShardId(value); return *this;}

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
    inline StreamDescription& WithLastEvaluatedShardId(Aws::String&& value) { SetLastEvaluatedShardId(std::move(value)); return *this;}

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
    inline StreamDescription& WithLastEvaluatedShardId(const char* value) { SetLastEvaluatedShardId(value); return *this;}

  private:

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet;

    Aws::String m_streamLabel;
    bool m_streamLabelHasBeenSet;

    StreamStatus m_streamStatus;
    bool m_streamStatusHasBeenSet;

    StreamViewType m_streamViewType;
    bool m_streamViewTypeHasBeenSet;

    Aws::Utils::DateTime m_creationRequestDateTime;
    bool m_creationRequestDateTimeHasBeenSet;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    Aws::Vector<KeySchemaElement> m_keySchema;
    bool m_keySchemaHasBeenSet;

    Aws::Vector<Shard> m_shards;
    bool m_shardsHasBeenSet;

    Aws::String m_lastEvaluatedShardId;
    bool m_lastEvaluatedShardIdHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
