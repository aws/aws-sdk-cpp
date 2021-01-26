/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
