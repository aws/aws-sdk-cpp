/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/FailedManagedApiItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

FailedManagedApiItem::FailedManagedApiItem(JsonView jsonValue) { *this = jsonValue; }

FailedManagedApiItem& FailedManagedApiItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("managedApiId")) {
    m_managedApiId = jsonValue.GetString("managedApiId");
    m_managedApiIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorCode")) {
    m_errorCode = FailedItemErrorCodeMapper::GetFailedItemErrorCodeForName(jsonValue.GetString("errorCode"));
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue FailedManagedApiItem::Jsonize() const {
  JsonValue payload;

  if (m_managedApiIdHasBeenSet) {
    payload.WithString("managedApiId", m_managedApiId);
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("errorCode", FailedItemErrorCodeMapper::GetNameForFailedItemErrorCode(m_errorCode));
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
