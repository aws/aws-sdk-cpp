/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/DomainScope.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>DNS prevalidation options for domain validation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/DnsPrevalidationOptions">AWS
 * API Reference</a></p>
 */
class DnsPrevalidationOptions {
 public:
  AWS_ACM_API DnsPrevalidationOptions() = default;
  AWS_ACM_API DnsPrevalidationOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API DnsPrevalidationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The scope of domains covered by this prevalidation.</p>
   */
  inline const DomainScope& GetDomainScope() const { return m_domainScope; }
  inline bool DomainScopeHasBeenSet() const { return m_domainScopeHasBeenSet; }
  template <typename DomainScopeT = DomainScope>
  void SetDomainScope(DomainScopeT&& value) {
    m_domainScopeHasBeenSet = true;
    m_domainScope = std::forward<DomainScopeT>(value);
  }
  template <typename DomainScopeT = DomainScope>
  DnsPrevalidationOptions& WithDomainScope(DomainScopeT&& value) {
    SetDomainScope(std::forward<DomainScopeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Route 53 hosted zone ID for DNS validation.</p>
   */
  inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
  inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
  template <typename HostedZoneIdT = Aws::String>
  void SetHostedZoneId(HostedZoneIdT&& value) {
    m_hostedZoneIdHasBeenSet = true;
    m_hostedZoneId = std::forward<HostedZoneIdT>(value);
  }
  template <typename HostedZoneIdT = Aws::String>
  DnsPrevalidationOptions& WithHostedZoneId(HostedZoneIdT&& value) {
    SetHostedZoneId(std::forward<HostedZoneIdT>(value));
    return *this;
  }
  ///@}
 private:
  DomainScope m_domainScope;

  Aws::String m_hostedZoneId;
  bool m_domainScopeHasBeenSet = false;
  bool m_hostedZoneIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
