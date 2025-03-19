/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/MatchScoreDetails.h>
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

MatchScoreDetails::MatchScoreDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

MatchScoreDetails& MatchScoreDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Overall"))
  {
    m_overall = jsonValue.GetDouble("Overall");
    m_overallHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Components"))
  {
    m_components = jsonValue.GetObject("Components");
    m_componentsHasBeenSet = true;
  }
  return *this;
}

JsonValue MatchScoreDetails::Jsonize() const
{
  JsonValue payload;

  if(m_overallHasBeenSet)
  {
   payload.WithDouble("Overall", m_overall);

  }

  if(m_componentsHasBeenSet)
  {
   payload.WithObject("Components", m_components.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
