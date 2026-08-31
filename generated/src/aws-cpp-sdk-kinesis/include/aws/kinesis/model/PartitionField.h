/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/PartitionTransform.h>

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
 * <p>Specifies a single partition field.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/PartitionField">AWS
 * API Reference</a></p>
 */
class PartitionField {
 public:
  AWS_KINESIS_API PartitionField() = default;
  AWS_KINESIS_API PartitionField(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API PartitionField& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The partition transform to apply. The only valid value is
   * <code>TIME_HOUR</code>.</p>
   */
  inline PartitionTransform GetTransform() const { return m_transform; }
  inline bool TransformHasBeenSet() const { return m_transformHasBeenSet; }
  inline void SetTransform(PartitionTransform value) {
    m_transformHasBeenSet = true;
    m_transform = value;
  }
  inline PartitionField& WithTransform(PartitionTransform value) {
    SetTransform(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the source column used for partitioning. This column must be of
   * the <code>timestamptz</code> type.</p>
   */
  inline const Aws::String& GetSourceName() const { return m_sourceName; }
  inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
  template <typename SourceNameT = Aws::String>
  void SetSourceName(SourceNameT&& value) {
    m_sourceNameHasBeenSet = true;
    m_sourceName = std::forward<SourceNameT>(value);
  }
  template <typename SourceNameT = Aws::String>
  PartitionField& WithSourceName(SourceNameT&& value) {
    SetSourceName(std::forward<SourceNameT>(value));
    return *this;
  }
  ///@}
 private:
  PartitionTransform m_transform{PartitionTransform::NOT_SET};

  Aws::String m_sourceName;
  bool m_transformHasBeenSet = false;
  bool m_sourceNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
