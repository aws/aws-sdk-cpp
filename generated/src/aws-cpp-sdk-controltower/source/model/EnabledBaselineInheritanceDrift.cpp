/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/EnabledBaselineInheritanceDrift.h>
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

EnabledBaselineInheritanceDrift::EnabledBaselineInheritanceDrift(JsonView jsonValue)
{
  *this = jsonValue;
}

EnabledBaselineInheritanceDrift& EnabledBaselineInheritanceDrift::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = EnabledBaselineDriftStatusMapper::GetEnabledBaselineDriftStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue EnabledBaselineInheritanceDrift::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", EnabledBaselineDriftStatusMapper::GetNameForEnabledBaselineDriftStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace ControlTower
} // namespace Aws
