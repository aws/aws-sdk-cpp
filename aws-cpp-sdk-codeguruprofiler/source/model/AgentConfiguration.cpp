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

#include <aws/codeguruprofiler/model/AgentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{

AgentConfiguration::AgentConfiguration() : 
    m_periodInSeconds(0),
    m_periodInSecondsHasBeenSet(false),
    m_shouldProfile(false),
    m_shouldProfileHasBeenSet(false)
{
}

AgentConfiguration::AgentConfiguration(JsonView jsonValue) : 
    m_periodInSeconds(0),
    m_periodInSecondsHasBeenSet(false),
    m_shouldProfile(false),
    m_shouldProfileHasBeenSet(false)
{
  *this = jsonValue;
}

AgentConfiguration& AgentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("periodInSeconds"))
  {
    m_periodInSeconds = jsonValue.GetInteger("periodInSeconds");

    m_periodInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shouldProfile"))
  {
    m_shouldProfile = jsonValue.GetBool("shouldProfile");

    m_shouldProfileHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_periodInSecondsHasBeenSet)
  {
   payload.WithInteger("periodInSeconds", m_periodInSeconds);

  }

  if(m_shouldProfileHasBeenSet)
  {
   payload.WithBool("shouldProfile", m_shouldProfile);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
