/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/ListNetworkSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListNetworkSettingsResult::ListNetworkSettingsResult()
{
}

ListNetworkSettingsResult::ListNetworkSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListNetworkSettingsResult& ListNetworkSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("networkSettings"))
  {
    Aws::Utils::Array<JsonView> networkSettingsJsonList = jsonValue.GetArray("networkSettings");
    for(unsigned networkSettingsIndex = 0; networkSettingsIndex < networkSettingsJsonList.GetLength(); ++networkSettingsIndex)
    {
      m_networkSettings.push_back(networkSettingsJsonList[networkSettingsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
