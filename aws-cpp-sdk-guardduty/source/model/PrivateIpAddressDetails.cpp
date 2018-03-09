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

#include <aws/guardduty/model/PrivateIpAddressDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

PrivateIpAddressDetails::PrivateIpAddressDetails() : 
    m_privateDnsNameHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false)
{
}

PrivateIpAddressDetails::PrivateIpAddressDetails(const JsonValue& jsonValue) : 
    m_privateDnsNameHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false)
{
  *this = jsonValue;
}

PrivateIpAddressDetails& PrivateIpAddressDetails::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("privateDnsName"))
  {
    m_privateDnsName = jsonValue.GetString("privateDnsName");

    m_privateDnsNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privateIpAddress"))
  {
    m_privateIpAddress = jsonValue.GetString("privateIpAddress");

    m_privateIpAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue PrivateIpAddressDetails::Jsonize() const
{
  JsonValue payload;

  if(m_privateDnsNameHasBeenSet)
  {
   payload.WithString("privateDnsName", m_privateDnsName);

  }

  if(m_privateIpAddressHasBeenSet)
  {
   payload.WithString("privateIpAddress", m_privateIpAddress);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
