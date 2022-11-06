/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ListInferenceEventsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInferenceEventsResult::ListInferenceEventsResult()
{
}

ListInferenceEventsResult::ListInferenceEventsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListInferenceEventsResult& ListInferenceEventsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("InferenceEventSummaries"))
  {
    Aws::Utils::Array<JsonView> inferenceEventSummariesJsonList = jsonValue.GetArray("InferenceEventSummaries");
    for(unsigned inferenceEventSummariesIndex = 0; inferenceEventSummariesIndex < inferenceEventSummariesJsonList.GetLength(); ++inferenceEventSummariesIndex)
    {
      m_inferenceEventSummaries.push_back(inferenceEventSummariesJsonList[inferenceEventSummariesIndex].AsObject());
    }
  }



  return *this;
}
