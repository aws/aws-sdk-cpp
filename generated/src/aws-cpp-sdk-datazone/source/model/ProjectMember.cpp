/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/ProjectMember.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

ProjectMember::ProjectMember(JsonView jsonValue) { *this = jsonValue; }

ProjectMember& ProjectMember::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("memberDetails")) {
    m_memberDetails = jsonValue.GetObject("memberDetails");
    m_memberDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("designation")) {
    m_designation = UserDesignationMapper::GetUserDesignationForName(jsonValue.GetString("designation"));
    m_designationHasBeenSet = true;
  }
  return *this;
}

JsonValue ProjectMember::Jsonize() const {
  JsonValue payload;

  if (m_memberDetailsHasBeenSet) {
    payload.WithObject("memberDetails", m_memberDetails.Jsonize());
  }

  if (m_designationHasBeenSet) {
    payload.WithString("designation", UserDesignationMapper::GetNameForUserDesignation(m_designation));
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
