/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/MetadataInfo.h>
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

MetadataInfo::MetadataInfo() : 
    m_metadataValueHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_otherMetadataValueListHasBeenSet(false)
{
}

MetadataInfo::MetadataInfo(JsonView jsonValue) : 
    m_metadataValueHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_otherMetadataValueListHasBeenSet(false)
{
  *this = jsonValue;
}

MetadataInfo& MetadataInfo::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("OtherMetadataValueList"))
  {
    Aws::Utils::Array<JsonView> otherMetadataValueListJsonList = jsonValue.GetArray("OtherMetadataValueList");
    for(unsigned otherMetadataValueListIndex = 0; otherMetadataValueListIndex < otherMetadataValueListJsonList.GetLength(); ++otherMetadataValueListIndex)
    {
      m_otherMetadataValueList.push_back(otherMetadataValueListJsonList[otherMetadataValueListIndex].AsObject());
    }
    m_otherMetadataValueListHasBeenSet = true;
  }

  return *this;
}

JsonValue MetadataInfo::Jsonize() const
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

  if(m_otherMetadataValueListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> otherMetadataValueListJsonList(m_otherMetadataValueList.size());
   for(unsigned otherMetadataValueListIndex = 0; otherMetadataValueListIndex < otherMetadataValueListJsonList.GetLength(); ++otherMetadataValueListIndex)
   {
     otherMetadataValueListJsonList[otherMetadataValueListIndex].AsObject(m_otherMetadataValueList[otherMetadataValueListIndex].Jsonize());
   }
   payload.WithArray("OtherMetadataValueList", std::move(otherMetadataValueListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
