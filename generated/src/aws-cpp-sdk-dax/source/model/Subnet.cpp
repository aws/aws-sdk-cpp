/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/Subnet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DAX
{
namespace Model
{

Subnet::Subnet() : 
    m_subnetIdentifierHasBeenSet(false),
    m_subnetAvailabilityZoneHasBeenSet(false)
{
}

Subnet::Subnet(JsonView jsonValue) : 
    m_subnetIdentifierHasBeenSet(false),
    m_subnetAvailabilityZoneHasBeenSet(false)
{
  *this = jsonValue;
}

Subnet& Subnet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SubnetIdentifier"))
  {
    m_subnetIdentifier = jsonValue.GetString("SubnetIdentifier");

    m_subnetIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetAvailabilityZone"))
  {
    m_subnetAvailabilityZone = jsonValue.GetString("SubnetAvailabilityZone");

    m_subnetAvailabilityZoneHasBeenSet = true;
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
   payload.WithString("SubnetAvailabilityZone", m_subnetAvailabilityZone);

  }

  return payload;
}

} // namespace Model
} // namespace DAX
} // namespace Aws
