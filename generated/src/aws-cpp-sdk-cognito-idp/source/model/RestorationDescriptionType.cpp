/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/RestorationDescriptionType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

RestorationDescriptionType::RestorationDescriptionType(JsonView jsonValue) { *this = jsonValue; }

RestorationDescriptionType& RestorationDescriptionType::operator=(JsonView jsonValue) {
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
  return *this;
}

JsonValue RestorationDescriptionType::Jsonize() const {
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

  return payload;
}

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
