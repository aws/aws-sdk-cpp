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
#include <aws/config/ConfigServiceRequest.h>
#include <aws/config/model/DeliveryChannel.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The input for the <a>PutDeliveryChannel</a> action.</p>
   */
  class AWS_CONFIGSERVICE_API PutDeliveryChannelRequest : public ConfigServiceRequest
  {
  public:
    PutDeliveryChannelRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The configuration delivery channel object that delivers the configuration
     * information to an Amazon S3 bucket, and to an Amazon SNS topic.</p>
     */
    inline const DeliveryChannel& GetDeliveryChannel() const{ return m_deliveryChannel; }

    /**
     * <p>The configuration delivery channel object that delivers the configuration
     * information to an Amazon S3 bucket, and to an Amazon SNS topic.</p>
     */
    inline void SetDeliveryChannel(const DeliveryChannel& value) { m_deliveryChannelHasBeenSet = true; m_deliveryChannel = value; }

    /**
     * <p>The configuration delivery channel object that delivers the configuration
     * information to an Amazon S3 bucket, and to an Amazon SNS topic.</p>
     */
    inline void SetDeliveryChannel(DeliveryChannel&& value) { m_deliveryChannelHasBeenSet = true; m_deliveryChannel = value; }

    /**
     * <p>The configuration delivery channel object that delivers the configuration
     * information to an Amazon S3 bucket, and to an Amazon SNS topic.</p>
     */
    inline PutDeliveryChannelRequest& WithDeliveryChannel(const DeliveryChannel& value) { SetDeliveryChannel(value); return *this;}

    /**
     * <p>The configuration delivery channel object that delivers the configuration
     * information to an Amazon S3 bucket, and to an Amazon SNS topic.</p>
     */
    inline PutDeliveryChannelRequest& WithDeliveryChannel(DeliveryChannel&& value) { SetDeliveryChannel(value); return *this;}

  private:
    DeliveryChannel m_deliveryChannel;
    bool m_deliveryChannelHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
