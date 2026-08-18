/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/drs/model/RecoveryPlanExecutionServer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace drs {
namespace Model {

RecoveryPlanExecutionServer::RecoveryPlanExecutionServer(JsonView jsonValue) { *this = jsonValue; }

RecoveryPlanExecutionServer& RecoveryPlanExecutionServer::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serverArn")) {
    m_serverArn = jsonValue.GetString("serverArn");
    m_serverArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("impactLevel")) {
    m_impactLevel = RecoveryPlanServerImpactLevelMapper::GetRecoveryPlanServerImpactLevelForName(jsonValue.GetString("impactLevel"));
    m_impactLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobID")) {
    m_jobID = jsonValue.GetString("jobID");
    m_jobIDHasBeenSet = true;
  }
  return *this;
}

JsonValue RecoveryPlanExecutionServer::Jsonize() const {
  JsonValue payload;

  if (m_serverArnHasBeenSet) {
    payload.WithString("serverArn", m_serverArn);
  }

  if (m_impactLevelHasBeenSet) {
    payload.WithString("impactLevel", RecoveryPlanServerImpactLevelMapper::GetNameForRecoveryPlanServerImpactLevel(m_impactLevel));
  }

  if (m_jobIDHasBeenSet) {
    payload.WithString("jobID", m_jobID);
  }

  return payload;
}

}  // namespace Model
}  // namespace drs
}  // namespace Aws
