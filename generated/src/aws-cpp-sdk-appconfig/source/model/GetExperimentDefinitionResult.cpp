/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/GetExperimentDefinitionResult.h>
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

GetExperimentDefinitionResult::GetExperimentDefinitionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetExperimentDefinitionResult& GetExperimentDefinitionResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ApplicationId")) {
    m_applicationId = jsonValue.GetString("ApplicationId");
    m_applicationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Hypothesis")) {
    m_hypothesis = jsonValue.GetString("Hypothesis");
    m_hypothesisHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = ExperimentDefinitionStatusMapper::GetExperimentDefinitionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConfigurationProfileId")) {
    m_configurationProfileId = jsonValue.GetString("ConfigurationProfileId");
    m_configurationProfileIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EnvironmentId")) {
    m_environmentId = jsonValue.GetString("EnvironmentId");
    m_environmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FlagKey")) {
    m_flagKey = jsonValue.GetString("FlagKey");
    m_flagKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AudienceRule")) {
    m_audienceRule = jsonValue.GetString("AudienceRule");
    m_audienceRuleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AudienceDescription")) {
    m_audienceDescription = jsonValue.GetString("AudienceDescription");
    m_audienceDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LaunchCriteria")) {
    m_launchCriteria = jsonValue.GetString("LaunchCriteria");
    m_launchCriteriaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Treatments")) {
    Aws::Utils::Array<JsonView> treatmentsJsonList = jsonValue.GetArray("Treatments");
    for (unsigned treatmentsIndex = 0; treatmentsIndex < treatmentsJsonList.GetLength(); ++treatmentsIndex) {
      m_treatments.push_back(treatmentsJsonList[treatmentsIndex].AsObject());
    }
    m_treatmentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Control")) {
    m_control = jsonValue.GetObject("Control");
    m_controlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetString("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KmsKeyIdentifier")) {
    m_kmsKeyIdentifier = jsonValue.GetString("KmsKeyIdentifier");
    m_kmsKeyIdentifierHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
