/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/iotfleetwise/model/CloudWatchLogDeliveryOptions.h>
#include <utility>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

  /**
   */
  class PutLoggingOptionsRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API PutLoggingOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutLoggingOptions"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Creates or updates the log delivery option to Amazon CloudWatch Logs.</p>
     */
    inline const CloudWatchLogDeliveryOptions& GetCloudWatchLogDelivery() const{ return m_cloudWatchLogDelivery; }

    /**
     * <p>Creates or updates the log delivery option to Amazon CloudWatch Logs.</p>
     */
    inline bool CloudWatchLogDeliveryHasBeenSet() const { return m_cloudWatchLogDeliveryHasBeenSet; }

    /**
     * <p>Creates or updates the log delivery option to Amazon CloudWatch Logs.</p>
     */
    inline void SetCloudWatchLogDelivery(const CloudWatchLogDeliveryOptions& value) { m_cloudWatchLogDeliveryHasBeenSet = true; m_cloudWatchLogDelivery = value; }

    /**
     * <p>Creates or updates the log delivery option to Amazon CloudWatch Logs.</p>
     */
    inline void SetCloudWatchLogDelivery(CloudWatchLogDeliveryOptions&& value) { m_cloudWatchLogDeliveryHasBeenSet = true; m_cloudWatchLogDelivery = std::move(value); }

    /**
     * <p>Creates or updates the log delivery option to Amazon CloudWatch Logs.</p>
     */
    inline PutLoggingOptionsRequest& WithCloudWatchLogDelivery(const CloudWatchLogDeliveryOptions& value) { SetCloudWatchLogDelivery(value); return *this;}

    /**
     * <p>Creates or updates the log delivery option to Amazon CloudWatch Logs.</p>
     */
    inline PutLoggingOptionsRequest& WithCloudWatchLogDelivery(CloudWatchLogDeliveryOptions&& value) { SetCloudWatchLogDelivery(std::move(value)); return *this;}

  private:

    CloudWatchLogDeliveryOptions m_cloudWatchLogDelivery;
    bool m_cloudWatchLogDeliveryHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
