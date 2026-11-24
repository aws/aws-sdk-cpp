/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/SnapshotPolicyFilterName.h>

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
 * <p>A filter used to restrict the results of describe calls for Amazon FSx for
 * NetApp ONTAP snapshot policies.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SnapshotPolicyFilter">AWS
 * API Reference</a></p>
 */
class SnapshotPolicyFilter {
 public:
  AWS_FSX_API SnapshotPolicyFilter() = default;
  AWS_FSX_API SnapshotPolicyFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API SnapshotPolicyFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name for this filter.</p>
   */
  inline SnapshotPolicyFilterName GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  inline void SetName(SnapshotPolicyFilterName value) {
    m_nameHasBeenSet = true;
    m_name = value;
  }
  inline SnapshotPolicyFilter& WithName(SnapshotPolicyFilterName value) {
    SetName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The values of the filter. These are all the values for any of the applied
   * filters.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  SnapshotPolicyFilter& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  SnapshotPolicyFilter& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  SnapshotPolicyFilterName m_name{SnapshotPolicyFilterName::NOT_SET};

  Aws::Vector<Aws::String> m_values;
  bool m_nameHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
