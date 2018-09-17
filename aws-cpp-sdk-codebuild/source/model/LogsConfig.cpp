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

#include <aws/codebuild/model/LogsConfig.h>
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

LogsConfig::LogsConfig() : 
    m_cloudWatchLogsHasBeenSet(false),
    m_s3LogsHasBeenSet(false)
{
}

LogsConfig::LogsConfig(JsonView jsonValue) : 
    m_cloudWatchLogsHasBeenSet(false),
    m_s3LogsHasBeenSet(false)
{
  *this = jsonValue;
}

LogsConfig& LogsConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudWatchLogs"))
  {
    m_cloudWatchLogs = jsonValue.GetObject("cloudWatchLogs");

    m_cloudWatchLogsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Logs"))
  {
    m_s3Logs = jsonValue.GetObject("s3Logs");

    m_s3LogsHasBeenSet = true;
  }

  return *this;
}

JsonValue LogsConfig::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogsHasBeenSet)
  {
   payload.WithObject("cloudWatchLogs", m_cloudWatchLogs.Jsonize());

  }

  if(m_s3LogsHasBeenSet)
  {
   payload.WithObject("s3Logs", m_s3Logs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
