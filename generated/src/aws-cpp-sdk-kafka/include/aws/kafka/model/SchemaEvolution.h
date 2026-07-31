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
 * <p>Configuration controlling whether the Apache Iceberg destination table's
 * schema is evolved as incoming records change.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/SchemaEvolution">AWS
 * API Reference</a></p>
 */
class SchemaEvolution {
 public:
  AWS_KAFKA_API SchemaEvolution() = default;
  AWS_KAFKA_API SchemaEvolution(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API SchemaEvolution& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether to allow MSK to evolve the destination table's schema. Must be false
   * for the current release.</p>
   */
  inline bool GetEnableSchemaEvolution() const { return m_enableSchemaEvolution; }
  inline bool EnableSchemaEvolutionHasBeenSet() const { return m_enableSchemaEvolutionHasBeenSet; }
  inline void SetEnableSchemaEvolution(bool value) {
    m_enableSchemaEvolutionHasBeenSet = true;
    m_enableSchemaEvolution = value;
  }
  inline SchemaEvolution& WithEnableSchemaEvolution(bool value) {
    SetEnableSchemaEvolution(value);
    return *this;
  }
  ///@}
 private:
  bool m_enableSchemaEvolution{false};
  bool m_enableSchemaEvolutionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
