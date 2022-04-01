﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/QuickConnect.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

QuickConnect::QuickConnect() : 
    m_quickConnectARNHasBeenSet(false),
    m_quickConnectIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_quickConnectConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

QuickConnect::QuickConnect(JsonView jsonValue) : 
    m_quickConnectARNHasBeenSet(false),
    m_quickConnectIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_quickConnectConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

QuickConnect& QuickConnect::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QuickConnectARN"))
  {
    m_quickConnectARN = jsonValue.GetString("QuickConnectARN");

    m_quickConnectARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuickConnectId"))
  {
    m_quickConnectId = jsonValue.GetString("QuickConnectId");

    m_quickConnectIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuickConnectConfig"))
  {
    m_quickConnectConfig = jsonValue.GetObject("QuickConnectConfig");

    m_quickConnectConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue QuickConnect::Jsonize() const
{
  JsonValue payload;

  if(m_quickConnectARNHasBeenSet)
  {
   payload.WithString("QuickConnectARN", m_quickConnectARN);

  }

  if(m_quickConnectIdHasBeenSet)
  {
   payload.WithString("QuickConnectId", m_quickConnectId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_quickConnectConfigHasBeenSet)
  {
   payload.WithObject("QuickConnectConfig", m_quickConnectConfig.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
