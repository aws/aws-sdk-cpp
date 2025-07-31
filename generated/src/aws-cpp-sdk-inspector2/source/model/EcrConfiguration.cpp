/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/EcrConfiguration.h>
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

EcrConfiguration::EcrConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

EcrConfiguration& EcrConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rescanDuration"))
  {
    m_rescanDuration = EcrRescanDurationMapper::GetEcrRescanDurationForName(jsonValue.GetString("rescanDuration"));
    m_rescanDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pullDateRescanDuration"))
  {
    m_pullDateRescanDuration = EcrPullDateRescanDurationMapper::GetEcrPullDateRescanDurationForName(jsonValue.GetString("pullDateRescanDuration"));
    m_pullDateRescanDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pullDateRescanMode"))
  {
    m_pullDateRescanMode = EcrPullDateRescanModeMapper::GetEcrPullDateRescanModeForName(jsonValue.GetString("pullDateRescanMode"));
    m_pullDateRescanModeHasBeenSet = true;
  }
  return *this;
}

JsonValue EcrConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_rescanDurationHasBeenSet)
  {
   payload.WithString("rescanDuration", EcrRescanDurationMapper::GetNameForEcrRescanDuration(m_rescanDuration));
  }

  if(m_pullDateRescanDurationHasBeenSet)
  {
   payload.WithString("pullDateRescanDuration", EcrPullDateRescanDurationMapper::GetNameForEcrPullDateRescanDuration(m_pullDateRescanDuration));
  }

  if(m_pullDateRescanModeHasBeenSet)
  {
   payload.WithString("pullDateRescanMode", EcrPullDateRescanModeMapper::GetNameForEcrPullDateRescanMode(m_pullDateRescanMode));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
