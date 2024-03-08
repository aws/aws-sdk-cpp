/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PredefinedAttribute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

PredefinedAttribute::PredefinedAttribute() : 
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastModifiedRegionHasBeenSet(false)
{
}

PredefinedAttribute::PredefinedAttribute(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastModifiedRegionHasBeenSet(false)
{
  *this = jsonValue;
}

PredefinedAttribute& PredefinedAttribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Values"))
  {
    m_values = jsonValue.GetObject("Values");

    m_valuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedRegion"))
  {
    m_lastModifiedRegion = jsonValue.GetString("LastModifiedRegion");

    m_lastModifiedRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue PredefinedAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_valuesHasBeenSet)
  {
   payload.WithObject("Values", m_values.Jsonize());

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedRegionHasBeenSet)
  {
   payload.WithString("LastModifiedRegion", m_lastModifiedRegion);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
