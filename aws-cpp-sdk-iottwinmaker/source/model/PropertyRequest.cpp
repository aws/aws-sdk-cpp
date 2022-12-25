/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/PropertyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

PropertyRequest::PropertyRequest() : 
    m_definitionHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_updateType(PropertyUpdateType::NOT_SET),
    m_updateTypeHasBeenSet(false)
{
}

PropertyRequest::PropertyRequest(JsonView jsonValue) : 
    m_definitionHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_updateType(PropertyUpdateType::NOT_SET),
    m_updateTypeHasBeenSet(false)
{
  *this = jsonValue;
}

PropertyRequest& PropertyRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("definition"))
  {
    m_definition = jsonValue.GetObject("definition");

    m_definitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetObject("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateType"))
  {
    m_updateType = PropertyUpdateTypeMapper::GetPropertyUpdateTypeForName(jsonValue.GetString("updateType"));

    m_updateTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertyRequest::Jsonize() const
{
  JsonValue payload;

  if(m_definitionHasBeenSet)
  {
   payload.WithObject("definition", m_definition.Jsonize());

  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("value", m_value.Jsonize());

  }

  if(m_updateTypeHasBeenSet)
  {
   payload.WithString("updateType", PropertyUpdateTypeMapper::GetNameForPropertyUpdateType(m_updateType));
  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
