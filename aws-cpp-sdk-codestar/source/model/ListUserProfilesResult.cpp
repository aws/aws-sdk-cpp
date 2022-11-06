/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar/model/ListUserProfilesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeStar::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListUserProfilesResult::ListUserProfilesResult()
{
}

ListUserProfilesResult::ListUserProfilesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListUserProfilesResult& ListUserProfilesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("userProfiles"))
  {
    Aws::Utils::Array<JsonView> userProfilesJsonList = jsonValue.GetArray("userProfiles");
    for(unsigned userProfilesIndex = 0; userProfilesIndex < userProfilesJsonList.GetLength(); ++userProfilesIndex)
    {
      m_userProfiles.push_back(userProfilesJsonList[userProfilesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
