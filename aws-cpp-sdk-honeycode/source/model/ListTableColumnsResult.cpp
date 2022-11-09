/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/ListTableColumnsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Honeycode::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTableColumnsResult::ListTableColumnsResult() : 
    m_workbookCursor(0)
{
}

ListTableColumnsResult::ListTableColumnsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_workbookCursor(0)
{
  *this = result;
}

ListTableColumnsResult& ListTableColumnsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("tableColumns"))
  {
    Aws::Utils::Array<JsonView> tableColumnsJsonList = jsonValue.GetArray("tableColumns");
    for(unsigned tableColumnsIndex = 0; tableColumnsIndex < tableColumnsJsonList.GetLength(); ++tableColumnsIndex)
    {
      m_tableColumns.push_back(tableColumnsJsonList[tableColumnsIndex].AsObject());
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
