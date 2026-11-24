/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/ManagedApiSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

ManagedApiSummary::ManagedApiSummary(JsonView jsonValue) { *this = jsonValue; }

ManagedApiSummary& ManagedApiSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("managedApiId")) {
    m_managedApiId = jsonValue.GetString("managedApiId");
    m_managedApiIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("managedApiArn")) {
    m_managedApiArn = jsonValue.GetString("managedApiArn");
    m_managedApiArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiSignature")) {
    m_apiSignature = jsonValue.GetObject("apiSignature");
    m_apiSignatureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedApiSummary::Jsonize() const {
  JsonValue payload;

  if (m_managedApiIdHasBeenSet) {
    payload.WithString("managedApiId", m_managedApiId);
  }

  if (m_managedApiArnHasBeenSet) {
    payload.WithString("managedApiArn", m_managedApiArn);
  }

  if (m_apiSignatureHasBeenSet) {
    payload.WithObject("apiSignature", m_apiSignature.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
