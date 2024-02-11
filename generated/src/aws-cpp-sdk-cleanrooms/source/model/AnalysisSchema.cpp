/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AnalysisSchema.h>
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

AnalysisSchema::AnalysisSchema() : 
    m_referencedTablesHasBeenSet(false)
{
}

AnalysisSchema::AnalysisSchema(JsonView jsonValue) : 
    m_referencedTablesHasBeenSet(false)
{
  *this = jsonValue;
}

AnalysisSchema& AnalysisSchema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("referencedTables"))
  {
    Aws::Utils::Array<JsonView> referencedTablesJsonList = jsonValue.GetArray("referencedTables");
    for(unsigned referencedTablesIndex = 0; referencedTablesIndex < referencedTablesJsonList.GetLength(); ++referencedTablesIndex)
    {
      m_referencedTables.push_back(referencedTablesJsonList[referencedTablesIndex].AsString());
    }
    m_referencedTablesHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalysisSchema::Jsonize() const
{
  JsonValue payload;

  if(m_referencedTablesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> referencedTablesJsonList(m_referencedTables.size());
   for(unsigned referencedTablesIndex = 0; referencedTablesIndex < referencedTablesJsonList.GetLength(); ++referencedTablesIndex)
   {
     referencedTablesJsonList[referencedTablesIndex].AsString(m_referencedTables[referencedTablesIndex]);
   }
   payload.WithArray("referencedTables", std::move(referencedTablesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
