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
#include <aws/dynamodbstreams/model/OperationType.h>
#include <aws/dynamodbstreams/model/StreamRecord.h>
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
   * <p>A description of a unique event within a stream.</p>
   */
  class AWS_DYNAMODBSTREAMS_API Record
  {
  public:
    Record();
    Record(Aws::Utils::Json::JsonView jsonValue);
    Record& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <ul> <li><p><code>INSERT</code> - a new item was added to the table.</p></li>
     * <li><p><code>MODIFY</code> - one or more of the item's attributes were
     * updated.</p></li> <li><p><code>REMOVE</code> - the item was deleted from the
     * table</p></li> </ul>
     */
    inline const OperationType& GetEventName() const{ return m_eventName; }

    /**
     * <p>The type of data modification that was performed on the DynamoDB table:</p>
     * <ul> <li><p><code>INSERT</code> - a new item was added to the table.</p></li>
     * <li><p><code>MODIFY</code> - one or more of the item's attributes were
     * updated.</p></li> <li><p><code>REMOVE</code> - the item was deleted from the
     * table</p></li> </ul>
     */
    inline bool EventNameHasBeenSet() const { return m_eventNameHasBeenSet; }

    /**
     * <p>The type of data modification that was performed on the DynamoDB table:</p>
     * <ul> <li><p><code>INSERT</code> - a new item was added to the table.</p></li>
     * <li><p><code>MODIFY</code> - one or more of the item's attributes were
     * updated.</p></li> <li><p><code>REMOVE</code> - the item was deleted from the
     * table</p></li> </ul>
     */
    inline void SetEventName(const OperationType& value) { m_eventNameHasBeenSet = true; m_eventName = value; }

    /**
     * <p>The type of data modification that was performed on the DynamoDB table:</p>
     * <ul> <li><p><code>INSERT</code> - a new item was added to the table.</p></li>
     * <li><p><code>MODIFY</code> - one or more of the item's attributes were
     * updated.</p></li> <li><p><code>REMOVE</code> - the item was deleted from the
     * table</p></li> </ul>
     */
    inline void SetEventName(OperationType&& value) { m_eventNameHasBeenSet = true; m_eventName = std::move(value); }

    /**
     * <p>The type of data modification that was performed on the DynamoDB table:</p>
     * <ul> <li><p><code>INSERT</code> - a new item was added to the table.</p></li>
     * <li><p><code>MODIFY</code> - one or more of the item's attributes were
     * updated.</p></li> <li><p><code>REMOVE</code> - the item was deleted from the
     * table</p></li> </ul>
     */
    inline Record& WithEventName(const OperationType& value) { SetEventName(value); return *this;}

    /**
     * <p>The type of data modification that was performed on the DynamoDB table:</p>
     * <ul> <li><p><code>INSERT</code> - a new item was added to the table.</p></li>
     * <li><p><code>MODIFY</code> - one or more of the item's attributes were
     * updated.</p></li> <li><p><code>REMOVE</code> - the item was deleted from the
     * table</p></li> </ul>
     */
    inline Record& WithEventName(OperationType&& value) { SetEventName(std::move(value)); return *this;}


    /**
     * <p>The version number of the stream record format. Currently, this is
     * <i>1.0</i>.</p>
     */
    inline const Aws::String& GetEventVersion() const{ return m_eventVersion; }

    /**
     * <p>The version number of the stream record format. Currently, this is
     * <i>1.0</i>.</p>
     */
    inline bool EventVersionHasBeenSet() const { return m_eventVersionHasBeenSet; }

    /**
     * <p>The version number of the stream record format. Currently, this is
     * <i>1.0</i>.</p>
     */
    inline void SetEventVersion(const Aws::String& value) { m_eventVersionHasBeenSet = true; m_eventVersion = value; }

    /**
     * <p>The version number of the stream record format. Currently, this is
     * <i>1.0</i>.</p>
     */
    inline void SetEventVersion(Aws::String&& value) { m_eventVersionHasBeenSet = true; m_eventVersion = std::move(value); }

    /**
     * <p>The version number of the stream record format. Currently, this is
     * <i>1.0</i>.</p>
     */
    inline void SetEventVersion(const char* value) { m_eventVersionHasBeenSet = true; m_eventVersion.assign(value); }

    /**
     * <p>The version number of the stream record format. Currently, this is
     * <i>1.0</i>.</p>
     */
    inline Record& WithEventVersion(const Aws::String& value) { SetEventVersion(value); return *this;}

    /**
     * <p>The version number of the stream record format. Currently, this is
     * <i>1.0</i>.</p>
     */
    inline Record& WithEventVersion(Aws::String&& value) { SetEventVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the stream record format. Currently, this is
     * <i>1.0</i>.</p>
     */
    inline Record& WithEventVersion(const char* value) { SetEventVersion(value); return *this;}


    /**
     * <p>The AWS service from which the stream record originated. For DynamoDB
     * Streams, this is <i>aws:dynamodb</i>.</p>
     */
    inline const Aws::String& GetEventSource() const{ return m_eventSource; }

    /**
     * <p>The AWS service from which the stream record originated. For DynamoDB
     * Streams, this is <i>aws:dynamodb</i>.</p>
     */
    inline bool EventSourceHasBeenSet() const { return m_eventSourceHasBeenSet; }

    /**
     * <p>The AWS service from which the stream record originated. For DynamoDB
     * Streams, this is <i>aws:dynamodb</i>.</p>
     */
    inline void SetEventSource(const Aws::String& value) { m_eventSourceHasBeenSet = true; m_eventSource = value; }

    /**
     * <p>The AWS service from which the stream record originated. For DynamoDB
     * Streams, this is <i>aws:dynamodb</i>.</p>
     */
    inline void SetEventSource(Aws::String&& value) { m_eventSourceHasBeenSet = true; m_eventSource = std::move(value); }

    /**
     * <p>The AWS service from which the stream record originated. For DynamoDB
     * Streams, this is <i>aws:dynamodb</i>.</p>
     */
    inline void SetEventSource(const char* value) { m_eventSourceHasBeenSet = true; m_eventSource.assign(value); }

    /**
     * <p>The AWS service from which the stream record originated. For DynamoDB
     * Streams, this is <i>aws:dynamodb</i>.</p>
     */
    inline Record& WithEventSource(const Aws::String& value) { SetEventSource(value); return *this;}

    /**
     * <p>The AWS service from which the stream record originated. For DynamoDB
     * Streams, this is <i>aws:dynamodb</i>.</p>
     */
    inline Record& WithEventSource(Aws::String&& value) { SetEventSource(std::move(value)); return *this;}

    /**
     * <p>The AWS service from which the stream record originated. For DynamoDB
     * Streams, this is <i>aws:dynamodb</i>.</p>
     */
    inline Record& WithEventSource(const char* value) { SetEventSource(value); return *this;}


    /**
     * <p>The region in which the <i>GetRecords</i> request was received.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p>The region in which the <i>GetRecords</i> request was received.</p>
     */
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    /**
     * <p>The region in which the <i>GetRecords</i> request was received.</p>
     */
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p>The region in which the <i>GetRecords</i> request was received.</p>
     */
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    /**
     * <p>The region in which the <i>GetRecords</i> request was received.</p>
     */
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    /**
     * <p>The region in which the <i>GetRecords</i> request was received.</p>
     */
    inline Record& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>The region in which the <i>GetRecords</i> request was received.</p>
     */
    inline Record& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    /**
     * <p>The region in which the <i>GetRecords</i> request was received.</p>
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

  private:

    Aws::String m_eventID;
    bool m_eventIDHasBeenSet;

    OperationType m_eventName;
    bool m_eventNameHasBeenSet;

    Aws::String m_eventVersion;
    bool m_eventVersionHasBeenSet;

    Aws::String m_eventSource;
    bool m_eventSourceHasBeenSet;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet;

    StreamRecord m_dynamodb;
    bool m_dynamodbHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
