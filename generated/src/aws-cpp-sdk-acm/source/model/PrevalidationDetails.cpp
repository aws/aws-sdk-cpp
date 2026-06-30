/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/PrevalidationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

PrevalidationDetails::PrevalidationDetails(JsonView jsonValue) { *this = jsonValue; }

PrevalidationDetails& PrevalidationDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DnsPrevalidation")) {
    m_dnsPrevalidation = jsonValue.GetObject("DnsPrevalidation");
    m_dnsPrevalidationHasBeenSet = true;
  }
  return *this;
}

JsonValue PrevalidationDetails::Jsonize() const {
  JsonValue payload;

  if (m_dnsPrevalidationHasBeenSet) {
    payload.WithObject("DnsPrevalidation", m_dnsPrevalidation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
