/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lightsail/model/LightsailDistributionSubdomain.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {

LightsailDistributionSubdomain::LightsailDistributionSubdomain(JsonView jsonValue) { *this = jsonValue; }

LightsailDistributionSubdomain& LightsailDistributionSubdomain::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state =
        LightsailDistributionSubdomainStateEnumMapper::GetLightsailDistributionSubdomainStateEnumForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorCode")) {
    m_errorCode = jsonValue.GetString("errorCode");
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorDetails")) {
    m_errorDetails = jsonValue.GetString("errorDetails");
    m_errorDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue LightsailDistributionSubdomain::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", LightsailDistributionSubdomainStateEnumMapper::GetNameForLightsailDistributionSubdomainStateEnum(m_state));
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("errorCode", m_errorCode);
  }

  if (m_errorDetailsHasBeenSet) {
    payload.WithString("errorDetails", m_errorDetails);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
