/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>

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
 * <p>Update payload for an Apache Iceberg destination.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/IcebergDestinationUpdate">AWS
 * API Reference</a></p>
 */
class IcebergDestinationUpdate {
 public:
  AWS_KAFKA_API IcebergDestinationUpdate() = default;
  AWS_KAFKA_API IcebergDestinationUpdate(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API IcebergDestinationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum time, in seconds, that records buffer in MSK before being flushed
   * to the destination. Allowed range: 300 to 900.</p>
   */
  inline int GetDataFreshnessInSeconds() const { return m_dataFreshnessInSeconds; }
  inline bool DataFreshnessInSecondsHasBeenSet() const { return m_dataFreshnessInSecondsHasBeenSet; }
  inline void SetDataFreshnessInSeconds(int value) {
    m_dataFreshnessInSecondsHasBeenSet = true;
    m_dataFreshnessInSeconds = value;
  }
  inline IcebergDestinationUpdate& WithDataFreshnessInSeconds(int value) {
    SetDataFreshnessInSeconds(value);
    return *this;
  }
  ///@}
 private:
  int m_dataFreshnessInSeconds{0};
  bool m_dataFreshnessInSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
