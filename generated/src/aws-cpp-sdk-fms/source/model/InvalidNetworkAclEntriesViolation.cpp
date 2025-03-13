/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/InvalidNetworkAclEntriesViolation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

InvalidNetworkAclEntriesViolation::InvalidNetworkAclEntriesViolation(JsonView jsonValue)
{
  *this = jsonValue;
}

InvalidNetworkAclEntriesViolation& InvalidNetworkAclEntriesViolation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Vpc"))
  {
    m_vpc = jsonValue.GetString("Vpc");
    m_vpcHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Subnet"))
  {
    m_subnet = jsonValue.GetString("Subnet");
    m_subnetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubnetAvailabilityZone"))
  {
    m_subnetAvailabilityZone = jsonValue.GetString("SubnetAvailabilityZone");
    m_subnetAvailabilityZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CurrentAssociatedNetworkAcl"))
  {
    m_currentAssociatedNetworkAcl = jsonValue.GetString("CurrentAssociatedNetworkAcl");
    m_currentAssociatedNetworkAclHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EntryViolations"))
  {
    Aws::Utils::Array<JsonView> entryViolationsJsonList = jsonValue.GetArray("EntryViolations");
    for(unsigned entryViolationsIndex = 0; entryViolationsIndex < entryViolationsJsonList.GetLength(); ++entryViolationsIndex)
    {
      m_entryViolations.push_back(entryViolationsJsonList[entryViolationsIndex].AsObject());
    }
    m_entryViolationsHasBeenSet = true;
  }
  return *this;
}

JsonValue InvalidNetworkAclEntriesViolation::Jsonize() const
{
  JsonValue payload;

  if(m_vpcHasBeenSet)
  {
   payload.WithString("Vpc", m_vpc);

  }

  if(m_subnetHasBeenSet)
  {
   payload.WithString("Subnet", m_subnet);

  }

  if(m_subnetAvailabilityZoneHasBeenSet)
  {
   payload.WithString("SubnetAvailabilityZone", m_subnetAvailabilityZone);

  }

  if(m_currentAssociatedNetworkAclHasBeenSet)
  {
   payload.WithString("CurrentAssociatedNetworkAcl", m_currentAssociatedNetworkAcl);

  }

  if(m_entryViolationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entryViolationsJsonList(m_entryViolations.size());
   for(unsigned entryViolationsIndex = 0; entryViolationsIndex < entryViolationsJsonList.GetLength(); ++entryViolationsIndex)
   {
     entryViolationsJsonList[entryViolationsIndex].AsObject(m_entryViolations[entryViolationsIndex].Jsonize());
   }
   payload.WithArray("EntryViolations", std::move(entryViolationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
