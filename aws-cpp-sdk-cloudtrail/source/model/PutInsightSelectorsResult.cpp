/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/PutInsightSelectorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutInsightSelectorsResult::PutInsightSelectorsResult()
{
}

PutInsightSelectorsResult::PutInsightSelectorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutInsightSelectorsResult& PutInsightSelectorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TrailARN"))
  {
    m_trailARN = jsonValue.GetString("TrailARN");

  }

  if(jsonValue.ValueExists("InsightSelectors"))
  {
    Aws::Utils::Array<JsonView> insightSelectorsJsonList = jsonValue.GetArray("InsightSelectors");
    for(unsigned insightSelectorsIndex = 0; insightSelectorsIndex < insightSelectorsJsonList.GetLength(); ++insightSelectorsIndex)
    {
      m_insightSelectors.push_back(insightSelectorsJsonList[insightSelectorsIndex].AsObject());
    }
  }



  return *this;
}
