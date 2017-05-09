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

#include <aws/appstream/model/ComputeCapacity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

ComputeCapacity::ComputeCapacity() : 
    m_desiredInstances(0),
    m_desiredInstancesHasBeenSet(false)
{
}

ComputeCapacity::ComputeCapacity(const JsonValue& jsonValue) : 
    m_desiredInstances(0),
    m_desiredInstancesHasBeenSet(false)
{
  *this = jsonValue;
}

ComputeCapacity& ComputeCapacity::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("DesiredInstances"))
  {
    m_desiredInstances = jsonValue.GetInteger("DesiredInstances");

    m_desiredInstancesHasBeenSet = true;
  }

  return *this;
}

JsonValue ComputeCapacity::Jsonize() const
{
  JsonValue payload;

  if(m_desiredInstancesHasBeenSet)
  {
   payload.WithInteger("DesiredInstances", m_desiredInstances);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws