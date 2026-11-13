/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/FindingDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

FindingDetail::FindingDetail(JsonView jsonValue) { *this = jsonValue; }

FindingDetail& FindingDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("findingId")) {
    m_findingId = jsonValue.GetString("findingId");
    m_findingIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingType")) {
    m_findingType = jsonValue.GetString("findingType");
    m_findingTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("severity")) {
    m_severity = jsonValue.GetString("severity");
    m_severityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("region")) {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("activityWindow")) {
    m_activityWindow = jsonValue.GetObject("activityWindow");
    m_activityWindowHasBeenSet = true;
  }
  return *this;
}

JsonValue FindingDetail::Jsonize() const {
  JsonValue payload;

  if (m_findingIdHasBeenSet) {
    payload.WithString("findingId", m_findingId);
  }

  if (m_findingTypeHasBeenSet) {
    payload.WithString("findingType", m_findingType);
  }

  if (m_severityHasBeenSet) {
    payload.WithString("severity", m_severity);
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("region", m_region);
  }

  if (m_activityWindowHasBeenSet) {
    payload.WithObject("activityWindow", m_activityWindow.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
