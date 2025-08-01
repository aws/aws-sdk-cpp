/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/GetPlanEvaluationStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ARCRegionswitch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPlanEvaluationStatusResult::GetPlanEvaluationStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPlanEvaluationStatusResult& GetPlanEvaluationStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("planArn"))
  {
    m_planArn = jsonValue.GetString("planArn");
    m_planArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastEvaluationTime"))
  {
    m_lastEvaluationTime = jsonValue.GetDouble("lastEvaluationTime");
    m_lastEvaluationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastEvaluatedVersion"))
  {
    m_lastEvaluatedVersion = jsonValue.GetString("lastEvaluatedVersion");
    m_lastEvaluatedVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("evaluationState"))
  {
    m_evaluationState = EvaluationStatusMapper::GetEvaluationStatusForName(jsonValue.GetString("evaluationState"));
    m_evaluationStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("warnings"))
  {
    Aws::Utils::Array<JsonView> warningsJsonList = jsonValue.GetArray("warnings");
    for(unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex)
    {
      m_warnings.push_back(warningsJsonList[warningsIndex].AsObject());
    }
    m_warningsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
