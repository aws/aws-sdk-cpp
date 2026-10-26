/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/FindingPosture.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

FindingPosture::FindingPosture(JsonView jsonValue) { *this = jsonValue; }

FindingPosture& FindingPosture::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("application")) {
    m_application = jsonValue.GetString("application");
    m_applicationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applicationUid")) {
    m_applicationUid = jsonValue.GetString("applicationUid");
    m_applicationUidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applicationVersion")) {
    m_applicationVersion = jsonValue.GetString("applicationVersion");
    m_applicationVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("control")) {
    m_control = jsonValue.GetString("control");
    m_controlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("standards")) {
    Aws::Utils::Array<JsonView> standardsJsonList = jsonValue.GetArray("standards");
    for (unsigned standardsIndex = 0; standardsIndex < standardsJsonList.GetLength(); ++standardsIndex) {
      m_standards.push_back(standardsJsonList[standardsIndex].AsString());
    }
    m_standardsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("requirements")) {
    Aws::Utils::Array<JsonView> requirementsJsonList = jsonValue.GetArray("requirements");
    for (unsigned requirementsIndex = 0; requirementsIndex < requirementsJsonList.GetLength(); ++requirementsIndex) {
      m_requirements.push_back(requirementsJsonList[requirementsIndex].AsString());
    }
    m_requirementsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("checks")) {
    Aws::Utils::Array<JsonView> checksJsonList = jsonValue.GetArray("checks");
    for (unsigned checksIndex = 0; checksIndex < checksJsonList.GetLength(); ++checksIndex) {
      m_checks.push_back(checksJsonList[checksIndex].AsObject());
    }
    m_checksHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusId")) {
    m_statusId = jsonValue.GetInteger("statusId");
    m_statusIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remediation")) {
    m_remediation = jsonValue.GetString("remediation");
    m_remediationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remediationReferences")) {
    Aws::Utils::Array<JsonView> remediationReferencesJsonList = jsonValue.GetArray("remediationReferences");
    for (unsigned remediationReferencesIndex = 0; remediationReferencesIndex < remediationReferencesJsonList.GetLength();
         ++remediationReferencesIndex) {
      m_remediationReferences.push_back(remediationReferencesJsonList[remediationReferencesIndex].AsString());
    }
    m_remediationReferencesHasBeenSet = true;
  }
  return *this;
}

JsonValue FindingPosture::Jsonize() const {
  JsonValue payload;

  if (m_applicationHasBeenSet) {
    payload.WithString("application", m_application);
  }

  if (m_applicationUidHasBeenSet) {
    payload.WithString("applicationUid", m_applicationUid);
  }

  if (m_applicationVersionHasBeenSet) {
    payload.WithString("applicationVersion", m_applicationVersion);
  }

  if (m_controlHasBeenSet) {
    payload.WithString("control", m_control);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_standardsHasBeenSet) {
    Aws::Utils::Array<JsonValue> standardsJsonList(m_standards.size());
    for (unsigned standardsIndex = 0; standardsIndex < standardsJsonList.GetLength(); ++standardsIndex) {
      standardsJsonList[standardsIndex].AsString(m_standards[standardsIndex]);
    }
    payload.WithArray("standards", std::move(standardsJsonList));
  }

  if (m_requirementsHasBeenSet) {
    Aws::Utils::Array<JsonValue> requirementsJsonList(m_requirements.size());
    for (unsigned requirementsIndex = 0; requirementsIndex < requirementsJsonList.GetLength(); ++requirementsIndex) {
      requirementsJsonList[requirementsIndex].AsString(m_requirements[requirementsIndex]);
    }
    payload.WithArray("requirements", std::move(requirementsJsonList));
  }

  if (m_checksHasBeenSet) {
    Aws::Utils::Array<JsonValue> checksJsonList(m_checks.size());
    for (unsigned checksIndex = 0; checksIndex < checksJsonList.GetLength(); ++checksIndex) {
      checksJsonList[checksIndex].AsObject(m_checks[checksIndex].Jsonize());
    }
    payload.WithArray("checks", std::move(checksJsonList));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", m_status);
  }

  if (m_statusIdHasBeenSet) {
    payload.WithInteger("statusId", m_statusId);
  }

  if (m_remediationHasBeenSet) {
    payload.WithString("remediation", m_remediation);
  }

  if (m_remediationReferencesHasBeenSet) {
    Aws::Utils::Array<JsonValue> remediationReferencesJsonList(m_remediationReferences.size());
    for (unsigned remediationReferencesIndex = 0; remediationReferencesIndex < remediationReferencesJsonList.GetLength();
         ++remediationReferencesIndex) {
      remediationReferencesJsonList[remediationReferencesIndex].AsString(m_remediationReferences[remediationReferencesIndex]);
    }
    payload.WithArray("remediationReferences", std::move(remediationReferencesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
