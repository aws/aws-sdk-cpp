/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/PropertyResponse.h>
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

PropertyResponse::PropertyResponse() : 
    m_definitionHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_areAllPropertyValuesReturned(false),
    m_areAllPropertyValuesReturnedHasBeenSet(false)
{
}

PropertyResponse::PropertyResponse(JsonView jsonValue) : 
    m_definitionHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_areAllPropertyValuesReturned(false),
    m_areAllPropertyValuesReturnedHasBeenSet(false)
{
  *this = jsonValue;
}

PropertyResponse& PropertyResponse::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("areAllPropertyValuesReturned"))
  {
    m_areAllPropertyValuesReturned = jsonValue.GetBool("areAllPropertyValuesReturned");

    m_areAllPropertyValuesReturnedHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertyResponse::Jsonize() const
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

  if(m_areAllPropertyValuesReturnedHasBeenSet)
  {
   payload.WithBool("areAllPropertyValuesReturned", m_areAllPropertyValuesReturned);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
