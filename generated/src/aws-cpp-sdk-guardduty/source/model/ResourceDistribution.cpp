/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/ResourceDistribution.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

ResourceDistribution::ResourceDistribution(JsonView jsonValue) { *this = jsonValue; }

ResourceDistribution& ResourceDistribution::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = jsonValue.GetString("resourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("identifier")) {
    m_identifier = jsonValue.GetString("identifier");
    m_identifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("count")) {
    m_count = jsonValue.GetInt64("count");
    m_countHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceDistribution::Jsonize() const {
  JsonValue payload;

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("resourceType", m_resourceType);
  }

  if (m_identifierHasBeenSet) {
    payload.WithString("identifier", m_identifier);
  }

  if (m_countHasBeenSet) {
    payload.WithInt64("count", m_count);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
