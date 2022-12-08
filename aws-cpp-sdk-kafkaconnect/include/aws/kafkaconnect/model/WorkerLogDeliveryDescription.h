/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/CloudWatchLogsLogDeliveryDescription.h>
#include <aws/kafkaconnect/model/FirehoseLogDeliveryDescription.h>
#include <aws/kafkaconnect/model/S3LogDeliveryDescription.h>
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
namespace KafkaConnect
{
namespace Model
{

  /**
   * <p>Workers can send worker logs to different destination types. This
   * configuration specifies the details of these destinations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/WorkerLogDeliveryDescription">AWS
   * API Reference</a></p>
   */
  class WorkerLogDeliveryDescription
  {
  public:
    AWS_KAFKACONNECT_API WorkerLogDeliveryDescription();
    AWS_KAFKACONNECT_API WorkerLogDeliveryDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API WorkerLogDeliveryDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about delivering logs to Amazon CloudWatch Logs.</p>
     */
    inline const CloudWatchLogsLogDeliveryDescription& GetCloudWatchLogs() const{ return m_cloudWatchLogs; }

    /**
     * <p>Details about delivering logs to Amazon CloudWatch Logs.</p>
     */
    inline bool CloudWatchLogsHasBeenSet() const { return m_cloudWatchLogsHasBeenSet; }

    /**
     * <p>Details about delivering logs to Amazon CloudWatch Logs.</p>
     */
    inline void SetCloudWatchLogs(const CloudWatchLogsLogDeliveryDescription& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = value; }

    /**
     * <p>Details about delivering logs to Amazon CloudWatch Logs.</p>
     */
    inline void SetCloudWatchLogs(CloudWatchLogsLogDeliveryDescription&& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = std::move(value); }

    /**
     * <p>Details about delivering logs to Amazon CloudWatch Logs.</p>
     */
    inline WorkerLogDeliveryDescription& WithCloudWatchLogs(const CloudWatchLogsLogDeliveryDescription& value) { SetCloudWatchLogs(value); return *this;}

    /**
     * <p>Details about delivering logs to Amazon CloudWatch Logs.</p>
     */
    inline WorkerLogDeliveryDescription& WithCloudWatchLogs(CloudWatchLogsLogDeliveryDescription&& value) { SetCloudWatchLogs(std::move(value)); return *this;}


    /**
     * <p>Details about delivering logs to Amazon Kinesis Data Firehose.</p>
     */
    inline const FirehoseLogDeliveryDescription& GetFirehose() const{ return m_firehose; }

    /**
     * <p>Details about delivering logs to Amazon Kinesis Data Firehose.</p>
     */
    inline bool FirehoseHasBeenSet() const { return m_firehoseHasBeenSet; }

    /**
     * <p>Details about delivering logs to Amazon Kinesis Data Firehose.</p>
     */
    inline void SetFirehose(const FirehoseLogDeliveryDescription& value) { m_firehoseHasBeenSet = true; m_firehose = value; }

    /**
     * <p>Details about delivering logs to Amazon Kinesis Data Firehose.</p>
     */
    inline void SetFirehose(FirehoseLogDeliveryDescription&& value) { m_firehoseHasBeenSet = true; m_firehose = std::move(value); }

    /**
     * <p>Details about delivering logs to Amazon Kinesis Data Firehose.</p>
     */
    inline WorkerLogDeliveryDescription& WithFirehose(const FirehoseLogDeliveryDescription& value) { SetFirehose(value); return *this;}

    /**
     * <p>Details about delivering logs to Amazon Kinesis Data Firehose.</p>
     */
    inline WorkerLogDeliveryDescription& WithFirehose(FirehoseLogDeliveryDescription&& value) { SetFirehose(std::move(value)); return *this;}


    /**
     * <p>Details about delivering logs to Amazon S3.</p>
     */
    inline const S3LogDeliveryDescription& GetS3() const{ return m_s3; }

    /**
     * <p>Details about delivering logs to Amazon S3.</p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    /**
     * <p>Details about delivering logs to Amazon S3.</p>
     */
    inline void SetS3(const S3LogDeliveryDescription& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p>Details about delivering logs to Amazon S3.</p>
     */
    inline void SetS3(S3LogDeliveryDescription&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p>Details about delivering logs to Amazon S3.</p>
     */
    inline WorkerLogDeliveryDescription& WithS3(const S3LogDeliveryDescription& value) { SetS3(value); return *this;}

    /**
     * <p>Details about delivering logs to Amazon S3.</p>
     */
    inline WorkerLogDeliveryDescription& WithS3(S3LogDeliveryDescription&& value) { SetS3(std::move(value)); return *this;}

  private:

    CloudWatchLogsLogDeliveryDescription m_cloudWatchLogs;
    bool m_cloudWatchLogsHasBeenSet = false;

    FirehoseLogDeliveryDescription m_firehose;
    bool m_firehoseHasBeenSet = false;

    S3LogDeliveryDescription m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
