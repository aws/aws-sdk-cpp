/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/SearchForTextResult.h>
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

SearchForTextResult::SearchForTextResult() : 
    m_placeHasBeenSet(false)
{
}

SearchForTextResult::SearchForTextResult(JsonView jsonValue) : 
    m_placeHasBeenSet(false)
{
  *this = jsonValue;
}

SearchForTextResult& SearchForTextResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Place"))
  {
    m_place = jsonValue.GetObject("Place");

    m_placeHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchForTextResult::Jsonize() const
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
