/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCodeBuildProjectLogsConfigDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsCodeBuildProjectLogsConfigDetails::AwsCodeBuildProjectLogsConfigDetails() : 
    m_cloudWatchLogsHasBeenSet(false),
    m_s3LogsHasBeenSet(false)
{
}

AwsCodeBuildProjectLogsConfigDetails::AwsCodeBuildProjectLogsConfigDetails(JsonView jsonValue) : 
    m_cloudWatchLogsHasBeenSet(false),
    m_s3LogsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCodeBuildProjectLogsConfigDetails& AwsCodeBuildProjectLogsConfigDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudWatchLogs"))
  {
    m_cloudWatchLogs = jsonValue.GetObject("CloudWatchLogs");

    m_cloudWatchLogsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Logs"))
  {
    m_s3Logs = jsonValue.GetObject("S3Logs");

    m_s3LogsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCodeBuildProjectLogsConfigDetails::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogsHasBeenSet)
  {
   payload.WithObject("CloudWatchLogs", m_cloudWatchLogs.Jsonize());

  }

  if(m_s3LogsHasBeenSet)
  {
   payload.WithObject("S3Logs", m_s3Logs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
