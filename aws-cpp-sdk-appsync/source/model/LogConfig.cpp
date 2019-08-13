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

#include <aws/appsync/model/LogConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

LogConfig::LogConfig() : 
    m_fieldLogLevel(FieldLogLevel::NOT_SET),
    m_fieldLogLevelHasBeenSet(false),
    m_cloudWatchLogsRoleArnHasBeenSet(false),
    m_excludeVerboseContent(false),
    m_excludeVerboseContentHasBeenSet(false)
{
}

LogConfig::LogConfig(JsonView jsonValue) : 
    m_fieldLogLevel(FieldLogLevel::NOT_SET),
    m_fieldLogLevelHasBeenSet(false),
    m_cloudWatchLogsRoleArnHasBeenSet(false),
    m_excludeVerboseContent(false),
    m_excludeVerboseContentHasBeenSet(false)
{
  *this = jsonValue;
}

LogConfig& LogConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fieldLogLevel"))
  {
    m_fieldLogLevel = FieldLogLevelMapper::GetFieldLogLevelForName(jsonValue.GetString("fieldLogLevel"));

    m_fieldLogLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cloudWatchLogsRoleArn"))
  {
    m_cloudWatchLogsRoleArn = jsonValue.GetString("cloudWatchLogsRoleArn");

    m_cloudWatchLogsRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("excludeVerboseContent"))
  {
    m_excludeVerboseContent = jsonValue.GetBool("excludeVerboseContent");

    m_excludeVerboseContentHasBeenSet = true;
  }

  return *this;
}

JsonValue LogConfig::Jsonize() const
{
  JsonValue payload;

  if(m_fieldLogLevelHasBeenSet)
  {
   payload.WithString("fieldLogLevel", FieldLogLevelMapper::GetNameForFieldLogLevel(m_fieldLogLevel));
  }

  if(m_cloudWatchLogsRoleArnHasBeenSet)
  {
   payload.WithString("cloudWatchLogsRoleArn", m_cloudWatchLogsRoleArn);

  }

  if(m_excludeVerboseContentHasBeenSet)
  {
   payload.WithBool("excludeVerboseContent", m_excludeVerboseContent);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
