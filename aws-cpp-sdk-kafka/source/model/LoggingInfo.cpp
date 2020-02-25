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

#include <aws/kafka/model/LoggingInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

LoggingInfo::LoggingInfo() : 
    m_brokerLogsHasBeenSet(false)
{
}

LoggingInfo::LoggingInfo(JsonView jsonValue) : 
    m_brokerLogsHasBeenSet(false)
{
  *this = jsonValue;
}

LoggingInfo& LoggingInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("brokerLogs"))
  {
    m_brokerLogs = jsonValue.GetObject("brokerLogs");

    m_brokerLogsHasBeenSet = true;
  }

  return *this;
}

JsonValue LoggingInfo::Jsonize() const
{
  JsonValue payload;

  if(m_brokerLogsHasBeenSet)
  {
   payload.WithObject("brokerLogs", m_brokerLogs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
