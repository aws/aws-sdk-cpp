/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RuleTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

RuleTarget::RuleTarget(JsonView jsonValue)
{
  *this = jsonValue;
}

RuleTarget& RuleTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainUnitTarget"))
  {
    m_domainUnitTarget = jsonValue.GetObject("domainUnitTarget");
    m_domainUnitTargetHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleTarget::Jsonize() const
{
  JsonValue payload;

  if(m_domainUnitTargetHasBeenSet)
  {
   payload.WithObject("domainUnitTarget", m_domainUnitTarget.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
