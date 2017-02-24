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
#include <aws/es/model/InstanceCountLimits.h>
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

InstanceCountLimits::InstanceCountLimits() : 
    m_minimumInstanceCount(0),
    m_minimumInstanceCountHasBeenSet(false),
    m_maximumInstanceCount(0),
    m_maximumInstanceCountHasBeenSet(false)
{
}

InstanceCountLimits::InstanceCountLimits(const JsonValue& jsonValue) : 
    m_minimumInstanceCount(0),
    m_minimumInstanceCountHasBeenSet(false),
    m_maximumInstanceCount(0),
    m_maximumInstanceCountHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceCountLimits& InstanceCountLimits::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("MinimumInstanceCount"))
  {
    m_minimumInstanceCount = jsonValue.GetInteger("MinimumInstanceCount");

    m_minimumInstanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumInstanceCount"))
  {
    m_maximumInstanceCount = jsonValue.GetInteger("MaximumInstanceCount");

    m_maximumInstanceCountHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceCountLimits::Jsonize() const
{
  JsonValue payload;

  if(m_minimumInstanceCountHasBeenSet)
  {
   payload.WithInteger("MinimumInstanceCount", m_minimumInstanceCount);

  }

  if(m_maximumInstanceCountHasBeenSet)
  {
   payload.WithInteger("MaximumInstanceCount", m_maximumInstanceCount);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws