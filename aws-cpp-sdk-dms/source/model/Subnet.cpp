/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dms/model/Subnet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

Subnet::Subnet() : 
    m_subnetIdentifierHasBeenSet(false),
    m_subnetAvailabilityZoneHasBeenSet(false),
    m_subnetStatusHasBeenSet(false)
{
}

Subnet::Subnet(const JsonValue& jsonValue) : 
    m_subnetIdentifierHasBeenSet(false),
    m_subnetAvailabilityZoneHasBeenSet(false),
    m_subnetStatusHasBeenSet(false)
{
  *this = jsonValue;
}

Subnet& Subnet::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SubnetIdentifier"))
  {
    m_subnetIdentifier = jsonValue.GetString("SubnetIdentifier");

    m_subnetIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetAvailabilityZone"))
  {
    m_subnetAvailabilityZone = jsonValue.GetObject("SubnetAvailabilityZone");

    m_subnetAvailabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetStatus"))
  {
    m_subnetStatus = jsonValue.GetString("SubnetStatus");

    m_subnetStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue Subnet::Jsonize() const
{
  JsonValue payload;

  if(m_subnetIdentifierHasBeenSet)
  {
   payload.WithString("SubnetIdentifier", m_subnetIdentifier);

  }

  if(m_subnetAvailabilityZoneHasBeenSet)
  {
   payload.WithObject("SubnetAvailabilityZone", m_subnetAvailabilityZone.Jsonize());

  }

  if(m_subnetStatusHasBeenSet)
  {
   payload.WithString("SubnetStatus", m_subnetStatus);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws