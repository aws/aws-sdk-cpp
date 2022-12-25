/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodbstreams/model/OperationType.h>
#include <aws/dynamodbstreams/model/StreamRecord.h>
#include <aws/dynamodbstreams/model/Identity.h>
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
   * <p>A description of a unique event within a stream.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/Record">AWS
   * API Reference</a></p>
   */
  class Record
  {
  public:
    AWS_DYNAMODBSTREAMS_API Record();
    AWS_DYNAMODBSTREAMS_API Record(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Record& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A globally unique identifier for the event that was recorded in this stream
     * record.</p>
     */
    inline const Aws::String& GetEventID() const{ return m_eventID; }

    /**
     * <p>A globally unique identifier for the event that was recorded in this stream
     * record.</p>
     */
    inline bool EventIDHasBeenSet() const { return m_eventIDHasBeenSet; }

    /**
     * <p>A globally unique identifier for the event that was recorded in this stream
     * record.</p>
     */
    inline void SetEventID(const Aws::String& value) { m_eventIDHasBeenSet = true; m_eventID = value; }

    /**
     * <p>A globally unique identifier for the event that was recorded in this stream
     * record.</p>
     */
    inline void SetEventID(Aws::String&& value) { m_eventIDHasBeenSet = true; m_eventID = std::move(value); }

    /**
     * <p>A globally unique identifier for the event that was recorded in this stream
     * record.</p>
     */
    inline void SetEventID(const char* value) { m_eventIDHasBeenSet = true; m_eventID.assign(value); }

    /**
     * <p>A globally unique identifier for the event that was recorded in this stream
     * record.</p>
     */
    inline Record& WithEventID(const Aws::String& value) { SetEventID(value); return *this;}

    /**
     * <p>A globally unique identifier for the event that was recorded in this stream
     * record.</p>
     */
    inline Record& WithEventID(Aws::String&& value) { SetEventID(std::move(value)); return *this;}

    /**
     * <p>A globally unique identifier for the event that was recorded in this stream
     * record.</p>
     */
    inline Record& WithEventID(const char* value) { SetEventID(value); return *this;}


    /**
     * <p>The type of data modification that was performed on the DynamoDB table:</p>
     * <ul> <li> <p> <code>INSERT</code> - a new item was added to the table.</p> </li>
     * <li> <p> <code>MODIFY</code> - one or more of an existing item's attributes were
     * modified.</p> </li> <li> <p> <code>REMOVE</code> - the item was deleted from the
     * table</p> </li> </ul>
     */
    inline const OperationType& GetEventName() const{ return m_eventName; }

    /**
     * <p>The type of data modification that was performed on the DynamoDB table:</p>
     * <ul> <li> <p> <code>INSERT</code> - a new item was added to the table.</p> </li>
     * <li> <p> <code>MODIFY</code> - one or more of an existing item's attributes were
     * modified.</p> </li> <li> <p> <code>REMOVE</code> - the item was deleted from the
     * table</p> </li> </ul>
     */
    inline bool EventNameHasBeenSet() const { return m_eventNameHasBeenSet; }

    /**
     * <p>The type of data modification that was performed on the DynamoDB table:</p>
     * <ul> <li> <p> <code>INSERT</code> - a new item was added to the table.</p> </li>
     * <li> <p> <code>MODIFY</code> - one or more of an existing item's attributes were
     * modified.</p> </li> <li> <p> <code>REMOVE</code> - the item was deleted from the
     * table</p> </li> </ul>
     */
    inline void SetEventName(const OperationType& value) { m_eventNameHasBeenSet = true; m_eventName = value; }

    /**
     * <p>The type of data modification that was performed on the DynamoDB table:</p>
     * <ul> <li> <p> <code>INSERT</code> - a new item was added to the table.</p> </li>
     * <li> <p> <code>MODIFY</code> - one or more of an existing item's attributes were
     * modified.</p> </li> <li> <p> <code>REMOVE</code> - the item was deleted from the
     * table</p> </li> </ul>
     */
    inline void SetEventName(OperationType&& value) { m_eventNameHasBeenSet = true; m_eventName = std::move(value); }

    /**
     * <p>The type of data modification that was performed on the DynamoDB table:</p>
     * <ul> <li> <p> <code>INSERT</code> - a new item was added to the table.</p> </li>
     * <li> <p> <code>MODIFY</code> - one or more of an existing item's attributes were
     * modified.</p> </li> <li> <p> <code>REMOVE</code> - the item was deleted from the
     * table</p> </li> </ul>
     */
    inline Record& WithEventName(const OperationType& value) { SetEventName(value); return *this;}

    /**
     * <p>The type of data modification that was performed on the DynamoDB table:</p>
     * <ul> <li> <p> <code>INSERT</code> - a new item was added to the table.</p> </li>
     * <li> <p> <code>MODIFY</code> - one or more of an existing item's attributes were
     * modified.</p> </li> <li> <p> <code>REMOVE</code> - the item was deleted from the
     * table</p> </li> </ul>
     */
    inline Record& WithEventName(OperationType&& value) { SetEventName(std::move(value)); return *this;}


    /**
     * <p>The version number of the stream record format. This number is updated
     * whenever the structure of <code>Record</code> is modified.</p> <p>Client
     * applications must not assume that <code>eventVersion</code> will remain at a
     * particular value, as this number is subject to change at any time. In general,
     * <code>eventVersion</code> will only increase as the low-level DynamoDB Streams
     * API evolves.</p>
     */
    inline const Aws::String& GetEventVersion() const{ return m_eventVersion; }

    /**
     * <p>The version number of the stream record format. This number is updated
     * whenever the structure of <code>Record</code> is modified.</p> <p>Client
     * applications must not assume that <code>eventVersion</code> will remain at a
     * particular value, as this number is subject to change at any time. In general,
     * <code>eventVersion</code> will only increase as the low-level DynamoDB Streams
     * API evolves.</p>
     */
    inline bool EventVersionHasBeenSet() const { return m_eventVersionHasBeenSet; }

    /**
     * <p>The version number of the stream record format. This number is updated
     * whenever the structure of <code>Record</code> is modified.</p> <p>Client
     * applications must not assume that <code>eventVersion</code> will remain at a
     * particular value, as this number is subject to change at any time. In general,
     * <code>eventVersion</code> will only increase as the low-level DynamoDB Streams
     * API evolves.</p>
     */
    inline void SetEventVersion(const Aws::String& value) { m_eventVersionHasBeenSet = true; m_eventVersion = value; }

    /**
     * <p>The version number of the stream record format. This number is updated
     * whenever the structure of <code>Record</code> is modified.</p> <p>Client
     * applications must not assume that <code>eventVersion</code> will remain at a
     * particular value, as this number is subject to change at any time. In general,
     * <code>eventVersion</code> will only increase as the low-level DynamoDB Streams
     * API evolves.</p>
     */
    inline void SetEventVersion(Aws::String&& value) { m_eventVersionHasBeenSet = true; m_eventVersion = std::move(value); }

    /**
     * <p>The version number of the stream record format. This number is updated
     * whenever the structure of <code>Record</code> is modified.</p> <p>Client
     * applications must not assume that <code>eventVersion</code> will remain at a
     * particular value, as this number is subject to change at any time. In general,
     * <code>eventVersion</code> will only increase as the low-level DynamoDB Streams
     * API evolves.</p>
     */
    inline void SetEventVersion(const char* value) { m_eventVersionHasBeenSet = true; m_eventVersion.assign(value); }

    /**
     * <p>The version number of the stream record format. This number is updated
     * whenever the structure of <code>Record</code> is modified.</p> <p>Client
     * applications must not assume that <code>eventVersion</code> will remain at a
     * particular value, as this number is subject to change at any time. In general,
     * <code>eventVersion</code> will only increase as the low-level DynamoDB Streams
     * API evolves.</p>
     */
    inline Record& WithEventVersion(const Aws::String& value) { SetEventVersion(value); return *this;}

    /**
     * <p>The version number of the stream record format. This number is updated
     * whenever the structure of <code>Record</code> is modified.</p> <p>Client
     * applications must not assume that <code>eventVersion</code> will remain at a
     * particular value, as this number is subject to change at any time. In general,
     * <code>eventVersion</code> will only increase as the low-level DynamoDB Streams
     * API evolves.</p>
     */
    inline Record& WithEventVersion(Aws::String&& value) { SetEventVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the stream record format. This number is updated
     * whenever the structure of <code>Record</code> is modified.</p> <p>Client
     * applications must not assume that <code>eventVersion</code> will remain at a
     * particular value, as this number is subject to change at any time. In general,
     * <code>eventVersion</code> will only increase as the low-level DynamoDB Streams
     * API evolves.</p>
     */
    inline Record& WithEventVersion(const char* value) { SetEventVersion(value); return *this;}


    /**
     * <p>The AWS service from which the stream record originated. For DynamoDB
     * Streams, this is <code>aws:dynamodb</code>.</p>
     */
    inline const Aws::String& GetEventSource() const{ return m_eventSource; }

    /**
     * <p>The AWS service from which the stream record originated. For DynamoDB
     * Streams, this is <code>aws:dynamodb</code>.</p>
     */
    inline bool EventSourceHasBeenSet() const { return m_eventSourceHasBeenSet; }

    /**
     * <p>The AWS service from which the stream record originated. For DynamoDB
     * Streams, this is <code>aws:dynamodb</code>.</p>
     */
    inline void SetEventSource(const Aws::String& value) { m_eventSourceHasBeenSet = true; m_eventSource = value; }

    /**
     * <p>The AWS service from which the stream record originated. For DynamoDB
     * Streams, this is <code>aws:dynamodb</code>.</p>
     */
    inline void SetEventSource(Aws::String&& value) { m_eventSourceHasBeenSet = true; m_eventSource = std::move(value); }

    /**
     * <p>The AWS service from which the stream record originated. For DynamoDB
     * Streams, this is <code>aws:dynamodb</code>.</p>
     */
    inline void SetEventSource(const char* value) { m_eventSourceHasBeenSet = true; m_eventSource.assign(value); }

    /**
     * <p>The AWS service from which the stream record originated. For DynamoDB
     * Streams, this is <code>aws:dynamodb</code>.</p>
     */
    inline Record& WithEventSource(const Aws::String& value) { SetEventSource(value); return *this;}

    /**
     * <p>The AWS service from which the stream record originated. For DynamoDB
     * Streams, this is <code>aws:dynamodb</code>.</p>
     */
    inline Record& WithEventSource(Aws::String&& value) { SetEventSource(std::move(value)); return *this;}

    /**
     * <p>The AWS service from which the stream record originated. For DynamoDB
     * Streams, this is <code>aws:dynamodb</code>.</p>
     */
    inline Record& WithEventSource(const char* value) { SetEventSource(value); return *this;}


    /**
     * <p>The region in which the <code>GetRecords</code> request was received.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p>The region in which the <code>GetRecords</code> request was received.</p>
     */
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    /**
     * <p>The region in which the <code>GetRecords</code> request was received.</p>
     */
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p>The region in which the <code>GetRecords</code> request was received.</p>
     */
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    /**
     * <p>The region in which the <code>GetRecords</code> request was received.</p>
     */
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    /**
     * <p>The region in which the <code>GetRecords</code> request was received.</p>
     */
    inline Record& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>The region in which the <code>GetRecords</code> request was received.</p>
     */
    inline Record& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    /**
     * <p>The region in which the <code>GetRecords</code> request was received.</p>
     */
    inline Record& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}


    /**
     * <p>The main body of the stream record, containing all of the DynamoDB-specific
     * fields.</p>
     */
    inline const StreamRecord& GetDynamodb() const{ return m_dynamodb; }

    /**
     * <p>The main body of the stream record, containing all of the DynamoDB-specific
     * fields.</p>
     */
    inline bool DynamodbHasBeenSet() const { return m_dynamodbHasBeenSet; }

    /**
     * <p>The main body of the stream record, containing all of the DynamoDB-specific
     * fields.</p>
     */
    inline void SetDynamodb(const StreamRecord& value) { m_dynamodbHasBeenSet = true; m_dynamodb = value; }

    /**
     * <p>The main body of the stream record, containing all of the DynamoDB-specific
     * fields.</p>
     */
    inline void SetDynamodb(StreamRecord&& value) { m_dynamodbHasBeenSet = true; m_dynamodb = std::move(value); }

    /**
     * <p>The main body of the stream record, containing all of the DynamoDB-specific
     * fields.</p>
     */
    inline Record& WithDynamodb(const StreamRecord& value) { SetDynamodb(value); return *this;}

    /**
     * <p>The main body of the stream record, containing all of the DynamoDB-specific
     * fields.</p>
     */
    inline Record& WithDynamodb(StreamRecord&& value) { SetDynamodb(std::move(value)); return *this;}


    /**
     * <p>Items that are deleted by the Time to Live process after expiration have the
     * following fields: </p> <ul> <li> <p>Records[].userIdentity.type</p>
     * <p>"Service"</p> </li> <li> <p>Records[].userIdentity.principalId</p>
     * <p>"dynamodb.amazonaws.com"</p> </li> </ul>
     */
    inline const Identity& GetUserIdentity() const{ return m_userIdentity; }

    /**
     * <p>Items that are deleted by the Time to Live process after expiration have the
     * following fields: </p> <ul> <li> <p>Records[].userIdentity.type</p>
     * <p>"Service"</p> </li> <li> <p>Records[].userIdentity.principalId</p>
     * <p>"dynamodb.amazonaws.com"</p> </li> </ul>
     */
    inline bool UserIdentityHasBeenSet() const { return m_userIdentityHasBeenSet; }

    /**
     * <p>Items that are deleted by the Time to Live process after expiration have the
     * following fields: </p> <ul> <li> <p>Records[].userIdentity.type</p>
     * <p>"Service"</p> </li> <li> <p>Records[].userIdentity.principalId</p>
     * <p>"dynamodb.amazonaws.com"</p> </li> </ul>
     */
    inline void SetUserIdentity(const Identity& value) { m_userIdentityHasBeenSet = true; m_userIdentity = value; }

    /**
     * <p>Items that are deleted by the Time to Live process after expiration have the
     * following fields: </p> <ul> <li> <p>Records[].userIdentity.type</p>
     * <p>"Service"</p> </li> <li> <p>Records[].userIdentity.principalId</p>
     * <p>"dynamodb.amazonaws.com"</p> </li> </ul>
     */
    inline void SetUserIdentity(Identity&& value) { m_userIdentityHasBeenSet = true; m_userIdentity = std::move(value); }

    /**
     * <p>Items that are deleted by the Time to Live process after expiration have the
     * following fields: </p> <ul> <li> <p>Records[].userIdentity.type</p>
     * <p>"Service"</p> </li> <li> <p>Records[].userIdentity.principalId</p>
     * <p>"dynamodb.amazonaws.com"</p> </li> </ul>
     */
    inline Record& WithUserIdentity(const Identity& value) { SetUserIdentity(value); return *this;}

    /**
     * <p>Items that are deleted by the Time to Live process after expiration have the
     * following fields: </p> <ul> <li> <p>Records[].userIdentity.type</p>
     * <p>"Service"</p> </li> <li> <p>Records[].userIdentity.principalId</p>
     * <p>"dynamodb.amazonaws.com"</p> </li> </ul>
     */
    inline Record& WithUserIdentity(Identity&& value) { SetUserIdentity(std::move(value)); return *this;}

  private:

    Aws::String m_eventID;
    bool m_eventIDHasBeenSet = false;

    OperationType m_eventName;
    bool m_eventNameHasBeenSet = false;

    Aws::String m_eventVersion;
    bool m_eventVersionHasBeenSet = false;

    Aws::String m_eventSource;
    bool m_eventSourceHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    StreamRecord m_dynamodb;
    bool m_dynamodbHasBeenSet = false;

    Identity m_userIdentity;
    bool m_userIdentityHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
