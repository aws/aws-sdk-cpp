/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/FetchRecord.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

FetchRecord::FetchRecord(JsonView jsonValue) { *this = jsonValue; }

FetchRecord& FetchRecord::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fetchType")) {
    m_fetchType = FetchTypeMapper::GetFetchTypeForName(jsonValue.GetString("fetchType"));
    m_fetchTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("query")) {
    m_query = jsonValue.GetObject("query");
    m_queryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("result")) {
    m_result = jsonValue.GetObject("result");
    m_resultHasBeenSet = true;
  }
  return *this;
}

JsonValue FetchRecord::Jsonize() const {
  JsonValue payload;

  if (m_fetchTypeHasBeenSet) {
    payload.WithString("fetchType", FetchTypeMapper::GetNameForFetchType(m_fetchType));
  }

  if (m_queryHasBeenSet) {
    payload.WithObject("query", m_query.Jsonize());
  }

  if (m_resultHasBeenSet) {
    payload.WithObject("result", m_result.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
