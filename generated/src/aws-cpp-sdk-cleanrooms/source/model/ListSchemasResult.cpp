﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ListSchemasResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSchemasResult::ListSchemasResult()
{
}

ListSchemasResult::ListSchemasResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSchemasResult& ListSchemasResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("schemaSummaries"))
  {
    Aws::Utils::Array<JsonView> schemaSummariesJsonList = jsonValue.GetArray("schemaSummaries");
    for(unsigned schemaSummariesIndex = 0; schemaSummariesIndex < schemaSummariesJsonList.GetLength(); ++schemaSummariesIndex)
    {
      m_schemaSummaries.push_back(schemaSummariesJsonList[schemaSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
