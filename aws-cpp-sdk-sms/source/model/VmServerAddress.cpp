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

#include <aws/sms/model/VmServerAddress.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SMS
{
namespace Model
{

VmServerAddress::VmServerAddress() : 
    m_vmManagerIdHasBeenSet(false),
    m_vmIdHasBeenSet(false)
{
}

VmServerAddress::VmServerAddress(const JsonValue& jsonValue) : 
    m_vmManagerIdHasBeenSet(false),
    m_vmIdHasBeenSet(false)
{
  *this = jsonValue;
}

VmServerAddress& VmServerAddress::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("vmManagerId"))
  {
    m_vmManagerId = jsonValue.GetString("vmManagerId");

    m_vmManagerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vmId"))
  {
    m_vmId = jsonValue.GetString("vmId");

    m_vmIdHasBeenSet = true;
  }

  return *this;
}

JsonValue VmServerAddress::Jsonize() const
{
  JsonValue payload;

  if(m_vmManagerIdHasBeenSet)
  {
   payload.WithString("vmManagerId", m_vmManagerId);

  }

  if(m_vmIdHasBeenSet)
  {
   payload.WithString("vmId", m_vmId);

  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
