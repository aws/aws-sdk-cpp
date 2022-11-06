/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TagColumnOperation.h>
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

TagColumnOperation::TagColumnOperation() : 
    m_columnNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

TagColumnOperation::TagColumnOperation(JsonView jsonValue) : 
    m_columnNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

TagColumnOperation& TagColumnOperation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ColumnName"))
  {
    m_columnName = jsonValue.GetString("ColumnName");

    m_columnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue TagColumnOperation::Jsonize() const
{
  JsonValue payload;

  if(m_columnNameHasBeenSet)
  {
   payload.WithString("ColumnName", m_columnName);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
