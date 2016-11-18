/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

EC2InstanceLimit::EC2InstanceLimit(const JsonValue& jsonValue) : 
    m_eC2InstanceType(EC2InstanceType::NOT_SET),
    m_eC2InstanceTypeHasBeenSet(false),
    m_currentInstances(0),
    m_currentInstancesHasBeenSet(false),
    m_instanceLimit(0),
    m_instanceLimitHasBeenSet(false)
{
  *this = jsonValue;
}

EC2InstanceLimit& EC2InstanceLimit::operator =(const JsonValue& jsonValue)
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