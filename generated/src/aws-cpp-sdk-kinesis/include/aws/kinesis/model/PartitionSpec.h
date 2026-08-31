/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/PartitionField.h>

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
 * <p>Specifies how the destination table is partitioned.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/PartitionSpec">AWS
 * API Reference</a></p>
 */
class PartitionSpec {
 public:
  AWS_KINESIS_API PartitionSpec() = default;
  AWS_KINESIS_API PartitionSpec(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API PartitionSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of partition fields.</p>
   */
  inline const Aws::Vector<PartitionField>& GetPartitionFields() const { return m_partitionFields; }
  inline bool PartitionFieldsHasBeenSet() const { return m_partitionFieldsHasBeenSet; }
  template <typename PartitionFieldsT = Aws::Vector<PartitionField>>
  void SetPartitionFields(PartitionFieldsT&& value) {
    m_partitionFieldsHasBeenSet = true;
    m_partitionFields = std::forward<PartitionFieldsT>(value);
  }
  template <typename PartitionFieldsT = Aws::Vector<PartitionField>>
  PartitionSpec& WithPartitionFields(PartitionFieldsT&& value) {
    SetPartitionFields(std::forward<PartitionFieldsT>(value));
    return *this;
  }
  template <typename PartitionFieldsT = PartitionField>
  PartitionSpec& AddPartitionFields(PartitionFieldsT&& value) {
    m_partitionFieldsHasBeenSet = true;
    m_partitionFields.emplace_back(std::forward<PartitionFieldsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PartitionField> m_partitionFields;
  bool m_partitionFieldsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
