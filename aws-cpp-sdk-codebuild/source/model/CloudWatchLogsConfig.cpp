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
