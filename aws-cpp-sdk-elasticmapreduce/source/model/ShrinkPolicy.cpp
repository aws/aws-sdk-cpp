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
#include <aws/elasticmapreduce/model/ShrinkPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

ShrinkPolicy::ShrinkPolicy() : 
    m_decommissionTimeout(0),
    m_decommissionTimeoutHasBeenSet(false),
    m_instanceResizePolicyHasBeenSet(false)
{
}

ShrinkPolicy::ShrinkPolicy(const JsonValue& jsonValue) : 
    m_decommissionTimeout(0),
    m_decommissionTimeoutHasBeenSet(false),
    m_instanceResizePolicyHasBeenSet(false)
{
  *this = jsonValue;
}

ShrinkPolicy& ShrinkPolicy::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("DecommissionTimeout"))
  {
    m_decommissionTimeout = jsonValue.GetInteger("DecommissionTimeout");

    m_decommissionTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceResizePolicy"))
  {
    m_instanceResizePolicy = jsonValue.GetObject("InstanceResizePolicy");

    m_instanceResizePolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue ShrinkPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_decommissionTimeoutHasBeenSet)
  {
   payload.WithInteger("DecommissionTimeout", m_decommissionTimeout);

  }

  if(m_instanceResizePolicyHasBeenSet)
  {
   payload.WithObject("InstanceResizePolicy", m_instanceResizePolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws