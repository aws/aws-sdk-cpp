﻿/*
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

#include <aws/servicediscovery/model/DnsProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

DnsProperties::DnsProperties() : 
    m_hostedZoneIdHasBeenSet(false)
{
}

DnsProperties::DnsProperties(JsonView jsonValue) : 
    m_hostedZoneIdHasBeenSet(false)
{
  *this = jsonValue;
}

DnsProperties& DnsProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HostedZoneId"))
  {
    m_hostedZoneId = jsonValue.GetString("HostedZoneId");

    m_hostedZoneIdHasBeenSet = true;
  }

  return *this;
}

JsonValue DnsProperties::Jsonize() const
{
  JsonValue payload;

  if(m_hostedZoneIdHasBeenSet)
  {
   payload.WithString("HostedZoneId", m_hostedZoneId);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
