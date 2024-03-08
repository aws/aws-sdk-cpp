/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ComputeCapacity.h>
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

ComputeCapacity::ComputeCapacity() : 
    m_desiredInstances(0),
    m_desiredInstancesHasBeenSet(false),
    m_desiredSessions(0),
    m_desiredSessionsHasBeenSet(false)
{
}

ComputeCapacity::ComputeCapacity(JsonView jsonValue) : 
    m_desiredInstances(0),
    m_desiredInstancesHasBeenSet(false),
    m_desiredSessions(0),
    m_desiredSessionsHasBeenSet(false)
{
  *this = jsonValue;
}

ComputeCapacity& ComputeCapacity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DesiredInstances"))
  {
    m_desiredInstances = jsonValue.GetInteger("DesiredInstances");

    m_desiredInstancesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DesiredSessions"))
  {
    m_desiredSessions = jsonValue.GetInteger("DesiredSessions");

    m_desiredSessionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ComputeCapacity::Jsonize() const
{
  JsonValue payload;

  if(m_desiredInstancesHasBeenSet)
  {
   payload.WithInteger("DesiredInstances", m_desiredInstances);

  }

  if(m_desiredSessionsHasBeenSet)
  {
   payload.WithInteger("DesiredSessions", m_desiredSessions);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
