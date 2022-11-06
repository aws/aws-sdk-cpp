/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UntagColumnOperation.h>
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

UntagColumnOperation::UntagColumnOperation() : 
    m_columnNameHasBeenSet(false),
    m_tagNamesHasBeenSet(false)
{
}

UntagColumnOperation::UntagColumnOperation(JsonView jsonValue) : 
    m_columnNameHasBeenSet(false),
    m_tagNamesHasBeenSet(false)
{
  *this = jsonValue;
}

UntagColumnOperation& UntagColumnOperation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ColumnName"))
  {
    m_columnName = jsonValue.GetString("ColumnName");

    m_columnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagNames"))
  {
    Aws::Utils::Array<JsonView> tagNamesJsonList = jsonValue.GetArray("TagNames");
    for(unsigned tagNamesIndex = 0; tagNamesIndex < tagNamesJsonList.GetLength(); ++tagNamesIndex)
    {
      m_tagNames.push_back(ColumnTagNameMapper::GetColumnTagNameForName(tagNamesJsonList[tagNamesIndex].AsString()));
    }
    m_tagNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue UntagColumnOperation::Jsonize() const
{
  JsonValue payload;

  if(m_columnNameHasBeenSet)
  {
   payload.WithString("ColumnName", m_columnName);

  }

  if(m_tagNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagNamesJsonList(m_tagNames.size());
   for(unsigned tagNamesIndex = 0; tagNamesIndex < tagNamesJsonList.GetLength(); ++tagNamesIndex)
   {
     tagNamesJsonList[tagNamesIndex].AsString(ColumnTagNameMapper::GetNameForColumnTagName(m_tagNames[tagNamesIndex]));
   }
   payload.WithArray("TagNames", std::move(tagNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
