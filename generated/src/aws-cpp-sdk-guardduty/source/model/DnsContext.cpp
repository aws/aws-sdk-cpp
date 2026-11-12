/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/DnsContext.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

DnsContext::DnsContext(JsonView jsonValue) { *this = jsonValue; }

DnsContext& DnsContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("domainSuffix")) {
    m_domainSuffix = jsonValue.GetString("domainSuffix");
    m_domainSuffixHasBeenSet = true;
  }
  if (jsonValue.ValueExists("otherDomains")) {
    m_otherDomains = jsonValue.GetString("otherDomains");
    m_otherDomainsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resolverHistory")) {
    m_resolverHistory = jsonValue.GetString("resolverHistory");
    m_resolverHistoryHasBeenSet = true;
  }
  return *this;
}

JsonValue DnsContext::Jsonize() const {
  JsonValue payload;

  if (m_domainSuffixHasBeenSet) {
    payload.WithString("domainSuffix", m_domainSuffix);
  }

  if (m_otherDomainsHasBeenSet) {
    payload.WithString("otherDomains", m_otherDomains);
  }

  if (m_resolverHistoryHasBeenSet) {
    payload.WithString("resolverHistory", m_resolverHistory);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
