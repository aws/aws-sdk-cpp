/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails.h>
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

AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails::AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails() : 
    m_groupNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_streamNameHasBeenSet(false)
{
}

AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails::AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails(JsonView jsonValue) : 
    m_groupNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_streamNameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails& AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupName"))
  {
    m_groupName = jsonValue.GetString("GroupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamName"))
  {
    m_streamName = jsonValue.GetString("StreamName");

    m_streamNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("StreamName", m_streamName);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
