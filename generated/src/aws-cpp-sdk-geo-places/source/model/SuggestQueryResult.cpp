/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/SuggestQueryResult.h>
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

SuggestQueryResult::SuggestQueryResult(JsonView jsonValue)
{
  *this = jsonValue;
}

SuggestQueryResult& SuggestQueryResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QueryId"))
  {
    m_queryId = jsonValue.GetString("QueryId");
    m_queryIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QueryType"))
  {
    m_queryType = QueryTypeMapper::GetQueryTypeForName(jsonValue.GetString("QueryType"));
    m_queryTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue SuggestQueryResult::Jsonize() const
{
  JsonValue payload;

  if(m_queryIdHasBeenSet)
  {
   payload.WithString("QueryId", m_queryId);

  }

  if(m_queryTypeHasBeenSet)
  {
   payload.WithString("QueryType", QueryTypeMapper::GetNameForQueryType(m_queryType));
  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
