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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/DeliveryStatus.h>
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
   * <p>Provides information about the delivery status and results of sending a
   * message directly to an endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EndpointMessageResult">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API EndpointMessageResult
  {
  public:
    EndpointMessageResult();
    EndpointMessageResult(Aws::Utils::Json::JsonView jsonValue);
    EndpointMessageResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The endpoint address that the message was delivered to.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>The endpoint address that the message was delivered to.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>The endpoint address that the message was delivered to.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>The endpoint address that the message was delivered to.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>The endpoint address that the message was delivered to.</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>The endpoint address that the message was delivered to.</p>
     */
    inline EndpointMessageResult& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>The endpoint address that the message was delivered to.</p>
     */
    inline EndpointMessageResult& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>The endpoint address that the message was delivered to.</p>
     */
    inline EndpointMessageResult& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * <p>The delivery status of the message. Possible values are:</p> <ul>
     * <li><p>DUPLICATE - The endpoint address is a duplicate of another endpoint
     * address. Amazon Pinpoint won't attempt to send the message again.</p></li>
     * <li><p>OPT_OUT - The user who's associated with the endpoint has opted out of
     * receiving messages from you. Amazon Pinpoint won't attempt to send the message
     * again.</p></li> <li><p>PERMANENT_FAILURE - An error occurred when delivering the
     * message to the endpoint. Amazon Pinpoint won't attempt to send the message
     * again.</p></li>    <li><p>SUCCESSFUL - The message was successfully delivered to
     * the endpoint.</p></li> <li><p>TEMPORARY_FAILURE - A temporary error occurred.
     * Amazon Pinpoint will attempt to deliver the message again later.</p></li>
     * <li><p>THROTTLED - Amazon Pinpoint throttled the operation to send the message
     * to the endpoint.</p></li> <li><p>TIMEOUT - The message couldn't be sent within
     * the timeout period.</p></li> <li><p>UNKNOWN_FAILURE - An unknown error
     * occurred.</p></li></ul>
     */
    inline const DeliveryStatus& GetDeliveryStatus() const{ return m_deliveryStatus; }

    /**
     * <p>The delivery status of the message. Possible values are:</p> <ul>
     * <li><p>DUPLICATE - The endpoint address is a duplicate of another endpoint
     * address. Amazon Pinpoint won't attempt to send the message again.</p></li>
     * <li><p>OPT_OUT - The user who's associated with the endpoint has opted out of
     * receiving messages from you. Amazon Pinpoint won't attempt to send the message
     * again.</p></li> <li><p>PERMANENT_FAILURE - An error occurred when delivering the
     * message to the endpoint. Amazon Pinpoint won't attempt to send the message
     * again.</p></li>    <li><p>SUCCESSFUL - The message was successfully delivered to
     * the endpoint.</p></li> <li><p>TEMPORARY_FAILURE - A temporary error occurred.
     * Amazon Pinpoint will attempt to deliver the message again later.</p></li>
     * <li><p>THROTTLED - Amazon Pinpoint throttled the operation to send the message
     * to the endpoint.</p></li> <li><p>TIMEOUT - The message couldn't be sent within
     * the timeout period.</p></li> <li><p>UNKNOWN_FAILURE - An unknown error
     * occurred.</p></li></ul>
     */
    inline bool DeliveryStatusHasBeenSet() const { return m_deliveryStatusHasBeenSet; }

    /**
     * <p>The delivery status of the message. Possible values are:</p> <ul>
     * <li><p>DUPLICATE - The endpoint address is a duplicate of another endpoint
     * address. Amazon Pinpoint won't attempt to send the message again.</p></li>
     * <li><p>OPT_OUT - The user who's associated with the endpoint has opted out of
     * receiving messages from you. Amazon Pinpoint won't attempt to send the message
     * again.</p></li> <li><p>PERMANENT_FAILURE - An error occurred when delivering the
     * message to the endpoint. Amazon Pinpoint won't attempt to send the message
     * again.</p></li>    <li><p>SUCCESSFUL - The message was successfully delivered to
     * the endpoint.</p></li> <li><p>TEMPORARY_FAILURE - A temporary error occurred.
     * Amazon Pinpoint will attempt to deliver the message again later.</p></li>
     * <li><p>THROTTLED - Amazon Pinpoint throttled the operation to send the message
     * to the endpoint.</p></li> <li><p>TIMEOUT - The message couldn't be sent within
     * the timeout period.</p></li> <li><p>UNKNOWN_FAILURE - An unknown error
     * occurred.</p></li></ul>
     */
    inline void SetDeliveryStatus(const DeliveryStatus& value) { m_deliveryStatusHasBeenSet = true; m_deliveryStatus = value; }

    /**
     * <p>The delivery status of the message. Possible values are:</p> <ul>
     * <li><p>DUPLICATE - The endpoint address is a duplicate of another endpoint
     * address. Amazon Pinpoint won't attempt to send the message again.</p></li>
     * <li><p>OPT_OUT - The user who's associated with the endpoint has opted out of
     * receiving messages from you. Amazon Pinpoint won't attempt to send the message
     * again.</p></li> <li><p>PERMANENT_FAILURE - An error occurred when delivering the
     * message to the endpoint. Amazon Pinpoint won't attempt to send the message
     * again.</p></li>    <li><p>SUCCESSFUL - The message was successfully delivered to
     * the endpoint.</p></li> <li><p>TEMPORARY_FAILURE - A temporary error occurred.
     * Amazon Pinpoint will attempt to deliver the message again later.</p></li>
     * <li><p>THROTTLED - Amazon Pinpoint throttled the operation to send the message
     * to the endpoint.</p></li> <li><p>TIMEOUT - The message couldn't be sent within
     * the timeout period.</p></li> <li><p>UNKNOWN_FAILURE - An unknown error
     * occurred.</p></li></ul>
     */
    inline void SetDeliveryStatus(DeliveryStatus&& value) { m_deliveryStatusHasBeenSet = true; m_deliveryStatus = std::move(value); }

    /**
     * <p>The delivery status of the message. Possible values are:</p> <ul>
     * <li><p>DUPLICATE - The endpoint address is a duplicate of another endpoint
     * address. Amazon Pinpoint won't attempt to send the message again.</p></li>
     * <li><p>OPT_OUT - The user who's associated with the endpoint has opted out of
     * receiving messages from you. Amazon Pinpoint won't attempt to send the message
     * again.</p></li> <li><p>PERMANENT_FAILURE - An error occurred when delivering the
     * message to the endpoint. Amazon Pinpoint won't attempt to send the message
     * again.</p></li>    <li><p>SUCCESSFUL - The message was successfully delivered to
     * the endpoint.</p></li> <li><p>TEMPORARY_FAILURE - A temporary error occurred.
     * Amazon Pinpoint will attempt to deliver the message again later.</p></li>
     * <li><p>THROTTLED - Amazon Pinpoint throttled the operation to send the message
     * to the endpoint.</p></li> <li><p>TIMEOUT - The message couldn't be sent within
     * the timeout period.</p></li> <li><p>UNKNOWN_FAILURE - An unknown error
     * occurred.</p></li></ul>
     */
    inline EndpointMessageResult& WithDeliveryStatus(const DeliveryStatus& value) { SetDeliveryStatus(value); return *this;}

    /**
     * <p>The delivery status of the message. Possible values are:</p> <ul>
     * <li><p>DUPLICATE - The endpoint address is a duplicate of another endpoint
     * address. Amazon Pinpoint won't attempt to send the message again.</p></li>
     * <li><p>OPT_OUT - The user who's associated with the endpoint has opted out of
     * receiving messages from you. Amazon Pinpoint won't attempt to send the message
     * again.</p></li> <li><p>PERMANENT_FAILURE - An error occurred when delivering the
     * message to the endpoint. Amazon Pinpoint won't attempt to send the message
     * again.</p></li>    <li><p>SUCCESSFUL - The message was successfully delivered to
     * the endpoint.</p></li> <li><p>TEMPORARY_FAILURE - A temporary error occurred.
     * Amazon Pinpoint will attempt to deliver the message again later.</p></li>
     * <li><p>THROTTLED - Amazon Pinpoint throttled the operation to send the message
     * to the endpoint.</p></li> <li><p>TIMEOUT - The message couldn't be sent within
     * the timeout period.</p></li> <li><p>UNKNOWN_FAILURE - An unknown error
     * occurred.</p></li></ul>
     */
    inline EndpointMessageResult& WithDeliveryStatus(DeliveryStatus&& value) { SetDeliveryStatus(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the message that was sent.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The unique identifier for the message that was sent.</p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p>The unique identifier for the message that was sent.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>The unique identifier for the message that was sent.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p>The unique identifier for the message that was sent.</p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>The unique identifier for the message that was sent.</p>
     */
    inline EndpointMessageResult& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The unique identifier for the message that was sent.</p>
     */
    inline EndpointMessageResult& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the message that was sent.</p>
     */
    inline EndpointMessageResult& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>The downstream service status code for delivering the message.</p>
     */
    inline int GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The downstream service status code for delivering the message.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The downstream service status code for delivering the message.</p>
     */
    inline void SetStatusCode(int value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The downstream service status code for delivering the message.</p>
     */
    inline EndpointMessageResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}


    /**
     * <p>The status message for delivering the message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message for delivering the message.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message for delivering the message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message for delivering the message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message for delivering the message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message for delivering the message.</p>
     */
    inline EndpointMessageResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message for delivering the message.</p>
     */
    inline EndpointMessageResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message for delivering the message.</p>
     */
    inline EndpointMessageResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>For push notifications that are sent through the GCM channel, specifies
     * whether the token was updated as part of delivering the message.</p>
     */
    inline const Aws::String& GetUpdatedToken() const{ return m_updatedToken; }

    /**
     * <p>For push notifications that are sent through the GCM channel, specifies
     * whether the token was updated as part of delivering the message.</p>
     */
    inline bool UpdatedTokenHasBeenSet() const { return m_updatedTokenHasBeenSet; }

    /**
     * <p>For push notifications that are sent through the GCM channel, specifies
     * whether the token was updated as part of delivering the message.</p>
     */
    inline void SetUpdatedToken(const Aws::String& value) { m_updatedTokenHasBeenSet = true; m_updatedToken = value; }

    /**
     * <p>For push notifications that are sent through the GCM channel, specifies
     * whether the token was updated as part of delivering the message.</p>
     */
    inline void SetUpdatedToken(Aws::String&& value) { m_updatedTokenHasBeenSet = true; m_updatedToken = std::move(value); }

    /**
     * <p>For push notifications that are sent through the GCM channel, specifies
     * whether the token was updated as part of delivering the message.</p>
     */
    inline void SetUpdatedToken(const char* value) { m_updatedTokenHasBeenSet = true; m_updatedToken.assign(value); }

    /**
     * <p>For push notifications that are sent through the GCM channel, specifies
     * whether the token was updated as part of delivering the message.</p>
     */
    inline EndpointMessageResult& WithUpdatedToken(const Aws::String& value) { SetUpdatedToken(value); return *this;}

    /**
     * <p>For push notifications that are sent through the GCM channel, specifies
     * whether the token was updated as part of delivering the message.</p>
     */
    inline EndpointMessageResult& WithUpdatedToken(Aws::String&& value) { SetUpdatedToken(std::move(value)); return *this;}

    /**
     * <p>For push notifications that are sent through the GCM channel, specifies
     * whether the token was updated as part of delivering the message.</p>
     */
    inline EndpointMessageResult& WithUpdatedToken(const char* value) { SetUpdatedToken(value); return *this;}

  private:

    Aws::String m_address;
    bool m_addressHasBeenSet;

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
