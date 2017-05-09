/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ssm/model/ListInventoryEntriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInventoryEntriesResult::ListInventoryEntriesResult()
{
}

ListInventoryEntriesResult::ListInventoryEntriesResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListInventoryEntriesResult& ListInventoryEntriesResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("TypeName"))
  {
    m_typeName = jsonValue.GetString("TypeName");

  }

  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

  }

  if(jsonValue.ValueExists("SchemaVersion"))
  {
    m_schemaVersion = jsonValue.GetString("SchemaVersion");

  }

  if(jsonValue.ValueExists("CaptureTime"))
  {
    m_captureTime = jsonValue.GetString("CaptureTime");

  }

  if(jsonValue.ValueExists("Entries"))
  {
    Array<JsonValue> entriesJsonList = jsonValue.GetArray("Entries");
    for(unsigned entriesIndex = 0; entriesIndex < entriesJsonList.GetLength(); ++entriesIndex)
    {
      Aws::Map<Aws::String, JsonValue> inventoryItemEntryJsonMap = entriesJsonList[entriesIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::String> inventoryItemEntryMap;
      for(auto& inventoryItemEntryItem : inventoryItemEntryJsonMap)
      {
        inventoryItemEntryMap[inventoryItemEntryItem.first] = inventoryItemEntryItem.second.AsString();
      }
      m_entries.push_back(std::move(inventoryItemEntryMap));
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
