/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/SubjectAlternativeNameFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

SubjectAlternativeNameFilter::SubjectAlternativeNameFilter(JsonView jsonValue) { *this = jsonValue; }

SubjectAlternativeNameFilter& SubjectAlternativeNameFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DnsName")) {
    m_dnsName = jsonValue.GetObject("DnsName");
    m_dnsNameHasBeenSet = true;
  }
  return *this;
}

JsonValue SubjectAlternativeNameFilter::Jsonize() const {
  JsonValue payload;

  if (m_dnsNameHasBeenSet) {
    payload.WithObject("DnsName", m_dnsName.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
