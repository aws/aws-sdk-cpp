/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/AssetProperty.h>
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

AssetProperty::AssetProperty() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_notificationHasBeenSet(false),
    m_dataType(PropertyDataType::NOT_SET),
    m_dataTypeHasBeenSet(false),
    m_unitHasBeenSet(false)
{
}

AssetProperty::AssetProperty(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_notificationHasBeenSet(false),
    m_dataType(PropertyDataType::NOT_SET),
    m_dataTypeHasBeenSet(false),
    m_unitHasBeenSet(false)
{
  *this = jsonValue;
}

AssetProperty& AssetProperty::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue AssetProperty::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
