/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ExtractedCharactersListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

ExtractedCharactersListItem::ExtractedCharactersListItem() : 
    m_page(0),
    m_pageHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
}

ExtractedCharactersListItem::ExtractedCharactersListItem(JsonView jsonValue) : 
    m_page(0),
    m_pageHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
  *this = jsonValue;
}

ExtractedCharactersListItem& ExtractedCharactersListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Page"))
  {
    m_page = jsonValue.GetInteger("Page");

    m_pageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInteger("Count");

    m_countHasBeenSet = true;
  }

  return *this;
}

JsonValue ExtractedCharactersListItem::Jsonize() const
{
  JsonValue payload;

  if(m_pageHasBeenSet)
  {
   payload.WithInteger("Page", m_page);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("Count", m_count);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
