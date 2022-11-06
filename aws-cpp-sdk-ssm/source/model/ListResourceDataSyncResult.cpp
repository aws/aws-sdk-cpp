/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ListResourceDataSyncResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResourceDataSyncResult::ListResourceDataSyncResult()
{
}

ListResourceDataSyncResult::ListResourceDataSyncResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListResourceDataSyncResult& ListResourceDataSyncResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceDataSyncItems"))
  {
    Aws::Utils::Array<JsonView> resourceDataSyncItemsJsonList = jsonValue.GetArray("ResourceDataSyncItems");
    for(unsigned resourceDataSyncItemsIndex = 0; resourceDataSyncItemsIndex < resourceDataSyncItemsJsonList.GetLength(); ++resourceDataSyncItemsIndex)
    {
      m_resourceDataSyncItems.push_back(resourceDataSyncItemsJsonList[resourceDataSyncItemsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
