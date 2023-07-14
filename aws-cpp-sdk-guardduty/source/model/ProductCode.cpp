/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ProductCode.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

ProductCode::ProductCode() : 
    m_codeHasBeenSet(false),
    m_productTypeHasBeenSet(false)
{
}

ProductCode::ProductCode(JsonView jsonValue) : 
    m_codeHasBeenSet(false),
    m_productTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ProductCode& ProductCode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetString("code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("productType"))
  {
    m_productType = jsonValue.GetString("productType");

    m_productTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ProductCode::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", m_code);

  }

  if(m_productTypeHasBeenSet)
  {
   payload.WithString("productType", m_productType);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
