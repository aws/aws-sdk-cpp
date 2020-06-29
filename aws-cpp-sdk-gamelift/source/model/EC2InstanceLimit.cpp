/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/EC2InstanceLimit.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

EC2InstanceLimit::EC2InstanceLimit() : 
    m_eC2InstanceType(EC2InstanceType::NOT_SET),
    m_eC2InstanceTypeHasBeenSet(false),
    m_currentInstances(0),
    m_currentInstancesHasBeenSet(false),
    m_instanceLimit(0),
    m_instanceLimitHasBeenSet(false)
{
}

EC2InstanceLimit::EC2InstanceLimit(JsonView jsonValue) : 
    m_eC2InstanceType(EC2InstanceType::NOT_SET),
    m_eC2InstanceTypeHasBeenSet(false),
    m_currentInstances(0),
    m_currentInstancesHasBeenSet(false),
    m_instanceLimit(0),
    m_instanceLimitHasBeenSet(false)
{
  *this = jsonValue;
}

EC2InstanceLimit& EC2InstanceLimit::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EC2InstanceType"))
  {
    m_eC2InstanceType = EC2InstanceTypeMapper::GetEC2InstanceTypeForName(jsonValue.GetString("EC2InstanceType"));

    m_eC2InstanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentInstances"))
  {
    m_currentInstances = jsonValue.GetInteger("CurrentInstances");

    m_currentInstancesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceLimit"))
  {
    m_instanceLimit = jsonValue.GetInteger("InstanceLimit");

    m_instanceLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue EC2InstanceLimit::Jsonize() const
{
  JsonValue payload;

  if(m_eC2InstanceTypeHasBeenSet)
  {
   payload.WithString("EC2InstanceType", EC2InstanceTypeMapper::GetNameForEC2InstanceType(m_eC2InstanceType));
  }

  if(m_currentInstancesHasBeenSet)
  {
   payload.WithInteger("CurrentInstances", m_currentInstances);

  }

  if(m_instanceLimitHasBeenSet)
  {
   payload.WithInteger("InstanceLimit", m_instanceLimit);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
