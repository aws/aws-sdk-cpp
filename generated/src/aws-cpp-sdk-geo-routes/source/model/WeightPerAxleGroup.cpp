/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WeightPerAxleGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{

WeightPerAxleGroup::WeightPerAxleGroup(JsonView jsonValue)
{
  *this = jsonValue;
}

WeightPerAxleGroup& WeightPerAxleGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Single"))
  {
    m_single = jsonValue.GetInt64("Single");
    m_singleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tandem"))
  {
    m_tandem = jsonValue.GetInt64("Tandem");
    m_tandemHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Triple"))
  {
    m_triple = jsonValue.GetInt64("Triple");
    m_tripleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Quad"))
  {
    m_quad = jsonValue.GetInt64("Quad");
    m_quadHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Quint"))
  {
    m_quint = jsonValue.GetInt64("Quint");
    m_quintHasBeenSet = true;
  }
  return *this;
}

JsonValue WeightPerAxleGroup::Jsonize() const
{
  JsonValue payload;

  if(m_singleHasBeenSet)
  {
   payload.WithInt64("Single", m_single);

  }

  if(m_tandemHasBeenSet)
  {
   payload.WithInt64("Tandem", m_tandem);

  }

  if(m_tripleHasBeenSet)
  {
   payload.WithInt64("Triple", m_triple);

  }

  if(m_quadHasBeenSet)
  {
   payload.WithInt64("Quad", m_quad);

  }

  if(m_quintHasBeenSet)
  {
   payload.WithInt64("Quint", m_quint);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
