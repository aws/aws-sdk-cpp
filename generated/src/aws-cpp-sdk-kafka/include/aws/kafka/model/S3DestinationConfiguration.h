/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/DeadLetterQueueS3.h>
#include <aws/kafka/model/S3Storage.h>

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
 * <p>Configuration of an Amazon S3 destination for a channel.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/S3DestinationConfiguration">AWS
 * API Reference</a></p>
 */
class S3DestinationConfiguration {
 public:
  AWS_KAFKA_API S3DestinationConfiguration() = default;
  AWS_KAFKA_API S3DestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API S3DestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum time, in seconds, that records buffer in MSK before being flushed
   * to the destination. Allowed range: 300 to 900. Default: 600.</p>
   */
  inline int GetDataFreshnessInSeconds() const { return m_dataFreshnessInSeconds; }
  inline bool DataFreshnessInSecondsHasBeenSet() const { return m_dataFreshnessInSecondsHasBeenSet; }
  inline void SetDataFreshnessInSeconds(int value) {
    m_dataFreshnessInSecondsHasBeenSet = true;
    m_dataFreshnessInSeconds = value;
  }
  inline S3DestinationConfiguration& WithDataFreshnessInSeconds(int value) {
    SetDataFreshnessInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 bucket and prefix where MSK writes records that fail to
   * deliver.</p>
   */
  inline const DeadLetterQueueS3& GetDeadLetterQueueS3() const { return m_deadLetterQueueS3; }
  inline bool DeadLetterQueueS3HasBeenSet() const { return m_deadLetterQueueS3HasBeenSet; }
  template <typename DeadLetterQueueS3T = DeadLetterQueueS3>
  void SetDeadLetterQueueS3(DeadLetterQueueS3T&& value) {
    m_deadLetterQueueS3HasBeenSet = true;
    m_deadLetterQueueS3 = std::forward<DeadLetterQueueS3T>(value);
  }
  template <typename DeadLetterQueueS3T = DeadLetterQueueS3>
  S3DestinationConfiguration& WithDeadLetterQueueS3(DeadLetterQueueS3T&& value) {
    SetDeadLetterQueueS3(std::forward<DeadLetterQueueS3T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that MSK assumes to write to
   * the destination Amazon S3 bucket and the dead-letter bucket.</p>
   */
  inline const Aws::String& GetServiceExecutionRoleArn() const { return m_serviceExecutionRoleArn; }
  inline bool ServiceExecutionRoleArnHasBeenSet() const { return m_serviceExecutionRoleArnHasBeenSet; }
  template <typename ServiceExecutionRoleArnT = Aws::String>
  void SetServiceExecutionRoleArn(ServiceExecutionRoleArnT&& value) {
    m_serviceExecutionRoleArnHasBeenSet = true;
    m_serviceExecutionRoleArn = std::forward<ServiceExecutionRoleArnT>(value);
  }
  template <typename ServiceExecutionRoleArnT = Aws::String>
  S3DestinationConfiguration& WithServiceExecutionRoleArn(ServiceExecutionRoleArnT&& value) {
    SetServiceExecutionRoleArn(std::forward<ServiceExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 bucket, prefix, and storage class for delivered records.</p>
   */
  inline const S3Storage& GetStorage() const { return m_storage; }
  inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }
  template <typename StorageT = S3Storage>
  void SetStorage(StorageT&& value) {
    m_storageHasBeenSet = true;
    m_storage = std::forward<StorageT>(value);
  }
  template <typename StorageT = S3Storage>
  S3DestinationConfiguration& WithStorage(StorageT&& value) {
    SetStorage(std::forward<StorageT>(value));
    return *this;
  }
  ///@}
 private:
  int m_dataFreshnessInSeconds{0};

  DeadLetterQueueS3 m_deadLetterQueueS3;

  Aws::String m_serviceExecutionRoleArn;

  S3Storage m_storage;
  bool m_dataFreshnessInSecondsHasBeenSet = false;
  bool m_deadLetterQueueS3HasBeenSet = false;
  bool m_serviceExecutionRoleArnHasBeenSet = false;
  bool m_storageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
