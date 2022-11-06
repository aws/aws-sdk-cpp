/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetActiveNamesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetActiveNamesResult::GetActiveNamesResult()
{
}

GetActiveNamesResult::GetActiveNamesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetActiveNamesResult& GetActiveNamesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("activeNames"))
  {
    Aws::Utils::Array<JsonView> activeNamesJsonList = jsonValue.GetArray("activeNames");
    for(unsigned activeNamesIndex = 0; activeNamesIndex < activeNamesJsonList.GetLength(); ++activeNamesIndex)
    {
      m_activeNames.push_back(activeNamesJsonList[activeNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("nextPageToken");

  }



  return *this;
}
