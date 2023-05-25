/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/CloudWatchLogsLogDelivery.h>
#include <aws/kafkaconnect/model/FirehoseLogDelivery.h>
#include <aws/kafkaconnect/model/S3LogDelivery.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/WorkerLogDelivery">AWS
   * API Reference</a></p>
   */
  class WorkerLogDelivery
  {
  public:
    AWS_KAFKACONNECT_API WorkerLogDelivery();
    AWS_KAFKACONNECT_API WorkerLogDelivery(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API WorkerLogDelivery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about delivering logs to Amazon CloudWatch Logs.</p>
     */
    inline const CloudWatchLogsLogDelivery& GetCloudWatchLogs() const{ return m_cloudWatchLogs; }

    /**
     * <p>Details about delivering logs to Amazon CloudWatch Logs.</p>
     */
    inline bool CloudWatchLogsHasBeenSet() const { return m_cloudWatchLogsHasBeenSet; }

    /**
     * <p>Details about delivering logs to Amazon CloudWatch Logs.</p>
     */
    inline void SetCloudWatchLogs(const CloudWatchLogsLogDelivery& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = value; }

    /**
     * <p>Details about delivering logs to Amazon CloudWatch Logs.</p>
     */
    inline void SetCloudWatchLogs(CloudWatchLogsLogDelivery&& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = std::move(value); }

    /**
     * <p>Details about delivering logs to Amazon CloudWatch Logs.</p>
     */
    inline WorkerLogDelivery& WithCloudWatchLogs(const CloudWatchLogsLogDelivery& value) { SetCloudWatchLogs(value); return *this;}

    /**
     * <p>Details about delivering logs to Amazon CloudWatch Logs.</p>
     */
    inline WorkerLogDelivery& WithCloudWatchLogs(CloudWatchLogsLogDelivery&& value) { SetCloudWatchLogs(std::move(value)); return *this;}


    /**
     * <p>Details about delivering logs to Amazon Kinesis Data Firehose.</p>
     */
    inline const FirehoseLogDelivery& GetFirehose() const{ return m_firehose; }

    /**
     * <p>Details about delivering logs to Amazon Kinesis Data Firehose.</p>
     */
    inline bool FirehoseHasBeenSet() const { return m_firehoseHasBeenSet; }

    /**
     * <p>Details about delivering logs to Amazon Kinesis Data Firehose.</p>
     */
    inline void SetFirehose(const FirehoseLogDelivery& value) { m_firehoseHasBeenSet = true; m_firehose = value; }

    /**
     * <p>Details about delivering logs to Amazon Kinesis Data Firehose.</p>
     */
    inline void SetFirehose(FirehoseLogDelivery&& value) { m_firehoseHasBeenSet = true; m_firehose = std::move(value); }

    /**
     * <p>Details about delivering logs to Amazon Kinesis Data Firehose.</p>
     */
    inline WorkerLogDelivery& WithFirehose(const FirehoseLogDelivery& value) { SetFirehose(value); return *this;}

    /**
     * <p>Details about delivering logs to Amazon Kinesis Data Firehose.</p>
     */
    inline WorkerLogDelivery& WithFirehose(FirehoseLogDelivery&& value) { SetFirehose(std::move(value)); return *this;}


    /**
     * <p>Details about delivering logs to Amazon S3.</p>
     */
    inline const S3LogDelivery& GetS3() const{ return m_s3; }

    /**
     * <p>Details about delivering logs to Amazon S3.</p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    /**
     * <p>Details about delivering logs to Amazon S3.</p>
     */
    inline void SetS3(const S3LogDelivery& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p>Details about delivering logs to Amazon S3.</p>
     */
    inline void SetS3(S3LogDelivery&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p>Details about delivering logs to Amazon S3.</p>
     */
    inline WorkerLogDelivery& WithS3(const S3LogDelivery& value) { SetS3(value); return *this;}

    /**
     * <p>Details about delivering logs to Amazon S3.</p>
     */
    inline WorkerLogDelivery& WithS3(S3LogDelivery&& value) { SetS3(std::move(value)); return *this;}

  private:

    CloudWatchLogsLogDelivery m_cloudWatchLogs;
    bool m_cloudWatchLogsHasBeenSet = false;

    FirehoseLogDelivery m_firehose;
    bool m_firehoseHasBeenSet = false;

    S3LogDelivery m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
