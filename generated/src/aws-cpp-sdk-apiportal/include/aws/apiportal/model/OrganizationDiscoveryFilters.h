/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/DiscoveryExclusionFilters.h>
#include <aws/apiportal/model/DiscoveryInclusionFilters.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {

/**
 * <p>Limits organization-scoped discovery. Set exactly one member:
 * <code>inclusionFilters</code> to discover only the matching targets, or
 * <code>exclusionFilters</code> to discover everything except them.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/OrganizationDiscoveryFilters">AWS
 * API Reference</a></p>
 */
class OrganizationDiscoveryFilters {
 public:
  AWS_APIPORTAL_API OrganizationDiscoveryFilters() = default;
  AWS_APIPORTAL_API OrganizationDiscoveryFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API OrganizationDiscoveryFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const DiscoveryExclusionFilters& GetExclusionFilters() const { return m_exclusionFilters; }
  inline bool ExclusionFiltersHasBeenSet() const { return m_exclusionFiltersHasBeenSet; }
  template <typename ExclusionFiltersT = DiscoveryExclusionFilters>
  void SetExclusionFilters(ExclusionFiltersT&& value) {
    m_exclusionFiltersHasBeenSet = true;
    m_exclusionFilters = std::forward<ExclusionFiltersT>(value);
  }
  template <typename ExclusionFiltersT = DiscoveryExclusionFilters>
  OrganizationDiscoveryFilters& WithExclusionFilters(ExclusionFiltersT&& value) {
    SetExclusionFilters(std::forward<ExclusionFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const DiscoveryInclusionFilters& GetInclusionFilters() const { return m_inclusionFilters; }
  inline bool InclusionFiltersHasBeenSet() const { return m_inclusionFiltersHasBeenSet; }
  template <typename InclusionFiltersT = DiscoveryInclusionFilters>
  void SetInclusionFilters(InclusionFiltersT&& value) {
    m_inclusionFiltersHasBeenSet = true;
    m_inclusionFilters = std::forward<InclusionFiltersT>(value);
  }
  template <typename InclusionFiltersT = DiscoveryInclusionFilters>
  OrganizationDiscoveryFilters& WithInclusionFilters(InclusionFiltersT&& value) {
    SetInclusionFilters(std::forward<InclusionFiltersT>(value));
    return *this;
  }
  ///@}
 private:
  DiscoveryExclusionFilters m_exclusionFilters;

  DiscoveryInclusionFilters m_inclusionFilters;
  bool m_exclusionFiltersHasBeenSet = false;
  bool m_inclusionFiltersHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
