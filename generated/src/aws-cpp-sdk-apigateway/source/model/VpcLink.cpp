﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/VpcLink.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

VpcLink::VpcLink(JsonView jsonValue)
{
  *this = jsonValue;
}

VpcLink& VpcLink::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetArns"))
  {
    Aws::Utils::Array<JsonView> targetArnsJsonList = jsonValue.GetArray("targetArns");
    for(unsigned targetArnsIndex = 0; targetArnsIndex < targetArnsJsonList.GetLength(); ++targetArnsIndex)
    {
      m_targetArns.push_back(targetArnsJsonList[targetArnsIndex].AsString());
    }
    m_targetArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = VpcLinkStatusMapper::GetVpcLinkStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue VpcLink::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_targetArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetArnsJsonList(m_targetArns.size());
   for(unsigned targetArnsIndex = 0; targetArnsIndex < targetArnsJsonList.GetLength(); ++targetArnsIndex)
   {
     targetArnsJsonList[targetArnsIndex].AsString(m_targetArns[targetArnsIndex]);
   }
   payload.WithArray("targetArns", std::move(targetArnsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", VpcLinkStatusMapper::GetNameForVpcLinkStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws
