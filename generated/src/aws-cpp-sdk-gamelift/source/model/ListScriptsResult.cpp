/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ListScriptsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListScriptsResult::ListScriptsResult()
{
}

ListScriptsResult::ListScriptsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListScriptsResult& ListScriptsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Scripts"))
  {
    Aws::Utils::Array<JsonView> scriptsJsonList = jsonValue.GetArray("Scripts");
    for(unsigned scriptsIndex = 0; scriptsIndex < scriptsJsonList.GetLength(); ++scriptsIndex)
    {
      m_scripts.push_back(scriptsJsonList[scriptsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
