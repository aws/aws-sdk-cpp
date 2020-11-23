/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/Outpost.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Outposts
{
namespace Model
{

Outpost::Outpost() : 
    m_outpostIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_outpostArnHasBeenSet(false),
    m_siteIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lifeCycleStatusHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Outpost::Outpost(JsonView jsonValue) : 
    m_outpostIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_outpostArnHasBeenSet(false),
    m_siteIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lifeCycleStatusHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Outpost& Outpost::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutpostId"))
  {
    m_outpostId = jsonValue.GetString("OutpostId");

    m_outpostIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutpostArn"))
  {
    m_outpostArn = jsonValue.GetString("OutpostArn");

    m_outpostArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SiteId"))
  {
    m_siteId = jsonValue.GetString("SiteId");

    m_siteIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LifeCycleStatus"))
  {
    m_lifeCycleStatus = jsonValue.GetString("LifeCycleStatus");

    m_lifeCycleStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZoneId"))
  {
    m_availabilityZoneId = jsonValue.GetString("AvailabilityZoneId");

    m_availabilityZoneIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue Outpost::Jsonize() const
{
  JsonValue payload;

  if(m_outpostIdHasBeenSet)
  {
   payload.WithString("OutpostId", m_outpostId);

  }

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_outpostArnHasBeenSet)
  {
   payload.WithString("OutpostArn", m_outpostArn);

  }

  if(m_siteIdHasBeenSet)
  {
   payload.WithString("SiteId", m_siteId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_lifeCycleStatusHasBeenSet)
  {
   payload.WithString("LifeCycleStatus", m_lifeCycleStatus);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_availabilityZoneIdHasBeenSet)
  {
   payload.WithString("AvailabilityZoneId", m_availabilityZoneId);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
