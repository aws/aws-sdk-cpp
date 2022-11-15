/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetTablesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTablesResult::GetTablesResult()
{
}

GetTablesResult::GetTablesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTablesResult& GetTablesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TableList"))
  {
    Aws::Utils::Array<JsonView> tableListJsonList = jsonValue.GetArray("TableList");
    for(unsigned tableListIndex = 0; tableListIndex < tableListJsonList.GetLength(); ++tableListIndex)
    {
      m_tableList.push_back(tableListJsonList[tableListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
