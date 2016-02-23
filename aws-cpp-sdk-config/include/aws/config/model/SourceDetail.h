/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/EventSource.h>
#include <aws/config/model/MessageType.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Provides the source and type of the event that triggers AWS Config to
   * evaluate your AWS resources against a rule.</p>
   */
  class AWS_CONFIGSERVICE_API SourceDetail
  {
  public:
    SourceDetail();
    SourceDetail(const Aws::Utils::Json::JsonValue& jsonValue);
    SourceDetail& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The source of the event, such as an AWS service, that triggers AWS Config to
     * evaluate your AWS resources.</p>
     */
    inline const EventSource& GetEventSource() const{ return m_eventSource; }

    /**
     * <p>The source of the event, such as an AWS service, that triggers AWS Config to
     * evaluate your AWS resources.</p>
     */
    inline void SetEventSource(const EventSource& value) { m_eventSourceHasBeenSet = true; m_eventSource = value; }

    /**
     * <p>The source of the event, such as an AWS service, that triggers AWS Config to
     * evaluate your AWS resources.</p>
     */
    inline void SetEventSource(EventSource&& value) { m_eventSourceHasBeenSet = true; m_eventSource = value; }

    /**
     * <p>The source of the event, such as an AWS service, that triggers AWS Config to
     * evaluate your AWS resources.</p>
     */
    inline SourceDetail& WithEventSource(const EventSource& value) { SetEventSource(value); return *this;}

    /**
     * <p>The source of the event, such as an AWS service, that triggers AWS Config to
     * evaluate your AWS resources.</p>
     */
    inline SourceDetail& WithEventSource(EventSource&& value) { SetEventSource(value); return *this;}

    /**
     * <p>The type of SNS message that triggers AWS Config to run an evaluation. For
     * evaluations that are initiated when AWS Config delivers a configuration item
     * change notification, you must use
     * <code>ConfigurationItemChangeNotification</code>. For evaluations that are
     * initiated when AWS Config delivers a configuration snapshot, you must use
     * <code>ConfigurationSnapshotDeliveryCompleted</code>. </p>
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }

    /**
     * <p>The type of SNS message that triggers AWS Config to run an evaluation. For
     * evaluations that are initiated when AWS Config delivers a configuration item
     * change notification, you must use
     * <code>ConfigurationItemChangeNotification</code>. For evaluations that are
     * initiated when AWS Config delivers a configuration snapshot, you must use
     * <code>ConfigurationSnapshotDeliveryCompleted</code>. </p>
     */
    inline void SetMessageType(const MessageType& value) { m_messageTypeHasBeenSet = true; m_messageType = value; }

    /**
     * <p>The type of SNS message that triggers AWS Config to run an evaluation. For
     * evaluations that are initiated when AWS Config delivers a configuration item
     * change notification, you must use
     * <code>ConfigurationItemChangeNotification</code>. For evaluations that are
     * initiated when AWS Config delivers a configuration snapshot, you must use
     * <code>ConfigurationSnapshotDeliveryCompleted</code>. </p>
     */
    inline void SetMessageType(MessageType&& value) { m_messageTypeHasBeenSet = true; m_messageType = value; }

    /**
     * <p>The type of SNS message that triggers AWS Config to run an evaluation. For
     * evaluations that are initiated when AWS Config delivers a configuration item
     * change notification, you must use
     * <code>ConfigurationItemChangeNotification</code>. For evaluations that are
     * initiated when AWS Config delivers a configuration snapshot, you must use
     * <code>ConfigurationSnapshotDeliveryCompleted</code>. </p>
     */
    inline SourceDetail& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}

    /**
     * <p>The type of SNS message that triggers AWS Config to run an evaluation. For
     * evaluations that are initiated when AWS Config delivers a configuration item
     * change notification, you must use
     * <code>ConfigurationItemChangeNotification</code>. For evaluations that are
     * initiated when AWS Config delivers a configuration snapshot, you must use
     * <code>ConfigurationSnapshotDeliveryCompleted</code>. </p>
     */
    inline SourceDetail& WithMessageType(MessageType&& value) { SetMessageType(value); return *this;}

  private:
    EventSource m_eventSource;
    bool m_eventSourceHasBeenSet;
    MessageType m_messageType;
    bool m_messageTypeHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
