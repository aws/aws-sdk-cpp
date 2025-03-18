/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/Highlight.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoPlaces
{
namespace Model
{

Highlight::Highlight(JsonView jsonValue)
{
  *this = jsonValue;
}

Highlight& Highlight::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartIndex"))
  {
    m_startIndex = jsonValue.GetInteger("StartIndex");
    m_startIndexHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndIndex"))
  {
    m_endIndex = jsonValue.GetInteger("EndIndex");
    m_endIndexHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue Highlight::Jsonize() const
{
  JsonValue payload;

  if(m_startIndexHasBeenSet)
  {
   payload.WithInteger("StartIndex", m_startIndex);

  }

  if(m_endIndexHasBeenSet)
  {
   payload.WithInteger("EndIndex", m_endIndex);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
