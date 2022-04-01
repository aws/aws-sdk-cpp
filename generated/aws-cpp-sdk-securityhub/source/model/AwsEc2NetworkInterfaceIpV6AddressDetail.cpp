/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2NetworkInterfaceIpV6AddressDetail.h>
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

AwsEc2NetworkInterfaceIpV6AddressDetail::AwsEc2NetworkInterfaceIpV6AddressDetail() : 
    m_ipV6AddressHasBeenSet(false)
{
}

AwsEc2NetworkInterfaceIpV6AddressDetail::AwsEc2NetworkInterfaceIpV6AddressDetail(JsonView jsonValue) : 
    m_ipV6AddressHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2NetworkInterfaceIpV6AddressDetail& AwsEc2NetworkInterfaceIpV6AddressDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IpV6Address"))
  {
    m_ipV6Address = jsonValue.GetString("IpV6Address");

    m_ipV6AddressHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2NetworkInterfaceIpV6AddressDetail::Jsonize() const
{
  JsonValue payload;

  if(m_ipV6AddressHasBeenSet)
  {
   payload.WithString("IpV6Address", m_ipV6Address);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
