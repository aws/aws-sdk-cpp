/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/ProfileHistoryRecord.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

ProfileHistoryRecord::ProfileHistoryRecord(JsonView jsonValue) { *this = jsonValue; }

ProfileHistoryRecord& ProfileHistoryRecord::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ObjectTypeName")) {
    m_objectTypeName = jsonValue.GetString("ObjectTypeName");
    m_objectTypeNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdatedAt")) {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ActionType")) {
    m_actionType = ActionTypeMapper::GetActionTypeForName(jsonValue.GetString("ActionType"));
    m_actionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProfileObjectUniqueKey")) {
    m_profileObjectUniqueKey = jsonValue.GetString("ProfileObjectUniqueKey");
    m_profileObjectUniqueKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PerformedBy")) {
    m_performedBy = jsonValue.GetString("PerformedBy");
    m_performedByHasBeenSet = true;
  }
  return *this;
}

JsonValue ProfileHistoryRecord::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_objectTypeNameHasBeenSet) {
    payload.WithString("ObjectTypeName", m_objectTypeName);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_lastUpdatedAtHasBeenSet) {
    payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if (m_actionTypeHasBeenSet) {
    payload.WithString("ActionType", ActionTypeMapper::GetNameForActionType(m_actionType));
  }

  if (m_profileObjectUniqueKeyHasBeenSet) {
    payload.WithString("ProfileObjectUniqueKey", m_profileObjectUniqueKey);
  }

  if (m_performedByHasBeenSet) {
    payload.WithString("PerformedBy", m_performedBy);
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
