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

#include <aws/robomaker/model/LoggingConfig.h>
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

LoggingConfig::LoggingConfig() : 
    m_recordAllRosTopics(false),
    m_recordAllRosTopicsHasBeenSet(false)
{
}

LoggingConfig::LoggingConfig(JsonView jsonValue) : 
    m_recordAllRosTopics(false),
    m_recordAllRosTopicsHasBeenSet(false)
{
  *this = jsonValue;
}

LoggingConfig& LoggingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("recordAllRosTopics"))
  {
    m_recordAllRosTopics = jsonValue.GetBool("recordAllRosTopics");

    m_recordAllRosTopicsHasBeenSet = true;
  }

  return *this;
}

JsonValue LoggingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_recordAllRosTopicsHasBeenSet)
  {
   payload.WithBool("recordAllRosTopics", m_recordAllRosTopics);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
