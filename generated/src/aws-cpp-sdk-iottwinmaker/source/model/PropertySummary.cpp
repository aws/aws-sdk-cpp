/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/PropertySummary.h>
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

PropertySummary::PropertySummary() : 
    m_definitionHasBeenSet(false),
    m_propertyNameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_areAllPropertyValuesReturned(false),
    m_areAllPropertyValuesReturnedHasBeenSet(false)
{
}

PropertySummary::PropertySummary(JsonView jsonValue) : 
    m_definitionHasBeenSet(false),
    m_propertyNameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_areAllPropertyValuesReturned(false),
    m_areAllPropertyValuesReturnedHasBeenSet(false)
{
  *this = jsonValue;
}

PropertySummary& PropertySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("definition"))
  {
    m_definition = jsonValue.GetObject("definition");

    m_definitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("propertyName"))
  {
    m_propertyName = jsonValue.GetString("propertyName");

    m_propertyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetObject("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("areAllPropertyValuesReturned"))
  {
    m_areAllPropertyValuesReturned = jsonValue.GetBool("areAllPropertyValuesReturned");

    m_areAllPropertyValuesReturnedHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertySummary::Jsonize() const
{
  JsonValue payload;

  if(m_definitionHasBeenSet)
  {
   payload.WithObject("definition", m_definition.Jsonize());

  }

  if(m_propertyNameHasBeenSet)
  {
   payload.WithString("propertyName", m_propertyName);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("value", m_value.Jsonize());

  }

  if(m_areAllPropertyValuesReturnedHasBeenSet)
  {
   payload.WithBool("areAllPropertyValuesReturned", m_areAllPropertyValuesReturned);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
