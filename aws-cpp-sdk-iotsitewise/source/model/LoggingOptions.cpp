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

#include <aws/iotsitewise/model/LoggingOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

LoggingOptions::LoggingOptions() : 
    m_level(LoggingLevel::NOT_SET),
    m_levelHasBeenSet(false)
{
}

LoggingOptions::LoggingOptions(JsonView jsonValue) : 
    m_level(LoggingLevel::NOT_SET),
    m_levelHasBeenSet(false)
{
  *this = jsonValue;
}

LoggingOptions& LoggingOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("level"))
  {
    m_level = LoggingLevelMapper::GetLoggingLevelForName(jsonValue.GetString("level"));

    m_levelHasBeenSet = true;
  }

  return *this;
}

JsonValue LoggingOptions::Jsonize() const
{
  JsonValue payload;

  if(m_levelHasBeenSet)
  {
   payload.WithString("level", LoggingLevelMapper::GetNameForLoggingLevel(m_level));
  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
