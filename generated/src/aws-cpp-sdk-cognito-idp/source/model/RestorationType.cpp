/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/RestorationType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

RestorationType::RestorationType(JsonView jsonValue) { *this = jsonValue; }

RestorationType& RestorationType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RestoreId")) {
    m_restoreId = jsonValue.GetString("RestoreId");
    m_restoreIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RestoreStatus")) {
    m_restoreStatus = RestoreStatusTypeMapper::GetRestoreStatusTypeForName(jsonValue.GetString("RestoreStatus"));
    m_restoreStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RestoreTimestamp")) {
    m_restoreTimestamp = jsonValue.GetDouble("RestoreTimestamp");
    m_restoreTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TriggerTimestamp")) {
    m_triggerTimestamp = jsonValue.GetDouble("TriggerTimestamp");
    m_triggerTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RestorePreview")) {
    Aws::Utils::Array<JsonView> restorePreviewJsonList = jsonValue.GetArray("RestorePreview");
    for (unsigned restorePreviewIndex = 0; restorePreviewIndex < restorePreviewJsonList.GetLength(); ++restorePreviewIndex) {
      m_restorePreview.push_back(restorePreviewJsonList[restorePreviewIndex].AsObject());
    }
    m_restorePreviewHasBeenSet = true;
  }
  return *this;
}

JsonValue RestorationType::Jsonize() const {
  JsonValue payload;

  if (m_restoreIdHasBeenSet) {
    payload.WithString("RestoreId", m_restoreId);
  }

  if (m_restoreStatusHasBeenSet) {
    payload.WithString("RestoreStatus", RestoreStatusTypeMapper::GetNameForRestoreStatusType(m_restoreStatus));
  }

  if (m_restoreTimestampHasBeenSet) {
    payload.WithDouble("RestoreTimestamp", m_restoreTimestamp.SecondsWithMSPrecision());
  }

  if (m_triggerTimestampHasBeenSet) {
    payload.WithDouble("TriggerTimestamp", m_triggerTimestamp.SecondsWithMSPrecision());
  }

  if (m_restorePreviewHasBeenSet) {
    Aws::Utils::Array<JsonValue> restorePreviewJsonList(m_restorePreview.size());
    for (unsigned restorePreviewIndex = 0; restorePreviewIndex < restorePreviewJsonList.GetLength(); ++restorePreviewIndex) {
      restorePreviewJsonList[restorePreviewIndex].AsObject(m_restorePreview[restorePreviewIndex].Jsonize());
    }
    payload.WithArray("RestorePreview", std::move(restorePreviewJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
