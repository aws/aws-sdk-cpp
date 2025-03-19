/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/SchedulerConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

SchedulerConfiguration::SchedulerConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SchedulerConfiguration& SchedulerConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("queueTimeoutMinutes"))
  {
    m_queueTimeoutMinutes = jsonValue.GetInteger("queueTimeoutMinutes");
    m_queueTimeoutMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxConcurrentRuns"))
  {
    m_maxConcurrentRuns = jsonValue.GetInteger("maxConcurrentRuns");
    m_maxConcurrentRunsHasBeenSet = true;
  }
  return *this;
}

JsonValue SchedulerConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_queueTimeoutMinutesHasBeenSet)
  {
   payload.WithInteger("queueTimeoutMinutes", m_queueTimeoutMinutes);

  }

  if(m_maxConcurrentRunsHasBeenSet)
  {
   payload.WithInteger("maxConcurrentRuns", m_maxConcurrentRuns);

  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
