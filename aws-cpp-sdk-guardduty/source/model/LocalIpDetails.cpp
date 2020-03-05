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

#include <aws/guardduty/model/LocalIpDetails.h>
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

LocalIpDetails::LocalIpDetails() : 
    m_ipAddressV4HasBeenSet(false)
{
}

LocalIpDetails::LocalIpDetails(JsonView jsonValue) : 
    m_ipAddressV4HasBeenSet(false)
{
  *this = jsonValue;
}

LocalIpDetails& LocalIpDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ipAddressV4"))
  {
    m_ipAddressV4 = jsonValue.GetString("ipAddressV4");

    m_ipAddressV4HasBeenSet = true;
  }

  return *this;
}

JsonValue LocalIpDetails::Jsonize() const
{
  JsonValue payload;

  if(m_ipAddressV4HasBeenSet)
  {
   payload.WithString("ipAddressV4", m_ipAddressV4);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
