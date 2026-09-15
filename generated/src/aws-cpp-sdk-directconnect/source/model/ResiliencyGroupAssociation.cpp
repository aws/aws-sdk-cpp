/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/directconnect/model/ResiliencyGroupAssociation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DirectConnect {
namespace Model {

ResiliencyGroupAssociation::ResiliencyGroupAssociation(JsonView jsonValue) { *this = jsonValue; }

ResiliencyGroupAssociation& ResiliencyGroupAssociation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resiliencyGroupId")) {
    m_resiliencyGroupId = jsonValue.GetString("resiliencyGroupId");
    m_resiliencyGroupIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectionArn")) {
    m_connectionArn = jsonValue.GetString("connectionArn");
    m_connectionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = ResiliencyGroupAssociationStateMapper::GetResiliencyGroupAssociationStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue ResiliencyGroupAssociation::Jsonize() const {
  JsonValue payload;

  if (m_resiliencyGroupIdHasBeenSet) {
    payload.WithString("resiliencyGroupId", m_resiliencyGroupId);
  }

  if (m_connectionArnHasBeenSet) {
    payload.WithString("connectionArn", m_connectionArn);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", ResiliencyGroupAssociationStateMapper::GetNameForResiliencyGroupAssociationState(m_state));
  }

  return payload;
}

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
