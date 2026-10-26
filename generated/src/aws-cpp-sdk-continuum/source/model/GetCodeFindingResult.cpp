/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/GetCodeFindingResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Continuum::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCodeFindingResult::GetCodeFindingResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetCodeFindingResult& GetCodeFindingResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("type")) {
    m_type = FindingTypeMapper::GetFindingTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("severity")) {
    m_severity = FindingSeverityIdMapper::GetFindingSeverityIdForName(jsonValue.GetString("severity"));
    m_severityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("summary")) {
    m_summary = jsonValue.GetString("summary");
    m_summaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("detailedDescription")) {
    m_detailedDescription = jsonValue.GetString("detailedDescription");
    m_detailedDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("category")) {
    m_category = jsonValue.GetString("category");
    m_categoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subCategory")) {
    m_subCategory = jsonValue.GetString("subCategory");
    m_subCategoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cweIds")) {
    Aws::Utils::Array<JsonView> cweIdsJsonList = jsonValue.GetArray("cweIds");
    for (unsigned cweIdsIndex = 0; cweIdsIndex < cweIdsJsonList.GetLength(); ++cweIdsIndex) {
      m_cweIds.push_back(cweIdsJsonList[cweIdsIndex].AsString());
    }
    m_cweIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("owaspCategory")) {
    m_owaspCategory = jsonValue.GetString("owaspCategory");
    m_owaspCategoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mitigation")) {
    m_mitigation = jsonValue.GetString("mitigation");
    m_mitigationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("filePath")) {
    m_filePath = jsonValue.GetString("filePath");
    m_filePathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lineNumber")) {
    m_lineNumber = jsonValue.GetInteger("lineNumber");
    m_lineNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cveId")) {
    m_cveId = jsonValue.GetString("cveId");
    m_cveIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cvssBaseScore")) {
    m_cvssBaseScore = jsonValue.GetDouble("cvssBaseScore");
    m_cvssBaseScoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("affectedPackages")) {
    Aws::Utils::Array<JsonView> affectedPackagesJsonList = jsonValue.GetArray("affectedPackages");
    for (unsigned affectedPackagesIndex = 0; affectedPackagesIndex < affectedPackagesJsonList.GetLength(); ++affectedPackagesIndex) {
      m_affectedPackages.push_back(affectedPackagesJsonList[affectedPackagesIndex].AsObject());
    }
    m_affectedPackagesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vulnerableCode")) {
    m_vulnerableCode = jsonValue.GetString("vulnerableCode");
    m_vulnerableCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("relevantInputs")) {
    Aws::Utils::Array<JsonView> relevantInputsJsonList = jsonValue.GetArray("relevantInputs");
    for (unsigned relevantInputsIndex = 0; relevantInputsIndex < relevantInputsJsonList.GetLength(); ++relevantInputsIndex) {
      m_relevantInputs.push_back(relevantInputsJsonList[relevantInputsIndex].AsString());
    }
    m_relevantInputsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stepsToReproduce")) {
    Aws::Utils::Array<JsonView> stepsToReproduceJsonList = jsonValue.GetArray("stepsToReproduce");
    for (unsigned stepsToReproduceIndex = 0; stepsToReproduceIndex < stepsToReproduceJsonList.GetLength(); ++stepsToReproduceIndex) {
      m_stepsToReproduce.push_back(stepsToReproduceJsonList[stepsToReproduceIndex].AsString());
    }
    m_stepsToReproduceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("validation")) {
    m_validation = jsonValue.GetObject("validation");
    m_validationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endLine")) {
    m_endLine = jsonValue.GetInteger("endLine");
    m_endLineHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mitreTechniques")) {
    Aws::Utils::Array<JsonView> mitreTechniquesJsonList = jsonValue.GetArray("mitreTechniques");
    for (unsigned mitreTechniquesIndex = 0; mitreTechniquesIndex < mitreTechniquesJsonList.GetLength(); ++mitreTechniquesIndex) {
      m_mitreTechniques.push_back(mitreTechniquesJsonList[mitreTechniquesIndex].AsString());
    }
    m_mitreTechniquesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remediationReferences")) {
    Aws::Utils::Array<JsonView> remediationReferencesJsonList = jsonValue.GetArray("remediationReferences");
    for (unsigned remediationReferencesIndex = 0; remediationReferencesIndex < remediationReferencesJsonList.GetLength();
         ++remediationReferencesIndex) {
      m_remediationReferences.push_back(remediationReferencesJsonList[remediationReferencesIndex].AsString());
    }
    m_remediationReferencesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ocsfClass")) {
    m_ocsfClass = FindingOcsfClassMapper::GetFindingOcsfClassForName(jsonValue.GetString("ocsfClass"));
    m_ocsfClassHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ocsfSchemaVersion")) {
    m_ocsfSchemaVersion = jsonValue.GetString("ocsfSchemaVersion");
    m_ocsfSchemaVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("productName")) {
    m_productName = jsonValue.GetString("productName");
    m_productNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("productVendorName")) {
    m_productVendorName = jsonValue.GetString("productVendorName");
    m_productVendorNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("productVersion")) {
    m_productVersion = jsonValue.GetString("productVersion");
    m_productVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceStatus")) {
    m_sourceStatus = jsonValue.GetString("sourceStatus");
    m_sourceStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceStatusId")) {
    m_sourceStatusId = jsonValue.GetInteger("sourceStatusId");
    m_sourceStatusIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("firstSeenAt")) {
    m_firstSeenAt = jsonValue.GetString("firstSeenAt");
    m_firstSeenAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingTypes")) {
    Aws::Utils::Array<JsonView> findingTypesJsonList = jsonValue.GetArray("findingTypes");
    for (unsigned findingTypesIndex = 0; findingTypesIndex < findingTypesJsonList.GetLength(); ++findingTypesIndex) {
      m_findingTypes.push_back(findingTypesJsonList[findingTypesIndex].AsString());
    }
    m_findingTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vulnerabilities")) {
    Aws::Utils::Array<JsonView> vulnerabilitiesJsonList = jsonValue.GetArray("vulnerabilities");
    for (unsigned vulnerabilitiesIndex = 0; vulnerabilitiesIndex < vulnerabilitiesJsonList.GetLength(); ++vulnerabilitiesIndex) {
      m_vulnerabilities.push_back(vulnerabilitiesJsonList[vulnerabilitiesIndex].AsObject());
    }
    m_vulnerabilitiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resources")) {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("resources");
    for (unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex) {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsObject());
    }
    m_resourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("posture")) {
    m_posture = jsonValue.GetObject("posture");
    m_postureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingId")) {
    m_findingId = jsonValue.GetString("findingId");
    m_findingIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingArn")) {
    m_findingArn = jsonValue.GetString("findingArn");
    m_findingArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("environmentId")) {
    m_environmentId = jsonValue.GetString("environmentId");
    m_environmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("source")) {
    m_source = jsonValue.GetString("source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceFindingId")) {
    m_sourceFindingId = jsonValue.GetString("sourceFindingId");
    m_sourceFindingIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reportedAt")) {
    m_reportedAt = jsonValue.GetString("reportedAt");
    m_reportedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = FindingStatusMapper::GetFindingStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusUpdatedAt")) {
    m_statusUpdatedAt = jsonValue.GetString("statusUpdatedAt");
    m_statusUpdatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scanRunId")) {
    m_scanRunId = jsonValue.GetString("scanRunId");
    m_scanRunIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusMessage")) {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("discardReason")) {
    m_discardReason = FindingDiscardReasonMapper::GetFindingDiscardReasonForName(jsonValue.GetString("discardReason"));
    m_discardReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("discardReasoning")) {
    m_discardReasoning = jsonValue.GetString("discardReasoning");
    m_discardReasoningHasBeenSet = true;
  }
  if (jsonValue.ValueExists("duplicateOfIssueId")) {
    m_duplicateOfIssueId = jsonValue.GetString("duplicateOfIssueId");
    m_duplicateOfIssueIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdIssueId")) {
    m_createdIssueId = jsonValue.GetString("createdIssueId");
    m_createdIssueIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("completedAt")) {
    m_completedAt = jsonValue.GetString("completedAt");
    m_completedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
