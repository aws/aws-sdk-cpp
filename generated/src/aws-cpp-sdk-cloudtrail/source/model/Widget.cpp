﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/Widget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

Widget::Widget() : 
    m_queryAliasHasBeenSet(false),
    m_queryStatementHasBeenSet(false),
    m_queryParametersHasBeenSet(false),
    m_viewPropertiesHasBeenSet(false)
{
}

Widget::Widget(JsonView jsonValue)
  : Widget()
{
  *this = jsonValue;
}

Widget& Widget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QueryAlias"))
  {
    m_queryAlias = jsonValue.GetString("QueryAlias");

    m_queryAliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryStatement"))
  {
    m_queryStatement = jsonValue.GetString("QueryStatement");

    m_queryStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryParameters"))
  {
    Aws::Utils::Array<JsonView> queryParametersJsonList = jsonValue.GetArray("QueryParameters");
    for(unsigned queryParametersIndex = 0; queryParametersIndex < queryParametersJsonList.GetLength(); ++queryParametersIndex)
    {
      m_queryParameters.push_back(queryParametersJsonList[queryParametersIndex].AsString());
    }
    m_queryParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ViewProperties"))
  {
    Aws::Map<Aws::String, JsonView> viewPropertiesJsonMap = jsonValue.GetObject("ViewProperties").GetAllObjects();
    for(auto& viewPropertiesItem : viewPropertiesJsonMap)
    {
      m_viewProperties[viewPropertiesItem.first] = viewPropertiesItem.second.AsString();
    }
    m_viewPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue Widget::Jsonize() const
{
  JsonValue payload;

  if(m_queryAliasHasBeenSet)
  {
   payload.WithString("QueryAlias", m_queryAlias);

  }

  if(m_queryStatementHasBeenSet)
  {
   payload.WithString("QueryStatement", m_queryStatement);

  }

  if(m_queryParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> queryParametersJsonList(m_queryParameters.size());
   for(unsigned queryParametersIndex = 0; queryParametersIndex < queryParametersJsonList.GetLength(); ++queryParametersIndex)
   {
     queryParametersJsonList[queryParametersIndex].AsString(m_queryParameters[queryParametersIndex]);
   }
   payload.WithArray("QueryParameters", std::move(queryParametersJsonList));

  }

  if(m_viewPropertiesHasBeenSet)
  {
   JsonValue viewPropertiesJsonMap;
   for(auto& viewPropertiesItem : m_viewProperties)
   {
     viewPropertiesJsonMap.WithString(viewPropertiesItem.first, viewPropertiesItem.second);
   }
   payload.WithObject("ViewProperties", std::move(viewPropertiesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
