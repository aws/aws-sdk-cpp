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

#include <aws/quicksight/model/RenameColumnOperation.h>
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

RenameColumnOperation::RenameColumnOperation() : 
    m_columnNameHasBeenSet(false),
    m_newColumnNameHasBeenSet(false)
{
}

RenameColumnOperation::RenameColumnOperation(JsonView jsonValue) : 
    m_columnNameHasBeenSet(false),
    m_newColumnNameHasBeenSet(false)
{
  *this = jsonValue;
}

RenameColumnOperation& RenameColumnOperation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ColumnName"))
  {
    m_columnName = jsonValue.GetString("ColumnName");

    m_columnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NewColumnName"))
  {
    m_newColumnName = jsonValue.GetString("NewColumnName");

    m_newColumnNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RenameColumnOperation::Jsonize() const
{
  JsonValue payload;

  if(m_columnNameHasBeenSet)
  {
   payload.WithString("ColumnName", m_columnName);

  }

  if(m_newColumnNameHasBeenSet)
  {
   payload.WithString("NewColumnName", m_newColumnName);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
