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

#include <aws/guardduty/model/RemotePortDetails.h>
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

RemotePortDetails::RemotePortDetails() : 
    m_port(0),
    m_portHasBeenSet(false),
    m_portNameHasBeenSet(false)
{
}

RemotePortDetails::RemotePortDetails(const JsonValue& jsonValue) : 
    m_port(0),
    m_portHasBeenSet(false),
    m_portNameHasBeenSet(false)
{
  *this = jsonValue;
}

RemotePortDetails& RemotePortDetails::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("portName"))
  {
    m_portName = jsonValue.GetString("portName");

    m_portNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RemotePortDetails::Jsonize() const
{
  JsonValue payload;

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_portNameHasBeenSet)
  {
   payload.WithString("portName", m_portName);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
