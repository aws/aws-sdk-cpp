/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/StartExperimentRunResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartExperimentRunResult::StartExperimentRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

StartExperimentRunResult& StartExperimentRunResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ApplicationId")) {
    m_applicationId = jsonValue.GetString("ApplicationId");
    m_applicationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExperimentDefinitionId")) {
    m_experimentDefinitionId = jsonValue.GetString("ExperimentDefinitionId");
    m_experimentDefinitionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Run")) {
    m_run = jsonValue.GetInteger("Run");
    m_runHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = ExperimentRunStatusMapper::GetExperimentRunStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExposurePercentage")) {
    m_exposurePercentage = jsonValue.GetDouble("ExposurePercentage");
    m_exposurePercentageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TreatmentOverrides")) {
    m_treatmentOverrides = jsonValue.GetObject("TreatmentOverrides");
    m_treatmentOverridesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Result")) {
    m_result = jsonValue.GetObject("Result");
    m_resultHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartedAt")) {
    m_startedAt = jsonValue.GetString("StartedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetString("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndedAt")) {
    m_endedAt = jsonValue.GetString("EndedAt");
    m_endedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExperimentDefinitionSnapshot")) {
    m_experimentDefinitionSnapshot = jsonValue.GetObject("ExperimentDefinitionSnapshot");
    m_experimentDefinitionSnapshotHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
