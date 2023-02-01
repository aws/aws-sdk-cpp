/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/ListInstanceProfilesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInstanceProfilesResult::ListInstanceProfilesResult()
{
}

ListInstanceProfilesResult::ListInstanceProfilesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListInstanceProfilesResult& ListInstanceProfilesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("instanceProfiles"))
  {
    Aws::Utils::Array<JsonView> instanceProfilesJsonList = jsonValue.GetArray("instanceProfiles");
    for(unsigned instanceProfilesIndex = 0; instanceProfilesIndex < instanceProfilesJsonList.GetLength(); ++instanceProfilesIndex)
    {
      m_instanceProfiles.push_back(instanceProfilesJsonList[instanceProfilesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
