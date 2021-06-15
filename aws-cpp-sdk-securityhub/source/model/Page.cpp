/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Page.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

Page::Page() : 
    m_pageNumber(0),
    m_pageNumberHasBeenSet(false),
    m_lineRangeHasBeenSet(false),
    m_offsetRangeHasBeenSet(false)
{
}

Page::Page(JsonView jsonValue) : 
    m_pageNumber(0),
    m_pageNumberHasBeenSet(false),
    m_lineRangeHasBeenSet(false),
    m_offsetRangeHasBeenSet(false)
{
  *this = jsonValue;
}

Page& Page::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PageNumber"))
  {
    m_pageNumber = jsonValue.GetInt64("PageNumber");

    m_pageNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LineRange"))
  {
    m_lineRange = jsonValue.GetObject("LineRange");

    m_lineRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OffsetRange"))
  {
    m_offsetRange = jsonValue.GetObject("OffsetRange");

    m_offsetRangeHasBeenSet = true;
  }

  return *this;
}

JsonValue Page::Jsonize() const
{
  JsonValue payload;

  if(m_pageNumberHasBeenSet)
  {
   payload.WithInt64("PageNumber", m_pageNumber);

  }

  if(m_lineRangeHasBeenSet)
  {
   payload.WithObject("LineRange", m_lineRange.Jsonize());

  }

  if(m_offsetRangeHasBeenSet)
  {
   payload.WithObject("OffsetRange", m_offsetRange.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
