/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/GetAssessmentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubStrategyRecommendations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAssessmentResult::GetAssessmentResult()
{
}

GetAssessmentResult::GetAssessmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAssessmentResult& GetAssessmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assessmentTargets"))
  {
    Aws::Utils::Array<JsonView> assessmentTargetsJsonList = jsonValue.GetArray("assessmentTargets");
    for(unsigned assessmentTargetsIndex = 0; assessmentTargetsIndex < assessmentTargetsJsonList.GetLength(); ++assessmentTargetsIndex)
    {
      m_assessmentTargets.push_back(assessmentTargetsJsonList[assessmentTargetsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("dataCollectionDetails"))
  {
    m_dataCollectionDetails = jsonValue.GetObject("dataCollectionDetails");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }



  return *this;
}
