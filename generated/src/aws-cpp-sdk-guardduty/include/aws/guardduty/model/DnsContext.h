/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains DNS details about network activity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DnsContext">AWS
 * API Reference</a></p>
 */
class DnsContext {
 public:
  AWS_GUARDDUTY_API DnsContext() = default;
  AWS_GUARDDUTY_API DnsContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API DnsContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The suffix of the domain that was queried.</p>
   */
  inline const Aws::String& GetDomainSuffix() const { return m_domainSuffix; }
  inline bool DomainSuffixHasBeenSet() const { return m_domainSuffixHasBeenSet; }
  template <typename DomainSuffixT = Aws::String>
  void SetDomainSuffix(DomainSuffixT&& value) {
    m_domainSuffixHasBeenSet = true;
    m_domainSuffix = std::forward<DomainSuffixT>(value);
  }
  template <typename DomainSuffixT = Aws::String>
  DnsContext& WithDomainSuffix(DomainSuffixT&& value) {
    SetDomainSuffix(std::forward<DomainSuffixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Other domains that were queried.</p>
   */
  inline const Aws::String& GetOtherDomains() const { return m_otherDomains; }
  inline bool OtherDomainsHasBeenSet() const { return m_otherDomainsHasBeenSet; }
  template <typename OtherDomainsT = Aws::String>
  void SetOtherDomains(OtherDomainsT&& value) {
    m_otherDomainsHasBeenSet = true;
    m_otherDomains = std::forward<OtherDomainsT>(value);
  }
  template <typename OtherDomainsT = Aws::String>
  DnsContext& WithOtherDomains(OtherDomainsT&& value) {
    SetOtherDomains(std::forward<OtherDomainsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DNS resolution history for the domain.</p>
   */
  inline const Aws::String& GetResolverHistory() const { return m_resolverHistory; }
  inline bool ResolverHistoryHasBeenSet() const { return m_resolverHistoryHasBeenSet; }
  template <typename ResolverHistoryT = Aws::String>
  void SetResolverHistory(ResolverHistoryT&& value) {
    m_resolverHistoryHasBeenSet = true;
    m_resolverHistory = std::forward<ResolverHistoryT>(value);
  }
  template <typename ResolverHistoryT = Aws::String>
  DnsContext& WithResolverHistory(ResolverHistoryT&& value) {
    SetResolverHistory(std::forward<ResolverHistoryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainSuffix;

  Aws::String m_otherDomains;

  Aws::String m_resolverHistory;
  bool m_domainSuffixHasBeenSet = false;
  bool m_otherDomainsHasBeenSet = false;
  bool m_resolverHistoryHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
