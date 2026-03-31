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
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/MetadataConfig">AWS
 * API Reference</a></p>
 */
class MetadataConfig {
 public:
  AWS_CUSTOMERPROFILES_API MetadataConfig() = default;
  AWS_CUSTOMERPROFILES_API MetadataConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API MetadataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of metadata column names from your Items dataset to include in the
   * recommendation response.</p>
   */
  inline const Aws::Vector<Aws::String>& GetMetadataColumns() const { return m_metadataColumns; }
  inline bool MetadataColumnsHasBeenSet() const { return m_metadataColumnsHasBeenSet; }
  template <typename MetadataColumnsT = Aws::Vector<Aws::String>>
  void SetMetadataColumns(MetadataColumnsT&& value) {
    m_metadataColumnsHasBeenSet = true;
    m_metadataColumns = std::forward<MetadataColumnsT>(value);
  }
  template <typename MetadataColumnsT = Aws::Vector<Aws::String>>
  MetadataConfig& WithMetadataColumns(MetadataColumnsT&& value) {
    SetMetadataColumns(std::forward<MetadataColumnsT>(value));
    return *this;
  }
  template <typename MetadataColumnsT = Aws::String>
  MetadataConfig& AddMetadataColumns(MetadataColumnsT&& value) {
    m_metadataColumnsHasBeenSet = true;
    m_metadataColumns.emplace_back(std::forward<MetadataColumnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_metadataColumns;
  bool m_metadataColumnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
