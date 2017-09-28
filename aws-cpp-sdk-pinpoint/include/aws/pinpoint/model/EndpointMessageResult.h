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
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * The result from sending a message to an endpoint.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EndpointMessageResult">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API EndpointMessageResult
  {
  public:
    EndpointMessageResult();
    EndpointMessageResult(const Aws::Utils::Json::JsonValue& jsonValue);
    EndpointMessageResult& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Address that endpoint message was delivered to.
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * Address that endpoint message was delivered to.
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * Address that endpoint message was delivered to.
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * Address that endpoint message was delivered to.
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * Address that endpoint message was delivered to.
     */
    inline EndpointMessageResult& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * Address that endpoint message was delivered to.
     */
    inline EndpointMessageResult& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * Address that endpoint message was delivered to.
     */
    inline EndpointMessageResult& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * Delivery status of message.
     */
    inline const DeliveryStatus& GetDeliveryStatus() const{ return m_deliveryStatus; }

    /**
     * Delivery status of message.
     */
    inline void SetDeliveryStatus(const DeliveryStatus& value) { m_deliveryStatusHasBeenSet = true; m_deliveryStatus = value; }

    /**
     * Delivery status of message.
     */
    inline void SetDeliveryStatus(DeliveryStatus&& value) { m_deliveryStatusHasBeenSet = true; m_deliveryStatus = std::move(value); }

    /**
     * Delivery status of message.
     */
    inline EndpointMessageResult& WithDeliveryStatus(const DeliveryStatus& value) { SetDeliveryStatus(value); return *this;}

    /**
     * Delivery status of message.
     */
    inline EndpointMessageResult& WithDeliveryStatus(DeliveryStatus&& value) { SetDeliveryStatus(std::move(value)); return *this;}


    /**
     * Downstream service status code.
     */
    inline int GetStatusCode() const{ return m_statusCode; }

    /**
     * Downstream service status code.
     */
    inline void SetStatusCode(int value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * Downstream service status code.
     */
    inline EndpointMessageResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}


    /**
     * Status message for message delivery.
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

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
    inline EndpointMessageResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * Status message for message delivery.
     */
    inline EndpointMessageResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * Status message for message delivery.
     */
    inline EndpointMessageResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * If token was updated as part of delivery. (This is GCM Specific)
     */
    inline const Aws::String& GetUpdatedToken() const{ return m_updatedToken; }

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
    inline EndpointMessageResult& WithUpdatedToken(const Aws::String& value) { SetUpdatedToken(value); return *this;}

    /**
     * If token was updated as part of delivery. (This is GCM Specific)
     */
    inline EndpointMessageResult& WithUpdatedToken(Aws::String&& value) { SetUpdatedToken(std::move(value)); return *this;}

    /**
     * If token was updated as part of delivery. (This is GCM Specific)
     */
    inline EndpointMessageResult& WithUpdatedToken(const char* value) { SetUpdatedToken(value); return *this;}

  private:

    Aws::String m_address;
    bool m_addressHasBeenSet;

    DeliveryStatus m_deliveryStatus;
    bool m_deliveryStatusHasBeenSet;

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
