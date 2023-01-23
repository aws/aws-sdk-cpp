/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AdminListUserAuthEventsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AdminListUserAuthEventsResult::AdminListUserAuthEventsResult()
{
}

AdminListUserAuthEventsResult::AdminListUserAuthEventsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AdminListUserAuthEventsResult& AdminListUserAuthEventsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AuthEvents"))
  {
    Aws::Utils::Array<JsonView> authEventsJsonList = jsonValue.GetArray("AuthEvents");
    for(unsigned authEventsIndex = 0; authEventsIndex < authEventsJsonList.GetLength(); ++authEventsIndex)
    {
      m_authEvents.push_back(authEventsJsonList[authEventsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
