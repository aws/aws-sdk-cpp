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

#include <aws/robomaker/model/PortMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

PortMapping::PortMapping() : 
    m_jobPort(0),
    m_jobPortHasBeenSet(false),
    m_applicationPort(0),
    m_applicationPortHasBeenSet(false),
    m_enableOnPublicIp(false),
    m_enableOnPublicIpHasBeenSet(false)
{
}

PortMapping::PortMapping(JsonView jsonValue) : 
    m_jobPort(0),
    m_jobPortHasBeenSet(false),
    m_applicationPort(0),
    m_applicationPortHasBeenSet(false),
    m_enableOnPublicIp(false),
    m_enableOnPublicIpHasBeenSet(false)
{
  *this = jsonValue;
}

PortMapping& PortMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobPort"))
  {
    m_jobPort = jsonValue.GetInteger("jobPort");

    m_jobPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationPort"))
  {
    m_applicationPort = jsonValue.GetInteger("applicationPort");

    m_applicationPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enableOnPublicIp"))
  {
    m_enableOnPublicIp = jsonValue.GetBool("enableOnPublicIp");

    m_enableOnPublicIpHasBeenSet = true;
  }

  return *this;
}

JsonValue PortMapping::Jsonize() const
{
  JsonValue payload;

  if(m_jobPortHasBeenSet)
  {
   payload.WithInteger("jobPort", m_jobPort);

  }

  if(m_applicationPortHasBeenSet)
  {
   payload.WithInteger("applicationPort", m_applicationPort);

  }

  if(m_enableOnPublicIpHasBeenSet)
  {
   payload.WithBool("enableOnPublicIp", m_enableOnPublicIp);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
