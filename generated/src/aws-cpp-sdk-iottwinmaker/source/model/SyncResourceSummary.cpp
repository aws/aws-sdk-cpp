/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/SyncResourceSummary.h>
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

SyncResourceSummary::SyncResourceSummary() : 
    m_resourceType(SyncResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_updateDateTimeHasBeenSet(false)
{
}

SyncResourceSummary::SyncResourceSummary(JsonView jsonValue) : 
    m_resourceType(SyncResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_updateDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

SyncResourceSummary& SyncResourceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = SyncResourceTypeMapper::GetSyncResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalId"))
  {
    m_externalId = jsonValue.GetString("externalId");

    m_externalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateDateTime"))
  {
    m_updateDateTime = jsonValue.GetDouble("updateDateTime");

    m_updateDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue SyncResourceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", SyncResourceTypeMapper::GetNameForSyncResourceType(m_resourceType));
  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("externalId", m_externalId);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("status", m_status.Jsonize());

  }

  if(m_updateDateTimeHasBeenSet)
  {
   payload.WithDouble("updateDateTime", m_updateDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
