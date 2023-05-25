/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/ColumnLFTag.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

ColumnLFTag::ColumnLFTag() : 
    m_nameHasBeenSet(false),
    m_lFTagsHasBeenSet(false)
{
}

ColumnLFTag::ColumnLFTag(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_lFTagsHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnLFTag& ColumnLFTag::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LFTags"))
  {
    Aws::Utils::Array<JsonView> lFTagsJsonList = jsonValue.GetArray("LFTags");
    for(unsigned lFTagsIndex = 0; lFTagsIndex < lFTagsJsonList.GetLength(); ++lFTagsIndex)
    {
      m_lFTags.push_back(lFTagsJsonList[lFTagsIndex].AsObject());
    }
    m_lFTagsHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnLFTag::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_lFTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lFTagsJsonList(m_lFTags.size());
   for(unsigned lFTagsIndex = 0; lFTagsIndex < lFTagsJsonList.GetLength(); ++lFTagsIndex)
   {
     lFTagsJsonList[lFTagsIndex].AsObject(m_lFTags[lFTagsIndex].Jsonize());
   }
   payload.WithArray("LFTags", std::move(lFTagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
