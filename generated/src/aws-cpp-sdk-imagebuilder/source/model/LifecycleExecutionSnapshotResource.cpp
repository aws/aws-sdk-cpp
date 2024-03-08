/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LifecycleExecutionSnapshotResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

LifecycleExecutionSnapshotResource::LifecycleExecutionSnapshotResource() : 
    m_snapshotIdHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

LifecycleExecutionSnapshotResource::LifecycleExecutionSnapshotResource(JsonView jsonValue) : 
    m_snapshotIdHasBeenSet(false),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

LifecycleExecutionSnapshotResource& LifecycleExecutionSnapshotResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("snapshotId"))
  {
    m_snapshotId = jsonValue.GetString("snapshotId");

    m_snapshotIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = jsonValue.GetObject("state");

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue LifecycleExecutionSnapshotResource::Jsonize() const
{
  JsonValue payload;

  if(m_snapshotIdHasBeenSet)
  {
   payload.WithString("snapshotId", m_snapshotId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithObject("state", m_state.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
