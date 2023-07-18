/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/TieringPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

TieringPolicy::TieringPolicy() : 
    m_coolingPeriod(0),
    m_coolingPeriodHasBeenSet(false),
    m_name(TieringPolicyName::NOT_SET),
    m_nameHasBeenSet(false)
{
}

TieringPolicy::TieringPolicy(JsonView jsonValue) : 
    m_coolingPeriod(0),
    m_coolingPeriodHasBeenSet(false),
    m_name(TieringPolicyName::NOT_SET),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

TieringPolicy& TieringPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CoolingPeriod"))
  {
    m_coolingPeriod = jsonValue.GetInteger("CoolingPeriod");

    m_coolingPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = TieringPolicyNameMapper::GetTieringPolicyNameForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue TieringPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_coolingPeriodHasBeenSet)
  {
   payload.WithInteger("CoolingPeriod", m_coolingPeriod);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", TieringPolicyNameMapper::GetNameForTieringPolicyName(m_name));
  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
