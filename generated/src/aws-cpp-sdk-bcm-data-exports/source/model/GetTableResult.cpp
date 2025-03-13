/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/GetTableResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BCMDataExports::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTableResult::GetTableResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTableResult& GetTableResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Schema"))
  {
    Aws::Utils::Array<JsonView> schemaJsonList = jsonValue.GetArray("Schema");
    for(unsigned schemaIndex = 0; schemaIndex < schemaJsonList.GetLength(); ++schemaIndex)
    {
      m_schema.push_back(schemaJsonList[schemaIndex].AsObject());
    }
    m_schemaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");
    m_tableNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TableProperties"))
  {
    Aws::Map<Aws::String, JsonView> tablePropertiesJsonMap = jsonValue.GetObject("TableProperties").GetAllObjects();
    for(auto& tablePropertiesItem : tablePropertiesJsonMap)
    {
      m_tableProperties[tablePropertiesItem.first] = tablePropertiesItem.second.AsString();
    }
    m_tablePropertiesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
