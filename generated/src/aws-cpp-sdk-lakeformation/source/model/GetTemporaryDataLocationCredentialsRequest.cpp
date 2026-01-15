/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lakeformation/model/GetTemporaryDataLocationCredentialsRequest.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetTemporaryDataLocationCredentialsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_durationSecondsHasBeenSet) {
    payload.WithInteger("DurationSeconds", m_durationSeconds);
  }

  if (m_auditContextHasBeenSet) {
    payload.WithObject("AuditContext", m_auditContext.Jsonize());
  }

  if (m_dataLocationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> dataLocationsJsonList(m_dataLocations.size());
    for (unsigned dataLocationsIndex = 0; dataLocationsIndex < dataLocationsJsonList.GetLength(); ++dataLocationsIndex) {
      dataLocationsJsonList[dataLocationsIndex].AsString(m_dataLocations[dataLocationsIndex]);
    }
    payload.WithArray("DataLocations", std::move(dataLocationsJsonList));
  }

  if (m_credentialsScopeHasBeenSet) {
    payload.WithString("CredentialsScope", CredentialsScopeMapper::GetNameForCredentialsScope(m_credentialsScope));
  }

  return payload.View().WriteReadable();
}
