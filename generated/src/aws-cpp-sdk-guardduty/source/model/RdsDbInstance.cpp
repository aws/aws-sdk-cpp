/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/RdsDbInstance.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

RdsDbInstance::RdsDbInstance(JsonView jsonValue) { *this = jsonValue; }

RdsDbInstance& RdsDbInstance::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dbInstanceIdentifier")) {
    m_dbInstanceIdentifier = jsonValue.GetString("dbInstanceIdentifier");
    m_dbInstanceIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dbClusterIdentifier")) {
    m_dbClusterIdentifier = jsonValue.GetString("dbClusterIdentifier");
    m_dbClusterIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dbInstanceArn")) {
    m_dbInstanceArn = jsonValue.GetString("dbInstanceArn");
    m_dbInstanceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dbiResourceId")) {
    m_dbiResourceId = jsonValue.GetString("dbiResourceId");
    m_dbiResourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("engine")) {
    m_engine = jsonValue.GetString("engine");
    m_engineHasBeenSet = true;
  }
  if (jsonValue.ValueExists("engineVersion")) {
    m_engineVersion = jsonValue.GetString("engineVersion");
    m_engineVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue RdsDbInstance::Jsonize() const {
  JsonValue payload;

  if (m_dbInstanceIdentifierHasBeenSet) {
    payload.WithString("dbInstanceIdentifier", m_dbInstanceIdentifier);
  }

  if (m_dbClusterIdentifierHasBeenSet) {
    payload.WithString("dbClusterIdentifier", m_dbClusterIdentifier);
  }

  if (m_dbInstanceArnHasBeenSet) {
    payload.WithString("dbInstanceArn", m_dbInstanceArn);
  }

  if (m_dbiResourceIdHasBeenSet) {
    payload.WithString("dbiResourceId", m_dbiResourceId);
  }

  if (m_engineHasBeenSet) {
    payload.WithString("engine", m_engine);
  }

  if (m_engineVersionHasBeenSet) {
    payload.WithString("engineVersion", m_engineVersion);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
