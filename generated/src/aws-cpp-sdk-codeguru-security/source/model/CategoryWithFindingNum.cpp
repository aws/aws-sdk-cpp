/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/CategoryWithFindingNum.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruSecurity
{
namespace Model
{

CategoryWithFindingNum::CategoryWithFindingNum() : 
    m_categoryNameHasBeenSet(false),
    m_findingNumber(0),
    m_findingNumberHasBeenSet(false)
{
}

CategoryWithFindingNum::CategoryWithFindingNum(JsonView jsonValue) : 
    m_categoryNameHasBeenSet(false),
    m_findingNumber(0),
    m_findingNumberHasBeenSet(false)
{
  *this = jsonValue;
}

CategoryWithFindingNum& CategoryWithFindingNum::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("categoryName"))
  {
    m_categoryName = jsonValue.GetString("categoryName");

    m_categoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("findingNumber"))
  {
    m_findingNumber = jsonValue.GetInteger("findingNumber");

    m_findingNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue CategoryWithFindingNum::Jsonize() const
{
  JsonValue payload;

  if(m_categoryNameHasBeenSet)
  {
   payload.WithString("categoryName", m_categoryName);

  }

  if(m_findingNumberHasBeenSet)
  {
   payload.WithInteger("findingNumber", m_findingNumber);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
