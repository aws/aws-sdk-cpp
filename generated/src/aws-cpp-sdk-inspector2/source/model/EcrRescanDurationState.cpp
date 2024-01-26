/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/EcrRescanDurationState.h>
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

EcrRescanDurationState::EcrRescanDurationState() : 
    m_pullDateRescanDuration(EcrPullDateRescanDuration::NOT_SET),
    m_pullDateRescanDurationHasBeenSet(false),
    m_rescanDuration(EcrRescanDuration::NOT_SET),
    m_rescanDurationHasBeenSet(false),
    m_status(EcrRescanDurationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

EcrRescanDurationState::EcrRescanDurationState(JsonView jsonValue) : 
    m_pullDateRescanDuration(EcrPullDateRescanDuration::NOT_SET),
    m_pullDateRescanDurationHasBeenSet(false),
    m_rescanDuration(EcrRescanDuration::NOT_SET),
    m_rescanDurationHasBeenSet(false),
    m_status(EcrRescanDurationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

EcrRescanDurationState& EcrRescanDurationState::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("status"))
  {
    m_status = EcrRescanDurationStatusMapper::GetEcrRescanDurationStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue EcrRescanDurationState::Jsonize() const
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

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", EcrRescanDurationStatusMapper::GetNameForEcrRescanDurationStatus(m_status));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
