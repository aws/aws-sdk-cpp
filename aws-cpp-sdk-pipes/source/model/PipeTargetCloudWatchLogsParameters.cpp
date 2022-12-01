/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/PipeTargetCloudWatchLogsParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

PipeTargetCloudWatchLogsParameters::PipeTargetCloudWatchLogsParameters() : 
    m_logStreamNameHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

PipeTargetCloudWatchLogsParameters::PipeTargetCloudWatchLogsParameters(JsonView jsonValue) : 
    m_logStreamNameHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
  *this = jsonValue;
}

PipeTargetCloudWatchLogsParameters& PipeTargetCloudWatchLogsParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogStreamName"))
  {
    m_logStreamName = jsonValue.GetString("LogStreamName");

    m_logStreamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetString("Timestamp");

    m_timestampHasBeenSet = true;
  }

  return *this;
}

JsonValue PipeTargetCloudWatchLogsParameters::Jsonize() const
{
  JsonValue payload;

  if(m_logStreamNameHasBeenSet)
  {
   payload.WithString("LogStreamName", m_logStreamName);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithString("Timestamp", m_timestamp);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
