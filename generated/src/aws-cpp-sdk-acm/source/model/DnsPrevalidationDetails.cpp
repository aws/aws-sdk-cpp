/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/DnsPrevalidationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

DnsPrevalidationDetails::DnsPrevalidationDetails(JsonView jsonValue) { *this = jsonValue; }

DnsPrevalidationDetails& DnsPrevalidationDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DomainScope")) {
    m_domainScope = jsonValue.GetObject("DomainScope");
    m_domainScopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HostedZoneId")) {
    m_hostedZoneId = jsonValue.GetString("HostedZoneId");
    m_hostedZoneIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceRecord")) {
    m_resourceRecord = jsonValue.GetObject("ResourceRecord");
    m_resourceRecordHasBeenSet = true;
  }
  return *this;
}

JsonValue DnsPrevalidationDetails::Jsonize() const {
  JsonValue payload;

  if (m_domainScopeHasBeenSet) {
    payload.WithObject("DomainScope", m_domainScope.Jsonize());
  }

  if (m_hostedZoneIdHasBeenSet) {
    payload.WithString("HostedZoneId", m_hostedZoneId);
  }

  if (m_resourceRecordHasBeenSet) {
    payload.WithObject("ResourceRecord", m_resourceRecord.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
