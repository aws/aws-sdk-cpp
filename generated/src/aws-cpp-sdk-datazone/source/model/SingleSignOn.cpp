/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/SingleSignOn.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

SingleSignOn::SingleSignOn(JsonView jsonValue) { *this = jsonValue; }

SingleSignOn& SingleSignOn::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = AuthTypeMapper::GetAuthTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userAssignment")) {
    m_userAssignment = UserAssignmentMapper::GetUserAssignmentForName(jsonValue.GetString("userAssignment"));
    m_userAssignmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("idcInstanceArn")) {
    m_idcInstanceArn = jsonValue.GetString("idcInstanceArn");
    m_idcInstanceArnHasBeenSet = true;
  }
  return *this;
}

JsonValue SingleSignOn::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", AuthTypeMapper::GetNameForAuthType(m_type));
  }

  if (m_userAssignmentHasBeenSet) {
    payload.WithString("userAssignment", UserAssignmentMapper::GetNameForUserAssignment(m_userAssignment));
  }

  if (m_idcInstanceArnHasBeenSet) {
    payload.WithString("idcInstanceArn", m_idcInstanceArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
