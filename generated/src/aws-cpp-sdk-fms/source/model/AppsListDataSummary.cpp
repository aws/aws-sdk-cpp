/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/AppsListDataSummary.h>
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

AppsListDataSummary::AppsListDataSummary() : 
    m_listArnHasBeenSet(false),
    m_listIdHasBeenSet(false),
    m_listNameHasBeenSet(false),
    m_appsListHasBeenSet(false)
{
}

AppsListDataSummary::AppsListDataSummary(JsonView jsonValue) : 
    m_listArnHasBeenSet(false),
    m_listIdHasBeenSet(false),
    m_listNameHasBeenSet(false),
    m_appsListHasBeenSet(false)
{
  *this = jsonValue;
}

AppsListDataSummary& AppsListDataSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ListArn"))
  {
    m_listArn = jsonValue.GetString("ListArn");

    m_listArnHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("AppsList"))
  {
    Aws::Utils::Array<JsonView> appsListJsonList = jsonValue.GetArray("AppsList");
    for(unsigned appsListIndex = 0; appsListIndex < appsListJsonList.GetLength(); ++appsListIndex)
    {
      m_appsList.push_back(appsListJsonList[appsListIndex].AsObject());
    }
    m_appsListHasBeenSet = true;
  }

  return *this;
}

JsonValue AppsListDataSummary::Jsonize() const
{
  JsonValue payload;

  if(m_listArnHasBeenSet)
  {
   payload.WithString("ListArn", m_listArn);

  }

  if(m_listIdHasBeenSet)
  {
   payload.WithString("ListId", m_listId);

  }

  if(m_listNameHasBeenSet)
  {
   payload.WithString("ListName", m_listName);

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

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
