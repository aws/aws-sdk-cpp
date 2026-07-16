/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ivs/model/PostRollConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IVS {
namespace Model {

PostRollConfiguration::PostRollConfiguration(JsonView jsonValue) { *this = jsonValue; }

PostRollConfiguration& PostRollConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("durationSeconds")) {
    m_durationSeconds = jsonValue.GetInteger("durationSeconds");
    m_durationSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enabled")) {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  return *this;
}

JsonValue PostRollConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_durationSecondsHasBeenSet) {
    payload.WithInteger("durationSeconds", m_durationSeconds);
  }

  if (m_enabledHasBeenSet) {
    payload.WithBool("enabled", m_enabled);
  }

  return payload;
}

}  // namespace Model
}  // namespace IVS
}  // namespace Aws
