/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ProductCodeListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

ProductCodeListItem::ProductCodeListItem(JsonView jsonValue)
{
  *this = jsonValue;
}

ProductCodeListItem& ProductCodeListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProductCodeId"))
  {
    m_productCodeId = jsonValue.GetString("ProductCodeId");
    m_productCodeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProductCodeType"))
  {
    m_productCodeType = ProductCodeTypeMapper::GetProductCodeTypeForName(jsonValue.GetString("ProductCodeType"));
    m_productCodeTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ProductCodeListItem::Jsonize() const
{
  JsonValue payload;

  if(m_productCodeIdHasBeenSet)
  {
   payload.WithString("ProductCodeId", m_productCodeId);

  }

  if(m_productCodeTypeHasBeenSet)
  {
   payload.WithString("ProductCodeType", ProductCodeTypeMapper::GetNameForProductCodeType(m_productCodeType));
  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
