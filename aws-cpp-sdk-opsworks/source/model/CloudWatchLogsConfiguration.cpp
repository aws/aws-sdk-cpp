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

#include <aws/opsworks/model/CloudWatchLogsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

CloudWatchLogsConfiguration::CloudWatchLogsConfiguration() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_logStreamsHasBeenSet(false)
{
}

CloudWatchLogsConfiguration::CloudWatchLogsConfiguration(const JsonValue& jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_logStreamsHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchLogsConfiguration& CloudWatchLogsConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogStreams"))
  {
    Array<JsonValue> logStreamsJsonList = jsonValue.GetArray("LogStreams");
    for(unsigned logStreamsIndex = 0; logStreamsIndex < logStreamsJsonList.GetLength(); ++logStreamsIndex)
    {
      m_logStreams.push_back(logStreamsJsonList[logStreamsIndex].AsObject());
    }
    m_logStreamsHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchLogsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_logStreamsHasBeenSet)
  {
   Array<JsonValue> logStreamsJsonList(m_logStreams.size());
   for(unsigned logStreamsIndex = 0; logStreamsIndex < logStreamsJsonList.GetLength(); ++logStreamsIndex)
   {
     logStreamsJsonList[logStreamsIndex].AsObject(m_logStreams[logStreamsIndex].Jsonize());
   }
   payload.WithArray("LogStreams", std::move(logStreamsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws