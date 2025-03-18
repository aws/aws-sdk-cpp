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
    AWS_DYNAMODBSTREAMS_API Record() = default;
    AWS_DYNAMODBSTREAMS_API Record(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Record& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A globally unique identifier for the event that was recorded in this stream
     * record.</p>
     */
    inline const Aws::String& GetEventID() const { return m_eventID; }
    inline bool EventIDHasBeenSet() const { return m_eventIDHasBeenSet; }
    template<typename EventIDT = Aws::String>
    void SetEventID(EventIDT&& value) { m_eventIDHasBeenSet = true; m_eventID = std::forward<EventIDT>(value); }
    template<typename EventIDT = Aws::String>
    Record& WithEventID(EventIDT&& value) { SetEventID(std::forward<EventIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data modification that was performed on the DynamoDB table:</p>
     * <ul> <li> <p> <code>INSERT</code> - a new item was added to the table.</p> </li>
     * <li> <p> <code>MODIFY</code> - one or more of an existing item's attributes were
     * modified.</p> </li> <li> <p> <code>REMOVE</code> - the item was deleted from the
     * table</p> </li> </ul>
     */
    inline OperationType GetEventName() const { return m_eventName; }
    inline bool EventNameHasBeenSet() const { return m_eventNameHasBeenSet; }
    inline void SetEventName(OperationType value) { m_eventNameHasBeenSet = true; m_eventName = value; }
    inline Record& WithEventName(OperationType value) { SetEventName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the stream record format. This number is updated
     * whenever the structure of <code>Record</code> is modified.</p> <p>Client
     * applications must not assume that <code>eventVersion</code> will remain at a
     * particular value, as this number is subject to change at any time. In general,
     * <code>eventVersion</code> will only increase as the low-level DynamoDB Streams
     * API evolves.</p>
     */
    inline const Aws::String& GetEventVersion() const { return m_eventVersion; }
    inline bool EventVersionHasBeenSet() const { return m_eventVersionHasBeenSet; }
    template<typename EventVersionT = Aws::String>
    void SetEventVersion(EventVersionT&& value) { m_eventVersionHasBeenSet = true; m_eventVersion = std::forward<EventVersionT>(value); }
    template<typename EventVersionT = Aws::String>
    Record& WithEventVersion(EventVersionT&& value) { SetEventVersion(std::forward<EventVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service from which the stream record originated. For
     * DynamoDB Streams, this is <code>aws:dynamodb</code>.</p>
     */
    inline const Aws::String& GetEventSource() const { return m_eventSource; }
    inline bool EventSourceHasBeenSet() const { return m_eventSourceHasBeenSet; }
    template<typename EventSourceT = Aws::String>
    void SetEventSource(EventSourceT&& value) { m_eventSourceHasBeenSet = true; m_eventSource = std::forward<EventSourceT>(value); }
    template<typename EventSourceT = Aws::String>
    Record& WithEventSource(EventSourceT&& value) { SetEventSource(std::forward<EventSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region in which the <code>GetRecords</code> request was received.</p>
     */
    inline const Aws::String& GetAwsRegion() const { return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    template<typename AwsRegionT = Aws::String>
    void SetAwsRegion(AwsRegionT&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::forward<AwsRegionT>(value); }
    template<typename AwsRegionT = Aws::String>
    Record& WithAwsRegion(AwsRegionT&& value) { SetAwsRegion(std::forward<AwsRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The main body of the stream record, containing all of the DynamoDB-specific
     * fields.</p>
     */
    inline const StreamRecord& GetDynamodb() const { return m_dynamodb; }
    inline bool DynamodbHasBeenSet() const { return m_dynamodbHasBeenSet; }
    template<typename DynamodbT = StreamRecord>
    void SetDynamodb(DynamodbT&& value) { m_dynamodbHasBeenSet = true; m_dynamodb = std::forward<DynamodbT>(value); }
    template<typename DynamodbT = StreamRecord>
    Record& WithDynamodb(DynamodbT&& value) { SetDynamodb(std::forward<DynamodbT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Items that are deleted by the Time to Live process after expiration have the
     * following fields: </p> <ul> <li> <p>Records[].userIdentity.type</p>
     * <p>"Service"</p> </li> <li> <p>Records[].userIdentity.principalId</p>
     * <p>"dynamodb.amazonaws.com"</p> </li> </ul>
     */
    inline const Identity& GetUserIdentity() const { return m_userIdentity; }
    inline bool UserIdentityHasBeenSet() const { return m_userIdentityHasBeenSet; }
    template<typename UserIdentityT = Identity>
    void SetUserIdentity(UserIdentityT&& value) { m_userIdentityHasBeenSet = true; m_userIdentity = std::forward<UserIdentityT>(value); }
    template<typename UserIdentityT = Identity>
    Record& WithUserIdentity(UserIdentityT&& value) { SetUserIdentity(std::forward<UserIdentityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventID;
    bool m_eventIDHasBeenSet = false;

    OperationType m_eventName{OperationType::NOT_SET};
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
