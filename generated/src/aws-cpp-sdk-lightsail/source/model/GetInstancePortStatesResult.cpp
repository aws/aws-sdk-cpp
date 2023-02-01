/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetInstancePortStatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetInstancePortStatesResult::GetInstancePortStatesResult()
{
}

GetInstancePortStatesResult::GetInstancePortStatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetInstancePortStatesResult& GetInstancePortStatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("portStates"))
  {
    Aws::Utils::Array<JsonView> portStatesJsonList = jsonValue.GetArray("portStates");
    for(unsigned portStatesIndex = 0; portStatesIndex < portStatesJsonList.GetLength(); ++portStatesIndex)
    {
      m_portStates.push_back(portStatesJsonList[portStatesIndex].AsObject());
    }
  }



  return *this;
}
