/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/NetworkInterface.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

NetworkInterface::NetworkInterface() : 
    m_attachmentIdHasBeenSet(false),
    m_ipv6AddressHasBeenSet(false),
    m_privateIpv4AddressHasBeenSet(false)
{
}

NetworkInterface::NetworkInterface(JsonView jsonValue) : 
    m_attachmentIdHasBeenSet(false),
    m_ipv6AddressHasBeenSet(false),
    m_privateIpv4AddressHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkInterface& NetworkInterface::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attachmentId"))
  {
    m_attachmentId = jsonValue.GetString("attachmentId");

    m_attachmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipv6Address"))
  {
    m_ipv6Address = jsonValue.GetString("ipv6Address");

    m_ipv6AddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privateIpv4Address"))
  {
    m_privateIpv4Address = jsonValue.GetString("privateIpv4Address");

    m_privateIpv4AddressHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkInterface::Jsonize() const
{
  JsonValue payload;

  if(m_attachmentIdHasBeenSet)
  {
   payload.WithString("attachmentId", m_attachmentId);

  }

  if(m_ipv6AddressHasBeenSet)
  {
   payload.WithString("ipv6Address", m_ipv6Address);

  }

  if(m_privateIpv4AddressHasBeenSet)
  {
   payload.WithString("privateIpv4Address", m_privateIpv4Address);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
