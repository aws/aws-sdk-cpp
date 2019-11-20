/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> projectedColumnsJsonList = jsonValue.GetArray("ProjectedColumns");
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
   Array<JsonValue> projectedColumnsJsonList(m_projectedColumns.size());
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
