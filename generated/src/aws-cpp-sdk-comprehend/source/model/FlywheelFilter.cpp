/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/FlywheelFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

FlywheelFilter::FlywheelFilter() : 
    m_status(FlywheelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeAfterHasBeenSet(false),
    m_creationTimeBeforeHasBeenSet(false)
{
}

FlywheelFilter::FlywheelFilter(JsonView jsonValue) : 
    m_status(FlywheelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeAfterHasBeenSet(false),
    m_creationTimeBeforeHasBeenSet(false)
{
  *this = jsonValue;
}

FlywheelFilter& FlywheelFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = FlywheelStatusMapper::GetFlywheelStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTimeAfter"))
  {
    m_creationTimeAfter = jsonValue.GetDouble("CreationTimeAfter");

    m_creationTimeAfterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTimeBefore"))
  {
    m_creationTimeBefore = jsonValue.GetDouble("CreationTimeBefore");

    m_creationTimeBeforeHasBeenSet = true;
  }

  return *this;
}

JsonValue FlywheelFilter::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", FlywheelStatusMapper::GetNameForFlywheelStatus(m_status));
  }

  if(m_creationTimeAfterHasBeenSet)
  {
   payload.WithDouble("CreationTimeAfter", m_creationTimeAfter.SecondsWithMSPrecision());
  }

  if(m_creationTimeBeforeHasBeenSet)
  {
   payload.WithDouble("CreationTimeBefore", m_creationTimeBefore.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
