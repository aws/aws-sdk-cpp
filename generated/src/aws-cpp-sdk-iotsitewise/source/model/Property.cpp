/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/Property.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

Property::Property() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_notificationHasBeenSet(false),
    m_dataType(PropertyDataType::NOT_SET),
    m_dataTypeHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_externalIdHasBeenSet(false)
{
}

Property::Property(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_notificationHasBeenSet(false),
    m_dataType(PropertyDataType::NOT_SET),
    m_dataTypeHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_externalIdHasBeenSet(false)
{
  *this = jsonValue;
}

Property& Property::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("alias"))
  {
    m_alias = jsonValue.GetString("alias");

    m_aliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notification"))
  {
    m_notification = jsonValue.GetObject("notification");

    m_notificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataType"))
  {
    m_dataType = PropertyDataTypeMapper::GetPropertyDataTypeForName(jsonValue.GetString("dataType"));

    m_dataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unit"))
  {
    m_unit = jsonValue.GetString("unit");

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetObject("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("path"))
  {
    Aws::Utils::Array<JsonView> pathJsonList = jsonValue.GetArray("path");
    for(unsigned pathIndex = 0; pathIndex < pathJsonList.GetLength(); ++pathIndex)
    {
      m_path.push_back(pathJsonList[pathIndex].AsObject());
    }
    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalId"))
  {
    m_externalId = jsonValue.GetString("externalId");

    m_externalIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Property::Jsonize() const
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

  if(m_aliasHasBeenSet)
  {
   payload.WithString("alias", m_alias);

  }

  if(m_notificationHasBeenSet)
  {
   payload.WithObject("notification", m_notification.Jsonize());

  }

  if(m_dataTypeHasBeenSet)
  {
   payload.WithString("dataType", PropertyDataTypeMapper::GetNameForPropertyDataType(m_dataType));
  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", m_unit);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithObject("type", m_type.Jsonize());

  }

  if(m_pathHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pathJsonList(m_path.size());
   for(unsigned pathIndex = 0; pathIndex < pathJsonList.GetLength(); ++pathIndex)
   {
     pathJsonList[pathIndex].AsObject(m_path[pathIndex].Jsonize());
   }
   payload.WithArray("path", std::move(pathJsonList));

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("externalId", m_externalId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
