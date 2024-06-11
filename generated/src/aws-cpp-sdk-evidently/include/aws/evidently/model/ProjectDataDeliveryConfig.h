/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/model/CloudWatchLogsDestinationConfig.h>
#include <aws/evidently/model/S3DestinationConfig.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ProjectDataDeliveryConfig">AWS
   * API Reference</a></p>
   */
  class ProjectDataDeliveryConfig
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API ProjectDataDeliveryConfig();
    AWS_CLOUDWATCHEVIDENTLY_API ProjectDataDeliveryConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API ProjectDataDeliveryConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If the project stores evaluation events in CloudWatch Logs, this structure
     * stores the log group name.</p>
     */
    inline const CloudWatchLogsDestinationConfig& GetCloudWatchLogs() const{ return m_cloudWatchLogs; }
    inline bool CloudWatchLogsHasBeenSet() const { return m_cloudWatchLogsHasBeenSet; }
    inline void SetCloudWatchLogs(const CloudWatchLogsDestinationConfig& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = value; }
    inline void SetCloudWatchLogs(CloudWatchLogsDestinationConfig&& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = std::move(value); }
    inline ProjectDataDeliveryConfig& WithCloudWatchLogs(const CloudWatchLogsDestinationConfig& value) { SetCloudWatchLogs(value); return *this;}
    inline ProjectDataDeliveryConfig& WithCloudWatchLogs(CloudWatchLogsDestinationConfig&& value) { SetCloudWatchLogs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the project stores evaluation events in an Amazon S3 bucket, this
     * structure stores the bucket name and bucket prefix.</p>
     */
    inline const S3DestinationConfig& GetS3Destination() const{ return m_s3Destination; }
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }
    inline void SetS3Destination(const S3DestinationConfig& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = value; }
    inline void SetS3Destination(S3DestinationConfig&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::move(value); }
    inline ProjectDataDeliveryConfig& WithS3Destination(const S3DestinationConfig& value) { SetS3Destination(value); return *this;}
    inline ProjectDataDeliveryConfig& WithS3Destination(S3DestinationConfig&& value) { SetS3Destination(std::move(value)); return *this;}
    ///@}
  private:

    CloudWatchLogsDestinationConfig m_cloudWatchLogs;
    bool m_cloudWatchLogsHasBeenSet = false;

    S3DestinationConfig m_s3Destination;
    bool m_s3DestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
