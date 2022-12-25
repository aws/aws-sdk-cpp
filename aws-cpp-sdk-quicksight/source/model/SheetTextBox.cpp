/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SheetTextBox.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

SheetTextBox::SheetTextBox() : 
    m_sheetTextBoxIdHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

SheetTextBox::SheetTextBox(JsonView jsonValue) : 
    m_sheetTextBoxIdHasBeenSet(false),
    m_contentHasBeenSet(false)
{
  *this = jsonValue;
}

SheetTextBox& SheetTextBox::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SheetTextBoxId"))
  {
    m_sheetTextBoxId = jsonValue.GetString("SheetTextBoxId");

    m_sheetTextBoxIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");

    m_contentHasBeenSet = true;
  }

  return *this;
}

JsonValue SheetTextBox::Jsonize() const
{
  JsonValue payload;

  if(m_sheetTextBoxIdHasBeenSet)
  {
   payload.WithString("SheetTextBoxId", m_sheetTextBoxId);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
