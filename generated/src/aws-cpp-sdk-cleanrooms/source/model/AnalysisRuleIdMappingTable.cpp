/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AnalysisRuleIdMappingTable.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

AnalysisRuleIdMappingTable::AnalysisRuleIdMappingTable(JsonView jsonValue)
{
  *this = jsonValue;
}

AnalysisRuleIdMappingTable& AnalysisRuleIdMappingTable::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("joinColumns"))
  {
    Aws::Utils::Array<JsonView> joinColumnsJsonList = jsonValue.GetArray("joinColumns");
    for(unsigned joinColumnsIndex = 0; joinColumnsIndex < joinColumnsJsonList.GetLength(); ++joinColumnsIndex)
    {
      m_joinColumns.push_back(joinColumnsJsonList[joinColumnsIndex].AsString());
    }
    m_joinColumnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queryConstraints"))
  {
    Aws::Utils::Array<JsonView> queryConstraintsJsonList = jsonValue.GetArray("queryConstraints");
    for(unsigned queryConstraintsIndex = 0; queryConstraintsIndex < queryConstraintsJsonList.GetLength(); ++queryConstraintsIndex)
    {
      m_queryConstraints.push_back(queryConstraintsJsonList[queryConstraintsIndex].AsObject());
    }
    m_queryConstraintsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dimensionColumns"))
  {
    Aws::Utils::Array<JsonView> dimensionColumnsJsonList = jsonValue.GetArray("dimensionColumns");
    for(unsigned dimensionColumnsIndex = 0; dimensionColumnsIndex < dimensionColumnsJsonList.GetLength(); ++dimensionColumnsIndex)
    {
      m_dimensionColumns.push_back(dimensionColumnsJsonList[dimensionColumnsIndex].AsString());
    }
    m_dimensionColumnsHasBeenSet = true;
  }
  return *this;
}

JsonValue AnalysisRuleIdMappingTable::Jsonize() const
{
  JsonValue payload;

  if(m_joinColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> joinColumnsJsonList(m_joinColumns.size());
   for(unsigned joinColumnsIndex = 0; joinColumnsIndex < joinColumnsJsonList.GetLength(); ++joinColumnsIndex)
   {
     joinColumnsJsonList[joinColumnsIndex].AsString(m_joinColumns[joinColumnsIndex]);
   }
   payload.WithArray("joinColumns", std::move(joinColumnsJsonList));

  }

  if(m_queryConstraintsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> queryConstraintsJsonList(m_queryConstraints.size());
   for(unsigned queryConstraintsIndex = 0; queryConstraintsIndex < queryConstraintsJsonList.GetLength(); ++queryConstraintsIndex)
   {
     queryConstraintsJsonList[queryConstraintsIndex].AsObject(m_queryConstraints[queryConstraintsIndex].Jsonize());
   }
   payload.WithArray("queryConstraints", std::move(queryConstraintsJsonList));

  }

  if(m_dimensionColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dimensionColumnsJsonList(m_dimensionColumns.size());
   for(unsigned dimensionColumnsIndex = 0; dimensionColumnsIndex < dimensionColumnsJsonList.GetLength(); ++dimensionColumnsIndex)
   {
     dimensionColumnsJsonList[dimensionColumnsIndex].AsString(m_dimensionColumns[dimensionColumnsIndex]);
   }
   payload.WithArray("dimensionColumns", std::move(dimensionColumnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
