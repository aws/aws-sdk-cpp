/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/config/model/DeliveryChannel.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The input for the <a>PutDeliveryChannel</a> action.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutDeliveryChannelRequest">AWS
   * API Reference</a></p>
   */
  class PutDeliveryChannelRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API PutDeliveryChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDeliveryChannel"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The configuration delivery channel object that delivers the configuration
     * information to an Amazon S3 bucket and to an Amazon SNS topic.</p>
     */
    inline const DeliveryChannel& GetDeliveryChannel() const{ return m_deliveryChannel; }

    /**
     * <p>The configuration delivery channel object that delivers the configuration
     * information to an Amazon S3 bucket and to an Amazon SNS topic.</p>
     */
    inline bool DeliveryChannelHasBeenSet() const { return m_deliveryChannelHasBeenSet; }

    /**
     * <p>The configuration delivery channel object that delivers the configuration
     * information to an Amazon S3 bucket and to an Amazon SNS topic.</p>
     */
    inline void SetDeliveryChannel(const DeliveryChannel& value) { m_deliveryChannelHasBeenSet = true; m_deliveryChannel = value; }

    /**
     * <p>The configuration delivery channel object that delivers the configuration
     * information to an Amazon S3 bucket and to an Amazon SNS topic.</p>
     */
    inline void SetDeliveryChannel(DeliveryChannel&& value) { m_deliveryChannelHasBeenSet = true; m_deliveryChannel = std::move(value); }

    /**
     * <p>The configuration delivery channel object that delivers the configuration
     * information to an Amazon S3 bucket and to an Amazon SNS topic.</p>
     */
    inline PutDeliveryChannelRequest& WithDeliveryChannel(const DeliveryChannel& value) { SetDeliveryChannel(value); return *this;}

    /**
     * <p>The configuration delivery channel object that delivers the configuration
     * information to an Amazon S3 bucket and to an Amazon SNS topic.</p>
     */
    inline PutDeliveryChannelRequest& WithDeliveryChannel(DeliveryChannel&& value) { SetDeliveryChannel(std::move(value)); return *this;}

  private:

    DeliveryChannel m_deliveryChannel;
    bool m_deliveryChannelHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
