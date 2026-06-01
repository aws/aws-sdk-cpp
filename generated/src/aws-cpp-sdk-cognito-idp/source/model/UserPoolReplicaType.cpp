/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UserPoolReplicaType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

UserPoolReplicaType::UserPoolReplicaType(JsonView jsonValue) { *this = jsonValue; }

UserPoolReplicaType& UserPoolReplicaType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RegionName")) {
    m_regionName = jsonValue.GetString("RegionName");
    m_regionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = ReplicaStatusTypeMapper::GetReplicaStatusTypeForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Role")) {
    m_role = ReplicaRoleTypeMapper::GetReplicaRoleTypeForName(jsonValue.GetString("Role"));
    m_roleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UserPoolArn")) {
    m_userPoolArn = jsonValue.GetString("UserPoolArn");
    m_userPoolArnHasBeenSet = true;
  }
  return *this;
}

JsonValue UserPoolReplicaType::Jsonize() const {
  JsonValue payload;

  if (m_regionNameHasBeenSet) {
    payload.WithString("RegionName", m_regionName);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", ReplicaStatusTypeMapper::GetNameForReplicaStatusType(m_status));
  }

  if (m_roleHasBeenSet) {
    payload.WithString("Role", ReplicaRoleTypeMapper::GetNameForReplicaRoleType(m_role));
  }

  if (m_userPoolArnHasBeenSet) {
    payload.WithString("UserPoolArn", m_userPoolArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
