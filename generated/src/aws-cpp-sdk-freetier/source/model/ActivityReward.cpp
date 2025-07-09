/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/freetier/model/ActivityReward.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FreeTier
{
namespace Model
{

ActivityReward::ActivityReward(JsonView jsonValue)
{
  *this = jsonValue;
}

ActivityReward& ActivityReward::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("credit"))
  {
    m_credit = jsonValue.GetObject("credit");
    m_creditHasBeenSet = true;
  }
  return *this;
}

JsonValue ActivityReward::Jsonize() const
{
  JsonValue payload;

  if(m_creditHasBeenSet)
  {
   payload.WithObject("credit", m_credit.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FreeTier
} // namespace Aws
