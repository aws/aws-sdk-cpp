/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/SyncResourceFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

SyncResourceFilter::SyncResourceFilter() : 
    m_state(SyncResourceState::NOT_SET),
    m_stateHasBeenSet(false),
    m_resourceType(SyncResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_externalIdHasBeenSet(false)
{
}

SyncResourceFilter::SyncResourceFilter(JsonView jsonValue) : 
    m_state(SyncResourceState::NOT_SET),
    m_stateHasBeenSet(false),
    m_resourceType(SyncResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_externalIdHasBeenSet(false)
{
  *this = jsonValue;
}

SyncResourceFilter& SyncResourceFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("state"))
  {
    m_state = SyncResourceStateMapper::GetSyncResourceStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = SyncResourceTypeMapper::GetSyncResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalId"))
  {
    m_externalId = jsonValue.GetString("externalId");

    m_externalIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SyncResourceFilter::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", SyncResourceStateMapper::GetNameForSyncResourceState(m_state));
  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", SyncResourceTypeMapper::GetNameForSyncResourceType(m_resourceType));
  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("externalId", m_externalId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
