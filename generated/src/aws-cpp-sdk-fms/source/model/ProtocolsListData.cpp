/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/ProtocolsListData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

ProtocolsListData::ProtocolsListData() : 
    m_listIdHasBeenSet(false),
    m_listNameHasBeenSet(false),
    m_listUpdateTokenHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_protocolsListHasBeenSet(false),
    m_previousProtocolsListHasBeenSet(false)
{
}

ProtocolsListData::ProtocolsListData(JsonView jsonValue) : 
    m_listIdHasBeenSet(false),
    m_listNameHasBeenSet(false),
    m_listUpdateTokenHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_protocolsListHasBeenSet(false),
    m_previousProtocolsListHasBeenSet(false)
{
  *this = jsonValue;
}

ProtocolsListData& ProtocolsListData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ListId"))
  {
    m_listId = jsonValue.GetString("ListId");

    m_listIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ListName"))
  {
    m_listName = jsonValue.GetString("ListName");

    m_listNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ListUpdateToken"))
  {
    m_listUpdateToken = jsonValue.GetString("ListUpdateToken");

    m_listUpdateTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetDouble("CreateTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("LastUpdateTime");

    m_lastUpdateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProtocolsList"))
  {
    Aws::Utils::Array<JsonView> protocolsListJsonList = jsonValue.GetArray("ProtocolsList");
    for(unsigned protocolsListIndex = 0; protocolsListIndex < protocolsListJsonList.GetLength(); ++protocolsListIndex)
    {
      m_protocolsList.push_back(protocolsListJsonList[protocolsListIndex].AsString());
    }
    m_protocolsListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreviousProtocolsList"))
  {
    Aws::Map<Aws::String, JsonView> previousProtocolsListJsonMap = jsonValue.GetObject("PreviousProtocolsList").GetAllObjects();
    for(auto& previousProtocolsListItem : previousProtocolsListJsonMap)
    {
      Aws::Utils::Array<JsonView> protocolsListJsonList = previousProtocolsListItem.second.AsArray();
      Aws::Vector<Aws::String> protocolsListList;
      protocolsListList.reserve((size_t)protocolsListJsonList.GetLength());
      for(unsigned protocolsListIndex = 0; protocolsListIndex < protocolsListJsonList.GetLength(); ++protocolsListIndex)
      {
        protocolsListList.push_back(protocolsListJsonList[protocolsListIndex].AsString());
      }
      m_previousProtocolsList[previousProtocolsListItem.first] = std::move(protocolsListList);
    }
    m_previousProtocolsListHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtocolsListData::Jsonize() const
{
  JsonValue payload;

  if(m_listIdHasBeenSet)
  {
   payload.WithString("ListId", m_listId);

  }

  if(m_listNameHasBeenSet)
  {
   payload.WithString("ListName", m_listName);

  }

  if(m_listUpdateTokenHasBeenSet)
  {
   payload.WithString("ListUpdateToken", m_listUpdateToken);

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("CreateTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  if(m_protocolsListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> protocolsListJsonList(m_protocolsList.size());
   for(unsigned protocolsListIndex = 0; protocolsListIndex < protocolsListJsonList.GetLength(); ++protocolsListIndex)
   {
     protocolsListJsonList[protocolsListIndex].AsString(m_protocolsList[protocolsListIndex]);
   }
   payload.WithArray("ProtocolsList", std::move(protocolsListJsonList));

  }

  if(m_previousProtocolsListHasBeenSet)
  {
   JsonValue previousProtocolsListJsonMap;
   for(auto& previousProtocolsListItem : m_previousProtocolsList)
   {
     Aws::Utils::Array<JsonValue> protocolsListJsonList(previousProtocolsListItem.second.size());
     for(unsigned protocolsListIndex = 0; protocolsListIndex < protocolsListJsonList.GetLength(); ++protocolsListIndex)
     {
       protocolsListJsonList[protocolsListIndex].AsString(previousProtocolsListItem.second[protocolsListIndex]);
     }
     previousProtocolsListJsonMap.WithArray(previousProtocolsListItem.first, std::move(protocolsListJsonList));
   }
   payload.WithObject("PreviousProtocolsList", std::move(previousProtocolsListJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
