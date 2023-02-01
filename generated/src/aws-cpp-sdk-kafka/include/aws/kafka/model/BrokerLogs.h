/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/CloudWatchLogs.h>
#include <aws/kafka/model/Firehose.h>
#include <aws/kafka/model/S3.h>
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
namespace Kafka
{
namespace Model
{

  class BrokerLogs
  {
  public:
    AWS_KAFKA_API BrokerLogs();
    AWS_KAFKA_API BrokerLogs(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API BrokerLogs& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const CloudWatchLogs& GetCloudWatchLogs() const{ return m_cloudWatchLogs; }

    
    inline bool CloudWatchLogsHasBeenSet() const { return m_cloudWatchLogsHasBeenSet; }

    
    inline void SetCloudWatchLogs(const CloudWatchLogs& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = value; }

    
    inline void SetCloudWatchLogs(CloudWatchLogs&& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = std::move(value); }

    
    inline BrokerLogs& WithCloudWatchLogs(const CloudWatchLogs& value) { SetCloudWatchLogs(value); return *this;}

    
    inline BrokerLogs& WithCloudWatchLogs(CloudWatchLogs&& value) { SetCloudWatchLogs(std::move(value)); return *this;}


    
    inline const Firehose& GetFirehose() const{ return m_firehose; }

    
    inline bool FirehoseHasBeenSet() const { return m_firehoseHasBeenSet; }

    
    inline void SetFirehose(const Firehose& value) { m_firehoseHasBeenSet = true; m_firehose = value; }

    
    inline void SetFirehose(Firehose&& value) { m_firehoseHasBeenSet = true; m_firehose = std::move(value); }

    
    inline BrokerLogs& WithFirehose(const Firehose& value) { SetFirehose(value); return *this;}

    
    inline BrokerLogs& WithFirehose(Firehose&& value) { SetFirehose(std::move(value)); return *this;}


    
    inline const S3& GetS3() const{ return m_s3; }

    
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    
    inline void SetS3(const S3& value) { m_s3HasBeenSet = true; m_s3 = value; }

    
    inline void SetS3(S3&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    
    inline BrokerLogs& WithS3(const S3& value) { SetS3(value); return *this;}

    
    inline BrokerLogs& WithS3(S3&& value) { SetS3(std::move(value)); return *this;}

  private:

    CloudWatchLogs m_cloudWatchLogs;
    bool m_cloudWatchLogsHasBeenSet = false;

    Firehose m_firehose;
    bool m_firehoseHasBeenSet = false;

    S3 m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
