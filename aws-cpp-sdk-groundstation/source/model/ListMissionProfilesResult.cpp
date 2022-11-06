/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/ListMissionProfilesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMissionProfilesResult::ListMissionProfilesResult()
{
}

ListMissionProfilesResult::ListMissionProfilesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMissionProfilesResult& ListMissionProfilesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("missionProfileList"))
  {
    Aws::Utils::Array<JsonView> missionProfileListJsonList = jsonValue.GetArray("missionProfileList");
    for(unsigned missionProfileListIndex = 0; missionProfileListIndex < missionProfileListJsonList.GetLength(); ++missionProfileListIndex)
    {
      m_missionProfileList.push_back(missionProfileListJsonList[missionProfileListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
