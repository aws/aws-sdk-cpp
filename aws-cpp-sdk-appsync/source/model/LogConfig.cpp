/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
