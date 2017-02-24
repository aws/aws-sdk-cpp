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
#include <aws/es/model/InstanceLimits.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

InstanceLimits::InstanceLimits() : 
    m_instanceCountLimitsHasBeenSet(false)
{
}

InstanceLimits::InstanceLimits(const JsonValue& jsonValue) : 
    m_instanceCountLimitsHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceLimits& InstanceLimits::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("InstanceCountLimits"))
  {
    m_instanceCountLimits = jsonValue.GetObject("InstanceCountLimits");

    m_instanceCountLimitsHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceLimits::Jsonize() const
{
  JsonValue payload;

  if(m_instanceCountLimitsHasBeenSet)
  {
   payload.WithObject("InstanceCountLimits", m_instanceCountLimits.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws