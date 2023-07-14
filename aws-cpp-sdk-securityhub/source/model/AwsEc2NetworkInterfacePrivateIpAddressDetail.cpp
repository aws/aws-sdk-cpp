/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2NetworkInterfacePrivateIpAddressDetail.h>
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

AwsEc2NetworkInterfacePrivateIpAddressDetail::AwsEc2NetworkInterfacePrivateIpAddressDetail() : 
    m_privateIpAddressHasBeenSet(false),
    m_privateDnsNameHasBeenSet(false)
{
}

AwsEc2NetworkInterfacePrivateIpAddressDetail::AwsEc2NetworkInterfacePrivateIpAddressDetail(JsonView jsonValue) : 
    m_privateIpAddressHasBeenSet(false),
    m_privateDnsNameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2NetworkInterfacePrivateIpAddressDetail& AwsEc2NetworkInterfacePrivateIpAddressDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrivateIpAddress"))
  {
    m_privateIpAddress = jsonValue.GetString("PrivateIpAddress");

    m_privateIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivateDnsName"))
  {
    m_privateDnsName = jsonValue.GetString("PrivateDnsName");

    m_privateDnsNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2NetworkInterfacePrivateIpAddressDetail::Jsonize() const
{
  JsonValue payload;

  if(m_privateIpAddressHasBeenSet)
  {
   payload.WithString("PrivateIpAddress", m_privateIpAddress);

  }

  if(m_privateDnsNameHasBeenSet)
  {
   payload.WithString("PrivateDnsName", m_privateDnsName);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
