/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/HostPropertiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

HostPropertiesRequest::HostPropertiesRequest() : 
    m_hostNameHasBeenSet(false),
    m_ipAddressesHasBeenSet(false)
{
}

HostPropertiesRequest::HostPropertiesRequest(JsonView jsonValue) : 
    m_hostNameHasBeenSet(false),
    m_ipAddressesHasBeenSet(false)
{
  *this = jsonValue;
}

HostPropertiesRequest& HostPropertiesRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hostName"))
  {
    m_hostName = jsonValue.GetString("hostName");

    m_hostNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipAddresses"))
  {
    m_ipAddresses = jsonValue.GetObject("ipAddresses");

    m_ipAddressesHasBeenSet = true;
  }

  return *this;
}

JsonValue HostPropertiesRequest::Jsonize() const
{
  JsonValue payload;

  if(m_hostNameHasBeenSet)
  {
   payload.WithString("hostName", m_hostName);

  }

  if(m_ipAddressesHasBeenSet)
  {
   payload.WithObject("ipAddresses", m_ipAddresses.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
