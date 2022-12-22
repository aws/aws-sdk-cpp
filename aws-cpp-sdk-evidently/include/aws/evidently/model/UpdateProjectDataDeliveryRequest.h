/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
#include <aws/evidently/model/CloudWatchLogsDestinationConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evidently/model/S3DestinationConfig.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   */
  class UpdateProjectDataDeliveryRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API UpdateProjectDataDeliveryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProjectDataDelivery"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    /**
     * <p>A structure containing the CloudWatch Logs log group where you want to store
     * evaluation events.</p>
     */
    inline const CloudWatchLogsDestinationConfig& GetCloudWatchLogs() const{ return m_cloudWatchLogs; }

    /**
     * <p>A structure containing the CloudWatch Logs log group where you want to store
     * evaluation events.</p>
     */
    inline bool CloudWatchLogsHasBeenSet() const { return m_cloudWatchLogsHasBeenSet; }

    /**
     * <p>A structure containing the CloudWatch Logs log group where you want to store
     * evaluation events.</p>
     */
    inline void SetCloudWatchLogs(const CloudWatchLogsDestinationConfig& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = value; }

    /**
     * <p>A structure containing the CloudWatch Logs log group where you want to store
     * evaluation events.</p>
     */
    inline void SetCloudWatchLogs(CloudWatchLogsDestinationConfig&& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = std::move(value); }

    /**
     * <p>A structure containing the CloudWatch Logs log group where you want to store
     * evaluation events.</p>
     */
    inline UpdateProjectDataDeliveryRequest& WithCloudWatchLogs(const CloudWatchLogsDestinationConfig& value) { SetCloudWatchLogs(value); return *this;}

    /**
     * <p>A structure containing the CloudWatch Logs log group where you want to store
     * evaluation events.</p>
     */
    inline UpdateProjectDataDeliveryRequest& WithCloudWatchLogs(CloudWatchLogsDestinationConfig&& value) { SetCloudWatchLogs(std::move(value)); return *this;}


    /**
     * <p>The name or ARN of the project that you want to modify the data storage
     * options for.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }

    /**
     * <p>The name or ARN of the project that you want to modify the data storage
     * options for.</p>
     */
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }

    /**
     * <p>The name or ARN of the project that you want to modify the data storage
     * options for.</p>
     */
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }

    /**
     * <p>The name or ARN of the project that you want to modify the data storage
     * options for.</p>
     */
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }

    /**
     * <p>The name or ARN of the project that you want to modify the data storage
     * options for.</p>
     */
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }

    /**
     * <p>The name or ARN of the project that you want to modify the data storage
     * options for.</p>
     */
    inline UpdateProjectDataDeliveryRequest& WithProject(const Aws::String& value) { SetProject(value); return *this;}

    /**
     * <p>The name or ARN of the project that you want to modify the data storage
     * options for.</p>
     */
    inline UpdateProjectDataDeliveryRequest& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the project that you want to modify the data storage
     * options for.</p>
     */
    inline UpdateProjectDataDeliveryRequest& WithProject(const char* value) { SetProject(value); return *this;}


    /**
     * <p>A structure containing the S3 bucket name and bucket prefix where you want to
     * store evaluation events.</p>
     */
    inline const S3DestinationConfig& GetS3Destination() const{ return m_s3Destination; }

    /**
     * <p>A structure containing the S3 bucket name and bucket prefix where you want to
     * store evaluation events.</p>
     */
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }

    /**
     * <p>A structure containing the S3 bucket name and bucket prefix where you want to
     * store evaluation events.</p>
     */
    inline void SetS3Destination(const S3DestinationConfig& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = value; }

    /**
     * <p>A structure containing the S3 bucket name and bucket prefix where you want to
     * store evaluation events.</p>
     */
    inline void SetS3Destination(S3DestinationConfig&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::move(value); }

    /**
     * <p>A structure containing the S3 bucket name and bucket prefix where you want to
     * store evaluation events.</p>
     */
    inline UpdateProjectDataDeliveryRequest& WithS3Destination(const S3DestinationConfig& value) { SetS3Destination(value); return *this;}

    /**
     * <p>A structure containing the S3 bucket name and bucket prefix where you want to
     * store evaluation events.</p>
     */
    inline UpdateProjectDataDeliveryRequest& WithS3Destination(S3DestinationConfig&& value) { SetS3Destination(std::move(value)); return *this;}

  private:

    CloudWatchLogsDestinationConfig m_cloudWatchLogs;
    bool m_cloudWatchLogsHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;

    S3DestinationConfig m_s3Destination;
    bool m_s3DestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
