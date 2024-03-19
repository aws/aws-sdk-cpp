/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>A structure that contains information about one logs delivery
   * destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeliveryDestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class DeliveryDestinationConfiguration
  {
  public:
    AWS_CLOUDWATCHLOGS_API DeliveryDestinationConfiguration();
    AWS_CLOUDWATCHLOGS_API DeliveryDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API DeliveryDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the Amazon Web Services destination that this delivery destination
     * represents. That Amazon Web Services destination can be a log group in
     * CloudWatch Logs, an Amazon S3 bucket, or a delivery stream in Firehose.</p>
     */
    inline const Aws::String& GetDestinationResourceArn() const{ return m_destinationResourceArn; }

    /**
     * <p>The ARN of the Amazon Web Services destination that this delivery destination
     * represents. That Amazon Web Services destination can be a log group in
     * CloudWatch Logs, an Amazon S3 bucket, or a delivery stream in Firehose.</p>
     */
    inline bool DestinationResourceArnHasBeenSet() const { return m_destinationResourceArnHasBeenSet; }

    /**
     * <p>The ARN of the Amazon Web Services destination that this delivery destination
     * represents. That Amazon Web Services destination can be a log group in
     * CloudWatch Logs, an Amazon S3 bucket, or a delivery stream in Firehose.</p>
     */
    inline void SetDestinationResourceArn(const Aws::String& value) { m_destinationResourceArnHasBeenSet = true; m_destinationResourceArn = value; }

    /**
     * <p>The ARN of the Amazon Web Services destination that this delivery destination
     * represents. That Amazon Web Services destination can be a log group in
     * CloudWatch Logs, an Amazon S3 bucket, or a delivery stream in Firehose.</p>
     */
    inline void SetDestinationResourceArn(Aws::String&& value) { m_destinationResourceArnHasBeenSet = true; m_destinationResourceArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon Web Services destination that this delivery destination
     * represents. That Amazon Web Services destination can be a log group in
     * CloudWatch Logs, an Amazon S3 bucket, or a delivery stream in Firehose.</p>
     */
    inline void SetDestinationResourceArn(const char* value) { m_destinationResourceArnHasBeenSet = true; m_destinationResourceArn.assign(value); }

    /**
     * <p>The ARN of the Amazon Web Services destination that this delivery destination
     * represents. That Amazon Web Services destination can be a log group in
     * CloudWatch Logs, an Amazon S3 bucket, or a delivery stream in Firehose.</p>
     */
    inline DeliveryDestinationConfiguration& WithDestinationResourceArn(const Aws::String& value) { SetDestinationResourceArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon Web Services destination that this delivery destination
     * represents. That Amazon Web Services destination can be a log group in
     * CloudWatch Logs, an Amazon S3 bucket, or a delivery stream in Firehose.</p>
     */
    inline DeliveryDestinationConfiguration& WithDestinationResourceArn(Aws::String&& value) { SetDestinationResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon Web Services destination that this delivery destination
     * represents. That Amazon Web Services destination can be a log group in
     * CloudWatch Logs, an Amazon S3 bucket, or a delivery stream in Firehose.</p>
     */
    inline DeliveryDestinationConfiguration& WithDestinationResourceArn(const char* value) { SetDestinationResourceArn(value); return *this;}

  private:

    Aws::String m_destinationResourceArn;
    bool m_destinationResourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
