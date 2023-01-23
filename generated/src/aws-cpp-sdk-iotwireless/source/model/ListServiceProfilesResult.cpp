/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ListServiceProfilesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListServiceProfilesResult::ListServiceProfilesResult()
{
}

ListServiceProfilesResult::ListServiceProfilesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListServiceProfilesResult& ListServiceProfilesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ServiceProfileList"))
  {
    Aws::Utils::Array<JsonView> serviceProfileListJsonList = jsonValue.GetArray("ServiceProfileList");
    for(unsigned serviceProfileListIndex = 0; serviceProfileListIndex < serviceProfileListJsonList.GetLength(); ++serviceProfileListIndex)
    {
      m_serviceProfileList.push_back(serviceProfileListJsonList[serviceProfileListIndex].AsObject());
    }
  }



  return *this;
}
