/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ComputeCapacityStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

ComputeCapacityStatus::ComputeCapacityStatus() : 
    m_desired(0),
    m_desiredHasBeenSet(false),
    m_running(0),
    m_runningHasBeenSet(false),
    m_inUse(0),
    m_inUseHasBeenSet(false),
    m_available(0),
    m_availableHasBeenSet(false)
{
}

ComputeCapacityStatus::ComputeCapacityStatus(JsonView jsonValue) : 
    m_desired(0),
    m_desiredHasBeenSet(false),
    m_running(0),
    m_runningHasBeenSet(false),
    m_inUse(0),
    m_inUseHasBeenSet(false),
    m_available(0),
    m_availableHasBeenSet(false)
{
  *this = jsonValue;
}

ComputeCapacityStatus& ComputeCapacityStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Desired"))
  {
    m_desired = jsonValue.GetInteger("Desired");

    m_desiredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Running"))
  {
    m_running = jsonValue.GetInteger("Running");

    m_runningHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InUse"))
  {
    m_inUse = jsonValue.GetInteger("InUse");

    m_inUseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Available"))
  {
    m_available = jsonValue.GetInteger("Available");

    m_availableHasBeenSet = true;
  }

  return *this;
}

JsonValue ComputeCapacityStatus::Jsonize() const
{
  JsonValue payload;

  if(m_desiredHasBeenSet)
  {
   payload.WithInteger("Desired", m_desired);

  }

  if(m_runningHasBeenSet)
  {
   payload.WithInteger("Running", m_running);

  }

  if(m_inUseHasBeenSet)
  {
   payload.WithInteger("InUse", m_inUse);

  }

  if(m_availableHasBeenSet)
  {
   payload.WithInteger("Available", m_available);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
