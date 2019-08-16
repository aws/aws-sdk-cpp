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

#include <aws/elasticmapreduce/model/PortRange.h>
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

PortRange::PortRange() : 
    m_minRange(0),
    m_minRangeHasBeenSet(false),
    m_maxRange(0),
    m_maxRangeHasBeenSet(false)
{
}

PortRange::PortRange(JsonView jsonValue) : 
    m_minRange(0),
    m_minRangeHasBeenSet(false),
    m_maxRange(0),
    m_maxRangeHasBeenSet(false)
{
  *this = jsonValue;
}

PortRange& PortRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinRange"))
  {
    m_minRange = jsonValue.GetInteger("MinRange");

    m_minRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxRange"))
  {
    m_maxRange = jsonValue.GetInteger("MaxRange");

    m_maxRangeHasBeenSet = true;
  }

  return *this;
}

JsonValue PortRange::Jsonize() const
{
  JsonValue payload;

  if(m_minRangeHasBeenSet)
  {
   payload.WithInteger("MinRange", m_minRange);

  }

  if(m_maxRangeHasBeenSet)
  {
   payload.WithInteger("MaxRange", m_maxRange);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
