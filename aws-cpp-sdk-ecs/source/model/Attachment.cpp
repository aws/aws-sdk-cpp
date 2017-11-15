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

#include <aws/ecs/model/Attachment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

Attachment::Attachment() : 
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

Attachment::Attachment(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
  *this = jsonValue;
}

Attachment& Attachment::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("details"))
  {
    Array<JsonValue> detailsJsonList = jsonValue.GetArray("details");
    for(unsigned detailsIndex = 0; detailsIndex < detailsJsonList.GetLength(); ++detailsIndex)
    {
      m_details.push_back(detailsJsonList[detailsIndex].AsObject());
    }
    m_detailsHasBeenSet = true;
  }

  return *this;
}

JsonValue Attachment::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_detailsHasBeenSet)
  {
   Array<JsonValue> detailsJsonList(m_details.size());
   for(unsigned detailsIndex = 0; detailsIndex < detailsJsonList.GetLength(); ++detailsIndex)
   {
     detailsJsonList[detailsIndex].AsObject(m_details[detailsIndex].Jsonize());
   }
   payload.WithArray("details", std::move(detailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
