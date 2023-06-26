/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/TaggedDatabase.h>
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

TaggedDatabase::TaggedDatabase() : 
    m_databaseHasBeenSet(false),
    m_lFTagsHasBeenSet(false)
{
}

TaggedDatabase::TaggedDatabase(JsonView jsonValue) : 
    m_databaseHasBeenSet(false),
    m_lFTagsHasBeenSet(false)
{
  *this = jsonValue;
}

TaggedDatabase& TaggedDatabase::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetObject("Database");

    m_databaseHasBeenSet = true;
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

JsonValue TaggedDatabase::Jsonize() const
{
  JsonValue payload;

  if(m_databaseHasBeenSet)
  {
   payload.WithObject("Database", m_database.Jsonize());

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
