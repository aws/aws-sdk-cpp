/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/ContactVersion.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

ContactVersion::ContactVersion(JsonView jsonValue) { *this = jsonValue; }

ContactVersion& ContactVersion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("versionId")) {
    m_versionId = jsonValue.GetInteger("versionId");
    m_versionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("created")) {
    m_created = jsonValue.GetDouble("created");
    m_createdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("activated")) {
    m_activated = jsonValue.GetDouble("activated");
    m_activatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("superseded")) {
    m_superseded = jsonValue.GetDouble("superseded");
    m_supersededHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdated")) {
    m_lastUpdated = jsonValue.GetDouble("lastUpdated");
    m_lastUpdatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = VersionStatusMapper::GetVersionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureCodes")) {
    Aws::Utils::Array<JsonView> failureCodesJsonList = jsonValue.GetArray("failureCodes");
    for (unsigned failureCodesIndex = 0; failureCodesIndex < failureCodesJsonList.GetLength(); ++failureCodesIndex) {
      m_failureCodes.push_back(
          VersionFailureReasonCodeMapper::GetVersionFailureReasonCodeForName(failureCodesJsonList[failureCodesIndex].AsString()));
    }
    m_failureCodesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureMessage")) {
    m_failureMessage = jsonValue.GetString("failureMessage");
    m_failureMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactVersion::Jsonize() const {
  JsonValue payload;

  if (m_versionIdHasBeenSet) {
    payload.WithInteger("versionId", m_versionId);
  }

  if (m_createdHasBeenSet) {
    payload.WithDouble("created", m_created.SecondsWithMSPrecision());
  }

  if (m_activatedHasBeenSet) {
    payload.WithDouble("activated", m_activated.SecondsWithMSPrecision());
  }

  if (m_supersededHasBeenSet) {
    payload.WithDouble("superseded", m_superseded.SecondsWithMSPrecision());
  }

  if (m_lastUpdatedHasBeenSet) {
    payload.WithDouble("lastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", VersionStatusMapper::GetNameForVersionStatus(m_status));
  }

  if (m_failureCodesHasBeenSet) {
    Aws::Utils::Array<JsonValue> failureCodesJsonList(m_failureCodes.size());
    for (unsigned failureCodesIndex = 0; failureCodesIndex < failureCodesJsonList.GetLength(); ++failureCodesIndex) {
      failureCodesJsonList[failureCodesIndex].AsString(
          VersionFailureReasonCodeMapper::GetNameForVersionFailureReasonCode(m_failureCodes[failureCodesIndex]));
    }
    payload.WithArray("failureCodes", std::move(failureCodesJsonList));
  }

  if (m_failureMessageHasBeenSet) {
    payload.WithString("failureMessage", m_failureMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
