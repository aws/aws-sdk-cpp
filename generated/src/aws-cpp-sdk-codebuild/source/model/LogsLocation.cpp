/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/LogsLocation.h>
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

LogsLocation::LogsLocation() : 
    m_groupNameHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_deepLinkHasBeenSet(false),
    m_s3DeepLinkHasBeenSet(false),
    m_cloudWatchLogsArnHasBeenSet(false),
    m_s3LogsArnHasBeenSet(false),
    m_cloudWatchLogsHasBeenSet(false),
    m_s3LogsHasBeenSet(false)
{
}

LogsLocation::LogsLocation(JsonView jsonValue) : 
    m_groupNameHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_deepLinkHasBeenSet(false),
    m_s3DeepLinkHasBeenSet(false),
    m_cloudWatchLogsArnHasBeenSet(false),
    m_s3LogsArnHasBeenSet(false),
    m_cloudWatchLogsHasBeenSet(false),
    m_s3LogsHasBeenSet(false)
{
  *this = jsonValue;
}

LogsLocation& LogsLocation::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("deepLink"))
  {
    m_deepLink = jsonValue.GetString("deepLink");

    m_deepLinkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3DeepLink"))
  {
    m_s3DeepLink = jsonValue.GetString("s3DeepLink");

    m_s3DeepLinkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cloudWatchLogsArn"))
  {
    m_cloudWatchLogsArn = jsonValue.GetString("cloudWatchLogsArn");

    m_cloudWatchLogsArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3LogsArn"))
  {
    m_s3LogsArn = jsonValue.GetString("s3LogsArn");

    m_s3LogsArnHasBeenSet = true;
  }

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

JsonValue LogsLocation::Jsonize() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("groupName", m_groupName);

  }

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("streamName", m_streamName);

  }

  if(m_deepLinkHasBeenSet)
  {
   payload.WithString("deepLink", m_deepLink);

  }

  if(m_s3DeepLinkHasBeenSet)
  {
   payload.WithString("s3DeepLink", m_s3DeepLink);

  }

  if(m_cloudWatchLogsArnHasBeenSet)
  {
   payload.WithString("cloudWatchLogsArn", m_cloudWatchLogsArn);

  }

  if(m_s3LogsArnHasBeenSet)
  {
   payload.WithString("s3LogsArn", m_s3LogsArn);

  }

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
