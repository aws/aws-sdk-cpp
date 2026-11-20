/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ProjectDataRetention.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

ProjectDataRetention::ProjectDataRetention(JsonView jsonValue) { *this = jsonValue; }

ProjectDataRetention& ProjectDataRetention::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("mode")) {
    m_mode = DataRetentionModeMapper::GetDataRetentionModeForName(jsonValue.GetString("mode"));
    m_modeHasBeenSet = true;
  }
  return *this;
}

JsonValue ProjectDataRetention::Jsonize() const {
  JsonValue payload;

  if (m_modeHasBeenSet) {
    payload.WithString("mode", DataRetentionModeMapper::GetNameForDataRetentionMode(m_mode));
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
