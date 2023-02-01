/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/SensitiveDataItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

SensitiveDataItem::SensitiveDataItem() : 
    m_category(SensitiveDataItemCategory::NOT_SET),
    m_categoryHasBeenSet(false),
    m_detectionsHasBeenSet(false),
    m_totalCount(0),
    m_totalCountHasBeenSet(false)
{
}

SensitiveDataItem::SensitiveDataItem(JsonView jsonValue) : 
    m_category(SensitiveDataItemCategory::NOT_SET),
    m_categoryHasBeenSet(false),
    m_detectionsHasBeenSet(false),
    m_totalCount(0),
    m_totalCountHasBeenSet(false)
{
  *this = jsonValue;
}

SensitiveDataItem& SensitiveDataItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("category"))
  {
    m_category = SensitiveDataItemCategoryMapper::GetSensitiveDataItemCategoryForName(jsonValue.GetString("category"));

    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("detections"))
  {
    Aws::Utils::Array<JsonView> detectionsJsonList = jsonValue.GetArray("detections");
    for(unsigned detectionsIndex = 0; detectionsIndex < detectionsJsonList.GetLength(); ++detectionsIndex)
    {
      m_detections.push_back(detectionsJsonList[detectionsIndex].AsObject());
    }
    m_detectionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalCount"))
  {
    m_totalCount = jsonValue.GetInt64("totalCount");

    m_totalCountHasBeenSet = true;
  }

  return *this;
}

JsonValue SensitiveDataItem::Jsonize() const
{
  JsonValue payload;

  if(m_categoryHasBeenSet)
  {
   payload.WithString("category", SensitiveDataItemCategoryMapper::GetNameForSensitiveDataItemCategory(m_category));
  }

  if(m_detectionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> detectionsJsonList(m_detections.size());
   for(unsigned detectionsIndex = 0; detectionsIndex < detectionsJsonList.GetLength(); ++detectionsIndex)
   {
     detectionsJsonList[detectionsIndex].AsObject(m_detections[detectionsIndex].Jsonize());
   }
   payload.WithArray("detections", std::move(detectionsJsonList));

  }

  if(m_totalCountHasBeenSet)
  {
   payload.WithInt64("totalCount", m_totalCount);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
