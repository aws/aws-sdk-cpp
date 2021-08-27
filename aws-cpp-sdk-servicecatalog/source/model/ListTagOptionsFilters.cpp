/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ListTagOptionsFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ListTagOptionsFilters::ListTagOptionsFilters() : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false)
{
}

ListTagOptionsFilters::ListTagOptionsFilters(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false)
{
  *this = jsonValue;
}

ListTagOptionsFilters& ListTagOptionsFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Active"))
  {
    m_active = jsonValue.GetBool("Active");

    m_activeHasBeenSet = true;
  }

  return *this;
}

JsonValue ListTagOptionsFilters::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_activeHasBeenSet)
  {
   payload.WithBool("Active", m_active);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
