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

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kafka {
namespace Model {

/**
 * <p>Configuration for the destinations to which the channel publishes operational
 * logs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ChannelLoggingInfo">AWS
 * API Reference</a></p>
 */
class ChannelLoggingInfo {
 public:
  AWS_KAFKA_API ChannelLoggingInfo() = default;
  AWS_KAFKA_API ChannelLoggingInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API ChannelLoggingInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Details of the CloudWatch Logs destination for Channel logs.</p>
   */
  inline const CloudWatchLogs& GetCloudWatchLogs() const { return m_cloudWatchLogs; }
  inline bool CloudWatchLogsHasBeenSet() const { return m_cloudWatchLogsHasBeenSet; }
  template <typename CloudWatchLogsT = CloudWatchLogs>
  void SetCloudWatchLogs(CloudWatchLogsT&& value) {
    m_cloudWatchLogsHasBeenSet = true;
    m_cloudWatchLogs = std::forward<CloudWatchLogsT>(value);
  }
  template <typename CloudWatchLogsT = CloudWatchLogs>
  ChannelLoggingInfo& WithCloudWatchLogs(CloudWatchLogsT&& value) {
    SetCloudWatchLogs(std::forward<CloudWatchLogsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details of the Kinesis Data Firehose delivery stream that is the destination
   * for Channel logs.</p>
   */
  inline const Firehose& GetFirehose() const { return m_firehose; }
  inline bool FirehoseHasBeenSet() const { return m_firehoseHasBeenSet; }
  template <typename FirehoseT = Firehose>
  void SetFirehose(FirehoseT&& value) {
    m_firehoseHasBeenSet = true;
    m_firehose = std::forward<FirehoseT>(value);
  }
  template <typename FirehoseT = Firehose>
  ChannelLoggingInfo& WithFirehose(FirehoseT&& value) {
    SetFirehose(std::forward<FirehoseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details of the Amazon S3 destination for Channel logs.</p>
   */
  inline const S3& GetS3() const { return m_s3; }
  inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
  template <typename S3T = S3>
  void SetS3(S3T&& value) {
    m_s3HasBeenSet = true;
    m_s3 = std::forward<S3T>(value);
  }
  template <typename S3T = S3>
  ChannelLoggingInfo& WithS3(S3T&& value) {
    SetS3(std::forward<S3T>(value));
    return *this;
  }
  ///@}
 private:
  CloudWatchLogs m_cloudWatchLogs;

  Firehose m_firehose;

  S3 m_s3;
  bool m_cloudWatchLogsHasBeenSet = false;
  bool m_firehoseHasBeenSet = false;
  bool m_s3HasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
