/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/model/ListIdentityPoolUsageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIdentityPoolUsageResult::ListIdentityPoolUsageResult() : 
    m_maxResults(0),
    m_count(0)
{
}

ListIdentityPoolUsageResult::ListIdentityPoolUsageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_maxResults(0),
    m_count(0)
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
  }

  if(jsonValue.ValueExists("MaxResults"))
  {
    m_maxResults = jsonValue.GetInteger("MaxResults");

  }

  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInteger("Count");

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
