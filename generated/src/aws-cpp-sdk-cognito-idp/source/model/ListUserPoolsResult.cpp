/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ListUserPoolsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListUserPoolsResult::ListUserPoolsResult()
{
}

ListUserPoolsResult::ListUserPoolsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListUserPoolsResult& ListUserPoolsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UserPools"))
  {
    Aws::Utils::Array<JsonView> userPoolsJsonList = jsonValue.GetArray("UserPools");
    for(unsigned userPoolsIndex = 0; userPoolsIndex < userPoolsJsonList.GetLength(); ++userPoolsIndex)
    {
      m_userPools.push_back(userPoolsJsonList[userPoolsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
