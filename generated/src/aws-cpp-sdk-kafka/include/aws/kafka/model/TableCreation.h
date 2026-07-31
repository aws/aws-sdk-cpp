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
 * <p>Configuration controlling whether MSK creates the destination Apache Iceberg
 * table if it does not already exist.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/TableCreation">AWS
 * API Reference</a></p>
 */
class TableCreation {
 public:
  AWS_KAFKA_API TableCreation() = default;
  AWS_KAFKA_API TableCreation(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API TableCreation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether MSK creates the destination table on the customer's behalf. Must be
   * true for the current release.</p>
   */
  inline bool GetEnableTableCreation() const { return m_enableTableCreation; }
  inline bool EnableTableCreationHasBeenSet() const { return m_enableTableCreationHasBeenSet; }
  inline void SetEnableTableCreation(bool value) {
    m_enableTableCreationHasBeenSet = true;
    m_enableTableCreation = value;
  }
  inline TableCreation& WithEnableTableCreation(bool value) {
    SetEnableTableCreation(value);
    return *this;
  }
  ///@}
 private:
  bool m_enableTableCreation{false};
  bool m_enableTableCreationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
