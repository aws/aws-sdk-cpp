/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/model/CloudWatchLogsDestination.h>
#include <aws/evidently/model/S3Destination.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>A structure that contains information about where Evidently is to store
   * evaluation events for longer term storage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ProjectDataDelivery">AWS
   * API Reference</a></p>
   */
  class ProjectDataDelivery
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API ProjectDataDelivery();
    AWS_CLOUDWATCHEVIDENTLY_API ProjectDataDelivery(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API ProjectDataDelivery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If the project stores evaluation events in CloudWatch Logs, this structure
     * stores the log group name.</p>
     */
    inline const CloudWatchLogsDestination& GetCloudWatchLogs() const{ return m_cloudWatchLogs; }

    /**
     * <p>If the project stores evaluation events in CloudWatch Logs, this structure
     * stores the log group name.</p>
     */
    inline bool CloudWatchLogsHasBeenSet() const { return m_cloudWatchLogsHasBeenSet; }

    /**
     * <p>If the project stores evaluation events in CloudWatch Logs, this structure
     * stores the log group name.</p>
     */
    inline void SetCloudWatchLogs(const CloudWatchLogsDestination& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = value; }

    /**
     * <p>If the project stores evaluation events in CloudWatch Logs, this structure
     * stores the log group name.</p>
     */
    inline void SetCloudWatchLogs(CloudWatchLogsDestination&& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = std::move(value); }

    /**
     * <p>If the project stores evaluation events in CloudWatch Logs, this structure
     * stores the log group name.</p>
     */
    inline ProjectDataDelivery& WithCloudWatchLogs(const CloudWatchLogsDestination& value) { SetCloudWatchLogs(value); return *this;}

    /**
     * <p>If the project stores evaluation events in CloudWatch Logs, this structure
     * stores the log group name.</p>
     */
    inline ProjectDataDelivery& WithCloudWatchLogs(CloudWatchLogsDestination&& value) { SetCloudWatchLogs(std::move(value)); return *this;}


    /**
     * <p>If the project stores evaluation events in an Amazon S3 bucket, this
     * structure stores the bucket name and bucket prefix.</p>
     */
    inline const S3Destination& GetS3Destination() const{ return m_s3Destination; }

    /**
     * <p>If the project stores evaluation events in an Amazon S3 bucket, this
     * structure stores the bucket name and bucket prefix.</p>
     */
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }

    /**
     * <p>If the project stores evaluation events in an Amazon S3 bucket, this
     * structure stores the bucket name and bucket prefix.</p>
     */
    inline void SetS3Destination(const S3Destination& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = value; }

    /**
     * <p>If the project stores evaluation events in an Amazon S3 bucket, this
     * structure stores the bucket name and bucket prefix.</p>
     */
    inline void SetS3Destination(S3Destination&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::move(value); }

    /**
     * <p>If the project stores evaluation events in an Amazon S3 bucket, this
     * structure stores the bucket name and bucket prefix.</p>
     */
    inline ProjectDataDelivery& WithS3Destination(const S3Destination& value) { SetS3Destination(value); return *this;}

    /**
     * <p>If the project stores evaluation events in an Amazon S3 bucket, this
     * structure stores the bucket name and bucket prefix.</p>
     */
    inline ProjectDataDelivery& WithS3Destination(S3Destination&& value) { SetS3Destination(std::move(value)); return *this;}

  private:

    CloudWatchLogsDestination m_cloudWatchLogs;
    bool m_cloudWatchLogsHasBeenSet = false;

    S3Destination m_s3Destination;
    bool m_s3DestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
