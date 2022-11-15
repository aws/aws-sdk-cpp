/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/EnabledControlSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlTower
{
namespace Model
{

EnabledControlSummary::EnabledControlSummary() : 
    m_controlIdentifierHasBeenSet(false)
{
}

EnabledControlSummary::EnabledControlSummary(JsonView jsonValue) : 
    m_controlIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

EnabledControlSummary& EnabledControlSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("controlIdentifier"))
  {
    m_controlIdentifier = jsonValue.GetString("controlIdentifier");

    m_controlIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue EnabledControlSummary::Jsonize() const
{
  JsonValue payload;

  if(m_controlIdentifierHasBeenSet)
  {
   payload.WithString("controlIdentifier", m_controlIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace ControlTower
} // namespace Aws
