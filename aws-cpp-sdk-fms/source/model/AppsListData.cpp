/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/AppsListData.h>
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

AppsListData::AppsListData() : 
    m_listIdHasBeenSet(false),
    m_listNameHasBeenSet(false),
    m_listUpdateTokenHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_appsListHasBeenSet(false),
    m_previousAppsListHasBeenSet(false)
{
}

AppsListData::AppsListData(JsonView jsonValue) : 
    m_listIdHasBeenSet(false),
    m_listNameHasBeenSet(false),
    m_listUpdateTokenHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_appsListHasBeenSet(false),
    m_previousAppsListHasBeenSet(false)
{
  *this = jsonValue;
}

AppsListData& AppsListData::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("AppsList"))
  {
    Aws::Utils::Array<JsonView> appsListJsonList = jsonValue.GetArray("AppsList");
    for(unsigned appsListIndex = 0; appsListIndex < appsListJsonList.GetLength(); ++appsListIndex)
    {
      m_appsList.push_back(appsListJsonList[appsListIndex].AsObject());
    }
    m_appsListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreviousAppsList"))
  {
    Aws::Map<Aws::String, JsonView> previousAppsListJsonMap = jsonValue.GetObject("PreviousAppsList").GetAllObjects();
    for(auto& previousAppsListItem : previousAppsListJsonMap)
    {
      Aws::Utils::Array<JsonView> appsListJsonList = previousAppsListItem.second.AsArray();
      Aws::Vector<App> appsListList;
      appsListList.reserve((size_t)appsListJsonList.GetLength());
      for(unsigned appsListIndex = 0; appsListIndex < appsListJsonList.GetLength(); ++appsListIndex)
      {
        appsListList.push_back(appsListJsonList[appsListIndex].AsObject());
      }
      m_previousAppsList[previousAppsListItem.first] = std::move(appsListList);
    }
    m_previousAppsListHasBeenSet = true;
  }

  return *this;
}

JsonValue AppsListData::Jsonize() const
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

  if(m_appsListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> appsListJsonList(m_appsList.size());
   for(unsigned appsListIndex = 0; appsListIndex < appsListJsonList.GetLength(); ++appsListIndex)
   {
     appsListJsonList[appsListIndex].AsObject(m_appsList[appsListIndex].Jsonize());
   }
   payload.WithArray("AppsList", std::move(appsListJsonList));

  }

  if(m_previousAppsListHasBeenSet)
  {
   JsonValue previousAppsListJsonMap;
   for(auto& previousAppsListItem : m_previousAppsList)
   {
     Aws::Utils::Array<JsonValue> appsListJsonList(previousAppsListItem.second.size());
     for(unsigned appsListIndex = 0; appsListIndex < appsListJsonList.GetLength(); ++appsListIndex)
     {
       appsListJsonList[appsListIndex].AsObject(previousAppsListItem.second[appsListIndex].Jsonize());
     }
     previousAppsListJsonMap.WithArray(previousAppsListItem.first, std::move(appsListJsonList));
   }
   payload.WithObject("PreviousAppsList", std::move(previousAppsListJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
