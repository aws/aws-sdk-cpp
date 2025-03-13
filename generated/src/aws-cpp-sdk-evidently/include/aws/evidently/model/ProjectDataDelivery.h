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
    AWS_CLOUDWATCHEVIDENTLY_API ProjectDataDelivery() = default;
    AWS_CLOUDWATCHEVIDENTLY_API ProjectDataDelivery(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API ProjectDataDelivery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If the project stores evaluation events in CloudWatch Logs, this structure
     * stores the log group name.</p>
     */
    inline const CloudWatchLogsDestination& GetCloudWatchLogs() const { return m_cloudWatchLogs; }
    inline bool CloudWatchLogsHasBeenSet() const { return m_cloudWatchLogsHasBeenSet; }
    template<typename CloudWatchLogsT = CloudWatchLogsDestination>
    void SetCloudWatchLogs(CloudWatchLogsT&& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = std::forward<CloudWatchLogsT>(value); }
    template<typename CloudWatchLogsT = CloudWatchLogsDestination>
    ProjectDataDelivery& WithCloudWatchLogs(CloudWatchLogsT&& value) { SetCloudWatchLogs(std::forward<CloudWatchLogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the project stores evaluation events in an Amazon S3 bucket, this
     * structure stores the bucket name and bucket prefix.</p>
     */
    inline const S3Destination& GetS3Destination() const { return m_s3Destination; }
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }
    template<typename S3DestinationT = S3Destination>
    void SetS3Destination(S3DestinationT&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::forward<S3DestinationT>(value); }
    template<typename S3DestinationT = S3Destination>
    ProjectDataDelivery& WithS3Destination(S3DestinationT&& value) { SetS3Destination(std::forward<S3DestinationT>(value)); return *this;}
    ///@}
  private:

    CloudWatchLogsDestination m_cloudWatchLogs;
    bool m_cloudWatchLogsHasBeenSet = false;

    S3Destination m_s3Destination;
    bool m_s3DestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
