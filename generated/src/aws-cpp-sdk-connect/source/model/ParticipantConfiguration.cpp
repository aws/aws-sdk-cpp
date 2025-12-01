/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ParticipantConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ParticipantConfiguration::ParticipantConfiguration(JsonView jsonValue) { *this = jsonValue; }

ParticipantConfiguration& ParticipantConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResponseMode")) {
    m_responseMode = ResponseModeMapper::GetResponseModeForName(jsonValue.GetString("ResponseMode"));
    m_responseModeHasBeenSet = true;
  }
  return *this;
}

JsonValue ParticipantConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_responseModeHasBeenSet) {
    payload.WithString("ResponseMode", ResponseModeMapper::GetNameForResponseMode(m_responseMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
