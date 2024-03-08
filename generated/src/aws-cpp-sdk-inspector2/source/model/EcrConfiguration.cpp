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

EcrConfiguration::EcrConfiguration() : 
    m_pullDateRescanDuration(EcrPullDateRescanDuration::NOT_SET),
    m_pullDateRescanDurationHasBeenSet(false),
    m_rescanDuration(EcrRescanDuration::NOT_SET),
    m_rescanDurationHasBeenSet(false)
{
}

EcrConfiguration::EcrConfiguration(JsonView jsonValue) : 
    m_pullDateRescanDuration(EcrPullDateRescanDuration::NOT_SET),
    m_pullDateRescanDurationHasBeenSet(false),
    m_rescanDuration(EcrRescanDuration::NOT_SET),
    m_rescanDurationHasBeenSet(false)
{
  *this = jsonValue;
}

EcrConfiguration& EcrConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pullDateRescanDuration"))
  {
    m_pullDateRescanDuration = EcrPullDateRescanDurationMapper::GetEcrPullDateRescanDurationForName(jsonValue.GetString("pullDateRescanDuration"));

    m_pullDateRescanDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rescanDuration"))
  {
    m_rescanDuration = EcrRescanDurationMapper::GetEcrRescanDurationForName(jsonValue.GetString("rescanDuration"));

    m_rescanDurationHasBeenSet = true;
  }

  return *this;
}

JsonValue EcrConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_pullDateRescanDurationHasBeenSet)
  {
   payload.WithString("pullDateRescanDuration", EcrPullDateRescanDurationMapper::GetNameForEcrPullDateRescanDuration(m_pullDateRescanDuration));
  }

  if(m_rescanDurationHasBeenSet)
  {
   payload.WithString("rescanDuration", EcrRescanDurationMapper::GetNameForEcrRescanDuration(m_rescanDuration));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
