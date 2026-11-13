/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/ArchiveDistribution.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

ArchiveDistribution::ArchiveDistribution(JsonView jsonValue) { *this = jsonValue; }

ArchiveDistribution& ArchiveDistribution::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("archivedCount")) {
    m_archivedCount = jsonValue.GetInt64("archivedCount");
    m_archivedCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("unarchivedCount")) {
    m_unarchivedCount = jsonValue.GetInt64("unarchivedCount");
    m_unarchivedCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("archivedPercentage")) {
    m_archivedPercentage = jsonValue.GetDouble("archivedPercentage");
    m_archivedPercentageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("unarchivedPercentage")) {
    m_unarchivedPercentage = jsonValue.GetDouble("unarchivedPercentage");
    m_unarchivedPercentageHasBeenSet = true;
  }
  return *this;
}

JsonValue ArchiveDistribution::Jsonize() const {
  JsonValue payload;

  if (m_archivedCountHasBeenSet) {
    payload.WithInt64("archivedCount", m_archivedCount);
  }

  if (m_unarchivedCountHasBeenSet) {
    payload.WithInt64("unarchivedCount", m_unarchivedCount);
  }

  if (m_archivedPercentageHasBeenSet) {
    payload.WithDouble("archivedPercentage", m_archivedPercentage);
  }

  if (m_unarchivedPercentageHasBeenSet) {
    payload.WithDouble("unarchivedPercentage", m_unarchivedPercentage);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
