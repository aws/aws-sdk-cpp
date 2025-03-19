/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ConditionOverrides.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

ConditionOverrides::ConditionOverrides(JsonView jsonValue)
{
  *this = jsonValue;
}

ConditionOverrides& ConditionOverrides::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Range"))
  {
    m_range = jsonValue.GetObject("Range");
    m_rangeHasBeenSet = true;
  }
  return *this;
}

JsonValue ConditionOverrides::Jsonize() const
{
  JsonValue payload;

  if(m_rangeHasBeenSet)
  {
   payload.WithObject("Range", m_range.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
