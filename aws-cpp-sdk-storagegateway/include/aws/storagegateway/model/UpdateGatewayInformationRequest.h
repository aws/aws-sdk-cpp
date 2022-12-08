/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/GatewayCapacity.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class UpdateGatewayInformationRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API UpdateGatewayInformationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGatewayInformation"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline UpdateGatewayInformationRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline UpdateGatewayInformationRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline UpdateGatewayInformationRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    
    inline const Aws::String& GetGatewayName() const{ return m_gatewayName; }

    
    inline bool GatewayNameHasBeenSet() const { return m_gatewayNameHasBeenSet; }

    
    inline void SetGatewayName(const Aws::String& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = value; }

    
    inline void SetGatewayName(Aws::String&& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = std::move(value); }

    
    inline void SetGatewayName(const char* value) { m_gatewayNameHasBeenSet = true; m_gatewayName.assign(value); }

    
    inline UpdateGatewayInformationRequest& WithGatewayName(const Aws::String& value) { SetGatewayName(value); return *this;}

    
    inline UpdateGatewayInformationRequest& WithGatewayName(Aws::String&& value) { SetGatewayName(std::move(value)); return *this;}

    
    inline UpdateGatewayInformationRequest& WithGatewayName(const char* value) { SetGatewayName(value); return *this;}


    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline const Aws::String& GetGatewayTimezone() const{ return m_gatewayTimezone; }

    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline bool GatewayTimezoneHasBeenSet() const { return m_gatewayTimezoneHasBeenSet; }

    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline void SetGatewayTimezone(const Aws::String& value) { m_gatewayTimezoneHasBeenSet = true; m_gatewayTimezone = value; }

    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline void SetGatewayTimezone(Aws::String&& value) { m_gatewayTimezoneHasBeenSet = true; m_gatewayTimezone = std::move(value); }

    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline void SetGatewayTimezone(const char* value) { m_gatewayTimezoneHasBeenSet = true; m_gatewayTimezone.assign(value); }

    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline UpdateGatewayInformationRequest& WithGatewayTimezone(const Aws::String& value) { SetGatewayTimezone(value); return *this;}

    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline UpdateGatewayInformationRequest& WithGatewayTimezone(Aws::String&& value) { SetGatewayTimezone(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline UpdateGatewayInformationRequest& WithGatewayTimezone(const char* value) { SetGatewayTimezone(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that you
     * want to use to monitor and log events in the gateway.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/WhatIsCloudWatchLogs.html">What
     * is Amazon CloudWatch Logs?</a> </p>
     */
    inline const Aws::String& GetCloudWatchLogGroupARN() const{ return m_cloudWatchLogGroupARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that you
     * want to use to monitor and log events in the gateway.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/WhatIsCloudWatchLogs.html">What
     * is Amazon CloudWatch Logs?</a> </p>
     */
    inline bool CloudWatchLogGroupARNHasBeenSet() const { return m_cloudWatchLogGroupARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that you
     * want to use to monitor and log events in the gateway.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/WhatIsCloudWatchLogs.html">What
     * is Amazon CloudWatch Logs?</a> </p>
     */
    inline void SetCloudWatchLogGroupARN(const Aws::String& value) { m_cloudWatchLogGroupARNHasBeenSet = true; m_cloudWatchLogGroupARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that you
     * want to use to monitor and log events in the gateway.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/WhatIsCloudWatchLogs.html">What
     * is Amazon CloudWatch Logs?</a> </p>
     */
    inline void SetCloudWatchLogGroupARN(Aws::String&& value) { m_cloudWatchLogGroupARNHasBeenSet = true; m_cloudWatchLogGroupARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that you
     * want to use to monitor and log events in the gateway.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/WhatIsCloudWatchLogs.html">What
     * is Amazon CloudWatch Logs?</a> </p>
     */
    inline void SetCloudWatchLogGroupARN(const char* value) { m_cloudWatchLogGroupARNHasBeenSet = true; m_cloudWatchLogGroupARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that you
     * want to use to monitor and log events in the gateway.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/WhatIsCloudWatchLogs.html">What
     * is Amazon CloudWatch Logs?</a> </p>
     */
    inline UpdateGatewayInformationRequest& WithCloudWatchLogGroupARN(const Aws::String& value) { SetCloudWatchLogGroupARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that you
     * want to use to monitor and log events in the gateway.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/WhatIsCloudWatchLogs.html">What
     * is Amazon CloudWatch Logs?</a> </p>
     */
    inline UpdateGatewayInformationRequest& WithCloudWatchLogGroupARN(Aws::String&& value) { SetCloudWatchLogGroupARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that you
     * want to use to monitor and log events in the gateway.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/WhatIsCloudWatchLogs.html">What
     * is Amazon CloudWatch Logs?</a> </p>
     */
    inline UpdateGatewayInformationRequest& WithCloudWatchLogGroupARN(const char* value) { SetCloudWatchLogGroupARN(value); return *this;}


    /**
     * <p>Specifies the size of the gateway's metadata cache.</p>
     */
    inline const GatewayCapacity& GetGatewayCapacity() const{ return m_gatewayCapacity; }

    /**
     * <p>Specifies the size of the gateway's metadata cache.</p>
     */
    inline bool GatewayCapacityHasBeenSet() const { return m_gatewayCapacityHasBeenSet; }

    /**
     * <p>Specifies the size of the gateway's metadata cache.</p>
     */
    inline void SetGatewayCapacity(const GatewayCapacity& value) { m_gatewayCapacityHasBeenSet = true; m_gatewayCapacity = value; }

    /**
     * <p>Specifies the size of the gateway's metadata cache.</p>
     */
    inline void SetGatewayCapacity(GatewayCapacity&& value) { m_gatewayCapacityHasBeenSet = true; m_gatewayCapacity = std::move(value); }

    /**
     * <p>Specifies the size of the gateway's metadata cache.</p>
     */
    inline UpdateGatewayInformationRequest& WithGatewayCapacity(const GatewayCapacity& value) { SetGatewayCapacity(value); return *this;}

    /**
     * <p>Specifies the size of the gateway's metadata cache.</p>
     */
    inline UpdateGatewayInformationRequest& WithGatewayCapacity(GatewayCapacity&& value) { SetGatewayCapacity(std::move(value)); return *this;}

  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::String m_gatewayName;
    bool m_gatewayNameHasBeenSet = false;

    Aws::String m_gatewayTimezone;
    bool m_gatewayTimezoneHasBeenSet = false;

    Aws::String m_cloudWatchLogGroupARN;
    bool m_cloudWatchLogGroupARNHasBeenSet = false;

    GatewayCapacity m_gatewayCapacity;
    bool m_gatewayCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
