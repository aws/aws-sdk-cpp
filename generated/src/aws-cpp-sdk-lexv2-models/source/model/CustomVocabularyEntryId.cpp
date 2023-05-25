/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CustomVocabularyEntryId.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

CustomVocabularyEntryId::CustomVocabularyEntryId() : 
    m_itemIdHasBeenSet(false)
{
}

CustomVocabularyEntryId::CustomVocabularyEntryId(JsonView jsonValue) : 
    m_itemIdHasBeenSet(false)
{
  *this = jsonValue;
}

CustomVocabularyEntryId& CustomVocabularyEntryId::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("itemId"))
  {
    m_itemId = jsonValue.GetString("itemId");

    m_itemIdHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomVocabularyEntryId::Jsonize() const
{
  JsonValue payload;

  if(m_itemIdHasBeenSet)
  {
   payload.WithString("itemId", m_itemId);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
