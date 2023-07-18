/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/PositionalAccuracy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

PositionalAccuracy::PositionalAccuracy() : 
    m_horizontal(0.0),
    m_horizontalHasBeenSet(false)
{
}

PositionalAccuracy::PositionalAccuracy(JsonView jsonValue) : 
    m_horizontal(0.0),
    m_horizontalHasBeenSet(false)
{
  *this = jsonValue;
}

PositionalAccuracy& PositionalAccuracy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Horizontal"))
  {
    m_horizontal = jsonValue.GetDouble("Horizontal");

    m_horizontalHasBeenSet = true;
  }

  return *this;
}

JsonValue PositionalAccuracy::Jsonize() const
{
  JsonValue payload;

  if(m_horizontalHasBeenSet)
  {
   payload.WithDouble("Horizontal", m_horizontal);

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
