/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/Enrichment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

Enrichment::Enrichment(JsonView jsonValue) { *this = jsonValue; }

Enrichment& Enrichment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("countryName")) {
    m_countryName = jsonValue.GetString("countryName");
    m_countryNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("asnOrg")) {
    m_asnOrg = jsonValue.GetString("asnOrg");
    m_asnOrgHasBeenSet = true;
  }
  if (jsonValue.ValueExists("threatListName")) {
    m_threatListName = jsonValue.GetString("threatListName");
    m_threatListNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("threatName")) {
    m_threatName = jsonValue.GetString("threatName");
    m_threatNameHasBeenSet = true;
  }
  return *this;
}

JsonValue Enrichment::Jsonize() const {
  JsonValue payload;

  if (m_countryNameHasBeenSet) {
    payload.WithString("countryName", m_countryName);
  }

  if (m_asnOrgHasBeenSet) {
    payload.WithString("asnOrg", m_asnOrg);
  }

  if (m_threatListNameHasBeenSet) {
    payload.WithString("threatListName", m_threatListName);
  }

  if (m_threatNameHasBeenSet) {
    payload.WithString("threatName", m_threatName);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
