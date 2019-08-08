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

#include <aws/glue/model/TaskRunSortCriteria.h>
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

TaskRunSortCriteria::TaskRunSortCriteria() : 
    m_column(TaskRunSortColumnType::NOT_SET),
    m_columnHasBeenSet(false),
    m_sortDirection(SortDirectionType::NOT_SET),
    m_sortDirectionHasBeenSet(false)
{
}

TaskRunSortCriteria::TaskRunSortCriteria(JsonView jsonValue) : 
    m_column(TaskRunSortColumnType::NOT_SET),
    m_columnHasBeenSet(false),
    m_sortDirection(SortDirectionType::NOT_SET),
    m_sortDirectionHasBeenSet(false)
{
  *this = jsonValue;
}

TaskRunSortCriteria& TaskRunSortCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Column"))
  {
    m_column = TaskRunSortColumnTypeMapper::GetTaskRunSortColumnTypeForName(jsonValue.GetString("Column"));

    m_columnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SortDirection"))
  {
    m_sortDirection = SortDirectionTypeMapper::GetSortDirectionTypeForName(jsonValue.GetString("SortDirection"));

    m_sortDirectionHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskRunSortCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_columnHasBeenSet)
  {
   payload.WithString("Column", TaskRunSortColumnTypeMapper::GetNameForTaskRunSortColumnType(m_column));
  }

  if(m_sortDirectionHasBeenSet)
  {
   payload.WithString("SortDirection", SortDirectionTypeMapper::GetNameForSortDirectionType(m_sortDirection));
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
