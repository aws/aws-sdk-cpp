/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/model/ListIdentityPoolUsageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CognitoSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIdentityPoolUsageResult::ListIdentityPoolUsageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListIdentityPoolUsageResult& ListIdentityPoolUsageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IdentityPoolUsages"))
  {
    Aws::Utils::Array<JsonView> identityPoolUsagesJsonList = jsonValue.GetArray("IdentityPoolUsages");
    for(unsigned identityPoolUsagesIndex = 0; identityPoolUsagesIndex < identityPoolUsagesJsonList.GetLength(); ++identityPoolUsagesIndex)
    {
      m_identityPoolUsages.push_back(identityPoolUsagesJsonList[identityPoolUsagesIndex].AsObject());
    }
    m_identityPoolUsagesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxResults"))
  {
    m_maxResults = jsonValue.GetInteger("MaxResults");
    m_maxResultsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInteger("Count");
    m_countHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
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
