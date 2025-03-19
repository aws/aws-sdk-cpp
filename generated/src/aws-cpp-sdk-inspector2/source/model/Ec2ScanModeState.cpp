/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Ec2ScanModeState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

Ec2ScanModeState::Ec2ScanModeState(JsonView jsonValue)
{
  *this = jsonValue;
}

Ec2ScanModeState& Ec2ScanModeState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scanMode"))
  {
    m_scanMode = Ec2ScanModeMapper::GetEc2ScanModeForName(jsonValue.GetString("scanMode"));
    m_scanModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scanModeStatus"))
  {
    m_scanModeStatus = Ec2ScanModeStatusMapper::GetEc2ScanModeStatusForName(jsonValue.GetString("scanModeStatus"));
    m_scanModeStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue Ec2ScanModeState::Jsonize() const
{
  JsonValue payload;

  if(m_scanModeHasBeenSet)
  {
   payload.WithString("scanMode", Ec2ScanModeMapper::GetNameForEc2ScanMode(m_scanMode));
  }

  if(m_scanModeStatusHasBeenSet)
  {
   payload.WithString("scanModeStatus", Ec2ScanModeStatusMapper::GetNameForEc2ScanModeStatus(m_scanModeStatus));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
