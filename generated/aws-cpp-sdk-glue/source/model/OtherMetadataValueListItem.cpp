/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/OtherMetadataValueListItem.h>
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

OtherMetadataValueListItem::OtherMetadataValueListItem() : 
    m_metadataValueHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

OtherMetadataValueListItem::OtherMetadataValueListItem(JsonView jsonValue) : 
    m_metadataValueHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
  *this = jsonValue;
}

OtherMetadataValueListItem& OtherMetadataValueListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetadataValue"))
  {
    m_metadataValue = jsonValue.GetString("MetadataValue");

    m_metadataValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetString("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue OtherMetadataValueListItem::Jsonize() const
{
  JsonValue payload;

  if(m_metadataValueHasBeenSet)
  {
   payload.WithString("MetadataValue", m_metadataValue);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithString("CreatedTime", m_createdTime);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
