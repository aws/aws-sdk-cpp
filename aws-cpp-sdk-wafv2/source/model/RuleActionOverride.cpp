/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/RuleActionOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

RuleActionOverride::RuleActionOverride() : 
    m_nameHasBeenSet(false),
    m_actionToUseHasBeenSet(false)
{
}

RuleActionOverride::RuleActionOverride(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_actionToUseHasBeenSet(false)
{
  *this = jsonValue;
}

RuleActionOverride& RuleActionOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActionToUse"))
  {
    m_actionToUse = jsonValue.GetObject("ActionToUse");

    m_actionToUseHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleActionOverride::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_actionToUseHasBeenSet)
  {
   payload.WithObject("ActionToUse", m_actionToUse.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
