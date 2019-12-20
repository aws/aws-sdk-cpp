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

#include <aws/securityhub/model/AvailabilityZone.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AvailabilityZone::AvailabilityZone() : 
    m_zoneNameHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

AvailabilityZone::AvailabilityZone(JsonView jsonValue) : 
    m_zoneNameHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
  *this = jsonValue;
}

AvailabilityZone& AvailabilityZone::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ZoneName"))
  {
    m_zoneName = jsonValue.GetString("ZoneName");

    m_zoneNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

    m_subnetIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AvailabilityZone::Jsonize() const
{
  JsonValue payload;

  if(m_zoneNameHasBeenSet)
  {
   payload.WithString("ZoneName", m_zoneName);

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
