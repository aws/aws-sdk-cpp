/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/DeadLetterQueueS3Configuration.h>
#include <aws/kinesis/model/S3TablesConfiguration.h>

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
 * <p>The configuration for delivery to streaming tables on Apache Iceberg.
 * Returned in <a>ChannelDescription</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/S3TablesDestinationDescription">AWS
 * API Reference</a></p>
 */
class S3TablesDestinationDescription {
 public:
  AWS_KINESIS_API S3TablesDestinationDescription() = default;
  AWS_KINESIS_API S3TablesDestinationDescription(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API S3TablesDestinationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  inline S3TablesDestinationDescription& WithDataFreshnessInSeconds(int value) {
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
  S3TablesDestinationDescription& WithDeadLetterQueueS3Configuration(DeadLetterQueueS3ConfigurationT&& value) {
    SetDeadLetterQueueS3Configuration(std::forward<DeadLetterQueueS3ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of streaming table configurations.</p>
   */
  inline const Aws::Vector<S3TablesConfiguration>& GetS3TablesConfigurationList() const { return m_s3TablesConfigurationList; }
  inline bool S3TablesConfigurationListHasBeenSet() const { return m_s3TablesConfigurationListHasBeenSet; }
  template <typename S3TablesConfigurationListT = Aws::Vector<S3TablesConfiguration>>
  void SetS3TablesConfigurationList(S3TablesConfigurationListT&& value) {
    m_s3TablesConfigurationListHasBeenSet = true;
    m_s3TablesConfigurationList = std::forward<S3TablesConfigurationListT>(value);
  }
  template <typename S3TablesConfigurationListT = Aws::Vector<S3TablesConfiguration>>
  S3TablesDestinationDescription& WithS3TablesConfigurationList(S3TablesConfigurationListT&& value) {
    SetS3TablesConfigurationList(std::forward<S3TablesConfigurationListT>(value));
    return *this;
  }
  template <typename S3TablesConfigurationListT = S3TablesConfiguration>
  S3TablesDestinationDescription& AddS3TablesConfigurationList(S3TablesConfigurationListT&& value) {
    m_s3TablesConfigurationListHasBeenSet = true;
    m_s3TablesConfigurationList.emplace_back(std::forward<S3TablesConfigurationListT>(value));
    return *this;
  }
  ///@}
 private:
  int m_dataFreshnessInSeconds{0};

  DeadLetterQueueS3Configuration m_deadLetterQueueS3Configuration;

  Aws::Vector<S3TablesConfiguration> m_s3TablesConfigurationList;
  bool m_dataFreshnessInSecondsHasBeenSet = false;
  bool m_deadLetterQueueS3ConfigurationHasBeenSet = false;
  bool m_s3TablesConfigurationListHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
