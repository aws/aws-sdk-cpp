/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/DnsPrevalidationOptions.h>

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
 * <p>Specifies prevalidation options for domain validation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/PrevalidationOptions">AWS
 * API Reference</a></p>
 */
class PrevalidationOptions {
 public:
  AWS_ACM_API PrevalidationOptions() = default;
  AWS_ACM_API PrevalidationOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API PrevalidationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>DNS-based prevalidation options.</p>
   */
  inline const DnsPrevalidationOptions& GetDnsPrevalidation() const { return m_dnsPrevalidation; }
  inline bool DnsPrevalidationHasBeenSet() const { return m_dnsPrevalidationHasBeenSet; }
  template <typename DnsPrevalidationT = DnsPrevalidationOptions>
  void SetDnsPrevalidation(DnsPrevalidationT&& value) {
    m_dnsPrevalidationHasBeenSet = true;
    m_dnsPrevalidation = std::forward<DnsPrevalidationT>(value);
  }
  template <typename DnsPrevalidationT = DnsPrevalidationOptions>
  PrevalidationOptions& WithDnsPrevalidation(DnsPrevalidationT&& value) {
    SetDnsPrevalidation(std::forward<DnsPrevalidationT>(value));
    return *this;
  }
  ///@}
 private:
  DnsPrevalidationOptions m_dnsPrevalidation;
  bool m_dnsPrevalidationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
