/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GetResourceConfigHistoryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResourceConfigHistoryResult::GetResourceConfigHistoryResult()
{
}

GetResourceConfigHistoryResult::GetResourceConfigHistoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetResourceConfigHistoryResult& GetResourceConfigHistoryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("configurationItems"))
  {
    Aws::Utils::Array<JsonView> configurationItemsJsonList = jsonValue.GetArray("configurationItems");
    for(unsigned configurationItemsIndex = 0; configurationItemsIndex < configurationItemsJsonList.GetLength(); ++configurationItemsIndex)
    {
      m_configurationItems.push_back(configurationItemsJsonList[configurationItemsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
