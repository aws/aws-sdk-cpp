/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/DnsNameFilter.h>

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
 * <p>Filters certificates by subject alternative name attributes.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/SubjectAlternativeNameFilter">AWS
 * API Reference</a></p>
 */
class SubjectAlternativeNameFilter {
 public:
  AWS_ACM_API SubjectAlternativeNameFilter() = default;
  AWS_ACM_API SubjectAlternativeNameFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API SubjectAlternativeNameFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filter by DNS name in subject alternative names.</p>
   */
  inline const DnsNameFilter& GetDnsName() const { return m_dnsName; }
  inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
  template <typename DnsNameT = DnsNameFilter>
  void SetDnsName(DnsNameT&& value) {
    m_dnsNameHasBeenSet = true;
    m_dnsName = std::forward<DnsNameT>(value);
  }
  template <typename DnsNameT = DnsNameFilter>
  SubjectAlternativeNameFilter& WithDnsName(DnsNameT&& value) {
    SetDnsName(std::forward<DnsNameT>(value));
    return *this;
  }
  ///@}
 private:
  DnsNameFilter m_dnsName;
  bool m_dnsNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
