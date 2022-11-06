/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/ListLaunchProfilesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLaunchProfilesResult::ListLaunchProfilesResult()
{
}

ListLaunchProfilesResult::ListLaunchProfilesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLaunchProfilesResult& ListLaunchProfilesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("launchProfiles"))
  {
    Aws::Utils::Array<JsonView> launchProfilesJsonList = jsonValue.GetArray("launchProfiles");
    for(unsigned launchProfilesIndex = 0; launchProfilesIndex < launchProfilesJsonList.GetLength(); ++launchProfilesIndex)
    {
      m_launchProfiles.push_back(launchProfilesJsonList[launchProfilesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
