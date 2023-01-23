/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/ListTablesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Honeycode::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTablesResult::ListTablesResult() : 
    m_workbookCursor(0)
{
}

ListTablesResult::ListTablesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_workbookCursor(0)
{
  *this = result;
}

ListTablesResult& ListTablesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("tables"))
  {
    Aws::Utils::Array<JsonView> tablesJsonList = jsonValue.GetArray("tables");
    for(unsigned tablesIndex = 0; tablesIndex < tablesJsonList.GetLength(); ++tablesIndex)
    {
      m_tables.push_back(tablesJsonList[tablesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("workbookCursor"))
  {
    m_workbookCursor = jsonValue.GetInt64("workbookCursor");

  }



  return *this;
}
