/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/SlaUpdateConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {

SlaUpdateConfiguration::SlaUpdateConfiguration(JsonView jsonValue) { *this = jsonValue; }

SlaUpdateConfiguration& SlaUpdateConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("targetSlaMinutes")) {
    m_targetSlaMinutes = jsonValue.GetInt64("targetSlaMinutes");
    m_targetSlaMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue SlaUpdateConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_targetSlaMinutesHasBeenSet) {
    payload.WithInt64("targetSlaMinutes", m_targetSlaMinutes);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
