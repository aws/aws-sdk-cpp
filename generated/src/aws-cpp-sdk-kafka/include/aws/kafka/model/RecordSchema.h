/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>

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
 * <p>Schema configuration that controls how Apache Kafka record values are
 * validated.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/RecordSchema">AWS
 * API Reference</a></p>
 */
class RecordSchema {
 public:
  AWS_KAFKA_API RecordSchema() = default;
  AWS_KAFKA_API RecordSchema(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API RecordSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the AWS Glue Schema Registry schema (not
   * registry) used to validate records for the destination Apache Iceberg table.</p>
   */
  inline const Aws::String& GetGsrArn() const { return m_gsrArn; }
  inline bool GsrArnHasBeenSet() const { return m_gsrArnHasBeenSet; }
  template <typename GsrArnT = Aws::String>
  void SetGsrArn(GsrArnT&& value) {
    m_gsrArnHasBeenSet = true;
    m_gsrArn = std::forward<GsrArnT>(value);
  }
  template <typename GsrArnT = Aws::String>
  RecordSchema& WithGsrArn(GsrArnT&& value) {
    SetGsrArn(std::forward<GsrArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_gsrArn;
  bool m_gsrArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
