/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/cognito-sync/model/ListIdentityPoolUsageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
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

ListIdentityPoolUsageResult::ListIdentityPoolUsageResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_maxResults(0),
    m_count(0)
{
  *this = result;
}

ListIdentityPoolUsageResult& ListIdentityPoolUsageResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("IdentityPoolUsages"))
  {
    Array<JsonValue> identityPoolUsagesJsonList = jsonValue.GetArray("IdentityPoolUsages");
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
