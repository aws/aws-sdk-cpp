/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/WarningsListItem.h>
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

WarningsListItem::WarningsListItem() : 
    m_page(0),
    m_pageHasBeenSet(false),
    m_warnCode(PageBasedWarningCode::NOT_SET),
    m_warnCodeHasBeenSet(false),
    m_warnMessageHasBeenSet(false)
{
}

WarningsListItem::WarningsListItem(JsonView jsonValue) : 
    m_page(0),
    m_pageHasBeenSet(false),
    m_warnCode(PageBasedWarningCode::NOT_SET),
    m_warnCodeHasBeenSet(false),
    m_warnMessageHasBeenSet(false)
{
  *this = jsonValue;
}

WarningsListItem& WarningsListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Page"))
  {
    m_page = jsonValue.GetInteger("Page");

    m_pageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WarnCode"))
  {
    m_warnCode = PageBasedWarningCodeMapper::GetPageBasedWarningCodeForName(jsonValue.GetString("WarnCode"));

    m_warnCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WarnMessage"))
  {
    m_warnMessage = jsonValue.GetString("WarnMessage");

    m_warnMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue WarningsListItem::Jsonize() const
{
  JsonValue payload;

  if(m_pageHasBeenSet)
  {
   payload.WithInteger("Page", m_page);

  }

  if(m_warnCodeHasBeenSet)
  {
   payload.WithString("WarnCode", PageBasedWarningCodeMapper::GetNameForPageBasedWarningCode(m_warnCode));
  }

  if(m_warnMessageHasBeenSet)
  {
   payload.WithString("WarnMessage", m_warnMessage);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
