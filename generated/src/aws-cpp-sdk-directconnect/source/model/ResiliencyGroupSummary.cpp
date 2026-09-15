/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/directconnect/model/ResiliencyGroupSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DirectConnect {
namespace Model {

ResiliencyGroupSummary::ResiliencyGroupSummary(JsonView jsonValue) { *this = jsonValue; }

ResiliencyGroupSummary& ResiliencyGroupSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resiliencyGroupId")) {
    m_resiliencyGroupId = jsonValue.GetString("resiliencyGroupId");
    m_resiliencyGroupIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resiliencyGroupArn")) {
    m_resiliencyGroupArn = jsonValue.GetString("resiliencyGroupArn");
    m_resiliencyGroupArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resiliencyGroupName")) {
    m_resiliencyGroupName = jsonValue.GetString("resiliencyGroupName");
    m_resiliencyGroupNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resiliencyGroupType")) {
    m_resiliencyGroupType = ResiliencyGroupTypeMapper::GetResiliencyGroupTypeForName(jsonValue.GetString("resiliencyGroupType"));
    m_resiliencyGroupTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ownerAccount")) {
    m_ownerAccount = jsonValue.GetString("ownerAccount");
    m_ownerAccountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = ResiliencyGroupStateMapper::GetResiliencyGroupStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue ResiliencyGroupSummary::Jsonize() const {
  JsonValue payload;

  if (m_resiliencyGroupIdHasBeenSet) {
    payload.WithString("resiliencyGroupId", m_resiliencyGroupId);
  }

  if (m_resiliencyGroupArnHasBeenSet) {
    payload.WithString("resiliencyGroupArn", m_resiliencyGroupArn);
  }

  if (m_resiliencyGroupNameHasBeenSet) {
    payload.WithString("resiliencyGroupName", m_resiliencyGroupName);
  }

  if (m_resiliencyGroupTypeHasBeenSet) {
    payload.WithString("resiliencyGroupType", ResiliencyGroupTypeMapper::GetNameForResiliencyGroupType(m_resiliencyGroupType));
  }

  if (m_ownerAccountHasBeenSet) {
    payload.WithString("ownerAccount", m_ownerAccount);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", ResiliencyGroupStateMapper::GetNameForResiliencyGroupState(m_state));
  }

  return payload;
}

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
