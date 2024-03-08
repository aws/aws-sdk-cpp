/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LifecyclePolicyDetail.h>
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

LifecyclePolicyDetail::LifecyclePolicyDetail() : 
    m_actionHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_exclusionRulesHasBeenSet(false)
{
}

LifecyclePolicyDetail::LifecyclePolicyDetail(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_exclusionRulesHasBeenSet(false)
{
  *this = jsonValue;
}

LifecyclePolicyDetail& LifecyclePolicyDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetObject("action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filter"))
  {
    m_filter = jsonValue.GetObject("filter");

    m_filterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exclusionRules"))
  {
    m_exclusionRules = jsonValue.GetObject("exclusionRules");

    m_exclusionRulesHasBeenSet = true;
  }

  return *this;
}

JsonValue LifecyclePolicyDetail::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithObject("action", m_action.Jsonize());

  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("filter", m_filter.Jsonize());

  }

  if(m_exclusionRulesHasBeenSet)
  {
   payload.WithObject("exclusionRules", m_exclusionRules.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
