/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/ComponentMatchScores.h>
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

ComponentMatchScores::ComponentMatchScores() : 
    m_title(0.0),
    m_titleHasBeenSet(false),
    m_addressHasBeenSet(false)
{
}

ComponentMatchScores::ComponentMatchScores(JsonView jsonValue)
  : ComponentMatchScores()
{
  *this = jsonValue;
}

ComponentMatchScores& ComponentMatchScores::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetDouble("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetObject("Address");

    m_addressHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentMatchScores::Jsonize() const
{
  JsonValue payload;

  if(m_titleHasBeenSet)
  {
   payload.WithDouble("Title", m_title);

  }

  if(m_addressHasBeenSet)
  {
   payload.WithObject("Address", m_address.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
