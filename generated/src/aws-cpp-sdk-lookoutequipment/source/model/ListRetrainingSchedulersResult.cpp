/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ListRetrainingSchedulersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRetrainingSchedulersResult::ListRetrainingSchedulersResult()
{
}

ListRetrainingSchedulersResult::ListRetrainingSchedulersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRetrainingSchedulersResult& ListRetrainingSchedulersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RetrainingSchedulerSummaries"))
  {
    Aws::Utils::Array<JsonView> retrainingSchedulerSummariesJsonList = jsonValue.GetArray("RetrainingSchedulerSummaries");
    for(unsigned retrainingSchedulerSummariesIndex = 0; retrainingSchedulerSummariesIndex < retrainingSchedulerSummariesJsonList.GetLength(); ++retrainingSchedulerSummariesIndex)
    {
      m_retrainingSchedulerSummaries.push_back(retrainingSchedulerSummariesJsonList[retrainingSchedulerSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
