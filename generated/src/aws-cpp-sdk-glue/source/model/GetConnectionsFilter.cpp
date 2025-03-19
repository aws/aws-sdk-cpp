/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetConnectionsFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

GetConnectionsFilter::GetConnectionsFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

GetConnectionsFilter& GetConnectionsFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MatchCriteria"))
  {
    Aws::Utils::Array<JsonView> matchCriteriaJsonList = jsonValue.GetArray("MatchCriteria");
    for(unsigned matchCriteriaIndex = 0; matchCriteriaIndex < matchCriteriaJsonList.GetLength(); ++matchCriteriaIndex)
    {
      m_matchCriteria.push_back(matchCriteriaJsonList[matchCriteriaIndex].AsString());
    }
    m_matchCriteriaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionType"))
  {
    m_connectionType = ConnectionTypeMapper::GetConnectionTypeForName(jsonValue.GetString("ConnectionType"));
    m_connectionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionSchemaVersion"))
  {
    m_connectionSchemaVersion = jsonValue.GetInteger("ConnectionSchemaVersion");
    m_connectionSchemaVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue GetConnectionsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_matchCriteriaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> matchCriteriaJsonList(m_matchCriteria.size());
   for(unsigned matchCriteriaIndex = 0; matchCriteriaIndex < matchCriteriaJsonList.GetLength(); ++matchCriteriaIndex)
   {
     matchCriteriaJsonList[matchCriteriaIndex].AsString(m_matchCriteria[matchCriteriaIndex]);
   }
   payload.WithArray("MatchCriteria", std::move(matchCriteriaJsonList));

  }

  if(m_connectionTypeHasBeenSet)
  {
   payload.WithString("ConnectionType", ConnectionTypeMapper::GetNameForConnectionType(m_connectionType));
  }

  if(m_connectionSchemaVersionHasBeenSet)
  {
   payload.WithInteger("ConnectionSchemaVersion", m_connectionSchemaVersion);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
