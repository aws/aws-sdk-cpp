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

#include <aws/medialive/model/InputDestinationVpc.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

InputDestinationVpc::InputDestinationVpc() : 
    m_availabilityZoneHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false)
{
}

InputDestinationVpc::InputDestinationVpc(JsonView jsonValue) : 
    m_availabilityZoneHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false)
{
  *this = jsonValue;
}

InputDestinationVpc& InputDestinationVpc::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("availabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("availabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkInterfaceId"))
  {
    m_networkInterfaceId = jsonValue.GetString("networkInterfaceId");

    m_networkInterfaceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue InputDestinationVpc::Jsonize() const
{
  JsonValue payload;

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_networkInterfaceIdHasBeenSet)
  {
   payload.WithString("networkInterfaceId", m_networkInterfaceId);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
