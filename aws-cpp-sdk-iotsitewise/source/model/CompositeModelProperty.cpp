/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/CompositeModelProperty.h>
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

CompositeModelProperty::CompositeModelProperty() : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_assetPropertyHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CompositeModelProperty::CompositeModelProperty(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_assetPropertyHasBeenSet(false),
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

CompositeModelProperty& CompositeModelProperty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assetProperty"))
  {
    m_assetProperty = jsonValue.GetObject("assetProperty");

    m_assetPropertyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue CompositeModelProperty::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_assetPropertyHasBeenSet)
  {
   payload.WithObject("assetProperty", m_assetProperty.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
