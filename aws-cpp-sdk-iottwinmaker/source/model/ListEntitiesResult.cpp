/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ListEntitiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEntitiesResult::ListEntitiesResult()
{
}

ListEntitiesResult::ListEntitiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEntitiesResult& ListEntitiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("entitySummaries"))
  {
    Aws::Utils::Array<JsonView> entitySummariesJsonList = jsonValue.GetArray("entitySummaries");
    for(unsigned entitySummariesIndex = 0; entitySummariesIndex < entitySummariesJsonList.GetLength(); ++entitySummariesIndex)
    {
      m_entitySummaries.push_back(entitySummariesJsonList[entitySummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
