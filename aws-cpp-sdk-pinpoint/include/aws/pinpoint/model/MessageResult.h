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
    MessageResult(const Aws::Utils::Json::JsonValue& jsonValue);
    MessageResult& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline MessageResult& WithDeliveryStatus(const DeliveryStatus& value) { SetDeliveryStatus(value); return *this;}

    /**
     * Delivery status of message.
     */
    inline MessageResult& WithDeliveryStatus(DeliveryStatus&& value) { SetDeliveryStatus(std::move(value)); return *this;}


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
    inline MessageResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}


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
