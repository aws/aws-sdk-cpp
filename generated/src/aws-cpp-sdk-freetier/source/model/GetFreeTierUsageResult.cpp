/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/freetier/model/GetFreeTierUsageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::FreeTier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFreeTierUsageResult::GetFreeTierUsageResult()
{
}

GetFreeTierUsageResult::GetFreeTierUsageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetFreeTierUsageResult& GetFreeTierUsageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("freeTierUsages"))
  {
    Aws::Utils::Array<JsonView> freeTierUsagesJsonList = jsonValue.GetArray("freeTierUsages");
    for(unsigned freeTierUsagesIndex = 0; freeTierUsagesIndex < freeTierUsagesJsonList.GetLength(); ++freeTierUsagesIndex)
    {
      m_freeTierUsages.push_back(freeTierUsagesJsonList[freeTierUsagesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
