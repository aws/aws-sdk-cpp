/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/SearchForPositionResult.h>
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

SearchForPositionResult::SearchForPositionResult() : 
    m_placeHasBeenSet(false)
{
}

SearchForPositionResult::SearchForPositionResult(JsonView jsonValue) : 
    m_placeHasBeenSet(false)
{
  *this = jsonValue;
}

SearchForPositionResult& SearchForPositionResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Place"))
  {
    m_place = jsonValue.GetObject("Place");

    m_placeHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchForPositionResult::Jsonize() const
{
  JsonValue payload;

  if(m_placeHasBeenSet)
  {
   payload.WithObject("Place", m_place.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
