/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/CloudWatchLogsConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

CloudWatchLogsConfig::CloudWatchLogsConfig() : 
    m_status(LogsConfigStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_streamNameHasBeenSet(false)
{
}

CloudWatchLogsConfig::CloudWatchLogsConfig(JsonView jsonValue) : 
    m_status(LogsConfigStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_streamNameHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchLogsConfig& CloudWatchLogsConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = LogsConfigStatusTypeMapper::GetLogsConfigStatusTypeForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groupName"))
  {
    m_groupName = jsonValue.GetString("groupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamName"))
  {
    m_streamName = jsonValue.GetString("streamName");

    m_streamNameHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchLogsConfig::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", LogsConfigStatusTypeMapper::GetNameForLogsConfigStatusType(m_status));
  }

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("groupName", m_groupName);

  }

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("streamName", m_streamName);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
