/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ProductCodeListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

ProductCodeListItem::ProductCodeListItem(JsonView jsonValue)
{
  *this = jsonValue;
}

ProductCodeListItem& ProductCodeListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("productCodeId"))
  {
    m_productCodeId = jsonValue.GetString("productCodeId");
    m_productCodeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("productCodeType"))
  {
    m_productCodeType = ProductCodeTypeMapper::GetProductCodeTypeForName(jsonValue.GetString("productCodeType"));
    m_productCodeTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ProductCodeListItem::Jsonize() const
{
  JsonValue payload;

  if(m_productCodeIdHasBeenSet)
  {
   payload.WithString("productCodeId", m_productCodeId);

  }

  if(m_productCodeTypeHasBeenSet)
  {
   payload.WithString("productCodeType", ProductCodeTypeMapper::GetNameForProductCodeType(m_productCodeType));
  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
