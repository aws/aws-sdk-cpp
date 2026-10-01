/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/JobSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EndUserMessaging {
namespace Model {

JobSummary::JobSummary(JsonView jsonValue) { *this = jsonValue; }

JobSummary& JobSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("jobId")) {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operationType")) {
    m_operationType = jsonValue.GetString("operationType");
    m_operationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("brandProfileId")) {
    m_brandProfileId = jsonValue.GetString("brandProfileId");
    m_brandProfileIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorCode")) {
    m_errorCode = jsonValue.GetString("errorCode");
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resources")) {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("resources");
    for (unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex) {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsObject());
    }
    m_resourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue JobSummary::Jsonize() const {
  JsonValue payload;

  if (m_jobIdHasBeenSet) {
    payload.WithString("jobId", m_jobId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", JobStatusMapper::GetNameForJobStatus(m_status));
  }

  if (m_operationTypeHasBeenSet) {
    payload.WithString("operationType", m_operationType);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_brandProfileIdHasBeenSet) {
    payload.WithString("brandProfileId", m_brandProfileId);
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("errorCode", m_errorCode);
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  if (m_resourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
    for (unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex) {
      resourcesJsonList[resourcesIndex].AsObject(m_resources[resourcesIndex].Jsonize());
    }
    payload.WithArray("resources", std::move(resourcesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
