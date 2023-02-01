/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/ListNetworkProfilesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListNetworkProfilesResult::ListNetworkProfilesResult()
{
}

ListNetworkProfilesResult::ListNetworkProfilesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListNetworkProfilesResult& ListNetworkProfilesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("networkProfiles"))
  {
    Aws::Utils::Array<JsonView> networkProfilesJsonList = jsonValue.GetArray("networkProfiles");
    for(unsigned networkProfilesIndex = 0; networkProfilesIndex < networkProfilesJsonList.GetLength(); ++networkProfilesIndex)
    {
      m_networkProfiles.push_back(networkProfilesJsonList[networkProfilesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
