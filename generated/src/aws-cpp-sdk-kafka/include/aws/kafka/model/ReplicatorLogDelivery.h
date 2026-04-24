/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ReplicatorCloudWatchLogs.h>
#include <aws/kafka/model/ReplicatorFirehose.h>
#include <aws/kafka/model/ReplicatorS3.h>

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
 * <p>Configuration for replicator log delivery.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ReplicatorLogDelivery">AWS
 * API Reference</a></p>
 */
class ReplicatorLogDelivery {
 public:
  AWS_KAFKA_API ReplicatorLogDelivery() = default;
  AWS_KAFKA_API ReplicatorLogDelivery(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API ReplicatorLogDelivery& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for CloudWatch Logs delivery.</p>
   */
  inline const ReplicatorCloudWatchLogs& GetCloudWatchLogs() const { return m_cloudWatchLogs; }
  inline bool CloudWatchLogsHasBeenSet() const { return m_cloudWatchLogsHasBeenSet; }
  template <typename CloudWatchLogsT = ReplicatorCloudWatchLogs>
  void SetCloudWatchLogs(CloudWatchLogsT&& value) {
    m_cloudWatchLogsHasBeenSet = true;
    m_cloudWatchLogs = std::forward<CloudWatchLogsT>(value);
  }
  template <typename CloudWatchLogsT = ReplicatorCloudWatchLogs>
  ReplicatorLogDelivery& WithCloudWatchLogs(CloudWatchLogsT&& value) {
    SetCloudWatchLogs(std::forward<CloudWatchLogsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for Firehose delivery.</p>
   */
  inline const ReplicatorFirehose& GetFirehose() const { return m_firehose; }
  inline bool FirehoseHasBeenSet() const { return m_firehoseHasBeenSet; }
  template <typename FirehoseT = ReplicatorFirehose>
  void SetFirehose(FirehoseT&& value) {
    m_firehoseHasBeenSet = true;
    m_firehose = std::forward<FirehoseT>(value);
  }
  template <typename FirehoseT = ReplicatorFirehose>
  ReplicatorLogDelivery& WithFirehose(FirehoseT&& value) {
    SetFirehose(std::forward<FirehoseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for S3 delivery.</p>
   */
  inline const ReplicatorS3& GetS3() const { return m_s3; }
  inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
  template <typename S3T = ReplicatorS3>
  void SetS3(S3T&& value) {
    m_s3HasBeenSet = true;
    m_s3 = std::forward<S3T>(value);
  }
  template <typename S3T = ReplicatorS3>
  ReplicatorLogDelivery& WithS3(S3T&& value) {
    SetS3(std::forward<S3T>(value));
    return *this;
  }
  ///@}
 private:
  ReplicatorCloudWatchLogs m_cloudWatchLogs;

  ReplicatorFirehose m_firehose;

  ReplicatorS3 m_s3;
  bool m_cloudWatchLogsHasBeenSet = false;
  bool m_firehoseHasBeenSet = false;
  bool m_s3HasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
