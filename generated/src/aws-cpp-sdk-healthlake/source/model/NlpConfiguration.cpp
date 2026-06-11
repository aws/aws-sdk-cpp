/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/NlpConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {

NlpConfiguration::NlpConfiguration(JsonView jsonValue) { *this = jsonValue; }

NlpConfiguration& NlpConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Status")) {
    m_status = NlpStatusMapper::GetNlpStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue NlpConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("Status", NlpStatusMapper::GetNameForNlpStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
