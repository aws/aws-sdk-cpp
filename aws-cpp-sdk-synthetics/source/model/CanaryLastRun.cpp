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

#include <aws/synthetics/model/CanaryLastRun.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Synthetics
{
namespace Model
{

CanaryLastRun::CanaryLastRun() : 
    m_canaryNameHasBeenSet(false),
    m_lastRunHasBeenSet(false)
{
}

CanaryLastRun::CanaryLastRun(JsonView jsonValue) : 
    m_canaryNameHasBeenSet(false),
    m_lastRunHasBeenSet(false)
{
  *this = jsonValue;
}

CanaryLastRun& CanaryLastRun::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CanaryName"))
  {
    m_canaryName = jsonValue.GetString("CanaryName");

    m_canaryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastRun"))
  {
    m_lastRun = jsonValue.GetObject("LastRun");

    m_lastRunHasBeenSet = true;
  }

  return *this;
}

JsonValue CanaryLastRun::Jsonize() const
{
  JsonValue payload;

  if(m_canaryNameHasBeenSet)
  {
   payload.WithString("CanaryName", m_canaryName);

  }

  if(m_lastRunHasBeenSet)
  {
   payload.WithObject("LastRun", m_lastRun.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
