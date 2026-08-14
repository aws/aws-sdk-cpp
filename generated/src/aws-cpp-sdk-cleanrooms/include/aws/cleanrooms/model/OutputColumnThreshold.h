/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>Specifies the minimum number of distinct identities for an individual output
 * column. This value overrides the table-wide <code>minimumIdentityCount</code>
 * that you set in <code>AggregationThreshold</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/OutputColumnThreshold">AWS
 * API Reference</a></p>
 */
class OutputColumnThreshold {
 public:
  AWS_CLEANROOMS_API OutputColumnThreshold() = default;
  AWS_CLEANROOMS_API OutputColumnThreshold(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API OutputColumnThreshold& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the output column that the override applies to. You can specify
   * each column only once.</p>
   */
  inline const Aws::String& GetOutputColumnName() const { return m_outputColumnName; }
  inline bool OutputColumnNameHasBeenSet() const { return m_outputColumnNameHasBeenSet; }
  template <typename OutputColumnNameT = Aws::String>
  void SetOutputColumnName(OutputColumnNameT&& value) {
    m_outputColumnNameHasBeenSet = true;
    m_outputColumnName = std::forward<OutputColumnNameT>(value);
  }
  template <typename OutputColumnNameT = Aws::String>
  OutputColumnThreshold& WithOutputColumnName(OutputColumnNameT&& value) {
    SetOutputColumnName(std::forward<OutputColumnNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum number of distinct identities that each query output group must
   * represent for this column. Specify 0 to exempt the column from the threshold, or
   * a value of 2 or greater to enforce a threshold.</p>
   */
  inline int GetMinimumIdentityCount() const { return m_minimumIdentityCount; }
  inline bool MinimumIdentityCountHasBeenSet() const { return m_minimumIdentityCountHasBeenSet; }
  inline void SetMinimumIdentityCount(int value) {
    m_minimumIdentityCountHasBeenSet = true;
    m_minimumIdentityCount = value;
  }
  inline OutputColumnThreshold& WithMinimumIdentityCount(int value) {
    SetMinimumIdentityCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_outputColumnName;

  int m_minimumIdentityCount{0};
  bool m_outputColumnNameHasBeenSet = false;
  bool m_minimumIdentityCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
