/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/AssetModelProperty.h>
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

AssetModelProperty::AssetModelProperty() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_dataType(PropertyDataType::NOT_SET),
    m_dataTypeHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

AssetModelProperty::AssetModelProperty(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_dataType(PropertyDataType::NOT_SET),
    m_dataTypeHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AssetModelProperty& AssetModelProperty::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue AssetModelProperty::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
