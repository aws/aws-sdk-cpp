/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ExecuteQueryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ExecuteQueryResult::ExecuteQueryResult()
{
}

ExecuteQueryResult::ExecuteQueryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ExecuteQueryResult& ExecuteQueryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("columnDescriptions"))
  {
    Aws::Utils::Array<JsonView> columnDescriptionsJsonList = jsonValue.GetArray("columnDescriptions");
    for(unsigned columnDescriptionsIndex = 0; columnDescriptionsIndex < columnDescriptionsJsonList.GetLength(); ++columnDescriptionsIndex)
    {
      m_columnDescriptions.push_back(columnDescriptionsJsonList[columnDescriptionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("rows"))
  {
    Aws::Utils::Array<JsonView> rowsJsonList = jsonValue.GetArray("rows");
    for(unsigned rowsIndex = 0; rowsIndex < rowsJsonList.GetLength(); ++rowsIndex)
    {
      m_rows.push_back(rowsJsonList[rowsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
