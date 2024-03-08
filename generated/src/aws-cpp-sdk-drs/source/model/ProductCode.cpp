/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/ProductCode.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

ProductCode::ProductCode() : 
    m_productCodeIdHasBeenSet(false),
    m_productCodeMode(ProductCodeMode::NOT_SET),
    m_productCodeModeHasBeenSet(false)
{
}

ProductCode::ProductCode(JsonView jsonValue) : 
    m_productCodeIdHasBeenSet(false),
    m_productCodeMode(ProductCodeMode::NOT_SET),
    m_productCodeModeHasBeenSet(false)
{
  *this = jsonValue;
}

ProductCode& ProductCode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("productCodeId"))
  {
    m_productCodeId = jsonValue.GetString("productCodeId");

    m_productCodeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("productCodeMode"))
  {
    m_productCodeMode = ProductCodeModeMapper::GetProductCodeModeForName(jsonValue.GetString("productCodeMode"));

    m_productCodeModeHasBeenSet = true;
  }

  return *this;
}

JsonValue ProductCode::Jsonize() const
{
  JsonValue payload;

  if(m_productCodeIdHasBeenSet)
  {
   payload.WithString("productCodeId", m_productCodeId);

  }

  if(m_productCodeModeHasBeenSet)
  {
   payload.WithString("productCodeMode", ProductCodeModeMapper::GetNameForProductCodeMode(m_productCodeMode));
  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
