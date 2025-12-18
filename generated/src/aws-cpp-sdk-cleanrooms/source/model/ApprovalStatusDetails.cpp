/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ApprovalStatusDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

ApprovalStatusDetails::ApprovalStatusDetails(JsonView jsonValue) { *this = jsonValue; }

ApprovalStatusDetails& ApprovalStatusDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = ApprovalStatusMapper::GetApprovalStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ApprovalStatusDetails::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", ApprovalStatusMapper::GetNameForApprovalStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
