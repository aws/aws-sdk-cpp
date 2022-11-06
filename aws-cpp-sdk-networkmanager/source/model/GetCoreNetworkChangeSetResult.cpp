/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/GetCoreNetworkChangeSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCoreNetworkChangeSetResult::GetCoreNetworkChangeSetResult()
{
}

GetCoreNetworkChangeSetResult::GetCoreNetworkChangeSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCoreNetworkChangeSetResult& GetCoreNetworkChangeSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CoreNetworkChanges"))
  {
    Aws::Utils::Array<JsonView> coreNetworkChangesJsonList = jsonValue.GetArray("CoreNetworkChanges");
    for(unsigned coreNetworkChangesIndex = 0; coreNetworkChangesIndex < coreNetworkChangesJsonList.GetLength(); ++coreNetworkChangesIndex)
    {
      m_coreNetworkChanges.push_back(coreNetworkChangesJsonList[coreNetworkChangesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
