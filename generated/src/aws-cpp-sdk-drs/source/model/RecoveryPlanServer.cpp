/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/drs/model/RecoveryPlanServer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace drs {
namespace Model {

RecoveryPlanServer::RecoveryPlanServer(JsonView jsonValue) { *this = jsonValue; }

RecoveryPlanServer& RecoveryPlanServer::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serverArn")) {
    m_serverArn = jsonValue.GetString("serverArn");
    m_serverArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("impactLevel")) {
    m_impactLevel = RecoveryPlanServerImpactLevelMapper::GetRecoveryPlanServerImpactLevelForName(jsonValue.GetString("impactLevel"));
    m_impactLevelHasBeenSet = true;
  }
  return *this;
}

JsonValue RecoveryPlanServer::Jsonize() const {
  JsonValue payload;

  if (m_serverArnHasBeenSet) {
    payload.WithString("serverArn", m_serverArn);
  }

  if (m_impactLevelHasBeenSet) {
    payload.WithString("impactLevel", RecoveryPlanServerImpactLevelMapper::GetNameForRecoveryPlanServerImpactLevel(m_impactLevel));
  }

  return payload;
}

}  // namespace Model
}  // namespace drs
}  // namespace Aws
