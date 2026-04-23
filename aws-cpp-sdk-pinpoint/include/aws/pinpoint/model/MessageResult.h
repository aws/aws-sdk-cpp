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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/DeliveryStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * The result from sending a message to an address.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/MessageResult">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API MessageResult
  {
  public:
    MessageResult();
    MessageResult(Aws::Utils::Json::JsonView jsonValue);
    MessageResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The delivery status of the message. Possible values:

SUCCESS - The message was
     * successfully delivered to the endpoint.

TRANSIENT_FAILURE - A temporary error
     * occurred. Amazon Pinpoint will attempt to deliver the message again
     * later.

FAILURE_PERMANENT - An error occurred when delivering the message to the
     * endpoint. Amazon Pinpoint won't attempt to send the message again.

TIMEOUT -
     * The message couldn't be sent within the timeout period.

QUIET_TIME - The local
     * time for the endpoint was within the QuietTime for the campaign or
     * app.

DAILY_CAP - The endpoint has received the maximum number of messages it
     * can receive within a 24-hour period.

HOLDOUT - The endpoint was in a hold out
     * treatment for the campaign.

THROTTLED - Amazon Pinpoint throttled sending to
     * this endpoint.

EXPIRED - The endpoint address is expired.

CAMPAIGN_CAP - The
     * endpoint received the maximum number of messages allowed by the
     * campaign.

SERVICE_FAILURE - A service-level failure prevented Amazon Pinpoint
     * from delivering the message.

UNKNOWN - An unknown error occurred.
     */
    inline const DeliveryStatus& GetDeliveryStatus() const{ return m_deliveryStatus; }

    /**
     * The delivery status of the message. Possible values:

SUCCESS - The message was
     * successfully delivered to the endpoint.

TRANSIENT_FAILURE - A temporary error
     * occurred. Amazon Pinpoint will attempt to deliver the message again
     * later.

FAILURE_PERMANENT - An error occurred when delivering the message to the
     * endpoint. Amazon Pinpoint won't attempt to send the message again.

TIMEOUT -
     * The message couldn't be sent within the timeout period.

QUIET_TIME - The local
     * time for the endpoint was within the QuietTime for the campaign or
     * app.

DAILY_CAP - The endpoint has received the maximum number of messages it
     * can receive within a 24-hour period.

HOLDOUT - The endpoint was in a hold out
     * treatment for the campaign.

THROTTLED - Amazon Pinpoint throttled sending to
     * this endpoint.

EXPIRED - The endpoint address is expired.

CAMPAIGN_CAP - The
     * endpoint received the maximum number of messages allowed by the
     * campaign.

SERVICE_FAILURE - A service-level failure prevented Amazon Pinpoint
     * from delivering the message.

UNKNOWN - An unknown error occurred.
     */
    inline bool DeliveryStatusHasBeenSet() const { return m_deliveryStatusHasBeenSet; }

    /**
     * The delivery status of the message. Possible values:

SUCCESS - The message was
     * successfully delivered to the endpoint.

TRANSIENT_FAILURE - A temporary error
     * occurred. Amazon Pinpoint will attempt to deliver the message again
     * later.

FAILURE_PERMANENT - An error occurred when delivering the message to the
     * endpoint. Amazon Pinpoint won't attempt to send the message again.

TIMEOUT -
     * The message couldn't be sent within the timeout period.

QUIET_TIME - The local
     * time for the endpoint was within the QuietTime for the campaign or
     * app.

DAILY_CAP - The endpoint has received the maximum number of messages it
     * can receive within a 24-hour period.

HOLDOUT - The endpoint was in a hold out
     * treatment for the campaign.

THROTTLED - Amazon Pinpoint throttled sending to
     * this endpoint.

EXPIRED - The endpoint address is expired.

CAMPAIGN_CAP - The
     * endpoint received the maximum number of messages allowed by the
     * campaign.

SERVICE_FAILURE - A service-level failure prevented Amazon Pinpoint
     * from delivering the message.

UNKNOWN - An unknown error occurred.
     */
    inline void SetDeliveryStatus(const DeliveryStatus& value) { m_deliveryStatusHasBeenSet = true; m_deliveryStatus = value; }

    /**
     * The delivery status of the message. Possible values:

SUCCESS - The message was
     * successfully delivered to the endpoint.

TRANSIENT_FAILURE - A temporary error
     * occurred. Amazon Pinpoint will attempt to deliver the message again
     * later.

FAILURE_PERMANENT - An error occurred when delivering the message to the
     * endpoint. Amazon Pinpoint won't attempt to send the message again.

TIMEOUT -
     * The message couldn't be sent within the timeout period.

QUIET_TIME - The local
     * time for the endpoint was within the QuietTime for the campaign or
     * app.

DAILY_CAP - The endpoint has received the maximum number of messages it
     * can receive within a 24-hour period.

HOLDOUT - The endpoint was in a hold out
     * treatment for the campaign.

THROTTLED - Amazon Pinpoint throttled sending to
     * this endpoint.

EXPIRED - The endpoint address is expired.

CAMPAIGN_CAP - The
     * endpoint received the maximum number of messages allowed by the
     * campaign.

SERVICE_FAILURE - A service-level failure prevented Amazon Pinpoint
     * from delivering the message.

UNKNOWN - An unknown error occurred.
     */
    inline void SetDeliveryStatus(DeliveryStatus&& value) { m_deliveryStatusHasBeenSet = true; m_deliveryStatus = std::move(value); }

    /**
     * The delivery status of the message. Possible values:

SUCCESS - The message was
     * successfully delivered to the endpoint.

TRANSIENT_FAILURE - A temporary error
     * occurred. Amazon Pinpoint will attempt to deliver the message again
     * later.

FAILURE_PERMANENT - An error occurred when delivering the message to the
     * endpoint. Amazon Pinpoint won't attempt to send the message again.

TIMEOUT -
     * The message couldn't be sent within the timeout period.

QUIET_TIME - The local
     * time for the endpoint was within the QuietTime for the campaign or
     * app.

DAILY_CAP - The endpoint has received the maximum number of messages it
     * can receive within a 24-hour period.

HOLDOUT - The endpoint was in a hold out
     * treatment for the campaign.

THROTTLED - Amazon Pinpoint throttled sending to
     * this endpoint.

EXPIRED - The endpoint address is expired.

CAMPAIGN_CAP - The
     * endpoint received the maximum number of messages allowed by the
     * campaign.

SERVICE_FAILURE - A service-level failure prevented Amazon Pinpoint
     * from delivering the message.

UNKNOWN - An unknown error occurred.
     */
    inline MessageResult& WithDeliveryStatus(const DeliveryStatus& value) { SetDeliveryStatus(value); return *this;}

    /**
     * The delivery status of the message. Possible values:

SUCCESS - The message was
     * successfully delivered to the endpoint.

TRANSIENT_FAILURE - A temporary error
     * occurred. Amazon Pinpoint will attempt to deliver the message again
     * later.

FAILURE_PERMANENT - An error occurred when delivering the message to the
     * endpoint. Amazon Pinpoint won't attempt to send the message again.

TIMEOUT -
     * The message couldn't be sent within the timeout period.

QUIET_TIME - The local
     * time for the endpoint was within the QuietTime for the campaign or
     * app.

DAILY_CAP - The endpoint has received the maximum number of messages it
     * can receive within a 24-hour period.

HOLDOUT - The endpoint was in a hold out
     * treatment for the campaign.

THROTTLED - Amazon Pinpoint throttled sending to
     * this endpoint.

EXPIRED - The endpoint address is expired.

CAMPAIGN_CAP - The
     * endpoint received the maximum number of messages allowed by the
     * campaign.

SERVICE_FAILURE - A service-level failure prevented Amazon Pinpoint
     * from delivering the message.

UNKNOWN - An unknown error occurred.
     */
    inline MessageResult& WithDeliveryStatus(DeliveryStatus&& value) { SetDeliveryStatus(std::move(value)); return *this;}


    /**
     * Unique message identifier associated with the message that was sent.
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * Unique message identifier associated with the message that was sent.
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * Unique message identifier associated with the message that was sent.
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * Unique message identifier associated with the message that was sent.
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * Unique message identifier associated with the message that was sent.
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * Unique message identifier associated with the message that was sent.
     */
    inline MessageResult& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * Unique message identifier associated with the message that was sent.
     */
    inline MessageResult& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * Unique message identifier associated with the message that was sent.
     */
    inline MessageResult& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * Downstream service status code.
     */
    inline int GetStatusCode() const{ return m_statusCode; }

    /**
     * Downstream service status code.
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * Downstream service status code.
     */
    inline void SetStatusCode(int value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * Downstream service status code.
     */
    inline MessageResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}


    /**
     * Status message for message delivery.
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * Status message for message delivery.
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * Status message for message delivery.
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * Status message for message delivery.
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * Status message for message delivery.
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * Status message for message delivery.
     */
    inline MessageResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * Status message for message delivery.
     */
    inline MessageResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * Status message for message delivery.
     */
    inline MessageResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * If token was updated as part of delivery. (This is GCM Specific)
     */
    inline const Aws::String& GetUpdatedToken() const{ return m_updatedToken; }

    /**
     * If token was updated as part of delivery. (This is GCM Specific)
     */
    inline bool UpdatedTokenHasBeenSet() const { return m_updatedTokenHasBeenSet; }

    /**
     * If token was updated as part of delivery. (This is GCM Specific)
     */
    inline void SetUpdatedToken(const Aws::String& value) { m_updatedTokenHasBeenSet = true; m_updatedToken = value; }

    /**
     * If token was updated as part of delivery. (This is GCM Specific)
     */
    inline void SetUpdatedToken(Aws::String&& value) { m_updatedTokenHasBeenSet = true; m_updatedToken = std::move(value); }

    /**
     * If token was updated as part of delivery. (This is GCM Specific)
     */
    inline void SetUpdatedToken(const char* value) { m_updatedTokenHasBeenSet = true; m_updatedToken.assign(value); }

    /**
     * If token was updated as part of delivery. (This is GCM Specific)
     */
    inline MessageResult& WithUpdatedToken(const Aws::String& value) { SetUpdatedToken(value); return *this;}

    /**
     * If token was updated as part of delivery. (This is GCM Specific)
     */
    inline MessageResult& WithUpdatedToken(Aws::String&& value) { SetUpdatedToken(std::move(value)); return *this;}

    /**
     * If token was updated as part of delivery. (This is GCM Specific)
     */
    inline MessageResult& WithUpdatedToken(const char* value) { SetUpdatedToken(value); return *this;}

  private:

    DeliveryStatus m_deliveryStatus;
    bool m_deliveryStatusHasBeenSet;

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet;

    int m_statusCode;
    bool m_statusCodeHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;

    Aws::String m_updatedToken;
    bool m_updatedTokenHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
