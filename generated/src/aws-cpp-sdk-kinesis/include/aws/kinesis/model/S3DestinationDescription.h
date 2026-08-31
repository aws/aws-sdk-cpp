/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/DeadLetterQueueS3Configuration.h>
#include <aws/kinesis/model/S3StorageConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kinesis {
namespace Model {

/**
 * <p>The configuration for delivery to a general purpose Amazon S3 bucket.
 * Returned in <a>ChannelDescription</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/S3DestinationDescription">AWS
 * API Reference</a></p>
 */
class S3DestinationDescription {
 public:
  AWS_KINESIS_API S3DestinationDescription() = default;
  AWS_KINESIS_API S3DestinationDescription(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API S3DestinationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum age, in seconds, of undelivered data.</p>
   */
  inline int GetDataFreshnessInSeconds() const { return m_dataFreshnessInSeconds; }
  inline bool DataFreshnessInSecondsHasBeenSet() const { return m_dataFreshnessInSecondsHasBeenSet; }
  inline void SetDataFreshnessInSeconds(int value) {
    m_dataFreshnessInSecondsHasBeenSet = true;
    m_dataFreshnessInSeconds = value;
  }
  inline S3DestinationDescription& WithDataFreshnessInSeconds(int value) {
    SetDataFreshnessInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The dead-letter queue configuration for records that cannot be delivered.</p>
   */
  inline const DeadLetterQueueS3Configuration& GetDeadLetterQueueS3Configuration() const { return m_deadLetterQueueS3Configuration; }
  inline bool DeadLetterQueueS3ConfigurationHasBeenSet() const { return m_deadLetterQueueS3ConfigurationHasBeenSet; }
  template <typename DeadLetterQueueS3ConfigurationT = DeadLetterQueueS3Configuration>
  void SetDeadLetterQueueS3Configuration(DeadLetterQueueS3ConfigurationT&& value) {
    m_deadLetterQueueS3ConfigurationHasBeenSet = true;
    m_deadLetterQueueS3Configuration = std::forward<DeadLetterQueueS3ConfigurationT>(value);
  }
  template <typename DeadLetterQueueS3ConfigurationT = DeadLetterQueueS3Configuration>
  S3DestinationDescription& WithDeadLetterQueueS3Configuration(DeadLetterQueueS3ConfigurationT&& value) {
    SetDeadLetterQueueS3Configuration(std::forward<DeadLetterQueueS3ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 storage configuration for the channel.</p>
   */
  inline const S3StorageConfiguration& GetStorageConfiguration() const { return m_storageConfiguration; }
  inline bool StorageConfigurationHasBeenSet() const { return m_storageConfigurationHasBeenSet; }
  template <typename StorageConfigurationT = S3StorageConfiguration>
  void SetStorageConfiguration(StorageConfigurationT&& value) {
    m_storageConfigurationHasBeenSet = true;
    m_storageConfiguration = std::forward<StorageConfigurationT>(value);
  }
  template <typename StorageConfigurationT = S3StorageConfiguration>
  S3DestinationDescription& WithStorageConfiguration(StorageConfigurationT&& value) {
    SetStorageConfiguration(std::forward<StorageConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  int m_dataFreshnessInSeconds{0};

  DeadLetterQueueS3Configuration m_deadLetterQueueS3Configuration;

  S3StorageConfiguration m_storageConfiguration;
  bool m_dataFreshnessInSecondsHasBeenSet = false;
  bool m_deadLetterQueueS3ConfigurationHasBeenSet = false;
  bool m_storageConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
