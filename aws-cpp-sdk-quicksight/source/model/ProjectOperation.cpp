/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ProjectOperation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ProjectOperation::ProjectOperation() : 
    m_projectedColumnsHasBeenSet(false)
{
}

ProjectOperation::ProjectOperation(JsonView jsonValue) : 
    m_projectedColumnsHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectOperation& ProjectOperation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProjectedColumns"))
  {
    Aws::Utils::Array<JsonView> projectedColumnsJsonList = jsonValue.GetArray("ProjectedColumns");
    for(unsigned projectedColumnsIndex = 0; projectedColumnsIndex < projectedColumnsJsonList.GetLength(); ++projectedColumnsIndex)
    {
      m_projectedColumns.push_back(projectedColumnsJsonList[projectedColumnsIndex].AsString());
    }
    m_projectedColumnsHasBeenSet = true;
  }

  return *this;
}

JsonValue ProjectOperation::Jsonize() const
{
  JsonValue payload;

  if(m_projectedColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> projectedColumnsJsonList(m_projectedColumns.size());
   for(unsigned projectedColumnsIndex = 0; projectedColumnsIndex < projectedColumnsJsonList.GetLength(); ++projectedColumnsIndex)
   {
     projectedColumnsJsonList[projectedColumnsIndex].AsString(m_projectedColumns[projectedColumnsIndex]);
   }
   payload.WithArray("ProjectedColumns", std::move(projectedColumnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
