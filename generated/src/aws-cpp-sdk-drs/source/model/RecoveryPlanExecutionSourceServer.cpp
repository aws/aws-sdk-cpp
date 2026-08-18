/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/drs/model/RecoveryPlanExecutionSourceServer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace drs {
namespace Model {

RecoveryPlanExecutionSourceServer::RecoveryPlanExecutionSourceServer(JsonView jsonValue) { *this = jsonValue; }

RecoveryPlanExecutionSourceServer& RecoveryPlanExecutionSourceServer::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceServerID")) {
    m_sourceServerID = jsonValue.GetString("sourceServerID");
    m_sourceServerIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recoverySnapshotID")) {
    m_recoverySnapshotID = jsonValue.GetString("recoverySnapshotID");
    m_recoverySnapshotIDHasBeenSet = true;
  }
  return *this;
}

JsonValue RecoveryPlanExecutionSourceServer::Jsonize() const {
  JsonValue payload;

  if (m_sourceServerIDHasBeenSet) {
    payload.WithString("sourceServerID", m_sourceServerID);
  }

  if (m_recoverySnapshotIDHasBeenSet) {
    payload.WithString("recoverySnapshotID", m_recoverySnapshotID);
  }

  return payload;
}

}  // namespace Model
}  // namespace drs
}  // namespace Aws
