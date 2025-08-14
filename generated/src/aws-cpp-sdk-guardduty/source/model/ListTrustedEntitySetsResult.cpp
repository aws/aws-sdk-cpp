/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ListTrustedEntitySetsResult.h>
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

ListTrustedEntitySetsResult::ListTrustedEntitySetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTrustedEntitySetsResult& ListTrustedEntitySetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("trustedEntitySetIds"))
  {
    Aws::Utils::Array<JsonView> trustedEntitySetIdsJsonList = jsonValue.GetArray("trustedEntitySetIds");
    for(unsigned trustedEntitySetIdsIndex = 0; trustedEntitySetIdsIndex < trustedEntitySetIdsJsonList.GetLength(); ++trustedEntitySetIdsIndex)
    {
      m_trustedEntitySetIds.push_back(trustedEntitySetIdsJsonList[trustedEntitySetIdsIndex].AsString());
    }
    m_trustedEntitySetIdsHasBeenSet = true;
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
