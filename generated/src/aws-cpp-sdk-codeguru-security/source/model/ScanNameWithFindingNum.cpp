/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/ScanNameWithFindingNum.h>
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

ScanNameWithFindingNum::ScanNameWithFindingNum(JsonView jsonValue)
{
  *this = jsonValue;
}

ScanNameWithFindingNum& ScanNameWithFindingNum::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scanName"))
  {
    m_scanName = jsonValue.GetString("scanName");
    m_scanNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("findingNumber"))
  {
    m_findingNumber = jsonValue.GetInteger("findingNumber");
    m_findingNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue ScanNameWithFindingNum::Jsonize() const
{
  JsonValue payload;

  if(m_scanNameHasBeenSet)
  {
   payload.WithString("scanName", m_scanName);

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
