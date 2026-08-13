/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/DnsValidationChallenge.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

DnsValidationChallenge::DnsValidationChallenge(JsonView jsonValue) { *this = jsonValue; }

DnsValidationChallenge& DnsValidationChallenge::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceRecord")) {
    m_resourceRecord = jsonValue.GetObject("ResourceRecord");
    m_resourceRecordHasBeenSet = true;
  }
  return *this;
}

JsonValue DnsValidationChallenge::Jsonize() const {
  JsonValue payload;

  if (m_resourceRecordHasBeenSet) {
    payload.WithObject("ResourceRecord", m_resourceRecord.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
