/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/InvalidNetworkInterface.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

InvalidNetworkInterface::InvalidNetworkInterface() : 
    m_interfaceIdHasBeenSet(false),
    m_reason(NetworkInterfaceFailureReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

InvalidNetworkInterface::InvalidNetworkInterface(JsonView jsonValue) : 
    m_interfaceIdHasBeenSet(false),
    m_reason(NetworkInterfaceFailureReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidNetworkInterface& InvalidNetworkInterface::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("interfaceId"))
  {
    m_interfaceId = jsonValue.GetString("interfaceId");

    m_interfaceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = NetworkInterfaceFailureReasonMapper::GetNetworkInterfaceFailureReasonForName(jsonValue.GetString("reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidNetworkInterface::Jsonize() const
{
  JsonValue payload;

  if(m_interfaceIdHasBeenSet)
  {
   payload.WithString("interfaceId", m_interfaceId);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", NetworkInterfaceFailureReasonMapper::GetNameForNetworkInterfaceFailureReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
