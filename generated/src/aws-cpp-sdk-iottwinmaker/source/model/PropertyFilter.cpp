/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/PropertyFilter.h>
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

PropertyFilter::PropertyFilter() : 
    m_propertyNameHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

PropertyFilter::PropertyFilter(JsonView jsonValue) : 
    m_propertyNameHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

PropertyFilter& PropertyFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("propertyName"))
  {
    m_propertyName = jsonValue.GetString("propertyName");

    m_propertyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operator"))
  {
    m_operator = jsonValue.GetString("operator");

    m_operatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetObject("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertyFilter::Jsonize() const
{
  JsonValue payload;

  if(m_propertyNameHasBeenSet)
  {
   payload.WithString("propertyName", m_propertyName);

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("operator", m_operator);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("value", m_value.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
