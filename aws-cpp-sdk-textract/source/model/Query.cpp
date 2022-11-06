/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/Query.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

Query::Query() : 
    m_textHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_pagesHasBeenSet(false)
{
}

Query::Query(JsonView jsonValue) : 
    m_textHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_pagesHasBeenSet(false)
{
  *this = jsonValue;
}

Query& Query::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Alias"))
  {
    m_alias = jsonValue.GetString("Alias");

    m_aliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Pages"))
  {
    Aws::Utils::Array<JsonView> pagesJsonList = jsonValue.GetArray("Pages");
    for(unsigned pagesIndex = 0; pagesIndex < pagesJsonList.GetLength(); ++pagesIndex)
    {
      m_pages.push_back(pagesJsonList[pagesIndex].AsString());
    }
    m_pagesHasBeenSet = true;
  }

  return *this;
}

JsonValue Query::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_aliasHasBeenSet)
  {
   payload.WithString("Alias", m_alias);

  }

  if(m_pagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pagesJsonList(m_pages.size());
   for(unsigned pagesIndex = 0; pagesIndex < pagesJsonList.GetLength(); ++pagesIndex)
   {
     pagesJsonList[pagesIndex].AsString(m_pages[pagesIndex]);
   }
   payload.WithArray("Pages", std::move(pagesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
