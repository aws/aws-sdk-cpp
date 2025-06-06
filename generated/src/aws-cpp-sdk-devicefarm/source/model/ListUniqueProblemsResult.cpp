﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/ListUniqueProblemsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListUniqueProblemsResult::ListUniqueProblemsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListUniqueProblemsResult& ListUniqueProblemsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("uniqueProblems"))
  {
    Aws::Map<Aws::String, JsonView> uniqueProblemsJsonMap = jsonValue.GetObject("uniqueProblems").GetAllObjects();
    for(auto& uniqueProblemsItem : uniqueProblemsJsonMap)
    {
      Aws::Utils::Array<JsonView> uniqueProblemsJsonList = uniqueProblemsItem.second.AsArray();
      Aws::Vector<UniqueProblem> uniqueProblemsList;
      uniqueProblemsList.reserve((size_t)uniqueProblemsJsonList.GetLength());
      for(unsigned uniqueProblemsIndex = 0; uniqueProblemsIndex < uniqueProblemsJsonList.GetLength(); ++uniqueProblemsIndex)
      {
        uniqueProblemsList.push_back(uniqueProblemsJsonList[uniqueProblemsIndex].AsObject());
      }
      m_uniqueProblems[ExecutionResultMapper::GetExecutionResultForName(uniqueProblemsItem.first)] = std::move(uniqueProblemsList);
    }
    m_uniqueProblemsHasBeenSet = true;
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
