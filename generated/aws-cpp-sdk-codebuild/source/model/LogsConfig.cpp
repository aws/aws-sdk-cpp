/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
