/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

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
 * <p>Configuration for metadata to include in recommendation
 * responses.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/RecommendationMetadata">AWS
 * API Reference</a></p>
 */
class RecommendationMetadata {
 public:
  AWS_CUSTOMERPROFILES_API RecommendationMetadata() = default;
  AWS_CUSTOMERPROFILES_API RecommendationMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API RecommendationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of metadata column names from your Items dataset to include in the
   * recommendation response.</p>
   */
  inline const Aws::Vector<Aws::String>& GetColumns() const { return m_columns; }
  inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }
  template <typename ColumnsT = Aws::Vector<Aws::String>>
  void SetColumns(ColumnsT&& value) {
    m_columnsHasBeenSet = true;
    m_columns = std::forward<ColumnsT>(value);
  }
  template <typename ColumnsT = Aws::Vector<Aws::String>>
  RecommendationMetadata& WithColumns(ColumnsT&& value) {
    SetColumns(std::forward<ColumnsT>(value));
    return *this;
  }
  template <typename ColumnsT = Aws::String>
  RecommendationMetadata& AddColumns(ColumnsT&& value) {
    m_columnsHasBeenSet = true;
    m_columns.emplace_back(std::forward<ColumnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_columns;
  bool m_columnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
