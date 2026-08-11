/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access/model/ApplicationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AccountAccess {
namespace Model {

ApplicationSummary::ApplicationSummary(JsonView jsonValue) { *this = jsonValue; }

ApplicationSummary& ApplicationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("applicationArn")) {
    m_applicationArn = jsonValue.GetString("applicationArn");
    m_applicationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tenantId")) {
    m_tenantId = jsonValue.GetString("tenantId");
    m_tenantIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ApplicationSummary::Jsonize() const {
  JsonValue payload;

  if (m_applicationArnHasBeenSet) {
    payload.WithString("applicationArn", m_applicationArn);
  }

  if (m_tenantIdHasBeenSet) {
    payload.WithString("tenantId", m_tenantId);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
