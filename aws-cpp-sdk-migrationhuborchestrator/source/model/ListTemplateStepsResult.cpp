/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/ListTemplateStepsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTemplateStepsResult::ListTemplateStepsResult()
{
}

ListTemplateStepsResult::ListTemplateStepsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTemplateStepsResult& ListTemplateStepsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("templateStepSummaryList"))
  {
    Aws::Utils::Array<JsonView> templateStepSummaryListJsonList = jsonValue.GetArray("templateStepSummaryList");
    for(unsigned templateStepSummaryListIndex = 0; templateStepSummaryListIndex < templateStepSummaryListJsonList.GetLength(); ++templateStepSummaryListIndex)
    {
      m_templateStepSummaryList.push_back(templateStepSummaryListJsonList[templateStepSummaryListIndex].AsObject());
    }
  }



  return *this;
}
