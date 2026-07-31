/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ValueConverter.h>

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
 * <p>Configuration that controls how Apache Kafka record values are deserialized
 * for the destination.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/RecordConverter">AWS
 * API Reference</a></p>
 */
class RecordConverter {
 public:
  AWS_KAFKA_API RecordConverter() = default;
  AWS_KAFKA_API RecordConverter(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API RecordConverter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The deserialization format applied to Apache Kafka record values.</p>
   */
  inline ValueConverter GetValueConverter() const { return m_valueConverter; }
  inline bool ValueConverterHasBeenSet() const { return m_valueConverterHasBeenSet; }
  inline void SetValueConverter(ValueConverter value) {
    m_valueConverterHasBeenSet = true;
    m_valueConverter = value;
  }
  inline RecordConverter& WithValueConverter(ValueConverter value) {
    SetValueConverter(value);
    return *this;
  }
  ///@}
 private:
  ValueConverter m_valueConverter{ValueConverter::NOT_SET};
  bool m_valueConverterHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
