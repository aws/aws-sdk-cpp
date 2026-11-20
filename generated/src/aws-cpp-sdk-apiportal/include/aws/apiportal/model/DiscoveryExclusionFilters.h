/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Exclusion filters for organization-scoped discovery. Resources matching any
 * of these filters are excluded from discovery.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/DiscoveryExclusionFilters">AWS
 * API Reference</a></p>
 */
class DiscoveryExclusionFilters {
 public:
  AWS_APIPORTAL_API DiscoveryExclusionFilters() = default;
  AWS_APIPORTAL_API DiscoveryExclusionFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API DiscoveryExclusionFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>List of organizational unit IDs to exclude from discovery.</p>
   */
  inline const Aws::Vector<Aws::String>& GetOrganizationalUnitIds() const { return m_organizationalUnitIds; }
  inline bool OrganizationalUnitIdsHasBeenSet() const { return m_organizationalUnitIdsHasBeenSet; }
  template <typename OrganizationalUnitIdsT = Aws::Vector<Aws::String>>
  void SetOrganizationalUnitIds(OrganizationalUnitIdsT&& value) {
    m_organizationalUnitIdsHasBeenSet = true;
    m_organizationalUnitIds = std::forward<OrganizationalUnitIdsT>(value);
  }
  template <typename OrganizationalUnitIdsT = Aws::Vector<Aws::String>>
  DiscoveryExclusionFilters& WithOrganizationalUnitIds(OrganizationalUnitIdsT&& value) {
    SetOrganizationalUnitIds(std::forward<OrganizationalUnitIdsT>(value));
    return *this;
  }
  template <typename OrganizationalUnitIdsT = Aws::String>
  DiscoveryExclusionFilters& AddOrganizationalUnitIds(OrganizationalUnitIdsT&& value) {
    m_organizationalUnitIdsHasBeenSet = true;
    m_organizationalUnitIds.emplace_back(std::forward<OrganizationalUnitIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of AWS account IDs to exclude from discovery.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
  inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
  template <typename AccountIdsT = Aws::Vector<Aws::String>>
  void SetAccountIds(AccountIdsT&& value) {
    m_accountIdsHasBeenSet = true;
    m_accountIds = std::forward<AccountIdsT>(value);
  }
  template <typename AccountIdsT = Aws::Vector<Aws::String>>
  DiscoveryExclusionFilters& WithAccountIds(AccountIdsT&& value) {
    SetAccountIds(std::forward<AccountIdsT>(value));
    return *this;
  }
  template <typename AccountIdsT = Aws::String>
  DiscoveryExclusionFilters& AddAccountIds(AccountIdsT&& value) {
    m_accountIdsHasBeenSet = true;
    m_accountIds.emplace_back(std::forward<AccountIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of resource ARNs to exclude. Only ELB and CloudFront resource ARNs are
   * supported.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResourceArns() const { return m_resourceArns; }
  inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }
  template <typename ResourceArnsT = Aws::Vector<Aws::String>>
  void SetResourceArns(ResourceArnsT&& value) {
    m_resourceArnsHasBeenSet = true;
    m_resourceArns = std::forward<ResourceArnsT>(value);
  }
  template <typename ResourceArnsT = Aws::Vector<Aws::String>>
  DiscoveryExclusionFilters& WithResourceArns(ResourceArnsT&& value) {
    SetResourceArns(std::forward<ResourceArnsT>(value));
    return *this;
  }
  template <typename ResourceArnsT = Aws::String>
  DiscoveryExclusionFilters& AddResourceArns(ResourceArnsT&& value) {
    m_resourceArnsHasBeenSet = true;
    m_resourceArns.emplace_back(std::forward<ResourceArnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_organizationalUnitIds;

  Aws::Vector<Aws::String> m_accountIds;

  Aws::Vector<Aws::String> m_resourceArns;
  bool m_organizationalUnitIdsHasBeenSet = false;
  bool m_accountIdsHasBeenSet = false;
  bool m_resourceArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
