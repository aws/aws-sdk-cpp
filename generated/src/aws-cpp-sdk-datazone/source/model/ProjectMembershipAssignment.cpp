/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/ProjectMembershipAssignment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

ProjectMembershipAssignment::ProjectMembershipAssignment(JsonView jsonValue) { *this = jsonValue; }

ProjectMembershipAssignment& ProjectMembershipAssignment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("member")) {
    m_member = jsonValue.GetObject("member");
    m_memberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("designation")) {
    m_designation = UserDesignationMapper::GetUserDesignationForName(jsonValue.GetString("designation"));
    m_designationHasBeenSet = true;
  }
  return *this;
}

JsonValue ProjectMembershipAssignment::Jsonize() const {
  JsonValue payload;

  if (m_memberHasBeenSet) {
    payload.WithObject("member", m_member.Jsonize());
  }

  if (m_designationHasBeenSet) {
    payload.WithString("designation", UserDesignationMapper::GetNameForUserDesignation(m_designation));
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
