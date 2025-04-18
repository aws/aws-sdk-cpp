﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/HostPropertiesResponse.h>
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

HostPropertiesResponse::HostPropertiesResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

HostPropertiesResponse& HostPropertiesResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ipAddresses"))
  {
    m_ipAddresses = jsonValue.GetObject("ipAddresses");
    m_ipAddressesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hostName"))
  {
    m_hostName = jsonValue.GetString("hostName");
    m_hostNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ec2InstanceArn"))
  {
    m_ec2InstanceArn = jsonValue.GetString("ec2InstanceArn");
    m_ec2InstanceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ec2InstanceType"))
  {
    m_ec2InstanceType = jsonValue.GetString("ec2InstanceType");
    m_ec2InstanceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue HostPropertiesResponse::Jsonize() const
{
  JsonValue payload;

  if(m_ipAddressesHasBeenSet)
  {
   payload.WithObject("ipAddresses", m_ipAddresses.Jsonize());

  }

  if(m_hostNameHasBeenSet)
  {
   payload.WithString("hostName", m_hostName);

  }

  if(m_ec2InstanceArnHasBeenSet)
  {
   payload.WithString("ec2InstanceArn", m_ec2InstanceArn);

  }

  if(m_ec2InstanceTypeHasBeenSet)
  {
   payload.WithString("ec2InstanceType", m_ec2InstanceType);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
