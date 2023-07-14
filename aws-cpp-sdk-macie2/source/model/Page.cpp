/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/Page.h>
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

Page::Page() : 
    m_lineRangeHasBeenSet(false),
    m_offsetRangeHasBeenSet(false),
    m_pageNumber(0),
    m_pageNumberHasBeenSet(false)
{
}

Page::Page(JsonView jsonValue) : 
    m_lineRangeHasBeenSet(false),
    m_offsetRangeHasBeenSet(false),
    m_pageNumber(0),
    m_pageNumberHasBeenSet(false)
{
  *this = jsonValue;
}

Page& Page::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lineRange"))
  {
    m_lineRange = jsonValue.GetObject("lineRange");

    m_lineRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("offsetRange"))
  {
    m_offsetRange = jsonValue.GetObject("offsetRange");

    m_offsetRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pageNumber"))
  {
    m_pageNumber = jsonValue.GetInt64("pageNumber");

    m_pageNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue Page::Jsonize() const
{
  JsonValue payload;

  if(m_lineRangeHasBeenSet)
  {
   payload.WithObject("lineRange", m_lineRange.Jsonize());

  }

  if(m_offsetRangeHasBeenSet)
  {
   payload.WithObject("offsetRange", m_offsetRange.Jsonize());

  }

  if(m_pageNumberHasBeenSet)
  {
   payload.WithInt64("pageNumber", m_pageNumber);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
