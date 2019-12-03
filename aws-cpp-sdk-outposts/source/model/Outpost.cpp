/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_availabilityZoneIdHasBeenSet(false)
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
    m_availabilityZoneIdHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
