/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/ArchiveRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DLM
{
namespace Model
{

ArchiveRule::ArchiveRule() : 
    m_retainRuleHasBeenSet(false)
{
}

ArchiveRule::ArchiveRule(JsonView jsonValue) : 
    m_retainRuleHasBeenSet(false)
{
  *this = jsonValue;
}

ArchiveRule& ArchiveRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RetainRule"))
  {
    m_retainRule = jsonValue.GetObject("RetainRule");

    m_retainRuleHasBeenSet = true;
  }

  return *this;
}

JsonValue ArchiveRule::Jsonize() const
{
  JsonValue payload;

  if(m_retainRuleHasBeenSet)
  {
   payload.WithObject("RetainRule", m_retainRule.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws
