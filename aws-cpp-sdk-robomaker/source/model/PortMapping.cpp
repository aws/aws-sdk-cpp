/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
