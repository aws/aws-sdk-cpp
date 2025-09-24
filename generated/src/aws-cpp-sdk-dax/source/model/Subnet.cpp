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

Subnet::Subnet(JsonView jsonValue)
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
  if(jsonValue.ValueExists("SupportedNetworkTypes"))
  {
    Aws::Utils::Array<JsonView> supportedNetworkTypesJsonList = jsonValue.GetArray("SupportedNetworkTypes");
    for(unsigned supportedNetworkTypesIndex = 0; supportedNetworkTypesIndex < supportedNetworkTypesJsonList.GetLength(); ++supportedNetworkTypesIndex)
    {
      m_supportedNetworkTypes.push_back(NetworkTypeMapper::GetNetworkTypeForName(supportedNetworkTypesJsonList[supportedNetworkTypesIndex].AsString()));
    }
    m_supportedNetworkTypesHasBeenSet = true;
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

  if(m_supportedNetworkTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedNetworkTypesJsonList(m_supportedNetworkTypes.size());
   for(unsigned supportedNetworkTypesIndex = 0; supportedNetworkTypesIndex < supportedNetworkTypesJsonList.GetLength(); ++supportedNetworkTypesIndex)
   {
     supportedNetworkTypesJsonList[supportedNetworkTypesIndex].AsString(NetworkTypeMapper::GetNameForNetworkType(m_supportedNetworkTypes[supportedNetworkTypesIndex]));
   }
   payload.WithArray("SupportedNetworkTypes", std::move(supportedNetworkTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DAX
} // namespace Aws
