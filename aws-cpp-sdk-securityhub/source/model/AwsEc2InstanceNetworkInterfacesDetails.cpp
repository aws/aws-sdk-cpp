/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2InstanceNetworkInterfacesDetails.h>
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

AwsEc2InstanceNetworkInterfacesDetails::AwsEc2InstanceNetworkInterfacesDetails() : 
    m_networkInterfaceIdHasBeenSet(false)
{
}

AwsEc2InstanceNetworkInterfacesDetails::AwsEc2InstanceNetworkInterfacesDetails(JsonView jsonValue) : 
    m_networkInterfaceIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2InstanceNetworkInterfacesDetails& AwsEc2InstanceNetworkInterfacesDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NetworkInterfaceId"))
  {
    m_networkInterfaceId = jsonValue.GetString("NetworkInterfaceId");

    m_networkInterfaceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2InstanceNetworkInterfacesDetails::Jsonize() const
{
  JsonValue payload;

  if(m_networkInterfaceIdHasBeenSet)
  {
   payload.WithString("NetworkInterfaceId", m_networkInterfaceId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
