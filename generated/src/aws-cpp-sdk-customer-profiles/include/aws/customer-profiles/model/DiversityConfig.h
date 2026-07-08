/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/DiversityColumn.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {

/**
 * <p>Configuration that controls diversity of recommendation results by capping
 * the representation of specified item columns.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DiversityConfig">AWS
 * API Reference</a></p>
 */
class DiversityConfig {
 public:
  AWS_CUSTOMERPROFILES_API DiversityConfig() = default;
  AWS_CUSTOMERPROFILES_API DiversityConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API DiversityConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of up to two diversity columns. Each column defines a cap on the
   * number or percentage of recommended items that share the same value for that
   * column.</p>
   */
  inline const Aws::Vector<DiversityColumn>& GetDiversityColumns() const { return m_diversityColumns; }
  inline bool DiversityColumnsHasBeenSet() const { return m_diversityColumnsHasBeenSet; }
  template <typename DiversityColumnsT = Aws::Vector<DiversityColumn>>
  void SetDiversityColumns(DiversityColumnsT&& value) {
    m_diversityColumnsHasBeenSet = true;
    m_diversityColumns = std::forward<DiversityColumnsT>(value);
  }
  template <typename DiversityColumnsT = Aws::Vector<DiversityColumn>>
  DiversityConfig& WithDiversityColumns(DiversityColumnsT&& value) {
    SetDiversityColumns(std::forward<DiversityColumnsT>(value));
    return *this;
  }
  template <typename DiversityColumnsT = DiversityColumn>
  DiversityConfig& AddDiversityColumns(DiversityColumnsT&& value) {
    m_diversityColumnsHasBeenSet = true;
    m_diversityColumns.emplace_back(std::forward<DiversityColumnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<DiversityColumn> m_diversityColumns;
  bool m_diversityColumnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
