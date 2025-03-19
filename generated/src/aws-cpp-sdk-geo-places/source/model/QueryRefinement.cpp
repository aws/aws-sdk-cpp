/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/QueryRefinement.h>
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

QueryRefinement::QueryRefinement(JsonView jsonValue)
{
  *this = jsonValue;
}

QueryRefinement& QueryRefinement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RefinedTerm"))
  {
    m_refinedTerm = jsonValue.GetString("RefinedTerm");
    m_refinedTermHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OriginalTerm"))
  {
    m_originalTerm = jsonValue.GetString("OriginalTerm");
    m_originalTermHasBeenSet = true;
  }
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
  return *this;
}

JsonValue QueryRefinement::Jsonize() const
{
  JsonValue payload;

  if(m_refinedTermHasBeenSet)
  {
   payload.WithString("RefinedTerm", m_refinedTerm);

  }

  if(m_originalTermHasBeenSet)
  {
   payload.WithString("OriginalTerm", m_originalTerm);

  }

  if(m_startIndexHasBeenSet)
  {
   payload.WithInteger("StartIndex", m_startIndex);

  }

  if(m_endIndexHasBeenSet)
  {
   payload.WithInteger("EndIndex", m_endIndex);

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
