/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ListThreatEntitySetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListThreatEntitySetsResult::ListThreatEntitySetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListThreatEntitySetsResult& ListThreatEntitySetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("threatEntitySetIds"))
  {
    Aws::Utils::Array<JsonView> threatEntitySetIdsJsonList = jsonValue.GetArray("threatEntitySetIds");
    for(unsigned threatEntitySetIdsIndex = 0; threatEntitySetIdsIndex < threatEntitySetIdsJsonList.GetLength(); ++threatEntitySetIdsIndex)
    {
      m_threatEntitySetIds.push_back(threatEntitySetIdsJsonList[threatEntitySetIdsIndex].AsString());
    }
    m_threatEntitySetIdsHasBeenSet = true;
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
