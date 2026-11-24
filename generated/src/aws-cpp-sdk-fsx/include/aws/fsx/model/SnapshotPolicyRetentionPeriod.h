/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/SnapshotPolicyRetentionPeriodType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace FSx {
namespace Model {

/**
 * <p>The length of time that snapshots created by this schedule are locked. This
 * setting applies only to volumes that have snapshot locking
 * enabled.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SnapshotPolicyRetentionPeriod">AWS
 * API Reference</a></p>
 */
class SnapshotPolicyRetentionPeriod {
 public:
  AWS_FSX_API SnapshotPolicyRetentionPeriod() = default;
  AWS_FSX_API SnapshotPolicyRetentionPeriod(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API SnapshotPolicyRetentionPeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unit of time for the retention period. If you set it to
   * <code>INFINITE</code>, the snapshots are retained forever.</p>
   */
  inline SnapshotPolicyRetentionPeriodType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(SnapshotPolicyRetentionPeriodType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline SnapshotPolicyRetentionPeriod& WithType(SnapshotPolicyRetentionPeriodType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defines the amount of time for the retention period. You can't set a value
   * for <code>INFINITE</code>.</p>
   */
  inline int GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  inline void SetValue(int value) {
    m_valueHasBeenSet = true;
    m_value = value;
  }
  inline SnapshotPolicyRetentionPeriod& WithValue(int value) {
    SetValue(value);
    return *this;
  }
  ///@}
 private:
  SnapshotPolicyRetentionPeriodType m_type{SnapshotPolicyRetentionPeriodType::NOT_SET};

  int m_value{0};
  bool m_typeHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
