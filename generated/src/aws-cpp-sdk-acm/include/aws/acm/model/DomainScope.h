/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/DomainScopeOption.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ACM {
namespace Model {

/**
 * <p>Specifies the scope of domain validation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/DomainScope">AWS API
 * Reference</a></p>
 */
class DomainScope {
 public:
  AWS_ACM_API DomainScope() = default;
  AWS_ACM_API DomainScope(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API DomainScope& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether validation applies to the exact domain.</p>
   */
  inline DomainScopeOption GetExactDomain() const { return m_exactDomain; }
  inline bool ExactDomainHasBeenSet() const { return m_exactDomainHasBeenSet; }
  inline void SetExactDomain(DomainScopeOption value) {
    m_exactDomainHasBeenSet = true;
    m_exactDomain = value;
  }
  inline DomainScope& WithExactDomain(DomainScopeOption value) {
    SetExactDomain(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether validation applies to subdomains.</p>
   */
  inline DomainScopeOption GetSubdomains() const { return m_subdomains; }
  inline bool SubdomainsHasBeenSet() const { return m_subdomainsHasBeenSet; }
  inline void SetSubdomains(DomainScopeOption value) {
    m_subdomainsHasBeenSet = true;
    m_subdomains = value;
  }
  inline DomainScope& WithSubdomains(DomainScopeOption value) {
    SetSubdomains(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether validation applies to wildcard domains.</p>
   */
  inline DomainScopeOption GetWildcards() const { return m_wildcards; }
  inline bool WildcardsHasBeenSet() const { return m_wildcardsHasBeenSet; }
  inline void SetWildcards(DomainScopeOption value) {
    m_wildcardsHasBeenSet = true;
    m_wildcards = value;
  }
  inline DomainScope& WithWildcards(DomainScopeOption value) {
    SetWildcards(value);
    return *this;
  }
  ///@}
 private:
  DomainScopeOption m_exactDomain{DomainScopeOption::NOT_SET};

  DomainScopeOption m_subdomains{DomainScopeOption::NOT_SET};

  DomainScopeOption m_wildcards{DomainScopeOption::NOT_SET};
  bool m_exactDomainHasBeenSet = false;
  bool m_subdomainsHasBeenSet = false;
  bool m_wildcardsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
